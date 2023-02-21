 

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

#define __PYX_HAVE__config____init__
#define __PYX_HAVE_API__config____init__
 
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
  "mtf/config/__init__.py",
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

 
#if CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_DelAttrStr(o,n) __Pyx_PyObject_SetAttrStr(o, n, NULL)
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value);
#else
#define __Pyx_PyObject_DelAttrStr(o,n)   PyObject_DelAttr(o,n)
#define __Pyx_PyObject_SetAttrStr(o,n,v) PyObject_SetAttr(o,n,v)
#endif

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);

 
static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

 
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(
        PyObject* obj, Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
        int has_cstart, int has_cstop, int wraparound);

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_PEP489_MULTI_PHASE_INIT
static int __Pyx_SetPackagePathFromImportLib(PyObject *module_name);
#else
#define __Pyx_SetPackagePathFromImportLib(a) 0
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? _PyDict_SetItem_KnownHash(ns, name, value, ((PyASCIIObject *) name)->hash) : PyObject_SetItem(ns, name, value))
#elif CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? PyDict_SetItem(ns, name, value) : PyObject_SetItem(ns, name, value))
#else
#define __Pyx_SetNameInClass(ns, name, value)  PyObject_SetItem(ns, name, value)
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

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key);
#define __Pyx_PyObject_Dict_GetItem(obj, name)\
    (likely(PyDict_CheckExact(obj)) ?\
     __Pyx_PyDict_GetItem(obj, name) : PyObject_GetItem(obj, name))
#else
#define __Pyx_PyDict_GetItem(d, key) PyObject_GetItem(d, key)
#define __Pyx_PyObject_Dict_GetItem(obj, name)  PyObject_GetItem(obj, name)
#endif

 
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases);

 
static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name, PyObject *qualname,
                                           PyObject *mkw, PyObject *modname, PyObject *doc);
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases, PyObject *dict,
                                      PyObject *mkw, int calculate_metaclass, int allow_py2_metaclass);

 
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

 
#if defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);

 
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);

 
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);

 
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

 
static int __Pyx_check_binary_version(void);

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);


 
#define __Pyx_MODULE_NAME "config.__init__"
extern int __pyx_module_is_main_config____init__;
int __pyx_module_is_main_config____init__ = 0;

 
static const char __pyx_k_[] = "/";
static const char __pyx_k_0[] = "?0";
static const char __pyx_k_1[] = "1";
static const char __pyx_k_t[] = "t";
static const char __pyx_k_y[] = "y";
static const char __pyx_k_FB[] = "FB";
static const char __pyx_k_IG[] = "IG";
static const char __pyx_k_IP[] = "IP";
static const char __pyx_k_fb[] = "fb";
static const char __pyx_k_ig[] = "ig";
static const char __pyx_k_os[] = "os";
static const char __pyx_k_0_2[] = "0";
static const char __pyx_k_1_2[] = "?1";
static const char __pyx_k_2_8[] = "2.8";
static const char __pyx_k_app[] = "app";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_now[] = "now";
static const char __pyx_k_red[] = "red";
static const char __pyx_k_sys[] = "sys";
static const char __pyx_k_tmp[] = ".tmp";
static const char __pyx_k_web[] = "web";
static const char __pyx_k_Path[] = "Path";
static const char __pyx_k_bold[] = "bold";
static const char __pyx_k_copy[] = "copy";
static const char __pyx_k_dots[] = "dots";
static const char __pyx_k_init[] = "init";
static const char __pyx_k_join[] = "join";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_mode[] = "mode";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_path[] = "path";
static const char __pyx_k_red1[] = "red1";
static const char __pyx_k_red3[] = "red3";
static const char __pyx_k_rich[] = "rich";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_Files[] = "Files";
static const char __pyx_k_Panel[] = "Panel";
static const char __pyx_k_Style[] = "Style";
static const char __pyx_k_black[] = "black";
static const char __pyx_k_color[] = "color";
static const char __pyx_k_en_us[] = "en-us";
static const char __pyx_k_gold1[] = "gold1";
static const char __pyx_k_green[] = "green";
static const char __pyx_k_grey0[] = "grey0";
static const char __pyx_k_grey3[] = "grey3";
static const char __pyx_k_grey7[] = "grey7";
static const char __pyx_k_hi_in[] = "hi-in";
static const char __pyx_k_id_id[] = "id-id";
static const char __pyx_k_isdir[] = "isdir";
static const char __pyx_k_ja_jp[] = "ja-jp";
static const char __pyx_k_mkdir[] = "mkdir";
static const char __pyx_k_ms_my[] = "ms-my";
static const char __pyx_k_quiet[] = "quiet";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_style[] = "style";
static const char __pyx_k_theme[] = "theme";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_utils[] = "utils";
static const char __pyx_k_vi_vn[] = "vi-vn";
static const char __pyx_k_white[] = "white";
static const char __pyx_k_EAAciL[] = "\"(EAAciL.*?)\"";
static const char __pyx_k_Prompt[] = "Prompt";
static const char __pyx_k_base64[] = "base64";
static const char __pyx_k_config[] = "config";
static const char __pyx_k_decode[] = "decode";
static const char __pyx_k_grey11[] = "grey11";
static const char __pyx_k_grey15[] = "grey15";
static const char __pyx_k_grey19[] = "grey19";
static const char __pyx_k_grey23[] = "grey23";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_prefix[] = "prefix";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_rmtree[] = "rmtree";
static const char __pyx_k_shutil[] = "shutil";
static const char __pyx_k_yellow[] = "yellow";
static const char __pyx_k_Android[] = "Android";
static const char __pyx_k_Confirm[] = "Confirm";
static const char __pyx_k_VERSION[] = "VERSION";
static const char __pyx_k_choices[] = "choices";
static const char __pyx_k_desktop[] = "desktop";
static const char __pyx_k_environ[] = "environ";
static const char __pyx_k_grey100[] = "grey100";
static const char __pyx_k_magenta[] = "magenta";
static const char __pyx_k_parents[] = "parents";
static const char __pyx_k_pathlib[] = "pathlib";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_randint[] = "randint";
static const char __pyx_k_yellow1[] = "yellow1";
static const char __pyx_k_yellow2[] = "yellow2";
static const char __pyx_k_AUTH_DIR[] = "AUTH_DIR";
static const char __pyx_k_bar_back[] = "bar.back";
static const char __pyx_k_bold_red[] = "bold red";
static const char __pyx_k_dark_red[] = "dark_red";
static const char __pyx_k_datetime[] = "datetime";
static const char __pyx_k_document[] = "document";
static const char __pyx_k_exist_ok[] = "exist_ok";
static const char __pyx_k_navigate[] = "navigate";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_IntPrompt[] = "IntPrompt";
static const char __pyx_k_b64decode[] = "b64decode";
static const char __pyx_k_bar_pulse[] = "bar.pulse";
static const char __pyx_k_max_age_0[] = "max-age=0";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_timestamp[] = "timestamp";
static const char __pyx_k_x_asbd_id[] = "x-asbd-id";
static const char __pyx_k_AUTH_FILES[] = "AUTH_FILES";
static const char __pyx_k_START_TIME[] = "START_TIME";
static const char __pyx_k_USER_AGENT[] = "USER_AGENT";
static const char __pyx_k_cross_site[] = "cross-site";
static const char __pyx_k_mtf_module[] = "mtf.module";
static const char __pyx_k_rich_panel[] = "rich.panel";
static const char __pyx_k_rich_style[] = "rich.style";
static const char __pyx_k_user_agent[] = "user-agent";
static const char __pyx_k_THEME_COLOR[] = "THEME_COLOR";
static const char __pyx_k_rich_prompt[] = "rich.prompt";
static const char __pyx_k_same_origin[] = "same-origin";
static const char __pyx_k_x_ig_app_id[] = "x-ig-app-id";
static const char __pyx_k_CONFIG_FILES[] = "CONFIG_FILES";
static const char __pyx_k_bar_complete[] = "bar.complete";
static const char __pyx_k_bar_finished[] = "bar.finished";
static const char __pyx_k_bright_white[] = "bright_white";
static const char __pyx_k_FB_USER_AGENT[] = "FB_USER_AGENT";
static const char __pyx_k_IG_USER_AGENT[] = "IG_USER_AGENT";
static const char __pyx_k_cache_control[] = "cache-control";
static const char __pyx_k_config___init[] = "config.__init__";
static const char __pyx_k_configuration[] = ".configuration";
static const char __pyx_k_object_except[] = "object_except";
static const char __pyx_k_DEFAULT_STYLES[] = "DEFAULT_STYLES";
static const char __pyx_k_TMP_COOKIE_DIR[] = "TMP_COOKIE_DIR";
static const char __pyx_k_deep_sky_blue2[] = "deep_sky_blue2";
static const char __pyx_k_prompt_choices[] = "prompt.choices";
static const char __pyx_k_rgb_114_156_31[] = "rgb(114,156,31)";
static const char __pyx_k_rgb_249_38_114[] = "rgb(249,38,114)";
static const char __pyx_k_sec_fetch_dest[] = "sec-fetch-dest";
static const char __pyx_k_sec_fetch_mode[] = "sec-fetch-mode";
static const char __pyx_k_sec_fetch_site[] = "sec-fetch-site";
static const char __pyx_k_sec_fetch_user[] = "sec-fetch-user";
static const char __pyx_k_x_ig_www_claim[] = "x-ig-www-claim";
static const char __pyx_k_ACCEPT_LANGUAGE[] = "ACCEPT_LANGUAGE";
static const char __pyx_k_CONSOLE_SPINNER[] = "CONSOLE_SPINNER";
static const char __pyx_k_LIST_USER_AGENT[] = "LIST_USER_AGENT";
static const char __pyx_k_REQUEST_HEADERS[] = "REQUEST_HEADERS";
static const char __pyx_k_accept_language[] = "accept-language";
static const char __pyx_k_1217981644879628[] = "1217981644879628";
static const char __pyx_k_ANSI_COLOR_NAMES[] = "ANSI_COLOR_NAMES";
static const char __pyx_k_PYTHONIOENCODING[] = "PYTHONIOENCODING";
static const char __pyx_k_progress_elapsed[] = "progress.elapsed";
static const char __pyx_k_sec_ch_ua_mobile[] = "sec-ch-ua-mobile";
static const char __pyx_k_DESKTOP_USER_AGENT[] = "DESKTOP_USER_AGENT";
static const char __pyx_k_GIT_PYTHON_REFRESH[] = "GIT_PYTHON_REFRESH";
static const char __pyx_k_IG_REQUEST_HEADERS[] = "IG_REQUEST_HEADERS";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_mtf_module_session[] = "mtf.module.session";
static const char __pyx_k_sec_ch_ua_platform[] = "sec-ch-ua-platform";
static const char __pyx_k_DEFAULT_THEME_COLOR[] = "DEFAULT_THEME_COLOR";
static const char __pyx_k_progress_percentage[] = "progress.percentage";
static const char __pyx_k_rich_default_styles[] = "rich.default_styles";
static const char __pyx_k_CP_DETECTOR_USER_AGENT[] = "CP_DETECTOR_USER_AGENT";
static const char __pyx_k_PATTERN_MATCH_FB_TOKEN[] = "PATTERN_MATCH_FB_TOKEN";
static const char __pyx_k_illegal_choice_message[] = "illegal_choice_message";
static const char __pyx_k_mtf_config___init___py[] = "mtf/config/__init__.py";
static const char __pyx_k_validate_error_message[] = "validate_error_message";
static const char __pyx_k_DESKTOP_REQUEST_HEADERS[] = "DESKTOP_REQUEST_HEADERS";
static const char __pyx_k_U2cuV2YpxWLoRXdh5yLulmY[] = "=U2cuV2YpxWLoRXdh5yLulmY";
static const char __pyx_k_upgrade_insecure_requests[] = "upgrade-insecure-requests";
static const char __pyx_k_smirking_face_Silakan_Masukkan[] = ":smirking_face: Silakan Masukkan Y\\[a] atau T\\[idak]";
static const char __pyx_k_FBAN_FB4A_FBAV_222_0_0_48_113_F[] = "[FBAN/FB4A;FBAV/222.0.0.48.113;FBBV/155323366;FBDM/{density=2.0,width=720,height=1360};FBLC/sr_RS;FBRV/156625696;FBCR/mt:s;FBMF/HUAWEI;FBBD/HUAWEI;FBPN/com.facebook.katana;FBDV/LDN-L21;FBSV/8.0.0;FBOP/19;FBCA/armeabi-v7a:armeabi;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_SM[] = "Mozilla/5.0 (Linux; Android 10; SM-G960U Build/QP1A.190711.020; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/84.0.4147.125 Mobile Safari/537.36 Instagram 156.0.0.26.109 Android (29/10; 720dpi; 1440x2744; samsung; SM-G960U; starqltesq; qcom; en_US; 240726484)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_0_4[] = "Mozilla/5.0 (Linux; Android 4.0.4; GT-S7562 Build/IMM76I) AppleWebKit/537.31 (KHTML, like Gecko) Chrome/26.0.1410.58 Mobile Safari/537.31";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_1[] = "Mozilla/5.0 (Linux; Android 4.1.1; SAMSUNG-SGH-I747 Build/JRO03L) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2[] = "Mozilla/5.0 (Linux; Android 4.1.2; C5215 Build/JZO54K) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_2_1[] = "Mozilla/5.0 (Linux; Android 4.2.1; en-us; Nexus 5 Build/JOP40D) AppleWebKit/535.19 (KHTML, like Gecko; googleweblight) Chrome/38.0.1025.166 Mobile Safari/535.19";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_2_2[] = "Mozilla/5.0 (Linux; Android 4.2.2; Lenovo A850+ Build/JDQ39) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2[] = "Mozilla/5.0 (Linux; Android 4.4.2; 0PCV1 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4[] = "Mozilla/5.0 (Linux; Android 4.4.4; D5103 Build/18.1.A.2.25) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.83 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_1[] = "Mozilla/5.0 (Linux; Android 5.0.1; LG-D850 Build/LRX21Y) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2[] = "Mozilla/5.0 (Linux; Android 5.0.2; C6802 Build/14.5.A.0.270; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1[] = "Mozilla/5.0 (Linux; Android 5.1.1; C2004 Build/LMY48G; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.117 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_1[] = "Mozilla/5.0 (Linux; Android 6.0.1; SM-G532MT Build/MMB29T; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/55.0.2883.91 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/171.0.0.49.92;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_U[] = "Mozilla/5.0 (Linux; Android 6.0; U FEEL LITE Build/MRA58K; wv) AppleWebKit/537.36 (KHTML, likeGecko) Version/4.0 Chrome/58.0.3029.83 Mobile Safari/537.36[FB_IAB/FB4A;FBAV/151.0.0.44.205;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_1_1[] = "Mozilla/5.0 (Linux; Android 7.1.1; ASUS_X00ID Build/NMF26F) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.100 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_8_0_0[] = "Mozilla/5.0 (Linux; Android 8.0.0; Moto Z2 Play Build/OPSS27.76-12-25-3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/67.0.3396.87 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_8_1_0[] = "Mozilla/5.0 (Linux; Android 8.1.0; CPH1909 Build/O11019) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.100 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_9_JKM[] = "Mozilla/5.0 (Linux; Android 9; JKM-LX3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.82 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_0[] = "Mozilla/5.0 (Linux; U; Android 2.0.1; en-us; Droid Build/ESD56) AppleWebKit/530.17 (KHTML, like Gecko) Version/4.0 Mobile Safari/530.17";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_1[] = "Mozilla/5.0 (Linux; U; Android 2.1-update1; en-us; SGH-T959 Build/ECLAIR) AppleWebKit/530.17 (KHTML, like Gecko) Version/4.0 Mobile Safari/530.17";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_2[] = "Mozilla/5.0 (Linux; U; Android 2.2.1; en-us; LG-P505R Build/FRG83) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3[] = "Mozilla/5.0 (Linux; U; Android 2.3.3; en-us; HTC Desire Build/FRF91) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_0[] = "Mozilla/5.0 (Linux; U; Android 4.0.2; en-us; Galaxy Nexus Build/ICL53F) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1[] = "Mozilla/5.0 (Linux; U; Android 4.1.1; en-us; SGH-I747M Build/JRO03L) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2[] = "Mozilla/5.0 (Linux; U; Android 4.2.1; en-us; Galaxy Nexus Build/JOP40D) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; GT-I9300 Build/JSS15J) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; 2013023 Build/HM2013023) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 UCBrowser/10.6.2.599 U3/0.8.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_5_0[] = "Mozilla/5.0 (Linux; U; Android 5.0.2; en-us; Mi 4i Build/LRX22G) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/39.0.0.0 Mobile Safari/537.36 XiaoMi/MiuiBrowser/2.1.1";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv[] = "Mozilla/5.0 (X11; Linux x86_64; rv:31.0) Gecko/20100101 Firefox/31.0";
static const char __pyx_k_en_US_en_q_0_9_en_US_q_0_8_en_q[] = "en-US,en;q=0.9,en-US;q=0.8,en;q=0.7";
static const char __pyx_k_hi_IN_id_q_0_9_en_US_q_0_8_en_q[] = "hi-IN,id;q=0.9,en-US;q=0.8,en;q=0.7";
static const char __pyx_k_id_ID_id_q_0_9_en_US_q_0_8_en_q[] = "id-ID,id;q=0.9,en-US;q=0.8,en;q=0.7";
static const char __pyx_k_ja_JP_en_q_0_9_en_US_q_0_8_en_q[] = "ja-JP,en;q=0.9,en-US;q=0.8,en;q=0.7";
static const char __pyx_k_ms_MY_id_q_0_9_en_US_q_0_8_en_q[] = "ms-MY,id;q=0.9,en-US;q=0.8,en;q=0.7";
static const char __pyx_k_smirking_face_Silakan_pilih_sal[] = ":smirking_face: Silakan pilih salah satu opsi yang tersedia";
static const char __pyx_k_vi_VN_id_q_0_9_en_US_q_0_8_en_q[] = "vi-VN,id;q=0.9,en-US;q=0.8,en;q=0.7";
static const char __pyx_k_Dalvik_1_6_0_Linux_U_Android_4_4[] = "Dalvik/1.6.0 (Linux; U; Android 4.4.2; NX55 Build/KOT5506) [FBAN/FB4A;FBAV/106.0.0.26.68;FBBV/45904160;FBDM/{density=3.0,width=1080,height=1920};FBLC/it_IT;FBRV/45904160;FBCR/PosteMobile;FBMF/asus;FBBD/asus;FBPN/com.facebook.katana;FBDV/ASUS_Z00AD;FBSV/5.0;FBOP/1;FBCA/x86:armeabi-v7a;]";
static const char __pyx_k_Dalvik_2_1_0_Linux_U_Android_5_1[] = "Dalvik/2.1.0 (Linux; U; Android 5.1.1; F1 Build/LMY47V) [FBAN/FB4A;FBAV/43.0.0.29.147;FBPN/com.facebook.katana;FBLC/en_GB;FBBV/14274161;FBCR/Tele2 LT;FBMF/Oppo;FBBD/Oppo;FBDV/F1;FBSV/5.0;FBCA/armeabi-v7a:armeabi;FBDM/{density=3.0,width=720,height=1280};FB_FW/1;]";
static const char __pyx_k_Dalvik_2_1_0_Linux_U_Android_8_0[] = "Dalvik/2.1.0 (Linux; U; Android 8.0.0; SM-A720F Build/R16NW) [FBAN/Orca-Android;FBAV/196.0.0.29.99;FBPN/com.facebook.orca;FBLC/th_TH;FBBV/135374479;FBCR/AIS;FBMF/samsung;FBBD/samsung;FBDV/SM-A720F;FBSV/8.0.0;FBCA/armeabi-v7a:armeabi;FBDM/{density=3.0,width=1080,height=1920};FB_FW/1;]";
static const char __pyx_k_Dalvik_2_1_0_Linux_U_Android_9_I[] = "Dalvik/2.1.0 (Linux; U; Android 9; INE-LX1r Build/HUAWEIINE-LX1r) [FBAN/Orca-Android;FBAV/212.1.0.13.109;FBPN/com.facebook.orca;FBLC/en_US;FBBV/151534286;FBCR/;FBMF/HUAWEI;FBBD/HUAWEI;FBDV/INE-LX1r;FBSV/9;FBCA/armeabi-v7a:armeabi;FBDM/{density=3.0,width=1080,height=2128};FB_FW/1;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_LYA[] = "Mozilla/5.0 (Linux; Android 10; LYA-L29) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.104 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_POT[] = "Mozilla/5.0 (Linux; Android 10; POT-LX1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.104 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_VOG[] = "Mozilla/5.0 (Linux; Android 10; VOG-L29) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.106 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_mot[] = "Mozilla/5.0 (Linux; Android 10; motorola one fusion) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.82 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_11_AC2[] = "Mozilla/5.0 (Linux; Android 11; AC2003) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.104 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_3_GT[] = "Mozilla/5.0 (Linux; Android 4.3; GT-I9300 Build/JSS15J) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_3_LT[] = "Mozilla/5.0 (Linux; Android 4.3; LT30p Build/9.2.A.1.199) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.93 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_Ne[] = "Mozilla/5.0 (Linux; Android 4.4; Nexus 5 Build/BuildID) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS[] = "Mozilla/5.0 (Linux; Android 5.0; ASUS_T00G Build/LRX21V) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.128 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_Le[] = "Mozilla/5.0 (Linux; Android 5.0; Lenovo K50a40 Build/LRX21M) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_SA[] = "Mozilla/5.0 (Linux; Android 5.0; SAMSUNG-SM-G900A Build/LRX21T; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.117 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_SM[] = "Mozilla/5.0 (Linux; Android 5.0; SM-G900T Build/LRX21T) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_A1[] = "Mozilla/5.0 (Linux; Android 5.1; A1601 Build/LMY47I) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/52.0.2743.98 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_An[] = "Mozilla/5.0 (Linux; Android 5.1; Android SDK built for x86 Build/LKY45) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/39.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG[] = "Mozilla/5.0 (Linux; Android 5.1; LG-F500S Build/LMY47D; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.90 Mobile Safari/537.36 NAVER(inapp; search; 380; 6.3.3)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_XT[] = "Mozilla/5.0 (Linux; Android 5.1; XT1025 Build/LPC23.13-34.5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/42.0.2311.108 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_AL[] = "Mozilla/5.0 (Linux; Android 6.0; ALE-L21 Build/HuaweiALE-L21) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.111 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_BG[] = "Mozilla/5.0 (Linux; Android 6.0; BGO-DL09 Build/HuaweiBAGGIO; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/63.0.3239.111 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/154.0.0.33.385;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_HU[] = "Mozilla/5.0 (Linux; Android 6.0; HUAWEI VNS-L21 Build/HUAWEIVNS-L21; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/63.0.3239.83 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/153.0.0.54.88;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_MY[] = "Mozilla/5.0 (Linux; Android 6.0; MYA-L22 Build/HUAWEIMYA-L22) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/62.0.3202.84 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_ST[] = "Mozilla/5.0 (Linux; Android 6.0; STARTRAIL 8 Build/MRA58K; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/58.0.3029.83 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/160.0.0.30.94;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_FR[] = "Mozilla/5.0 (Linux; Android 7.0; FRD-AL00 Build/HUAWEIFRD-AL00; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/53.0.2785.49 Mobile MQQBrowser/6.2 TBS/043602 Safari/537.36 MicroMessenger/6.5.16.1120 NetType/WIFI Language/zh_CN";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_In[] = "Mozilla/5.0 (Linux; Android 7.0; Infinix NOTE 3 Pro Build/NRD90M) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/60.0.3112.116 Mobile Safari/537.36 OPR/44.1.2246.123029";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_LG[] = "Mozilla/5.0 (Linux; Android 7.0; LG-H960 Build/NRD90U; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/65.0.3325.109 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/166.0.0.66.95;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_Mo[] = "Mozilla/5.0 (Linux; Android 7.0; Moto G (4) Build/NPJS25.93-14-15) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/66.0.3359.126 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_PR[] = "Mozilla/5.0 (Linux; Android 7.0; PRA-LX1 Build/HUAWEIPRA-LX1; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/61.0.3163.98 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/154.0.0.33.385;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_SL[] = "Mozilla/5.0 (Linux; Android 7.0; SLA-L02 Build/HUAWEISLA-L02; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/64.0.3282.137 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/166.0.0.66.95;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM[] = "Mozilla/5.0 (Linux; Android 7.0; SM-J730F Build/NRD90M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/61.0.3163.98 Mobile Safari/537.36 [FB_IAB/Orca-Android;FBAV/142.0.0.18.63;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_TR[] = "Mozilla/5.0 (Linux; Android 7.0; TRT-LX2 Build/HUAWEITRT-LX2; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/59.0.3071.125 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_9_Andr[] = "Mozilla/5.0 (Linux; Android 9; Android SDK built for x86) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.120 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_9_LM_Q[] = "Mozilla/5.0 (Linux; Android 9; LM-Q720) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.132 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_9_LM_X[] = "Mozilla/5.0 (Linux; Android 9; LM-X420) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.116 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_9_SM_G[] = "Mozilla/5.0 (Linux; Android 9; SM-G960U Build/PPR1.180610.011; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/85.0.4183.81 Mobile Safari/537.36 Instagram 156.0.0.26.109 Android (28/9; 480dpi; 1080x2076; samsung; SM-G960U; starqltesq; qcom; id_ID; 240726484)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_9_cp37[] = "Mozilla/5.0 (Linux; Android 9; cp3705A) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.136 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6[] = "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.169 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64[] = "Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.85 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Windows_NT_6_1_Win64[] = "Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/109.0.0.0 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Windows_NT_6_3_Win64[] = "Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_CrOS_x86_64_7077[] = "Mozilla/5.0 (X11; CrOS x86_64 7077.111.0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.125 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/37.0.2062.94 Chrome/37.0.2062.94 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_U_e[] = "Mozilla/5.0 (X11; Linux x86_64; U; en-us) AppleWebKit/537.36 (KHTML, like Gecko) Silk/3.68 like Chrome/39.0.2171.93 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86[] = "Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:38.0) Gecko/20100101 Firefox/38.0";
static const char __pyx_k_SupportsFresco_1_Dalvik_2_1_0_Li[] = "SupportsFresco=1 Dalvik/2.1.0 (Linux; U; Android 6.0.1; SM-J210F Build/MMB29Q) Source/1 [FBAN/EMA;UNITY_PACKAGE/342;FBBV/107586706;FBAV/172.0.0.8.182;FBDV/SM-J210F;FBLC/en_US;FBOP/20]";
static const char __pyx_k_smirking_face_Silakan_Masukkan_2[] = ":smirking_face: Silakan Masukkan angka yang valid";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_SM_2[] = "Mozilla/5.0 (Linux; Android 10; SM-G960U Build/QP1A.190711.020; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/84.0.4147.125 Mobile Safari/537.36 Instagram 156.0.0.26.109 Android (29/10; 720dpi; 1440x2744; samsung; SM-G960U; starqltesq; qcom; id_ID; 240726484)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_0_4_2[] = "Mozilla/5.0 (Linux; Android 4.0.4; IdeaTabA2109A Build/IMM76D) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/42.0.2311.111 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_2[] = "Mozilla/5.0 (Linux; Android 4.1.2; GT-I9105P Build/JZO54K) AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.166 Mobile Safari/535.19";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_3[] = "Mozilla/5.0 (Linux; Android 4.1.2; HTC Sensation Build/JRO03C) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_4[] = "Mozilla/5.0 (Linux; Android 4.1.2; Nokia_X Build/JZO54K) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/30.0.1599.82 Mobile Safari/537.36 NokiaBrowser/1.2.0.12";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_5[] = "Mozilla/5.0 (Linux; Android 4.1.2; Panasonic T21 Build/JZO54K; en-us) AppleWebKit/537.36 (KHTML, like Gecko)  Chrome/30.0.1599.114 Mobile Safari/537.36 Puffin/4.3.0.1852AP";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_6[] = "Mozilla/5.0 (Linux; Android 4.1.2; Z740G Build/JZO54K) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_7[] = "Mozilla/5.0 (Linux; Android 4.1.2; Z796C Build/JZO54K) AppleWebKit/537.31 (KHTML, like Gecko) Chrome/26.0.1410.58 Mobile Safari/537.31";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_8[] = "Mozilla/5.0 (Linux; Android; 4.1.2; GT-I9100 Build/000000) AppleWebKit/537.22 (KHTML, like Gecko) Chrome/25.0.1234.12 Mobile Safari/537.22 OPR/14.0.123.123";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_2[] = "Mozilla/5.0 (Linux; Android 4.4.2; 7040N Build/KVT49L) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_3[] = "Mozilla/5.0 (Linux; Android 4.4.2; Android SDK built for x86 Build/KK) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_4[] = "Mozilla/5.0 (Linux; Android 4.4.2; C6730 Build/KVT49L) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_5[] = "Mozilla/5.0 (Linux; Android 4.4.2; GT-N7100 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_6[] = "Mozilla/5.0 (Linux; Android 4.4.2; LGLS740 Build/KOT49I.LS740ZV5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_7[] = "Mozilla/5.0 (Linux; Android 4.4.2; LGLS990 Build/KVT49L.LS990ZV6) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.93";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_8[] = "Mozilla/5.0 (Linux; Android 4.4.2; LGMS323 Build/KOT49I.MS32310c) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/30.0.1599.103 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_9[] = "Mozilla/5.0 (Linux; Android 4.4.2; LGMS323 Build/KOT49I.MS32310c) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_2[] = "Mozilla/5.0 (Linux; Android 4.4.4; SM-A700FD Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_3[] = "Mozilla/5.0 (Linux; Android 4.4.4; SM-A700FD Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/33.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_4[] = "Mozilla/5.0 (Linux; Android 4.4.4; SM-G360V Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_5[] = "Mozilla/5.0 (Linux; Android 4.4.4; SM-N910C Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/33.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_6[] = "Mozilla/5.0 (Linux; Android 4.4.4; W6S Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/33.0.0.0 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_7[] = "Mozilla/5.0 (Linux; Android 4.4.4; XT1022 Build/KXC21.5-40) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.93 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_8[] = "Mozilla/5.0 (Linux; Android 4.4.4; XT1031 Build/KXB21.14-L1.57) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_9[] = "Mozilla/5.0 (Linux; Android 4.4.4; XT1045 Build/KXB21.14-L1.63) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_1_2[] = "Mozilla/5.0 (Linux; Android 5.0.1; LG-H440n Build/LRX21Y) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/38.0.2125.102 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_1_3[] = "Mozilla/5.0 (Linux; Android 5.0.1; SM-N910T Build/LRX22C) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_2[] = "Mozilla/5.0 (Linux; Android 5.0.2; GT-I9082 Build/LRX22G) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/37.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_3[] = "Mozilla/5.0 (Linux; Android 5.0.2; LG-D802 Build/LRX22G) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.62 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_4[] = "Mozilla/5.0 (Linux; Android 5.0.2; SGH-T679 Build/LRX22G) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/37.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_5[] = "Mozilla/5.0 (Linux; Android 5.0.2; XT1032 Build/LXB22.99-36; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.90 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_6[] = "Mozilla/5.0 (Linux; Android 5.0.2; XT1068 Build/LXB22.46-28) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/41.0.2272.81 Mobile Safari/537.36 OPR/28.0.1764.90386";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_7[] = "Mozilla/5.0 (Linux; Android 5.0.2; SM-G530FZ Build/LRX22G; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/55.0.2883.91 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/143.0.0.32.90;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_8[] = "Mozilla/5.0 (Linux; Android 5.0.2; 7048X Build/LRX22G; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/63.0.3239.111 Mobile Safari/537.36 Instagram 37.0.0.21.97 Android (21/5.0.2; 320dpi; 720x1280; TCL; 7048X; alto5_sporty; qcom; pt_PT; 98288239)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_2[] = "Mozilla/5.0 (Linux; Android 5.1.1; D5803 Build/23.4.A.0.546) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_3[] = "Mozilla/5.0 (Linux; Android 5.1.1; GT-I9300 Build/LVY48E; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/45.0.2454.48 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_4[] = "Mozilla/5.0 (Linux; Android 5.1.1; LG-H345 Build/LMY47V) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.78 Mobile Safari/537.36 OPR/30.0.1856.93524";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_5[] = "Mozilla/5.0 (Linux; Android 5.1.1; LG-H345 Build/LMY47V) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_6[] = "Mozilla/5.0 (Linux; Android 5.1.1; LG-H345 Build/LMY47V) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/38.0.2125.102 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_7[] = "Mozilla/5.0 (Linux; Android 5.1.1; LGMS345 Build/LMY47V) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/38.0.2125.102 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_8[] = "Mozilla/5.0 (Linux; Android 5.1.1; Lenovo-A6020l36 Build/LMY47V) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.93 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_9[] = "Mozilla/5.0 (Linux; Android 5.1.1; Moto E Build/LMY48I; en-us) AppleWebKit/537.36 (KHTML, like Gecko)  Chrome/30.0.1599.114 Mobile Safari/537.36 Puffin/4.3.0.1852AP";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_2[] = "Mozilla/5.0 (Linux; Android 6.0.1; Redmi 4A Build/MMB29M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/60.0.3112.116 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_3[] = "Mozilla/5.0 (Linux; Android 6.0.1; Vodafone Smart ultra 6 Build/MMB29M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/55.0.2883.91 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/153.0.0.54.88;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_4[] = "Mozilla/5.0 (Linux; Android 6.0.1; ZUK Z2131 Build/MMB29M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/48.0.2564.106 Mobile Safari/537.36 Instagram 62.0.0.19.93 Android (23/6.0.1; 480dpi; 1080x1920; ZUK; ZUK Z2131; z2_plus; qcom; pt_BR; 123790722)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_5[] = "Mozilla/5.0 (Linux; Android 6.0.1; SM-G935T Build/MMB29M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/51.0.2704.81 Mobile Safari/537.36 Instagram 8.4.0 Android (23/6.0.1; 560dpi; 1440x2560; samsung; SM-G935T; hero2qltetmo; qcom; id_ID";
static const char __pyx_k_Mozilla_5_0_Linux_Android_6_0_U_2[] = "Mozilla/5.0 (Linux; Android 6.0; U FEEL LITE Build/MRA58K; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/58.0.3029.83 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/151.0.0.44.205;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_1_1_2[] = "Mozilla/5.0 (Linux; Android 7.1.1; Moto G Play Build/NPI26.48-43) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/67.0.3396.87 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_1_1_3[] = "Mozilla/5.0 (Linux; Android 7.1.1; Moto G Play) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/73.0.3683.90 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_8_0_0_2[] = "Mozilla/5.0 (Linux; Android 8.0.0; XT1635-02 Build/OPNS27.76-12-22-3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/68.0.3440.91 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_8_1_0_2[] = "Mozilla/5.0 (Linux; Android 8.1.0; LML212VL) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.93 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_8_1_0_3[] = "Mozilla/5.0 (Linux; Android 8.1.0; W_K300 Build/O11019; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/64.0.3282.137 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/179.0.0.44.83;]";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_1_2[] = "Mozilla/5.0 (Linux; U; Android 2.1-update1; en-us; GT-I9000 Build/ECLAIR) AppleWebKit/530.17 (KHTML, like Gecko) Version/4.0 Mobile Safari/530.17";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_2_2[] = "Mozilla/5.0 (Linux; U; Android 2.2; en-us; DROID2 GLOBAL Build/S273) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_2[] = "Mozilla/5.0 (Linux; U; Android 2.3.3; en-us; HTC Desire Build/GRI40) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_3[] = "Mozilla/5.0 (Linux; U; Android 2.3.3; en-us; HTC Pyramid Build/GRI40) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_4[] = "Mozilla/5.0 (Linux; U; Android 2.3.3; en-us; LG-LU3000 Build/GRI40) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_5[] = "Mozilla/5.0 (Linux; U; Android 2.3.4; en-us; HTC Desire Build/GRJ22) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_6[] = "Mozilla/5.0 (Linux; U; Android 2.3.4; en-us; HTC Sensation XE with Beats Audio Z715e Build/GRJ22)Maxthon AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_7[] = "Mozilla/5.0 (Linux; U; Android 2.3.5; en-us; GT-S5830 Build/GINGERBREAD) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_8[] = "Mozilla/5.0 (Linux; U; Android 2.3.5; en-us; HTC Vision Build/GRI40) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_9[] = "Mozilla/5.0 (Linux; U; Android 2.3.6; en-us; GT-S5690 Build/GINGERBREAD) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_2[] = "Mozilla/5.0 (Linux; U; Android 4.0.3; en-us; HTC Sensation Build/IML74K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_3[] = "Mozilla/5.0 (Linux; U; Android 4.0.3; en-us; LG-E610 Build/IML74K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_4[] = "Mozilla/5.0 (Linux; U; Android 4.0.4; en-us; SCH-S738C Build/IMM76D) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_5[] = "Mozilla/5.0 (Linux; U; Android 4.0.4; en-us; PAP5430 Build/IMM76D) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_6[] = "Mozilla/5.0 (Linux; U; Android 4.0; en-us; GT-I9300 Build/IMM76D) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_2[] = "Mozilla/5.0 (Linux; U; Android 4.1.1; en-us; SAMSUNG-SGH-I747 Build/JRO03L) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_3[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; GT-I8260 Build/JZO54K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_4[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; Panasonic T21 Build/JZO54K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 UCBrowser/10.6.2.599 U3/0.8.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_5[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; GT-I9100 Build/JZO54K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_6[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; DROID RAZR Build/9.8.2O-72_VZW-16-5) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_7[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; LG-LG870 Build/JZO54K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_8[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; Panasonic T21 Build/JZO54K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30 ACHEETAHI/2100501092";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_9[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; SAMSUNG-SGH-I547 Build/JZO54K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_2[] = "Mozilla/5.0 (Linux; U; Android 4.2.1; en-us; HUAWEI G700-U00 Build/HuaweiG700-U00) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_3[] = "Mozilla/5.0 (Linux; U; Android 4.2.2; en-us; BLU STUDIO 5.5 S Build/JDQ39) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_4[] = "Mozilla/5.0 (Linux; U; Android 4.2.2; en-us; MBX reference board (g18ref) Build/JDQ39) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_5[] = "Mozilla/5.0 (Linux; U; Android 4.2.2; en-us; Micromax A177 Build/MicromaxA177) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 UCBrowser/9.5.0.360 U3/0.8.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_6[] = "Mozilla/5.0 (Linux; U; Android 4.2.2; en-us; verykool S354 Build/JDQ39) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_7[] = "Mozilla/5.0 (Linux; U; Android 4.2.2; es-es; SP-6020 QUASAR Build/JDQ39) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30 MxBrowser/4.5.1.2000";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_8[] = "Mozilla/5.0 (Linux; U; Android 4.2.2; en-us; SM-G350 Build/JDQ39) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_2[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; ASUS_Z002 Build/JSS15Q) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 UCBrowser/10.2.0.535 U3/0.8.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_3[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; SGH-T999 Build/JSS15J) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_4[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; SGH-T999L Build/JSS15J) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_5[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; SGH-T999L Build/JSS15J) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30 [Pinterest/Android]";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_6[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; Z730 Build/JLS36C) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_7[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; SAMSUNG-SGH-I317 Build/JSS15J) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_8[] = "Mozilla/5.0 (Linux; U; Android 4.3; en-us; D2105 Build/20.0.B.0.74) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30 Instagram 37.0.0.21.97 Android (18/4.3; 240dpi; 480x744; Sony; D2105; D2105; qcom; id_ID; 98288237)";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_2[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; GT-N7100 Build/KOT49H) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_3[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; 0PCV1 Build/KOT49H) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_4[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; GT-I9505 Build/JDQ39) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_5[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; LGLS740 Build/KOT49I.LS740ZV5) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.1599.103 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_6[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; LGLS990 Build/KVT49L.LS990ZV6) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/34.0.1847.118 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_7[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; LGMS395 Build/KOT49I.MS39510d) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/34.0.1847.118 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_8[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; SCH-I535 Build/KOT49H) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_9[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; SPH-L710 Build/KOT49H) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_5_0_2[] = "Mozilla/5.0 (Linux; U; Android 5.0; en-us; SM-N900 Build/LRX21V) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 UCBrowser/10.6.2.599 U3/0.8.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_2[] = "Mozilla/5.0 (X11; Linux x86_64; rv:39.0) Gecko/20100101 Firefox/39.0";
static const char __pyx_k_Mozilla_5_0_Linux_Android_10_VOG_2[] = "Mozilla/5.0 (Linux; Android 10; VOG-L29) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.82 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_3_LT_2[] = "Mozilla/5.0 (Linux; Android 4.3; LT30p Build/9.2.A.1.199) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_10[] = "Mozilla/5.0 (Linux; Android 4.4.2; LGMS323 Build/KOT49I.MS32310c) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_11[] = "Mozilla/5.0 (Linux; Android 4.4.2; Lenovo A606 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.92 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_12[] = "Mozilla/5.0 (Linux; Android 4.4.2; N9515 Build/KVT49L) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_13[] = "Mozilla/5.0 (Linux; Android 4.4.2; Nexus 4 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_14[] = "Mozilla/5.0 (Linux; Android 4.4.2; Nexus 5 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_15[] = "Mozilla/5.0 (Linux; Android 4.4.2; NoxW Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_16[] = "Mozilla/5.0 (Linux; Android 4.4.2; PSP5505DUO Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_17[] = "Mozilla/5.0 (Linux; Android 4.4.2; SM-G900F Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_18[] = "Mozilla/5.0 (Linux; Android 4.4.2; XT907 Build/KDA20.62-15.1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/33.0.1750.136 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_19[] = "Mozilla/5.0 (Linux; Android 4.4.2; en-us; SAMSUNG GT-I9195 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Version/1.5 Chrome/28.0.1500.94 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_20[] = "Mozilla/5.0 (Linux; Android 4.4.2; en-us; SAMSUNG GT-I9301I Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Version/1.5 Chrome/28.0.1500.94 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_21[] = "Mozilla/5.0 (Linux; Android 4.4.2; en-us; SAMSUNG SM-G900T Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Version/1.6 Chrome/28.0.1500.94 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_22[] = "Mozilla/5.0 (Linux; Android 4.4.2; en-us; SAMSUNG SM-G900X Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Version/1.6 Chrome/28.0.1500.94 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_10[] = "Mozilla/5.0 (Linux; Android 4.4.4; XT1068 Build/KXB21.85-24) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.93 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_11[] = "Mozilla/5.0 (Linux; Android 4.4.4; XT1080 Build/SU6-7.2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_12[] = "Mozilla/5.0 (Linux; Android 4.4.4; Y635-L02 Build/HuaweiY635-L02) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_13[] = "Mozilla/5.0 (Linux; Android 4.4.4; Z970 Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_14[] = "Mozilla/5.0 (Linux; Android 4.4.4; en-us; SAMSUNG SGH-M919 Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/1.5 Chrome/28.0.1500.94 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_15[] = "Mozilla/5.0 (Linux; Android 4.4.4; en-us; SAMSUNG SM-N900P Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/1.5 Chrome/28.0.1500.94 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_16[] = "Mozilla/5.0 (Linux; Android 4.4.4; en-us; SAMSUNG SM-N910C Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/2.0 Chrome/34.0.1847.76 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_4_4_Ne_2[] = "Mozilla/5.0 (Linux; Android 4.4; Nexus 5 Build/_BuildID_) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/30.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_2[] = "Mozilla/5.0 (Linux; Android 5.0; ASUS_Z002 Build/LRX21V) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/37.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_3[] = "Mozilla/5.0 (Linux; Android 5.0; ASUS_Z008D Build/LRX21V) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.93 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_4[] = "Mozilla/5.0 (Linux; Android 5.0; ASUS_Z00AD Build/LRX21V) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_5[] = "Mozilla/5.0 (Linux; Android 5.0; ASUS_Z00AD Build/LRX21V) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/39.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_SA_2[] = "Mozilla/5.0 (Linux; Android 5.0; SAMSUNG-SM-N900A Build/LRX21V) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_0_SM_2[] = "Mozilla/5.0 (Linux; Android 5.0; SM-G900V Build/LRX21T) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_10[] = "Mozilla/5.0 (Linux; Android 5.1.1; Moto G Build/LMY48G) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/39.0.0.0 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_11[] = "Mozilla/5.0 (Linux; Android 5.1.1; Moto G Build/LMY48G; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.90 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_12[] = "Mozilla/5.0 (Linux; Android 5.1.1; NX505J Build/LMY48G) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/31.0.1650.59 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_13[] = "Mozilla/5.0 (Linux; Android 5.1.1; Nexus 4 Build/LMY48I) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_14[] = "Mozilla/5.0 (Linux; Android 5.1.1; Nexus 4 Build/LMY48I; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.117 Mobile Safari/537.36 MicroMessenger/6.2.4.51_rdf8da56.582 NetType/WIFI Language/es";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_15[] = "Mozilla/5.0 (Linux; Android 5.1.1; Nexus 5 Build/LMY48I) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_16[] = "Mozilla/5.0 (Linux; Android 5.1.1; Nexus 5 Build/LMY48I; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.117 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_17[] = "Mozilla/5.0 (Linux; Android 5.1.1; Nexus 5 Build/LMY48I; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/44.0.2403.90 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_18[] = "Mozilla/5.0 (Linux; Android 5.1.1; Nexus 6 Build/LMY48I) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_19[] = "Mozilla/5.0 (Linux; Android 5.1.1; SM-G920I Build/LMY47X) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_20[] = "Mozilla/5.0 (Linux; Android 5.1.1; SM-J120F Build/LMY47X; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/67.0.3396.87 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/180.0.0.35.82;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_21[] = "Mozilla/5.0 (Linux; Android 5.1.1; Lenovo A6020l36 Build/LMY47V; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/66.0.3359.158 Mobile Safari/537.36 Instagram 45.0.0.17.93 Android (22/5.1.1; 480dpi; 1080x1920; LENOVO/Lenovo; Lenovo A6020l36; A6020l36; qcom; pt_BR; 108357722)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_2[] = "Mozilla/5.0 (Linux; Android 5.1; LG-H815 Build/LMY47D) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_3[] = "Mozilla/5.0 (Linux; Android 5.1; LG-H815 Build/LMY47D) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/38.0.2125.102 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_4[] = "Mozilla/5.0 (Linux; Android 5.1; LGLS991 Build/LMY47D) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_5_1_XT_2[] = "Mozilla/5.0 (Linux; Android 5.1; XT1096 Build/LPE23.32-25-3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.133 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_2[] = "Mozilla/5.0 (Linux; Android 7.0; SM-A520F Build/NRD90M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/66.0.3359.126 Mobile Safari/537.36 [FB_IAB/FB4A;FBAV/178.0.0.57.86;]";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_3[] = "Mozilla/5.0 (Linux; Android 7.0; SM-A910F Build/NRD90M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/67.0.3396.87 Mobile Safari/537.36 Instagram 55.0.0.12.79 Android (24/7.0; 420dpi; 1080x1920; samsung; SM-A910F; a9xproltesea; qcom; pt_BR; 118342010)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_4[] = "Mozilla/5.0 (Linux; Android 7.0; SM-G935F Build/NRD90M; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/68.0.3440.91 Mobile Safari/537.36 Instagram 57.0.0.9.80 Android (24/7.0; 420dpi; 1080x1920; samsung; SM-G935F; hero2lte; samsungexynos8890; pt_BR; 119875229)";
static const char __pyx_k_Mozilla_5_0_Linux_Android_9_cp37_2[] = "Mozilla/5.0 (Linux; Android 9; cp3705A) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_10[] = "Mozilla/5.0 (Linux; U; Android 2.3.6; en-us; GT-S5830i Build/GINGERBREAD) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_11[] = "Mozilla/5.0 (Linux; U; Android 2.3.6; en-us; LG-L38C Build/GRK39F) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1 MMS/LG-Android-MMS-V1.0/1.2";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_12[] = "Mozilla/5.0 (Linux; U; Android 2.3.6; en-us; LGL35G/V100) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_13[] = "Mozilla/5.0 (Linux; U; Android 2.3.6; en-us; SGH-T679 Build/GINGERBREAD) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_14[] = "Mozilla/5.0 (Linux; U; Android 2.3.6; en-us; LG-E400 Build/GRK39F) AppleWebKit/533.1 (KHTML, like Gecko) Version/4.0 Mobile Safari/533.1 MMS/LG-Android-MMS-V1.2";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_10[] = "Mozilla/5.0 (Linux; U; Android 4.1.2; en-us; IM-A830S Build/JZO54K) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 \303\220i?n tho?iSafari/534.30 Instagram 9.4.5 Android (16/4.1.2; 320dpi; 720x1232; PANTECH/SKY; IM-A830S; ef46l; qcom; id_ID)";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_10[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; SPH-L900 Build/KOT49H) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_11[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; Z520 Build/KOT49H) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30;";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_12[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; en-us; SM705 Build/SANFRANCISCO) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_13[] = "Mozilla/5.0 (Linux; U; Android 4.4.4; en-us; D2212 Build/18.5.B.0.26) AppleWebKit/534.30 (KHTML, Like Gecko) Version/4.0 Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_14[] = "Mozilla/5.0 (Linux; U; Android 4.4.4; Nexus 5 Build/KTU84P) AppleWebkit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_15[] = "Mozilla/5.0 (Linux; U; Android 4.4.4; Nexus 5 Build/KTU84P) AppleWebkit/534.30 (KHTML, like Gecko) Version/5.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_16[] = "Mozilla/5.0 (Linux; U; Android 4.4.4; en-us; 2014817 Build/KTU84P) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/39.0.0.0 Mobile Safari/537.36 XiaoMi/MiuiBrowser/2.1.1";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_17[] = "Mozilla/5.0 (Linux; U; Android 4.4.4; en-us; GT-I9305 Build/KTU84P) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_18[] = "Mozilla/5.0 (Linux; U; Android 4.4.4; en-us; SM-G360H Build/KTU84P) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_19[] = "Mozilla/5.0 (Linux; U; Android 4.4; en-us; Nexus 4 Build/JOP24G) AppleWebKit/534.30 (KHTML, like Gecko) Version/4.0 Mobile Safari/534.30";
static const char __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_20[] = "Mozilla/5.0 (Linux; U; Android 4.4.2; LGMS395 Build/KOT49I.MS39510d) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/34.0.1847.118 Mobile Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6_2[] = "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/109.0.0.0 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6_3[] = "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/110.0.0.0 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64_2[] = "Mozilla/5.0 (Windows NT 6.1; WOW64; Trident/7.0; rv:11.0) like Gecko";
static const char __pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64_3[] = "Mozilla/5.0 (Windows NT 6.1; WOW64; rv:40.0) Gecko/20100101 Firefox/40.0";
static const char __pyx_k_Mozilla_5_0_Windows_NT_6_3_Win64_2[] = "Mozilla/5.0 (Windows NT 6.3; Win64; x64; Trident/7.0; Touch; LCJB; rv:11.0) like Gecko";
static const char __pyx_k_Mozilla_5_0_X11_CrOS_x86_64_7077_2[] = "Mozilla/5.0 (X11; CrOS x86_64 7077.95.0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.90 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_2[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/42.0.2311.90 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_3[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/534.24 (KHTML, like Gecko) Chrome/33.0.0.0 Safari/534.24";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_4[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/44.0.2403.89 Chrome/44.0.2403.89 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_5[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/534.34 (KHTML, like Gecko) Qt/4.8.1 Safari/534.34";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_6[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.134 Safari/537.36";
static PyObject *__pyx_kp_u_;
static PyObject *__pyx_kp_u_0;
static PyObject *__pyx_kp_u_0_2;
static PyObject *__pyx_kp_u_1;
static PyObject *__pyx_kp_u_1217981644879628;
static PyObject *__pyx_kp_u_1_2;
static PyObject *__pyx_kp_u_2_8;
static PyObject *__pyx_n_s_ACCEPT_LANGUAGE;
static PyObject *__pyx_n_s_ANSI_COLOR_NAMES;
static PyObject *__pyx_n_s_AUTH_DIR;
static PyObject *__pyx_n_s_AUTH_FILES;
static PyObject *__pyx_n_u_Android;
static PyObject *__pyx_n_s_CONFIG_FILES;
static PyObject *__pyx_n_s_CONSOLE_SPINNER;
static PyObject *__pyx_n_s_CP_DETECTOR_USER_AGENT;
static PyObject *__pyx_n_s_Confirm;
static PyObject *__pyx_n_s_DEFAULT_STYLES;
static PyObject *__pyx_n_s_DEFAULT_THEME_COLOR;
static PyObject *__pyx_n_s_DESKTOP_REQUEST_HEADERS;
static PyObject *__pyx_n_s_DESKTOP_USER_AGENT;
static PyObject *__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4;
static PyObject *__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1;
static PyObject *__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0;
static PyObject *__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I;
static PyObject *__pyx_kp_u_EAAciL;
static PyObject *__pyx_n_s_FB;
static PyObject *__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F;
static PyObject *__pyx_n_s_FB_USER_AGENT;
static PyObject *__pyx_n_s_Files;
static PyObject *__pyx_n_u_GIT_PYTHON_REFRESH;
static PyObject *__pyx_n_s_IG;
static PyObject *__pyx_n_s_IG_REQUEST_HEADERS;
static PyObject *__pyx_n_s_IG_USER_AGENT;
static PyObject *__pyx_n_s_IP;
static PyObject *__pyx_n_s_IntPrompt;
static PyObject *__pyx_n_s_LIST_USER_AGENT;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_Win64;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_U_e;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86;
static PyObject *__pyx_n_s_PATTERN_MATCH_FB_TOKEN;
static PyObject *__pyx_n_u_PYTHONIOENCODING;
static PyObject *__pyx_n_s_Panel;
static PyObject *__pyx_n_s_Path;
static PyObject *__pyx_n_s_Prompt;
static PyObject *__pyx_n_s_REQUEST_HEADERS;
static PyObject *__pyx_n_s_START_TIME;
static PyObject *__pyx_n_s_Style;
static PyObject *__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li;
static PyObject *__pyx_n_s_THEME_COLOR;
static PyObject *__pyx_n_s_TMP_COOKIE_DIR;
static PyObject *__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY;
static PyObject *__pyx_n_s_USER_AGENT;
static PyObject *__pyx_n_s_VERSION;
static PyObject *__pyx_kp_u_accept_language;
static PyObject *__pyx_n_s_app;
static PyObject *__pyx_n_s_b64decode;
static PyObject *__pyx_kp_u_bar_back;
static PyObject *__pyx_kp_u_bar_complete;
static PyObject *__pyx_kp_u_bar_finished;
static PyObject *__pyx_kp_u_bar_pulse;
static PyObject *__pyx_n_s_base64;
static PyObject *__pyx_n_u_black;
static PyObject *__pyx_n_s_bold;
static PyObject *__pyx_kp_u_bold_red;
static PyObject *__pyx_n_u_bright_white;
static PyObject *__pyx_kp_u_cache_control;
static PyObject *__pyx_n_s_choices;
static PyObject *__pyx_n_s_cline_in_traceback;
static PyObject *__pyx_n_s_color;
static PyObject *__pyx_n_s_config;
static PyObject *__pyx_n_s_config___init;
static PyObject *__pyx_kp_u_config___init;
static PyObject *__pyx_kp_u_configuration;
static PyObject *__pyx_n_s_copy;
static PyObject *__pyx_kp_u_cross_site;
static PyObject *__pyx_n_u_dark_red;
static PyObject *__pyx_n_s_datetime;
static PyObject *__pyx_n_s_decode;
static PyObject *__pyx_n_u_deep_sky_blue2;
static PyObject *__pyx_n_u_desktop;
static PyObject *__pyx_n_s_doc;
static PyObject *__pyx_n_u_document;
static PyObject *__pyx_n_u_dots;
static PyObject *__pyx_kp_u_en_US_en_q_0_9_en_US_q_0_8_en_q;
static PyObject *__pyx_kp_u_en_us;
static PyObject *__pyx_n_s_environ;
static PyObject *__pyx_n_s_exist_ok;
static PyObject *__pyx_n_u_fb;
static PyObject *__pyx_n_s_get;
static PyObject *__pyx_n_u_gold1;
static PyObject *__pyx_n_u_green;
static PyObject *__pyx_n_u_grey0;
static PyObject *__pyx_n_u_grey100;
static PyObject *__pyx_n_u_grey11;
static PyObject *__pyx_n_u_grey15;
static PyObject *__pyx_n_u_grey19;
static PyObject *__pyx_n_u_grey23;
static PyObject *__pyx_n_u_grey3;
static PyObject *__pyx_n_u_grey7;
static PyObject *__pyx_kp_u_hi_IN_id_q_0_9_en_US_q_0_8_en_q;
static PyObject *__pyx_kp_u_hi_in;
static PyObject *__pyx_kp_u_id_ID_id_q_0_9_en_US_q_0_8_en_q;
static PyObject *__pyx_kp_u_id_id;
static PyObject *__pyx_n_u_ig;
static PyObject *__pyx_n_s_illegal_choice_message;
static PyObject *__pyx_n_s_import;
static PyObject *__pyx_n_s_init;
static PyObject *__pyx_n_s_isdir;
static PyObject *__pyx_kp_u_ja_JP_en_q_0_9_en_US_q_0_8_en_q;
static PyObject *__pyx_kp_u_ja_jp;
static PyObject *__pyx_n_s_join;
static PyObject *__pyx_n_u_magenta;
static PyObject *__pyx_n_s_main;
static PyObject *__pyx_kp_u_max_age_0;
static PyObject *__pyx_n_s_metaclass;
static PyObject *__pyx_n_s_mkdir;
static PyObject *__pyx_n_s_mode;
static PyObject *__pyx_n_s_module;
static PyObject *__pyx_kp_u_ms_MY_id_q_0_9_en_US_q_0_8_en_q;
static PyObject *__pyx_kp_u_ms_my;
static PyObject *__pyx_kp_s_mtf_config___init___py;
static PyObject *__pyx_n_s_mtf_module;
static PyObject *__pyx_n_s_mtf_module_session;
static PyObject *__pyx_n_s_name;
static PyObject *__pyx_n_u_navigate;
static PyObject *__pyx_n_s_now;
static PyObject *__pyx_n_s_object_except;
static PyObject *__pyx_n_s_os;
static PyObject *__pyx_n_s_parents;
static PyObject *__pyx_n_s_path;
static PyObject *__pyx_n_s_pathlib;
static PyObject *__pyx_n_s_prefix;
static PyObject *__pyx_n_s_prepare;
static PyObject *__pyx_kp_u_progress_elapsed;
static PyObject *__pyx_kp_u_progress_percentage;
static PyObject *__pyx_kp_u_prompt_choices;
static PyObject *__pyx_n_s_qualname;
static PyObject *__pyx_n_u_quiet;
static PyObject *__pyx_n_s_randint;
static PyObject *__pyx_n_s_random;
static PyObject *__pyx_n_u_red;
static PyObject *__pyx_n_u_red1;
static PyObject *__pyx_n_u_red3;
static PyObject *__pyx_kp_u_rgb_114_156_31;
static PyObject *__pyx_kp_u_rgb_249_38_114;
static PyObject *__pyx_n_s_rich;
static PyObject *__pyx_n_s_rich_default_styles;
static PyObject *__pyx_n_s_rich_panel;
static PyObject *__pyx_n_s_rich_prompt;
static PyObject *__pyx_n_s_rich_style;
static PyObject *__pyx_n_s_rmtree;
static PyObject *__pyx_kp_u_same_origin;
static PyObject *__pyx_kp_u_sec_ch_ua_mobile;
static PyObject *__pyx_kp_u_sec_ch_ua_platform;
static PyObject *__pyx_kp_u_sec_fetch_dest;
static PyObject *__pyx_kp_u_sec_fetch_mode;
static PyObject *__pyx_kp_u_sec_fetch_site;
static PyObject *__pyx_kp_u_sec_fetch_user;
static PyObject *__pyx_n_s_shutil;
static PyObject *__pyx_kp_u_smirking_face_Silakan_Masukkan;
static PyObject *__pyx_kp_u_smirking_face_Silakan_Masukkan_2;
static PyObject *__pyx_kp_u_smirking_face_Silakan_pilih_sal;
static PyObject *__pyx_n_s_split;
static PyObject *__pyx_n_s_style;
static PyObject *__pyx_n_s_sys;
static PyObject *__pyx_n_u_t;
static PyObject *__pyx_n_s_test;
static PyObject *__pyx_n_u_theme;
static PyObject *__pyx_n_s_timestamp;
static PyObject *__pyx_kp_u_tmp;
static PyObject *__pyx_kp_u_upgrade_insecure_requests;
static PyObject *__pyx_kp_u_user_agent;
static PyObject *__pyx_kp_u_utf_8;
static PyObject *__pyx_n_s_utils;
static PyObject *__pyx_n_s_validate_error_message;
static PyObject *__pyx_kp_u_vi_VN_id_q_0_9_en_US_q_0_8_en_q;
static PyObject *__pyx_kp_u_vi_vn;
static PyObject *__pyx_n_u_web;
static PyObject *__pyx_n_u_white;
static PyObject *__pyx_kp_u_x_asbd_id;
static PyObject *__pyx_kp_u_x_ig_app_id;
static PyObject *__pyx_kp_u_x_ig_www_claim;
static PyObject *__pyx_n_u_y;
static PyObject *__pyx_n_u_yellow;
static PyObject *__pyx_n_u_yellow1;
static PyObject *__pyx_n_u_yellow2;
static PyObject *__pyx_pf_6config_8__init___init(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_int_0;
static PyObject *__pyx_int_511;
static PyObject *__pyx_int_190000;
static PyObject *__pyx_int_290000;
static PyObject *__pyx_int_neg_1;
static PyObject *__pyx_slice__2;
static PyObject *__pyx_slice__6;
static PyObject *__pyx_tuple__3;
static PyObject *__pyx_tuple__4;
static PyObject *__pyx_tuple__5;
static PyObject *__pyx_tuple__7;
static PyObject *__pyx_tuple__8;
static PyObject *__pyx_codeobj__9;
 

 

 
static PyObject *__pyx_pw_6config_8__init___1init(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_6config_8__init___1init = {"init", (PyCFunction)__pyx_pw_6config_8__init___1init, METH_NOARGS, 0};
static PyObject *__pyx_pw_6config_8__init___1init(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("init (wrapper)", 0);
  __pyx_r = __pyx_pf_6config_8__init___init(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_6config_8__init___init(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_utils = NULL;
  PyObject *__pyx_v_DEFAULT_STYLES = NULL;
  PyObject *__pyx_v_Style = NULL;
  PyObject *__pyx_v_config = NULL;
  PyObject *__pyx_v_color = NULL;
  PyObject *__pyx_v_AUTH_DIR = NULL;
  PyObject *__pyx_v_Panel = NULL;
  PyObject *__pyx_v_Prompt = NULL;
  PyObject *__pyx_v_Confirm = NULL;
  PyObject *__pyx_v_IntPrompt = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_t_8;
  int __pyx_t_9;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("init", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_datetime); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_now); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_timestamp); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_t_1, __pyx_n_s_START_TIME, __pyx_t_4) < 0) __PYX_ERR(0, 345, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_utils);
  __Pyx_GIVEREF(__pyx_n_s_utils);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_utils);
  __pyx_t_4 = __Pyx_Import(__pyx_n_s_mtf_module, __pyx_t_1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 346, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_4, __pyx_n_s_utils); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_utils = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = PyList_New(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 347, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_n_s_DEFAULT_STYLES);
  __Pyx_GIVEREF(__pyx_n_s_DEFAULT_STYLES);
  PyList_SET_ITEM(__pyx_t_4, 0, __pyx_n_s_DEFAULT_STYLES);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich_default_styles, __pyx_t_4, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 347, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_DEFAULT_STYLES); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 347, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_t_4);
  __pyx_v_DEFAULT_STYLES = __pyx_t_4;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 348, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_Style);
  __Pyx_GIVEREF(__pyx_n_s_Style);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Style);
  __pyx_t_4 = __Pyx_Import(__pyx_n_s_rich_style, __pyx_t_1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 348, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_4, __pyx_n_s_Style); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 348, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_Style = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_utils, __pyx_n_s_object_except); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 349, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 349, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ANSI_COLOR_NAMES); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 349, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyList_New(19); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 349, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_u_black);
  __Pyx_GIVEREF(__pyx_n_u_black);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_black);
  __Pyx_INCREF(__pyx_n_u_red);
  __Pyx_GIVEREF(__pyx_n_u_red);
  PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_red);
  __Pyx_INCREF(__pyx_n_u_red1);
  __Pyx_GIVEREF(__pyx_n_u_red1);
  PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_u_red1);
  __Pyx_INCREF(__pyx_n_u_dark_red);
  __Pyx_GIVEREF(__pyx_n_u_dark_red);
  PyList_SET_ITEM(__pyx_t_2, 3, __pyx_n_u_dark_red);
  __Pyx_INCREF(__pyx_n_u_red3);
  __Pyx_GIVEREF(__pyx_n_u_red3);
  PyList_SET_ITEM(__pyx_t_2, 4, __pyx_n_u_red3);
  __Pyx_INCREF(__pyx_n_u_white);
  __Pyx_GIVEREF(__pyx_n_u_white);
  PyList_SET_ITEM(__pyx_t_2, 5, __pyx_n_u_white);
  __Pyx_INCREF(__pyx_n_u_bright_white);
  __Pyx_GIVEREF(__pyx_n_u_bright_white);
  PyList_SET_ITEM(__pyx_t_2, 6, __pyx_n_u_bright_white);
  __Pyx_INCREF(__pyx_n_u_yellow);
  __Pyx_GIVEREF(__pyx_n_u_yellow);
  PyList_SET_ITEM(__pyx_t_2, 7, __pyx_n_u_yellow);
  __Pyx_INCREF(__pyx_n_u_yellow1);
  __Pyx_GIVEREF(__pyx_n_u_yellow1);
  PyList_SET_ITEM(__pyx_t_2, 8, __pyx_n_u_yellow1);
  __Pyx_INCREF(__pyx_n_u_yellow2);
  __Pyx_GIVEREF(__pyx_n_u_yellow2);
  PyList_SET_ITEM(__pyx_t_2, 9, __pyx_n_u_yellow2);
  __Pyx_INCREF(__pyx_n_u_gold1);
  __Pyx_GIVEREF(__pyx_n_u_gold1);
  PyList_SET_ITEM(__pyx_t_2, 10, __pyx_n_u_gold1);
  __Pyx_INCREF(__pyx_n_u_green);
  __Pyx_GIVEREF(__pyx_n_u_green);
  PyList_SET_ITEM(__pyx_t_2, 11, __pyx_n_u_green);
  __Pyx_INCREF(__pyx_n_u_grey0);
  __Pyx_GIVEREF(__pyx_n_u_grey0);
  PyList_SET_ITEM(__pyx_t_2, 12, __pyx_n_u_grey0);
  __Pyx_INCREF(__pyx_n_u_grey3);
  __Pyx_GIVEREF(__pyx_n_u_grey3);
  PyList_SET_ITEM(__pyx_t_2, 13, __pyx_n_u_grey3);
  __Pyx_INCREF(__pyx_n_u_grey7);
  __Pyx_GIVEREF(__pyx_n_u_grey7);
  PyList_SET_ITEM(__pyx_t_2, 14, __pyx_n_u_grey7);
  __Pyx_INCREF(__pyx_n_u_grey11);
  __Pyx_GIVEREF(__pyx_n_u_grey11);
  PyList_SET_ITEM(__pyx_t_2, 15, __pyx_n_u_grey11);
  __Pyx_INCREF(__pyx_n_u_grey15);
  __Pyx_GIVEREF(__pyx_n_u_grey15);
  PyList_SET_ITEM(__pyx_t_2, 16, __pyx_n_u_grey15);
  __Pyx_INCREF(__pyx_n_u_grey19);
  __Pyx_GIVEREF(__pyx_n_u_grey19);
  PyList_SET_ITEM(__pyx_t_2, 17, __pyx_n_u_grey19);
  __Pyx_INCREF(__pyx_n_u_grey100);
  __Pyx_GIVEREF(__pyx_n_u_grey100);
  PyList_SET_ITEM(__pyx_t_2, 18, __pyx_n_u_grey100);
  __pyx_t_5 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_1)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_t_3, __pyx_t_2};
    __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_1)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_t_3, __pyx_t_2};
    __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_1, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  {
    __pyx_t_7 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__pyx_t_5) {
      __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_5); __pyx_t_5 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_6, __pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_6, __pyx_t_2);
    __pyx_t_3 = 0;
    __pyx_t_2 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_7, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 349, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_t_1, __pyx_n_s_ANSI_COLOR_NAMES, __pyx_t_4) < 0) __PYX_ERR(0, 349, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Files); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_app); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_CONFIG_FILES); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_1 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_7, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_2);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_config = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_config, __pyx_n_s_get); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 372, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 372, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_DEFAULT_THEME_COLOR); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 372, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_n_u_theme, __pyx_t_7};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 372, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_n_u_theme, __pyx_t_7};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 372, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  } else
  #endif
  {
    __pyx_t_3 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 372, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (__pyx_t_2) {
      __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2); __pyx_t_2 = NULL;
    }
    __Pyx_INCREF(__pyx_n_u_theme);
    __Pyx_GIVEREF(__pyx_n_u_theme);
    PyTuple_SET_ITEM(__pyx_t_3, 0+__pyx_t_6, __pyx_n_u_theme);
    __Pyx_GIVEREF(__pyx_t_7);
    PyTuple_SET_ITEM(__pyx_t_3, 1+__pyx_t_6, __pyx_t_7);
    __pyx_t_7 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 372, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_color = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_ANSI_COLOR_NAMES); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_8 = (__Pyx_PySequence_ContainsTF(__pyx_v_color, __pyx_t_4, Py_NE)); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_9 = (__pyx_t_8 != 0);
  if (__pyx_t_9) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_app); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 375, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_DEFAULT_THEME_COLOR); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 375, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF_SET(__pyx_v_color, __pyx_t_1);
    __pyx_t_1 = 0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_os); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_path); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_isdir); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_app); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_TMP_COOKIE_DIR); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_3, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_7);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_9) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_shutil); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_rmtree); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_app); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_TMP_COOKIE_DIR); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
      }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_4, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_app); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_AUTH_FILES); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_split); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_3, __pyx_kp_u_) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_kp_u_);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_GetSlice(__pyx_t_1, 0, -1L, NULL, NULL, &__pyx_slice__2, 0, 1, 1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyUnicode_Join(__pyx_kp_u_, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_v_AUTH_DIR = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_os); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 381, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_path); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 381, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_isdir); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 381, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_3, __pyx_v_AUTH_DIR) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_v_AUTH_DIR);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 381, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 381, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_8 = ((!__pyx_t_9) != 0);
  if (__pyx_t_8) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_pathlib); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 382, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_Path); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 382, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_7, __pyx_v_AUTH_DIR) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_AUTH_DIR);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 382, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_mkdir); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 382, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 382, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_parents, Py_True) < 0) __PYX_ERR(0, 382, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_exist_ok, Py_True) < 0) __PYX_ERR(0, 382, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_mode, __pyx_int_511) < 0) __PYX_ERR(0, 382, __pyx_L1_error)
    __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 382, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_app); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 384, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (__Pyx_PyObject_SetAttrStr(__pyx_t_7, __pyx_n_s_THEME_COLOR, __pyx_v_color) < 0) __PYX_ERR(0, 384, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 385, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_color, __pyx_v_color) < 0) __PYX_ERR(0, 385, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 385, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 385, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_n_u_theme, __pyx_t_1) < 0)) __PYX_ERR(0, 385, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 386, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_v_color) < 0) __PYX_ERR(0, 386, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 386, __pyx_L1_error)
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 386, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_prompt_choices, __pyx_t_7) < 0)) __PYX_ERR(0, 386, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 387, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_color, __pyx_n_u_magenta) < 0) __PYX_ERR(0, 387, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 387, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 387, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_progress_percentage, __pyx_t_1) < 0)) __PYX_ERR(0, 387, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 388, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_v_color) < 0) __PYX_ERR(0, 388, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 388, __pyx_L1_error)
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 388, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_progress_elapsed, __pyx_t_7) < 0)) __PYX_ERR(0, 388, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 389, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_color, __pyx_n_u_grey23) < 0) __PYX_ERR(0, 389, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 389, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 389, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_back, __pyx_t_1) < 0)) __PYX_ERR(0, 389, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 390, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_kp_u_rgb_249_38_114) < 0) __PYX_ERR(0, 390, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 390, __pyx_L1_error)
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 390, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_complete, __pyx_t_7) < 0)) __PYX_ERR(0, 390, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 391, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_color, __pyx_kp_u_rgb_114_156_31) < 0) __PYX_ERR(0, 391, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 391, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 391, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_finished, __pyx_t_1) < 0)) __PYX_ERR(0, 391, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 392, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_kp_u_rgb_249_38_114) < 0) __PYX_ERR(0, 392, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 392, __pyx_L1_error)
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 392, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_pulse, __pyx_t_7) < 0)) __PYX_ERR(0, 392, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_os); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 394, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_environ); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 394, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(PyObject_SetItem(__pyx_t_1, __pyx_n_u_PYTHONIOENCODING, __pyx_kp_u_utf_8) < 0)) __PYX_ERR(0, 394, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 395, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_environ); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 395, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(PyObject_SetItem(__pyx_t_7, __pyx_n_u_GIT_PYTHON_REFRESH, __pyx_n_u_quiet) < 0)) __PYX_ERR(0, 395, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = PyList_New(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 397, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_INCREF(__pyx_n_s_Panel);
  __Pyx_GIVEREF(__pyx_n_s_Panel);
  PyList_SET_ITEM(__pyx_t_7, 0, __pyx_n_s_Panel);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich_panel, __pyx_t_7, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 397, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Panel); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 397, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_INCREF(__pyx_t_7);
  __pyx_v_Panel = __pyx_t_7;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 398, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_Prompt);
  __Pyx_GIVEREF(__pyx_n_s_Prompt);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Prompt);
  __Pyx_INCREF(__pyx_n_s_Confirm);
  __Pyx_GIVEREF(__pyx_n_s_Confirm);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_s_Confirm);
  __Pyx_INCREF(__pyx_n_s_IntPrompt);
  __Pyx_GIVEREF(__pyx_n_s_IntPrompt);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_n_s_IntPrompt);
  __pyx_t_7 = __Pyx_Import(__pyx_n_s_rich_prompt, __pyx_t_1, 0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 398, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_7, __pyx_n_s_Prompt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 398, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_Prompt = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_7, __pyx_n_s_Confirm); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 398, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_Confirm = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_7, __pyx_n_s_IntPrompt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 398, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_IntPrompt = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 400, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Panel, __pyx_tuple__3, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_Prompt, __pyx_n_s_illegal_choice_message, __pyx_t_1) < 0) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 401, __pyx_L1_error)
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_v_Panel, __pyx_tuple__4, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_Confirm, __pyx_n_s_validate_error_message, __pyx_t_7) < 0) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 402, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 402, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Panel, __pyx_tuple__5, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 402, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_IntPrompt, __pyx_n_s_validate_error_message, __pyx_t_1) < 0) __PYX_ERR(0, 402, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 403, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_u_y);
  __Pyx_GIVEREF(__pyx_n_u_y);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_u_y);
  __Pyx_INCREF(__pyx_n_u_t);
  __Pyx_GIVEREF(__pyx_n_u_t);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_t);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_Confirm, __pyx_n_s_choices, __pyx_t_1) < 0) __PYX_ERR(0, 403, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("config.__init__.init", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_utils);
  __Pyx_XDECREF(__pyx_v_DEFAULT_STYLES);
  __Pyx_XDECREF(__pyx_v_Style);
  __Pyx_XDECREF(__pyx_v_config);
  __Pyx_XDECREF(__pyx_v_color);
  __Pyx_XDECREF(__pyx_v_AUTH_DIR);
  __Pyx_XDECREF(__pyx_v_Panel);
  __Pyx_XDECREF(__pyx_v_Prompt);
  __Pyx_XDECREF(__pyx_v_Confirm);
  __Pyx_XDECREF(__pyx_v_IntPrompt);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

#if PY_MAJOR_VERSION >= 3
#if CYTHON_PEP489_MULTI_PHASE_INIT
static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def);  
static int __pyx_pymod_exec_config(PyObject* module);  
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_config},
  {0, NULL}
};
#endif

static struct PyModuleDef __pyx_moduledef = {
    PyModuleDef_HEAD_INIT,
    "config",
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
  {&__pyx_kp_u_0, __pyx_k_0, sizeof(__pyx_k_0), 0, 1, 0, 0},
  {&__pyx_kp_u_0_2, __pyx_k_0_2, sizeof(__pyx_k_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 1, 0, 0},
  {&__pyx_kp_u_1217981644879628, __pyx_k_1217981644879628, sizeof(__pyx_k_1217981644879628), 0, 1, 0, 0},
  {&__pyx_kp_u_1_2, __pyx_k_1_2, sizeof(__pyx_k_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_2_8, __pyx_k_2_8, sizeof(__pyx_k_2_8), 0, 1, 0, 0},
  {&__pyx_n_s_ACCEPT_LANGUAGE, __pyx_k_ACCEPT_LANGUAGE, sizeof(__pyx_k_ACCEPT_LANGUAGE), 0, 0, 1, 1},
  {&__pyx_n_s_ANSI_COLOR_NAMES, __pyx_k_ANSI_COLOR_NAMES, sizeof(__pyx_k_ANSI_COLOR_NAMES), 0, 0, 1, 1},
  {&__pyx_n_s_AUTH_DIR, __pyx_k_AUTH_DIR, sizeof(__pyx_k_AUTH_DIR), 0, 0, 1, 1},
  {&__pyx_n_s_AUTH_FILES, __pyx_k_AUTH_FILES, sizeof(__pyx_k_AUTH_FILES), 0, 0, 1, 1},
  {&__pyx_n_u_Android, __pyx_k_Android, sizeof(__pyx_k_Android), 0, 1, 0, 1},
  {&__pyx_n_s_CONFIG_FILES, __pyx_k_CONFIG_FILES, sizeof(__pyx_k_CONFIG_FILES), 0, 0, 1, 1},
  {&__pyx_n_s_CONSOLE_SPINNER, __pyx_k_CONSOLE_SPINNER, sizeof(__pyx_k_CONSOLE_SPINNER), 0, 0, 1, 1},
  {&__pyx_n_s_CP_DETECTOR_USER_AGENT, __pyx_k_CP_DETECTOR_USER_AGENT, sizeof(__pyx_k_CP_DETECTOR_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_n_s_Confirm, __pyx_k_Confirm, sizeof(__pyx_k_Confirm), 0, 0, 1, 1},
  {&__pyx_n_s_DEFAULT_STYLES, __pyx_k_DEFAULT_STYLES, sizeof(__pyx_k_DEFAULT_STYLES), 0, 0, 1, 1},
  {&__pyx_n_s_DEFAULT_THEME_COLOR, __pyx_k_DEFAULT_THEME_COLOR, sizeof(__pyx_k_DEFAULT_THEME_COLOR), 0, 0, 1, 1},
  {&__pyx_n_s_DESKTOP_REQUEST_HEADERS, __pyx_k_DESKTOP_REQUEST_HEADERS, sizeof(__pyx_k_DESKTOP_REQUEST_HEADERS), 0, 0, 1, 1},
  {&__pyx_n_s_DESKTOP_USER_AGENT, __pyx_k_DESKTOP_USER_AGENT, sizeof(__pyx_k_DESKTOP_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4, __pyx_k_Dalvik_1_6_0_Linux_U_Android_4_4, sizeof(__pyx_k_Dalvik_1_6_0_Linux_U_Android_4_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1, __pyx_k_Dalvik_2_1_0_Linux_U_Android_5_1, sizeof(__pyx_k_Dalvik_2_1_0_Linux_U_Android_5_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0, __pyx_k_Dalvik_2_1_0_Linux_U_Android_8_0, sizeof(__pyx_k_Dalvik_2_1_0_Linux_U_Android_8_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I, __pyx_k_Dalvik_2_1_0_Linux_U_Android_9_I, sizeof(__pyx_k_Dalvik_2_1_0_Linux_U_Android_9_I), 0, 1, 0, 0},
  {&__pyx_kp_u_EAAciL, __pyx_k_EAAciL, sizeof(__pyx_k_EAAciL), 0, 1, 0, 0},
  {&__pyx_n_s_FB, __pyx_k_FB, sizeof(__pyx_k_FB), 0, 0, 1, 1},
  {&__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F, __pyx_k_FBAN_FB4A_FBAV_222_0_0_48_113_F, sizeof(__pyx_k_FBAN_FB4A_FBAV_222_0_0_48_113_F), 0, 1, 0, 0},
  {&__pyx_n_s_FB_USER_AGENT, __pyx_k_FB_USER_AGENT, sizeof(__pyx_k_FB_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_n_s_Files, __pyx_k_Files, sizeof(__pyx_k_Files), 0, 0, 1, 1},
  {&__pyx_n_u_GIT_PYTHON_REFRESH, __pyx_k_GIT_PYTHON_REFRESH, sizeof(__pyx_k_GIT_PYTHON_REFRESH), 0, 1, 0, 1},
  {&__pyx_n_s_IG, __pyx_k_IG, sizeof(__pyx_k_IG), 0, 0, 1, 1},
  {&__pyx_n_s_IG_REQUEST_HEADERS, __pyx_k_IG_REQUEST_HEADERS, sizeof(__pyx_k_IG_REQUEST_HEADERS), 0, 0, 1, 1},
  {&__pyx_n_s_IG_USER_AGENT, __pyx_k_IG_USER_AGENT, sizeof(__pyx_k_IG_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_n_s_IP, __pyx_k_IP, sizeof(__pyx_k_IP), 0, 0, 1, 1},
  {&__pyx_n_s_IntPrompt, __pyx_k_IntPrompt, sizeof(__pyx_k_IntPrompt), 0, 0, 1, 1},
  {&__pyx_n_s_LIST_USER_AGENT, __pyx_k_LIST_USER_AGENT, sizeof(__pyx_k_LIST_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA, __pyx_k_Mozilla_5_0_Linux_Android_10_LYA, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_LYA), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT, __pyx_k_Mozilla_5_0_Linux_Android_10_POT, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_POT), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM, __pyx_k_Mozilla_5_0_Linux_Android_10_SM, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_SM), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2, __pyx_k_Mozilla_5_0_Linux_Android_10_SM_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_SM_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG, __pyx_k_Mozilla_5_0_Linux_Android_10_VOG, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_VOG), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2, __pyx_k_Mozilla_5_0_Linux_Android_10_VOG_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_VOG_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot, __pyx_k_Mozilla_5_0_Linux_Android_10_mot, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_10_mot), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2, __pyx_k_Mozilla_5_0_Linux_Android_11_AC2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_11_AC2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4, __pyx_k_Mozilla_5_0_Linux_Android_4_0_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_0_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2, __pyx_k_Mozilla_5_0_Linux_Android_4_0_4_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_0_4_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1, __pyx_k_Mozilla_5_0_Linux_Android_4_1_1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_5, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_6, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_7, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8, __pyx_k_Mozilla_5_0_Linux_Android_4_1_2_8, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_1_2_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1, __pyx_k_Mozilla_5_0_Linux_Android_4_2_1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_2_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2, __pyx_k_Mozilla_5_0_Linux_Android_4_2_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_2_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT, __pyx_k_Mozilla_5_0_Linux_Android_4_3_GT, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_3_GT), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT, __pyx_k_Mozilla_5_0_Linux_Android_4_3_LT, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_3_LT), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2, __pyx_k_Mozilla_5_0_Linux_Android_4_3_LT_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_3_LT_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_10, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_11, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_11), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_12, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_12), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_13, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_13), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_14, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_14), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_15, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_15), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_16, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_16), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_17, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_17), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_18, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_18), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_19, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_19), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_20, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_20), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_21, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_21), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_22, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_22), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_5, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_6, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_7, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_8, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9, __pyx_k_Mozilla_5_0_Linux_Android_4_4_2_9, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_2_9), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_10, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_11, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_11), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_12, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_12), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_13, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_13), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_14, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_14), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_15, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_15), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_16, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_16), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_5, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_6, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_7, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_8, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9, __pyx_k_Mozilla_5_0_Linux_Android_4_4_4_9, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_4_9), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne, __pyx_k_Mozilla_5_0_Linux_Android_4_4_Ne, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_Ne), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2, __pyx_k_Mozilla_5_0_Linux_Android_4_4_Ne_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_4_4_Ne_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1, __pyx_k_Mozilla_5_0_Linux_Android_5_0_1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2, __pyx_k_Mozilla_5_0_Linux_Android_5_0_1_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3, __pyx_k_Mozilla_5_0_Linux_Android_5_0_1_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_1_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_5, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_6, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_7, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8, __pyx_k_Mozilla_5_0_Linux_Android_5_0_2_8, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_2_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS, __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_AS), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2, __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3, __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4, __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5, __pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_5, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_AS_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le, __pyx_k_Mozilla_5_0_Linux_Android_5_0_Le, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_Le), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA, __pyx_k_Mozilla_5_0_Linux_Android_5_0_SA, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_SA), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2, __pyx_k_Mozilla_5_0_Linux_Android_5_0_SA_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_SA_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM, __pyx_k_Mozilla_5_0_Linux_Android_5_0_SM, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_SM), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2, __pyx_k_Mozilla_5_0_Linux_Android_5_0_SM_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_0_SM_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_10, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_11, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_11), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_12, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_12), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_13, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_13), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_14, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_14), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_15, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_15), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_16, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_16), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_17, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_17), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_18, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_18), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_19, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_19), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_20, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_20), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_21, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_21), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_5, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_6, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_7, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_8, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9, __pyx_k_Mozilla_5_0_Linux_Android_5_1_1_9, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_1_9), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1, __pyx_k_Mozilla_5_0_Linux_Android_5_1_A1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_A1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An, __pyx_k_Mozilla_5_0_Linux_Android_5_1_An, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_An), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG, __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_LG), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2, __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3, __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4, __pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_LG_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT, __pyx_k_Mozilla_5_0_Linux_Android_5_1_XT, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_XT), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2, __pyx_k_Mozilla_5_0_Linux_Android_5_1_XT_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_5_1_XT_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1, __pyx_k_Mozilla_5_0_Linux_Android_6_0_1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2, __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3, __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_1_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4, __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_1_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5, __pyx_k_Mozilla_5_0_Linux_Android_6_0_1_5, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_1_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL, __pyx_k_Mozilla_5_0_Linux_Android_6_0_AL, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_AL), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG, __pyx_k_Mozilla_5_0_Linux_Android_6_0_BG, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_BG), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU, __pyx_k_Mozilla_5_0_Linux_Android_6_0_HU, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_HU), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY, __pyx_k_Mozilla_5_0_Linux_Android_6_0_MY, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_MY), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST, __pyx_k_Mozilla_5_0_Linux_Android_6_0_ST, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_ST), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U, __pyx_k_Mozilla_5_0_Linux_Android_6_0_U, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_U), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2, __pyx_k_Mozilla_5_0_Linux_Android_6_0_U_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_6_0_U_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR, __pyx_k_Mozilla_5_0_Linux_Android_7_0_FR, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_FR), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In, __pyx_k_Mozilla_5_0_Linux_Android_7_0_In, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_In), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG, __pyx_k_Mozilla_5_0_Linux_Android_7_0_LG, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_LG), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo, __pyx_k_Mozilla_5_0_Linux_Android_7_0_Mo, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_Mo), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR, __pyx_k_Mozilla_5_0_Linux_Android_7_0_PR, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_PR), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL, __pyx_k_Mozilla_5_0_Linux_Android_7_0_SL, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_SL), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM, __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_SM), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2, __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3, __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4, __pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_4, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_SM_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR, __pyx_k_Mozilla_5_0_Linux_Android_7_0_TR, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_0_TR), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1, __pyx_k_Mozilla_5_0_Linux_Android_7_1_1, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_1_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2, __pyx_k_Mozilla_5_0_Linux_Android_7_1_1_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_1_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3, __pyx_k_Mozilla_5_0_Linux_Android_7_1_1_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_7_1_1_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0, __pyx_k_Mozilla_5_0_Linux_Android_8_0_0, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_8_0_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2, __pyx_k_Mozilla_5_0_Linux_Android_8_0_0_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_8_0_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0, __pyx_k_Mozilla_5_0_Linux_Android_8_1_0, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_8_1_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2, __pyx_k_Mozilla_5_0_Linux_Android_8_1_0_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_8_1_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3, __pyx_k_Mozilla_5_0_Linux_Android_8_1_0_3, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_8_1_0_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr, __pyx_k_Mozilla_5_0_Linux_Android_9_Andr, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_9_Andr), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM, __pyx_k_Mozilla_5_0_Linux_Android_9_JKM, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_9_JKM), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q, __pyx_k_Mozilla_5_0_Linux_Android_9_LM_Q, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_9_LM_Q), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X, __pyx_k_Mozilla_5_0_Linux_Android_9_LM_X, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_9_LM_X), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G, __pyx_k_Mozilla_5_0_Linux_Android_9_SM_G, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_9_SM_G), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37, __pyx_k_Mozilla_5_0_Linux_Android_9_cp37, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_9_cp37), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2, __pyx_k_Mozilla_5_0_Linux_Android_9_cp37_2, sizeof(__pyx_k_Mozilla_5_0_Linux_Android_9_cp37_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0, __pyx_k_Mozilla_5_0_Linux_U_Android_2_0, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1, __pyx_k_Mozilla_5_0_Linux_U_Android_2_1, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2, __pyx_k_Mozilla_5_0_Linux_U_Android_2_1_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2, __pyx_k_Mozilla_5_0_Linux_U_Android_2_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2, __pyx_k_Mozilla_5_0_Linux_U_Android_2_2_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_2_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_10, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_11, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_11), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_12, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_12), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_13, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_13), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_14, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_14), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_4, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_5, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_6, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_7, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_8, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9, __pyx_k_Mozilla_5_0_Linux_U_Android_2_3_9, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_2_3_9), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0, __pyx_k_Mozilla_5_0_Linux_U_Android_4_0, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2, __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3, __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_0_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4, __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_4, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_0_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5, __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_5, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_0_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6, __pyx_k_Mozilla_5_0_Linux_U_Android_4_0_6, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_0_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_10, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_4, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_5, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_6, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_7, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_8, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9, __pyx_k_Mozilla_5_0_Linux_U_Android_4_1_9, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_1_9), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_4, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_5, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_6, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_7, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8, __pyx_k_Mozilla_5_0_Linux_U_Android_4_2_8, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_2_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_4, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_5, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_6, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_7, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8, __pyx_k_Mozilla_5_0_Linux_U_Android_4_3_8, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_3_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_10, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_11, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_11), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_12, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_12), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_13, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_13), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_14, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_14), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_15, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_15), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_16, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_16), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_17, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_17), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_18, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_18), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_19, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_19), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_20, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_20), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_3, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_4, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_5, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_6, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_7, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_8, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9, __pyx_k_Mozilla_5_0_Linux_U_Android_4_4_9, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_4_4_9), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0, __pyx_k_Mozilla_5_0_Linux_U_Android_5_0, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_5_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2, __pyx_k_Mozilla_5_0_Linux_U_Android_5_0_2, sizeof(__pyx_k_Mozilla_5_0_Linux_U_Android_5_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6, __pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_2, __pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6_2, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_3, __pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6_3, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_10_0_Win6_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64, __pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_2, __pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64_2, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_3, __pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64_3, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_6_1_WOW64_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_Win64, __pyx_k_Mozilla_5_0_Windows_NT_6_1_Win64, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_6_1_Win64), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64, __pyx_k_Mozilla_5_0_Windows_NT_6_3_Win64, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_6_3_Win64), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64_2, __pyx_k_Mozilla_5_0_Windows_NT_6_3_Win64_2, sizeof(__pyx_k_Mozilla_5_0_Windows_NT_6_3_Win64_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077, __pyx_k_Mozilla_5_0_X11_CrOS_x86_64_7077, sizeof(__pyx_k_Mozilla_5_0_X11_CrOS_x86_64_7077), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077_2, __pyx_k_Mozilla_5_0_X11_CrOS_x86_64_7077_2, sizeof(__pyx_k_Mozilla_5_0_X11_CrOS_x86_64_7077_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_2, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_3, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_4, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_5, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_5), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_6, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_U_e, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_U_e, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_U_e), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_2, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86), 0, 1, 0, 0},
  {&__pyx_n_s_PATTERN_MATCH_FB_TOKEN, __pyx_k_PATTERN_MATCH_FB_TOKEN, sizeof(__pyx_k_PATTERN_MATCH_FB_TOKEN), 0, 0, 1, 1},
  {&__pyx_n_u_PYTHONIOENCODING, __pyx_k_PYTHONIOENCODING, sizeof(__pyx_k_PYTHONIOENCODING), 0, 1, 0, 1},
  {&__pyx_n_s_Panel, __pyx_k_Panel, sizeof(__pyx_k_Panel), 0, 0, 1, 1},
  {&__pyx_n_s_Path, __pyx_k_Path, sizeof(__pyx_k_Path), 0, 0, 1, 1},
  {&__pyx_n_s_Prompt, __pyx_k_Prompt, sizeof(__pyx_k_Prompt), 0, 0, 1, 1},
  {&__pyx_n_s_REQUEST_HEADERS, __pyx_k_REQUEST_HEADERS, sizeof(__pyx_k_REQUEST_HEADERS), 0, 0, 1, 1},
  {&__pyx_n_s_START_TIME, __pyx_k_START_TIME, sizeof(__pyx_k_START_TIME), 0, 0, 1, 1},
  {&__pyx_n_s_Style, __pyx_k_Style, sizeof(__pyx_k_Style), 0, 0, 1, 1},
  {&__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li, __pyx_k_SupportsFresco_1_Dalvik_2_1_0_Li, sizeof(__pyx_k_SupportsFresco_1_Dalvik_2_1_0_Li), 0, 1, 0, 0},
  {&__pyx_n_s_THEME_COLOR, __pyx_k_THEME_COLOR, sizeof(__pyx_k_THEME_COLOR), 0, 0, 1, 1},
  {&__pyx_n_s_TMP_COOKIE_DIR, __pyx_k_TMP_COOKIE_DIR, sizeof(__pyx_k_TMP_COOKIE_DIR), 0, 0, 1, 1},
  {&__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY, __pyx_k_U2cuV2YpxWLoRXdh5yLulmY, sizeof(__pyx_k_U2cuV2YpxWLoRXdh5yLulmY), 0, 1, 0, 0},
  {&__pyx_n_s_USER_AGENT, __pyx_k_USER_AGENT, sizeof(__pyx_k_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_n_s_VERSION, __pyx_k_VERSION, sizeof(__pyx_k_VERSION), 0, 0, 1, 1},
  {&__pyx_kp_u_accept_language, __pyx_k_accept_language, sizeof(__pyx_k_accept_language), 0, 1, 0, 0},
  {&__pyx_n_s_app, __pyx_k_app, sizeof(__pyx_k_app), 0, 0, 1, 1},
  {&__pyx_n_s_b64decode, __pyx_k_b64decode, sizeof(__pyx_k_b64decode), 0, 0, 1, 1},
  {&__pyx_kp_u_bar_back, __pyx_k_bar_back, sizeof(__pyx_k_bar_back), 0, 1, 0, 0},
  {&__pyx_kp_u_bar_complete, __pyx_k_bar_complete, sizeof(__pyx_k_bar_complete), 0, 1, 0, 0},
  {&__pyx_kp_u_bar_finished, __pyx_k_bar_finished, sizeof(__pyx_k_bar_finished), 0, 1, 0, 0},
  {&__pyx_kp_u_bar_pulse, __pyx_k_bar_pulse, sizeof(__pyx_k_bar_pulse), 0, 1, 0, 0},
  {&__pyx_n_s_base64, __pyx_k_base64, sizeof(__pyx_k_base64), 0, 0, 1, 1},
  {&__pyx_n_u_black, __pyx_k_black, sizeof(__pyx_k_black), 0, 1, 0, 1},
  {&__pyx_n_s_bold, __pyx_k_bold, sizeof(__pyx_k_bold), 0, 0, 1, 1},
  {&__pyx_kp_u_bold_red, __pyx_k_bold_red, sizeof(__pyx_k_bold_red), 0, 1, 0, 0},
  {&__pyx_n_u_bright_white, __pyx_k_bright_white, sizeof(__pyx_k_bright_white), 0, 1, 0, 1},
  {&__pyx_kp_u_cache_control, __pyx_k_cache_control, sizeof(__pyx_k_cache_control), 0, 1, 0, 0},
  {&__pyx_n_s_choices, __pyx_k_choices, sizeof(__pyx_k_choices), 0, 0, 1, 1},
  {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
  {&__pyx_n_s_color, __pyx_k_color, sizeof(__pyx_k_color), 0, 0, 1, 1},
  {&__pyx_n_s_config, __pyx_k_config, sizeof(__pyx_k_config), 0, 0, 1, 1},
  {&__pyx_n_s_config___init, __pyx_k_config___init, sizeof(__pyx_k_config___init), 0, 0, 1, 1},
  {&__pyx_kp_u_config___init, __pyx_k_config___init, sizeof(__pyx_k_config___init), 0, 1, 0, 0},
  {&__pyx_kp_u_configuration, __pyx_k_configuration, sizeof(__pyx_k_configuration), 0, 1, 0, 0},
  {&__pyx_n_s_copy, __pyx_k_copy, sizeof(__pyx_k_copy), 0, 0, 1, 1},
  {&__pyx_kp_u_cross_site, __pyx_k_cross_site, sizeof(__pyx_k_cross_site), 0, 1, 0, 0},
  {&__pyx_n_u_dark_red, __pyx_k_dark_red, sizeof(__pyx_k_dark_red), 0, 1, 0, 1},
  {&__pyx_n_s_datetime, __pyx_k_datetime, sizeof(__pyx_k_datetime), 0, 0, 1, 1},
  {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
  {&__pyx_n_u_deep_sky_blue2, __pyx_k_deep_sky_blue2, sizeof(__pyx_k_deep_sky_blue2), 0, 1, 0, 1},
  {&__pyx_n_u_desktop, __pyx_k_desktop, sizeof(__pyx_k_desktop), 0, 1, 0, 1},
  {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
  {&__pyx_n_u_document, __pyx_k_document, sizeof(__pyx_k_document), 0, 1, 0, 1},
  {&__pyx_n_u_dots, __pyx_k_dots, sizeof(__pyx_k_dots), 0, 1, 0, 1},
  {&__pyx_kp_u_en_US_en_q_0_9_en_US_q_0_8_en_q, __pyx_k_en_US_en_q_0_9_en_US_q_0_8_en_q, sizeof(__pyx_k_en_US_en_q_0_9_en_US_q_0_8_en_q), 0, 1, 0, 0},
  {&__pyx_kp_u_en_us, __pyx_k_en_us, sizeof(__pyx_k_en_us), 0, 1, 0, 0},
  {&__pyx_n_s_environ, __pyx_k_environ, sizeof(__pyx_k_environ), 0, 0, 1, 1},
  {&__pyx_n_s_exist_ok, __pyx_k_exist_ok, sizeof(__pyx_k_exist_ok), 0, 0, 1, 1},
  {&__pyx_n_u_fb, __pyx_k_fb, sizeof(__pyx_k_fb), 0, 1, 0, 1},
  {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
  {&__pyx_n_u_gold1, __pyx_k_gold1, sizeof(__pyx_k_gold1), 0, 1, 0, 1},
  {&__pyx_n_u_green, __pyx_k_green, sizeof(__pyx_k_green), 0, 1, 0, 1},
  {&__pyx_n_u_grey0, __pyx_k_grey0, sizeof(__pyx_k_grey0), 0, 1, 0, 1},
  {&__pyx_n_u_grey100, __pyx_k_grey100, sizeof(__pyx_k_grey100), 0, 1, 0, 1},
  {&__pyx_n_u_grey11, __pyx_k_grey11, sizeof(__pyx_k_grey11), 0, 1, 0, 1},
  {&__pyx_n_u_grey15, __pyx_k_grey15, sizeof(__pyx_k_grey15), 0, 1, 0, 1},
  {&__pyx_n_u_grey19, __pyx_k_grey19, sizeof(__pyx_k_grey19), 0, 1, 0, 1},
  {&__pyx_n_u_grey23, __pyx_k_grey23, sizeof(__pyx_k_grey23), 0, 1, 0, 1},
  {&__pyx_n_u_grey3, __pyx_k_grey3, sizeof(__pyx_k_grey3), 0, 1, 0, 1},
  {&__pyx_n_u_grey7, __pyx_k_grey7, sizeof(__pyx_k_grey7), 0, 1, 0, 1},
  {&__pyx_kp_u_hi_IN_id_q_0_9_en_US_q_0_8_en_q, __pyx_k_hi_IN_id_q_0_9_en_US_q_0_8_en_q, sizeof(__pyx_k_hi_IN_id_q_0_9_en_US_q_0_8_en_q), 0, 1, 0, 0},
  {&__pyx_kp_u_hi_in, __pyx_k_hi_in, sizeof(__pyx_k_hi_in), 0, 1, 0, 0},
  {&__pyx_kp_u_id_ID_id_q_0_9_en_US_q_0_8_en_q, __pyx_k_id_ID_id_q_0_9_en_US_q_0_8_en_q, sizeof(__pyx_k_id_ID_id_q_0_9_en_US_q_0_8_en_q), 0, 1, 0, 0},
  {&__pyx_kp_u_id_id, __pyx_k_id_id, sizeof(__pyx_k_id_id), 0, 1, 0, 0},
  {&__pyx_n_u_ig, __pyx_k_ig, sizeof(__pyx_k_ig), 0, 1, 0, 1},
  {&__pyx_n_s_illegal_choice_message, __pyx_k_illegal_choice_message, sizeof(__pyx_k_illegal_choice_message), 0, 0, 1, 1},
  {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
  {&__pyx_n_s_init, __pyx_k_init, sizeof(__pyx_k_init), 0, 0, 1, 1},
  {&__pyx_n_s_isdir, __pyx_k_isdir, sizeof(__pyx_k_isdir), 0, 0, 1, 1},
  {&__pyx_kp_u_ja_JP_en_q_0_9_en_US_q_0_8_en_q, __pyx_k_ja_JP_en_q_0_9_en_US_q_0_8_en_q, sizeof(__pyx_k_ja_JP_en_q_0_9_en_US_q_0_8_en_q), 0, 1, 0, 0},
  {&__pyx_kp_u_ja_jp, __pyx_k_ja_jp, sizeof(__pyx_k_ja_jp), 0, 1, 0, 0},
  {&__pyx_n_s_join, __pyx_k_join, sizeof(__pyx_k_join), 0, 0, 1, 1},
  {&__pyx_n_u_magenta, __pyx_k_magenta, sizeof(__pyx_k_magenta), 0, 1, 0, 1},
  {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
  {&__pyx_kp_u_max_age_0, __pyx_k_max_age_0, sizeof(__pyx_k_max_age_0), 0, 1, 0, 0},
  {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
  {&__pyx_n_s_mkdir, __pyx_k_mkdir, sizeof(__pyx_k_mkdir), 0, 0, 1, 1},
  {&__pyx_n_s_mode, __pyx_k_mode, sizeof(__pyx_k_mode), 0, 0, 1, 1},
  {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
  {&__pyx_kp_u_ms_MY_id_q_0_9_en_US_q_0_8_en_q, __pyx_k_ms_MY_id_q_0_9_en_US_q_0_8_en_q, sizeof(__pyx_k_ms_MY_id_q_0_9_en_US_q_0_8_en_q), 0, 1, 0, 0},
  {&__pyx_kp_u_ms_my, __pyx_k_ms_my, sizeof(__pyx_k_ms_my), 0, 1, 0, 0},
  {&__pyx_kp_s_mtf_config___init___py, __pyx_k_mtf_config___init___py, sizeof(__pyx_k_mtf_config___init___py), 0, 0, 1, 0},
  {&__pyx_n_s_mtf_module, __pyx_k_mtf_module, sizeof(__pyx_k_mtf_module), 0, 0, 1, 1},
  {&__pyx_n_s_mtf_module_session, __pyx_k_mtf_module_session, sizeof(__pyx_k_mtf_module_session), 0, 0, 1, 1},
  {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
  {&__pyx_n_u_navigate, __pyx_k_navigate, sizeof(__pyx_k_navigate), 0, 1, 0, 1},
  {&__pyx_n_s_now, __pyx_k_now, sizeof(__pyx_k_now), 0, 0, 1, 1},
  {&__pyx_n_s_object_except, __pyx_k_object_except, sizeof(__pyx_k_object_except), 0, 0, 1, 1},
  {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
  {&__pyx_n_s_parents, __pyx_k_parents, sizeof(__pyx_k_parents), 0, 0, 1, 1},
  {&__pyx_n_s_path, __pyx_k_path, sizeof(__pyx_k_path), 0, 0, 1, 1},
  {&__pyx_n_s_pathlib, __pyx_k_pathlib, sizeof(__pyx_k_pathlib), 0, 0, 1, 1},
  {&__pyx_n_s_prefix, __pyx_k_prefix, sizeof(__pyx_k_prefix), 0, 0, 1, 1},
  {&__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
  {&__pyx_kp_u_progress_elapsed, __pyx_k_progress_elapsed, sizeof(__pyx_k_progress_elapsed), 0, 1, 0, 0},
  {&__pyx_kp_u_progress_percentage, __pyx_k_progress_percentage, sizeof(__pyx_k_progress_percentage), 0, 1, 0, 0},
  {&__pyx_kp_u_prompt_choices, __pyx_k_prompt_choices, sizeof(__pyx_k_prompt_choices), 0, 1, 0, 0},
  {&__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
  {&__pyx_n_u_quiet, __pyx_k_quiet, sizeof(__pyx_k_quiet), 0, 1, 0, 1},
  {&__pyx_n_s_randint, __pyx_k_randint, sizeof(__pyx_k_randint), 0, 0, 1, 1},
  {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
  {&__pyx_n_u_red, __pyx_k_red, sizeof(__pyx_k_red), 0, 1, 0, 1},
  {&__pyx_n_u_red1, __pyx_k_red1, sizeof(__pyx_k_red1), 0, 1, 0, 1},
  {&__pyx_n_u_red3, __pyx_k_red3, sizeof(__pyx_k_red3), 0, 1, 0, 1},
  {&__pyx_kp_u_rgb_114_156_31, __pyx_k_rgb_114_156_31, sizeof(__pyx_k_rgb_114_156_31), 0, 1, 0, 0},
  {&__pyx_kp_u_rgb_249_38_114, __pyx_k_rgb_249_38_114, sizeof(__pyx_k_rgb_249_38_114), 0, 1, 0, 0},
  {&__pyx_n_s_rich, __pyx_k_rich, sizeof(__pyx_k_rich), 0, 0, 1, 1},
  {&__pyx_n_s_rich_default_styles, __pyx_k_rich_default_styles, sizeof(__pyx_k_rich_default_styles), 0, 0, 1, 1},
  {&__pyx_n_s_rich_panel, __pyx_k_rich_panel, sizeof(__pyx_k_rich_panel), 0, 0, 1, 1},
  {&__pyx_n_s_rich_prompt, __pyx_k_rich_prompt, sizeof(__pyx_k_rich_prompt), 0, 0, 1, 1},
  {&__pyx_n_s_rich_style, __pyx_k_rich_style, sizeof(__pyx_k_rich_style), 0, 0, 1, 1},
  {&__pyx_n_s_rmtree, __pyx_k_rmtree, sizeof(__pyx_k_rmtree), 0, 0, 1, 1},
  {&__pyx_kp_u_same_origin, __pyx_k_same_origin, sizeof(__pyx_k_same_origin), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_ch_ua_mobile, __pyx_k_sec_ch_ua_mobile, sizeof(__pyx_k_sec_ch_ua_mobile), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_ch_ua_platform, __pyx_k_sec_ch_ua_platform, sizeof(__pyx_k_sec_ch_ua_platform), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_fetch_dest, __pyx_k_sec_fetch_dest, sizeof(__pyx_k_sec_fetch_dest), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_fetch_mode, __pyx_k_sec_fetch_mode, sizeof(__pyx_k_sec_fetch_mode), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_fetch_site, __pyx_k_sec_fetch_site, sizeof(__pyx_k_sec_fetch_site), 0, 1, 0, 0},
  {&__pyx_kp_u_sec_fetch_user, __pyx_k_sec_fetch_user, sizeof(__pyx_k_sec_fetch_user), 0, 1, 0, 0},
  {&__pyx_n_s_shutil, __pyx_k_shutil, sizeof(__pyx_k_shutil), 0, 0, 1, 1},
  {&__pyx_kp_u_smirking_face_Silakan_Masukkan, __pyx_k_smirking_face_Silakan_Masukkan, sizeof(__pyx_k_smirking_face_Silakan_Masukkan), 0, 1, 0, 0},
  {&__pyx_kp_u_smirking_face_Silakan_Masukkan_2, __pyx_k_smirking_face_Silakan_Masukkan_2, sizeof(__pyx_k_smirking_face_Silakan_Masukkan_2), 0, 1, 0, 0},
  {&__pyx_kp_u_smirking_face_Silakan_pilih_sal, __pyx_k_smirking_face_Silakan_pilih_sal, sizeof(__pyx_k_smirking_face_Silakan_pilih_sal), 0, 1, 0, 0},
  {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
  {&__pyx_n_s_style, __pyx_k_style, sizeof(__pyx_k_style), 0, 0, 1, 1},
  {&__pyx_n_s_sys, __pyx_k_sys, sizeof(__pyx_k_sys), 0, 0, 1, 1},
  {&__pyx_n_u_t, __pyx_k_t, sizeof(__pyx_k_t), 0, 1, 0, 1},
  {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
  {&__pyx_n_u_theme, __pyx_k_theme, sizeof(__pyx_k_theme), 0, 1, 0, 1},
  {&__pyx_n_s_timestamp, __pyx_k_timestamp, sizeof(__pyx_k_timestamp), 0, 0, 1, 1},
  {&__pyx_kp_u_tmp, __pyx_k_tmp, sizeof(__pyx_k_tmp), 0, 1, 0, 0},
  {&__pyx_kp_u_upgrade_insecure_requests, __pyx_k_upgrade_insecure_requests, sizeof(__pyx_k_upgrade_insecure_requests), 0, 1, 0, 0},
  {&__pyx_kp_u_user_agent, __pyx_k_user_agent, sizeof(__pyx_k_user_agent), 0, 1, 0, 0},
  {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
  {&__pyx_n_s_utils, __pyx_k_utils, sizeof(__pyx_k_utils), 0, 0, 1, 1},
  {&__pyx_n_s_validate_error_message, __pyx_k_validate_error_message, sizeof(__pyx_k_validate_error_message), 0, 0, 1, 1},
  {&__pyx_kp_u_vi_VN_id_q_0_9_en_US_q_0_8_en_q, __pyx_k_vi_VN_id_q_0_9_en_US_q_0_8_en_q, sizeof(__pyx_k_vi_VN_id_q_0_9_en_US_q_0_8_en_q), 0, 1, 0, 0},
  {&__pyx_kp_u_vi_vn, __pyx_k_vi_vn, sizeof(__pyx_k_vi_vn), 0, 1, 0, 0},
  {&__pyx_n_u_web, __pyx_k_web, sizeof(__pyx_k_web), 0, 1, 0, 1},
  {&__pyx_n_u_white, __pyx_k_white, sizeof(__pyx_k_white), 0, 1, 0, 1},
  {&__pyx_kp_u_x_asbd_id, __pyx_k_x_asbd_id, sizeof(__pyx_k_x_asbd_id), 0, 1, 0, 0},
  {&__pyx_kp_u_x_ig_app_id, __pyx_k_x_ig_app_id, sizeof(__pyx_k_x_ig_app_id), 0, 1, 0, 0},
  {&__pyx_kp_u_x_ig_www_claim, __pyx_k_x_ig_www_claim, sizeof(__pyx_k_x_ig_www_claim), 0, 1, 0, 0},
  {&__pyx_n_u_y, __pyx_k_y, sizeof(__pyx_k_y), 0, 1, 0, 1},
  {&__pyx_n_u_yellow, __pyx_k_yellow, sizeof(__pyx_k_yellow), 0, 1, 0, 1},
  {&__pyx_n_u_yellow1, __pyx_k_yellow1, sizeof(__pyx_k_yellow1), 0, 1, 0, 1},
  {&__pyx_n_u_yellow2, __pyx_k_yellow2, sizeof(__pyx_k_yellow2), 0, 1, 0, 1},
  {0, 0, 0, 0, 0, 0, 0}
};
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  return 0;
}

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

   
  __pyx_slice__2 = PySlice_New(Py_None, __pyx_int_neg_1, Py_None); if (unlikely(!__pyx_slice__2)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__2);
  __Pyx_GIVEREF(__pyx_slice__2);

   
  __pyx_tuple__3 = PyTuple_Pack(1, __pyx_kp_u_smirking_face_Silakan_pilih_sal); if (unlikely(!__pyx_tuple__3)) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__3);
  __Pyx_GIVEREF(__pyx_tuple__3);

   
  __pyx_tuple__4 = PyTuple_Pack(1, __pyx_kp_u_smirking_face_Silakan_Masukkan); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);

   
  __pyx_tuple__5 = PyTuple_Pack(1, __pyx_kp_u_smirking_face_Silakan_Masukkan_2); if (unlikely(!__pyx_tuple__5)) __PYX_ERR(0, 402, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__5);
  __Pyx_GIVEREF(__pyx_tuple__5);

   
  __pyx_slice__6 = PySlice_New(Py_None, Py_None, __pyx_int_neg_1); if (unlikely(!__pyx_slice__6)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__6);
  __Pyx_GIVEREF(__pyx_slice__6);

   
  __pyx_tuple__7 = PyTuple_Pack(2, __pyx_int_190000, __pyx_int_290000); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 74, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);

   
  __pyx_tuple__8 = PyTuple_Pack(10, __pyx_n_s_utils, __pyx_n_s_DEFAULT_STYLES, __pyx_n_s_Style, __pyx_n_s_config, __pyx_n_s_color, __pyx_n_s_AUTH_DIR, __pyx_n_s_Panel, __pyx_n_s_Prompt, __pyx_n_s_Confirm, __pyx_n_s_IntPrompt); if (unlikely(!__pyx_tuple__8)) __PYX_ERR(0, 344, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__8);
  __Pyx_GIVEREF(__pyx_tuple__8);
  __pyx_codeobj__9 = (PyObject*)__Pyx_PyCode_New(0, 0, 10, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__8, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_config___init___py, __pyx_n_s_init, 344, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__9)) __PYX_ERR(0, 344, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_511 = PyInt_FromLong(511); if (unlikely(!__pyx_int_511)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_190000 = PyInt_FromLong(190000L); if (unlikely(!__pyx_int_190000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_290000 = PyInt_FromLong(290000L); if (unlikely(!__pyx_int_290000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_neg_1 = PyInt_FromLong(-1); if (unlikely(!__pyx_int_neg_1)) __PYX_ERR(0, 1, __pyx_L1_error)
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
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
   
  __Pyx_RefNannyFinishContext();
  return 0;
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
__Pyx_PyMODINIT_FUNC initconfig(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC initconfig(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_config(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC PyInit_config(void)
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


static CYTHON_SMALL_CODE int __pyx_pymod_exec_config(PyObject *__pyx_pyinit_module)
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
    PyErr_SetString(PyExc_RuntimeError, "Module 'config' has already been imported. Re-initialisation is not supported.");
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
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_config(void)", 0);
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
  __pyx_m = Py_InitModule4("config", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
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
  if (__pyx_module_is_main_config____init__) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  if (!CYTHON_PEP489_MULTI_PHASE_INIT) {
    if (unlikely(__Pyx_SetPackagePathFromImportLib(__pyx_kp_u_config___init) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "config")) {
      if (unlikely(PyDict_SetItemString(modules, "config", __pyx_m) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
    }
  }
  #endif
   
  if (__Pyx_InitCachedBuiltins() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
   
  if (__Pyx_InitCachedConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
   
  (void)__Pyx_modinit_global_init_code();
  (void)__Pyx_modinit_variable_export_code();
  (void)__Pyx_modinit_function_export_code();
  (void)__Pyx_modinit_type_init_code();
  (void)__Pyx_modinit_type_import_code();
  (void)__Pyx_modinit_variable_import_code();
  (void)__Pyx_modinit_function_import_code();
   
  #if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
  if (__Pyx_patch_abc() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_Files);
  __Pyx_GIVEREF(__pyx_n_s_Files);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Files);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_mtf_module_session, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Files); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Files, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_datetime);
  __Pyx_GIVEREF(__pyx_n_s_datetime);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_datetime);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_datetime, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_datetime); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_datetime, __pyx_t_2) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_b64decode);
  __Pyx_GIVEREF(__pyx_n_s_b64decode);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_b64decode);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_base64, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_b64decode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_b64decode, __pyx_t_1) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_color);
  __Pyx_GIVEREF(__pyx_n_s_color);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_color);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_color); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_color, __pyx_t_2) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_sys, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_sys, __pyx_t_1) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_os, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_os, __pyx_t_1) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_shutil, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_shutil, __pyx_t_1) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_random, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_1) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_pathlib, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_pathlib, __pyx_t_1) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_app, __pyx_n_s_app, (PyObject *) NULL, __pyx_n_s_config___init, (PyObject *) NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_VERSION, __pyx_kp_u_2_8) < 0) __PYX_ERR(0, 12, __pyx_L1_error)

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_IP, __pyx_t_2) < 0) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_FB, __pyx_t_2) < 0) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_IG, __pyx_t_2) < 0) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_START_TIME, __pyx_int_0) < 0) __PYX_ERR(0, 16, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_CONFIG_FILES, __pyx_kp_u_configuration) < 0) __PYX_ERR(0, 17, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_TMP_COOKIE_DIR, __pyx_kp_u_tmp) < 0) __PYX_ERR(0, 18, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_os); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_path); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_join); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_prefix); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_b64decode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_8 = __Pyx_PyObject_GetItem(__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY, __pyx_slice__6); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_9 = PyUnicode_AsEncodedString(((PyObject*)__pyx_t_8), NULL, NULL); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_8)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_8);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
    }
  }
  __pyx_t_6 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_8, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_9);
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_decode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
    }
  }
  __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  __pyx_t_10 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_10 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_t_5, __pyx_t_4};
    __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_t_5, __pyx_t_4};
    __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  } else
  #endif
  {
    __pyx_t_6 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (__pyx_t_7) {
      __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_7); __pyx_t_7 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_10, __pyx_t_5);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_10, __pyx_t_4);
    __pyx_t_5 = 0;
    __pyx_t_4 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_6, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_AUTH_FILES, __pyx_t_2) < 0) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2) < 0) __PYX_ERR(0, 21, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_CP_DETECTOR_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1) < 0) __PYX_ERR(0, 22, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_FB_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U) < 0) __PYX_ERR(0, 23, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_IG_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM) < 0) __PYX_ERR(0, 24, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_DESKTOP_USER_AGENT, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App) < 0) __PYX_ERR(0, 25, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_CONSOLE_SPINNER, __pyx_n_u_dots) < 0) __PYX_ERR(0, 26, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_PATTERN_MATCH_FB_TOKEN, __pyx_kp_u_EAAciL) < 0) __PYX_ERR(0, 27, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_DEFAULT_THEME_COLOR, __pyx_n_u_deep_sky_blue2) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  __pyx_t_2 = PyObject_GetItem(__pyx_t_1, __pyx_n_s_DEFAULT_THEME_COLOR);
  if (unlikely(!__pyx_t_2)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_DEFAULT_THEME_COLOR);
  }
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_THEME_COLOR, __pyx_t_2) < 0) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 32, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_en_us, __pyx_kp_u_en_US_en_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_ja_jp, __pyx_kp_u_ja_JP_en_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_id_id, __pyx_kp_u_id_ID_id_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_ms_my, __pyx_kp_u_ms_MY_id_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_hi_in, __pyx_kp_u_hi_IN_id_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_vi_vn, __pyx_kp_u_vi_VN_id_q_0_9_en_US_q_0_8_en_q) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_ACCEPT_LANGUAGE, __pyx_t_2) < 0) __PYX_ERR(0, 30, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(9); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = PyObject_GetItem(__pyx_t_1, __pyx_n_s_USER_AGENT);
  if (unlikely(!__pyx_t_3)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_USER_AGENT);
  }
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_user_agent, __pyx_t_3) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1) < 0) __PYX_ERR(0, 40, __pyx_L1_error)

   
  __pyx_t_3 = PyObject_GetItem(__pyx_t_1, __pyx_n_s_ACCEPT_LANGUAGE);
  if (unlikely(!__pyx_t_3)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ACCEPT_LANGUAGE);
  }
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_t_3, __pyx_kp_u_id_id); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_accept_language, __pyx_t_6) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_document) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_navigate) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_same_origin) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_user, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_ch_ua_mobile, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 40, __pyx_L1_error)
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_REQUEST_HEADERS, __pyx_t_2) < 0) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(9); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_6 = PyObject_GetItem(__pyx_t_1, __pyx_n_s_DESKTOP_USER_AGENT);
  if (unlikely(!__pyx_t_6)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_DESKTOP_USER_AGENT);
  }
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_user_agent, __pyx_t_6) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1) < 0) __PYX_ERR(0, 51, __pyx_L1_error)

   
  __pyx_t_6 = PyObject_GetItem(__pyx_t_1, __pyx_n_s_ACCEPT_LANGUAGE);
  if (unlikely(!__pyx_t_6)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ACCEPT_LANGUAGE);
  }
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_t_6, __pyx_kp_u_id_id); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_accept_language, __pyx_t_3) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_document) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_navigate) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_same_origin) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_user, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_ch_ua_mobile, __pyx_kp_u_0) < 0) __PYX_ERR(0, 51, __pyx_L1_error)
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_DESKTOP_REQUEST_HEADERS, __pyx_t_2) < 0) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(13); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = PyObject_GetItem(__pyx_t_1, __pyx_n_s_IG_USER_AGENT);
  if (unlikely(!__pyx_t_3)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_IG_USER_AGENT);
  }
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_user_agent, __pyx_t_3) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1) < 0) __PYX_ERR(0, 62, __pyx_L1_error)

   
  __pyx_t_3 = PyObject_GetItem(__pyx_t_1, __pyx_n_s_ACCEPT_LANGUAGE);
  if (unlikely(!__pyx_t_3)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ACCEPT_LANGUAGE);
  }
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_t_3, __pyx_kp_u_id_id); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_accept_language, __pyx_t_6) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_document) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_navigate) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_cross_site) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_user, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_ch_ua_mobile, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_ch_ua_platform, __pyx_n_u_Android) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_x_ig_app_id, __pyx_kp_u_1217981644879628) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_x_ig_www_claim, __pyx_kp_u_0_2) < 0) __PYX_ERR(0, 62, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 74, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 74, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__7, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 74, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 74, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_x_asbd_id, __pyx_t_3) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_IG_REQUEST_HEADERS, __pyx_t_2) < 0) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = PyList_New(205); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA);
  PyList_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT);
  PyList_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG);
  PyList_SET_ITEM(__pyx_t_3, 2, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2);
  PyList_SET_ITEM(__pyx_t_3, 3, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot);
  PyList_SET_ITEM(__pyx_t_3, 4, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2);
  PyList_SET_ITEM(__pyx_t_3, 5, __pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4);
  PyList_SET_ITEM(__pyx_t_3, 6, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2);
  PyList_SET_ITEM(__pyx_t_3, 7, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1);
  PyList_SET_ITEM(__pyx_t_3, 8, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2);
  PyList_SET_ITEM(__pyx_t_3, 9, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2);
  PyList_SET_ITEM(__pyx_t_3, 10, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3);
  PyList_SET_ITEM(__pyx_t_3, 11, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4);
  PyList_SET_ITEM(__pyx_t_3, 12, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5);
  PyList_SET_ITEM(__pyx_t_3, 13, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6);
  PyList_SET_ITEM(__pyx_t_3, 14, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7);
  PyList_SET_ITEM(__pyx_t_3, 15, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1);
  PyList_SET_ITEM(__pyx_t_3, 16, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2);
  PyList_SET_ITEM(__pyx_t_3, 17, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT);
  PyList_SET_ITEM(__pyx_t_3, 18, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT);
  PyList_SET_ITEM(__pyx_t_3, 19, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2);
  PyList_SET_ITEM(__pyx_t_3, 20, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2);
  PyList_SET_ITEM(__pyx_t_3, 21, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2);
  PyList_SET_ITEM(__pyx_t_3, 22, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3);
  PyList_SET_ITEM(__pyx_t_3, 23, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4);
  PyList_SET_ITEM(__pyx_t_3, 24, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5);
  PyList_SET_ITEM(__pyx_t_3, 25, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6);
  PyList_SET_ITEM(__pyx_t_3, 26, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7);
  PyList_SET_ITEM(__pyx_t_3, 27, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8);
  PyList_SET_ITEM(__pyx_t_3, 28, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9);
  PyList_SET_ITEM(__pyx_t_3, 29, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10);
  PyList_SET_ITEM(__pyx_t_3, 30, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11);
  PyList_SET_ITEM(__pyx_t_3, 31, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12);
  PyList_SET_ITEM(__pyx_t_3, 32, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13);
  PyList_SET_ITEM(__pyx_t_3, 33, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14);
  PyList_SET_ITEM(__pyx_t_3, 34, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15);
  PyList_SET_ITEM(__pyx_t_3, 35, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16);
  PyList_SET_ITEM(__pyx_t_3, 36, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17);
  PyList_SET_ITEM(__pyx_t_3, 37, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18);
  PyList_SET_ITEM(__pyx_t_3, 38, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19);
  PyList_SET_ITEM(__pyx_t_3, 39, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20);
  PyList_SET_ITEM(__pyx_t_3, 40, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21);
  PyList_SET_ITEM(__pyx_t_3, 41, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22);
  PyList_SET_ITEM(__pyx_t_3, 42, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4);
  PyList_SET_ITEM(__pyx_t_3, 43, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2);
  PyList_SET_ITEM(__pyx_t_3, 44, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3);
  PyList_SET_ITEM(__pyx_t_3, 45, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4);
  PyList_SET_ITEM(__pyx_t_3, 46, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5);
  PyList_SET_ITEM(__pyx_t_3, 47, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6);
  PyList_SET_ITEM(__pyx_t_3, 48, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7);
  PyList_SET_ITEM(__pyx_t_3, 49, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8);
  PyList_SET_ITEM(__pyx_t_3, 50, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9);
  PyList_SET_ITEM(__pyx_t_3, 51, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10);
  PyList_SET_ITEM(__pyx_t_3, 52, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11);
  PyList_SET_ITEM(__pyx_t_3, 53, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12);
  PyList_SET_ITEM(__pyx_t_3, 54, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13);
  PyList_SET_ITEM(__pyx_t_3, 55, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14);
  PyList_SET_ITEM(__pyx_t_3, 56, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15);
  PyList_SET_ITEM(__pyx_t_3, 57, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16);
  PyList_SET_ITEM(__pyx_t_3, 58, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne);
  PyList_SET_ITEM(__pyx_t_3, 59, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2);
  PyList_SET_ITEM(__pyx_t_3, 60, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1);
  PyList_SET_ITEM(__pyx_t_3, 61, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2);
  PyList_SET_ITEM(__pyx_t_3, 62, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3);
  PyList_SET_ITEM(__pyx_t_3, 63, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2);
  PyList_SET_ITEM(__pyx_t_3, 64, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2);
  PyList_SET_ITEM(__pyx_t_3, 65, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3);
  PyList_SET_ITEM(__pyx_t_3, 66, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4);
  PyList_SET_ITEM(__pyx_t_3, 67, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5);
  PyList_SET_ITEM(__pyx_t_3, 68, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6);
  PyList_SET_ITEM(__pyx_t_3, 69, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS);
  PyList_SET_ITEM(__pyx_t_3, 70, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2);
  PyList_SET_ITEM(__pyx_t_3, 71, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3);
  PyList_SET_ITEM(__pyx_t_3, 72, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4);
  PyList_SET_ITEM(__pyx_t_3, 73, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5);
  PyList_SET_ITEM(__pyx_t_3, 74, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le);
  PyList_SET_ITEM(__pyx_t_3, 75, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA);
  PyList_SET_ITEM(__pyx_t_3, 76, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2);
  PyList_SET_ITEM(__pyx_t_3, 77, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM);
  PyList_SET_ITEM(__pyx_t_3, 78, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2);
  PyList_SET_ITEM(__pyx_t_3, 79, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1);
  PyList_SET_ITEM(__pyx_t_3, 80, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2);
  PyList_SET_ITEM(__pyx_t_3, 81, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3);
  PyList_SET_ITEM(__pyx_t_3, 82, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4);
  PyList_SET_ITEM(__pyx_t_3, 83, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5);
  PyList_SET_ITEM(__pyx_t_3, 84, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6);
  PyList_SET_ITEM(__pyx_t_3, 85, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7);
  PyList_SET_ITEM(__pyx_t_3, 86, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8);
  PyList_SET_ITEM(__pyx_t_3, 87, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9);
  PyList_SET_ITEM(__pyx_t_3, 88, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10);
  PyList_SET_ITEM(__pyx_t_3, 89, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11);
  PyList_SET_ITEM(__pyx_t_3, 90, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12);
  PyList_SET_ITEM(__pyx_t_3, 91, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13);
  PyList_SET_ITEM(__pyx_t_3, 92, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14);
  PyList_SET_ITEM(__pyx_t_3, 93, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15);
  PyList_SET_ITEM(__pyx_t_3, 94, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16);
  PyList_SET_ITEM(__pyx_t_3, 95, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17);
  PyList_SET_ITEM(__pyx_t_3, 96, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18);
  PyList_SET_ITEM(__pyx_t_3, 97, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19);
  PyList_SET_ITEM(__pyx_t_3, 98, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1);
  PyList_SET_ITEM(__pyx_t_3, 99, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An);
  PyList_SET_ITEM(__pyx_t_3, 100, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG);
  PyList_SET_ITEM(__pyx_t_3, 101, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2);
  PyList_SET_ITEM(__pyx_t_3, 102, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3);
  PyList_SET_ITEM(__pyx_t_3, 103, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4);
  PyList_SET_ITEM(__pyx_t_3, 104, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT);
  PyList_SET_ITEM(__pyx_t_3, 105, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2);
  PyList_SET_ITEM(__pyx_t_3, 106, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2);
  PyList_SET_ITEM(__pyx_t_3, 107, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL);
  PyList_SET_ITEM(__pyx_t_3, 108, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY);
  PyList_SET_ITEM(__pyx_t_3, 109, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR);
  PyList_SET_ITEM(__pyx_t_3, 110, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In);
  PyList_SET_ITEM(__pyx_t_3, 111, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo);
  PyList_SET_ITEM(__pyx_t_3, 112, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR);
  PyList_SET_ITEM(__pyx_t_3, 113, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1);
  PyList_SET_ITEM(__pyx_t_3, 114, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2);
  PyList_SET_ITEM(__pyx_t_3, 115, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3);
  PyList_SET_ITEM(__pyx_t_3, 116, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0);
  PyList_SET_ITEM(__pyx_t_3, 117, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2);
  PyList_SET_ITEM(__pyx_t_3, 118, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0);
  PyList_SET_ITEM(__pyx_t_3, 119, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2);
  PyList_SET_ITEM(__pyx_t_3, 120, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr);
  PyList_SET_ITEM(__pyx_t_3, 121, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM);
  PyList_SET_ITEM(__pyx_t_3, 122, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q);
  PyList_SET_ITEM(__pyx_t_3, 123, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X);
  PyList_SET_ITEM(__pyx_t_3, 124, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37);
  PyList_SET_ITEM(__pyx_t_3, 125, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2);
  PyList_SET_ITEM(__pyx_t_3, 126, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8);
  PyList_SET_ITEM(__pyx_t_3, 127, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0);
  PyList_SET_ITEM(__pyx_t_3, 128, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1);
  PyList_SET_ITEM(__pyx_t_3, 129, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2);
  PyList_SET_ITEM(__pyx_t_3, 130, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2);
  PyList_SET_ITEM(__pyx_t_3, 131, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2);
  PyList_SET_ITEM(__pyx_t_3, 132, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3);
  PyList_SET_ITEM(__pyx_t_3, 133, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  PyList_SET_ITEM(__pyx_t_3, 134, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3);
  PyList_SET_ITEM(__pyx_t_3, 135, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4);
  PyList_SET_ITEM(__pyx_t_3, 136, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  PyList_SET_ITEM(__pyx_t_3, 137, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5);
  PyList_SET_ITEM(__pyx_t_3, 138, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6);
  PyList_SET_ITEM(__pyx_t_3, 139, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7);
  PyList_SET_ITEM(__pyx_t_3, 140, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8);
  PyList_SET_ITEM(__pyx_t_3, 141, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  PyList_SET_ITEM(__pyx_t_3, 142, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  PyList_SET_ITEM(__pyx_t_3, 143, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11);
  PyList_SET_ITEM(__pyx_t_3, 144, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12);
  PyList_SET_ITEM(__pyx_t_3, 145, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13);
  PyList_SET_ITEM(__pyx_t_3, 146, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  PyList_SET_ITEM(__pyx_t_3, 147, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  PyList_SET_ITEM(__pyx_t_3, 148, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14);
  PyList_SET_ITEM(__pyx_t_3, 149, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0);
  PyList_SET_ITEM(__pyx_t_3, 150, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  PyList_SET_ITEM(__pyx_t_3, 151, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3);
  PyList_SET_ITEM(__pyx_t_3, 152, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  PyList_SET_ITEM(__pyx_t_3, 153, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4);
  PyList_SET_ITEM(__pyx_t_3, 154, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5);
  PyList_SET_ITEM(__pyx_t_3, 155, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6);
  PyList_SET_ITEM(__pyx_t_3, 156, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1);
  PyList_SET_ITEM(__pyx_t_3, 157, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2);
  PyList_SET_ITEM(__pyx_t_3, 158, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  PyList_SET_ITEM(__pyx_t_3, 159, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4);
  PyList_SET_ITEM(__pyx_t_3, 160, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5);
  PyList_SET_ITEM(__pyx_t_3, 161, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6);
  PyList_SET_ITEM(__pyx_t_3, 162, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7);
  PyList_SET_ITEM(__pyx_t_3, 163, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8);
  PyList_SET_ITEM(__pyx_t_3, 164, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9);
  PyList_SET_ITEM(__pyx_t_3, 165, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  PyList_SET_ITEM(__pyx_t_3, 166, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2);
  PyList_SET_ITEM(__pyx_t_3, 167, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2);
  PyList_SET_ITEM(__pyx_t_3, 168, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3);
  PyList_SET_ITEM(__pyx_t_3, 169, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4);
  PyList_SET_ITEM(__pyx_t_3, 170, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5);
  PyList_SET_ITEM(__pyx_t_3, 171, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6);
  PyList_SET_ITEM(__pyx_t_3, 172, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7);
  PyList_SET_ITEM(__pyx_t_3, 173, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8);
  PyList_SET_ITEM(__pyx_t_3, 174, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  PyList_SET_ITEM(__pyx_t_3, 175, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2);
  PyList_SET_ITEM(__pyx_t_3, 176, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  PyList_SET_ITEM(__pyx_t_3, 177, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3);
  PyList_SET_ITEM(__pyx_t_3, 178, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4);
  PyList_SET_ITEM(__pyx_t_3, 179, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5);
  PyList_SET_ITEM(__pyx_t_3, 180, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6);
  PyList_SET_ITEM(__pyx_t_3, 181, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7);
  PyList_SET_ITEM(__pyx_t_3, 182, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4);
  PyList_SET_ITEM(__pyx_t_3, 183, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2);
  PyList_SET_ITEM(__pyx_t_3, 184, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3);
  PyList_SET_ITEM(__pyx_t_3, 185, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4);
  PyList_SET_ITEM(__pyx_t_3, 186, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5);
  PyList_SET_ITEM(__pyx_t_3, 187, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6);
  PyList_SET_ITEM(__pyx_t_3, 188, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7);
  PyList_SET_ITEM(__pyx_t_3, 189, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8);
  PyList_SET_ITEM(__pyx_t_3, 190, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9);
  PyList_SET_ITEM(__pyx_t_3, 191, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10);
  PyList_SET_ITEM(__pyx_t_3, 192, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11);
  PyList_SET_ITEM(__pyx_t_3, 193, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12);
  PyList_SET_ITEM(__pyx_t_3, 194, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13);
  PyList_SET_ITEM(__pyx_t_3, 195, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14);
  PyList_SET_ITEM(__pyx_t_3, 196, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15);
  PyList_SET_ITEM(__pyx_t_3, 197, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16);
  PyList_SET_ITEM(__pyx_t_3, 198, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17);
  PyList_SET_ITEM(__pyx_t_3, 199, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18);
  PyList_SET_ITEM(__pyx_t_3, 200, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19);
  PyList_SET_ITEM(__pyx_t_3, 201, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0);
  PyList_SET_ITEM(__pyx_t_3, 202, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2);
  PyList_SET_ITEM(__pyx_t_3, 203, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20);
  PyList_SET_ITEM(__pyx_t_3, 204, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_web, __pyx_t_3) < 0) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(21); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 284, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
  PyList_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv);
  PyList_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2);
  PyList_SET_ITEM(__pyx_t_3, 2, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3);
  PyList_SET_ITEM(__pyx_t_3, 3, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077);
  PyList_SET_ITEM(__pyx_t_3, 4, __pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4);
  PyList_SET_ITEM(__pyx_t_3, 5, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86);
  PyList_SET_ITEM(__pyx_t_3, 6, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_U_e);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_U_e);
  PyList_SET_ITEM(__pyx_t_3, 7, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_U_e);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5);
  PyList_SET_ITEM(__pyx_t_3, 8, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6);
  PyList_SET_ITEM(__pyx_t_3, 9, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2);
  PyList_SET_ITEM(__pyx_t_3, 10, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077_2);
  PyList_SET_ITEM(__pyx_t_3, 11, __pyx_kp_u_Mozilla_5_0_X11_CrOS_x86_64_7077_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6);
  PyList_SET_ITEM(__pyx_t_3, 12, __pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_2);
  PyList_SET_ITEM(__pyx_t_3, 13, __pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_3);
  PyList_SET_ITEM(__pyx_t_3, 14, __pyx_kp_u_Mozilla_5_0_Windows_NT_10_0_Win6_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_Win64);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_Win64);
  PyList_SET_ITEM(__pyx_t_3, 15, __pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_Win64);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64);
  PyList_SET_ITEM(__pyx_t_3, 16, __pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64);
  PyList_SET_ITEM(__pyx_t_3, 17, __pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_2);
  PyList_SET_ITEM(__pyx_t_3, 18, __pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_3);
  PyList_SET_ITEM(__pyx_t_3, 19, __pyx_kp_u_Mozilla_5_0_Windows_NT_6_1_WOW64_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64_2);
  PyList_SET_ITEM(__pyx_t_3, 20, __pyx_kp_u_Mozilla_5_0_Windows_NT_6_3_Win64_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_desktop, __pyx_t_3) < 0) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(20); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 307, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F);
  __Pyx_GIVEREF(__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F);
  PyList_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4);
  PyList_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1);
  PyList_SET_ITEM(__pyx_t_3, 2, __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I);
  PyList_SET_ITEM(__pyx_t_3, 3, __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I);
  __Pyx_INCREF(__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li);
  __Pyx_GIVEREF(__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li);
  PyList_SET_ITEM(__pyx_t_3, 4, __pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0);
  PyList_SET_ITEM(__pyx_t_3, 5, __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1);
  PyList_SET_ITEM(__pyx_t_3, 6, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL);
  PyList_SET_ITEM(__pyx_t_3, 7, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7);
  PyList_SET_ITEM(__pyx_t_3, 8, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3);
  PyList_SET_ITEM(__pyx_t_3, 9, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR);
  PyList_SET_ITEM(__pyx_t_3, 10, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM);
  PyList_SET_ITEM(__pyx_t_3, 11, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST);
  PyList_SET_ITEM(__pyx_t_3, 12, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3);
  PyList_SET_ITEM(__pyx_t_3, 13, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG);
  PyList_SET_ITEM(__pyx_t_3, 14, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG);
  PyList_SET_ITEM(__pyx_t_3, 15, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2);
  PyList_SET_ITEM(__pyx_t_3, 16, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20);
  PyList_SET_ITEM(__pyx_t_3, 17, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU);
  PyList_SET_ITEM(__pyx_t_3, 18, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2);
  PyList_SET_ITEM(__pyx_t_3, 19, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_fb, __pyx_t_3) < 0) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(10); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 329, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3);
  PyList_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4);
  PyList_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21);
  PyList_SET_ITEM(__pyx_t_3, 2, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4);
  PyList_SET_ITEM(__pyx_t_3, 3, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10);
  PyList_SET_ITEM(__pyx_t_3, 4, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2);
  PyList_SET_ITEM(__pyx_t_3, 5, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G);
  PyList_SET_ITEM(__pyx_t_3, 6, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5);
  PyList_SET_ITEM(__pyx_t_3, 7, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8);
  PyList_SET_ITEM(__pyx_t_3, 8, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8);
  PyList_SET_ITEM(__pyx_t_3, 9, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_ig, __pyx_t_3) < 0) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_LIST_USER_AGENT, __pyx_t_2) < 0) __PYX_ERR(0, 76, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_color); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_ANSI_COLOR_NAMES); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_copy); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_2 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_ANSI_COLOR_NAMES, __pyx_t_2) < 0) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3ClassCreate(((PyObject*)&__Pyx_DefaultClassType), __pyx_n_s_app, __pyx_empty_tuple, __pyx_t_1, NULL, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_app, __pyx_t_2) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_6config_8__init___1init, 0, __pyx_n_s_init, NULL, __pyx_n_s_config___init, __pyx_d, ((PyObject *)__pyx_codeobj__9)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 344, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_init, __pyx_t_1) < 0) __PYX_ERR(0, 344, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   

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
      __Pyx_AddTraceback("init config.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    Py_CLEAR(__pyx_m);
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init config.__init__");
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
