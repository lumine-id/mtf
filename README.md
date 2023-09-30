<h1 align="center"><b>Multiple Tools for Facebook (MTF)</b></h1>

<div align="center">
  <a href="https://github.com/lumine-id">
    <img alt="Python 3.10^" src="https://img.shields.io/badge/Python-3.10^-success.svg"/>
  </a>
  <a href="https://github.com/lumine-id">
    <img alt="Last Commit" src="https://img.shields.io/github/last-commit/lumine-id/mtf.svg"/>
  </a>
   <a href="https://github.com/lumine-id">
    <img alt="Repo Size" src="https://img.shields.io/github/repo-size/lumine-id/mtf.svg"/>
  </a>
  <a href="https://github.com/lumine-id">
    <img alt="Starts" src="https://img.shields.io/github/stars/lumine-id/mtf.svg"/>
  </a>
  <a href="https://github.com/lumine-id">
    <img alt="Forks" src="https://img.shields.io/github/forks/lumine-id/mtf.svg"/>
  </a>
</div>
<br>

Jika kamu menggunakan Termux Android silahkan download Termux dari link dibawah ini jangan dari <b>PlayStore</b>.

Link download Termux: [https://f-droid.org/repo/com.termux_118.apk](https://f-droid.org/repo/com.termux_118.apk)

## Pasang paket dan clone repository
```sh
pkg update -y
pkg upgrade -y
pkg install git clang curl libffi libsodium openssl
cd $HOME
git clone https://github.com/lumine-id/mtf
```

## Instalasi Python 3.10
Dikarenakan pada python 3.11 atau lebih tinggi belum mendukung cython maka anda harus menginstall python versi 3.10 atau dibawahnya
```sh
pkg install tur-repo
pkg uninstall python -y
pkg install python3.10
ln -s $PREFIX/bin/python3.10 $PREFIX/bin/python
```

## Masuk ke folder MTF
```sh
cd $HOME/mtf
```

## Setup
Jika kamu baru pertama pasang MTF silahkan jalankan perintah dibawah ini
```sh
python -m pip install --upgrade pip
python -m pip install -r requirements.txt
python setup.py
```
Tunggu sampe proses compile selesai, mungkin memerlukan waktu sedikit lama.

## Akhirnya
Sekarang tinggal jalanin perintah ini untuk menjalankan MTF
```sh
cd $HOME/mtf
./run
```
Dan selamat menggunakan 🤗

## Disclaimer
Kami tidak bertanggung jawab atas segala kerusakan yang disebabkan oleh alat Ini.

## Ada pertanyaan?
Kebingungan cara pasang Tools nya atau mungkin mengalami masalah? 🤔
Silahkan tanya mengenai masalahmu ke Pengembang!