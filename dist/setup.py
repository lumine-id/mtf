#!/usr/bin/python
"""
------------------------------------------------------
     Dilarang mengubah atau mengedit file ini
------------------------------------------------------
"""

import sys

if sys.version_info.major != 3:
    sys.exit("Maaf, script ini hanya mendukung versi python 3")
 
if sys.version_info.minor >= 11:
    sys.exit('''
Maaf, versi python %s.%s saat ini tidak mendukung
Silahkan downgrade versi python kamu

Baca cara pasang yang benar disini: https://github.com/lumine-id/mtf#instalasi-python-310
'''%(sys.version_info.major, sys.version_info.minor))

from distutils.core import Extension, setup
from Cython.Build import cythonize
from sysconfig import get_paths
from rich.console import Console

import subprocess
import hashlib
import pathlib
import pickle
import glob
import os
import re

db = {}
checksum_files = ".compile-cache"
main_files = "src/run.cpp"
include = get_paths()["include"]

if os.path.isfile(checksum_files):
    try:
        db = pickle.load(open(checksum_files, "rb"))
    except: os.remove(checksum_files)

if not isinstance(db, dict):
    db = {}

def check_sum(path: str) -> bool:
    if sys.argv[1:2] == ["--force"]:
        return True

    checksum = hashlib.md5(open(path, "r", encoding="utf-8").read().encode("utf-8"))
    checksum = checksum.hexdigest()
    return (db.get(path) != checksum)

def insert_sum(path: str) -> None:
    checksum = hashlib.md5(open(path, "r", encoding="utf-8").read().encode("utf-8"))
    checksum = checksum.hexdigest()
    db[path] = checksum
    pickle.dump(db, open(checksum_files, "wb"))
 
def compiled() -> None:
    all_files = {}
    for r, d, f in os.walk("src"):
        for file in glob.glob(r+"/*.cpp"):
            if os.path.isfile(file) and (file != main_files and check_sum(file)):
                path = "/".join(file.split("/")[:-1])
                if all_files.get(path):
                    all_files[path].append(file)
                else:
                    all_files[path] = [file]

    if len(all_files) == 0:
        return

    extensions = []
    for key, values in all_files.items():
        for file in values:
            output_dir = re.sub(r"^(src/)", "", key)
            name = os.path.join(output_dir, file.split("/").pop().split(".")[0])
            name = ".".join(name.split("/"))
            extensions.append(Extension(name=name, sources=[file]))
            if not os.path.isdir(output_dir):
                pathlib.Path(output_dir).mkdir(parents=True, exist_ok=True)
 
    # setup conf
    kwargs = {
        "name": "mtf",
        "ext_modules": cythonize(extensions),
        "script_args": ["build_ext", "--inplace", "--force", "-j 5"],
    }

    if sys.argv[1:2] == ["--hide-animate"] or sys.argv[2:3] == ["--hide-animate"]:
        setup(**kwargs)
    else:
        with Console().status("[bold green]Mengompilasi file MTF..", spinner="aesthetic"):
            setup(**kwargs)

    for key, values in all_files.items():
        for file in values:
            insert_sum(file)

compiled()

if check_sum(main_files):
    print("kompilasi file utama... harap tunggu sebentar.")
    filename = re.sub(r"(\.cpp)$", "", main_files.split("/").pop())
    subprocess.check_call([
        "gcc",
        "-Os",
        "-I",
        include,
        "-o",
        filename,
        main_files,
        "-l{py}".format(py=include.split("/").pop()),
        "-lpthread",
        "-lm",
        "-lutil",
        "-ldl"
    ])
    stat = os.stat(filename)
    os.chmod(filename, stat.st_mode | 0o777)
    insert_sum(main_files)
    print("done")
