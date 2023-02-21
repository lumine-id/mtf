 

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

#define __PYX_HAVE__jwt__algorithms
#define __PYX_HAVE_API__jwt__algorithms
 
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
  "mtf/module/jwt/algorithms.py",
};

 
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key;
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr;

 
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key {
  PyObject_HEAD
  PyObject *__pyx_v_invalid_strings;
  PyObject *__pyx_v_key;
};


 
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr {
  PyObject_HEAD
  struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *__pyx_outer_scope;
  PyObject *__pyx_v_string_value;
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

 
static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

 
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

 
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);

 
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);

 
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject **argnames[],\
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,\
    const char* function_name);

 
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

 
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause);

 
#include <string.h>

 
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);

 
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);

 
#if CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_DelAttrStr(o,n) __Pyx_PyObject_SetAttrStr(o, n, NULL)
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value);
#else
#define __Pyx_PyObject_DelAttrStr(o,n)   PyObject_DelAttr(o,n)
#define __Pyx_PyObject_SetAttrStr(o,n,v) PyObject_SetAttr(o,n,v)
#endif

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname);

 
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}

 
#if CYTHON_USE_EXC_INFO_STACK
static _PyErr_StackItem * __Pyx_PyErr_GetTopmostException(PyThreadState *tstate);
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
#define __Pyx_PyErr_ExceptionMatches(err) __Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, err)
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
#else
#define __Pyx_PyErr_ExceptionMatches(err)  PyErr_ExceptionMatches(err)
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
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

 
static CYTHON_INLINE PyObject *__Pyx_GetAttr(PyObject *, PyObject *);

 
static CYTHON_INLINE PyObject *__Pyx_GetAttr3(PyObject *, PyObject *, PyObject *);

 
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_ListComp_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len)) {
        Py_INCREF(x);
        PyList_SET_ITEM(list, len, x);
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_ListComp_Append(L,x) PyList_Append(L,x)
#endif

 
static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected);

 
static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index);

 
static CYTHON_INLINE int __Pyx_IterFinish(void);

 
static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected);

 
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

 
#if CYTHON_COMPILING_IN_PYPY
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        PyObject_Format(s, f))
#elif PY_MAJOR_VERSION < 3
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        likely(PyString_CheckExact(s)) ? PyUnicode_FromEncodedObject(s, NULL, "strict") :\
        PyObject_Format(s, f))
#elif CYTHON_USE_TYPE_SLOTS
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        likely(PyLong_CheckExact(s)) ? PyLong_Type.tp_str(s) :\
        likely(PyFloat_CheckExact(s)) ? PyFloat_Type.tp_str(s) :\
        PyObject_Format(s, f))
#else
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        PyObject_Format(s, f))
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(
        PyObject* obj, Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
        int has_cstart, int has_cstop, int wraparound);

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSwap(type, value, tb)  __Pyx__ExceptionSwap(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb);
#endif

 
#if CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP && PY_VERSION_HEX < 0x03070000
static CYTHON_INLINE PyObject* __Pyx_PyObject_GenericGetAttrNoDict(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GenericGetAttrNoDict PyObject_GenericGetAttr
#endif

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);

 
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

 
#if defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);

 
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);

 
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);

 
static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

 
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg);

 
typedef PyObject *(*__pyx_coroutine_body_t)(PyObject *, PyThreadState *, PyObject *);
#if CYTHON_USE_EXC_INFO_STACK
#define __Pyx_ExcInfoStruct  _PyErr_StackItem
#else
typedef struct {
    PyObject *exc_type;
    PyObject *exc_value;
    PyObject *exc_traceback;
} __Pyx_ExcInfoStruct;
#endif
typedef struct {
    PyObject_HEAD
    __pyx_coroutine_body_t body;
    PyObject *closure;
    __Pyx_ExcInfoStruct gi_exc_state;
    PyObject *gi_weakreflist;
    PyObject *classobj;
    PyObject *yieldfrom;
    PyObject *gi_name;
    PyObject *gi_qualname;
    PyObject *gi_modulename;
    PyObject *gi_code;
    PyObject *gi_frame;
    int resume_label;
    char is_running;
} __pyx_CoroutineObject;
static __pyx_CoroutineObject *__Pyx__Coroutine_New(
    PyTypeObject *type, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
    PyObject *name, PyObject *qualname, PyObject *module_name);
static __pyx_CoroutineObject *__Pyx__Coroutine_NewInit(
            __pyx_CoroutineObject *gen, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
            PyObject *name, PyObject *qualname, PyObject *module_name);
static CYTHON_INLINE void __Pyx_Coroutine_ExceptionClear(__Pyx_ExcInfoStruct *self);
static int __Pyx_Coroutine_clear(PyObject *self);
static PyObject *__Pyx_Coroutine_Send(PyObject *self, PyObject *value);
static PyObject *__Pyx_Coroutine_Close(PyObject *self);
static PyObject *__Pyx_Coroutine_Throw(PyObject *gen, PyObject *args);
#if CYTHON_USE_EXC_INFO_STACK
#define __Pyx_Coroutine_SwapException(self)
#define __Pyx_Coroutine_ResetAndClearException(self)  __Pyx_Coroutine_ExceptionClear(&(self)->gi_exc_state)
#else
#define __Pyx_Coroutine_SwapException(self) {\
    __Pyx_ExceptionSwap(&(self)->gi_exc_state.exc_type, &(self)->gi_exc_state.exc_value, &(self)->gi_exc_state.exc_traceback);\
    __Pyx_Coroutine_ResetFrameBackpointer(&(self)->gi_exc_state);\
    }
#define __Pyx_Coroutine_ResetAndClearException(self) {\
    __Pyx_ExceptionReset((self)->gi_exc_state.exc_type, (self)->gi_exc_state.exc_value, (self)->gi_exc_state.exc_traceback);\
    (self)->gi_exc_state.exc_type = (self)->gi_exc_state.exc_value = (self)->gi_exc_state.exc_traceback = NULL;\
    }
#endif
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyGen_FetchStopIterationValue(pvalue)\
    __Pyx_PyGen__FetchStopIterationValue(__pyx_tstate, pvalue)
#else
#define __Pyx_PyGen_FetchStopIterationValue(pvalue)\
    __Pyx_PyGen__FetchStopIterationValue(__Pyx_PyThreadState_Current, pvalue)
#endif
static int __Pyx_PyGen__FetchStopIterationValue(PyThreadState *tstate, PyObject **pvalue);
static CYTHON_INLINE void __Pyx_Coroutine_ResetFrameBackpointer(__Pyx_ExcInfoStruct *exc_state);

 
static PyObject* __Pyx_Coroutine_patch_module(PyObject* module, const char* py_code);

 
static int __Pyx_patch_abc(void);

 
#define __Pyx_Generator_USED
static PyTypeObject *__pyx_GeneratorType = 0;
#define __Pyx_Generator_CheckExact(obj) (Py_TYPE(obj) == __pyx_GeneratorType)
#define __Pyx_Generator_New(body, code, closure, name, qualname, module_name)\
    __Pyx__Coroutine_New(__pyx_GeneratorType, body, code, closure, name, qualname, module_name)
static PyObject *__Pyx_Generator_Next(PyObject *self);
static int __pyx_Generator_init(void);

 
static int __Pyx_check_binary_version(void);

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);


 
static PyTypeObject *__pyx_ptype_3jwt_10algorithms___pyx_scope_struct__prepare_key = 0;
static PyTypeObject *__pyx_ptype_3jwt_10algorithms___pyx_scope_struct_1_genexpr = 0;
#define __Pyx_MODULE_NAME "jwt.algorithms"
extern int __pyx_module_is_main_jwt__algorithms;
int __pyx_module_is_main_jwt__algorithms = 0;

 
static PyObject *__pyx_builtin_staticmethod;
static PyObject *__pyx_builtin_NotImplementedError;
static PyObject *__pyx_builtin_ValueError;
static PyObject *__pyx_builtin_TypeError;
static PyObject *__pyx_builtin_any;
static PyObject *__pyx_builtin_all;
static const char __pyx_k_[] = "";
static const char __pyx_k_d[] = "d";
static const char __pyx_k_e[] = "e";
static const char __pyx_k_k[] = "k";
static const char __pyx_k_n[] = "n";
static const char __pyx_k_p[] = "p";
static const char __pyx_k_q[] = "q";
static const char __pyx_k_x[] = "x";
static const char __pyx_k_y[] = "y";
static const char __pyx_k_EC[] = "EC";
static const char __pyx_k_dp[] = "dp";
static const char __pyx_k_dq[] = "dq";
static const char __pyx_k_ec[] = "ec";
static const char __pyx_k_qi[] = "qi";
static const char __pyx_k_OKP[] = "OKP";
static const char __pyx_k_PSS[] = "PSS";
static const char __pyx_k_RSA[] = "RSA";
static const char __pyx_k_Raw[] = "Raw";
static const char __pyx_k_all[] = "all";
static const char __pyx_k_any[] = "any";
static const char __pyx_k_big[] = "big";
static const char __pyx_k_crv[] = "crv";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_err[] = "err";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_jwk[] = "jwk";
static const char __pyx_k_key[] = "key";
static const char __pyx_k_kty[] = "kty";
static const char __pyx_k_mgf[] = "mgf";
static const char __pyx_k_msg[] = "msg";
static const char __pyx_k_new[] = "new";
static const char __pyx_k_obj[] = "obj";
static const char __pyx_k_oct[] = "oct";
static const char __pyx_k_oth[] = "oth";
static const char __pyx_k_sig[] = "sig";
static const char __pyx_k_ssh[] = "ssh-";
static const char __pyx_k_MGF1[] = "MGF1";
static const char __pyx_k_args[] = "args";
static const char __pyx_k_dmp1[] = "dmp1";
static const char __pyx_k_dmq1[] = "dmq1";
static const char __pyx_k_hmac[] = "hmac";
static const char __pyx_k_init[] = "__init__";
static const char __pyx_k_iqmp[] = "iqmp";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_none[] = "none";
static const char __pyx_k_prop[] = "prop";
static const char __pyx_k_self[] = "self";
static const char __pyx_k_send[] = "send";
static const char __pyx_k_sign[] = "sign";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_ECDSA[] = "ECDSA";
static const char __pyx_k_ES256[] = "ES256";
static const char __pyx_k_ES384[] = "ES384";
static const char __pyx_k_ES512[] = "ES512";
static const char __pyx_k_ES521[] = "ES521";
static const char __pyx_k_Ed448[] = "Ed448";
static const char __pyx_k_EdDSA[] = "EdDSA";
static const char __pyx_k_HS256[] = "HS256";
static const char __pyx_k_HS384[] = "HS384";
static const char __pyx_k_HS512[] = "HS512";
static const char __pyx_k_PS256[] = "PS256";
static const char __pyx_k_PS384[] = "PS384";
static const char __pyx_k_PS512[] = "PS512";
static const char __pyx_k_P_256[] = "P-256";
static const char __pyx_k_P_384[] = "P-384";
static const char __pyx_k_P_521[] = "P-521";
static const char __pyx_k_RS256[] = "RS256";
static const char __pyx_k_RS384[] = "RS384";
static const char __pyx_k_RS512[] = "RS512";
static const char __pyx_k_close[] = "close";
static const char __pyx_k_curve[] = "curve";
static const char __pyx_k_dumps[] = "dumps";
static const char __pyx_k_loads[] = "loads";
static const char __pyx_k_throw[] = "throw";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_utils[] = "utils";
static const char __pyx_k_ES256K[] = "ES256K";
static const char __pyx_k_SHA256[] = "SHA256";
static const char __pyx_k_SHA384[] = "SHA384";
static const char __pyx_k_SHA512[] = "SHA512";
static const char __pyx_k_decode[] = "decode";
static const char __pyx_k_digest[] = "digest";
static const char __pyx_k_encode[] = "encode";
static const char __pyx_k_format[] = "format";
static const char __pyx_k_hashes[] = "hashes";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_kwargs[] = "kwargs";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_sha256[] = "sha256";
static const char __pyx_k_sha384[] = "sha384";
static const char __pyx_k_sha512[] = "sha512";
static const char __pyx_k_to_jwk[] = "to_jwk";
static const char __pyx_k_update[] = "update";
static const char __pyx_k_verify[] = "verify";
static const char __pyx_k_Ed25519[] = "Ed25519";
static const char __pyx_k_der_sig[] = "der_sig";
static const char __pyx_k_genexpr[] = "genexpr";
static const char __pyx_k_hashlib[] = "hashlib";
static const char __pyx_k_key_obj[] = "key_obj";
static const char __pyx_k_key_ops[] = "key_ops";
static const char __pyx_k_numbers[] = "numbers";
static const char __pyx_k_padding[] = "padding";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_ssh_rsa[] = "ssh-rsa";
static const char __pyx_k_str_key[] = "str_key";
static const char __pyx_k_Encoding[] = "Encoding";
static const char __pyx_k_PKCS1v15[] = "PKCS1v15";
static const char __pyx_k_encoding[] = "encoding";
static const char __pyx_k_from_jwk[] = "from_jwk";
static const char __pyx_k_hash_alg[] = "hash_alg";
static const char __pyx_k_password[] = "password";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_Algorithm[] = "Algorithm";
static const char __pyx_k_SECP256K1[] = "SECP256K1";
static const char __pyx_k_SECP256R1[] = "SECP256R1";
static const char __pyx_k_SECP384R1[] = "SECP384R1";
static const char __pyx_k_SECP521R1[] = "SECP521R1";
static const char __pyx_k_TypeError[] = "TypeError";
static const char __pyx_k_byteorder[] = "byteorder";
static const char __pyx_k_curve_obj[] = "curve_obj";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_secp256k1[] = "secp256k1";
static const char __pyx_k_ValueError[] = "ValueError";
static const char __pyx_k_ecdsa_sha2[] = "ecdsa-sha2-";
static const char __pyx_k_exceptions[] = "exceptions";
static const char __pyx_k_from_bytes[] = "from_bytes";
static const char __pyx_k_has_crypto[] = "has_crypto";
static const char __pyx_k_public_key[] = "public_key";
static const char __pyx_k_startswith[] = "startswith";
static const char __pyx_k_ECAlgorithm[] = "ECAlgorithm";
static const char __pyx_k_digest_size[] = "digest_size";
static const char __pyx_k_force_bytes[] = "force_bytes";
static const char __pyx_k_other_props[] = "other_props";
static const char __pyx_k_prepare_key[] = "prepare_key";
static const char __pyx_k_private_key[] = "private_key";
static const char __pyx_k_props_found[] = "props_found";
static const char __pyx_k_salt_length[] = "salt_length";
static const char __pyx_k_BEGIN_PUBLIC[] = "-----BEGIN PUBLIC";
static const char __pyx_k_NoEncryption[] = "NoEncryption";
static const char __pyx_k_OKPAlgorithm[] = "OKPAlgorithm";
static const char __pyx_k_PublicFormat[] = "PublicFormat";
static const char __pyx_k_RSAAlgorithm[] = "RSAAlgorithm";
static const char __pyx_k_RSAPublicKey[] = "RSAPublicKey";
static const char __pyx_k_cryptography[] = "cryptography";
static const char __pyx_k_public_bytes[] = "public_bytes";
static const char __pyx_k_rsa_crt_dmp1[] = "rsa_crt_dmp1";
static const char __pyx_k_rsa_crt_dmq1[] = "rsa_crt_dmq1";
static const char __pyx_k_rsa_crt_iqmp[] = "rsa_crt_iqmp";
static const char __pyx_k_staticmethod[] = "staticmethod";
static const char __pyx_k_BEGIN_PRIVATE[] = "-----BEGIN PRIVATE";
static const char __pyx_k_HMACAlgorithm[] = "HMACAlgorithm";
static const char __pyx_k_Invalid_curve[] = "Invalid curve: ";
static const char __pyx_k_NoneAlgorithm[] = "NoneAlgorithm";
static const char __pyx_k_PrivateFormat[] = "PrivateFormat";
static const char __pyx_k_RSAPrivateKey[] = "RSAPrivateKey";
static const char __pyx_k_private_bytes[] = "private_bytes";
static const char __pyx_k_Algorithm_sign[] = "Algorithm.sign";
static const char __pyx_k_Ed448PublicKey[] = "Ed448PublicKey";
static const char __pyx_k_Not_an_RSA_key[] = "Not an RSA key";
static const char __pyx_k_compare_digest[] = "compare_digest";
static const char __pyx_k_jwt_algorithms[] = "jwt.algorithms";
static const char __pyx_k_public_numbers[] = "public_numbers";
static const char __pyx_k_Ed448PrivateKey[] = "Ed448PrivateKey";
static const char __pyx_k_InvalidKeyError[] = "InvalidKeyError";
static const char __pyx_k_Not_an_HMAC_key[] = "Not an HMAC key";
static const char __pyx_k_RSAPSSAlgorithm[] = "RSAPSSAlgorithm";
static const char __pyx_k_any_props_found[] = "any_props_found";
static const char __pyx_k_invalid_strings[] = "invalid_strings";
static const char __pyx_k_private_numbers[] = "private_numbers";
static const char __pyx_k_Algorithm_to_jwk[] = "Algorithm.to_jwk";
static const char __pyx_k_Algorithm_verify[] = "Algorithm.verify";
static const char __pyx_k_BEGIN_PUBLIC_KEY[] = "-----BEGIN PUBLIC KEY-----";
static const char __pyx_k_ECAlgorithm_sign[] = "ECAlgorithm.sign";
static const char __pyx_k_Ed25519PublicKey[] = "Ed25519PublicKey";
static const char __pyx_k_InvalidSignature[] = "InvalidSignature";
static const char __pyx_k_RSAPublicNumbers[] = "RSAPublicNumbers";
static const char __pyx_k_base64url_decode[] = "base64url_decode";
static const char __pyx_k_base64url_encode[] = "base64url_encode";
static const char __pyx_k_BEGIN_CERTIFICATE[] = "-----BEGIN CERTIFICATE-----";
static const char __pyx_k_Ed25519PrivateKey[] = "Ed25519PrivateKey";
static const char __pyx_k_OKPAlgorithm_sign[] = "OKPAlgorithm.sign";
static const char __pyx_k_RSAAlgorithm_sign[] = "RSAAlgorithm.sign";
static const char __pyx_k_RSAPrivateNumbers[] = "RSAPrivateNumbers";
static const char __pyx_k_from_public_bytes[] = "from_public_bytes";
static const char __pyx_k_to_base64url_uint[] = "to_base64url_uint";
static const char __pyx_k_Algorithm_from_jwk[] = "Algorithm.from_jwk";
static const char __pyx_k_ECAlgorithm___init[] = "ECAlgorithm.__init__";
static const char __pyx_k_ECAlgorithm_verify[] = "ECAlgorithm.verify";
static const char __pyx_k_HMACAlgorithm_sign[] = "HMACAlgorithm.sign";
static const char __pyx_k_NoneAlgorithm_sign[] = "NoneAlgorithm.sign";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_default_algorithms[] = "default_algorithms";
static const char __pyx_k_from_private_bytes[] = "from_private_bytes";
static const char __pyx_k_ModuleNotFoundError[] = "ModuleNotFoundError";
static const char __pyx_k_NotImplementedError[] = "NotImplementedError";
static const char __pyx_k_OKPAlgorithm___init[] = "OKPAlgorithm.__init__";
static const char __pyx_k_OKPAlgorithm_to_jwk[] = "OKPAlgorithm.to_jwk";
static const char __pyx_k_OKPAlgorithm_verify[] = "OKPAlgorithm.verify";
static const char __pyx_k_RSAAlgorithm___init[] = "RSAAlgorithm.__init__";
static const char __pyx_k_RSAAlgorithm_to_jwk[] = "RSAAlgorithm.to_jwk";
static const char __pyx_k_RSAAlgorithm_verify[] = "RSAAlgorithm.verify";
static const char __pyx_k_from_base64url_uint[] = "from_base64url_uint";
static const char __pyx_k_load_pem_public_key[] = "load_pem_public_key";
static const char __pyx_k_load_ssh_public_key[] = "load_ssh_public_key";
static const char __pyx_k_BEGIN_RSA_PUBLIC_KEY[] = "-----BEGIN RSA PUBLIC KEY-----";
static const char __pyx_k_ECAlgorithm_from_jwk[] = "ECAlgorithm.from_jwk";
static const char __pyx_k_HMACAlgorithm___init[] = "HMACAlgorithm.__init__";
static const char __pyx_k_HMACAlgorithm_to_jwk[] = "HMACAlgorithm.to_jwk";
static const char __pyx_k_HMACAlgorithm_verify[] = "HMACAlgorithm.verify";
static const char __pyx_k_NoneAlgorithm_verify[] = "NoneAlgorithm.verify";
static const char __pyx_k_RSAPSSAlgorithm_sign[] = "RSAPSSAlgorithm.sign";
static const char __pyx_k_der_to_raw_signature[] = "der_to_raw_signature";
static const char __pyx_k_encryption_algorithm[] = "encryption_algorithm";
static const char __pyx_k_load_pem_private_key[] = "load_pem_private_key";
static const char __pyx_k_raw_to_der_signature[] = "raw_to_der_signature";
static const char __pyx_k_Algorithm_prepare_key[] = "Algorithm.prepare_key";
static const char __pyx_k_Invalid_key_parameter[] = "Invalid key parameter";
static const char __pyx_k_Key_is_not_valid_JSON[] = "Key is not valid JSON";
static const char __pyx_k_Not_an_Octet_Key_Pair[] = "Not an Octet Key Pair";
static const char __pyx_k_OKPAlgorithm_from_jwk[] = "OKPAlgorithm.from_jwk";
static const char __pyx_k_RSAAlgorithm_from_jwk[] = "RSAAlgorithm.from_jwk";
static const char __pyx_k_requires_cryptography[] = "requires_cryptography";
static const char __pyx_k_EllipticCurvePublicKey[] = "EllipticCurvePublicKey";
static const char __pyx_k_HMACAlgorithm_from_jwk[] = "HMACAlgorithm.from_jwk";
static const char __pyx_k_RSAPSSAlgorithm_verify[] = "RSAPSSAlgorithm.verify";
static const char __pyx_k_get_default_algorithms[] = "get_default_algorithms";
static const char __pyx_k_ECAlgorithm_prepare_key[] = "ECAlgorithm.prepare_key";
static const char __pyx_k_EllipticCurvePrivateKey[] = "EllipticCurvePrivateKey";
static const char __pyx_k_cryptography_exceptions[] = "cryptography.exceptions";
static const char __pyx_k_OKPAlgorithm_prepare_key[] = "OKPAlgorithm.prepare_key";
static const char __pyx_k_RSAAlgorithm_prepare_key[] = "RSAAlgorithm.prepare_key";
static const char __pyx_k_HMACAlgorithm_prepare_key[] = "HMACAlgorithm.prepare_key";
static const char __pyx_k_NoneAlgorithm_prepare_key[] = "NoneAlgorithm.prepare_key";
static const char __pyx_k_Not_an_Elliptic_curve_key[] = "Not an Elliptic curve key";
static const char __pyx_k_rsa_recover_prime_factors[] = "rsa_recover_prime_factors";
static const char __pyx_k_EllipticCurvePublicNumbers[] = "EllipticCurvePublicNumbers";
static const char __pyx_k_D_should_be_bytes_for_curve[] = "D should be {} bytes for curve {}";
static const char __pyx_k_EllipticCurvePrivateNumbers[] = "EllipticCurvePrivateNumbers";
static const char __pyx_k_Not_a_public_or_private_key[] = "Not a public or private key";
static const char __pyx_k_OKP_should_have_x_parameter[] = "OKP should have \"x\" parameter";
static const char __pyx_k_mtf_module_jwt_algorithms_py[] = "mtf/module/jwt/algorithms.py";
static const char __pyx_k_Expecting_a_PEM_formatted_key[] = "Expecting a PEM-formatted key.";
static const char __pyx_k_The_interface_for_an_algorithm[] = "\n    The interface for an algorithm used to sign and verify tokens.\n    ";
static const char __pyx_k_cryptography_hazmat_primitives[] = "cryptography.hazmat.primitives";
static const char __pyx_k_Performs_a_signature_using_RSAS[] = "\n        Performs a signature using RSASSA-PSS with MGF1\n        ";
static const char __pyx_k_Performs_signing_and_verificati[] = "\n    Performs signing and verification operations using HMAC\n    and the specified hash function.\n    ";
static const char __pyx_k_Placeholder_for_use_when_no_sig[] = "\n    Placeholder for use when no signing or verification\n    operations are required.\n    ";
static const char __pyx_k_When_alg_none_key_value_must_be[] = "When alg = \"none\", key value must be None.";
static const char __pyx_k_Coords_should_be_32_bytes_for_cu[] = "Coords should be 32 bytes for curve P-256";
static const char __pyx_k_Coords_should_be_48_bytes_for_cu[] = "Coords should be 48 bytes for curve P-384";
static const char __pyx_k_Coords_should_be_66_bytes_for_cu[] = "Coords should be 66 bytes for curve P-521";
static const char __pyx_k_Expecting_a_EllipticCurvePrivate[] = "Expecting a EllipticCurvePrivateKey/EllipticCurvePublicKey. Wrong key provided for ECDSA algorithms";
static const char __pyx_k_Expecting_a_PEM_formatted_or_Ope[] = "Expecting a PEM-formatted or OpenSSH key.";
static const char __pyx_k_HMACAlgorithm_prepare_key_locals[] = "HMACAlgorithm.prepare_key.<locals>.genexpr";
static const char __pyx_k_RSA_key_must_include_all_paramet[] = "RSA key must include all parameters if any are present besides d";
static const char __pyx_k_The_specified_key_is_an_asymmetr[] = "The specified key is an asymmetric key or x509 certificate and should not be used as an HMAC secret.";
static const char __pyx_k_Unsupported_RSA_private_key_2_pr[] = "Unsupported RSA private key: > 2 primes not supported";
static const char __pyx_k_cryptography_hazmat_primitives_a[] = "cryptography.hazmat.primitives.asymmetric";
static const char __pyx_k_cryptography_hazmat_primitives_s[] = "cryptography.hazmat.primitives.serialization";
static const char __pyx_k_Performs_signing_and_verificati_2[] = "\n        Performs signing and verification operations using\n        RSASSA-PKCS-v1_5 and the specified hash function.\n        ";
static const char __pyx_k_Performs_signing_and_verificati_3[] = "\n        Performs signing and verification operations using\n        ECDSA and the specified hash function\n        ";
static const char __pyx_k_Performs_signing_and_verificati_4[] = "\n        Performs signing and verification operations using EdDSA\n\n        This class requires ``cryptography>=2.6`` to be installed.\n        ";
static const char __pyx_k_Coords_should_be_32_bytes_for_cu_2[] = "Coords should be 32 bytes for curve secp256k1";
static const char __pyx_k_cryptography_hazmat_primitives_a_2[] = "cryptography.hazmat.primitives.asymmetric.ec";
static const char __pyx_k_cryptography_hazmat_primitives_a_3[] = "cryptography.hazmat.primitives.asymmetric.ed448";
static const char __pyx_k_cryptography_hazmat_primitives_a_4[] = "cryptography.hazmat.primitives.asymmetric.ed25519";
static const char __pyx_k_cryptography_hazmat_primitives_a_5[] = "cryptography.hazmat.primitives.asymmetric.rsa";
static PyObject *__pyx_kp_b_;
static PyObject *__pyx_kp_u_;
static PyObject *__pyx_n_s_Algorithm;
static PyObject *__pyx_n_s_Algorithm_from_jwk;
static PyObject *__pyx_n_s_Algorithm_prepare_key;
static PyObject *__pyx_n_s_Algorithm_sign;
static PyObject *__pyx_n_s_Algorithm_to_jwk;
static PyObject *__pyx_n_s_Algorithm_verify;
static PyObject *__pyx_kp_b_BEGIN_CERTIFICATE;
static PyObject *__pyx_kp_u_BEGIN_PRIVATE;
static PyObject *__pyx_kp_u_BEGIN_PUBLIC;
static PyObject *__pyx_kp_b_BEGIN_PUBLIC_KEY;
static PyObject *__pyx_kp_b_BEGIN_RSA_PUBLIC_KEY;
static PyObject *__pyx_kp_u_Coords_should_be_32_bytes_for_cu;
static PyObject *__pyx_kp_u_Coords_should_be_32_bytes_for_cu_2;
static PyObject *__pyx_kp_u_Coords_should_be_48_bytes_for_cu;
static PyObject *__pyx_kp_u_Coords_should_be_66_bytes_for_cu;
static PyObject *__pyx_kp_u_D_should_be_bytes_for_curve;
static PyObject *__pyx_n_u_EC;
static PyObject *__pyx_n_s_ECAlgorithm;
static PyObject *__pyx_n_s_ECAlgorithm___init;
static PyObject *__pyx_n_s_ECAlgorithm_from_jwk;
static PyObject *__pyx_n_s_ECAlgorithm_prepare_key;
static PyObject *__pyx_n_s_ECAlgorithm_sign;
static PyObject *__pyx_n_s_ECAlgorithm_verify;
static PyObject *__pyx_n_s_ECDSA;
static PyObject *__pyx_n_u_ES256;
static PyObject *__pyx_n_u_ES256K;
static PyObject *__pyx_n_u_ES384;
static PyObject *__pyx_n_u_ES512;
static PyObject *__pyx_n_u_ES521;
static PyObject *__pyx_n_u_Ed25519;
static PyObject *__pyx_n_s_Ed25519PrivateKey;
static PyObject *__pyx_n_s_Ed25519PublicKey;
static PyObject *__pyx_n_u_Ed448;
static PyObject *__pyx_n_s_Ed448PrivateKey;
static PyObject *__pyx_n_s_Ed448PublicKey;
static PyObject *__pyx_n_u_EdDSA;
static PyObject *__pyx_n_s_EllipticCurvePrivateKey;
static PyObject *__pyx_n_s_EllipticCurvePrivateNumbers;
static PyObject *__pyx_n_s_EllipticCurvePublicKey;
static PyObject *__pyx_n_s_EllipticCurvePublicNumbers;
static PyObject *__pyx_n_s_Encoding;
static PyObject *__pyx_kp_u_Expecting_a_EllipticCurvePrivate;
static PyObject *__pyx_kp_u_Expecting_a_PEM_formatted_key;
static PyObject *__pyx_kp_u_Expecting_a_PEM_formatted_or_Ope;
static PyObject *__pyx_n_s_HMACAlgorithm;
static PyObject *__pyx_n_s_HMACAlgorithm___init;
static PyObject *__pyx_n_s_HMACAlgorithm_from_jwk;
static PyObject *__pyx_n_s_HMACAlgorithm_prepare_key;
static PyObject *__pyx_n_s_HMACAlgorithm_prepare_key_locals;
static PyObject *__pyx_n_s_HMACAlgorithm_sign;
static PyObject *__pyx_n_s_HMACAlgorithm_to_jwk;
static PyObject *__pyx_n_s_HMACAlgorithm_verify;
static PyObject *__pyx_n_u_HS256;
static PyObject *__pyx_n_u_HS384;
static PyObject *__pyx_n_u_HS512;
static PyObject *__pyx_n_s_InvalidKeyError;
static PyObject *__pyx_n_s_InvalidSignature;
static PyObject *__pyx_kp_u_Invalid_curve;
static PyObject *__pyx_kp_u_Invalid_key_parameter;
static PyObject *__pyx_kp_u_Key_is_not_valid_JSON;
static PyObject *__pyx_n_s_MGF1;
static PyObject *__pyx_n_s_ModuleNotFoundError;
static PyObject *__pyx_n_s_NoEncryption;
static PyObject *__pyx_n_s_NoneAlgorithm;
static PyObject *__pyx_n_s_NoneAlgorithm_prepare_key;
static PyObject *__pyx_n_s_NoneAlgorithm_sign;
static PyObject *__pyx_n_s_NoneAlgorithm_verify;
static PyObject *__pyx_n_s_NotImplementedError;
static PyObject *__pyx_kp_u_Not_a_public_or_private_key;
static PyObject *__pyx_kp_u_Not_an_Elliptic_curve_key;
static PyObject *__pyx_kp_u_Not_an_HMAC_key;
static PyObject *__pyx_kp_u_Not_an_Octet_Key_Pair;
static PyObject *__pyx_kp_u_Not_an_RSA_key;
static PyObject *__pyx_n_u_OKP;
static PyObject *__pyx_n_s_OKPAlgorithm;
static PyObject *__pyx_n_s_OKPAlgorithm___init;
static PyObject *__pyx_n_s_OKPAlgorithm_from_jwk;
static PyObject *__pyx_n_s_OKPAlgorithm_prepare_key;
static PyObject *__pyx_n_s_OKPAlgorithm_sign;
static PyObject *__pyx_n_s_OKPAlgorithm_to_jwk;
static PyObject *__pyx_n_s_OKPAlgorithm_verify;
static PyObject *__pyx_kp_u_OKP_should_have_x_parameter;
static PyObject *__pyx_n_s_PKCS1v15;
static PyObject *__pyx_n_u_PS256;
static PyObject *__pyx_n_u_PS384;
static PyObject *__pyx_n_u_PS512;
static PyObject *__pyx_n_s_PSS;
static PyObject *__pyx_kp_u_P_256;
static PyObject *__pyx_kp_u_P_384;
static PyObject *__pyx_kp_u_P_521;
static PyObject *__pyx_kp_s_Performs_a_signature_using_RSAS;
static PyObject *__pyx_kp_s_Performs_signing_and_verificati;
static PyObject *__pyx_kp_s_Performs_signing_and_verificati_2;
static PyObject *__pyx_kp_s_Performs_signing_and_verificati_3;
static PyObject *__pyx_kp_s_Performs_signing_and_verificati_4;
static PyObject *__pyx_kp_s_Placeholder_for_use_when_no_sig;
static PyObject *__pyx_n_s_PrivateFormat;
static PyObject *__pyx_n_s_PublicFormat;
static PyObject *__pyx_n_u_RS256;
static PyObject *__pyx_n_u_RS384;
static PyObject *__pyx_n_u_RS512;
static PyObject *__pyx_n_u_RSA;
static PyObject *__pyx_n_s_RSAAlgorithm;
static PyObject *__pyx_n_s_RSAAlgorithm___init;
static PyObject *__pyx_n_s_RSAAlgorithm_from_jwk;
static PyObject *__pyx_n_s_RSAAlgorithm_prepare_key;
static PyObject *__pyx_n_s_RSAAlgorithm_sign;
static PyObject *__pyx_n_s_RSAAlgorithm_to_jwk;
static PyObject *__pyx_n_s_RSAAlgorithm_verify;
static PyObject *__pyx_n_s_RSAPSSAlgorithm;
static PyObject *__pyx_n_s_RSAPSSAlgorithm_sign;
static PyObject *__pyx_n_s_RSAPSSAlgorithm_verify;
static PyObject *__pyx_n_s_RSAPrivateKey;
static PyObject *__pyx_n_s_RSAPrivateNumbers;
static PyObject *__pyx_n_s_RSAPublicKey;
static PyObject *__pyx_n_s_RSAPublicNumbers;
static PyObject *__pyx_kp_u_RSA_key_must_include_all_paramet;
static PyObject *__pyx_n_s_Raw;
static PyObject *__pyx_n_s_SECP256K1;
static PyObject *__pyx_n_s_SECP256R1;
static PyObject *__pyx_n_s_SECP384R1;
static PyObject *__pyx_n_s_SECP521R1;
static PyObject *__pyx_n_s_SHA256;
static PyObject *__pyx_n_s_SHA384;
static PyObject *__pyx_n_s_SHA512;
static PyObject *__pyx_kp_s_The_interface_for_an_algorithm;
static PyObject *__pyx_kp_u_The_specified_key_is_an_asymmetr;
static PyObject *__pyx_n_s_TypeError;
static PyObject *__pyx_kp_u_Unsupported_RSA_private_key_2_pr;
static PyObject *__pyx_n_s_ValueError;
static PyObject *__pyx_kp_u_When_alg_none_key_value_must_be;
static PyObject *__pyx_n_s_all;
static PyObject *__pyx_n_s_any;
static PyObject *__pyx_n_s_any_props_found;
static PyObject *__pyx_n_s_args;
static PyObject *__pyx_n_s_base64url_decode;
static PyObject *__pyx_n_s_base64url_encode;
static PyObject *__pyx_n_u_big;
static PyObject *__pyx_n_s_byteorder;
static PyObject *__pyx_n_s_cline_in_traceback;
static PyObject *__pyx_n_s_close;
static PyObject *__pyx_n_s_compare_digest;
static PyObject *__pyx_n_s_crv;
static PyObject *__pyx_n_u_crv;
static PyObject *__pyx_n_s_cryptography;
static PyObject *__pyx_n_s_cryptography_exceptions;
static PyObject *__pyx_n_s_cryptography_hazmat_primitives;
static PyObject *__pyx_n_s_cryptography_hazmat_primitives_a;
static PyObject *__pyx_n_s_cryptography_hazmat_primitives_a_2;
static PyObject *__pyx_n_s_cryptography_hazmat_primitives_a_3;
static PyObject *__pyx_n_s_cryptography_hazmat_primitives_a_4;
static PyObject *__pyx_n_s_cryptography_hazmat_primitives_a_5;
static PyObject *__pyx_n_s_cryptography_hazmat_primitives_s;
static PyObject *__pyx_n_s_curve;
static PyObject *__pyx_n_s_curve_obj;
static PyObject *__pyx_n_s_d;
static PyObject *__pyx_n_u_d;
static PyObject *__pyx_n_s_decode;
static PyObject *__pyx_n_s_default_algorithms;
static PyObject *__pyx_n_s_der_sig;
static PyObject *__pyx_n_s_der_to_raw_signature;
static PyObject *__pyx_n_s_digest;
static PyObject *__pyx_n_s_digest_size;
static PyObject *__pyx_n_s_dmp1;
static PyObject *__pyx_n_s_dmq1;
static PyObject *__pyx_n_s_doc;
static PyObject *__pyx_n_u_dp;
static PyObject *__pyx_n_u_dq;
static PyObject *__pyx_n_s_dumps;
static PyObject *__pyx_n_s_e;
static PyObject *__pyx_n_u_e;
static PyObject *__pyx_n_s_ec;
static PyObject *__pyx_kp_b_ecdsa_sha2;
static PyObject *__pyx_n_s_encode;
static PyObject *__pyx_n_s_encoding;
static PyObject *__pyx_n_s_encryption_algorithm;
static PyObject *__pyx_n_s_err;
static PyObject *__pyx_n_s_exceptions;
static PyObject *__pyx_n_s_force_bytes;
static PyObject *__pyx_n_s_format;
static PyObject *__pyx_n_s_from_base64url_uint;
static PyObject *__pyx_n_s_from_bytes;
static PyObject *__pyx_n_s_from_jwk;
static PyObject *__pyx_n_s_from_private_bytes;
static PyObject *__pyx_n_s_from_public_bytes;
static PyObject *__pyx_n_s_genexpr;
static PyObject *__pyx_n_s_get;
static PyObject *__pyx_n_s_get_default_algorithms;
static PyObject *__pyx_n_s_has_crypto;
static PyObject *__pyx_n_s_hash_alg;
static PyObject *__pyx_n_s_hashes;
static PyObject *__pyx_n_s_hashlib;
static PyObject *__pyx_n_s_hmac;
static PyObject *__pyx_n_s_import;
static PyObject *__pyx_n_s_init;
static PyObject *__pyx_n_s_invalid_strings;
static PyObject *__pyx_n_s_iqmp;
static PyObject *__pyx_n_s_json;
static PyObject *__pyx_n_s_jwk;
static PyObject *__pyx_n_s_jwt_algorithms;
static PyObject *__pyx_n_u_k;
static PyObject *__pyx_n_s_key;
static PyObject *__pyx_n_s_key_obj;
static PyObject *__pyx_n_u_key_ops;
static PyObject *__pyx_n_u_kty;
static PyObject *__pyx_n_s_kwargs;
static PyObject *__pyx_n_s_load_pem_private_key;
static PyObject *__pyx_n_s_load_pem_public_key;
static PyObject *__pyx_n_s_load_ssh_public_key;
static PyObject *__pyx_n_s_loads;
static PyObject *__pyx_n_s_main;
static PyObject *__pyx_n_s_metaclass;
static PyObject *__pyx_n_s_mgf;
static PyObject *__pyx_n_s_module;
static PyObject *__pyx_n_s_msg;
static PyObject *__pyx_kp_s_mtf_module_jwt_algorithms_py;
static PyObject *__pyx_n_s_n;
static PyObject *__pyx_n_u_n;
static PyObject *__pyx_n_s_name;
static PyObject *__pyx_n_s_new;
static PyObject *__pyx_n_u_none;
static PyObject *__pyx_n_s_numbers;
static PyObject *__pyx_n_s_obj;
static PyObject *__pyx_n_u_oct;
static PyObject *__pyx_n_u_oth;
static PyObject *__pyx_n_s_other_props;
static PyObject *__pyx_n_s_p;
static PyObject *__pyx_n_u_p;
static PyObject *__pyx_n_s_padding;
static PyObject *__pyx_n_s_password;
static PyObject *__pyx_n_s_prepare;
static PyObject *__pyx_n_s_prepare_key;
static PyObject *__pyx_n_s_private_bytes;
static PyObject *__pyx_n_s_private_key;
static PyObject *__pyx_n_s_private_numbers;
static PyObject *__pyx_n_u_private_numbers;
static PyObject *__pyx_n_s_prop;
static PyObject *__pyx_n_s_props_found;
static PyObject *__pyx_n_s_public_bytes;
static PyObject *__pyx_n_s_public_key;
static PyObject *__pyx_n_s_public_numbers;
static PyObject *__pyx_n_s_q;
static PyObject *__pyx_n_u_q;
static PyObject *__pyx_n_u_qi;
static PyObject *__pyx_n_s_qualname;
static PyObject *__pyx_n_s_raw_to_der_signature;
static PyObject *__pyx_n_s_requires_cryptography;
static PyObject *__pyx_n_s_rsa_crt_dmp1;
static PyObject *__pyx_n_s_rsa_crt_dmq1;
static PyObject *__pyx_n_s_rsa_crt_iqmp;
static PyObject *__pyx_n_s_rsa_recover_prime_factors;
static PyObject *__pyx_n_s_salt_length;
static PyObject *__pyx_n_u_secp256k1;
static PyObject *__pyx_n_s_self;
static PyObject *__pyx_n_s_send;
static PyObject *__pyx_n_s_sha256;
static PyObject *__pyx_n_s_sha384;
static PyObject *__pyx_n_s_sha512;
static PyObject *__pyx_n_s_sig;
static PyObject *__pyx_n_s_sign;
static PyObject *__pyx_n_u_sign;
static PyObject *__pyx_kp_u_ssh;
static PyObject *__pyx_kp_b_ssh_rsa;
static PyObject *__pyx_n_s_startswith;
static PyObject *__pyx_n_s_staticmethod;
static PyObject *__pyx_n_s_str_key;
static PyObject *__pyx_n_s_test;
static PyObject *__pyx_n_s_throw;
static PyObject *__pyx_n_s_to_base64url_uint;
static PyObject *__pyx_n_s_to_jwk;
static PyObject *__pyx_n_s_update;
static PyObject *__pyx_kp_u_utf_8;
static PyObject *__pyx_n_s_utils;
static PyObject *__pyx_n_s_verify;
static PyObject *__pyx_n_u_verify;
static PyObject *__pyx_n_s_x;
static PyObject *__pyx_n_u_x;
static PyObject *__pyx_n_s_y;
static PyObject *__pyx_n_u_y;
static PyObject *__pyx_pf_3jwt_10algorithms_get_default_algorithms(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_2sign(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_4verify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key, CYTHON_UNUSED PyObject *__pyx_v_sig);  
static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_6to_jwk(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_key_obj);  
static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_8from_jwk(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_jwk);  
static PyObject *__pyx_pf_3jwt_10algorithms_13NoneAlgorithm_prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_13NoneAlgorithm_2sign(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_13NoneAlgorithm_4verify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key, CYTHON_UNUSED PyObject *__pyx_v_sig);  
static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_hash_alg);  
static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_genexpr(PyObject *__pyx_self);  
static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_4to_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_key_obj);  
static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_6from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_8sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_10verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig);  
static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_hash_alg);  
static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_4to_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_key_obj);  
static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_6from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_8sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_10verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig);  
static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_hash_alg);  
static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_4sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_6verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig);  
static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_8from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyObject *__pyx_pf_3jwt_10algorithms_15RSAPSSAlgorithm_sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_15RSAPSSAlgorithm_2verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig);  
static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_kwargs);  
static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_4sign(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_6verify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig);  
static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_8to_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_key);  
static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_10from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyObject *__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct__prepare_key(PyTypeObject *t, PyObject *a, PyObject *k);  
static PyObject *__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct_1_genexpr(PyTypeObject *t, PyObject *a, PyObject *k);  
static __Pyx_CachedCFunction __pyx_umethod_PyDict_Type_update = {0, &__pyx_n_s_update, 0, 0, 0};
static PyObject *__pyx_int_0;
static PyObject *__pyx_int_4;
static PyObject *__pyx_slice__3;
static PyObject *__pyx_tuple__2;
static PyObject *__pyx_tuple__4;
static PyObject *__pyx_tuple__5;
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
static PyObject *__pyx_tuple__27;
static PyObject *__pyx_tuple__29;
static PyObject *__pyx_tuple__31;
static PyObject *__pyx_tuple__33;
static PyObject *__pyx_tuple__35;
static PyObject *__pyx_tuple__37;
static PyObject *__pyx_tuple__39;
static PyObject *__pyx_tuple__41;
static PyObject *__pyx_tuple__43;
static PyObject *__pyx_tuple__45;
static PyObject *__pyx_tuple__47;
static PyObject *__pyx_tuple__49;
static PyObject *__pyx_tuple__51;
static PyObject *__pyx_tuple__53;
static PyObject *__pyx_tuple__55;
static PyObject *__pyx_tuple__57;
static PyObject *__pyx_tuple__59;
static PyObject *__pyx_tuple__61;
static PyObject *__pyx_tuple__63;
static PyObject *__pyx_tuple__65;
static PyObject *__pyx_tuple__67;
static PyObject *__pyx_tuple__69;
static PyObject *__pyx_tuple__71;
static PyObject *__pyx_codeobj__6;
static PyObject *__pyx_codeobj__8;
static PyObject *__pyx_codeobj__10;
static PyObject *__pyx_codeobj__12;
static PyObject *__pyx_codeobj__14;
static PyObject *__pyx_codeobj__16;
static PyObject *__pyx_codeobj__18;
static PyObject *__pyx_codeobj__20;
static PyObject *__pyx_codeobj__22;
static PyObject *__pyx_codeobj__24;
static PyObject *__pyx_codeobj__26;
static PyObject *__pyx_codeobj__28;
static PyObject *__pyx_codeobj__30;
static PyObject *__pyx_codeobj__32;
static PyObject *__pyx_codeobj__34;
static PyObject *__pyx_codeobj__36;
static PyObject *__pyx_codeobj__38;
static PyObject *__pyx_codeobj__40;
static PyObject *__pyx_codeobj__42;
static PyObject *__pyx_codeobj__44;
static PyObject *__pyx_codeobj__46;
static PyObject *__pyx_codeobj__48;
static PyObject *__pyx_codeobj__50;
static PyObject *__pyx_codeobj__52;
static PyObject *__pyx_codeobj__54;
static PyObject *__pyx_codeobj__56;
static PyObject *__pyx_codeobj__58;
static PyObject *__pyx_codeobj__60;
static PyObject *__pyx_codeobj__62;
static PyObject *__pyx_codeobj__64;
static PyObject *__pyx_codeobj__66;
static PyObject *__pyx_codeobj__68;
static PyObject *__pyx_codeobj__70;
static PyObject *__pyx_codeobj__72;
 

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_1get_default_algorithms(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static char __pyx_doc_3jwt_10algorithms_get_default_algorithms[] = "\n    Returns the algorithms that are implemented by the library.\n    ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_1get_default_algorithms = {"get_default_algorithms", (PyCFunction)__pyx_pw_3jwt_10algorithms_1get_default_algorithms, METH_NOARGS, __pyx_doc_3jwt_10algorithms_get_default_algorithms};
static PyObject *__pyx_pw_3jwt_10algorithms_1get_default_algorithms(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_default_algorithms (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_get_default_algorithms(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_get_default_algorithms(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_default_algorithms = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_default_algorithms", 0);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_NoneAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_none, __pyx_t_2) < 0) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_HMACAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_HMACAlgorithm); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_SHA256); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_HS256, __pyx_t_2) < 0) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_HMACAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_HMACAlgorithm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SHA384); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_HS384, __pyx_t_2) < 0) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_HMACAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 81, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_HMACAlgorithm); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 81, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_SHA512); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 81, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 81, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_HS512, __pyx_t_2) < 0) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_default_algorithms = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_has_crypto); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 84, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_6 < 0)) __PYX_ERR(0, 84, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_6) {

     
    __pyx_t_1 = __Pyx_PyDict_NewPresized(12); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_RSAAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_RSAAlgorithm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SHA256); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_RS256, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_RSAAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_RSAAlgorithm); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_SHA384); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_RS384, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_RSAAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 89, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_RSAAlgorithm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 89, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SHA512); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 89, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 89, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_RS512, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_SHA256); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_ES256, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SHA256); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_ES256K, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_SHA384); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_ES384, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SHA512); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_ES521, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 94, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ECAlgorithm); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 95, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_SHA512); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 95, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 94, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_ES512, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_RSAPSSAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 97, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_RSAPSSAlgorithm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 97, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SHA256); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 97, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 97, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_PS256, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_RSAPSSAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_RSAPSSAlgorithm); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_SHA384); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_PS384, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_RSAPSSAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 99, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_RSAPSSAlgorithm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 99, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SHA512); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 99, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 99, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_PS512, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_OKPAlgorithm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 100, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 100, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_EdDSA, __pyx_t_2) < 0) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __pyx_t_2 = __Pyx_CallUnboundCMethod1(&__pyx_umethod_PyDict_Type_update, __pyx_v_default_algorithms, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 85, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
  }

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_default_algorithms);
  __pyx_r = __pyx_v_default_algorithms;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("jwt.algorithms.get_default_algorithms", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_default_algorithms);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_1prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static char __pyx_doc_3jwt_10algorithms_9Algorithm_prepare_key[] = "\n        Performs necessary validation and conversions on the key and returns\n        the key value in the proper format for sign() and verify().\n        ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_9Algorithm_1prepare_key = {"prepare_key", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_9Algorithm_1prepare_key, METH_VARARGS|METH_KEYWORDS, __pyx_doc_3jwt_10algorithms_9Algorithm_prepare_key};
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_1prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  CYTHON_UNUSED PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("prepare_key (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, 1); __PYX_ERR(0, 112, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "prepare_key") < 0)) __PYX_ERR(0, 112, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_key = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 112, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_9Algorithm_prepare_key(__pyx_self, __pyx_v_self, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("prepare_key", 0);

   
  __Pyx_Raise(__pyx_builtin_NotImplementedError, 0, 0, 0);
  __PYX_ERR(0, 117, __pyx_L1_error)

   

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_3sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static char __pyx_doc_3jwt_10algorithms_9Algorithm_2sign[] = "\n        Returns a digital signature for the specified message\n        using the specified key value.\n        ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_9Algorithm_3sign = {"sign", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_9Algorithm_3sign, METH_VARARGS|METH_KEYWORDS, __pyx_doc_3jwt_10algorithms_9Algorithm_2sign};
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_3sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  CYTHON_UNUSED PyObject *__pyx_v_msg = 0;
  CYTHON_UNUSED PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sign (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 1); __PYX_ERR(0, 119, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 2); __PYX_ERR(0, 119, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sign") < 0)) __PYX_ERR(0, 119, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 119, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_9Algorithm_2sign(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_2sign(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("sign", 0);

   
  __Pyx_Raise(__pyx_builtin_NotImplementedError, 0, 0, 0);
  __PYX_ERR(0, 124, __pyx_L1_error)

   

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_5verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static char __pyx_doc_3jwt_10algorithms_9Algorithm_4verify[] = "\n        Verifies that the specified digital signature is valid\n        for the specified message and key values.\n        ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_9Algorithm_5verify = {"verify", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_9Algorithm_5verify, METH_VARARGS|METH_KEYWORDS, __pyx_doc_3jwt_10algorithms_9Algorithm_4verify};
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_5verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  CYTHON_UNUSED PyObject *__pyx_v_msg = 0;
  CYTHON_UNUSED PyObject *__pyx_v_key = 0;
  CYTHON_UNUSED PyObject *__pyx_v_sig = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("verify (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,&__pyx_n_s_sig,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 1); __PYX_ERR(0, 126, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 2); __PYX_ERR(0, 126, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_sig)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 3); __PYX_ERR(0, 126, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "verify") < 0)) __PYX_ERR(0, 126, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
    __pyx_v_sig = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 126, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_9Algorithm_4verify(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key, __pyx_v_sig);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_4verify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key, CYTHON_UNUSED PyObject *__pyx_v_sig) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("verify", 0);

   
  __Pyx_Raise(__pyx_builtin_NotImplementedError, 0, 0, 0);
  __PYX_ERR(0, 131, __pyx_L1_error)

   

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_7to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key_obj);  
static char __pyx_doc_3jwt_10algorithms_9Algorithm_6to_jwk[] = "\n        Serializes a given RSA key into a JWK\n        ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_9Algorithm_7to_jwk = {"to_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_9Algorithm_7to_jwk, METH_O, __pyx_doc_3jwt_10algorithms_9Algorithm_6to_jwk};
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_7to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key_obj) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("to_jwk (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_9Algorithm_6to_jwk(__pyx_self, ((PyObject *)__pyx_v_key_obj));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_6to_jwk(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_key_obj) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("to_jwk", 0);

   
  __Pyx_Raise(__pyx_builtin_NotImplementedError, 0, 0, 0);
  __PYX_ERR(0, 138, __pyx_L1_error)

   

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.to_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_9from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static char __pyx_doc_3jwt_10algorithms_9Algorithm_8from_jwk[] = "\n        Deserializes a given RSA key from JWK back into a PublicKey or PrivateKey object\n        ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_9Algorithm_9from_jwk = {"from_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_9Algorithm_9from_jwk, METH_O, __pyx_doc_3jwt_10algorithms_9Algorithm_8from_jwk};
static PyObject *__pyx_pw_3jwt_10algorithms_9Algorithm_9from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("from_jwk (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_9Algorithm_8from_jwk(__pyx_self, ((PyObject *)__pyx_v_jwk));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_9Algorithm_8from_jwk(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_jwk) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("from_jwk", 0);

   
  __Pyx_Raise(__pyx_builtin_NotImplementedError, 0, 0, 0);
  __PYX_ERR(0, 145, __pyx_L1_error)

   

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.Algorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_1prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13NoneAlgorithm_1prepare_key = {"prepare_key", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_1prepare_key, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_1prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("prepare_key (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, 1); __PYX_ERR(0, 154, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "prepare_key") < 0)) __PYX_ERR(0, 154, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_key = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 154, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.NoneAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_13NoneAlgorithm_prepare_key(__pyx_self, __pyx_v_self, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13NoneAlgorithm_prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_t_1;
  int __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("prepare_key", 0);
  __Pyx_INCREF(__pyx_v_key);

   
  __pyx_t_1 = (__Pyx_PyUnicode_Equals(__pyx_v_key, __pyx_kp_u_, Py_EQ)); if (unlikely(__pyx_t_1 < 0)) __PYX_ERR(0, 155, __pyx_L1_error)
  if (__pyx_t_1) {

     
    __Pyx_INCREF(Py_None);
    __Pyx_DECREF_SET(__pyx_v_key, Py_None);

     
  }

   
  __pyx_t_1 = (__pyx_v_key != Py_None);
  __pyx_t_2 = (__pyx_t_1 != 0);
  if (unlikely(__pyx_t_2)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 159, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_kp_u_When_alg_none_key_value_must_be) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_kp_u_When_alg_none_key_value_must_be);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 159, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_Raise(__pyx_t_3, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __PYX_ERR(0, 159, __pyx_L1_error)

     
  }

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_key);
  __pyx_r = __pyx_v_key;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("jwt.algorithms.NoneAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_key);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_3sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13NoneAlgorithm_3sign = {"sign", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_3sign, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_3sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  CYTHON_UNUSED PyObject *__pyx_v_msg = 0;
  CYTHON_UNUSED PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sign (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 1); __PYX_ERR(0, 163, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 2); __PYX_ERR(0, 163, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sign") < 0)) __PYX_ERR(0, 163, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 163, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.NoneAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_13NoneAlgorithm_2sign(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13NoneAlgorithm_2sign(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sign", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_kp_b_);
  __pyx_r = __pyx_kp_b_;
  goto __pyx_L0;

   

   
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_5verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13NoneAlgorithm_5verify = {"verify", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_5verify, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13NoneAlgorithm_5verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  CYTHON_UNUSED PyObject *__pyx_v_msg = 0;
  CYTHON_UNUSED PyObject *__pyx_v_key = 0;
  CYTHON_UNUSED PyObject *__pyx_v_sig = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("verify (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,&__pyx_n_s_sig,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 1); __PYX_ERR(0, 166, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 2); __PYX_ERR(0, 166, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_sig)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 3); __PYX_ERR(0, 166, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "verify") < 0)) __PYX_ERR(0, 166, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
    __pyx_v_sig = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 166, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.NoneAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_13NoneAlgorithm_4verify(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key, __pyx_v_sig);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13NoneAlgorithm_4verify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_msg, CYTHON_UNUSED PyObject *__pyx_v_key, CYTHON_UNUSED PyObject *__pyx_v_sig) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("verify", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(Py_False);
  __pyx_r = Py_False;
  goto __pyx_L0;

   

   
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_1__init__ = {"__init__", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_1__init__, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_hash_alg = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_hash_alg,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_hash_alg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, 1); __PYX_ERR(0, 180, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "__init__") < 0)) __PYX_ERR(0, 180, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_hash_alg = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 180, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_13HMACAlgorithm___init__(__pyx_self, __pyx_v_self, __pyx_v_hash_alg);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_hash_alg) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 0);

   
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg, __pyx_v_hash_alg) < 0) __PYX_ERR(0, 181, __pyx_L1_error)

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_3prepare_key = {"prepare_key", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_3prepare_key, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("prepare_key (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, 1); __PYX_ERR(0, 183, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "prepare_key") < 0)) __PYX_ERR(0, 183, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_key = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 183, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_13HMACAlgorithm_2prepare_key(__pyx_self, __pyx_v_self, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
static PyObject *__pyx_gb_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_2generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value);  

 

static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_genexpr(PyObject *__pyx_self) {
  struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *)__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct_1_genexpr(__pyx_ptype_3jwt_10algorithms___pyx_scope_struct_1_genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 193, __pyx_L1_error)
  } else {
    __Pyx_GOTREF(__pyx_cur_scope);
  }
  __pyx_cur_scope->__pyx_outer_scope = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *) __pyx_self;
  __Pyx_INCREF(((PyObject *)__pyx_cur_scope->__pyx_outer_scope));
  __Pyx_GIVEREF(__pyx_cur_scope->__pyx_outer_scope);
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_2generator, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_HMACAlgorithm_prepare_key_locals, __pyx_n_s_jwt_algorithms); if (unlikely(!gen)) __PYX_ERR(0, 193, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.prepare_key.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF(((PyObject *)__pyx_cur_scope));
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_2generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value)  
{
  struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *__pyx_cur_scope = ((struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("genexpr", 0);
  switch (__pyx_generator->resume_label) {
    case 0: goto __pyx_L3_first_run;
    default:  
    __Pyx_RefNannyFinishContext();
    return NULL;
  }
  __pyx_L3_first_run:;
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 193, __pyx_L1_error)
  if (unlikely(!__pyx_cur_scope->__pyx_outer_scope->__pyx_v_invalid_strings)) { __Pyx_RaiseClosureNameError("invalid_strings"); __PYX_ERR(0, 193, __pyx_L1_error) }
  if (unlikely(__pyx_cur_scope->__pyx_outer_scope->__pyx_v_invalid_strings == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "'NoneType' object is not iterable");
    __PYX_ERR(0, 193, __pyx_L1_error)
  }
  __pyx_t_1 = __pyx_cur_scope->__pyx_outer_scope->__pyx_v_invalid_strings; __Pyx_INCREF(__pyx_t_1); __pyx_t_2 = 0;
  for (;;) {
    if (__pyx_t_2 >= PyList_GET_SIZE(__pyx_t_1)) break;
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_3); __pyx_t_2++; if (unlikely(0 < 0)) __PYX_ERR(0, 193, __pyx_L1_error)
    #else
    __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 193, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    #endif
    __Pyx_XGOTREF(__pyx_cur_scope->__pyx_v_string_value);
    __Pyx_XDECREF_SET(__pyx_cur_scope->__pyx_v_string_value, __pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    __pyx_t_3 = 0;
    if (unlikely(!__pyx_cur_scope->__pyx_outer_scope->__pyx_v_key)) { __Pyx_RaiseClosureNameError("key"); __PYX_ERR(0, 193, __pyx_L1_error) }
    __pyx_t_4 = (__Pyx_PySequence_ContainsTF(__pyx_cur_scope->__pyx_v_string_value, __pyx_cur_scope->__pyx_outer_scope->__pyx_v_key, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 193, __pyx_L1_error)
    __pyx_t_5 = (__pyx_t_4 != 0);
    if (__pyx_t_5) {
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_True);
      __pyx_r = Py_True;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L0;
    }
  }
    {
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(Py_False);
    __pyx_r = Py_False;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    goto __pyx_L0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  #if !CYTHON_USE_EXC_INFO_STACK
  __Pyx_Coroutine_ResetAndClearException(__pyx_generator);
  #endif
  __pyx_generator->resume_label = -1;
  __Pyx_Coroutine_clear((PyObject*)__pyx_generator);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key) {
  struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *__pyx_cur_scope;
  PyObject *__pyx_gb_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_2generator = 0;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("prepare_key", 0);
  __pyx_cur_scope = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *)__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct__prepare_key(__pyx_ptype_3jwt_10algorithms___pyx_scope_struct__prepare_key, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 183, __pyx_L1_error)
  } else {
    __Pyx_GOTREF(__pyx_cur_scope);
  }
  __pyx_cur_scope->__pyx_v_key = __pyx_v_key;
  __Pyx_INCREF(__pyx_cur_scope->__pyx_v_key);
  __Pyx_GIVEREF(__pyx_cur_scope->__pyx_v_key);

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 184, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_cur_scope->__pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_cur_scope->__pyx_v_key);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 184, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GOTREF(__pyx_cur_scope->__pyx_v_key);
  __Pyx_DECREF_SET(__pyx_cur_scope->__pyx_v_key, __pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_kp_b_BEGIN_PUBLIC_KEY);
  __Pyx_GIVEREF(__pyx_kp_b_BEGIN_PUBLIC_KEY);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_kp_b_BEGIN_PUBLIC_KEY);
  __Pyx_INCREF(__pyx_kp_b_BEGIN_CERTIFICATE);
  __Pyx_GIVEREF(__pyx_kp_b_BEGIN_CERTIFICATE);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_kp_b_BEGIN_CERTIFICATE);
  __Pyx_INCREF(__pyx_kp_b_BEGIN_RSA_PUBLIC_KEY);
  __Pyx_GIVEREF(__pyx_kp_b_BEGIN_RSA_PUBLIC_KEY);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_b_BEGIN_RSA_PUBLIC_KEY);
  __Pyx_INCREF(__pyx_kp_b_ssh_rsa);
  __Pyx_GIVEREF(__pyx_kp_b_ssh_rsa);
  PyList_SET_ITEM(__pyx_t_1, 3, __pyx_kp_b_ssh_rsa);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_invalid_strings = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __pyx_pf_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_genexpr(((PyObject*)__pyx_cur_scope)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 193, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_Generator_Next(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 193, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 193, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(__pyx_t_4)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 194, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_1, function);
      }
    }
    __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_3, __pyx_kp_u_The_specified_key_is_an_asymmetr) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_kp_u_The_specified_key_is_an_asymmetr);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 194, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_Raise(__pyx_t_2, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __PYX_ERR(0, 194, __pyx_L1_error)

     
  }

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_cur_scope->__pyx_v_key);
  __pyx_r = __pyx_cur_scope->__pyx_v_key;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_gb_3jwt_10algorithms_13HMACAlgorithm_11prepare_key_2generator);
  __Pyx_DECREF(((PyObject *)__pyx_cur_scope));
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_5to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key_obj);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_5to_jwk = {"to_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_5to_jwk, METH_O, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_5to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key_obj) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("to_jwk (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_13HMACAlgorithm_4to_jwk(__pyx_self, ((PyObject *)__pyx_v_key_obj));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_4to_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_key_obj) {
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
  PyObject *__pyx_t_9 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("to_jwk", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 203, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_dumps); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 203, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_base64url_encode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_9 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_9) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_9, __pyx_v_key_obj) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_key_obj);
  __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
    __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
    if (likely(__pyx_t_8)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
      __Pyx_INCREF(__pyx_t_8);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_6, function);
    }
  }
  __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_8, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_6);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_6, function);
    }
  }
  __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_k, __pyx_t_4) < 0) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_kty, __pyx_n_u_oct) < 0) __PYX_ERR(0, 205, __pyx_L1_error)
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 203, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
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
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.to_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_7from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_7from_jwk = {"from_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_7from_jwk, METH_O, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_7from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("from_jwk (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_13HMACAlgorithm_6from_jwk(__pyx_self, ((PyObject *)__pyx_v_jwk));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_6from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
  PyObject *__pyx_v_obj = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("from_jwk", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_4 = PyUnicode_Check(__pyx_v_jwk); 
      __pyx_t_5 = (__pyx_t_4 != 0);
      if (__pyx_t_5) {

         
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 214, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_loads); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 214, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
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
        __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_7, __pyx_v_jwk) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_jwk);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 214, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_v_obj = __pyx_t_6;
        __pyx_t_6 = 0;

         
        goto __pyx_L9;
      }

       
      __pyx_t_5 = PyDict_Check(__pyx_v_jwk); 
      __pyx_t_4 = (__pyx_t_5 != 0);
      if (likely(__pyx_t_4)) {

         
        __Pyx_INCREF(__pyx_v_jwk);
        __pyx_v_obj = __pyx_v_jwk;

         
        goto __pyx_L9;
      }

       
        {
        __Pyx_Raise(__pyx_builtin_ValueError, 0, 0, 0);
        __PYX_ERR(0, 218, __pyx_L3_error)
      }
      __pyx_L9:;

       
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

     
    __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_9) {
      __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_8, &__pyx_t_7) < 0) __PYX_ERR(0, 219, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GOTREF(__pyx_t_7);

       
      __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 220, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
        }
      }
      __pyx_t_10 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_kp_u_Key_is_not_valid_JSON) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_Key_is_not_valid_JSON);
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 220, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_Raise(__pyx_t_10, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __PYX_ERR(0, 220, __pyx_L5_except_error)
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L8_try_end:;
  }

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 222, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
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
  __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_n_u_kty) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_n_u_kty);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 222, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_t_7, __pyx_n_u_oct, Py_NE)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 222, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(__pyx_t_4)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 223, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
      }
    }
    __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Not_an_HMAC_key) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Not_an_HMAC_key);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 223, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_Raise(__pyx_t_7, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __PYX_ERR(0, 223, __pyx_L1_error)

     
  }

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_base64url_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 225, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_k); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 225, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_10 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_10, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_6);
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 225, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_r = __pyx_t_7;
  __pyx_t_7 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_obj);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_9sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_9sign = {"sign", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_9sign, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_9sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sign (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 1); __PYX_ERR(0, 227, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 2); __PYX_ERR(0, 227, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sign") < 0)) __PYX_ERR(0, 227, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 227, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_13HMACAlgorithm_8sign(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_8sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("sign", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_hmac); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 228, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_new); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 228, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 228, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[4] = {__pyx_t_5, __pyx_v_key, __pyx_v_msg, __pyx_t_3};
    __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 3+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 228, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[4] = {__pyx_t_5, __pyx_v_key, __pyx_v_msg, __pyx_t_3};
    __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 3+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 228, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  {
    __pyx_t_7 = PyTuple_New(3+__pyx_t_6); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 228, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__pyx_t_5) {
      __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_5); __pyx_t_5 = NULL;
    }
    __Pyx_INCREF(__pyx_v_key);
    __Pyx_GIVEREF(__pyx_v_key);
    PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_6, __pyx_v_key);
    __Pyx_INCREF(__pyx_v_msg);
    __Pyx_GIVEREF(__pyx_v_msg);
    PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_6, __pyx_v_msg);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_7, 2+__pyx_t_6, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_7, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 228, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  }
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_digest); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 228, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 228, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_11verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_11verify = {"verify", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_11verify, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_13HMACAlgorithm_11verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  PyObject *__pyx_v_sig = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("verify (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,&__pyx_n_s_sig,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 1); __PYX_ERR(0, 230, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 2); __PYX_ERR(0, 230, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_sig)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 3); __PYX_ERR(0, 230, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "verify") < 0)) __PYX_ERR(0, 230, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
    __pyx_v_sig = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 230, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_13HMACAlgorithm_10verify(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key, __pyx_v_sig);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_13HMACAlgorithm_10verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("verify", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_hmac); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 231, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_compare_digest); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 231, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_sign); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_v_msg, __pyx_v_key};
    __pyx_t_2 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_2);
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_v_msg, __pyx_v_key};
    __pyx_t_2 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_2);
  } else
  #endif
  {
    __pyx_t_7 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__pyx_t_5) {
      __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_5); __pyx_t_5 = NULL;
    }
    __Pyx_INCREF(__pyx_v_msg);
    __Pyx_GIVEREF(__pyx_v_msg);
    PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_6, __pyx_v_msg);
    __Pyx_INCREF(__pyx_v_key);
    __Pyx_GIVEREF(__pyx_v_key);
    PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_6, __pyx_v_key);
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_7, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  }
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  __pyx_t_6 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_6 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_v_sig, __pyx_t_2};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_v_sig, __pyx_t_2};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else
  #endif
  {
    __pyx_t_7 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__pyx_t_4) {
      __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_4); __pyx_t_4 = NULL;
    }
    __Pyx_INCREF(__pyx_v_sig);
    __Pyx_GIVEREF(__pyx_v_sig);
    PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_6, __pyx_v_sig);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_6, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_7, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("jwt.algorithms.HMACAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_1__init__ = {"__init__", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_1__init__, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_hash_alg = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_hash_alg,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_hash_alg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, 1); __PYX_ERR(0, 246, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "__init__") < 0)) __PYX_ERR(0, 246, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_hash_alg = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 246, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_12RSAAlgorithm___init__(__pyx_self, __pyx_v_self, __pyx_v_hash_alg);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_hash_alg) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 0);

   
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg, __pyx_v_hash_alg) < 0) __PYX_ERR(0, 247, __pyx_L1_error)

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_3prepare_key = {"prepare_key", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_3prepare_key, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("prepare_key (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, 1); __PYX_ERR(0, 249, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "prepare_key") < 0)) __PYX_ERR(0, 249, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_key = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 249, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_12RSAAlgorithm_2prepare_key(__pyx_self, __pyx_v_self, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  int __pyx_t_4;
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("prepare_key", 0);
  __Pyx_INCREF(__pyx_v_key);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_RSAPrivateKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 250, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RSAPublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 250, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = PyObject_IsInstance(__pyx_v_key, __pyx_t_1); 
  __pyx_t_5 = (__pyx_t_4 != 0);
  if (!__pyx_t_5) {
  } else {
    __pyx_t_3 = __pyx_t_5;
    goto __pyx_L4_bool_binop_done;
  }
  __pyx_t_5 = PyObject_IsInstance(__pyx_v_key, __pyx_t_2); 
  __pyx_t_4 = (__pyx_t_5 != 0);
  __pyx_t_3 = __pyx_t_4;
  __pyx_L4_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_4 = (__pyx_t_3 != 0);
  if (__pyx_t_4) {

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(__pyx_v_key);
    __pyx_r = __pyx_v_key;
    goto __pyx_L0;

     
  }

   
  __pyx_t_3 = PyBytes_Check(__pyx_v_key); 
  __pyx_t_5 = (__pyx_t_3 != 0);
  if (!__pyx_t_5) {
  } else {
    __pyx_t_4 = __pyx_t_5;
    goto __pyx_L7_bool_binop_done;
  }
  __pyx_t_5 = PyUnicode_Check(__pyx_v_key); 
  __pyx_t_3 = (__pyx_t_5 != 0);
  __pyx_t_4 = __pyx_t_3;
  __pyx_L7_bool_binop_done:;
  __pyx_t_3 = ((!(__pyx_t_4 != 0)) != 0);
  if (unlikely(__pyx_t_3)) {

     
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_TypeError, __pyx_tuple__2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_Raise(__pyx_t_1, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __PYX_ERR(0, 254, __pyx_L1_error)

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 256, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_key);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 256, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_1);
  __pyx_t_1 = 0;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_7, &__pyx_t_8, &__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_7);
    __Pyx_XGOTREF(__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_9);
      {

       
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_startswith); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 259, __pyx_L9_error)
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
      __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_kp_b_ssh_rsa) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_b_ssh_rsa);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 259, __pyx_L9_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_3 < 0)) __PYX_ERR(0, 259, __pyx_L9_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_3) {

         
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_load_ssh_public_key); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 260, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_6 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
          }
        }
        __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_key);
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 260, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_1);
        __pyx_t_1 = 0;

         
        goto __pyx_L15;
      }

       
        {
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_load_pem_private_key); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 262, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 262, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_INCREF(__pyx_v_key);
        __Pyx_GIVEREF(__pyx_v_key);
        PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_key);
        __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 262, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_6);
        if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_password, Py_None) < 0) __PYX_ERR(0, 262, __pyx_L9_error)
        __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_2, __pyx_t_6); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 262, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_10);
        __pyx_t_10 = 0;
      }
      __pyx_L15:;

       
    }
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    goto __pyx_L14_try_end;
    __pyx_L9_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;

     
    __pyx_t_11 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_11) {
      __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_10, &__pyx_t_6, &__pyx_t_2) < 0) __PYX_ERR(0, 263, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_2);

       
      __Pyx_GetModuleGlobalName(__pyx_t_12, __pyx_n_s_load_pem_public_key); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 264, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_12);
      __pyx_t_13 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_12))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_12);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_12, function);
        }
      }
      __pyx_t_1 = (__pyx_t_13) ? __Pyx_PyObject_Call2Args(__pyx_t_12, __pyx_t_13, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_v_key);
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 264, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_1);
      __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      goto __pyx_L10_exception_handled;
    }
    goto __pyx_L11_except_error;
    __pyx_L11_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
    goto __pyx_L1_error;
    __pyx_L10_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
    __pyx_L14_try_end:;
  }

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_key);
  __pyx_r = __pyx_v_key;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_key);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_5to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key_obj);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_5to_jwk = {"to_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_5to_jwk, METH_O, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_5to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key_obj) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("to_jwk (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_12RSAAlgorithm_4to_jwk(__pyx_self, ((PyObject *)__pyx_v_key_obj));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_4to_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_key_obj) {
  PyObject *__pyx_v_obj = NULL;
  PyObject *__pyx_v_numbers = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("to_jwk", 0);

   
  __Pyx_INCREF(Py_None);
  __pyx_v_obj = ((PyObject*)Py_None);

   
  __pyx_t_1 = __Pyx_GetAttr3(__pyx_v_key_obj, __pyx_n_u_private_numbers, Py_None); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 271, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 271, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_2) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_key_obj, __pyx_n_s_private_numbers); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_v_numbers = __pyx_t_1;
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyDict_NewPresized(10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_kty, __pyx_n_u_RSA) < 0) __PYX_ERR(0, 276, __pyx_L1_error)

     
    __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 277, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_n_u_sign);
    __Pyx_GIVEREF(__pyx_n_u_sign);
    PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_u_sign);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_key_ops, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 278, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_public_numbers); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 278, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_n); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 278, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_7);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 278, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_decode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 278, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 278, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_n, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 279, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_public_numbers); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 279, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_e); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 279, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
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
    __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 279, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 279, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 279, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_e, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 280, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_d); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 280, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 280, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_decode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 280, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 280, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_d, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 281, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_p); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 281, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
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
    __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 281, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 281, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 281, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_p, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 282, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_q); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 282, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 282, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_decode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 282, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 282, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_q, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 283, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_dmp1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 283, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
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
    __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 283, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 283, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 283, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_dp, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 284, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_dmq1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 284, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 284, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_decode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 284, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 284, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_dq, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 285, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_iqmp); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 285, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
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
    __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 285, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 285, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 285, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_qi, __pyx_t_3) < 0) __PYX_ERR(0, 276, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF_SET(__pyx_v_obj, ((PyObject*)__pyx_t_1));
    __pyx_t_1 = 0;

     
    goto __pyx_L3;
  }

   
  __pyx_t_1 = __Pyx_GetAttr3(__pyx_v_key_obj, __pyx_n_u_verify, Py_None); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 288, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 288, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (likely(__pyx_t_2)) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_key_obj, __pyx_n_s_public_numbers); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 290, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 290, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_v_numbers = __pyx_t_1;
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 293, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_kty, __pyx_n_u_RSA) < 0) __PYX_ERR(0, 293, __pyx_L1_error)

     
    __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 294, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_n_u_verify);
    __Pyx_GIVEREF(__pyx_n_u_verify);
    PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_u_verify);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_key_ops, __pyx_t_3) < 0) __PYX_ERR(0, 293, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_n); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_decode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
      }
    }
    __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_n, __pyx_t_3) < 0) __PYX_ERR(0, 293, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 296, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_e); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 296, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
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
    __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 296, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 296, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 296, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_e, __pyx_t_3) < 0) __PYX_ERR(0, 293, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF_SET(__pyx_v_obj, ((PyObject*)__pyx_t_1));
    __pyx_t_1 = 0;

     
    goto __pyx_L3;
  }

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 299, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_kp_u_Not_a_public_or_private_key) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_u_Not_a_public_or_private_key);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 299, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_Raise(__pyx_t_1, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __PYX_ERR(0, 299, __pyx_L1_error)
  }
  __pyx_L3:;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_json); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_dumps); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 301, __pyx_L1_error)
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
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_3, __pyx_v_obj) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_v_obj);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.to_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_obj);
  __Pyx_XDECREF(__pyx_v_numbers);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_7from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_7from_jwk = {"from_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_7from_jwk, METH_O, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_7from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("from_jwk (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_12RSAAlgorithm_6from_jwk(__pyx_self, ((PyObject *)__pyx_v_jwk));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_6from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
  PyObject *__pyx_v_obj = NULL;
  PyObject *__pyx_v_other_props = NULL;
  PyObject *__pyx_v_props_found = NULL;
  PyObject *__pyx_v_any_props_found = NULL;
  PyObject *__pyx_v_public_numbers = NULL;
  PyObject *__pyx_v_numbers = NULL;
  PyObject *__pyx_v_d = NULL;
  PyObject *__pyx_v_p = NULL;
  PyObject *__pyx_v_q = NULL;
  PyObject *__pyx_8genexpr1__pyx_v_prop = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  int __pyx_t_13;
  Py_ssize_t __pyx_t_14;
  PyObject *__pyx_t_15 = NULL;
  PyObject *(*__pyx_t_16)(PyObject *);
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("from_jwk", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_4 = PyUnicode_Check(__pyx_v_jwk); 
      __pyx_t_5 = (__pyx_t_4 != 0);
      if (__pyx_t_5) {

         
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_loads); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
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
        __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_7, __pyx_v_jwk) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_jwk);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 307, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_v_obj = __pyx_t_6;
        __pyx_t_6 = 0;

         
        goto __pyx_L9;
      }

       
      __pyx_t_5 = PyDict_Check(__pyx_v_jwk); 
      __pyx_t_4 = (__pyx_t_5 != 0);
      if (likely(__pyx_t_4)) {

         
        __Pyx_INCREF(__pyx_v_jwk);
        __pyx_v_obj = __pyx_v_jwk;

         
        goto __pyx_L9;
      }

       
        {
        __Pyx_Raise(__pyx_builtin_ValueError, 0, 0, 0);
        __PYX_ERR(0, 311, __pyx_L3_error)
      }
      __pyx_L9:;

       
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

     
    __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_9) {
      __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_8, &__pyx_t_7) < 0) __PYX_ERR(0, 312, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GOTREF(__pyx_t_7);

       
      __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 313, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
        }
      }
      __pyx_t_10 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_kp_u_Key_is_not_valid_JSON) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_Key_is_not_valid_JSON);
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 313, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_Raise(__pyx_t_10, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __PYX_ERR(0, 313, __pyx_L5_except_error)
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L8_try_end:;
  }

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
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
  __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_n_u_kty) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_n_u_kty);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_t_7, __pyx_n_u_RSA, Py_NE)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(__pyx_t_4)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 316, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
      }
    }
    __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Not_an_RSA_key) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Not_an_RSA_key);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 316, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_Raise(__pyx_t_7, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __PYX_ERR(0, 316, __pyx_L1_error)

     
  }

   
  __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_d, __pyx_v_obj, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 318, __pyx_L1_error)
  __pyx_t_13 = (__pyx_t_5 != 0);
  if (__pyx_t_13) {
  } else {
    __pyx_t_4 = __pyx_t_13;
    goto __pyx_L14_bool_binop_done;
  }
  __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_e, __pyx_v_obj, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 318, __pyx_L1_error)
  __pyx_t_5 = (__pyx_t_13 != 0);
  if (__pyx_t_5) {
  } else {
    __pyx_t_4 = __pyx_t_5;
    goto __pyx_L14_bool_binop_done;
  }
  __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_n, __pyx_v_obj, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 318, __pyx_L1_error)
  __pyx_t_13 = (__pyx_t_5 != 0);
  __pyx_t_4 = __pyx_t_13;
  __pyx_L14_bool_binop_done:;
  if (__pyx_t_4) {

     
    __pyx_t_4 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_oth, __pyx_v_obj, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 320, __pyx_L1_error)
    __pyx_t_13 = (__pyx_t_4 != 0);
    if (unlikely(__pyx_t_13)) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 321, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Unsupported_RSA_private_key_2_pr) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Unsupported_RSA_private_key_2_pr);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 321, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_Raise(__pyx_t_7, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __PYX_ERR(0, 321, __pyx_L1_error)

       
    }

     
    __pyx_t_7 = PyList_New(5); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 325, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_INCREF(__pyx_n_u_p);
    __Pyx_GIVEREF(__pyx_n_u_p);
    PyList_SET_ITEM(__pyx_t_7, 0, __pyx_n_u_p);
    __Pyx_INCREF(__pyx_n_u_q);
    __Pyx_GIVEREF(__pyx_n_u_q);
    PyList_SET_ITEM(__pyx_t_7, 1, __pyx_n_u_q);
    __Pyx_INCREF(__pyx_n_u_dp);
    __Pyx_GIVEREF(__pyx_n_u_dp);
    PyList_SET_ITEM(__pyx_t_7, 2, __pyx_n_u_dp);
    __Pyx_INCREF(__pyx_n_u_dq);
    __Pyx_GIVEREF(__pyx_n_u_dq);
    PyList_SET_ITEM(__pyx_t_7, 3, __pyx_n_u_dq);
    __Pyx_INCREF(__pyx_n_u_qi);
    __Pyx_GIVEREF(__pyx_n_u_qi);
    PyList_SET_ITEM(__pyx_t_7, 4, __pyx_n_u_qi);
    __pyx_v_other_props = ((PyObject*)__pyx_t_7);
    __pyx_t_7 = 0;

     
    {  
      __pyx_t_7 = PyList_New(0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 326, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __pyx_v_other_props; __Pyx_INCREF(__pyx_t_8); __pyx_t_14 = 0;
      for (;;) {
        if (__pyx_t_14 >= PyList_GET_SIZE(__pyx_t_8)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_6 = PyList_GET_ITEM(__pyx_t_8, __pyx_t_14); __Pyx_INCREF(__pyx_t_6); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 326, __pyx_L20_error)
        #else
        __pyx_t_6 = PySequence_ITEM(__pyx_t_8, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 326, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_6);
        #endif
        __Pyx_XDECREF_SET(__pyx_8genexpr1__pyx_v_prop, __pyx_t_6);
        __pyx_t_6 = 0;
        __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_8genexpr1__pyx_v_prop, __pyx_v_obj, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 326, __pyx_L20_error)
        __pyx_t_6 = __Pyx_PyBool_FromLong(__pyx_t_13); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 326, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_6);
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_7, (PyObject*)__pyx_t_6))) __PYX_ERR(0, 326, __pyx_L20_error)
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_prop); __pyx_8genexpr1__pyx_v_prop = 0;
      goto __pyx_L23_exit_scope;
      __pyx_L20_error:;
      __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_prop); __pyx_8genexpr1__pyx_v_prop = 0;
      goto __pyx_L1_error;
      __pyx_L23_exit_scope:;
    }  
    __pyx_v_props_found = ((PyObject*)__pyx_t_7);
    __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_any, __pyx_v_props_found); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 327, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_v_any_props_found = __pyx_t_7;
    __pyx_t_7 = 0;

     
    __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_v_any_props_found); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 329, __pyx_L1_error)
    if (__pyx_t_4) {
    } else {
      __pyx_t_13 = __pyx_t_4;
      goto __pyx_L25_bool_binop_done;
    }
    __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_all, __pyx_v_props_found); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 329, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_7); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 329, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_5 = ((!__pyx_t_4) != 0);
    __pyx_t_13 = __pyx_t_5;
    __pyx_L25_bool_binop_done:;
    if (unlikely(__pyx_t_13)) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 330, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_RSA_key_must_include_all_paramet) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_RSA_key_must_include_all_paramet);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 330, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_Raise(__pyx_t_7, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __PYX_ERR(0, 330, __pyx_L1_error)

       
    }

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_RSAPublicNumbers); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 334, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);

     
    __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 335, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_e); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 335, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_12 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
      __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_10);
      if (likely(__pyx_t_12)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
        __Pyx_INCREF(__pyx_t_12);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_10, function);
      }
    }
    __pyx_t_6 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_12, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_11);
    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 335, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 336, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_n); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 336, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_12);
    __pyx_t_15 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_15)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_15);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
      }
    }
    __pyx_t_10 = (__pyx_t_15) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_15, __pyx_t_12) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_12);
    __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
    __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 336, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_t_11 = NULL;
    __pyx_t_9 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_11)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_11);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_9 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_8)) {
      PyObject *__pyx_temp[3] = {__pyx_t_11, __pyx_t_6, __pyx_t_10};
      __pyx_t_7 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
      PyObject *__pyx_temp[3] = {__pyx_t_11, __pyx_t_6, __pyx_t_10};
      __pyx_t_7 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    } else
    #endif
    {
      __pyx_t_12 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      if (__pyx_t_11) {
        __Pyx_GIVEREF(__pyx_t_11); PyTuple_SET_ITEM(__pyx_t_12, 0, __pyx_t_11); __pyx_t_11 = NULL;
      }
      __Pyx_GIVEREF(__pyx_t_6);
      PyTuple_SET_ITEM(__pyx_t_12, 0+__pyx_t_9, __pyx_t_6);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_12, 1+__pyx_t_9, __pyx_t_10);
      __pyx_t_6 = 0;
      __pyx_t_10 = 0;
      __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_12, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
    }
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_v_public_numbers = __pyx_t_7;
    __pyx_t_7 = 0;

     
    __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_v_any_props_found); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 339, __pyx_L1_error)
    if (__pyx_t_13) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_RSAPrivateNumbers); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 340, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);

       
      __pyx_t_8 = __Pyx_PyDict_NewPresized(7); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_d); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_12 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_d, __pyx_t_12) < 0) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 342, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_p); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 342, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_12 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 342, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_p, __pyx_t_12) < 0) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 343, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_q); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 343, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_12 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 343, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_q, __pyx_t_12) < 0) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 344, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_dp); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 344, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_12 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 344, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_dmp1, __pyx_t_12) < 0) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 345, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_dq); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 345, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_12 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 345, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_dmq1, __pyx_t_12) < 0) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 346, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_qi); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 346, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_12 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 346, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_iqmp, __pyx_t_12) < 0) __PYX_ERR(0, 341, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

       
      if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_public_numbers, __pyx_v_public_numbers) < 0) __PYX_ERR(0, 341, __pyx_L1_error)

       
      __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_empty_tuple, __pyx_t_8); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 340, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_v_numbers = __pyx_t_12;
      __pyx_t_12 = 0;

       
      goto __pyx_L27;
    }

     
      {
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 350, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_d); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 350, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_10 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_12 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_10, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_7);
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 350, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_v_d = __pyx_t_12;
      __pyx_t_12 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_rsa_recover_prime_factors); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 351, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);

       
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_public_numbers, __pyx_n_s_n); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 352, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_public_numbers, __pyx_n_s_e); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 352, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = NULL;
      __pyx_t_9 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
          __pyx_t_9 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_8)) {
        PyObject *__pyx_temp[4] = {__pyx_t_6, __pyx_t_7, __pyx_v_d, __pyx_t_10};
        __pyx_t_12 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_9, 3+__pyx_t_9); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 351, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
        PyObject *__pyx_temp[4] = {__pyx_t_6, __pyx_t_7, __pyx_v_d, __pyx_t_10};
        __pyx_t_12 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_9, 3+__pyx_t_9); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 351, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      } else
      #endif
      {
        __pyx_t_11 = PyTuple_New(3+__pyx_t_9); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 351, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        if (__pyx_t_6) {
          __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_6); __pyx_t_6 = NULL;
        }
        __Pyx_GIVEREF(__pyx_t_7);
        PyTuple_SET_ITEM(__pyx_t_11, 0+__pyx_t_9, __pyx_t_7);
        __Pyx_INCREF(__pyx_v_d);
        __Pyx_GIVEREF(__pyx_v_d);
        PyTuple_SET_ITEM(__pyx_t_11, 1+__pyx_t_9, __pyx_v_d);
        __Pyx_GIVEREF(__pyx_t_10);
        PyTuple_SET_ITEM(__pyx_t_11, 2+__pyx_t_9, __pyx_t_10);
        __pyx_t_7 = 0;
        __pyx_t_10 = 0;
        __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_11, NULL); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 351, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if ((likely(PyTuple_CheckExact(__pyx_t_12))) || (PyList_CheckExact(__pyx_t_12))) {
        PyObject* sequence = __pyx_t_12;
        Py_ssize_t size = __Pyx_PySequence_SIZE(sequence);
        if (unlikely(size != 2)) {
          if (size > 2) __Pyx_RaiseTooManyValuesError(2);
          else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
          __PYX_ERR(0, 351, __pyx_L1_error)
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        if (likely(PyTuple_CheckExact(sequence))) {
          __pyx_t_8 = PyTuple_GET_ITEM(sequence, 0); 
          __pyx_t_11 = PyTuple_GET_ITEM(sequence, 1); 
        } else {
          __pyx_t_8 = PyList_GET_ITEM(sequence, 0); 
          __pyx_t_11 = PyList_GET_ITEM(sequence, 1); 
        }
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_11);
        #else
        __pyx_t_8 = PySequence_ITEM(sequence, 0); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 351, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_11 = PySequence_ITEM(sequence, 1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 351, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        #endif
        __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      } else {
        Py_ssize_t index = -1;
        __pyx_t_10 = PyObject_GetIter(__pyx_t_12); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 351, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        __pyx_t_16 = Py_TYPE(__pyx_t_10)->tp_iternext;
        index = 0; __pyx_t_8 = __pyx_t_16(__pyx_t_10); if (unlikely(!__pyx_t_8)) goto __pyx_L28_unpacking_failed;
        __Pyx_GOTREF(__pyx_t_8);
        index = 1; __pyx_t_11 = __pyx_t_16(__pyx_t_10); if (unlikely(!__pyx_t_11)) goto __pyx_L28_unpacking_failed;
        __Pyx_GOTREF(__pyx_t_11);
        if (__Pyx_IternextUnpackEndCheck(__pyx_t_16(__pyx_t_10), 2) < 0) __PYX_ERR(0, 351, __pyx_L1_error)
        __pyx_t_16 = NULL;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        goto __pyx_L29_unpacking_done;
        __pyx_L28_unpacking_failed:;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_t_16 = NULL;
        if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
        __PYX_ERR(0, 351, __pyx_L1_error)
        __pyx_L29_unpacking_done:;
      }

       
      __pyx_v_p = __pyx_t_8;
      __pyx_t_8 = 0;
      __pyx_v_q = __pyx_t_11;
      __pyx_t_11 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_12, __pyx_n_s_RSAPrivateNumbers); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 355, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);

       
      __pyx_t_11 = __Pyx_PyDict_NewPresized(7); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 356, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_d, __pyx_v_d) < 0) __PYX_ERR(0, 356, __pyx_L1_error)

       
      if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_p, __pyx_v_p) < 0) __PYX_ERR(0, 356, __pyx_L1_error)

       
      if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_q, __pyx_v_q) < 0) __PYX_ERR(0, 356, __pyx_L1_error)

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_rsa_crt_dmp1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 359, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_7 = NULL;
      __pyx_t_9 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
          __pyx_t_9 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_10)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_d, __pyx_v_p};
        __pyx_t_8 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 359, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_8);
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_d, __pyx_v_p};
        __pyx_t_8 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 359, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_8);
      } else
      #endif
      {
        __pyx_t_6 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 359, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_v_d);
        __Pyx_GIVEREF(__pyx_v_d);
        PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_9, __pyx_v_d);
        __Pyx_INCREF(__pyx_v_p);
        __Pyx_GIVEREF(__pyx_v_p);
        PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_9, __pyx_v_p);
        __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_6, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 359, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_dmp1, __pyx_t_8) < 0) __PYX_ERR(0, 356, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_rsa_crt_dmq1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 360, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_6 = NULL;
      __pyx_t_9 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
          __pyx_t_9 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_10)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_v_d, __pyx_v_q};
        __pyx_t_8 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 360, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_8);
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
        PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_v_d, __pyx_v_q};
        __pyx_t_8 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 360, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_8);
      } else
      #endif
      {
        __pyx_t_7 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 360, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
        if (__pyx_t_6) {
          __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_6); __pyx_t_6 = NULL;
        }
        __Pyx_INCREF(__pyx_v_d);
        __Pyx_GIVEREF(__pyx_v_d);
        PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_9, __pyx_v_d);
        __Pyx_INCREF(__pyx_v_q);
        __Pyx_GIVEREF(__pyx_v_q);
        PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_9, __pyx_v_q);
        __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_7, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 360, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_dmq1, __pyx_t_8) < 0) __PYX_ERR(0, 356, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_rsa_crt_iqmp); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 361, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_7 = NULL;
      __pyx_t_9 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
          __pyx_t_9 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_10)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_p, __pyx_v_q};
        __pyx_t_8 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 361, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_8);
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_p, __pyx_v_q};
        __pyx_t_8 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 361, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_8);
      } else
      #endif
      {
        __pyx_t_6 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 361, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_v_p);
        __Pyx_GIVEREF(__pyx_v_p);
        PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_9, __pyx_v_p);
        __Pyx_INCREF(__pyx_v_q);
        __Pyx_GIVEREF(__pyx_v_q);
        PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_9, __pyx_v_q);
        __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_6, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 361, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_iqmp, __pyx_t_8) < 0) __PYX_ERR(0, 356, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

       
      if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_public_numbers, __pyx_v_public_numbers) < 0) __PYX_ERR(0, 356, __pyx_L1_error)

       
      __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_12, __pyx_empty_tuple, __pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 355, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_v_numbers = __pyx_t_8;
      __pyx_t_8 = 0;
    }
    __pyx_L27:;

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_private_key); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 365, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_12 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_12)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_12);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
      }
    }
    __pyx_t_8 = (__pyx_t_12) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_12) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
    if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 365, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_r = __pyx_t_8;
    __pyx_t_8 = 0;
    goto __pyx_L0;

     
  }

   
  __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_n, __pyx_v_obj, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 366, __pyx_L1_error)
  __pyx_t_4 = (__pyx_t_5 != 0);
  if (__pyx_t_4) {
  } else {
    __pyx_t_13 = __pyx_t_4;
    goto __pyx_L30_bool_binop_done;
  }
  __pyx_t_4 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_e, __pyx_v_obj, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 366, __pyx_L1_error)
  __pyx_t_5 = (__pyx_t_4 != 0);
  __pyx_t_13 = __pyx_t_5;
  __pyx_L30_bool_binop_done:;
  if (likely(__pyx_t_13)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_RSAPublicNumbers); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 368, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);

     
    __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 369, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_e); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 369, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_10);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_10, function);
      }
    }
    __pyx_t_12 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 369, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_12);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 370, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_v_obj, __pyx_n_u_n); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 370, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_15 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_15)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_15);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
      }
    }
    __pyx_t_10 = (__pyx_t_15) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_15, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7);
    __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 370, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = NULL;
    __pyx_t_9 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
        __pyx_t_9 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_11)) {
      PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_t_12, __pyx_t_10};
      __pyx_t_8 = __Pyx_PyFunction_FastCall(__pyx_t_11, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 368, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_11)) {
      PyObject *__pyx_temp[3] = {__pyx_t_6, __pyx_t_12, __pyx_t_10};
      __pyx_t_8 = __Pyx_PyCFunction_FastCall(__pyx_t_11, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 368, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    } else
    #endif
    {
      __pyx_t_7 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 368, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      if (__pyx_t_6) {
        __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_6); __pyx_t_6 = NULL;
      }
      __Pyx_GIVEREF(__pyx_t_12);
      PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_9, __pyx_t_12);
      __Pyx_GIVEREF(__pyx_t_10);
      PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_9, __pyx_t_10);
      __pyx_t_12 = 0;
      __pyx_t_10 = 0;
      __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_7, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 368, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_v_numbers = __pyx_t_8;
    __pyx_t_8 = 0;

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_numbers, __pyx_n_s_public_key); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 373, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
      }
    }
    __pyx_t_8 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 373, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_r = __pyx_t_8;
    __pyx_t_8 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 375, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
      }
    }
    __pyx_t_8 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_7, __pyx_kp_u_Not_a_public_or_private_key) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_Not_a_public_or_private_key);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 375, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_Raise(__pyx_t_8, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __PYX_ERR(0, 375, __pyx_L1_error)
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_15);
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_obj);
  __Pyx_XDECREF(__pyx_v_other_props);
  __Pyx_XDECREF(__pyx_v_props_found);
  __Pyx_XDECREF(__pyx_v_any_props_found);
  __Pyx_XDECREF(__pyx_v_public_numbers);
  __Pyx_XDECREF(__pyx_v_numbers);
  __Pyx_XDECREF(__pyx_v_d);
  __Pyx_XDECREF(__pyx_v_p);
  __Pyx_XDECREF(__pyx_v_q);
  __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_prop);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_9sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_9sign = {"sign", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_9sign, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_9sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sign (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 1); __PYX_ERR(0, 377, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 2); __PYX_ERR(0, 377, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sign") < 0)) __PYX_ERR(0, 377, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 377, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_12RSAAlgorithm_8sign(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_8sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("sign", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_sign); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_padding); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_PKCS1v15); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_5 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  __pyx_t_7 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_7 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_4, __pyx_v_msg, __pyx_t_3, __pyx_t_5};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_7, 3+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_4, __pyx_v_msg, __pyx_t_3, __pyx_t_5};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_7, 3+__pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  } else
  #endif
  {
    __pyx_t_6 = PyTuple_New(3+__pyx_t_7); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (__pyx_t_4) {
      __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_4); __pyx_t_4 = NULL;
    }
    __Pyx_INCREF(__pyx_v_msg);
    __Pyx_GIVEREF(__pyx_v_msg);
    PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_7, __pyx_v_msg);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_7, __pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_6, 2+__pyx_t_7, __pyx_t_5);
    __pyx_t_3 = 0;
    __pyx_t_5 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_11verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_11verify = {"verify", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_11verify, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12RSAAlgorithm_11verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  PyObject *__pyx_v_sig = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("verify (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,&__pyx_n_s_sig,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 1); __PYX_ERR(0, 380, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 2); __PYX_ERR(0, 380, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_sig)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 3); __PYX_ERR(0, 380, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "verify") < 0)) __PYX_ERR(0, 380, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
    __pyx_v_sig = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 380, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_12RSAAlgorithm_10verify(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key, __pyx_v_sig);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12RSAAlgorithm_10verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig) {
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
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("verify", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_verify); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_padding); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_PKCS1v15); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
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
      __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_9 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_8 = (__pyx_t_9) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_9) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 382, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_10 = 0;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_10 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[5] = {__pyx_t_7, __pyx_v_sig, __pyx_v_msg, __pyx_t_6, __pyx_t_8};
        __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_10, 4+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 382, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[5] = {__pyx_t_7, __pyx_v_sig, __pyx_v_msg, __pyx_t_6, __pyx_t_8};
        __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_10, 4+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 382, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      } else
      #endif
      {
        __pyx_t_9 = PyTuple_New(4+__pyx_t_10); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 382, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_v_sig);
        __Pyx_GIVEREF(__pyx_v_sig);
        PyTuple_SET_ITEM(__pyx_t_9, 0+__pyx_t_10, __pyx_v_sig);
        __Pyx_INCREF(__pyx_v_msg);
        __Pyx_GIVEREF(__pyx_v_msg);
        PyTuple_SET_ITEM(__pyx_t_9, 1+__pyx_t_10, __pyx_v_msg);
        __Pyx_GIVEREF(__pyx_t_6);
        PyTuple_SET_ITEM(__pyx_t_9, 2+__pyx_t_10, __pyx_t_6);
        __Pyx_GIVEREF(__pyx_t_8);
        PyTuple_SET_ITEM(__pyx_t_9, 3+__pyx_t_10, __pyx_t_8);
        __pyx_t_6 = 0;
        __pyx_t_8 = 0;
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_9, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 382, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_True);
      __pyx_r = Py_True;
      goto __pyx_L7_try_return;

       
    }
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __Pyx_ErrFetch(&__pyx_t_4, &__pyx_t_5, &__pyx_t_9);
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidSignature); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 384, __pyx_L5_except_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_10 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_4, __pyx_t_8);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_ErrRestore(__pyx_t_4, __pyx_t_5, __pyx_t_9);
    __pyx_t_4 = 0; __pyx_t_5 = 0; __pyx_t_9 = 0;
    if (__pyx_t_10) {
      __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_9, &__pyx_t_5, &__pyx_t_4) < 0) __PYX_ERR(0, 384, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_4);

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_False);
      __pyx_r = Py_False;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      goto __pyx_L6_except_return;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L7_try_return:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L0;
    __pyx_L6_except_return:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_AddTraceback("jwt.algorithms.RSAAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_11ECAlgorithm_1__init__ = {"__init__", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_11ECAlgorithm_1__init__, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_hash_alg = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_hash_alg,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_hash_alg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, 1); __PYX_ERR(0, 397, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "__init__") < 0)) __PYX_ERR(0, 397, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_hash_alg = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 397, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_11ECAlgorithm___init__(__pyx_self, __pyx_v_self, __pyx_v_hash_alg);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_hash_alg) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 0);

   
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg, __pyx_v_hash_alg) < 0) __PYX_ERR(0, 398, __pyx_L1_error)

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_11ECAlgorithm_3prepare_key = {"prepare_key", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_11ECAlgorithm_3prepare_key, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("prepare_key (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, 1); __PYX_ERR(0, 400, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "prepare_key") < 0)) __PYX_ERR(0, 400, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_key = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 400, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_11ECAlgorithm_2prepare_key(__pyx_self, __pyx_v_self, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  int __pyx_t_4;
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("prepare_key", 0);
  __Pyx_INCREF(__pyx_v_key);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_EllipticCurvePrivateKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_EllipticCurvePublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = PyObject_IsInstance(__pyx_v_key, __pyx_t_1); 
  __pyx_t_5 = (__pyx_t_4 != 0);
  if (!__pyx_t_5) {
  } else {
    __pyx_t_3 = __pyx_t_5;
    goto __pyx_L4_bool_binop_done;
  }
  __pyx_t_5 = PyObject_IsInstance(__pyx_v_key, __pyx_t_2); 
  __pyx_t_4 = (__pyx_t_5 != 0);
  __pyx_t_3 = __pyx_t_4;
  __pyx_L4_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_4 = (__pyx_t_3 != 0);
  if (__pyx_t_4) {

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(__pyx_v_key);
    __pyx_r = __pyx_v_key;
    goto __pyx_L0;

     
  }

   
  __pyx_t_3 = PyBytes_Check(__pyx_v_key); 
  __pyx_t_5 = (__pyx_t_3 != 0);
  if (!__pyx_t_5) {
  } else {
    __pyx_t_4 = __pyx_t_5;
    goto __pyx_L7_bool_binop_done;
  }
  __pyx_t_5 = PyUnicode_Check(__pyx_v_key); 
  __pyx_t_3 = (__pyx_t_5 != 0);
  __pyx_t_4 = __pyx_t_3;
  __pyx_L7_bool_binop_done:;
  __pyx_t_3 = ((!(__pyx_t_4 != 0)) != 0);
  if (unlikely(__pyx_t_3)) {

     
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_TypeError, __pyx_tuple__2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 405, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_Raise(__pyx_t_1, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __PYX_ERR(0, 405, __pyx_L1_error)

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 407, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
    }
  }
  __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_key);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 407, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_1);
  __pyx_t_1 = 0;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_7, &__pyx_t_8, &__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_7);
    __Pyx_XGOTREF(__pyx_t_8);
    __Pyx_XGOTREF(__pyx_t_9);
      {

       
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_startswith); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 413, __pyx_L9_error)
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
      __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_kp_b_ecdsa_sha2) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_b_ecdsa_sha2);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 413, __pyx_L9_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_3 < 0)) __PYX_ERR(0, 413, __pyx_L9_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_3) {

         
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_load_ssh_public_key); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 414, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_6 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
          }
        }
        __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_key);
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 414, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_1);
        __pyx_t_1 = 0;

         
        goto __pyx_L15;
      }

       
        {
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_load_pem_public_key); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 416, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_6 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
          }
        }
        __pyx_t_1 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_6, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_key);
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 416, __pyx_L9_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_1);
        __pyx_t_1 = 0;
      }
      __pyx_L15:;

       
    }
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    goto __pyx_L14_try_end;
    __pyx_L9_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;

     
    __pyx_t_10 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_10) {
      __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_2, &__pyx_t_6) < 0) __PYX_ERR(0, 417, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_6);

       
      __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_load_pem_private_key); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 418, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = PyTuple_New(1); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 418, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_INCREF(__pyx_v_key);
      __Pyx_GIVEREF(__pyx_v_key);
      PyTuple_SET_ITEM(__pyx_t_12, 0, __pyx_v_key);
      __pyx_t_13 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 418, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_13);
      if (PyDict_SetItem(__pyx_t_13, __pyx_n_s_password, Py_None) < 0) __PYX_ERR(0, 418, __pyx_L11_except_error)
      __pyx_t_14 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_12, __pyx_t_13); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 418, __pyx_L11_except_error)
      __Pyx_GOTREF(__pyx_t_14);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
      __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_14);
      __pyx_t_14 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      goto __pyx_L10_exception_handled;
    }
    goto __pyx_L11_except_error;
    __pyx_L11_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
    goto __pyx_L1_error;
    __pyx_L10_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_7);
    __Pyx_XGIVEREF(__pyx_t_8);
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
    __pyx_L14_try_end:;
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_EllipticCurvePrivateKey); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_EllipticCurvePublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = PyObject_IsInstance(__pyx_v_key, __pyx_t_6); 
  __pyx_t_5 = (__pyx_t_4 != 0);
  if (!__pyx_t_5) {
  } else {
    __pyx_t_3 = __pyx_t_5;
    goto __pyx_L19_bool_binop_done;
  }
  __pyx_t_5 = PyObject_IsInstance(__pyx_v_key, __pyx_t_2); 
  __pyx_t_4 = (__pyx_t_5 != 0);
  __pyx_t_3 = __pyx_t_4;
  __pyx_L19_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_4 = ((!(__pyx_t_3 != 0)) != 0);
  if (unlikely(__pyx_t_4)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 422, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_1)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_1);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_6 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_kp_u_Expecting_a_EllipticCurvePrivate) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u_Expecting_a_EllipticCurvePrivate);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 422, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_Raise(__pyx_t_6, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __PYX_ERR(0, 422, __pyx_L1_error)

     
  }

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_key);
  __pyx_r = __pyx_v_key;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_key);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_5sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_11ECAlgorithm_5sign = {"sign", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_11ECAlgorithm_5sign, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_5sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sign (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 1); __PYX_ERR(0, 428, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 2); __PYX_ERR(0, 428, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sign") < 0)) __PYX_ERR(0, 428, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 428, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_11ECAlgorithm_4sign(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_4sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key) {
  PyObject *__pyx_v_der_sig = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_t_8;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("sign", 0);

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_sign); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ec); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_ECDSA); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_6, function);
    }
  }
  __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_3 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  __pyx_t_8 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_8 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_v_msg, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 429, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_5, __pyx_v_msg, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 429, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  {
    __pyx_t_4 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 429, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (__pyx_t_5) {
      __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_5); __pyx_t_5 = NULL;
    }
    __Pyx_INCREF(__pyx_v_msg);
    __Pyx_GIVEREF(__pyx_v_msg);
    PyTuple_SET_ITEM(__pyx_t_4, 0+__pyx_t_8, __pyx_v_msg);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 1+__pyx_t_8, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 429, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_der_sig = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_der_to_raw_signature); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 431, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_curve); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 431, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_3 = NULL;
  __pyx_t_8 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_8 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_v_der_sig, __pyx_t_4};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[3] = {__pyx_t_3, __pyx_v_der_sig, __pyx_t_4};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  } else
  #endif
  {
    __pyx_t_5 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 431, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (__pyx_t_3) {
      __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_3); __pyx_t_3 = NULL;
    }
    __Pyx_INCREF(__pyx_v_der_sig);
    __Pyx_GIVEREF(__pyx_v_der_sig);
    PyTuple_SET_ITEM(__pyx_t_5, 0+__pyx_t_8, __pyx_v_der_sig);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_5, 1+__pyx_t_8, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_5, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_der_sig);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_7verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_11ECAlgorithm_7verify = {"verify", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_11ECAlgorithm_7verify, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_7verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  PyObject *__pyx_v_sig = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("verify (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,&__pyx_n_s_sig,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 1); __PYX_ERR(0, 433, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 2); __PYX_ERR(0, 433, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_sig)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 3); __PYX_ERR(0, 433, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "verify") < 0)) __PYX_ERR(0, 433, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
    __pyx_v_sig = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 433, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_11ECAlgorithm_6verify(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key, __pyx_v_sig);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_6verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig) {
  PyObject *__pyx_v_der_sig = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  int __pyx_t_11;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("verify", 0);
  __Pyx_INCREF(__pyx_v_key);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_raw_to_der_signature); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 435, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_curve); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 435, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_8 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_sig, __pyx_t_6};
        __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 435, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_sig, __pyx_t_6};
        __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 435, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      } else
      #endif
      {
        __pyx_t_9 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 435, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_9);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_v_sig);
        __Pyx_GIVEREF(__pyx_v_sig);
        PyTuple_SET_ITEM(__pyx_t_9, 0+__pyx_t_8, __pyx_v_sig);
        __Pyx_GIVEREF(__pyx_t_6);
        PyTuple_SET_ITEM(__pyx_t_9, 1+__pyx_t_8, __pyx_t_6);
        __pyx_t_6 = 0;
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_9, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 435, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_v_der_sig = __pyx_t_4;
      __pyx_t_4 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_8) {
      __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_5, &__pyx_t_9) < 0) __PYX_ERR(0, 436, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_9);

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_False);
      __pyx_r = Py_False;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      goto __pyx_L6_except_return;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L6_except_return:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L0;
    __pyx_L8_try_end:;
  }

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_2, &__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_1);
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_EllipticCurvePrivateKey); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 440, __pyx_L11_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = PyObject_IsInstance(__pyx_v_key, __pyx_t_9); if (unlikely(__pyx_t_10 == ((int)-1))) __PYX_ERR(0, 440, __pyx_L11_error)
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_11 = (__pyx_t_10 != 0);
      if (__pyx_t_11) {

         
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_public_key); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 441, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_4 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_4)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_4);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
          }
        }
        __pyx_t_9 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 441, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_9);
        __pyx_t_9 = 0;

         
      }

       
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_verify); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 442, __pyx_L11_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ec); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 442, __pyx_L11_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_ECDSA); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 442, __pyx_L11_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 442, __pyx_L11_error)
      __Pyx_GOTREF(__pyx_t_12);
      __pyx_t_13 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_12))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_12);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_12, function);
        }
      }
      __pyx_t_6 = (__pyx_t_13) ? __Pyx_PyObject_CallOneArg(__pyx_t_12, __pyx_t_13) : __Pyx_PyObject_CallNoArg(__pyx_t_12);
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 442, __pyx_L11_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __pyx_t_12 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_4 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_12, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_6);
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 442, __pyx_L11_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_8 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[4] = {__pyx_t_7, __pyx_v_der_sig, __pyx_v_msg, __pyx_t_4};
        __pyx_t_9 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_8, 3+__pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 442, __pyx_L11_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[4] = {__pyx_t_7, __pyx_v_der_sig, __pyx_v_msg, __pyx_t_4};
        __pyx_t_9 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_8, 3+__pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 442, __pyx_L11_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      } else
      #endif
      {
        __pyx_t_6 = PyTuple_New(3+__pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 442, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_6);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_v_der_sig);
        __Pyx_GIVEREF(__pyx_v_der_sig);
        PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_8, __pyx_v_der_sig);
        __Pyx_INCREF(__pyx_v_msg);
        __Pyx_GIVEREF(__pyx_v_msg);
        PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_8, __pyx_v_msg);
        __Pyx_GIVEREF(__pyx_t_4);
        PyTuple_SET_ITEM(__pyx_t_6, 2+__pyx_t_8, __pyx_t_4);
        __pyx_t_4 = 0;
        __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_6, NULL); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 442, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_True);
      __pyx_r = Py_True;
      goto __pyx_L15_try_return;

       
    }
    __pyx_L11_error:;
    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
    __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __Pyx_ErrFetch(&__pyx_t_9, &__pyx_t_5, &__pyx_t_6);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_InvalidSignature); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 444, __pyx_L13_except_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_8 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_9, __pyx_t_4);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_ErrRestore(__pyx_t_9, __pyx_t_5, __pyx_t_6);
    __pyx_t_9 = 0; __pyx_t_5 = 0; __pyx_t_6 = 0;
    if (__pyx_t_8) {
      __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_5, &__pyx_t_9) < 0) __PYX_ERR(0, 444, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_9);

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_False);
      __pyx_r = Py_False;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      goto __pyx_L14_except_return;
    }
    goto __pyx_L13_except_error;
    __pyx_L13_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_2, __pyx_t_1);
    goto __pyx_L1_error;
    __pyx_L15_try_return:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_2, __pyx_t_1);
    goto __pyx_L0;
    __pyx_L14_except_return:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_2, __pyx_t_1);
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_der_sig);
  __Pyx_XDECREF(__pyx_v_key);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_9from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_11ECAlgorithm_9from_jwk = {"from_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_11ECAlgorithm_9from_jwk, METH_O, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_11ECAlgorithm_9from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("from_jwk (wrapper)", 0);
  __pyx_r = __pyx_pf_3jwt_10algorithms_11ECAlgorithm_8from_jwk(__pyx_self, ((PyObject *)__pyx_v_jwk));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_11ECAlgorithm_8from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
  PyObject *__pyx_v_obj = NULL;
  PyObject *__pyx_v_x = NULL;
  PyObject *__pyx_v_y = NULL;
  PyObject *__pyx_v_curve = NULL;
  PyObject *__pyx_v_curve_obj = NULL;
  PyObject *__pyx_v_public_numbers = NULL;
  PyObject *__pyx_v_d = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  int __pyx_t_13;
  Py_ssize_t __pyx_t_14;
  Py_ssize_t __pyx_t_15;
  PyObject *__pyx_t_16 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("from_jwk", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_4 = PyUnicode_Check(__pyx_v_jwk); 
      __pyx_t_5 = (__pyx_t_4 != 0);
      if (__pyx_t_5) {

         
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 451, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_loads); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 451, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
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
        __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_7, __pyx_v_jwk) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_jwk);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 451, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_v_obj = __pyx_t_6;
        __pyx_t_6 = 0;

         
        goto __pyx_L9;
      }

       
      __pyx_t_5 = PyDict_Check(__pyx_v_jwk); 
      __pyx_t_4 = (__pyx_t_5 != 0);
      if (likely(__pyx_t_4)) {

         
        __Pyx_INCREF(__pyx_v_jwk);
        __pyx_v_obj = __pyx_v_jwk;

         
        goto __pyx_L9;
      }

       
        {
        __Pyx_Raise(__pyx_builtin_ValueError, 0, 0, 0);
        __PYX_ERR(0, 455, __pyx_L3_error)
      }
      __pyx_L9:;

       
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

     
    __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_9) {
      __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_8, &__pyx_t_7) < 0) __PYX_ERR(0, 456, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GOTREF(__pyx_t_7);

       
      __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 457, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
        }
      }
      __pyx_t_10 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_kp_u_Key_is_not_valid_JSON) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_Key_is_not_valid_JSON);
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 457, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_Raise(__pyx_t_10, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __PYX_ERR(0, 457, __pyx_L5_except_error)
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L8_try_end:;
  }

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 459, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
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
  __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_n_u_kty) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_n_u_kty);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 459, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_t_7, __pyx_n_u_EC, Py_NE)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 459, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(__pyx_t_4)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 460, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
      }
    }
    __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Not_an_Elliptic_curve_key) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Not_an_Elliptic_curve_key);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 460, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_Raise(__pyx_t_7, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __PYX_ERR(0, 460, __pyx_L1_error)

     
  }

   
  __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_x, __pyx_v_obj, Py_NE)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 462, __pyx_L1_error)
  __pyx_t_13 = (__pyx_t_5 != 0);
  if (!__pyx_t_13) {
  } else {
    __pyx_t_4 = __pyx_t_13;
    goto __pyx_L14_bool_binop_done;
  }
  __pyx_t_13 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_y, __pyx_v_obj, Py_NE)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 462, __pyx_L1_error)
  __pyx_t_5 = (__pyx_t_13 != 0);
  __pyx_t_4 = __pyx_t_5;
  __pyx_L14_bool_binop_done:;
  if (unlikely(__pyx_t_4)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 463, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
      }
    }
    __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Not_an_Elliptic_curve_key) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Not_an_Elliptic_curve_key);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 463, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_Raise(__pyx_t_7, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __PYX_ERR(0, 463, __pyx_L1_error)

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_base64url_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 465, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 465, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __pyx_t_11 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_10, function);
    }
  }
  __pyx_t_6 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_n_u_x) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_n_u_x);
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 465, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __pyx_t_10 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_10, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_6);
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 465, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_v_x = __pyx_t_7;
  __pyx_t_7 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_base64url_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 466, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 466, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __pyx_t_11 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_10, function);
    }
  }
  __pyx_t_6 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_n_u_y) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_n_u_y);
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 466, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __pyx_t_10 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_10, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_6);
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 466, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_v_y = __pyx_t_7;
  __pyx_t_7 = 0;

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 468, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
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
  __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_n_u_crv) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_n_u_crv);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 468, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_v_curve = __pyx_t_7;
  __pyx_t_7 = 0;

   
  __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_kp_u_P_256, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 469, __pyx_L1_error)
  if (__pyx_t_4) {

     
    __pyx_t_14 = PyObject_Length(__pyx_v_x); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 470, __pyx_L1_error)
    __pyx_t_15 = PyObject_Length(__pyx_v_y); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 470, __pyx_L1_error)
    __pyx_t_4 = (__pyx_t_14 == __pyx_t_15);
    if (__pyx_t_4) {
      __pyx_t_4 = (__pyx_t_15 == 32);
    }
    __pyx_t_5 = (__pyx_t_4 != 0);
    if (likely(__pyx_t_5)) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ec); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 471, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_SECP256R1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 471, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 471, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_curve_obj = __pyx_t_7;
      __pyx_t_7 = 0;

       
      goto __pyx_L17;
    }

     
      {
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 473, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_8, __pyx_kp_u_Coords_should_be_32_bytes_for_cu) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u_Coords_should_be_32_bytes_for_cu);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 473, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_Raise(__pyx_t_7, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __PYX_ERR(0, 473, __pyx_L1_error)
    }
    __pyx_L17:;

     
    goto __pyx_L16;
  }

   
  __pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_kp_u_P_384, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 474, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __pyx_t_15 = PyObject_Length(__pyx_v_x); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 475, __pyx_L1_error)
    __pyx_t_14 = PyObject_Length(__pyx_v_y); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 475, __pyx_L1_error)
    __pyx_t_5 = (__pyx_t_15 == __pyx_t_14);
    if (__pyx_t_5) {
      __pyx_t_5 = (__pyx_t_14 == 48);
    }
    __pyx_t_4 = (__pyx_t_5 != 0);
    if (likely(__pyx_t_4)) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ec); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 476, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_SECP384R1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 476, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 476, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_v_curve_obj = __pyx_t_7;
      __pyx_t_7 = 0;

       
      goto __pyx_L18;
    }

     
      {
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 478, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Coords_should_be_48_bytes_for_cu) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Coords_should_be_48_bytes_for_cu);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 478, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_Raise(__pyx_t_7, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __PYX_ERR(0, 478, __pyx_L1_error)
    }
    __pyx_L18:;

     
    goto __pyx_L16;
  }

   
  __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_kp_u_P_521, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 479, __pyx_L1_error)
  if (__pyx_t_4) {

     
    __pyx_t_14 = PyObject_Length(__pyx_v_x); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 480, __pyx_L1_error)
    __pyx_t_15 = PyObject_Length(__pyx_v_y); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 480, __pyx_L1_error)
    __pyx_t_4 = (__pyx_t_14 == __pyx_t_15);
    if (__pyx_t_4) {
      __pyx_t_4 = (__pyx_t_15 == 66);
    }
    __pyx_t_5 = (__pyx_t_4 != 0);
    if (likely(__pyx_t_5)) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ec); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 481, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_SECP521R1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 481, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 481, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_v_curve_obj = __pyx_t_7;
      __pyx_t_7 = 0;

       
      goto __pyx_L19;
    }

     
      {
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 483, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_8, __pyx_kp_u_Coords_should_be_66_bytes_for_cu) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u_Coords_should_be_66_bytes_for_cu);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 483, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_Raise(__pyx_t_7, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __PYX_ERR(0, 483, __pyx_L1_error)
    }
    __pyx_L19:;

     
    goto __pyx_L16;
  }

   
  __pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_n_u_secp256k1, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 484, __pyx_L1_error)
  if (likely(__pyx_t_5)) {

     
    __pyx_t_15 = PyObject_Length(__pyx_v_x); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 485, __pyx_L1_error)
    __pyx_t_14 = PyObject_Length(__pyx_v_y); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 485, __pyx_L1_error)
    __pyx_t_5 = (__pyx_t_15 == __pyx_t_14);
    if (__pyx_t_5) {
      __pyx_t_5 = (__pyx_t_14 == 32);
    }
    __pyx_t_4 = (__pyx_t_5 != 0);
    if (likely(__pyx_t_4)) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_ec); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 486, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_SECP256K1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 486, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 486, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_v_curve_obj = __pyx_t_7;
      __pyx_t_7 = 0;

       
      goto __pyx_L20;
    }

     
      {
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 488, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_6 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Coords_should_be_32_bytes_for_cu_2) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Coords_should_be_32_bytes_for_cu_2);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 488, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_Raise(__pyx_t_7, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __PYX_ERR(0, 488, __pyx_L1_error)
    }
    __pyx_L20:;

     
    goto __pyx_L16;
  }

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 492, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_curve, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 492, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_10 = __Pyx_PyUnicode_Concat(__pyx_kp_u_Invalid_curve, __pyx_t_6); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 492, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
      }
    }
    __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_10);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 492, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_Raise(__pyx_t_7, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __PYX_ERR(0, 492, __pyx_L1_error)
  }
  __pyx_L16:;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_ec); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 494, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_EllipticCurvePublicNumbers); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 494, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 495, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_10 = __Pyx_PyObject_GetAttrStr(((PyObject *)(&PyInt_Type)), __pyx_n_s_from_bytes); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 495, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __pyx_t_6 = PyTuple_New(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 495, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_INCREF(__pyx_v_x);
  __Pyx_GIVEREF(__pyx_v_x);
  PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_v_x);
  __pyx_t_11 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 495, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  if (PyDict_SetItem(__pyx_t_11, __pyx_n_s_byteorder, __pyx_n_u_big) < 0) __PYX_ERR(0, 495, __pyx_L1_error)
  __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_6, __pyx_t_11); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 495, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_12);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_x, __pyx_t_12) < 0) __PYX_ERR(0, 495, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;

   
  __pyx_t_12 = __Pyx_PyObject_GetAttrStr(((PyObject *)(&PyInt_Type)), __pyx_n_s_from_bytes); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 496, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_12);
  __pyx_t_11 = PyTuple_New(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 496, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_INCREF(__pyx_v_y);
  __Pyx_GIVEREF(__pyx_v_y);
  PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_v_y);
  __pyx_t_6 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 496, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_byteorder, __pyx_n_u_big) < 0) __PYX_ERR(0, 496, __pyx_L1_error)
  __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_12, __pyx_t_11, __pyx_t_6); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 496, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_y, __pyx_t_10) < 0) __PYX_ERR(0, 495, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

   
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_curve, __pyx_v_curve_obj) < 0) __PYX_ERR(0, 495, __pyx_L1_error)

   
  __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_empty_tuple, __pyx_t_7); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 494, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_v_public_numbers = __pyx_t_10;
  __pyx_t_10 = 0;

   
  __pyx_t_4 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_d, __pyx_v_obj, Py_NE)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 500, __pyx_L1_error)
  __pyx_t_5 = (__pyx_t_4 != 0);
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_public_numbers, __pyx_n_s_public_key); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 501, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
      }
    }
    __pyx_t_10 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 501, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_r = __pyx_t_10;
    __pyx_t_10 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_base64url_decode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 503, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 503, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_11 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_6, function);
    }
  }
  __pyx_t_8 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_n_u_d) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_n_u_d);
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 503, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
    }
  }
  __pyx_t_10 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_6, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_8);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 503, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_v_d = __pyx_t_10;
  __pyx_t_10 = 0;

   
  __pyx_t_14 = PyObject_Length(__pyx_v_d); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 504, __pyx_L1_error)
  __pyx_t_15 = PyObject_Length(__pyx_v_x); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 504, __pyx_L1_error)
  __pyx_t_5 = ((__pyx_t_14 != __pyx_t_15) != 0);
  if (unlikely(__pyx_t_5)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 505, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);

     
    __pyx_t_15 = PyObject_Length(__pyx_v_x); if (unlikely(__pyx_t_15 == ((Py_ssize_t)-1))) __PYX_ERR(0, 506, __pyx_L1_error)
    __pyx_t_8 = PyInt_FromSsize_t(__pyx_t_15); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 506, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_6 = NULL;
    __pyx_t_9 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
        __pyx_t_9 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_7)) {
      PyObject *__pyx_temp[4] = {__pyx_t_6, __pyx_kp_u_D_should_be_bytes_for_curve, __pyx_t_8, __pyx_v_curve};
      __pyx_t_10 = __Pyx_PyFunction_FastCall(__pyx_t_7, __pyx_temp+1-__pyx_t_9, 3+__pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 505, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_7)) {
      PyObject *__pyx_temp[4] = {__pyx_t_6, __pyx_kp_u_D_should_be_bytes_for_curve, __pyx_t_8, __pyx_v_curve};
      __pyx_t_10 = __Pyx_PyCFunction_FastCall(__pyx_t_7, __pyx_temp+1-__pyx_t_9, 3+__pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 505, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    } else
    #endif
    {
      __pyx_t_11 = PyTuple_New(3+__pyx_t_9); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 505, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      if (__pyx_t_6) {
        __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_6); __pyx_t_6 = NULL;
      }
      __Pyx_INCREF(__pyx_kp_u_D_should_be_bytes_for_curve);
      __Pyx_GIVEREF(__pyx_kp_u_D_should_be_bytes_for_curve);
      PyTuple_SET_ITEM(__pyx_t_11, 0+__pyx_t_9, __pyx_kp_u_D_should_be_bytes_for_curve);
      __Pyx_GIVEREF(__pyx_t_8);
      PyTuple_SET_ITEM(__pyx_t_11, 1+__pyx_t_9, __pyx_t_8);
      __Pyx_INCREF(__pyx_v_curve);
      __Pyx_GIVEREF(__pyx_v_curve);
      PyTuple_SET_ITEM(__pyx_t_11, 2+__pyx_t_9, __pyx_v_curve);
      __pyx_t_8 = 0;
      __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_t_11, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 505, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    }
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_Raise(__pyx_t_10, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    __PYX_ERR(0, 505, __pyx_L1_error)

     
  }

   
  __Pyx_XDECREF(__pyx_r);

   
  __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_ec); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 509, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_EllipticCurvePrivateNumbers); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 509, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

   
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(((PyObject *)(&PyInt_Type)), __pyx_n_s_from_bytes); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 510, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_6 = PyTuple_New(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 510, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_INCREF(__pyx_v_d);
  __Pyx_GIVEREF(__pyx_v_d);
  PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_v_d);
  __pyx_t_12 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 510, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_12);
  if (PyDict_SetItem(__pyx_t_12, __pyx_n_s_byteorder, __pyx_n_u_big) < 0) __PYX_ERR(0, 510, __pyx_L1_error)
  __pyx_t_16 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_6, __pyx_t_12); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 510, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_16);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
  __pyx_t_12 = NULL;
  __pyx_t_9 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_12)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_12);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
      __pyx_t_9 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_8)) {
    PyObject *__pyx_temp[3] = {__pyx_t_12, __pyx_t_16, __pyx_v_public_numbers};
    __pyx_t_7 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 509, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
    PyObject *__pyx_temp[3] = {__pyx_t_12, __pyx_t_16, __pyx_v_public_numbers};
    __pyx_t_7 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp+1-__pyx_t_9, 2+__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 509, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
  } else
  #endif
  {
    __pyx_t_6 = PyTuple_New(2+__pyx_t_9); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 509, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (__pyx_t_12) {
      __Pyx_GIVEREF(__pyx_t_12); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_12); __pyx_t_12 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_16);
    PyTuple_SET_ITEM(__pyx_t_6, 0+__pyx_t_9, __pyx_t_16);
    __Pyx_INCREF(__pyx_v_public_numbers);
    __Pyx_GIVEREF(__pyx_v_public_numbers);
    PyTuple_SET_ITEM(__pyx_t_6, 1+__pyx_t_9, __pyx_v_public_numbers);
    __pyx_t_16 = 0;
    __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_6, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 509, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_private_key); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 511, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_10 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 511, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_r = __pyx_t_10;
  __pyx_t_10 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_16);
  __Pyx_AddTraceback("jwt.algorithms.ECAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_obj);
  __Pyx_XDECREF(__pyx_v_x);
  __Pyx_XDECREF(__pyx_v_y);
  __Pyx_XDECREF(__pyx_v_curve);
  __Pyx_XDECREF(__pyx_v_curve_obj);
  __Pyx_XDECREF(__pyx_v_public_numbers);
  __Pyx_XDECREF(__pyx_v_d);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_15RSAPSSAlgorithm_1sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_15RSAPSSAlgorithm_1sign = {"sign", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_15RSAPSSAlgorithm_1sign, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_15RSAPSSAlgorithm_1sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sign (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 1); __PYX_ERR(0, 518, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 2); __PYX_ERR(0, 518, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sign") < 0)) __PYX_ERR(0, 518, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 518, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.RSAPSSAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_15RSAPSSAlgorithm_sign(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_15RSAPSSAlgorithm_sign(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key) {
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
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("sign", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_sign); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 519, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_padding); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 521, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_PSS); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 521, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_padding); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_MGF1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_9 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_6 = (__pyx_t_9) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_9) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
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
  __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_8, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_6);
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_mgf, __pyx_t_5) < 0) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 523, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_digest_size); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 523, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_salt_length, __pyx_t_7) < 0) __PYX_ERR(0, 522, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 521, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 525, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 525, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = NULL;
  __pyx_t_10 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_10 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_4, __pyx_v_msg, __pyx_t_7, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_10, 3+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 519, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[4] = {__pyx_t_4, __pyx_v_msg, __pyx_t_7, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_10, 3+__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 519, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else
  #endif
  {
    __pyx_t_5 = PyTuple_New(3+__pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 519, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (__pyx_t_4) {
      __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_4); __pyx_t_4 = NULL;
    }
    __Pyx_INCREF(__pyx_v_msg);
    __Pyx_GIVEREF(__pyx_v_msg);
    PyTuple_SET_ITEM(__pyx_t_5, 0+__pyx_t_10, __pyx_v_msg);
    __Pyx_GIVEREF(__pyx_t_7);
    PyTuple_SET_ITEM(__pyx_t_5, 1+__pyx_t_10, __pyx_t_7);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_5, 2+__pyx_t_10, __pyx_t_3);
    __pyx_t_7 = 0;
    __pyx_t_3 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_5, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 519, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
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
  __Pyx_AddTraceback("jwt.algorithms.RSAPSSAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_15RSAPSSAlgorithm_3verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_15RSAPSSAlgorithm_3verify = {"verify", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_15RSAPSSAlgorithm_3verify, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_15RSAPSSAlgorithm_3verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_msg = 0;
  PyObject *__pyx_v_key = 0;
  PyObject *__pyx_v_sig = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("verify (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,&__pyx_n_s_sig,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 1); __PYX_ERR(0, 528, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 2); __PYX_ERR(0, 528, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_sig)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 3); __PYX_ERR(0, 528, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "verify") < 0)) __PYX_ERR(0, 528, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
      values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_msg = values[1];
    __pyx_v_key = values[2];
    __pyx_v_sig = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 528, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.RSAPSSAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_15RSAPSSAlgorithm_2verify(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key, __pyx_v_sig);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_15RSAPSSAlgorithm_2verify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig) {
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
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  int __pyx_t_13;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("verify", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_verify); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 530, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_padding); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 533, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_PSS); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 533, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_6 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_padding); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_MGF1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
        }
      }
      __pyx_t_9 = (__pyx_t_12) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_12) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_8 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_11, __pyx_t_9) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_9);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_mgf, __pyx_t_8) < 0) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

       
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 535, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_digest_size); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 535, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_salt_length, __pyx_t_10) < 0) __PYX_ERR(0, 534, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;

       
      __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_empty_tuple, __pyx_t_6); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 533, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 537, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
        }
      }
      __pyx_t_6 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 537, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_13 = 0;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_13 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[5] = {__pyx_t_7, __pyx_v_sig, __pyx_v_msg, __pyx_t_10, __pyx_t_6};
        __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_13, 4+__pyx_t_13); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 530, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
        PyObject *__pyx_temp[5] = {__pyx_t_7, __pyx_v_sig, __pyx_v_msg, __pyx_t_10, __pyx_t_6};
        __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_13, 4+__pyx_t_13); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 530, __pyx_L3_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      } else
      #endif
      {
        __pyx_t_8 = PyTuple_New(4+__pyx_t_13); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 530, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_8);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_v_sig);
        __Pyx_GIVEREF(__pyx_v_sig);
        PyTuple_SET_ITEM(__pyx_t_8, 0+__pyx_t_13, __pyx_v_sig);
        __Pyx_INCREF(__pyx_v_msg);
        __Pyx_GIVEREF(__pyx_v_msg);
        PyTuple_SET_ITEM(__pyx_t_8, 1+__pyx_t_13, __pyx_v_msg);
        __Pyx_GIVEREF(__pyx_t_10);
        PyTuple_SET_ITEM(__pyx_t_8, 2+__pyx_t_13, __pyx_t_10);
        __Pyx_GIVEREF(__pyx_t_6);
        PyTuple_SET_ITEM(__pyx_t_8, 3+__pyx_t_13, __pyx_t_6);
        __pyx_t_10 = 0;
        __pyx_t_6 = 0;
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_8, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 530, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      }
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_True);
      __pyx_r = Py_True;
      goto __pyx_L7_try_return;

       
    }
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __Pyx_ErrFetch(&__pyx_t_4, &__pyx_t_5, &__pyx_t_8);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_InvalidSignature); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 540, __pyx_L5_except_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_13 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_4, __pyx_t_6);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_ErrRestore(__pyx_t_4, __pyx_t_5, __pyx_t_8);
    __pyx_t_4 = 0; __pyx_t_5 = 0; __pyx_t_8 = 0;
    if (__pyx_t_13) {
      __Pyx_AddTraceback("jwt.algorithms.RSAPSSAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_8, &__pyx_t_5, &__pyx_t_4) < 0) __PYX_ERR(0, 540, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_4);

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_False);
      __pyx_r = Py_False;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      goto __pyx_L6_except_return;
    }
    goto __pyx_L5_except_error;
    __pyx_L5_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L1_error;
    __pyx_L7_try_return:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L0;
    __pyx_L6_except_return:;
    __Pyx_XGIVEREF(__pyx_t_1);
    __Pyx_XGIVEREF(__pyx_t_2);
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_AddTraceback("jwt.algorithms.RSAPSSAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_1__init__ = {"__init__", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_1__init__, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_1__init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  CYTHON_UNUSED PyObject *__pyx_v_kwargs = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    PyObject* values[1] = {0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
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
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, __pyx_v_kwargs, values, pos_args, "__init__") < 0)) __PYX_ERR(0, 550, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 1) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 1, 1, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 550, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_12OKPAlgorithm___init__(__pyx_self, __pyx_v_self, __pyx_v_kwargs);

   
  __Pyx_XDECREF(__pyx_v_kwargs);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm___init__(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__", 0);

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_3prepare_key = {"prepare_key", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_3prepare_key, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_3prepare_key(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("prepare_key (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_key,0};
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
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, 1); __PYX_ERR(0, 553, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "prepare_key") < 0)) __PYX_ERR(0, 553, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_key = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("prepare_key", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 553, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_10algorithms_12OKPAlgorithm_2prepare_key(__pyx_self, __pyx_v_self, __pyx_v_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_2prepare_key(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_key) {
  PyObject *__pyx_v_str_key = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("prepare_key", 0);
  __Pyx_INCREF(__pyx_v_key);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Ed25519PrivateKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 557, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Ed25519PublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 557, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Ed448PrivateKey); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Ed448PublicKey); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);

   
  __pyx_t_6 = PyObject_IsInstance(__pyx_v_key, __pyx_t_1); 

   
  __pyx_t_7 = (__pyx_t_6 != 0);
  if (!__pyx_t_7) {
  } else {
    __pyx_t_5 = __pyx_t_7;
    goto __pyx_L4_bool_binop_done;
  }

   
  __pyx_t_7 = PyObject_IsInstance(__pyx_v_key, __pyx_t_2); 

   
  __pyx_t_6 = (__pyx_t_7 != 0);
  if (!__pyx_t_6) {
  } else {
    __pyx_t_5 = __pyx_t_6;
    goto __pyx_L4_bool_binop_done;
  }

   
  __pyx_t_6 = PyObject_IsInstance(__pyx_v_key, __pyx_t_3); 

   
  __pyx_t_7 = (__pyx_t_6 != 0);
  if (!__pyx_t_7) {
  } else {
    __pyx_t_5 = __pyx_t_7;
    goto __pyx_L4_bool_binop_done;
  }

   
  __pyx_t_7 = PyObject_IsInstance(__pyx_v_key, __pyx_t_4); 

   
  __pyx_t_6 = (__pyx_t_7 != 0);
  __pyx_t_5 = __pyx_t_6;
  __pyx_L4_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_6 = (__pyx_t_5 != 0);
  if (__pyx_t_6) {

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(__pyx_v_key);
    __pyx_r = __pyx_v_key;
    goto __pyx_L0;

     
  }

   
  __pyx_t_5 = PyBytes_Check(__pyx_v_key); 
  __pyx_t_7 = (__pyx_t_5 != 0);
  if (!__pyx_t_7) {
  } else {
    __pyx_t_6 = __pyx_t_7;
    goto __pyx_L9_bool_binop_done;
  }
  __pyx_t_7 = PyUnicode_Check(__pyx_v_key); 
  __pyx_t_5 = (__pyx_t_7 != 0);
  __pyx_t_6 = __pyx_t_5;
  __pyx_L9_bool_binop_done:;
  __pyx_t_5 = (__pyx_t_6 != 0);
  if (__pyx_t_5) {

     
    __pyx_t_5 = PyUnicode_Check(__pyx_v_key); 
    __pyx_t_6 = (__pyx_t_5 != 0);
    if (__pyx_t_6) {

       
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_encode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
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
      __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_kp_u_utf_8) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u_utf_8);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 563, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_1);
      __pyx_t_1 = 0;

       
    }

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_decode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 564, __pyx_L1_error)
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
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_kp_u_utf_8) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u_utf_8);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 564, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_v_str_key = __pyx_t_1;
    __pyx_t_1 = 0;

     
    __pyx_t_6 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_BEGIN_PUBLIC, __pyx_v_str_key, Py_EQ)); if (unlikely(__pyx_t_6 < 0)) __PYX_ERR(0, 566, __pyx_L1_error)
    __pyx_t_5 = (__pyx_t_6 != 0);
    if (__pyx_t_5) {

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_load_pem_public_key); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 567, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_3 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_3)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_3);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
        }
      }
      __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_v_key);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_r = __pyx_t_1;
      __pyx_t_1 = 0;
      goto __pyx_L0;

       
    }

     
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_kp_u_BEGIN_PRIVATE, __pyx_v_str_key, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 568, __pyx_L1_error)
    __pyx_t_6 = (__pyx_t_5 != 0);
    if (__pyx_t_6) {

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_load_pem_private_key); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 569, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 569, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_INCREF(__pyx_v_key);
      __Pyx_GIVEREF(__pyx_v_key);
      PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_key);
      __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 569, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_password, Py_None) < 0) __PYX_ERR(0, 569, __pyx_L1_error)
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 569, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_r = __pyx_t_4;
      __pyx_t_4 = 0;
      goto __pyx_L0;

       
    }

     
    __pyx_t_4 = __Pyx_PyObject_GetSlice(__pyx_v_str_key, 0, 4, NULL, NULL, &__pyx_slice__3, 1, 1, 1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 570, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_kp_u_ssh, Py_EQ)); if (unlikely(__pyx_t_6 < 0)) __PYX_ERR(0, 570, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (__pyx_t_6) {

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_load_ssh_public_key); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 571, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_2 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_2)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_2);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
        }
      }
      __pyx_t_4 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_key);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 571, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_r = __pyx_t_4;
      __pyx_t_4 = 0;
      goto __pyx_L0;

       
    }

     
  }

   
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_TypeError, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 573, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_Raise(__pyx_t_4, 0, 0, 0);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __PYX_ERR(0, 573, __pyx_L1_error)

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.prepare_key", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_str_key);
  __Pyx_XDECREF(__pyx_v_key);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_5sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static char __pyx_doc_3jwt_10algorithms_12OKPAlgorithm_4sign[] = "\n            Sign a message ``msg`` using the EdDSA private key ``key``\n            :param str|bytes msg: Message to sign\n            :param Ed25519PrivateKey}Ed448PrivateKey key: A :class:`.Ed25519PrivateKey`\n                or :class:`.Ed448PrivateKey` iinstance\n            :return bytes signature: The signature, as bytes\n            ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_5sign = {"sign", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_5sign, METH_VARARGS|METH_KEYWORDS, __pyx_doc_3jwt_10algorithms_12OKPAlgorithm_4sign};
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_5sign(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
CYTHON_UNUSED PyObject *__pyx_v_self = 0;
PyObject *__pyx_v_msg = 0;
PyObject *__pyx_v_key = 0;
int __pyx_lineno = 0;
const char *__pyx_filename = NULL;
int __pyx_clineno = 0;
PyObject *__pyx_r = 0;
__Pyx_RefNannyDeclarations
__Pyx_RefNannySetupContext("sign (wrapper)", 0);
{
  static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,0};
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
      if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
      else {
        __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 1); __PYX_ERR(0, 575, __pyx_L3_error)
      }
      CYTHON_FALLTHROUGH;
      case  2:
      if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
      else {
        __Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, 2); __PYX_ERR(0, 575, __pyx_L3_error)
      }
    }
    if (unlikely(kw_args > 0)) {
      if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sign") < 0)) __PYX_ERR(0, 575, __pyx_L3_error)
    }
  } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
    goto __pyx_L5_argtuple_error;
  } else {
    values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
    values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
  }
  __pyx_v_self = values[0];
  __pyx_v_msg = values[1];
  __pyx_v_key = values[2];
}
goto __pyx_L4_argument_unpacking_done;
__pyx_L5_argtuple_error:;
__Pyx_RaiseArgtupleInvalid("sign", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 575, __pyx_L3_error)
__pyx_L3_error:;
__Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
__Pyx_RefNannyFinishContext();
return NULL;
__pyx_L4_argument_unpacking_done:;
__pyx_r = __pyx_pf_3jwt_10algorithms_12OKPAlgorithm_4sign(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key);

 
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_4sign(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key) {
PyObject *__pyx_r = NULL;
__Pyx_RefNannyDeclarations
PyObject *__pyx_t_1 = NULL;
int __pyx_t_2;
PyObject *__pyx_t_3 = NULL;
PyObject *__pyx_t_4 = NULL;
int __pyx_lineno = 0;
const char *__pyx_filename = NULL;
int __pyx_clineno = 0;
__Pyx_RefNannySetupContext("sign", 0);
__Pyx_INCREF(__pyx_v_msg);

 
__pyx_t_2 = (((PyObject *)Py_TYPE(__pyx_v_msg)) != ((PyObject *)(&PyBytes_Type)));
if ((__pyx_t_2 != 0)) {
  __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 583, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_v_msg);
  __Pyx_GIVEREF(__pyx_v_msg);
  PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_v_msg);
  __Pyx_INCREF(__pyx_kp_u_utf_8);
  __Pyx_GIVEREF(__pyx_kp_u_utf_8);
  PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_kp_u_utf_8);
  __pyx_t_4 = __Pyx_PyObject_Call(((PyObject *)(&PyBytes_Type)), __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 583, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_1 = __pyx_t_4;
  __pyx_t_4 = 0;
} else {
  __Pyx_INCREF(__pyx_v_msg);
  __pyx_t_1 = __pyx_v_msg;
}
__Pyx_DECREF_SET(__pyx_v_msg, __pyx_t_1);
__pyx_t_1 = 0;

 
__Pyx_XDECREF(__pyx_r);
__pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_sign); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 584, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_4);
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
__pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_3, __pyx_v_msg) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_v_msg);
__Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 584, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_1);
__Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
__pyx_r = __pyx_t_1;
__pyx_t_1 = 0;
goto __pyx_L0;

 

 
__pyx_L1_error:;
__Pyx_XDECREF(__pyx_t_1);
__Pyx_XDECREF(__pyx_t_3);
__Pyx_XDECREF(__pyx_t_4);
__Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.sign", __pyx_clineno, __pyx_lineno, __pyx_filename);
__pyx_r = NULL;
__pyx_L0:;
__Pyx_XDECREF(__pyx_v_msg);
__Pyx_XGIVEREF(__pyx_r);
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_7verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static char __pyx_doc_3jwt_10algorithms_12OKPAlgorithm_6verify[] = "\n            Verify a given ``msg`` against a signature ``sig`` using the EdDSA key ``key``\n\n            :param str|bytes sig: EdDSA signature to check ``msg`` against\n            :param str|bytes msg: Message to sign\n            :param Ed25519PrivateKey|Ed25519PublicKey|Ed448PrivateKey|Ed448PublicKey key:\n                A private or public EdDSA key instance\n            :return bool verified: True if signature is valid, False if not.\n            ";
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_7verify = {"verify", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_7verify, METH_VARARGS|METH_KEYWORDS, __pyx_doc_3jwt_10algorithms_12OKPAlgorithm_6verify};
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_7verify(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
CYTHON_UNUSED PyObject *__pyx_v_self = 0;
PyObject *__pyx_v_msg = 0;
PyObject *__pyx_v_key = 0;
PyObject *__pyx_v_sig = 0;
int __pyx_lineno = 0;
const char *__pyx_filename = NULL;
int __pyx_clineno = 0;
PyObject *__pyx_r = 0;
__Pyx_RefNannyDeclarations
__Pyx_RefNannySetupContext("verify (wrapper)", 0);
{
  static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_msg,&__pyx_n_s_key,&__pyx_n_s_sig,0};
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
      if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_self)) != 0)) kw_args--;
      else goto __pyx_L5_argtuple_error;
      CYTHON_FALLTHROUGH;
      case  1:
      if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_msg)) != 0)) kw_args--;
      else {
        __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 1); __PYX_ERR(0, 586, __pyx_L3_error)
      }
      CYTHON_FALLTHROUGH;
      case  2:
      if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_key)) != 0)) kw_args--;
      else {
        __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 2); __PYX_ERR(0, 586, __pyx_L3_error)
      }
      CYTHON_FALLTHROUGH;
      case  3:
      if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_sig)) != 0)) kw_args--;
      else {
        __Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, 3); __PYX_ERR(0, 586, __pyx_L3_error)
      }
    }
    if (unlikely(kw_args > 0)) {
      if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "verify") < 0)) __PYX_ERR(0, 586, __pyx_L3_error)
    }
  } else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
    goto __pyx_L5_argtuple_error;
  } else {
    values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
    values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
  }
  __pyx_v_self = values[0];
  __pyx_v_msg = values[1];
  __pyx_v_key = values[2];
  __pyx_v_sig = values[3];
}
goto __pyx_L4_argument_unpacking_done;
__pyx_L5_argtuple_error:;
__Pyx_RaiseArgtupleInvalid("verify", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 586, __pyx_L3_error)
__pyx_L3_error:;
__Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
__Pyx_RefNannyFinishContext();
return NULL;
__pyx_L4_argument_unpacking_done:;
__pyx_r = __pyx_pf_3jwt_10algorithms_12OKPAlgorithm_6verify(__pyx_self, __pyx_v_self, __pyx_v_msg, __pyx_v_key, __pyx_v_sig);

 
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_6verify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_msg, PyObject *__pyx_v_key, PyObject *__pyx_v_sig) {
PyObject *__pyx_r = NULL;
__Pyx_RefNannyDeclarations
PyObject *__pyx_t_1 = NULL;
PyObject *__pyx_t_2 = NULL;
PyObject *__pyx_t_3 = NULL;
PyObject *__pyx_t_4 = NULL;
int __pyx_t_5;
PyObject *__pyx_t_6 = NULL;
PyObject *__pyx_t_7 = NULL;
int __pyx_t_8;
int __pyx_t_9;
int __pyx_t_10;
PyObject *__pyx_t_11 = NULL;
PyObject *__pyx_t_12 = NULL;
int __pyx_lineno = 0;
const char *__pyx_filename = NULL;
int __pyx_clineno = 0;
__Pyx_RefNannySetupContext("verify", 0);
__Pyx_INCREF(__pyx_v_msg);
__Pyx_INCREF(__pyx_v_key);
__Pyx_INCREF(__pyx_v_sig);

 
{
  __Pyx_PyThreadState_declare
  __Pyx_PyThreadState_assign
  __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
  __Pyx_XGOTREF(__pyx_t_1);
  __Pyx_XGOTREF(__pyx_t_2);
  __Pyx_XGOTREF(__pyx_t_3);
    {

     
    __pyx_t_5 = (((PyObject *)Py_TYPE(__pyx_v_msg)) != ((PyObject *)(&PyBytes_Type)));
    if ((__pyx_t_5 != 0)) {
      __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 597, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_INCREF(__pyx_v_msg);
      __Pyx_GIVEREF(__pyx_v_msg);
      PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_v_msg);
      __Pyx_INCREF(__pyx_kp_u_utf_8);
      __Pyx_GIVEREF(__pyx_kp_u_utf_8);
      PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_kp_u_utf_8);
      __pyx_t_7 = __Pyx_PyObject_Call(((PyObject *)(&PyBytes_Type)), __pyx_t_6, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 597, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_4 = __pyx_t_7;
      __pyx_t_7 = 0;
    } else {
      __Pyx_INCREF(__pyx_v_msg);
      __pyx_t_4 = __pyx_v_msg;
    }
    __Pyx_DECREF_SET(__pyx_v_msg, __pyx_t_4);
    __pyx_t_4 = 0;

     
    __pyx_t_5 = (((PyObject *)Py_TYPE(__pyx_v_sig)) != ((PyObject *)(&PyBytes_Type)));
    if ((__pyx_t_5 != 0)) {
      __pyx_t_7 = PyTuple_New(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 598, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_INCREF(__pyx_v_sig);
      __Pyx_GIVEREF(__pyx_v_sig);
      PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_v_sig);
      __Pyx_INCREF(__pyx_kp_u_utf_8);
      __Pyx_GIVEREF(__pyx_kp_u_utf_8);
      PyTuple_SET_ITEM(__pyx_t_7, 1, __pyx_kp_u_utf_8);
      __pyx_t_6 = __Pyx_PyObject_Call(((PyObject *)(&PyBytes_Type)), __pyx_t_7, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 598, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_4 = __pyx_t_6;
      __pyx_t_6 = 0;
    } else {
      __Pyx_INCREF(__pyx_v_sig);
      __pyx_t_4 = __pyx_v_sig;
    }
    __Pyx_DECREF_SET(__pyx_v_sig, __pyx_t_4);
    __pyx_t_4 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Ed25519PrivateKey); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 600, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Ed448PrivateKey); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 600, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_8 = PyObject_IsInstance(__pyx_v_key, __pyx_t_4); 
    __pyx_t_9 = (__pyx_t_8 != 0);
    if (!__pyx_t_9) {
    } else {
      __pyx_t_5 = __pyx_t_9;
      goto __pyx_L10_bool_binop_done;
    }
    __pyx_t_9 = PyObject_IsInstance(__pyx_v_key, __pyx_t_6); 
    __pyx_t_8 = (__pyx_t_9 != 0);
    __pyx_t_5 = __pyx_t_8;
    __pyx_L10_bool_binop_done:;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_8 = (__pyx_t_5 != 0);
    if (__pyx_t_8) {

       
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_public_key); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 601, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
        }
      }
      __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 601, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF_SET(__pyx_v_key, __pyx_t_4);
      __pyx_t_4 = 0;

       
    }

     
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_verify); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 602, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    __pyx_t_10 = 0;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
        __pyx_t_10 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_6)) {
      PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_sig, __pyx_v_msg};
      __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 602, __pyx_L3_error)
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_GOTREF(__pyx_t_4);
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_6)) {
      PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_v_sig, __pyx_v_msg};
      __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_10, 2+__pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 602, __pyx_L3_error)
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_GOTREF(__pyx_t_4);
    } else
    #endif
    {
      __pyx_t_11 = PyTuple_New(2+__pyx_t_10); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 602, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_11);
      if (__pyx_t_7) {
        __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_7); __pyx_t_7 = NULL;
      }
      __Pyx_INCREF(__pyx_v_sig);
      __Pyx_GIVEREF(__pyx_v_sig);
      PyTuple_SET_ITEM(__pyx_t_11, 0+__pyx_t_10, __pyx_v_sig);
      __Pyx_INCREF(__pyx_v_msg);
      __Pyx_GIVEREF(__pyx_v_msg);
      PyTuple_SET_ITEM(__pyx_t_11, 1+__pyx_t_10, __pyx_v_msg);
      __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_11, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 602, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    }
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(Py_True);
    __pyx_r = Py_True;
    goto __pyx_L7_try_return;

     
  }
  __pyx_L3_error:;
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __Pyx_ErrFetch(&__pyx_t_4, &__pyx_t_6, &__pyx_t_11);
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_cryptography); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 604, __pyx_L5_except_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_exceptions); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 604, __pyx_L5_except_error)
  __Pyx_GOTREF(__pyx_t_12);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_12, __pyx_n_s_InvalidSignature); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 604, __pyx_L5_except_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
  __pyx_t_10 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_4, __pyx_t_7);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_ErrRestore(__pyx_t_4, __pyx_t_6, __pyx_t_11);
  __pyx_t_4 = 0; __pyx_t_6 = 0; __pyx_t_11 = 0;
  if (__pyx_t_10) {
    __Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
    if (__Pyx_GetException(&__pyx_t_11, &__pyx_t_6, &__pyx_t_4) < 0) __PYX_ERR(0, 604, __pyx_L5_except_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GOTREF(__pyx_t_4);

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(Py_False);
    __pyx_r = Py_False;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    goto __pyx_L6_except_return;
  }
  goto __pyx_L5_except_error;
  __pyx_L5_except_error:;

   
  __Pyx_XGIVEREF(__pyx_t_1);
  __Pyx_XGIVEREF(__pyx_t_2);
  __Pyx_XGIVEREF(__pyx_t_3);
  __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
  goto __pyx_L1_error;
  __pyx_L7_try_return:;
  __Pyx_XGIVEREF(__pyx_t_1);
  __Pyx_XGIVEREF(__pyx_t_2);
  __Pyx_XGIVEREF(__pyx_t_3);
  __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
  goto __pyx_L0;
  __pyx_L6_except_return:;
  __Pyx_XGIVEREF(__pyx_t_1);
  __Pyx_XGIVEREF(__pyx_t_2);
  __Pyx_XGIVEREF(__pyx_t_3);
  __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
  goto __pyx_L0;
}

 

 
__pyx_L1_error:;
__Pyx_XDECREF(__pyx_t_4);
__Pyx_XDECREF(__pyx_t_6);
__Pyx_XDECREF(__pyx_t_7);
__Pyx_XDECREF(__pyx_t_11);
__Pyx_XDECREF(__pyx_t_12);
__Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.verify", __pyx_clineno, __pyx_lineno, __pyx_filename);
__pyx_r = NULL;
__pyx_L0:;
__Pyx_XDECREF(__pyx_v_msg);
__Pyx_XDECREF(__pyx_v_key);
__Pyx_XDECREF(__pyx_v_sig);
__Pyx_XGIVEREF(__pyx_r);
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_9to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_9to_jwk = {"to_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_9to_jwk, METH_O, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_9to_jwk(PyObject *__pyx_self, PyObject *__pyx_v_key) {
PyObject *__pyx_r = 0;
__Pyx_RefNannyDeclarations
__Pyx_RefNannySetupContext("to_jwk (wrapper)", 0);
__pyx_r = __pyx_pf_3jwt_10algorithms_12OKPAlgorithm_8to_jwk(__pyx_self, ((PyObject *)__pyx_v_key));

 
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_8to_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_key) {
PyObject *__pyx_v_x = NULL;
PyObject *__pyx_v_crv = NULL;
PyObject *__pyx_v_d = NULL;
PyObject *__pyx_r = NULL;
__Pyx_RefNannyDeclarations
PyObject *__pyx_t_1 = NULL;
PyObject *__pyx_t_2 = NULL;
int __pyx_t_3;
int __pyx_t_4;
int __pyx_t_5;
PyObject *__pyx_t_6 = NULL;
PyObject *__pyx_t_7 = NULL;
PyObject *__pyx_t_8 = NULL;
PyObject *__pyx_t_9 = NULL;
PyObject *__pyx_t_10 = NULL;
PyObject *__pyx_t_11 = NULL;
PyObject *__pyx_t_12 = NULL;
int __pyx_lineno = 0;
const char *__pyx_filename = NULL;
int __pyx_clineno = 0;
__Pyx_RefNannySetupContext("to_jwk", 0);

 
__Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Ed25519PublicKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 609, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_1);
__Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Ed448PublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 609, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_2);
__pyx_t_4 = PyObject_IsInstance(__pyx_v_key, __pyx_t_1); 
__pyx_t_5 = (__pyx_t_4 != 0);
if (!__pyx_t_5) {
} else {
  __pyx_t_3 = __pyx_t_5;
  goto __pyx_L4_bool_binop_done;
}
__pyx_t_5 = PyObject_IsInstance(__pyx_v_key, __pyx_t_2); 
__pyx_t_4 = (__pyx_t_5 != 0);
__pyx_t_3 = __pyx_t_4;
__pyx_L4_bool_binop_done:;
__Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
__Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
__pyx_t_4 = (__pyx_t_3 != 0);
if (__pyx_t_4) {

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_public_bytes); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 611, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Encoding); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 611, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_Raw); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 611, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_encoding, __pyx_t_7) < 0) __PYX_ERR(0, 611, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_PublicFormat); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 612, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_Raw); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 612, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_format, __pyx_t_6) < 0) __PYX_ERR(0, 611, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

   
  __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_x = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Ed25519PublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 614, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = PyObject_IsInstance(__pyx_v_key, __pyx_t_2); if (unlikely(__pyx_t_4 == ((int)-1))) __PYX_ERR(0, 614, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if ((__pyx_t_4 != 0)) {
    __Pyx_INCREF(__pyx_n_u_Ed25519);
    __pyx_t_6 = __pyx_n_u_Ed25519;
  } else {
    __Pyx_INCREF(__pyx_n_u_Ed448);
    __pyx_t_6 = __pyx_n_u_Ed448;
  }
  __pyx_v_crv = ((PyObject*)__pyx_t_6);
  __pyx_t_6 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 615, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_dumps); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 615, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 617, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_base64url_encode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 617, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 617, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_12 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
    __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
    if (likely(__pyx_t_12)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
      __Pyx_INCREF(__pyx_t_12);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_11, function);
    }
  }
  __pyx_t_10 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_v_x) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_v_x);
  __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
  if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 617, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __pyx_t_11 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
    }
  }
  __pyx_t_8 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_11, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 617, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_decode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 617, __pyx_L1_error)
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
  __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 617, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_x, __pyx_t_7) < 0) __PYX_ERR(0, 617, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_kty, __pyx_n_u_OKP) < 0) __PYX_ERR(0, 617, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_crv, __pyx_v_crv) < 0) __PYX_ERR(0, 617, __pyx_L1_error)
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
    }
  }
  __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_7, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_2);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 615, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_6;
  __pyx_t_6 = 0;
  goto __pyx_L0;

   
}

 
__Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Ed25519PrivateKey); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 623, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_6);
__Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Ed448PrivateKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 623, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_1);
__pyx_t_3 = PyObject_IsInstance(__pyx_v_key, __pyx_t_6); 
__pyx_t_5 = (__pyx_t_3 != 0);
if (!__pyx_t_5) {
} else {
  __pyx_t_4 = __pyx_t_5;
  goto __pyx_L7_bool_binop_done;
}
__pyx_t_5 = PyObject_IsInstance(__pyx_v_key, __pyx_t_1); 
__pyx_t_3 = (__pyx_t_5 != 0);
__pyx_t_4 = __pyx_t_3;
__pyx_L7_bool_binop_done:;
__Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
__Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
__pyx_t_3 = (__pyx_t_4 != 0);
if (__pyx_t_3) {

   
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_private_bytes); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 624, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 625, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Encoding); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 625, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_Raw); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 625, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_encoding, __pyx_t_7) < 0) __PYX_ERR(0, 625, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_PrivateFormat); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 626, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_Raw); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 626, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_format, __pyx_t_2) < 0) __PYX_ERR(0, 625, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_NoEncryption); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 627, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_9 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
    }
  }
  __pyx_t_2 = (__pyx_t_9) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_9) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 627, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_encryption_algorithm, __pyx_t_2) < 0) __PYX_ERR(0, 625, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 624, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_d = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_key, __pyx_n_s_public_key); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 630, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
    }
  }
  __pyx_t_2 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 630, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_public_bytes); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 630, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 631, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Encoding); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 631, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_Raw); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 631, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_encoding, __pyx_t_7) < 0) __PYX_ERR(0, 631, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_PublicFormat); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 632, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_Raw); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 632, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_format, __pyx_t_6) < 0) __PYX_ERR(0, 631, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

   
  __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 630, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_x = __pyx_t_6;
  __pyx_t_6 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Ed25519PrivateKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 635, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = PyObject_IsInstance(__pyx_v_key, __pyx_t_2); if (unlikely(__pyx_t_3 == ((int)-1))) __PYX_ERR(0, 635, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if ((__pyx_t_3 != 0)) {
    __Pyx_INCREF(__pyx_n_u_Ed25519);
    __pyx_t_6 = __pyx_n_u_Ed25519;
  } else {
    __Pyx_INCREF(__pyx_n_u_Ed448);
    __pyx_t_6 = __pyx_n_u_Ed448;
  }
  __pyx_v_crv = ((PyObject*)__pyx_t_6);
  __pyx_t_6 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_json); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 636, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_dumps); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 636, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_base64url_encode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_12 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
    __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
    if (likely(__pyx_t_12)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
      __Pyx_INCREF(__pyx_t_12);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_11, function);
    }
  }
  __pyx_t_10 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_v_x) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_v_x);
  __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
  if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __pyx_t_11 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_9 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_11, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_9) ? __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_9) : __Pyx_PyObject_CallNoArg(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_x, __pyx_t_7) < 0) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_base64url_encode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 639, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 639, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_12 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
    __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
    if (likely(__pyx_t_12)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
      __Pyx_INCREF(__pyx_t_12);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_11, function);
    }
  }
  __pyx_t_10 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_v_d) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_v_d);
  __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
  if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 639, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __pyx_t_11 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_11)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_11);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
    }
  }
  __pyx_t_8 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_11, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 639, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_decode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 639, __pyx_L1_error)
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
  __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_8) : __Pyx_PyObject_CallNoArg(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 639, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_d, __pyx_t_7) < 0) __PYX_ERR(0, 638, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_kty, __pyx_n_u_OKP) < 0) __PYX_ERR(0, 638, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_crv, __pyx_v_crv) < 0) __PYX_ERR(0, 638, __pyx_L1_error)
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
    }
  }
  __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_7, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_2);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 636, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_6;
  __pyx_t_6 = 0;
  goto __pyx_L0;

   
}

 
__Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 645, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_1);
__pyx_t_2 = NULL;
if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
  __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
  if (likely(__pyx_t_2)) {
    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
    __Pyx_INCREF(__pyx_t_2);
    __Pyx_INCREF(function);
    __Pyx_DECREF_SET(__pyx_t_1, function);
  }
}
__pyx_t_6 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_2, __pyx_kp_u_Not_a_public_or_private_key) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_kp_u_Not_a_public_or_private_key);
__Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 645, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_6);
__Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
__Pyx_Raise(__pyx_t_6, 0, 0, 0);
__Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
__PYX_ERR(0, 645, __pyx_L1_error)

 

 
__pyx_L1_error:;
__Pyx_XDECREF(__pyx_t_1);
__Pyx_XDECREF(__pyx_t_2);
__Pyx_XDECREF(__pyx_t_6);
__Pyx_XDECREF(__pyx_t_7);
__Pyx_XDECREF(__pyx_t_8);
__Pyx_XDECREF(__pyx_t_9);
__Pyx_XDECREF(__pyx_t_10);
__Pyx_XDECREF(__pyx_t_11);
__Pyx_XDECREF(__pyx_t_12);
__Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.to_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
__pyx_r = NULL;
__pyx_L0:;
__Pyx_XDECREF(__pyx_v_x);
__Pyx_XDECREF(__pyx_v_crv);
__Pyx_XDECREF(__pyx_v_d);
__Pyx_XGIVEREF(__pyx_r);
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_11from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk);  
static PyMethodDef __pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_11from_jwk = {"from_jwk", (PyCFunction)__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_11from_jwk, METH_O, 0};
static PyObject *__pyx_pw_3jwt_10algorithms_12OKPAlgorithm_11from_jwk(PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
PyObject *__pyx_r = 0;
__Pyx_RefNannyDeclarations
__Pyx_RefNannySetupContext("from_jwk (wrapper)", 0);
__pyx_r = __pyx_pf_3jwt_10algorithms_12OKPAlgorithm_10from_jwk(__pyx_self, ((PyObject *)__pyx_v_jwk));

 
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_10algorithms_12OKPAlgorithm_10from_jwk(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_jwk) {
PyObject *__pyx_v_obj = NULL;
PyObject *__pyx_v_curve = NULL;
PyObject *__pyx_v_x = NULL;
PyObject *__pyx_v_d = NULL;
PyObject *__pyx_v_err = NULL;
PyObject *__pyx_r = NULL;
__Pyx_RefNannyDeclarations
PyObject *__pyx_t_1 = NULL;
PyObject *__pyx_t_2 = NULL;
PyObject *__pyx_t_3 = NULL;
int __pyx_t_4;
int __pyx_t_5;
PyObject *__pyx_t_6 = NULL;
PyObject *__pyx_t_7 = NULL;
PyObject *__pyx_t_8 = NULL;
int __pyx_t_9;
PyObject *__pyx_t_10 = NULL;
PyObject *__pyx_t_11 = NULL;
PyObject *__pyx_t_12 = NULL;
int __pyx_t_13;
char const *__pyx_t_14;
PyObject *__pyx_t_15 = NULL;
PyObject *__pyx_t_16 = NULL;
PyObject *__pyx_t_17 = NULL;
PyObject *__pyx_t_18 = NULL;
PyObject *__pyx_t_19 = NULL;
PyObject *__pyx_t_20 = NULL;
int __pyx_lineno = 0;
const char *__pyx_filename = NULL;
int __pyx_clineno = 0;
__Pyx_RefNannySetupContext("from_jwk", 0);

 
{
  __Pyx_PyThreadState_declare
  __Pyx_PyThreadState_assign
  __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
  __Pyx_XGOTREF(__pyx_t_1);
  __Pyx_XGOTREF(__pyx_t_2);
  __Pyx_XGOTREF(__pyx_t_3);
    {

     
    __pyx_t_4 = PyUnicode_Check(__pyx_v_jwk); 
    __pyx_t_5 = (__pyx_t_4 != 0);
    if (__pyx_t_5) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_json); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 651, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_loads); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 651, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_8);
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
      __pyx_t_6 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_7, __pyx_v_jwk) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_jwk);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 651, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_v_obj = __pyx_t_6;
      __pyx_t_6 = 0;

       
      goto __pyx_L9;
    }

     
    __pyx_t_5 = PyDict_Check(__pyx_v_jwk); 
    __pyx_t_4 = (__pyx_t_5 != 0);
    if (likely(__pyx_t_4)) {

       
      __Pyx_INCREF(__pyx_v_jwk);
      __pyx_v_obj = __pyx_v_jwk;

       
      goto __pyx_L9;
    }

     
      {
      __Pyx_Raise(__pyx_builtin_ValueError, 0, 0, 0);
      __PYX_ERR(0, 655, __pyx_L3_error)
    }
    __pyx_L9:;

     
  }
  __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  goto __pyx_L8_try_end;
  __pyx_L3_error:;
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

   
  __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
  if (__pyx_t_9) {
    __Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
    if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_8, &__pyx_t_7) < 0) __PYX_ERR(0, 656, __pyx_L5_except_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_GOTREF(__pyx_t_7);

     
    __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 657, __pyx_L5_except_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_12 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_12)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_12);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
      }
    }
    __pyx_t_10 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_kp_u_Key_is_not_valid_JSON) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_Key_is_not_valid_JSON);
    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 657, __pyx_L5_except_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_Raise(__pyx_t_10, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    __PYX_ERR(0, 657, __pyx_L5_except_error)
  }
  goto __pyx_L5_except_error;
  __pyx_L5_except_error:;

   
  __Pyx_XGIVEREF(__pyx_t_1);
  __Pyx_XGIVEREF(__pyx_t_2);
  __Pyx_XGIVEREF(__pyx_t_3);
  __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
  goto __pyx_L1_error;
  __pyx_L8_try_end:;
}

 
__pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 659, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_8);
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
__pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_n_u_kty) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_n_u_kty);
__Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 659, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_7);
__Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
__pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_t_7, __pyx_n_u_OKP, Py_NE)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 659, __pyx_L1_error)
__Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
if (unlikely(__pyx_t_4)) {

   
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 660, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_kp_u_Not_an_Octet_Key_Pair) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_Not_an_Octet_Key_Pair);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 660, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_Raise(__pyx_t_7, 0, 0, 0);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __PYX_ERR(0, 660, __pyx_L1_error)

   
}

 
__pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 662, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_8);
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
__pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_n_u_crv) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_n_u_crv);
__Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 662, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_7);
__Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
__pyx_v_curve = __pyx_t_7;
__pyx_t_7 = 0;

 
__pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_n_u_Ed25519, Py_NE)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 663, __pyx_L1_error)
if (__pyx_t_5) {
} else {
  __pyx_t_4 = __pyx_t_5;
  goto __pyx_L14_bool_binop_done;
}
__pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_n_u_Ed448, Py_NE)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 663, __pyx_L1_error)
__pyx_t_4 = __pyx_t_5;
__pyx_L14_bool_binop_done:;
if (unlikely(__pyx_t_4)) {

   
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 664, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_v_curve, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 664, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_10 = __Pyx_PyUnicode_Concat(__pyx_kp_u_Invalid_curve, __pyx_t_6); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 664, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_t_6 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_10);
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 664, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_Raise(__pyx_t_7, 0, 0, 0);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __PYX_ERR(0, 664, __pyx_L1_error)

   
}

 
__pyx_t_4 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_x, __pyx_v_obj, Py_NE)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 666, __pyx_L1_error)
__pyx_t_5 = (__pyx_t_4 != 0);
if (unlikely(__pyx_t_5)) {

   
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 667, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_10 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
    }
  }
  __pyx_t_7 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_10, __pyx_kp_u_OKP_should_have_x_parameter) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_kp_u_OKP_should_have_x_parameter);
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 667, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_Raise(__pyx_t_7, 0, 0, 0);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __PYX_ERR(0, 667, __pyx_L1_error)

   
}

 
__Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_base64url_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 668, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_8);
__pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 668, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_6);
__pyx_t_11 = NULL;
if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
  __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
  if (likely(__pyx_t_11)) {
    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
    __Pyx_INCREF(__pyx_t_11);
    __Pyx_INCREF(function);
    __Pyx_DECREF_SET(__pyx_t_6, function);
  }
}
__pyx_t_10 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_n_u_x) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_n_u_x);
__Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 668, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_10);
__Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
__pyx_t_6 = NULL;
if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
  __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
  if (likely(__pyx_t_6)) {
    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
    __Pyx_INCREF(__pyx_t_6);
    __Pyx_INCREF(function);
    __Pyx_DECREF_SET(__pyx_t_8, function);
  }
}
__pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_10);
__Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
__Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 668, __pyx_L1_error)
__Pyx_GOTREF(__pyx_t_7);
__Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
__pyx_v_x = __pyx_t_7;
__pyx_t_7 = 0;

 
{
  __Pyx_PyThreadState_declare
  __Pyx_PyThreadState_assign
  __Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_2, &__pyx_t_1);
  __Pyx_XGOTREF(__pyx_t_3);
  __Pyx_XGOTREF(__pyx_t_2);
  __Pyx_XGOTREF(__pyx_t_1);
    {

     
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_d, __pyx_v_obj, Py_NE)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 671, __pyx_L17_error)
    __pyx_t_4 = (__pyx_t_5 != 0);
    if (__pyx_t_4) {

       
      __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_n_u_Ed25519, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 672, __pyx_L17_error)
      if (__pyx_t_4) {

         
        __Pyx_XDECREF(__pyx_r);
        __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_Ed25519PublicKey); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 673, __pyx_L17_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_from_public_bytes); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 673, __pyx_L17_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_10);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_10, function);
          }
        }
        __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_8, __pyx_v_x) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_v_x);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 673, __pyx_L17_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_r = __pyx_t_7;
        __pyx_t_7 = 0;
        goto __pyx_L21_try_return;

         
      }

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_Ed448PublicKey); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 674, __pyx_L17_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_from_public_bytes); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 674, __pyx_L17_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_8);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_8, function);
        }
      }
      __pyx_t_7 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_10, __pyx_v_x) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_x);
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 674, __pyx_L17_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_r = __pyx_t_7;
      __pyx_t_7 = 0;
      goto __pyx_L21_try_return;

       
    }

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_base64url_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 675, __pyx_L17_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_get); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 675, __pyx_L17_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_11 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_11)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_11);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
      }
    }
    __pyx_t_10 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_11, __pyx_n_u_d) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_n_u_d);
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 675, __pyx_L17_error)
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
      }
    }
    __pyx_t_7 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_6, __pyx_t_10) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_10);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 675, __pyx_L17_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_v_d = __pyx_t_7;
    __pyx_t_7 = 0;

     
    __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_curve, __pyx_n_u_Ed25519, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 676, __pyx_L17_error)
    if (__pyx_t_4) {

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_Ed25519PrivateKey); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 677, __pyx_L17_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_from_private_bytes); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 677, __pyx_L17_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
        }
      }
      __pyx_t_7 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_10, __pyx_t_8, __pyx_v_d) : __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_v_d);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 677, __pyx_L17_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_r = __pyx_t_7;
      __pyx_t_7 = 0;
      goto __pyx_L21_try_return;

       
    }

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_Ed448PrivateKey); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 678, __pyx_L17_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_from_private_bytes); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 678, __pyx_L17_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    __pyx_t_10 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_10)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_10);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
      }
    }
    __pyx_t_7 = (__pyx_t_10) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_10, __pyx_v_d) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_d);
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 678, __pyx_L17_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_r = __pyx_t_7;
    __pyx_t_7 = 0;
    goto __pyx_L21_try_return;

     
  }
  __pyx_L17_error:;
  __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
  __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

   
  __pyx_t_9 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
  if (__pyx_t_9) {
    __Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
    if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_8, &__pyx_t_10) < 0) __PYX_ERR(0, 679, __pyx_L19_except_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_GOTREF(__pyx_t_10);
    __Pyx_INCREF(__pyx_t_8);
    __pyx_v_err = __pyx_t_8;
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 680, __pyx_L31_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
        }
      }
      __pyx_t_6 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_12, __pyx_kp_u_Invalid_key_parameter) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u_Invalid_key_parameter);
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 680, __pyx_L31_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_Raise(__pyx_t_6, 0, 0, __pyx_v_err);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __PYX_ERR(0, 680, __pyx_L31_error)
    }

     
      {
      __pyx_L31_error:;
       {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __pyx_t_15 = 0; __pyx_t_16 = 0; __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0;
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_18, &__pyx_t_19, &__pyx_t_20);
        if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17) < 0)) __Pyx_ErrFetch(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17);
        __Pyx_XGOTREF(__pyx_t_15);
        __Pyx_XGOTREF(__pyx_t_16);
        __Pyx_XGOTREF(__pyx_t_17);
        __Pyx_XGOTREF(__pyx_t_18);
        __Pyx_XGOTREF(__pyx_t_19);
        __Pyx_XGOTREF(__pyx_t_20);
        __pyx_t_9 = __pyx_lineno; __pyx_t_13 = __pyx_clineno; __pyx_t_14 = __pyx_filename;
        {
          __Pyx_DECREF(__pyx_v_err);
          __pyx_v_err = NULL;
        }
        if (PY_MAJOR_VERSION >= 3) {
          __Pyx_XGIVEREF(__pyx_t_18);
          __Pyx_XGIVEREF(__pyx_t_19);
          __Pyx_XGIVEREF(__pyx_t_20);
          __Pyx_ExceptionReset(__pyx_t_18, __pyx_t_19, __pyx_t_20);
        }
        __Pyx_XGIVEREF(__pyx_t_15);
        __Pyx_XGIVEREF(__pyx_t_16);
        __Pyx_XGIVEREF(__pyx_t_17);
        __Pyx_ErrRestore(__pyx_t_15, __pyx_t_16, __pyx_t_17);
        __pyx_t_15 = 0; __pyx_t_16 = 0; __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0;
        __pyx_lineno = __pyx_t_9; __pyx_clineno = __pyx_t_13; __pyx_filename = __pyx_t_14;
        goto __pyx_L19_except_error;
      }
    }
  }
  goto __pyx_L19_except_error;
  __pyx_L19_except_error:;

   
  __Pyx_XGIVEREF(__pyx_t_3);
  __Pyx_XGIVEREF(__pyx_t_2);
  __Pyx_XGIVEREF(__pyx_t_1);
  __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_2, __pyx_t_1);
  goto __pyx_L1_error;
  __pyx_L21_try_return:;
  __Pyx_XGIVEREF(__pyx_t_3);
  __Pyx_XGIVEREF(__pyx_t_2);
  __Pyx_XGIVEREF(__pyx_t_1);
  __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_2, __pyx_t_1);
  goto __pyx_L0;
}

 

 
__pyx_L1_error:;
__Pyx_XDECREF(__pyx_t_6);
__Pyx_XDECREF(__pyx_t_7);
__Pyx_XDECREF(__pyx_t_8);
__Pyx_XDECREF(__pyx_t_10);
__Pyx_XDECREF(__pyx_t_11);
__Pyx_XDECREF(__pyx_t_12);
__Pyx_AddTraceback("jwt.algorithms.OKPAlgorithm.from_jwk", __pyx_clineno, __pyx_lineno, __pyx_filename);
__pyx_r = NULL;
__pyx_L0:;
__Pyx_XDECREF(__pyx_v_obj);
__Pyx_XDECREF(__pyx_v_curve);
__Pyx_XDECREF(__pyx_v_x);
__Pyx_XDECREF(__pyx_v_d);
__Pyx_XDECREF(__pyx_v_err);
__Pyx_XGIVEREF(__pyx_r);
__Pyx_RefNannyFinishContext();
return __pyx_r;
}

static struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *__pyx_freelist_3jwt_10algorithms___pyx_scope_struct__prepare_key[8];
static int __pyx_freecount_3jwt_10algorithms___pyx_scope_struct__prepare_key = 0;

static PyObject *__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct__prepare_key(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
PyObject *o;
if (CYTHON_COMPILING_IN_CPYTHON && likely((__pyx_freecount_3jwt_10algorithms___pyx_scope_struct__prepare_key > 0) & (t->tp_basicsize == sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key)))) {
  o = (PyObject*)__pyx_freelist_3jwt_10algorithms___pyx_scope_struct__prepare_key[--__pyx_freecount_3jwt_10algorithms___pyx_scope_struct__prepare_key];
  memset(o, 0, sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key));
  (void) PyObject_INIT(o, t);
  PyObject_GC_Track(o);
} else {
  o = (*t->tp_alloc)(t, 0);
  if (unlikely(!o)) return 0;
}
return o;
}

static void __pyx_tp_dealloc_3jwt_10algorithms___pyx_scope_struct__prepare_key(PyObject *o) {
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *p = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *)o;
PyObject_GC_UnTrack(o);
Py_CLEAR(p->__pyx_v_invalid_strings);
Py_CLEAR(p->__pyx_v_key);
if (CYTHON_COMPILING_IN_CPYTHON && ((__pyx_freecount_3jwt_10algorithms___pyx_scope_struct__prepare_key < 8) & (Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key)))) {
  __pyx_freelist_3jwt_10algorithms___pyx_scope_struct__prepare_key[__pyx_freecount_3jwt_10algorithms___pyx_scope_struct__prepare_key++] = ((struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *)o);
} else {
  (*Py_TYPE(o)->tp_free)(o);
}
}

static int __pyx_tp_traverse_3jwt_10algorithms___pyx_scope_struct__prepare_key(PyObject *o, visitproc v, void *a) {
int e;
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *p = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *)o;
if (p->__pyx_v_invalid_strings) {
  e = (*v)(p->__pyx_v_invalid_strings, a); if (e) return e;
}
if (p->__pyx_v_key) {
  e = (*v)(p->__pyx_v_key, a); if (e) return e;
}
return 0;
}

static int __pyx_tp_clear_3jwt_10algorithms___pyx_scope_struct__prepare_key(PyObject *o) {
PyObject* tmp;
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *p = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key *)o;
tmp = ((PyObject*)p->__pyx_v_invalid_strings);
p->__pyx_v_invalid_strings = ((PyObject*)Py_None); Py_INCREF(Py_None);
Py_XDECREF(tmp);
tmp = ((PyObject*)p->__pyx_v_key);
p->__pyx_v_key = Py_None; Py_INCREF(Py_None);
Py_XDECREF(tmp);
return 0;
}

static PyTypeObject __pyx_type_3jwt_10algorithms___pyx_scope_struct__prepare_key = {
PyVarObject_HEAD_INIT(0, 0)
"jwt.algorithms.__pyx_scope_struct__prepare_key",  
sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct__prepare_key),  
0,  
__pyx_tp_dealloc_3jwt_10algorithms___pyx_scope_struct__prepare_key,  
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
__pyx_tp_traverse_3jwt_10algorithms___pyx_scope_struct__prepare_key,  
__pyx_tp_clear_3jwt_10algorithms___pyx_scope_struct__prepare_key,  
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
__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct__prepare_key,  
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

static struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *__pyx_freelist_3jwt_10algorithms___pyx_scope_struct_1_genexpr[8];
static int __pyx_freecount_3jwt_10algorithms___pyx_scope_struct_1_genexpr = 0;

static PyObject *__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct_1_genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
PyObject *o;
if (CYTHON_COMPILING_IN_CPYTHON && likely((__pyx_freecount_3jwt_10algorithms___pyx_scope_struct_1_genexpr > 0) & (t->tp_basicsize == sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr)))) {
  o = (PyObject*)__pyx_freelist_3jwt_10algorithms___pyx_scope_struct_1_genexpr[--__pyx_freecount_3jwt_10algorithms___pyx_scope_struct_1_genexpr];
  memset(o, 0, sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr));
  (void) PyObject_INIT(o, t);
  PyObject_GC_Track(o);
} else {
  o = (*t->tp_alloc)(t, 0);
  if (unlikely(!o)) return 0;
}
return o;
}

static void __pyx_tp_dealloc_3jwt_10algorithms___pyx_scope_struct_1_genexpr(PyObject *o) {
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *p = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *)o;
PyObject_GC_UnTrack(o);
Py_CLEAR(p->__pyx_outer_scope);
Py_CLEAR(p->__pyx_v_string_value);
if (CYTHON_COMPILING_IN_CPYTHON && ((__pyx_freecount_3jwt_10algorithms___pyx_scope_struct_1_genexpr < 8) & (Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr)))) {
  __pyx_freelist_3jwt_10algorithms___pyx_scope_struct_1_genexpr[__pyx_freecount_3jwt_10algorithms___pyx_scope_struct_1_genexpr++] = ((struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *)o);
} else {
  (*Py_TYPE(o)->tp_free)(o);
}
}

static int __pyx_tp_traverse_3jwt_10algorithms___pyx_scope_struct_1_genexpr(PyObject *o, visitproc v, void *a) {
int e;
struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *p = (struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr *)o;
if (p->__pyx_outer_scope) {
  e = (*v)(((PyObject *)p->__pyx_outer_scope), a); if (e) return e;
}
if (p->__pyx_v_string_value) {
  e = (*v)(p->__pyx_v_string_value, a); if (e) return e;
}
return 0;
}

static PyTypeObject __pyx_type_3jwt_10algorithms___pyx_scope_struct_1_genexpr = {
PyVarObject_HEAD_INIT(0, 0)
"jwt.algorithms.__pyx_scope_struct_1_genexpr",  
sizeof(struct __pyx_obj_3jwt_10algorithms___pyx_scope_struct_1_genexpr),  
0,  
__pyx_tp_dealloc_3jwt_10algorithms___pyx_scope_struct_1_genexpr,  
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
__pyx_tp_traverse_3jwt_10algorithms___pyx_scope_struct_1_genexpr,  
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
0,  
__pyx_tp_new_3jwt_10algorithms___pyx_scope_struct_1_genexpr,  
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
static int __pyx_pymod_exec_algorithms(PyObject* module);  
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
{Py_mod_create, (void*)__pyx_pymod_create},
{Py_mod_exec, (void*)__pyx_pymod_exec_algorithms},
{0, NULL}
};
#endif

static struct PyModuleDef __pyx_moduledef = {
  PyModuleDef_HEAD_INIT,
  "algorithms",
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
  {&__pyx_kp_b_, __pyx_k_, sizeof(__pyx_k_), 0, 0, 0, 0},
  {&__pyx_kp_u_, __pyx_k_, sizeof(__pyx_k_), 0, 1, 0, 0},
  {&__pyx_n_s_Algorithm, __pyx_k_Algorithm, sizeof(__pyx_k_Algorithm), 0, 0, 1, 1},
  {&__pyx_n_s_Algorithm_from_jwk, __pyx_k_Algorithm_from_jwk, sizeof(__pyx_k_Algorithm_from_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_Algorithm_prepare_key, __pyx_k_Algorithm_prepare_key, sizeof(__pyx_k_Algorithm_prepare_key), 0, 0, 1, 1},
  {&__pyx_n_s_Algorithm_sign, __pyx_k_Algorithm_sign, sizeof(__pyx_k_Algorithm_sign), 0, 0, 1, 1},
  {&__pyx_n_s_Algorithm_to_jwk, __pyx_k_Algorithm_to_jwk, sizeof(__pyx_k_Algorithm_to_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_Algorithm_verify, __pyx_k_Algorithm_verify, sizeof(__pyx_k_Algorithm_verify), 0, 0, 1, 1},
  {&__pyx_kp_b_BEGIN_CERTIFICATE, __pyx_k_BEGIN_CERTIFICATE, sizeof(__pyx_k_BEGIN_CERTIFICATE), 0, 0, 0, 0},
  {&__pyx_kp_u_BEGIN_PRIVATE, __pyx_k_BEGIN_PRIVATE, sizeof(__pyx_k_BEGIN_PRIVATE), 0, 1, 0, 0},
  {&__pyx_kp_u_BEGIN_PUBLIC, __pyx_k_BEGIN_PUBLIC, sizeof(__pyx_k_BEGIN_PUBLIC), 0, 1, 0, 0},
  {&__pyx_kp_b_BEGIN_PUBLIC_KEY, __pyx_k_BEGIN_PUBLIC_KEY, sizeof(__pyx_k_BEGIN_PUBLIC_KEY), 0, 0, 0, 0},
  {&__pyx_kp_b_BEGIN_RSA_PUBLIC_KEY, __pyx_k_BEGIN_RSA_PUBLIC_KEY, sizeof(__pyx_k_BEGIN_RSA_PUBLIC_KEY), 0, 0, 0, 0},
  {&__pyx_kp_u_Coords_should_be_32_bytes_for_cu, __pyx_k_Coords_should_be_32_bytes_for_cu, sizeof(__pyx_k_Coords_should_be_32_bytes_for_cu), 0, 1, 0, 0},
  {&__pyx_kp_u_Coords_should_be_32_bytes_for_cu_2, __pyx_k_Coords_should_be_32_bytes_for_cu_2, sizeof(__pyx_k_Coords_should_be_32_bytes_for_cu_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Coords_should_be_48_bytes_for_cu, __pyx_k_Coords_should_be_48_bytes_for_cu, sizeof(__pyx_k_Coords_should_be_48_bytes_for_cu), 0, 1, 0, 0},
  {&__pyx_kp_u_Coords_should_be_66_bytes_for_cu, __pyx_k_Coords_should_be_66_bytes_for_cu, sizeof(__pyx_k_Coords_should_be_66_bytes_for_cu), 0, 1, 0, 0},
  {&__pyx_kp_u_D_should_be_bytes_for_curve, __pyx_k_D_should_be_bytes_for_curve, sizeof(__pyx_k_D_should_be_bytes_for_curve), 0, 1, 0, 0},
  {&__pyx_n_u_EC, __pyx_k_EC, sizeof(__pyx_k_EC), 0, 1, 0, 1},
  {&__pyx_n_s_ECAlgorithm, __pyx_k_ECAlgorithm, sizeof(__pyx_k_ECAlgorithm), 0, 0, 1, 1},
  {&__pyx_n_s_ECAlgorithm___init, __pyx_k_ECAlgorithm___init, sizeof(__pyx_k_ECAlgorithm___init), 0, 0, 1, 1},
  {&__pyx_n_s_ECAlgorithm_from_jwk, __pyx_k_ECAlgorithm_from_jwk, sizeof(__pyx_k_ECAlgorithm_from_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_ECAlgorithm_prepare_key, __pyx_k_ECAlgorithm_prepare_key, sizeof(__pyx_k_ECAlgorithm_prepare_key), 0, 0, 1, 1},
  {&__pyx_n_s_ECAlgorithm_sign, __pyx_k_ECAlgorithm_sign, sizeof(__pyx_k_ECAlgorithm_sign), 0, 0, 1, 1},
  {&__pyx_n_s_ECAlgorithm_verify, __pyx_k_ECAlgorithm_verify, sizeof(__pyx_k_ECAlgorithm_verify), 0, 0, 1, 1},
  {&__pyx_n_s_ECDSA, __pyx_k_ECDSA, sizeof(__pyx_k_ECDSA), 0, 0, 1, 1},
  {&__pyx_n_u_ES256, __pyx_k_ES256, sizeof(__pyx_k_ES256), 0, 1, 0, 1},
  {&__pyx_n_u_ES256K, __pyx_k_ES256K, sizeof(__pyx_k_ES256K), 0, 1, 0, 1},
  {&__pyx_n_u_ES384, __pyx_k_ES384, sizeof(__pyx_k_ES384), 0, 1, 0, 1},
  {&__pyx_n_u_ES512, __pyx_k_ES512, sizeof(__pyx_k_ES512), 0, 1, 0, 1},
  {&__pyx_n_u_ES521, __pyx_k_ES521, sizeof(__pyx_k_ES521), 0, 1, 0, 1},
  {&__pyx_n_u_Ed25519, __pyx_k_Ed25519, sizeof(__pyx_k_Ed25519), 0, 1, 0, 1},
  {&__pyx_n_s_Ed25519PrivateKey, __pyx_k_Ed25519PrivateKey, sizeof(__pyx_k_Ed25519PrivateKey), 0, 0, 1, 1},
  {&__pyx_n_s_Ed25519PublicKey, __pyx_k_Ed25519PublicKey, sizeof(__pyx_k_Ed25519PublicKey), 0, 0, 1, 1},
  {&__pyx_n_u_Ed448, __pyx_k_Ed448, sizeof(__pyx_k_Ed448), 0, 1, 0, 1},
  {&__pyx_n_s_Ed448PrivateKey, __pyx_k_Ed448PrivateKey, sizeof(__pyx_k_Ed448PrivateKey), 0, 0, 1, 1},
  {&__pyx_n_s_Ed448PublicKey, __pyx_k_Ed448PublicKey, sizeof(__pyx_k_Ed448PublicKey), 0, 0, 1, 1},
  {&__pyx_n_u_EdDSA, __pyx_k_EdDSA, sizeof(__pyx_k_EdDSA), 0, 1, 0, 1},
  {&__pyx_n_s_EllipticCurvePrivateKey, __pyx_k_EllipticCurvePrivateKey, sizeof(__pyx_k_EllipticCurvePrivateKey), 0, 0, 1, 1},
  {&__pyx_n_s_EllipticCurvePrivateNumbers, __pyx_k_EllipticCurvePrivateNumbers, sizeof(__pyx_k_EllipticCurvePrivateNumbers), 0, 0, 1, 1},
  {&__pyx_n_s_EllipticCurvePublicKey, __pyx_k_EllipticCurvePublicKey, sizeof(__pyx_k_EllipticCurvePublicKey), 0, 0, 1, 1},
  {&__pyx_n_s_EllipticCurvePublicNumbers, __pyx_k_EllipticCurvePublicNumbers, sizeof(__pyx_k_EllipticCurvePublicNumbers), 0, 0, 1, 1},
  {&__pyx_n_s_Encoding, __pyx_k_Encoding, sizeof(__pyx_k_Encoding), 0, 0, 1, 1},
  {&__pyx_kp_u_Expecting_a_EllipticCurvePrivate, __pyx_k_Expecting_a_EllipticCurvePrivate, sizeof(__pyx_k_Expecting_a_EllipticCurvePrivate), 0, 1, 0, 0},
  {&__pyx_kp_u_Expecting_a_PEM_formatted_key, __pyx_k_Expecting_a_PEM_formatted_key, sizeof(__pyx_k_Expecting_a_PEM_formatted_key), 0, 1, 0, 0},
  {&__pyx_kp_u_Expecting_a_PEM_formatted_or_Ope, __pyx_k_Expecting_a_PEM_formatted_or_Ope, sizeof(__pyx_k_Expecting_a_PEM_formatted_or_Ope), 0, 1, 0, 0},
  {&__pyx_n_s_HMACAlgorithm, __pyx_k_HMACAlgorithm, sizeof(__pyx_k_HMACAlgorithm), 0, 0, 1, 1},
  {&__pyx_n_s_HMACAlgorithm___init, __pyx_k_HMACAlgorithm___init, sizeof(__pyx_k_HMACAlgorithm___init), 0, 0, 1, 1},
  {&__pyx_n_s_HMACAlgorithm_from_jwk, __pyx_k_HMACAlgorithm_from_jwk, sizeof(__pyx_k_HMACAlgorithm_from_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_HMACAlgorithm_prepare_key, __pyx_k_HMACAlgorithm_prepare_key, sizeof(__pyx_k_HMACAlgorithm_prepare_key), 0, 0, 1, 1},
  {&__pyx_n_s_HMACAlgorithm_prepare_key_locals, __pyx_k_HMACAlgorithm_prepare_key_locals, sizeof(__pyx_k_HMACAlgorithm_prepare_key_locals), 0, 0, 1, 1},
  {&__pyx_n_s_HMACAlgorithm_sign, __pyx_k_HMACAlgorithm_sign, sizeof(__pyx_k_HMACAlgorithm_sign), 0, 0, 1, 1},
  {&__pyx_n_s_HMACAlgorithm_to_jwk, __pyx_k_HMACAlgorithm_to_jwk, sizeof(__pyx_k_HMACAlgorithm_to_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_HMACAlgorithm_verify, __pyx_k_HMACAlgorithm_verify, sizeof(__pyx_k_HMACAlgorithm_verify), 0, 0, 1, 1},
  {&__pyx_n_u_HS256, __pyx_k_HS256, sizeof(__pyx_k_HS256), 0, 1, 0, 1},
  {&__pyx_n_u_HS384, __pyx_k_HS384, sizeof(__pyx_k_HS384), 0, 1, 0, 1},
  {&__pyx_n_u_HS512, __pyx_k_HS512, sizeof(__pyx_k_HS512), 0, 1, 0, 1},
  {&__pyx_n_s_InvalidKeyError, __pyx_k_InvalidKeyError, sizeof(__pyx_k_InvalidKeyError), 0, 0, 1, 1},
  {&__pyx_n_s_InvalidSignature, __pyx_k_InvalidSignature, sizeof(__pyx_k_InvalidSignature), 0, 0, 1, 1},
  {&__pyx_kp_u_Invalid_curve, __pyx_k_Invalid_curve, sizeof(__pyx_k_Invalid_curve), 0, 1, 0, 0},
  {&__pyx_kp_u_Invalid_key_parameter, __pyx_k_Invalid_key_parameter, sizeof(__pyx_k_Invalid_key_parameter), 0, 1, 0, 0},
  {&__pyx_kp_u_Key_is_not_valid_JSON, __pyx_k_Key_is_not_valid_JSON, sizeof(__pyx_k_Key_is_not_valid_JSON), 0, 1, 0, 0},
  {&__pyx_n_s_MGF1, __pyx_k_MGF1, sizeof(__pyx_k_MGF1), 0, 0, 1, 1},
  {&__pyx_n_s_ModuleNotFoundError, __pyx_k_ModuleNotFoundError, sizeof(__pyx_k_ModuleNotFoundError), 0, 0, 1, 1},
  {&__pyx_n_s_NoEncryption, __pyx_k_NoEncryption, sizeof(__pyx_k_NoEncryption), 0, 0, 1, 1},
  {&__pyx_n_s_NoneAlgorithm, __pyx_k_NoneAlgorithm, sizeof(__pyx_k_NoneAlgorithm), 0, 0, 1, 1},
  {&__pyx_n_s_NoneAlgorithm_prepare_key, __pyx_k_NoneAlgorithm_prepare_key, sizeof(__pyx_k_NoneAlgorithm_prepare_key), 0, 0, 1, 1},
  {&__pyx_n_s_NoneAlgorithm_sign, __pyx_k_NoneAlgorithm_sign, sizeof(__pyx_k_NoneAlgorithm_sign), 0, 0, 1, 1},
  {&__pyx_n_s_NoneAlgorithm_verify, __pyx_k_NoneAlgorithm_verify, sizeof(__pyx_k_NoneAlgorithm_verify), 0, 0, 1, 1},
  {&__pyx_n_s_NotImplementedError, __pyx_k_NotImplementedError, sizeof(__pyx_k_NotImplementedError), 0, 0, 1, 1},
  {&__pyx_kp_u_Not_a_public_or_private_key, __pyx_k_Not_a_public_or_private_key, sizeof(__pyx_k_Not_a_public_or_private_key), 0, 1, 0, 0},
  {&__pyx_kp_u_Not_an_Elliptic_curve_key, __pyx_k_Not_an_Elliptic_curve_key, sizeof(__pyx_k_Not_an_Elliptic_curve_key), 0, 1, 0, 0},
  {&__pyx_kp_u_Not_an_HMAC_key, __pyx_k_Not_an_HMAC_key, sizeof(__pyx_k_Not_an_HMAC_key), 0, 1, 0, 0},
  {&__pyx_kp_u_Not_an_Octet_Key_Pair, __pyx_k_Not_an_Octet_Key_Pair, sizeof(__pyx_k_Not_an_Octet_Key_Pair), 0, 1, 0, 0},
  {&__pyx_kp_u_Not_an_RSA_key, __pyx_k_Not_an_RSA_key, sizeof(__pyx_k_Not_an_RSA_key), 0, 1, 0, 0},
  {&__pyx_n_u_OKP, __pyx_k_OKP, sizeof(__pyx_k_OKP), 0, 1, 0, 1},
  {&__pyx_n_s_OKPAlgorithm, __pyx_k_OKPAlgorithm, sizeof(__pyx_k_OKPAlgorithm), 0, 0, 1, 1},
  {&__pyx_n_s_OKPAlgorithm___init, __pyx_k_OKPAlgorithm___init, sizeof(__pyx_k_OKPAlgorithm___init), 0, 0, 1, 1},
  {&__pyx_n_s_OKPAlgorithm_from_jwk, __pyx_k_OKPAlgorithm_from_jwk, sizeof(__pyx_k_OKPAlgorithm_from_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_OKPAlgorithm_prepare_key, __pyx_k_OKPAlgorithm_prepare_key, sizeof(__pyx_k_OKPAlgorithm_prepare_key), 0, 0, 1, 1},
  {&__pyx_n_s_OKPAlgorithm_sign, __pyx_k_OKPAlgorithm_sign, sizeof(__pyx_k_OKPAlgorithm_sign), 0, 0, 1, 1},
  {&__pyx_n_s_OKPAlgorithm_to_jwk, __pyx_k_OKPAlgorithm_to_jwk, sizeof(__pyx_k_OKPAlgorithm_to_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_OKPAlgorithm_verify, __pyx_k_OKPAlgorithm_verify, sizeof(__pyx_k_OKPAlgorithm_verify), 0, 0, 1, 1},
  {&__pyx_kp_u_OKP_should_have_x_parameter, __pyx_k_OKP_should_have_x_parameter, sizeof(__pyx_k_OKP_should_have_x_parameter), 0, 1, 0, 0},
  {&__pyx_n_s_PKCS1v15, __pyx_k_PKCS1v15, sizeof(__pyx_k_PKCS1v15), 0, 0, 1, 1},
  {&__pyx_n_u_PS256, __pyx_k_PS256, sizeof(__pyx_k_PS256), 0, 1, 0, 1},
  {&__pyx_n_u_PS384, __pyx_k_PS384, sizeof(__pyx_k_PS384), 0, 1, 0, 1},
  {&__pyx_n_u_PS512, __pyx_k_PS512, sizeof(__pyx_k_PS512), 0, 1, 0, 1},
  {&__pyx_n_s_PSS, __pyx_k_PSS, sizeof(__pyx_k_PSS), 0, 0, 1, 1},
  {&__pyx_kp_u_P_256, __pyx_k_P_256, sizeof(__pyx_k_P_256), 0, 1, 0, 0},
  {&__pyx_kp_u_P_384, __pyx_k_P_384, sizeof(__pyx_k_P_384), 0, 1, 0, 0},
  {&__pyx_kp_u_P_521, __pyx_k_P_521, sizeof(__pyx_k_P_521), 0, 1, 0, 0},
  {&__pyx_kp_s_Performs_a_signature_using_RSAS, __pyx_k_Performs_a_signature_using_RSAS, sizeof(__pyx_k_Performs_a_signature_using_RSAS), 0, 0, 1, 0},
  {&__pyx_kp_s_Performs_signing_and_verificati, __pyx_k_Performs_signing_and_verificati, sizeof(__pyx_k_Performs_signing_and_verificati), 0, 0, 1, 0},
  {&__pyx_kp_s_Performs_signing_and_verificati_2, __pyx_k_Performs_signing_and_verificati_2, sizeof(__pyx_k_Performs_signing_and_verificati_2), 0, 0, 1, 0},
  {&__pyx_kp_s_Performs_signing_and_verificati_3, __pyx_k_Performs_signing_and_verificati_3, sizeof(__pyx_k_Performs_signing_and_verificati_3), 0, 0, 1, 0},
  {&__pyx_kp_s_Performs_signing_and_verificati_4, __pyx_k_Performs_signing_and_verificati_4, sizeof(__pyx_k_Performs_signing_and_verificati_4), 0, 0, 1, 0},
  {&__pyx_kp_s_Placeholder_for_use_when_no_sig, __pyx_k_Placeholder_for_use_when_no_sig, sizeof(__pyx_k_Placeholder_for_use_when_no_sig), 0, 0, 1, 0},
  {&__pyx_n_s_PrivateFormat, __pyx_k_PrivateFormat, sizeof(__pyx_k_PrivateFormat), 0, 0, 1, 1},
  {&__pyx_n_s_PublicFormat, __pyx_k_PublicFormat, sizeof(__pyx_k_PublicFormat), 0, 0, 1, 1},
  {&__pyx_n_u_RS256, __pyx_k_RS256, sizeof(__pyx_k_RS256), 0, 1, 0, 1},
  {&__pyx_n_u_RS384, __pyx_k_RS384, sizeof(__pyx_k_RS384), 0, 1, 0, 1},
  {&__pyx_n_u_RS512, __pyx_k_RS512, sizeof(__pyx_k_RS512), 0, 1, 0, 1},
  {&__pyx_n_u_RSA, __pyx_k_RSA, sizeof(__pyx_k_RSA), 0, 1, 0, 1},
  {&__pyx_n_s_RSAAlgorithm, __pyx_k_RSAAlgorithm, sizeof(__pyx_k_RSAAlgorithm), 0, 0, 1, 1},
  {&__pyx_n_s_RSAAlgorithm___init, __pyx_k_RSAAlgorithm___init, sizeof(__pyx_k_RSAAlgorithm___init), 0, 0, 1, 1},
  {&__pyx_n_s_RSAAlgorithm_from_jwk, __pyx_k_RSAAlgorithm_from_jwk, sizeof(__pyx_k_RSAAlgorithm_from_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_RSAAlgorithm_prepare_key, __pyx_k_RSAAlgorithm_prepare_key, sizeof(__pyx_k_RSAAlgorithm_prepare_key), 0, 0, 1, 1},
  {&__pyx_n_s_RSAAlgorithm_sign, __pyx_k_RSAAlgorithm_sign, sizeof(__pyx_k_RSAAlgorithm_sign), 0, 0, 1, 1},
  {&__pyx_n_s_RSAAlgorithm_to_jwk, __pyx_k_RSAAlgorithm_to_jwk, sizeof(__pyx_k_RSAAlgorithm_to_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_RSAAlgorithm_verify, __pyx_k_RSAAlgorithm_verify, sizeof(__pyx_k_RSAAlgorithm_verify), 0, 0, 1, 1},
  {&__pyx_n_s_RSAPSSAlgorithm, __pyx_k_RSAPSSAlgorithm, sizeof(__pyx_k_RSAPSSAlgorithm), 0, 0, 1, 1},
  {&__pyx_n_s_RSAPSSAlgorithm_sign, __pyx_k_RSAPSSAlgorithm_sign, sizeof(__pyx_k_RSAPSSAlgorithm_sign), 0, 0, 1, 1},
  {&__pyx_n_s_RSAPSSAlgorithm_verify, __pyx_k_RSAPSSAlgorithm_verify, sizeof(__pyx_k_RSAPSSAlgorithm_verify), 0, 0, 1, 1},
  {&__pyx_n_s_RSAPrivateKey, __pyx_k_RSAPrivateKey, sizeof(__pyx_k_RSAPrivateKey), 0, 0, 1, 1},
  {&__pyx_n_s_RSAPrivateNumbers, __pyx_k_RSAPrivateNumbers, sizeof(__pyx_k_RSAPrivateNumbers), 0, 0, 1, 1},
  {&__pyx_n_s_RSAPublicKey, __pyx_k_RSAPublicKey, sizeof(__pyx_k_RSAPublicKey), 0, 0, 1, 1},
  {&__pyx_n_s_RSAPublicNumbers, __pyx_k_RSAPublicNumbers, sizeof(__pyx_k_RSAPublicNumbers), 0, 0, 1, 1},
  {&__pyx_kp_u_RSA_key_must_include_all_paramet, __pyx_k_RSA_key_must_include_all_paramet, sizeof(__pyx_k_RSA_key_must_include_all_paramet), 0, 1, 0, 0},
  {&__pyx_n_s_Raw, __pyx_k_Raw, sizeof(__pyx_k_Raw), 0, 0, 1, 1},
  {&__pyx_n_s_SECP256K1, __pyx_k_SECP256K1, sizeof(__pyx_k_SECP256K1), 0, 0, 1, 1},
  {&__pyx_n_s_SECP256R1, __pyx_k_SECP256R1, sizeof(__pyx_k_SECP256R1), 0, 0, 1, 1},
  {&__pyx_n_s_SECP384R1, __pyx_k_SECP384R1, sizeof(__pyx_k_SECP384R1), 0, 0, 1, 1},
  {&__pyx_n_s_SECP521R1, __pyx_k_SECP521R1, sizeof(__pyx_k_SECP521R1), 0, 0, 1, 1},
  {&__pyx_n_s_SHA256, __pyx_k_SHA256, sizeof(__pyx_k_SHA256), 0, 0, 1, 1},
  {&__pyx_n_s_SHA384, __pyx_k_SHA384, sizeof(__pyx_k_SHA384), 0, 0, 1, 1},
  {&__pyx_n_s_SHA512, __pyx_k_SHA512, sizeof(__pyx_k_SHA512), 0, 0, 1, 1},
  {&__pyx_kp_s_The_interface_for_an_algorithm, __pyx_k_The_interface_for_an_algorithm, sizeof(__pyx_k_The_interface_for_an_algorithm), 0, 0, 1, 0},
  {&__pyx_kp_u_The_specified_key_is_an_asymmetr, __pyx_k_The_specified_key_is_an_asymmetr, sizeof(__pyx_k_The_specified_key_is_an_asymmetr), 0, 1, 0, 0},
  {&__pyx_n_s_TypeError, __pyx_k_TypeError, sizeof(__pyx_k_TypeError), 0, 0, 1, 1},
  {&__pyx_kp_u_Unsupported_RSA_private_key_2_pr, __pyx_k_Unsupported_RSA_private_key_2_pr, sizeof(__pyx_k_Unsupported_RSA_private_key_2_pr), 0, 1, 0, 0},
  {&__pyx_n_s_ValueError, __pyx_k_ValueError, sizeof(__pyx_k_ValueError), 0, 0, 1, 1},
  {&__pyx_kp_u_When_alg_none_key_value_must_be, __pyx_k_When_alg_none_key_value_must_be, sizeof(__pyx_k_When_alg_none_key_value_must_be), 0, 1, 0, 0},
  {&__pyx_n_s_all, __pyx_k_all, sizeof(__pyx_k_all), 0, 0, 1, 1},
  {&__pyx_n_s_any, __pyx_k_any, sizeof(__pyx_k_any), 0, 0, 1, 1},
  {&__pyx_n_s_any_props_found, __pyx_k_any_props_found, sizeof(__pyx_k_any_props_found), 0, 0, 1, 1},
  {&__pyx_n_s_args, __pyx_k_args, sizeof(__pyx_k_args), 0, 0, 1, 1},
  {&__pyx_n_s_base64url_decode, __pyx_k_base64url_decode, sizeof(__pyx_k_base64url_decode), 0, 0, 1, 1},
  {&__pyx_n_s_base64url_encode, __pyx_k_base64url_encode, sizeof(__pyx_k_base64url_encode), 0, 0, 1, 1},
  {&__pyx_n_u_big, __pyx_k_big, sizeof(__pyx_k_big), 0, 1, 0, 1},
  {&__pyx_n_s_byteorder, __pyx_k_byteorder, sizeof(__pyx_k_byteorder), 0, 0, 1, 1},
  {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
  {&__pyx_n_s_close, __pyx_k_close, sizeof(__pyx_k_close), 0, 0, 1, 1},
  {&__pyx_n_s_compare_digest, __pyx_k_compare_digest, sizeof(__pyx_k_compare_digest), 0, 0, 1, 1},
  {&__pyx_n_s_crv, __pyx_k_crv, sizeof(__pyx_k_crv), 0, 0, 1, 1},
  {&__pyx_n_u_crv, __pyx_k_crv, sizeof(__pyx_k_crv), 0, 1, 0, 1},
  {&__pyx_n_s_cryptography, __pyx_k_cryptography, sizeof(__pyx_k_cryptography), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_exceptions, __pyx_k_cryptography_exceptions, sizeof(__pyx_k_cryptography_exceptions), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_hazmat_primitives, __pyx_k_cryptography_hazmat_primitives, sizeof(__pyx_k_cryptography_hazmat_primitives), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_hazmat_primitives_a, __pyx_k_cryptography_hazmat_primitives_a, sizeof(__pyx_k_cryptography_hazmat_primitives_a), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_hazmat_primitives_a_2, __pyx_k_cryptography_hazmat_primitives_a_2, sizeof(__pyx_k_cryptography_hazmat_primitives_a_2), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_hazmat_primitives_a_3, __pyx_k_cryptography_hazmat_primitives_a_3, sizeof(__pyx_k_cryptography_hazmat_primitives_a_3), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_hazmat_primitives_a_4, __pyx_k_cryptography_hazmat_primitives_a_4, sizeof(__pyx_k_cryptography_hazmat_primitives_a_4), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_hazmat_primitives_a_5, __pyx_k_cryptography_hazmat_primitives_a_5, sizeof(__pyx_k_cryptography_hazmat_primitives_a_5), 0, 0, 1, 1},
  {&__pyx_n_s_cryptography_hazmat_primitives_s, __pyx_k_cryptography_hazmat_primitives_s, sizeof(__pyx_k_cryptography_hazmat_primitives_s), 0, 0, 1, 1},
  {&__pyx_n_s_curve, __pyx_k_curve, sizeof(__pyx_k_curve), 0, 0, 1, 1},
  {&__pyx_n_s_curve_obj, __pyx_k_curve_obj, sizeof(__pyx_k_curve_obj), 0, 0, 1, 1},
  {&__pyx_n_s_d, __pyx_k_d, sizeof(__pyx_k_d), 0, 0, 1, 1},
  {&__pyx_n_u_d, __pyx_k_d, sizeof(__pyx_k_d), 0, 1, 0, 1},
  {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
  {&__pyx_n_s_default_algorithms, __pyx_k_default_algorithms, sizeof(__pyx_k_default_algorithms), 0, 0, 1, 1},
  {&__pyx_n_s_der_sig, __pyx_k_der_sig, sizeof(__pyx_k_der_sig), 0, 0, 1, 1},
  {&__pyx_n_s_der_to_raw_signature, __pyx_k_der_to_raw_signature, sizeof(__pyx_k_der_to_raw_signature), 0, 0, 1, 1},
  {&__pyx_n_s_digest, __pyx_k_digest, sizeof(__pyx_k_digest), 0, 0, 1, 1},
  {&__pyx_n_s_digest_size, __pyx_k_digest_size, sizeof(__pyx_k_digest_size), 0, 0, 1, 1},
  {&__pyx_n_s_dmp1, __pyx_k_dmp1, sizeof(__pyx_k_dmp1), 0, 0, 1, 1},
  {&__pyx_n_s_dmq1, __pyx_k_dmq1, sizeof(__pyx_k_dmq1), 0, 0, 1, 1},
  {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
  {&__pyx_n_u_dp, __pyx_k_dp, sizeof(__pyx_k_dp), 0, 1, 0, 1},
  {&__pyx_n_u_dq, __pyx_k_dq, sizeof(__pyx_k_dq), 0, 1, 0, 1},
  {&__pyx_n_s_dumps, __pyx_k_dumps, sizeof(__pyx_k_dumps), 0, 0, 1, 1},
  {&__pyx_n_s_e, __pyx_k_e, sizeof(__pyx_k_e), 0, 0, 1, 1},
  {&__pyx_n_u_e, __pyx_k_e, sizeof(__pyx_k_e), 0, 1, 0, 1},
  {&__pyx_n_s_ec, __pyx_k_ec, sizeof(__pyx_k_ec), 0, 0, 1, 1},
  {&__pyx_kp_b_ecdsa_sha2, __pyx_k_ecdsa_sha2, sizeof(__pyx_k_ecdsa_sha2), 0, 0, 0, 0},
  {&__pyx_n_s_encode, __pyx_k_encode, sizeof(__pyx_k_encode), 0, 0, 1, 1},
  {&__pyx_n_s_encoding, __pyx_k_encoding, sizeof(__pyx_k_encoding), 0, 0, 1, 1},
  {&__pyx_n_s_encryption_algorithm, __pyx_k_encryption_algorithm, sizeof(__pyx_k_encryption_algorithm), 0, 0, 1, 1},
  {&__pyx_n_s_err, __pyx_k_err, sizeof(__pyx_k_err), 0, 0, 1, 1},
  {&__pyx_n_s_exceptions, __pyx_k_exceptions, sizeof(__pyx_k_exceptions), 0, 0, 1, 1},
  {&__pyx_n_s_force_bytes, __pyx_k_force_bytes, sizeof(__pyx_k_force_bytes), 0, 0, 1, 1},
  {&__pyx_n_s_format, __pyx_k_format, sizeof(__pyx_k_format), 0, 0, 1, 1},
  {&__pyx_n_s_from_base64url_uint, __pyx_k_from_base64url_uint, sizeof(__pyx_k_from_base64url_uint), 0, 0, 1, 1},
  {&__pyx_n_s_from_bytes, __pyx_k_from_bytes, sizeof(__pyx_k_from_bytes), 0, 0, 1, 1},
  {&__pyx_n_s_from_jwk, __pyx_k_from_jwk, sizeof(__pyx_k_from_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_from_private_bytes, __pyx_k_from_private_bytes, sizeof(__pyx_k_from_private_bytes), 0, 0, 1, 1},
  {&__pyx_n_s_from_public_bytes, __pyx_k_from_public_bytes, sizeof(__pyx_k_from_public_bytes), 0, 0, 1, 1},
  {&__pyx_n_s_genexpr, __pyx_k_genexpr, sizeof(__pyx_k_genexpr), 0, 0, 1, 1},
  {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
  {&__pyx_n_s_get_default_algorithms, __pyx_k_get_default_algorithms, sizeof(__pyx_k_get_default_algorithms), 0, 0, 1, 1},
  {&__pyx_n_s_has_crypto, __pyx_k_has_crypto, sizeof(__pyx_k_has_crypto), 0, 0, 1, 1},
  {&__pyx_n_s_hash_alg, __pyx_k_hash_alg, sizeof(__pyx_k_hash_alg), 0, 0, 1, 1},
  {&__pyx_n_s_hashes, __pyx_k_hashes, sizeof(__pyx_k_hashes), 0, 0, 1, 1},
  {&__pyx_n_s_hashlib, __pyx_k_hashlib, sizeof(__pyx_k_hashlib), 0, 0, 1, 1},
  {&__pyx_n_s_hmac, __pyx_k_hmac, sizeof(__pyx_k_hmac), 0, 0, 1, 1},
  {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
  {&__pyx_n_s_init, __pyx_k_init, sizeof(__pyx_k_init), 0, 0, 1, 1},
  {&__pyx_n_s_invalid_strings, __pyx_k_invalid_strings, sizeof(__pyx_k_invalid_strings), 0, 0, 1, 1},
  {&__pyx_n_s_iqmp, __pyx_k_iqmp, sizeof(__pyx_k_iqmp), 0, 0, 1, 1},
  {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
  {&__pyx_n_s_jwk, __pyx_k_jwk, sizeof(__pyx_k_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_jwt_algorithms, __pyx_k_jwt_algorithms, sizeof(__pyx_k_jwt_algorithms), 0, 0, 1, 1},
  {&__pyx_n_u_k, __pyx_k_k, sizeof(__pyx_k_k), 0, 1, 0, 1},
  {&__pyx_n_s_key, __pyx_k_key, sizeof(__pyx_k_key), 0, 0, 1, 1},
  {&__pyx_n_s_key_obj, __pyx_k_key_obj, sizeof(__pyx_k_key_obj), 0, 0, 1, 1},
  {&__pyx_n_u_key_ops, __pyx_k_key_ops, sizeof(__pyx_k_key_ops), 0, 1, 0, 1},
  {&__pyx_n_u_kty, __pyx_k_kty, sizeof(__pyx_k_kty), 0, 1, 0, 1},
  {&__pyx_n_s_kwargs, __pyx_k_kwargs, sizeof(__pyx_k_kwargs), 0, 0, 1, 1},
  {&__pyx_n_s_load_pem_private_key, __pyx_k_load_pem_private_key, sizeof(__pyx_k_load_pem_private_key), 0, 0, 1, 1},
  {&__pyx_n_s_load_pem_public_key, __pyx_k_load_pem_public_key, sizeof(__pyx_k_load_pem_public_key), 0, 0, 1, 1},
  {&__pyx_n_s_load_ssh_public_key, __pyx_k_load_ssh_public_key, sizeof(__pyx_k_load_ssh_public_key), 0, 0, 1, 1},
  {&__pyx_n_s_loads, __pyx_k_loads, sizeof(__pyx_k_loads), 0, 0, 1, 1},
  {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
  {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
  {&__pyx_n_s_mgf, __pyx_k_mgf, sizeof(__pyx_k_mgf), 0, 0, 1, 1},
  {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
  {&__pyx_n_s_msg, __pyx_k_msg, sizeof(__pyx_k_msg), 0, 0, 1, 1},
  {&__pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_k_mtf_module_jwt_algorithms_py, sizeof(__pyx_k_mtf_module_jwt_algorithms_py), 0, 0, 1, 0},
  {&__pyx_n_s_n, __pyx_k_n, sizeof(__pyx_k_n), 0, 0, 1, 1},
  {&__pyx_n_u_n, __pyx_k_n, sizeof(__pyx_k_n), 0, 1, 0, 1},
  {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
  {&__pyx_n_s_new, __pyx_k_new, sizeof(__pyx_k_new), 0, 0, 1, 1},
  {&__pyx_n_u_none, __pyx_k_none, sizeof(__pyx_k_none), 0, 1, 0, 1},
  {&__pyx_n_s_numbers, __pyx_k_numbers, sizeof(__pyx_k_numbers), 0, 0, 1, 1},
  {&__pyx_n_s_obj, __pyx_k_obj, sizeof(__pyx_k_obj), 0, 0, 1, 1},
  {&__pyx_n_u_oct, __pyx_k_oct, sizeof(__pyx_k_oct), 0, 1, 0, 1},
  {&__pyx_n_u_oth, __pyx_k_oth, sizeof(__pyx_k_oth), 0, 1, 0, 1},
  {&__pyx_n_s_other_props, __pyx_k_other_props, sizeof(__pyx_k_other_props), 0, 0, 1, 1},
  {&__pyx_n_s_p, __pyx_k_p, sizeof(__pyx_k_p), 0, 0, 1, 1},
  {&__pyx_n_u_p, __pyx_k_p, sizeof(__pyx_k_p), 0, 1, 0, 1},
  {&__pyx_n_s_padding, __pyx_k_padding, sizeof(__pyx_k_padding), 0, 0, 1, 1},
  {&__pyx_n_s_password, __pyx_k_password, sizeof(__pyx_k_password), 0, 0, 1, 1},
  {&__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
  {&__pyx_n_s_prepare_key, __pyx_k_prepare_key, sizeof(__pyx_k_prepare_key), 0, 0, 1, 1},
  {&__pyx_n_s_private_bytes, __pyx_k_private_bytes, sizeof(__pyx_k_private_bytes), 0, 0, 1, 1},
  {&__pyx_n_s_private_key, __pyx_k_private_key, sizeof(__pyx_k_private_key), 0, 0, 1, 1},
  {&__pyx_n_s_private_numbers, __pyx_k_private_numbers, sizeof(__pyx_k_private_numbers), 0, 0, 1, 1},
  {&__pyx_n_u_private_numbers, __pyx_k_private_numbers, sizeof(__pyx_k_private_numbers), 0, 1, 0, 1},
  {&__pyx_n_s_prop, __pyx_k_prop, sizeof(__pyx_k_prop), 0, 0, 1, 1},
  {&__pyx_n_s_props_found, __pyx_k_props_found, sizeof(__pyx_k_props_found), 0, 0, 1, 1},
  {&__pyx_n_s_public_bytes, __pyx_k_public_bytes, sizeof(__pyx_k_public_bytes), 0, 0, 1, 1},
  {&__pyx_n_s_public_key, __pyx_k_public_key, sizeof(__pyx_k_public_key), 0, 0, 1, 1},
  {&__pyx_n_s_public_numbers, __pyx_k_public_numbers, sizeof(__pyx_k_public_numbers), 0, 0, 1, 1},
  {&__pyx_n_s_q, __pyx_k_q, sizeof(__pyx_k_q), 0, 0, 1, 1},
  {&__pyx_n_u_q, __pyx_k_q, sizeof(__pyx_k_q), 0, 1, 0, 1},
  {&__pyx_n_u_qi, __pyx_k_qi, sizeof(__pyx_k_qi), 0, 1, 0, 1},
  {&__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
  {&__pyx_n_s_raw_to_der_signature, __pyx_k_raw_to_der_signature, sizeof(__pyx_k_raw_to_der_signature), 0, 0, 1, 1},
  {&__pyx_n_s_requires_cryptography, __pyx_k_requires_cryptography, sizeof(__pyx_k_requires_cryptography), 0, 0, 1, 1},
  {&__pyx_n_s_rsa_crt_dmp1, __pyx_k_rsa_crt_dmp1, sizeof(__pyx_k_rsa_crt_dmp1), 0, 0, 1, 1},
  {&__pyx_n_s_rsa_crt_dmq1, __pyx_k_rsa_crt_dmq1, sizeof(__pyx_k_rsa_crt_dmq1), 0, 0, 1, 1},
  {&__pyx_n_s_rsa_crt_iqmp, __pyx_k_rsa_crt_iqmp, sizeof(__pyx_k_rsa_crt_iqmp), 0, 0, 1, 1},
  {&__pyx_n_s_rsa_recover_prime_factors, __pyx_k_rsa_recover_prime_factors, sizeof(__pyx_k_rsa_recover_prime_factors), 0, 0, 1, 1},
  {&__pyx_n_s_salt_length, __pyx_k_salt_length, sizeof(__pyx_k_salt_length), 0, 0, 1, 1},
  {&__pyx_n_u_secp256k1, __pyx_k_secp256k1, sizeof(__pyx_k_secp256k1), 0, 1, 0, 1},
  {&__pyx_n_s_self, __pyx_k_self, sizeof(__pyx_k_self), 0, 0, 1, 1},
  {&__pyx_n_s_send, __pyx_k_send, sizeof(__pyx_k_send), 0, 0, 1, 1},
  {&__pyx_n_s_sha256, __pyx_k_sha256, sizeof(__pyx_k_sha256), 0, 0, 1, 1},
  {&__pyx_n_s_sha384, __pyx_k_sha384, sizeof(__pyx_k_sha384), 0, 0, 1, 1},
  {&__pyx_n_s_sha512, __pyx_k_sha512, sizeof(__pyx_k_sha512), 0, 0, 1, 1},
  {&__pyx_n_s_sig, __pyx_k_sig, sizeof(__pyx_k_sig), 0, 0, 1, 1},
  {&__pyx_n_s_sign, __pyx_k_sign, sizeof(__pyx_k_sign), 0, 0, 1, 1},
  {&__pyx_n_u_sign, __pyx_k_sign, sizeof(__pyx_k_sign), 0, 1, 0, 1},
  {&__pyx_kp_u_ssh, __pyx_k_ssh, sizeof(__pyx_k_ssh), 0, 1, 0, 0},
  {&__pyx_kp_b_ssh_rsa, __pyx_k_ssh_rsa, sizeof(__pyx_k_ssh_rsa), 0, 0, 0, 0},
  {&__pyx_n_s_startswith, __pyx_k_startswith, sizeof(__pyx_k_startswith), 0, 0, 1, 1},
  {&__pyx_n_s_staticmethod, __pyx_k_staticmethod, sizeof(__pyx_k_staticmethod), 0, 0, 1, 1},
  {&__pyx_n_s_str_key, __pyx_k_str_key, sizeof(__pyx_k_str_key), 0, 0, 1, 1},
  {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
  {&__pyx_n_s_throw, __pyx_k_throw, sizeof(__pyx_k_throw), 0, 0, 1, 1},
  {&__pyx_n_s_to_base64url_uint, __pyx_k_to_base64url_uint, sizeof(__pyx_k_to_base64url_uint), 0, 0, 1, 1},
  {&__pyx_n_s_to_jwk, __pyx_k_to_jwk, sizeof(__pyx_k_to_jwk), 0, 0, 1, 1},
  {&__pyx_n_s_update, __pyx_k_update, sizeof(__pyx_k_update), 0, 0, 1, 1},
  {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
  {&__pyx_n_s_utils, __pyx_k_utils, sizeof(__pyx_k_utils), 0, 0, 1, 1},
  {&__pyx_n_s_verify, __pyx_k_verify, sizeof(__pyx_k_verify), 0, 0, 1, 1},
  {&__pyx_n_u_verify, __pyx_k_verify, sizeof(__pyx_k_verify), 0, 1, 0, 1},
  {&__pyx_n_s_x, __pyx_k_x, sizeof(__pyx_k_x), 0, 0, 1, 1},
  {&__pyx_n_u_x, __pyx_k_x, sizeof(__pyx_k_x), 0, 1, 0, 1},
  {&__pyx_n_s_y, __pyx_k_y, sizeof(__pyx_k_y), 0, 0, 1, 1},
  {&__pyx_n_u_y, __pyx_k_y, sizeof(__pyx_k_y), 0, 1, 0, 1},
  {0, 0, 0, 0, 0, 0, 0}
};
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_staticmethod = __Pyx_GetBuiltinName(__pyx_n_s_staticmethod); if (!__pyx_builtin_staticmethod) __PYX_ERR(0, 133, __pyx_L1_error)
  __pyx_builtin_NotImplementedError = __Pyx_GetBuiltinName(__pyx_n_s_NotImplementedError); if (!__pyx_builtin_NotImplementedError) __PYX_ERR(0, 117, __pyx_L1_error)
  __pyx_builtin_ValueError = __Pyx_GetBuiltinName(__pyx_n_s_ValueError); if (!__pyx_builtin_ValueError) __PYX_ERR(0, 218, __pyx_L1_error)
  __pyx_builtin_TypeError = __Pyx_GetBuiltinName(__pyx_n_s_TypeError); if (!__pyx_builtin_TypeError) __PYX_ERR(0, 254, __pyx_L1_error)
  __pyx_builtin_any = __Pyx_GetBuiltinName(__pyx_n_s_any); if (!__pyx_builtin_any) __PYX_ERR(0, 327, __pyx_L1_error)
  __pyx_builtin_all = __Pyx_GetBuiltinName(__pyx_n_s_all); if (!__pyx_builtin_all) __PYX_ERR(0, 329, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

   
  __pyx_tuple__2 = PyTuple_Pack(1, __pyx_kp_u_Expecting_a_PEM_formatted_key); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 254, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

   
  __pyx_slice__3 = PySlice_New(__pyx_int_0, __pyx_int_4, Py_None); if (unlikely(!__pyx_slice__3)) __PYX_ERR(0, 570, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__3);
  __Pyx_GIVEREF(__pyx_slice__3);

   
  __pyx_tuple__4 = PyTuple_Pack(1, __pyx_kp_u_Expecting_a_PEM_formatted_or_Ope); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 573, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);

   
  __pyx_tuple__5 = PyTuple_Pack(1, __pyx_n_s_default_algorithms); if (unlikely(!__pyx_tuple__5)) __PYX_ERR(0, 73, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__5);
  __Pyx_GIVEREF(__pyx_tuple__5);
  __pyx_codeobj__6 = (PyObject*)__Pyx_PyCode_New(0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__5, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_get_default_algorithms, 73, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__6)) __PYX_ERR(0, 73, __pyx_L1_error)

   
  __pyx_tuple__7 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_key); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);
  __pyx_codeobj__8 = (PyObject*)__Pyx_PyCode_New(2, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__7, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_prepare_key, 112, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__8)) __PYX_ERR(0, 112, __pyx_L1_error)

   
  __pyx_tuple__9 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key); if (unlikely(!__pyx_tuple__9)) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__9);
  __Pyx_GIVEREF(__pyx_tuple__9);
  __pyx_codeobj__10 = (PyObject*)__Pyx_PyCode_New(3, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__9, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_sign, 119, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__10)) __PYX_ERR(0, 119, __pyx_L1_error)

   
  __pyx_tuple__11 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_sig); if (unlikely(!__pyx_tuple__11)) __PYX_ERR(0, 126, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__11);
  __Pyx_GIVEREF(__pyx_tuple__11);
  __pyx_codeobj__12 = (PyObject*)__Pyx_PyCode_New(4, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__11, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_verify, 126, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__12)) __PYX_ERR(0, 126, __pyx_L1_error)

   
  __pyx_tuple__13 = PyTuple_Pack(1, __pyx_n_s_key_obj); if (unlikely(!__pyx_tuple__13)) __PYX_ERR(0, 134, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__13);
  __Pyx_GIVEREF(__pyx_tuple__13);
  __pyx_codeobj__14 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__13, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_to_jwk, 134, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__14)) __PYX_ERR(0, 134, __pyx_L1_error)

   
  __pyx_tuple__15 = PyTuple_Pack(1, __pyx_n_s_jwk); if (unlikely(!__pyx_tuple__15)) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__15);
  __Pyx_GIVEREF(__pyx_tuple__15);
  __pyx_codeobj__16 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__15, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_from_jwk, 141, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__16)) __PYX_ERR(0, 141, __pyx_L1_error)

   
  __pyx_tuple__17 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_key); if (unlikely(!__pyx_tuple__17)) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__17);
  __Pyx_GIVEREF(__pyx_tuple__17);
  __pyx_codeobj__18 = (PyObject*)__Pyx_PyCode_New(2, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__17, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_prepare_key, 154, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__18)) __PYX_ERR(0, 154, __pyx_L1_error)

   
  __pyx_tuple__19 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key); if (unlikely(!__pyx_tuple__19)) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_tuple__19);
  __pyx_codeobj__20 = (PyObject*)__Pyx_PyCode_New(3, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__19, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_sign, 163, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__20)) __PYX_ERR(0, 163, __pyx_L1_error)

   
  __pyx_tuple__21 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_sig); if (unlikely(!__pyx_tuple__21)) __PYX_ERR(0, 166, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__21);
  __Pyx_GIVEREF(__pyx_tuple__21);
  __pyx_codeobj__22 = (PyObject*)__Pyx_PyCode_New(4, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__21, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_verify, 166, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__22)) __PYX_ERR(0, 166, __pyx_L1_error)

   
  __pyx_tuple__23 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_tuple__23)) __PYX_ERR(0, 180, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__23);
  __Pyx_GIVEREF(__pyx_tuple__23);
  __pyx_codeobj__24 = (PyObject*)__Pyx_PyCode_New(2, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__23, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_init, 180, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__24)) __PYX_ERR(0, 180, __pyx_L1_error)

   
  __pyx_tuple__25 = PyTuple_Pack(5, __pyx_n_s_self, __pyx_n_s_key, __pyx_n_s_invalid_strings, __pyx_n_s_genexpr, __pyx_n_s_genexpr); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);
  __pyx_codeobj__26 = (PyObject*)__Pyx_PyCode_New(2, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__25, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_prepare_key, 183, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__26)) __PYX_ERR(0, 183, __pyx_L1_error)

   
  __pyx_tuple__27 = PyTuple_Pack(1, __pyx_n_s_key_obj); if (unlikely(!__pyx_tuple__27)) __PYX_ERR(0, 202, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__27);
  __Pyx_GIVEREF(__pyx_tuple__27);
  __pyx_codeobj__28 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__27, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_to_jwk, 202, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__28)) __PYX_ERR(0, 202, __pyx_L1_error)

   
  __pyx_tuple__29 = PyTuple_Pack(2, __pyx_n_s_jwk, __pyx_n_s_obj); if (unlikely(!__pyx_tuple__29)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__29);
  __Pyx_GIVEREF(__pyx_tuple__29);
  __pyx_codeobj__30 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__29, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_from_jwk, 211, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__30)) __PYX_ERR(0, 211, __pyx_L1_error)

   
  __pyx_tuple__31 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key); if (unlikely(!__pyx_tuple__31)) __PYX_ERR(0, 227, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__31);
  __Pyx_GIVEREF(__pyx_tuple__31);
  __pyx_codeobj__32 = (PyObject*)__Pyx_PyCode_New(3, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__31, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_sign, 227, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__32)) __PYX_ERR(0, 227, __pyx_L1_error)

   
  __pyx_tuple__33 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_sig); if (unlikely(!__pyx_tuple__33)) __PYX_ERR(0, 230, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__33);
  __Pyx_GIVEREF(__pyx_tuple__33);
  __pyx_codeobj__34 = (PyObject*)__Pyx_PyCode_New(4, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__33, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_verify, 230, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__34)) __PYX_ERR(0, 230, __pyx_L1_error)

   
  __pyx_tuple__35 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_tuple__35)) __PYX_ERR(0, 246, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__35);
  __Pyx_GIVEREF(__pyx_tuple__35);
  __pyx_codeobj__36 = (PyObject*)__Pyx_PyCode_New(2, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__35, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_init, 246, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__36)) __PYX_ERR(0, 246, __pyx_L1_error)

   
  __pyx_tuple__37 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_key); if (unlikely(!__pyx_tuple__37)) __PYX_ERR(0, 249, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__37);
  __Pyx_GIVEREF(__pyx_tuple__37);
  __pyx_codeobj__38 = (PyObject*)__Pyx_PyCode_New(2, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__37, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_prepare_key, 249, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__38)) __PYX_ERR(0, 249, __pyx_L1_error)

   
  __pyx_tuple__39 = PyTuple_Pack(3, __pyx_n_s_key_obj, __pyx_n_s_obj, __pyx_n_s_numbers); if (unlikely(!__pyx_tuple__39)) __PYX_ERR(0, 268, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__39);
  __Pyx_GIVEREF(__pyx_tuple__39);
  __pyx_codeobj__40 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__39, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_to_jwk, 268, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__40)) __PYX_ERR(0, 268, __pyx_L1_error)

   
  __pyx_tuple__41 = PyTuple_Pack(11, __pyx_n_s_jwk, __pyx_n_s_obj, __pyx_n_s_other_props, __pyx_n_s_props_found, __pyx_n_s_any_props_found, __pyx_n_s_public_numbers, __pyx_n_s_numbers, __pyx_n_s_d, __pyx_n_s_p, __pyx_n_s_q, __pyx_n_s_prop); if (unlikely(!__pyx_tuple__41)) __PYX_ERR(0, 304, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__41);
  __Pyx_GIVEREF(__pyx_tuple__41);
  __pyx_codeobj__42 = (PyObject*)__Pyx_PyCode_New(1, 0, 11, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__41, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_from_jwk, 304, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__42)) __PYX_ERR(0, 304, __pyx_L1_error)

   
  __pyx_tuple__43 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key); if (unlikely(!__pyx_tuple__43)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__43);
  __Pyx_GIVEREF(__pyx_tuple__43);
  __pyx_codeobj__44 = (PyObject*)__Pyx_PyCode_New(3, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__43, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_sign, 377, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__44)) __PYX_ERR(0, 377, __pyx_L1_error)

   
  __pyx_tuple__45 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_sig); if (unlikely(!__pyx_tuple__45)) __PYX_ERR(0, 380, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__45);
  __Pyx_GIVEREF(__pyx_tuple__45);
  __pyx_codeobj__46 = (PyObject*)__Pyx_PyCode_New(4, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__45, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_verify, 380, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__46)) __PYX_ERR(0, 380, __pyx_L1_error)

   
  __pyx_tuple__47 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_hash_alg); if (unlikely(!__pyx_tuple__47)) __PYX_ERR(0, 397, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__47);
  __Pyx_GIVEREF(__pyx_tuple__47);
  __pyx_codeobj__48 = (PyObject*)__Pyx_PyCode_New(2, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__47, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_init, 397, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__48)) __PYX_ERR(0, 397, __pyx_L1_error)

   
  __pyx_tuple__49 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_key); if (unlikely(!__pyx_tuple__49)) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__49);
  __Pyx_GIVEREF(__pyx_tuple__49);
  __pyx_codeobj__50 = (PyObject*)__Pyx_PyCode_New(2, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__49, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_prepare_key, 400, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__50)) __PYX_ERR(0, 400, __pyx_L1_error)

   
  __pyx_tuple__51 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_der_sig); if (unlikely(!__pyx_tuple__51)) __PYX_ERR(0, 428, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__51);
  __Pyx_GIVEREF(__pyx_tuple__51);
  __pyx_codeobj__52 = (PyObject*)__Pyx_PyCode_New(3, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__51, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_sign, 428, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__52)) __PYX_ERR(0, 428, __pyx_L1_error)

   
  __pyx_tuple__53 = PyTuple_Pack(5, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_sig, __pyx_n_s_der_sig); if (unlikely(!__pyx_tuple__53)) __PYX_ERR(0, 433, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__53);
  __Pyx_GIVEREF(__pyx_tuple__53);
  __pyx_codeobj__54 = (PyObject*)__Pyx_PyCode_New(4, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__53, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_verify, 433, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__54)) __PYX_ERR(0, 433, __pyx_L1_error)

   
  __pyx_tuple__55 = PyTuple_Pack(8, __pyx_n_s_jwk, __pyx_n_s_obj, __pyx_n_s_x, __pyx_n_s_y, __pyx_n_s_curve, __pyx_n_s_curve_obj, __pyx_n_s_public_numbers, __pyx_n_s_d); if (unlikely(!__pyx_tuple__55)) __PYX_ERR(0, 448, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__55);
  __Pyx_GIVEREF(__pyx_tuple__55);
  __pyx_codeobj__56 = (PyObject*)__Pyx_PyCode_New(1, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__55, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_from_jwk, 448, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__56)) __PYX_ERR(0, 448, __pyx_L1_error)

   
  __pyx_tuple__57 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key); if (unlikely(!__pyx_tuple__57)) __PYX_ERR(0, 518, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__57);
  __Pyx_GIVEREF(__pyx_tuple__57);
  __pyx_codeobj__58 = (PyObject*)__Pyx_PyCode_New(3, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__57, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_sign, 518, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__58)) __PYX_ERR(0, 518, __pyx_L1_error)

   
  __pyx_tuple__59 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_sig); if (unlikely(!__pyx_tuple__59)) __PYX_ERR(0, 528, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__59);
  __Pyx_GIVEREF(__pyx_tuple__59);
  __pyx_codeobj__60 = (PyObject*)__Pyx_PyCode_New(4, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__59, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_verify, 528, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__60)) __PYX_ERR(0, 528, __pyx_L1_error)

   
  __pyx_tuple__61 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_kwargs); if (unlikely(!__pyx_tuple__61)) __PYX_ERR(0, 550, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__61);
  __Pyx_GIVEREF(__pyx_tuple__61);
  __pyx_codeobj__62 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__61, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_init, 550, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__62)) __PYX_ERR(0, 550, __pyx_L1_error)

   
  __pyx_tuple__63 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_key, __pyx_n_s_str_key); if (unlikely(!__pyx_tuple__63)) __PYX_ERR(0, 553, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__63);
  __Pyx_GIVEREF(__pyx_tuple__63);
  __pyx_codeobj__64 = (PyObject*)__Pyx_PyCode_New(2, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__63, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_prepare_key, 553, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__64)) __PYX_ERR(0, 553, __pyx_L1_error)

   
  __pyx_tuple__65 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key); if (unlikely(!__pyx_tuple__65)) __PYX_ERR(0, 575, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__65);
  __Pyx_GIVEREF(__pyx_tuple__65);
  __pyx_codeobj__66 = (PyObject*)__Pyx_PyCode_New(3, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__65, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_sign, 575, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__66)) __PYX_ERR(0, 575, __pyx_L1_error)

   
  __pyx_tuple__67 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_msg, __pyx_n_s_key, __pyx_n_s_sig); if (unlikely(!__pyx_tuple__67)) __PYX_ERR(0, 586, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__67);
  __Pyx_GIVEREF(__pyx_tuple__67);
  __pyx_codeobj__68 = (PyObject*)__Pyx_PyCode_New(4, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__67, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_verify, 586, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__68)) __PYX_ERR(0, 586, __pyx_L1_error)

   
  __pyx_tuple__69 = PyTuple_Pack(4, __pyx_n_s_key, __pyx_n_s_x, __pyx_n_s_crv, __pyx_n_s_d); if (unlikely(!__pyx_tuple__69)) __PYX_ERR(0, 608, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__69);
  __Pyx_GIVEREF(__pyx_tuple__69);
  __pyx_codeobj__70 = (PyObject*)__Pyx_PyCode_New(1, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__69, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_to_jwk, 608, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__70)) __PYX_ERR(0, 608, __pyx_L1_error)

   
  __pyx_tuple__71 = PyTuple_Pack(6, __pyx_n_s_jwk, __pyx_n_s_obj, __pyx_n_s_curve, __pyx_n_s_x, __pyx_n_s_d, __pyx_n_s_err); if (unlikely(!__pyx_tuple__71)) __PYX_ERR(0, 648, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__71);
  __Pyx_GIVEREF(__pyx_tuple__71);
  __pyx_codeobj__72 = (PyObject*)__Pyx_PyCode_New(1, 0, 6, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__71, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_algorithms_py, __pyx_n_s_from_jwk, 648, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__72)) __PYX_ERR(0, 648, __pyx_L1_error)
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
  __pyx_int_4 = PyInt_FromLong(4); if (unlikely(!__pyx_int_4)) __PYX_ERR(0, 1, __pyx_L1_error)
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
   
  if (PyType_Ready(&__pyx_type_3jwt_10algorithms___pyx_scope_struct__prepare_key) < 0) __PYX_ERR(0, 183, __pyx_L1_error)
  #if PY_VERSION_HEX < 0x030800B1
  __pyx_type_3jwt_10algorithms___pyx_scope_struct__prepare_key.tp_print = 0;
  #endif
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_type_3jwt_10algorithms___pyx_scope_struct__prepare_key.tp_dictoffset && __pyx_type_3jwt_10algorithms___pyx_scope_struct__prepare_key.tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_type_3jwt_10algorithms___pyx_scope_struct__prepare_key.tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  __pyx_ptype_3jwt_10algorithms___pyx_scope_struct__prepare_key = &__pyx_type_3jwt_10algorithms___pyx_scope_struct__prepare_key;
  if (PyType_Ready(&__pyx_type_3jwt_10algorithms___pyx_scope_struct_1_genexpr) < 0) __PYX_ERR(0, 193, __pyx_L1_error)
  #if PY_VERSION_HEX < 0x030800B1
  __pyx_type_3jwt_10algorithms___pyx_scope_struct_1_genexpr.tp_print = 0;
  #endif
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_type_3jwt_10algorithms___pyx_scope_struct_1_genexpr.tp_dictoffset && __pyx_type_3jwt_10algorithms___pyx_scope_struct_1_genexpr.tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_type_3jwt_10algorithms___pyx_scope_struct_1_genexpr.tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  __pyx_ptype_3jwt_10algorithms___pyx_scope_struct_1_genexpr = &__pyx_type_3jwt_10algorithms___pyx_scope_struct_1_genexpr;
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
__Pyx_PyMODINIT_FUNC initalgorithms(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC initalgorithms(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_algorithms(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC PyInit_algorithms(void)
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


static CYTHON_SMALL_CODE int __pyx_pymod_exec_algorithms(PyObject *__pyx_pyinit_module)
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
  int __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'algorithms' has already been imported. Re-initialisation is not supported.");
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
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_algorithms(void)", 0);
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
  __pyx_m = Py_InitModule4("algorithms", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
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
  if (__pyx_module_is_main_jwt__algorithms) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "jwt.algorithms")) {
      if (unlikely(PyDict_SetItemString(modules, "jwt.algorithms", __pyx_m) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
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

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_hashlib, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_hashlib, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_hmac, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_hmac, __pyx_t_1) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_json, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_json, __pyx_t_1) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_InvalidKeyError);
  __Pyx_GIVEREF(__pyx_n_s_InvalidKeyError);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_InvalidKeyError);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_exceptions, __pyx_t_1, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_InvalidKeyError); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_InvalidKeyError, __pyx_t_1) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_base64url_decode);
  __Pyx_GIVEREF(__pyx_n_s_base64url_decode);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_base64url_decode);
  __Pyx_INCREF(__pyx_n_s_base64url_encode);
  __Pyx_GIVEREF(__pyx_n_s_base64url_encode);
  PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_base64url_encode);
  __Pyx_INCREF(__pyx_n_s_der_to_raw_signature);
  __Pyx_GIVEREF(__pyx_n_s_der_to_raw_signature);
  PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_s_der_to_raw_signature);
  __Pyx_INCREF(__pyx_n_s_force_bytes);
  __Pyx_GIVEREF(__pyx_n_s_force_bytes);
  PyList_SET_ITEM(__pyx_t_2, 3, __pyx_n_s_force_bytes);
  __Pyx_INCREF(__pyx_n_s_from_base64url_uint);
  __Pyx_GIVEREF(__pyx_n_s_from_base64url_uint);
  PyList_SET_ITEM(__pyx_t_2, 4, __pyx_n_s_from_base64url_uint);
  __Pyx_INCREF(__pyx_n_s_raw_to_der_signature);
  __Pyx_GIVEREF(__pyx_n_s_raw_to_der_signature);
  PyList_SET_ITEM(__pyx_t_2, 5, __pyx_n_s_raw_to_der_signature);
  __Pyx_INCREF(__pyx_n_s_to_base64url_uint);
  __Pyx_GIVEREF(__pyx_n_s_to_base64url_uint);
  PyList_SET_ITEM(__pyx_t_2, 6, __pyx_n_s_to_base64url_uint);

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_utils, __pyx_t_2, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_base64url_decode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_base64url_decode, __pyx_t_2) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_base64url_encode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_base64url_encode, __pyx_t_2) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_der_to_raw_signature); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_der_to_raw_signature, __pyx_t_2) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_force_bytes); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_force_bytes, __pyx_t_2) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_from_base64url_uint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_from_base64url_uint, __pyx_t_2) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_raw_to_der_signature); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_raw_to_der_signature, __pyx_t_2) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_to_base64url_uint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_to_base64url_uint, __pyx_t_2) < 0) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_4, &__pyx_t_5);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_5);
      {

       
      __pyx_t_1 = __Pyx_Import(__pyx_n_s_cryptography_exceptions, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 17, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_cryptography, __pyx_t_1) < 0) __PYX_ERR(0, 17, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
      __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 18, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_n_s_InvalidSignature);
      __Pyx_GIVEREF(__pyx_n_s_InvalidSignature);
      PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_InvalidSignature);
      __pyx_t_2 = __Pyx_Import(__pyx_n_s_cryptography_exceptions, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 18, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_InvalidSignature); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 18, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_InvalidSignature, __pyx_t_1) < 0) __PYX_ERR(0, 18, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

       
      __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 19, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_INCREF(__pyx_n_s_hashes);
      __Pyx_GIVEREF(__pyx_n_s_hashes);
      PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_hashes);
      __pyx_t_1 = __Pyx_Import(__pyx_n_s_cryptography_hazmat_primitives, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 19, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_hashes); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 19, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_hashes, __pyx_t_2) < 0) __PYX_ERR(0, 19, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
      __pyx_t_1 = PyList_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 20, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_n_s_ec);
      __Pyx_GIVEREF(__pyx_n_s_ec);
      PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_ec);
      __Pyx_INCREF(__pyx_n_s_padding);
      __Pyx_GIVEREF(__pyx_n_s_padding);
      PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_s_padding);
      __pyx_t_2 = __Pyx_Import(__pyx_n_s_cryptography_hazmat_primitives_a, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 20, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_ec); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 20, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_ec, __pyx_t_1) < 0) __PYX_ERR(0, 20, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_padding); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 20, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_padding, __pyx_t_1) < 0) __PYX_ERR(0, 20, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

       
      __pyx_t_2 = PyList_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_INCREF(__pyx_n_s_EllipticCurvePrivateKey);
      __Pyx_GIVEREF(__pyx_n_s_EllipticCurvePrivateKey);
      PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_EllipticCurvePrivateKey);
      __Pyx_INCREF(__pyx_n_s_EllipticCurvePublicKey);
      __Pyx_GIVEREF(__pyx_n_s_EllipticCurvePublicKey);
      PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_EllipticCurvePublicKey);

       
      __pyx_t_1 = __Pyx_Import(__pyx_n_s_cryptography_hazmat_primitives_a_2, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 21, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_EllipticCurvePrivateKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 21, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_EllipticCurvePrivateKey, __pyx_t_2) < 0) __PYX_ERR(0, 22, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_EllipticCurvePublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 21, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_EllipticCurvePublicKey, __pyx_t_2) < 0) __PYX_ERR(0, 23, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
      __pyx_t_1 = PyList_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_n_s_Ed448PrivateKey);
      __Pyx_GIVEREF(__pyx_n_s_Ed448PrivateKey);
      PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Ed448PrivateKey);
      __Pyx_INCREF(__pyx_n_s_Ed448PublicKey);
      __Pyx_GIVEREF(__pyx_n_s_Ed448PublicKey);
      PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_s_Ed448PublicKey);

       
      __pyx_t_2 = __Pyx_Import(__pyx_n_s_cryptography_hazmat_primitives_a_3, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 25, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Ed448PrivateKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 25, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_Ed448PrivateKey, __pyx_t_1) < 0) __PYX_ERR(0, 26, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Ed448PublicKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 25, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_Ed448PublicKey, __pyx_t_1) < 0) __PYX_ERR(0, 27, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

       
      __pyx_t_2 = PyList_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_INCREF(__pyx_n_s_Ed25519PrivateKey);
      __Pyx_GIVEREF(__pyx_n_s_Ed25519PrivateKey);
      PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Ed25519PrivateKey);
      __Pyx_INCREF(__pyx_n_s_Ed25519PublicKey);
      __Pyx_GIVEREF(__pyx_n_s_Ed25519PublicKey);
      PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_Ed25519PublicKey);

       
      __pyx_t_1 = __Pyx_Import(__pyx_n_s_cryptography_hazmat_primitives_a_4, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 29, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Ed25519PrivateKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_Ed25519PrivateKey, __pyx_t_2) < 0) __PYX_ERR(0, 30, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Ed25519PublicKey); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_Ed25519PublicKey, __pyx_t_2) < 0) __PYX_ERR(0, 31, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
      __pyx_t_1 = PyList_New(8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 34, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_n_s_RSAPrivateKey);
      __Pyx_GIVEREF(__pyx_n_s_RSAPrivateKey);
      PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_RSAPrivateKey);
      __Pyx_INCREF(__pyx_n_s_RSAPrivateNumbers);
      __Pyx_GIVEREF(__pyx_n_s_RSAPrivateNumbers);
      PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_s_RSAPrivateNumbers);
      __Pyx_INCREF(__pyx_n_s_RSAPublicKey);
      __Pyx_GIVEREF(__pyx_n_s_RSAPublicKey);
      PyList_SET_ITEM(__pyx_t_1, 2, __pyx_n_s_RSAPublicKey);
      __Pyx_INCREF(__pyx_n_s_RSAPublicNumbers);
      __Pyx_GIVEREF(__pyx_n_s_RSAPublicNumbers);
      PyList_SET_ITEM(__pyx_t_1, 3, __pyx_n_s_RSAPublicNumbers);
      __Pyx_INCREF(__pyx_n_s_rsa_crt_dmp1);
      __Pyx_GIVEREF(__pyx_n_s_rsa_crt_dmp1);
      PyList_SET_ITEM(__pyx_t_1, 4, __pyx_n_s_rsa_crt_dmp1);
      __Pyx_INCREF(__pyx_n_s_rsa_crt_dmq1);
      __Pyx_GIVEREF(__pyx_n_s_rsa_crt_dmq1);
      PyList_SET_ITEM(__pyx_t_1, 5, __pyx_n_s_rsa_crt_dmq1);
      __Pyx_INCREF(__pyx_n_s_rsa_crt_iqmp);
      __Pyx_GIVEREF(__pyx_n_s_rsa_crt_iqmp);
      PyList_SET_ITEM(__pyx_t_1, 6, __pyx_n_s_rsa_crt_iqmp);
      __Pyx_INCREF(__pyx_n_s_rsa_recover_prime_factors);
      __Pyx_GIVEREF(__pyx_n_s_rsa_recover_prime_factors);
      PyList_SET_ITEM(__pyx_t_1, 7, __pyx_n_s_rsa_recover_prime_factors);

       
      __pyx_t_2 = __Pyx_Import(__pyx_n_s_cryptography_hazmat_primitives_a_5, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_RSAPrivateKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_RSAPrivateKey, __pyx_t_1) < 0) __PYX_ERR(0, 34, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_RSAPrivateNumbers); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_RSAPrivateNumbers, __pyx_t_1) < 0) __PYX_ERR(0, 35, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_RSAPublicKey); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_RSAPublicKey, __pyx_t_1) < 0) __PYX_ERR(0, 36, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_RSAPublicNumbers); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_RSAPublicNumbers, __pyx_t_1) < 0) __PYX_ERR(0, 37, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_rsa_crt_dmp1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_rsa_crt_dmp1, __pyx_t_1) < 0) __PYX_ERR(0, 38, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_rsa_crt_dmq1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_rsa_crt_dmq1, __pyx_t_1) < 0) __PYX_ERR(0, 39, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_rsa_crt_iqmp); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_rsa_crt_iqmp, __pyx_t_1) < 0) __PYX_ERR(0, 40, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_rsa_recover_prime_factors); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_rsa_recover_prime_factors, __pyx_t_1) < 0) __PYX_ERR(0, 41, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

       
      __pyx_t_2 = PyList_New(7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 44, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_INCREF(__pyx_n_s_Encoding);
      __Pyx_GIVEREF(__pyx_n_s_Encoding);
      PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Encoding);
      __Pyx_INCREF(__pyx_n_s_NoEncryption);
      __Pyx_GIVEREF(__pyx_n_s_NoEncryption);
      PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_NoEncryption);
      __Pyx_INCREF(__pyx_n_s_PrivateFormat);
      __Pyx_GIVEREF(__pyx_n_s_PrivateFormat);
      PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_s_PrivateFormat);
      __Pyx_INCREF(__pyx_n_s_PublicFormat);
      __Pyx_GIVEREF(__pyx_n_s_PublicFormat);
      PyList_SET_ITEM(__pyx_t_2, 3, __pyx_n_s_PublicFormat);
      __Pyx_INCREF(__pyx_n_s_load_pem_private_key);
      __Pyx_GIVEREF(__pyx_n_s_load_pem_private_key);
      PyList_SET_ITEM(__pyx_t_2, 4, __pyx_n_s_load_pem_private_key);
      __Pyx_INCREF(__pyx_n_s_load_pem_public_key);
      __Pyx_GIVEREF(__pyx_n_s_load_pem_public_key);
      PyList_SET_ITEM(__pyx_t_2, 5, __pyx_n_s_load_pem_public_key);
      __Pyx_INCREF(__pyx_n_s_load_ssh_public_key);
      __Pyx_GIVEREF(__pyx_n_s_load_ssh_public_key);
      PyList_SET_ITEM(__pyx_t_2, 6, __pyx_n_s_load_ssh_public_key);

       
      __pyx_t_1 = __Pyx_Import(__pyx_n_s_cryptography_hazmat_primitives_s, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Encoding); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_Encoding, __pyx_t_2) < 0) __PYX_ERR(0, 44, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_NoEncryption); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_NoEncryption, __pyx_t_2) < 0) __PYX_ERR(0, 45, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_PrivateFormat); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_PrivateFormat, __pyx_t_2) < 0) __PYX_ERR(0, 46, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_PublicFormat); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_PublicFormat, __pyx_t_2) < 0) __PYX_ERR(0, 47, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_load_pem_private_key); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_load_pem_private_key, __pyx_t_2) < 0) __PYX_ERR(0, 48, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_load_pem_public_key); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_load_pem_public_key, __pyx_t_2) < 0) __PYX_ERR(0, 49, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_load_ssh_public_key); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 43, __pyx_L2_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_load_ssh_public_key, __pyx_t_2) < 0) __PYX_ERR(0, 50, __pyx_L2_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_has_crypto, Py_True) < 0) __PYX_ERR(0, 53, __pyx_L2_error)

       
    }
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    goto __pyx_L7_try_end;
    __pyx_L2_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_ErrFetch(&__pyx_t_1, &__pyx_t_2, &__pyx_t_6);
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_ModuleNotFoundError); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 54, __pyx_L4_except_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_8 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_1, __pyx_t_7);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_ErrRestore(__pyx_t_1, __pyx_t_2, __pyx_t_6);
    __pyx_t_1 = 0; __pyx_t_2 = 0; __pyx_t_6 = 0;
    if (__pyx_t_8) {
      __Pyx_AddTraceback("jwt.algorithms", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_2, &__pyx_t_1) < 0) __PYX_ERR(0, 54, __pyx_L4_except_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GOTREF(__pyx_t_1);

       
      if (PyDict_SetItem(__pyx_d, __pyx_n_s_has_crypto, Py_False) < 0) __PYX_ERR(0, 55, __pyx_L4_except_error)
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L3_exception_handled;
    }
    goto __pyx_L4_except_error;
    __pyx_L4_except_error:;

     
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    goto __pyx_L1_error;
    __pyx_L3_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    __pyx_L7_try_end:;
  }

   
  __pyx_t_1 = PySet_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 58, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PySet_Add(__pyx_t_1, __pyx_n_u_RS256) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_RS384) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_RS512) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_ES256) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_ES256K) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_ES384) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_ES521) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_ES512) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_PS256) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_PS384) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_PS512) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PySet_Add(__pyx_t_1, __pyx_n_u_EdDSA) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_requires_cryptography, __pyx_t_1) < 0) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_1get_default_algorithms, 0, __pyx_n_s_get_default_algorithms, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__6)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 73, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_default_algorithms, __pyx_t_1) < 0) __PYX_ERR(0, 73, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_Algorithm, __pyx_n_s_Algorithm, (PyObject *) NULL, __pyx_n_s_jwt_algorithms, __pyx_kp_s_The_interface_for_an_algorithm); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 107, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_9Algorithm_1prepare_key, 0, __pyx_n_s_Algorithm_prepare_key, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__8)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_prepare_key, __pyx_t_2) < 0) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_9Algorithm_3sign, 0, __pyx_n_s_Algorithm_sign, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__10)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_sign, __pyx_t_2) < 0) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_9Algorithm_5verify, 0, __pyx_n_s_Algorithm_verify, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__12)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 126, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_verify, __pyx_t_2) < 0) __PYX_ERR(0, 126, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_9Algorithm_7to_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_Algorithm_to_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__14)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 134, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

   
  __pyx_t_6 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_to_jwk, __pyx_t_6) < 0) __PYX_ERR(0, 134, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

   
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_9Algorithm_9from_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_Algorithm_from_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__16)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);

   
  __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_1, __pyx_n_s_from_jwk, __pyx_t_2) < 0) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3ClassCreate(((PyObject*)&__Pyx_DefaultClassType), __pyx_n_s_Algorithm, __pyx_empty_tuple, __pyx_t_1, NULL, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 107, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Algorithm, __pyx_t_2) < 0) __PYX_ERR(0, 107, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Algorithm); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_CalculateMetaclass(NULL, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = __Pyx_Py3MetaclassPrepare(__pyx_t_1, __pyx_t_2, __pyx_n_s_NoneAlgorithm, __pyx_n_s_NoneAlgorithm, (PyObject *) NULL, __pyx_n_s_jwt_algorithms, __pyx_kp_s_Placeholder_for_use_when_no_sig); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);

   
  __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13NoneAlgorithm_1prepare_key, 0, __pyx_n_s_NoneAlgorithm_prepare_key, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__18)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_prepare_key, __pyx_t_7) < 0) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13NoneAlgorithm_3sign, 0, __pyx_n_s_NoneAlgorithm_sign, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__20)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_sign, __pyx_t_7) < 0) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13NoneAlgorithm_5verify, 0, __pyx_n_s_NoneAlgorithm_verify, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__22)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 166, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_verify, __pyx_t_7) < 0) __PYX_ERR(0, 166, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_Py3ClassCreate(__pyx_t_1, __pyx_n_s_NoneAlgorithm, __pyx_t_2, __pyx_t_6, NULL, 0, 0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_NoneAlgorithm, __pyx_t_7) < 0) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Algorithm); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = PyTuple_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_2);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_CalculateMetaclass(NULL, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_6 = __Pyx_Py3MetaclassPrepare(__pyx_t_2, __pyx_t_1, __pyx_n_s_HMACAlgorithm, __pyx_n_s_HMACAlgorithm, (PyObject *) NULL, __pyx_n_s_jwt_algorithms, __pyx_kp_s_Performs_signing_and_verificati); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_hashlib); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_sha256); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA256, __pyx_t_9) < 0) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_hashlib); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 177, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_sha384); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 177, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA384, __pyx_t_7) < 0) __PYX_ERR(0, 177, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_hashlib); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 178, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_sha512); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 178, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA512, __pyx_t_9) < 0) __PYX_ERR(0, 178, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_1__init__, 0, __pyx_n_s_HMACAlgorithm___init, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__24)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 180, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_init, __pyx_t_9) < 0) __PYX_ERR(0, 180, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_3prepare_key, 0, __pyx_n_s_HMACAlgorithm_prepare_key, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__26)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_prepare_key, __pyx_t_9) < 0) __PYX_ERR(0, 183, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_5to_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_HMACAlgorithm_to_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__28)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 202, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);

   
  __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 201, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_to_jwk, __pyx_t_7) < 0) __PYX_ERR(0, 202, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_7from_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_HMACAlgorithm_from_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__30)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);

   
  __pyx_t_9 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 210, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_from_jwk, __pyx_t_9) < 0) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_9sign, 0, __pyx_n_s_HMACAlgorithm_sign, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__32)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 227, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_sign, __pyx_t_9) < 0) __PYX_ERR(0, 227, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_13HMACAlgorithm_11verify, 0, __pyx_n_s_HMACAlgorithm_verify, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__34)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 230, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_verify, __pyx_t_9) < 0) __PYX_ERR(0, 230, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_9 = __Pyx_Py3ClassCreate(__pyx_t_2, __pyx_n_s_HMACAlgorithm, __pyx_t_1, __pyx_t_6, NULL, 0, 0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_HMACAlgorithm, __pyx_t_9) < 0) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_has_crypto); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 234, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_10 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_10 < 0)) __PYX_ERR(0, 234, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_10) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Algorithm); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 236, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 236, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_CalculateMetaclass(NULL, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 236, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_Py3MetaclassPrepare(__pyx_t_1, __pyx_t_2, __pyx_n_s_RSAAlgorithm, __pyx_n_s_RSAAlgorithm, (PyObject *) NULL, __pyx_n_s_jwt_algorithms, __pyx_kp_s_Performs_signing_and_verificati_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 236, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);

     
    __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_hashes); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 242, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_SHA256); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 242, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA256, __pyx_t_7) < 0) __PYX_ERR(0, 242, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_hashes); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 243, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_SHA384); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 243, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA384, __pyx_t_9) < 0) __PYX_ERR(0, 243, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_hashes); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 244, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_SHA512); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 244, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA512, __pyx_t_7) < 0) __PYX_ERR(0, 244, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_1__init__, 0, __pyx_n_s_RSAAlgorithm___init, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__36)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 246, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_init, __pyx_t_7) < 0) __PYX_ERR(0, 246, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_3prepare_key, 0, __pyx_n_s_RSAAlgorithm_prepare_key, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__38)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 249, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_prepare_key, __pyx_t_7) < 0) __PYX_ERR(0, 249, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_5to_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_RSAAlgorithm_to_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__40)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);

     
    __pyx_t_9 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 267, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_to_jwk, __pyx_t_9) < 0) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_7from_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_RSAAlgorithm_from_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__42)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 304, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);

     
    __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 303, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_from_jwk, __pyx_t_7) < 0) __PYX_ERR(0, 304, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_9sign, 0, __pyx_n_s_RSAAlgorithm_sign, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__44)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 377, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_sign, __pyx_t_7) < 0) __PYX_ERR(0, 377, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12RSAAlgorithm_11verify, 0, __pyx_n_s_RSAAlgorithm_verify, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__46)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 380, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_verify, __pyx_t_7) < 0) __PYX_ERR(0, 380, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_Py3ClassCreate(__pyx_t_1, __pyx_n_s_RSAAlgorithm, __pyx_t_2, __pyx_t_6, NULL, 0, 0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 236, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_RSAAlgorithm, __pyx_t_7) < 0) __PYX_ERR(0, 236, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Algorithm); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 387, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = PyTuple_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 387, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_CalculateMetaclass(NULL, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 387, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_Py3MetaclassPrepare(__pyx_t_2, __pyx_t_1, __pyx_n_s_ECAlgorithm, __pyx_n_s_ECAlgorithm, (PyObject *) NULL, __pyx_n_s_jwt_algorithms, __pyx_kp_s_Performs_signing_and_verificati_3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 387, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);

     
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_hashes); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 393, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_SHA256); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 393, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA256, __pyx_t_9) < 0) __PYX_ERR(0, 393, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_hashes); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 394, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_SHA384); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 394, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA384, __pyx_t_7) < 0) __PYX_ERR(0, 394, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_hashes); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 395, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_SHA512); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 395, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_SHA512, __pyx_t_9) < 0) __PYX_ERR(0, 395, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_11ECAlgorithm_1__init__, 0, __pyx_n_s_ECAlgorithm___init, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__48)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 397, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_init, __pyx_t_9) < 0) __PYX_ERR(0, 397, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_11ECAlgorithm_3prepare_key, 0, __pyx_n_s_ECAlgorithm_prepare_key, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__50)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 400, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_prepare_key, __pyx_t_9) < 0) __PYX_ERR(0, 400, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_11ECAlgorithm_5sign, 0, __pyx_n_s_ECAlgorithm_sign, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__52)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 428, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_sign, __pyx_t_9) < 0) __PYX_ERR(0, 428, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_11ECAlgorithm_7verify, 0, __pyx_n_s_ECAlgorithm_verify, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__54)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 433, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_verify, __pyx_t_9) < 0) __PYX_ERR(0, 433, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_11ECAlgorithm_9from_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_ECAlgorithm_from_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__56)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 448, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);

     
    __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 447, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_from_jwk, __pyx_t_7) < 0) __PYX_ERR(0, 448, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_Py3ClassCreate(__pyx_t_2, __pyx_n_s_ECAlgorithm, __pyx_t_1, __pyx_t_6, NULL, 0, 0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 387, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_ECAlgorithm, __pyx_t_7) < 0) __PYX_ERR(0, 387, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_RSAAlgorithm); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 513, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 513, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_CalculateMetaclass(NULL, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 513, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_Py3MetaclassPrepare(__pyx_t_1, __pyx_t_2, __pyx_n_s_RSAPSSAlgorithm, __pyx_n_s_RSAPSSAlgorithm, (PyObject *) NULL, __pyx_n_s_jwt_algorithms, __pyx_kp_s_Performs_a_signature_using_RSAS); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 513, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_15RSAPSSAlgorithm_1sign, 0, __pyx_n_s_RSAPSSAlgorithm_sign, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__58)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 518, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_sign, __pyx_t_7) < 0) __PYX_ERR(0, 518, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_15RSAPSSAlgorithm_3verify, 0, __pyx_n_s_RSAPSSAlgorithm_verify, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__60)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 528, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_verify, __pyx_t_7) < 0) __PYX_ERR(0, 528, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_Py3ClassCreate(__pyx_t_1, __pyx_n_s_RSAPSSAlgorithm, __pyx_t_2, __pyx_t_6, NULL, 0, 0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 513, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_RSAPSSAlgorithm, __pyx_t_7) < 0) __PYX_ERR(0, 513, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Algorithm); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = PyTuple_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_CalculateMetaclass(NULL, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_Py3MetaclassPrepare(__pyx_t_2, __pyx_t_1, __pyx_n_s_OKPAlgorithm, __pyx_n_s_OKPAlgorithm, (PyObject *) NULL, __pyx_n_s_jwt_algorithms, __pyx_kp_s_Performs_signing_and_verificati_4); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_1__init__, 0, __pyx_n_s_OKPAlgorithm___init, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__62)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 550, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_init, __pyx_t_7) < 0) __PYX_ERR(0, 550, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_3prepare_key, 0, __pyx_n_s_OKPAlgorithm_prepare_key, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__64)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_prepare_key, __pyx_t_7) < 0) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_5sign, 0, __pyx_n_s_OKPAlgorithm_sign, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__66)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_sign, __pyx_t_7) < 0) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_7verify, 0, __pyx_n_s_OKPAlgorithm_verify, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__68)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 586, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_verify, __pyx_t_7) < 0) __PYX_ERR(0, 586, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_9to_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_OKPAlgorithm_to_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__70)); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 608, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);

     
    __pyx_t_9 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_to_jwk, __pyx_t_9) < 0) __PYX_ERR(0, 608, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

     
    __pyx_t_9 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_10algorithms_12OKPAlgorithm_11from_jwk, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_OKPAlgorithm_from_jwk, NULL, __pyx_n_s_jwt_algorithms, __pyx_d, ((PyObject *)__pyx_codeobj__72)); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 648, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);

     
    __pyx_t_7 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 647, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_from_jwk, __pyx_t_7) < 0) __PYX_ERR(0, 648, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_7 = __Pyx_Py3ClassCreate(__pyx_t_2, __pyx_n_s_OKPAlgorithm, __pyx_t_1, __pyx_t_6, NULL, 0, 0); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_OKPAlgorithm, __pyx_t_7) < 0) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_9);
  if (__pyx_m) {
    if (__pyx_d) {
      __Pyx_AddTraceback("init jwt.algorithms", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    Py_CLEAR(__pyx_m);
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init jwt.algorithms");
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

 
#if PY_MAJOR_VERSION < 3
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb,
                        CYTHON_UNUSED PyObject *cause) {
    __Pyx_PyThreadState_declare
    Py_XINCREF(type);
    if (!value || value == Py_None)
        value = NULL;
    else
        Py_INCREF(value);
    if (!tb || tb == Py_None)
        tb = NULL;
    else {
        Py_INCREF(tb);
        if (!PyTraceBack_Check(tb)) {
            PyErr_SetString(PyExc_TypeError,
                "raise: arg 3 must be a traceback or None");
            goto raise_error;
        }
    }
    if (PyType_Check(type)) {
#if CYTHON_COMPILING_IN_PYPY
        if (!value) {
            Py_INCREF(Py_None);
            value = Py_None;
        }
#endif
        PyErr_NormalizeException(&type, &value, &tb);
    } else {
        if (value) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto raise_error;
        }
        value = type;
        type = (PyObject*) Py_TYPE(type);
        Py_INCREF(type);
        if (!PyType_IsSubtype((PyTypeObject *)type, (PyTypeObject *)PyExc_BaseException)) {
            PyErr_SetString(PyExc_TypeError,
                "raise: exception class must be a subclass of BaseException");
            goto raise_error;
        }
    }
    __Pyx_PyThreadState_assign
    __Pyx_ErrRestore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}
#else
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause) {
    PyObject* owned_instance = NULL;
    if (tb == Py_None) {
        tb = 0;
    } else if (tb && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto bad;
    }
    if (value == Py_None)
        value = 0;
    if (PyExceptionInstance_Check(type)) {
        if (value) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto bad;
        }
        value = type;
        type = (PyObject*) Py_TYPE(value);
    } else if (PyExceptionClass_Check(type)) {
        PyObject *instance_class = NULL;
        if (value && PyExceptionInstance_Check(value)) {
            instance_class = (PyObject*) Py_TYPE(value);
            if (instance_class != type) {
                int is_subclass = PyObject_IsSubclass(instance_class, type);
                if (!is_subclass) {
                    instance_class = NULL;
                } else if (unlikely(is_subclass == -1)) {
                    goto bad;
                } else {
                    type = instance_class;
                }
            }
        }
        if (!instance_class) {
            PyObject *args;
            if (!value)
                args = PyTuple_New(0);
            else if (PyTuple_Check(value)) {
                Py_INCREF(value);
                args = value;
            } else
                args = PyTuple_Pack(1, value);
            if (!args)
                goto bad;
            owned_instance = PyObject_Call(type, args, NULL);
            Py_DECREF(args);
            if (!owned_instance)
                goto bad;
            value = owned_instance;
            if (!PyExceptionInstance_Check(value)) {
                PyErr_Format(PyExc_TypeError,
                             "calling %R should have returned an instance of "
                             "BaseException, not %R",
                             type, Py_TYPE(value));
                goto bad;
            }
        }
    } else {
        PyErr_SetString(PyExc_TypeError,
            "raise: exception class must be a subclass of BaseException");
        goto bad;
    }
    if (cause) {
        PyObject *fixed_cause;
        if (cause == Py_None) {
            fixed_cause = NULL;
        } else if (PyExceptionClass_Check(cause)) {
            fixed_cause = PyObject_CallObject(cause, NULL);
            if (fixed_cause == NULL)
                goto bad;
        } else if (PyExceptionInstance_Check(cause)) {
            fixed_cause = cause;
            Py_INCREF(fixed_cause);
        } else {
            PyErr_SetString(PyExc_TypeError,
                            "exception causes must derive from "
                            "BaseException");
            goto bad;
        }
        PyException_SetCause(value, fixed_cause);
    }
    PyErr_SetObject(type, value);
    if (tb) {
#if CYTHON_COMPILING_IN_PYPY
        PyObject *tmp_type, *tmp_value, *tmp_tb;
        PyErr_Fetch(&tmp_type, &tmp_value, &tmp_tb);
        Py_INCREF(tb);
        PyErr_Restore(tmp_type, tmp_value, tb);
        Py_XDECREF(tmp_tb);
#else
        PyThreadState *tstate = __Pyx_PyThreadState_Current;
        PyObject* tmp_tb = tstate->curexc_traceback;
        if (tb != tmp_tb) {
            Py_INCREF(tb);
            tstate->curexc_traceback = tb;
            Py_XDECREF(tmp_tb);
        }
#endif
    }
bad:
    Py_XDECREF(owned_instance);
    return;
}
#endif

 
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

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname) {
    PyErr_Format(PyExc_NameError, "free variable '%s' referenced before assignment in enclosing scope", varname);
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
static int __Pyx_PyErr_ExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        if (__Pyx_PyErr_GivenExceptionMatches(exc_type, PyTuple_GET_ITEM(tuple, i))) return 1;
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err) {
    PyObject *exc_type = tstate->curexc_type;
    if (exc_type == err) return 1;
    if (unlikely(!exc_type)) return 0;
    if (unlikely(PyTuple_Check(err)))
        return __Pyx_PyErr_ExceptionMatchesTuple(exc_type, err);
    return __Pyx_PyErr_GivenExceptionMatches(exc_type, err);
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

 
static PyObject *__Pyx_GetAttr3Default(PyObject *d) {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    if (unlikely(!__Pyx_PyErr_ExceptionMatches(PyExc_AttributeError)))
        return NULL;
    __Pyx_PyErr_Clear();
    Py_INCREF(d);
    return d;
}
static CYTHON_INLINE PyObject *__Pyx_GetAttr3(PyObject *o, PyObject *n, PyObject *d) {
    PyObject *r = __Pyx_GetAttr(o, n);
    return (likely(r)) ? r : __Pyx_GetAttr3Default(d);
}

 
static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected) {
    PyErr_Format(PyExc_ValueError,
                 "too many values to unpack (expected %" CYTHON_FORMAT_SSIZE_T "d)", expected);
}

 
static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index) {
    PyErr_Format(PyExc_ValueError,
                 "need more than %" CYTHON_FORMAT_SSIZE_T "d value%.1s to unpack",
                 index, (index == 1) ? "" : "s");
}

 
static CYTHON_INLINE int __Pyx_IterFinish(void) {
#if CYTHON_FAST_THREAD_STATE
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject* exc_type = tstate->curexc_type;
    if (unlikely(exc_type)) {
        if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) {
            PyObject *exc_value, *exc_tb;
            exc_value = tstate->curexc_value;
            exc_tb = tstate->curexc_traceback;
            tstate->curexc_type = 0;
            tstate->curexc_value = 0;
            tstate->curexc_traceback = 0;
            Py_DECREF(exc_type);
            Py_XDECREF(exc_value);
            Py_XDECREF(exc_tb);
            return 0;
        } else {
            return -1;
        }
    }
    return 0;
#else
    if (unlikely(PyErr_Occurred())) {
        if (likely(PyErr_ExceptionMatches(PyExc_StopIteration))) {
            PyErr_Clear();
            return 0;
        } else {
            return -1;
        }
    }
    return 0;
#endif
}

 
static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected) {
    if (unlikely(retval)) {
        Py_DECREF(retval);
        __Pyx_RaiseTooManyValuesError(expected);
        return -1;
    }
    return __Pyx_IterFinish();
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

 
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = *type;
    exc_info->exc_value = *value;
    exc_info->exc_traceback = *tb;
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = *type;
    tstate->exc_value = *value;
    tstate->exc_traceback = *tb;
    #endif
    *type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
}
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    PyErr_GetExcInfo(&tmp_type, &tmp_value, &tmp_tb);
    PyErr_SetExcInfo(*type, *value, *tb);
    *type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
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

 
#include <structmember.h>
#include <frameobject.h>
#if PY_VERSION_HEX >= 0x030b00a6
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
#define __Pyx_Coroutine_Undelegate(gen) Py_CLEAR((gen)->yieldfrom)
static int __Pyx_PyGen__FetchStopIterationValue(CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject **pvalue) {
    PyObject *et, *ev, *tb;
    PyObject *value = NULL;
    __Pyx_ErrFetch(&et, &ev, &tb);
    if (!et) {
        Py_XDECREF(tb);
        Py_XDECREF(ev);
        Py_INCREF(Py_None);
        *pvalue = Py_None;
        return 0;
    }
    if (likely(et == PyExc_StopIteration)) {
        if (!ev) {
            Py_INCREF(Py_None);
            value = Py_None;
        }
#if PY_VERSION_HEX >= 0x030300A0
        else if (Py_TYPE(ev) == (PyTypeObject*)PyExc_StopIteration) {
            value = ((PyStopIterationObject *)ev)->value;
            Py_INCREF(value);
            Py_DECREF(ev);
        }
#endif
        else if (unlikely(PyTuple_Check(ev))) {
            if (PyTuple_GET_SIZE(ev) >= 1) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                value = PyTuple_GET_ITEM(ev, 0);
                Py_INCREF(value);
#else
                value = PySequence_ITEM(ev, 0);
#endif
            } else {
                Py_INCREF(Py_None);
                value = Py_None;
            }
            Py_DECREF(ev);
        }
        else if (!__Pyx_TypeCheck(ev, (PyTypeObject*)PyExc_StopIteration)) {
            value = ev;
        }
        if (likely(value)) {
            Py_XDECREF(tb);
            Py_DECREF(et);
            *pvalue = value;
            return 0;
        }
    } else if (!__Pyx_PyErr_GivenExceptionMatches(et, PyExc_StopIteration)) {
        __Pyx_ErrRestore(et, ev, tb);
        return -1;
    }
    PyErr_NormalizeException(&et, &ev, &tb);
    if (unlikely(!PyObject_TypeCheck(ev, (PyTypeObject*)PyExc_StopIteration))) {
        __Pyx_ErrRestore(et, ev, tb);
        return -1;
    }
    Py_XDECREF(tb);
    Py_DECREF(et);
#if PY_VERSION_HEX >= 0x030300A0
    value = ((PyStopIterationObject *)ev)->value;
    Py_INCREF(value);
    Py_DECREF(ev);
#else
    {
        PyObject* args = __Pyx_PyObject_GetAttrStr(ev, __pyx_n_s_args);
        Py_DECREF(ev);
        if (likely(args)) {
            value = PySequence_GetItem(args, 0);
            Py_DECREF(args);
        }
        if (unlikely(!value)) {
            __Pyx_ErrRestore(NULL, NULL, NULL);
            Py_INCREF(Py_None);
            value = Py_None;
        }
    }
#endif
    *pvalue = value;
    return 0;
}
static CYTHON_INLINE
void __Pyx_Coroutine_ExceptionClear(__Pyx_ExcInfoStruct *exc_state) {
    PyObject *t, *v, *tb;
    t = exc_state->exc_type;
    v = exc_state->exc_value;
    tb = exc_state->exc_traceback;
    exc_state->exc_type = NULL;
    exc_state->exc_value = NULL;
    exc_state->exc_traceback = NULL;
    Py_XDECREF(t);
    Py_XDECREF(v);
    Py_XDECREF(tb);
}
#define __Pyx_Coroutine_AlreadyRunningError(gen)  (__Pyx__Coroutine_AlreadyRunningError(gen), (PyObject*)NULL)
static void __Pyx__Coroutine_AlreadyRunningError(CYTHON_UNUSED __pyx_CoroutineObject *gen) {
    const char *msg;
    if ((0)) {
    #ifdef __Pyx_Coroutine_USED
    } else if (__Pyx_Coroutine_Check((PyObject*)gen)) {
        msg = "coroutine already executing";
    #endif
    #ifdef __Pyx_AsyncGen_USED
    } else if (__Pyx_AsyncGen_CheckExact((PyObject*)gen)) {
        msg = "async generator already executing";
    #endif
    } else {
        msg = "generator already executing";
    }
    PyErr_SetString(PyExc_ValueError, msg);
}
#define __Pyx_Coroutine_NotStartedError(gen)  (__Pyx__Coroutine_NotStartedError(gen), (PyObject*)NULL)
static void __Pyx__Coroutine_NotStartedError(CYTHON_UNUSED PyObject *gen) {
    const char *msg;
    if ((0)) {
    #ifdef __Pyx_Coroutine_USED
    } else if (__Pyx_Coroutine_Check(gen)) {
        msg = "can't send non-None value to a just-started coroutine";
    #endif
    #ifdef __Pyx_AsyncGen_USED
    } else if (__Pyx_AsyncGen_CheckExact(gen)) {
        msg = "can't send non-None value to a just-started async generator";
    #endif
    } else {
        msg = "can't send non-None value to a just-started generator";
    }
    PyErr_SetString(PyExc_TypeError, msg);
}
#define __Pyx_Coroutine_AlreadyTerminatedError(gen, value, closing)  (__Pyx__Coroutine_AlreadyTerminatedError(gen, value, closing), (PyObject*)NULL)
static void __Pyx__Coroutine_AlreadyTerminatedError(CYTHON_UNUSED PyObject *gen, PyObject *value, CYTHON_UNUSED int closing) {
    #ifdef __Pyx_Coroutine_USED
    if (!closing && __Pyx_Coroutine_Check(gen)) {
        PyErr_SetString(PyExc_RuntimeError, "cannot reuse already awaited coroutine");
    } else
    #endif
    if (value) {
        #ifdef __Pyx_AsyncGen_USED
        if (__Pyx_AsyncGen_CheckExact(gen))
            PyErr_SetNone(__Pyx_PyExc_StopAsyncIteration);
        else
        #endif
        PyErr_SetNone(PyExc_StopIteration);
    }
}
static
PyObject *__Pyx_Coroutine_SendEx(__pyx_CoroutineObject *self, PyObject *value, int closing) {
    __Pyx_PyThreadState_declare
    PyThreadState *tstate;
    __Pyx_ExcInfoStruct *exc_state;
    PyObject *retval;
    assert(!self->is_running);
    if (unlikely(self->resume_label == 0)) {
        if (unlikely(value && value != Py_None)) {
            return __Pyx_Coroutine_NotStartedError((PyObject*)self);
        }
    }
    if (unlikely(self->resume_label == -1)) {
        return __Pyx_Coroutine_AlreadyTerminatedError((PyObject*)self, value, closing);
    }
#if CYTHON_FAST_THREAD_STATE
    __Pyx_PyThreadState_assign
    tstate = __pyx_tstate;
#else
    tstate = __Pyx_PyThreadState_Current;
#endif
    exc_state = &self->gi_exc_state;
    if (exc_state->exc_type) {
        #if CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_PYSTON
        #else
        if (exc_state->exc_traceback) {
            PyTracebackObject *tb = (PyTracebackObject *) exc_state->exc_traceback;
            PyFrameObject *f = tb->tb_frame;
            assert(f->f_back == NULL);
            #if PY_VERSION_HEX >= 0x030B00A1
            f->f_back = PyThreadState_GetFrame(tstate);
            #else
            Py_XINCREF(tstate->frame);
            f->f_back = tstate->frame;
            #endif
        }
        #endif
    }
#if CYTHON_USE_EXC_INFO_STACK
    exc_state->previous_item = tstate->exc_info;
    tstate->exc_info = exc_state;
#else
    if (exc_state->exc_type) {
        __Pyx_ExceptionSwap(&exc_state->exc_type, &exc_state->exc_value, &exc_state->exc_traceback);
    } else {
        __Pyx_Coroutine_ExceptionClear(exc_state);
        __Pyx_ExceptionSave(&exc_state->exc_type, &exc_state->exc_value, &exc_state->exc_traceback);
    }
#endif
    self->is_running = 1;
    retval = self->body((PyObject *) self, tstate, value);
    self->is_running = 0;
#if CYTHON_USE_EXC_INFO_STACK
    exc_state = &self->gi_exc_state;
    tstate->exc_info = exc_state->previous_item;
    exc_state->previous_item = NULL;
    __Pyx_Coroutine_ResetFrameBackpointer(exc_state);
#endif
    return retval;
}
static CYTHON_INLINE void __Pyx_Coroutine_ResetFrameBackpointer(__Pyx_ExcInfoStruct *exc_state) {
    PyObject *exc_tb = exc_state->exc_traceback;
    if (likely(exc_tb)) {
#if CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_PYSTON
#else
        PyTracebackObject *tb = (PyTracebackObject *) exc_tb;
        PyFrameObject *f = tb->tb_frame;
        Py_CLEAR(f->f_back);
#endif
    }
}
static CYTHON_INLINE
PyObject *__Pyx_Coroutine_MethodReturn(CYTHON_UNUSED PyObject* gen, PyObject *retval) {
    if (unlikely(!retval)) {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        if (!__Pyx_PyErr_Occurred()) {
            PyObject *exc = PyExc_StopIteration;
            #ifdef __Pyx_AsyncGen_USED
            if (__Pyx_AsyncGen_CheckExact(gen))
                exc = __Pyx_PyExc_StopAsyncIteration;
            #endif
            __Pyx_PyErr_SetNone(exc);
        }
    }
    return retval;
}
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03030000 && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
static CYTHON_INLINE
PyObject *__Pyx_PyGen_Send(PyGenObject *gen, PyObject *arg) {
#if PY_VERSION_HEX <= 0x030A00A1
    return _PyGen_Send(gen, arg);
#else
    PyObject *result;
    if (PyIter_Send((PyObject*)gen, arg ? arg : Py_None, &result) == PYGEN_RETURN) {
        if (PyAsyncGen_CheckExact(gen)) {
            assert(result == Py_None);
            PyErr_SetNone(PyExc_StopAsyncIteration);
        }
        else if (result == Py_None) {
            PyErr_SetNone(PyExc_StopIteration);
        }
        else {
            _PyGen_SetStopIterationValue(result);
        }
        Py_CLEAR(result);
    }
    return result;
#endif
}
#endif
static CYTHON_INLINE
PyObject *__Pyx_Coroutine_FinishDelegation(__pyx_CoroutineObject *gen) {
    PyObject *ret;
    PyObject *val = NULL;
    __Pyx_Coroutine_Undelegate(gen);
    __Pyx_PyGen__FetchStopIterationValue(__Pyx_PyThreadState_Current, &val);
    ret = __Pyx_Coroutine_SendEx(gen, val, 0);
    Py_XDECREF(val);
    return ret;
}
static PyObject *__Pyx_Coroutine_Send(PyObject *self, PyObject *value) {
    PyObject *retval;
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject*) self;
    PyObject *yf = gen->yieldfrom;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        PyObject *ret;
        gen->is_running = 1;
        #ifdef __Pyx_Generator_USED
        if (__Pyx_Generator_CheckExact(yf)) {
            ret = __Pyx_Coroutine_Send(yf, value);
        } else
        #endif
        #ifdef __Pyx_Coroutine_USED
        if (__Pyx_Coroutine_Check(yf)) {
            ret = __Pyx_Coroutine_Send(yf, value);
        } else
        #endif
        #ifdef __Pyx_AsyncGen_USED
        if (__pyx_PyAsyncGenASend_CheckExact(yf)) {
            ret = __Pyx_async_gen_asend_send(yf, value);
        } else
        #endif
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03030000 && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
        if (PyGen_CheckExact(yf)) {
            ret = __Pyx_PyGen_Send((PyGenObject*)yf, value == Py_None ? NULL : value);
        } else
        #endif
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03050000 && defined(PyCoro_CheckExact) && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
        if (PyCoro_CheckExact(yf)) {
            ret = __Pyx_PyGen_Send((PyGenObject*)yf, value == Py_None ? NULL : value);
        } else
        #endif
        {
            if (value == Py_None)
                ret = Py_TYPE(yf)->tp_iternext(yf);
            else
                ret = __Pyx_PyObject_CallMethod1(yf, __pyx_n_s_send, value);
        }
        gen->is_running = 0;
        if (likely(ret)) {
            return ret;
        }
        retval = __Pyx_Coroutine_FinishDelegation(gen);
    } else {
        retval = __Pyx_Coroutine_SendEx(gen, value, 0);
    }
    return __Pyx_Coroutine_MethodReturn(self, retval);
}
static int __Pyx_Coroutine_CloseIter(__pyx_CoroutineObject *gen, PyObject *yf) {
    PyObject *retval = NULL;
    int err = 0;
    #ifdef __Pyx_Generator_USED
    if (__Pyx_Generator_CheckExact(yf)) {
        retval = __Pyx_Coroutine_Close(yf);
        if (!retval)
            return -1;
    } else
    #endif
    #ifdef __Pyx_Coroutine_USED
    if (__Pyx_Coroutine_Check(yf)) {
        retval = __Pyx_Coroutine_Close(yf);
        if (!retval)
            return -1;
    } else
    if (__Pyx_CoroutineAwait_CheckExact(yf)) {
        retval = __Pyx_CoroutineAwait_Close((__pyx_CoroutineAwaitObject*)yf, NULL);
        if (!retval)
            return -1;
    } else
    #endif
    #ifdef __Pyx_AsyncGen_USED
    if (__pyx_PyAsyncGenASend_CheckExact(yf)) {
        retval = __Pyx_async_gen_asend_close(yf, NULL);
    } else
    if (__pyx_PyAsyncGenAThrow_CheckExact(yf)) {
        retval = __Pyx_async_gen_athrow_close(yf, NULL);
    } else
    #endif
    {
        PyObject *meth;
        gen->is_running = 1;
        meth = __Pyx_PyObject_GetAttrStr(yf, __pyx_n_s_close);
        if (unlikely(!meth)) {
            if (!PyErr_ExceptionMatches(PyExc_AttributeError)) {
                PyErr_WriteUnraisable(yf);
            }
            PyErr_Clear();
        } else {
            retval = PyObject_CallFunction(meth, NULL);
            Py_DECREF(meth);
            if (!retval)
                err = -1;
        }
        gen->is_running = 0;
    }
    Py_XDECREF(retval);
    return err;
}
static PyObject *__Pyx_Generator_Next(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject*) self;
    PyObject *yf = gen->yieldfrom;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        PyObject *ret;
        gen->is_running = 1;
        #ifdef __Pyx_Generator_USED
        if (__Pyx_Generator_CheckExact(yf)) {
            ret = __Pyx_Generator_Next(yf);
        } else
        #endif
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03030000 && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
        if (PyGen_CheckExact(yf)) {
            ret = __Pyx_PyGen_Send((PyGenObject*)yf, NULL);
        } else
        #endif
        #ifdef __Pyx_Coroutine_USED
        if (__Pyx_Coroutine_Check(yf)) {
            ret = __Pyx_Coroutine_Send(yf, Py_None);
        } else
        #endif
            ret = Py_TYPE(yf)->tp_iternext(yf);
        gen->is_running = 0;
        if (likely(ret)) {
            return ret;
        }
        return __Pyx_Coroutine_FinishDelegation(gen);
    }
    return __Pyx_Coroutine_SendEx(gen, Py_None, 0);
}
static PyObject *__Pyx_Coroutine_Close_Method(PyObject *self, CYTHON_UNUSED PyObject *arg) {
    return __Pyx_Coroutine_Close(self);
}
static PyObject *__Pyx_Coroutine_Close(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    PyObject *retval, *raised_exception;
    PyObject *yf = gen->yieldfrom;
    int err = 0;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        Py_INCREF(yf);
        err = __Pyx_Coroutine_CloseIter(gen, yf);
        __Pyx_Coroutine_Undelegate(gen);
        Py_DECREF(yf);
    }
    if (err == 0)
        PyErr_SetNone(PyExc_GeneratorExit);
    retval = __Pyx_Coroutine_SendEx(gen, NULL, 1);
    if (unlikely(retval)) {
        const char *msg;
        Py_DECREF(retval);
        if ((0)) {
        #ifdef __Pyx_Coroutine_USED
        } else if (__Pyx_Coroutine_Check(self)) {
            msg = "coroutine ignored GeneratorExit";
        #endif
        #ifdef __Pyx_AsyncGen_USED
        } else if (__Pyx_AsyncGen_CheckExact(self)) {
#if PY_VERSION_HEX < 0x03060000
            msg = "async generator ignored GeneratorExit - might require Python 3.6+ finalisation (PEP 525)";
#else
            msg = "async generator ignored GeneratorExit";
#endif
        #endif
        } else {
            msg = "generator ignored GeneratorExit";
        }
        PyErr_SetString(PyExc_RuntimeError, msg);
        return NULL;
    }
    raised_exception = PyErr_Occurred();
    if (likely(!raised_exception || __Pyx_PyErr_GivenExceptionMatches2(raised_exception, PyExc_GeneratorExit, PyExc_StopIteration))) {
        if (raised_exception) PyErr_Clear();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
}
static PyObject *__Pyx__Coroutine_Throw(PyObject *self, PyObject *typ, PyObject *val, PyObject *tb,
                                        PyObject *args, int close_on_genexit) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    PyObject *yf = gen->yieldfrom;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        PyObject *ret;
        Py_INCREF(yf);
        if (__Pyx_PyErr_GivenExceptionMatches(typ, PyExc_GeneratorExit) && close_on_genexit) {
            int err = __Pyx_Coroutine_CloseIter(gen, yf);
            Py_DECREF(yf);
            __Pyx_Coroutine_Undelegate(gen);
            if (err < 0)
                return __Pyx_Coroutine_MethodReturn(self, __Pyx_Coroutine_SendEx(gen, NULL, 0));
            goto throw_here;
        }
        gen->is_running = 1;
        if (0
        #ifdef __Pyx_Generator_USED
            || __Pyx_Generator_CheckExact(yf)
        #endif
        #ifdef __Pyx_Coroutine_USED
            || __Pyx_Coroutine_Check(yf)
        #endif
            ) {
            ret = __Pyx__Coroutine_Throw(yf, typ, val, tb, args, close_on_genexit);
        #ifdef __Pyx_Coroutine_USED
        } else if (__Pyx_CoroutineAwait_CheckExact(yf)) {
            ret = __Pyx__Coroutine_Throw(((__pyx_CoroutineAwaitObject*)yf)->coroutine, typ, val, tb, args, close_on_genexit);
        #endif
        } else {
            PyObject *meth = __Pyx_PyObject_GetAttrStr(yf, __pyx_n_s_throw);
            if (unlikely(!meth)) {
                Py_DECREF(yf);
                if (!PyErr_ExceptionMatches(PyExc_AttributeError)) {
                    gen->is_running = 0;
                    return NULL;
                }
                PyErr_Clear();
                __Pyx_Coroutine_Undelegate(gen);
                gen->is_running = 0;
                goto throw_here;
            }
            if (likely(args)) {
                ret = PyObject_CallObject(meth, args);
            } else {
                ret = PyObject_CallFunctionObjArgs(meth, typ, val, tb, NULL);
            }
            Py_DECREF(meth);
        }
        gen->is_running = 0;
        Py_DECREF(yf);
        if (!ret) {
            ret = __Pyx_Coroutine_FinishDelegation(gen);
        }
        return __Pyx_Coroutine_MethodReturn(self, ret);
    }
throw_here:
    __Pyx_Raise(typ, val, tb, NULL);
    return __Pyx_Coroutine_MethodReturn(self, __Pyx_Coroutine_SendEx(gen, NULL, 0));
}
static PyObject *__Pyx_Coroutine_Throw(PyObject *self, PyObject *args) {
    PyObject *typ;
    PyObject *val = NULL;
    PyObject *tb = NULL;
    if (!PyArg_UnpackTuple(args, (char *)"throw", 1, 3, &typ, &val, &tb))
        return NULL;
    return __Pyx__Coroutine_Throw(self, typ, val, tb, args, 1);
}
static CYTHON_INLINE int __Pyx_Coroutine_traverse_excstate(__Pyx_ExcInfoStruct *exc_state, visitproc visit, void *arg) {
    Py_VISIT(exc_state->exc_type);
    Py_VISIT(exc_state->exc_value);
    Py_VISIT(exc_state->exc_traceback);
    return 0;
}
static int __Pyx_Coroutine_traverse(__pyx_CoroutineObject *gen, visitproc visit, void *arg) {
    Py_VISIT(gen->closure);
    Py_VISIT(gen->classobj);
    Py_VISIT(gen->yieldfrom);
    return __Pyx_Coroutine_traverse_excstate(&gen->gi_exc_state, visit, arg);
}
static int __Pyx_Coroutine_clear(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    Py_CLEAR(gen->closure);
    Py_CLEAR(gen->classobj);
    Py_CLEAR(gen->yieldfrom);
    __Pyx_Coroutine_ExceptionClear(&gen->gi_exc_state);
#ifdef __Pyx_AsyncGen_USED
    if (__Pyx_AsyncGen_CheckExact(self)) {
        Py_CLEAR(((__pyx_PyAsyncGenObject*)gen)->ag_finalizer);
    }
#endif
    Py_CLEAR(gen->gi_code);
    Py_CLEAR(gen->gi_frame);
    Py_CLEAR(gen->gi_name);
    Py_CLEAR(gen->gi_qualname);
    Py_CLEAR(gen->gi_modulename);
    return 0;
}
static void __Pyx_Coroutine_dealloc(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    PyObject_GC_UnTrack(gen);
    if (gen->gi_weakreflist != NULL)
        PyObject_ClearWeakRefs(self);
    if (gen->resume_label >= 0) {
        PyObject_GC_Track(self);
#if PY_VERSION_HEX >= 0x030400a1 && CYTHON_USE_TP_FINALIZE
        if (PyObject_CallFinalizerFromDealloc(self))
#else
        Py_TYPE(gen)->tp_del(self);
        if (Py_REFCNT(self) > 0)
#endif
        {
            return;
        }
        PyObject_GC_UnTrack(self);
    }
#ifdef __Pyx_AsyncGen_USED
    if (__Pyx_AsyncGen_CheckExact(self)) {
         
        Py_CLEAR(((__pyx_PyAsyncGenObject*)self)->ag_finalizer);
    }
#endif
    __Pyx_Coroutine_clear(self);
    PyObject_GC_Del(gen);
}
static void __Pyx_Coroutine_del(PyObject *self) {
    PyObject *error_type, *error_value, *error_traceback;
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    __Pyx_PyThreadState_declare
    if (gen->resume_label < 0) {
        return;
    }
#if !CYTHON_USE_TP_FINALIZE
    assert(self->ob_refcnt == 0);
    __Pyx_SET_REFCNT(self, 1);
#endif
    __Pyx_PyThreadState_assign
    __Pyx_ErrFetch(&error_type, &error_value, &error_traceback);
#ifdef __Pyx_AsyncGen_USED
    if (__Pyx_AsyncGen_CheckExact(self)) {
        __pyx_PyAsyncGenObject *agen = (__pyx_PyAsyncGenObject*)self;
        PyObject *finalizer = agen->ag_finalizer;
        if (finalizer && !agen->ag_closed) {
            PyObject *res = __Pyx_PyObject_CallOneArg(finalizer, self);
            if (unlikely(!res)) {
                PyErr_WriteUnraisable(self);
            } else {
                Py_DECREF(res);
            }
            __Pyx_ErrRestore(error_type, error_value, error_traceback);
            return;
        }
    }
#endif
    if (unlikely(gen->resume_label == 0 && !error_value)) {
#ifdef __Pyx_Coroutine_USED
#ifdef __Pyx_Generator_USED
    if (!__Pyx_Generator_CheckExact(self))
#endif
        {
        PyObject_GC_UnTrack(self);
#if PY_MAJOR_VERSION >= 3  || defined(PyErr_WarnFormat)
        if (unlikely(PyErr_WarnFormat(PyExc_RuntimeWarning, 1, "coroutine '%.50S' was never awaited", gen->gi_qualname) < 0))
            PyErr_WriteUnraisable(self);
#else
        {PyObject *msg;
        char *cmsg;
        #if CYTHON_COMPILING_IN_PYPY
        msg = NULL;
        cmsg = (char*) "coroutine was never awaited";
        #else
        char *cname;
        PyObject *qualname;
        qualname = gen->gi_qualname;
        cname = PyString_AS_STRING(qualname);
        msg = PyString_FromFormat("coroutine '%.50s' was never awaited", cname);
        if (unlikely(!msg)) {
            PyErr_Clear();
            cmsg = (char*) "coroutine was never awaited";
        } else {
            cmsg = PyString_AS_STRING(msg);
        }
        #endif
        if (unlikely(PyErr_WarnEx(PyExc_RuntimeWarning, cmsg, 1) < 0))
            PyErr_WriteUnraisable(self);
        Py_XDECREF(msg);}
#endif
        PyObject_GC_Track(self);
        }
#endif
    } else {
        PyObject *res = __Pyx_Coroutine_Close(self);
        if (unlikely(!res)) {
            if (PyErr_Occurred())
                PyErr_WriteUnraisable(self);
        } else {
            Py_DECREF(res);
        }
    }
    __Pyx_ErrRestore(error_type, error_value, error_traceback);
#if !CYTHON_USE_TP_FINALIZE
    assert(Py_REFCNT(self) > 0);
    if (--self->ob_refcnt == 0) {
        return;
    }
    {
        Py_ssize_t refcnt = Py_REFCNT(self);
        _Py_NewReference(self);
        __Pyx_SET_REFCNT(self, refcnt);
    }
#if CYTHON_COMPILING_IN_CPYTHON
    assert(PyType_IS_GC(Py_TYPE(self)) &&
           _Py_AS_GC(self)->gc.gc_refs != _PyGC_REFS_UNTRACKED);
    _Py_DEC_REFTOTAL;
#endif
#ifdef COUNT_ALLOCS
    --Py_TYPE(self)->tp_frees;
    --Py_TYPE(self)->tp_allocs;
#endif
#endif
}
static PyObject *
__Pyx_Coroutine_get_name(__pyx_CoroutineObject *self, CYTHON_UNUSED void *context)
{
    PyObject *name = self->gi_name;
    if (unlikely(!name)) name = Py_None;
    Py_INCREF(name);
    return name;
}
static int
__Pyx_Coroutine_set_name(__pyx_CoroutineObject *self, PyObject *value, CYTHON_UNUSED void *context)
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
    tmp = self->gi_name;
    Py_INCREF(value);
    self->gi_name = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_Coroutine_get_qualname(__pyx_CoroutineObject *self, CYTHON_UNUSED void *context)
{
    PyObject *name = self->gi_qualname;
    if (unlikely(!name)) name = Py_None;
    Py_INCREF(name);
    return name;
}
static int
__Pyx_Coroutine_set_qualname(__pyx_CoroutineObject *self, PyObject *value, CYTHON_UNUSED void *context)
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
    tmp = self->gi_qualname;
    Py_INCREF(value);
    self->gi_qualname = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject *
__Pyx_Coroutine_get_frame(__pyx_CoroutineObject *self, CYTHON_UNUSED void *context)
{
    PyObject *frame = self->gi_frame;
    if (!frame) {
        if (unlikely(!self->gi_code)) {
            Py_RETURN_NONE;
        }
        frame = (PyObject *) PyFrame_New(
            PyThreadState_Get(),             
            (PyCodeObject*) self->gi_code,   
            __pyx_d,                  
            0                                
        );
        if (unlikely(!frame))
            return NULL;
        self->gi_frame = frame;
    }
    Py_INCREF(frame);
    return frame;
}
static __pyx_CoroutineObject *__Pyx__Coroutine_New(
            PyTypeObject* type, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
            PyObject *name, PyObject *qualname, PyObject *module_name) {
    __pyx_CoroutineObject *gen = PyObject_GC_New(__pyx_CoroutineObject, type);
    if (unlikely(!gen))
        return NULL;
    return __Pyx__Coroutine_NewInit(gen, body, code, closure, name, qualname, module_name);
}
static __pyx_CoroutineObject *__Pyx__Coroutine_NewInit(
            __pyx_CoroutineObject *gen, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
            PyObject *name, PyObject *qualname, PyObject *module_name) {
    gen->body = body;
    gen->closure = closure;
    Py_XINCREF(closure);
    gen->is_running = 0;
    gen->resume_label = 0;
    gen->classobj = NULL;
    gen->yieldfrom = NULL;
    gen->gi_exc_state.exc_type = NULL;
    gen->gi_exc_state.exc_value = NULL;
    gen->gi_exc_state.exc_traceback = NULL;
#if CYTHON_USE_EXC_INFO_STACK
    gen->gi_exc_state.previous_item = NULL;
#endif
    gen->gi_weakreflist = NULL;
    Py_XINCREF(qualname);
    gen->gi_qualname = qualname;
    Py_XINCREF(name);
    gen->gi_name = name;
    Py_XINCREF(module_name);
    gen->gi_modulename = module_name;
    Py_XINCREF(code);
    gen->gi_code = code;
    gen->gi_frame = NULL;
    PyObject_GC_Track(gen);
    return gen;
}

 
static PyObject* __Pyx_Coroutine_patch_module(PyObject* module, const char* py_code) {
#if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
    int result;
    PyObject *globals, *result_obj;
    globals = PyDict_New();  if (unlikely(!globals)) goto ignore;
    result = PyDict_SetItemString(globals, "_cython_coroutine_type",
    #ifdef __Pyx_Coroutine_USED
        (PyObject*)__pyx_CoroutineType);
    #else
        Py_None);
    #endif
    if (unlikely(result < 0)) goto ignore;
    result = PyDict_SetItemString(globals, "_cython_generator_type",
    #ifdef __Pyx_Generator_USED
        (PyObject*)__pyx_GeneratorType);
    #else
        Py_None);
    #endif
    if (unlikely(result < 0)) goto ignore;
    if (unlikely(PyDict_SetItemString(globals, "_module", module) < 0)) goto ignore;
    if (unlikely(PyDict_SetItemString(globals, "__builtins__", __pyx_b) < 0)) goto ignore;
    result_obj = PyRun_String(py_code, Py_file_input, globals, globals);
    if (unlikely(!result_obj)) goto ignore;
    Py_DECREF(result_obj);
    Py_DECREF(globals);
    return module;
ignore:
    Py_XDECREF(globals);
    PyErr_WriteUnraisable(module);
    if (unlikely(PyErr_WarnEx(PyExc_RuntimeWarning, "Cython module failed to patch module with custom type", 1) < 0)) {
        Py_DECREF(module);
        module = NULL;
    }
#else
    py_code++;
#endif
    return module;
}

 
#ifndef CYTHON_REGISTER_ABCS
#define CYTHON_REGISTER_ABCS 1
#endif
#if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
static PyObject* __Pyx_patch_abc_module(PyObject *module);
static PyObject* __Pyx_patch_abc_module(PyObject *module) {
    module = __Pyx_Coroutine_patch_module(
        module, ""
"if _cython_generator_type is not None:\n"
"    try: Generator = _module.Generator\n"
"    except AttributeError: pass\n"
"    else: Generator.register(_cython_generator_type)\n"
"if _cython_coroutine_type is not None:\n"
"    try: Coroutine = _module.Coroutine\n"
"    except AttributeError: pass\n"
"    else: Coroutine.register(_cython_coroutine_type)\n"
    );
    return module;
}
#endif
static int __Pyx_patch_abc(void) {
#if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
    static int abc_patched = 0;
    if (CYTHON_REGISTER_ABCS && !abc_patched) {
        PyObject *module;
        module = PyImport_ImportModule((PY_MAJOR_VERSION >= 3) ? "collections.abc" : "collections");
        if (!module) {
            PyErr_WriteUnraisable(NULL);
            if (unlikely(PyErr_WarnEx(PyExc_RuntimeWarning,
                    ((PY_MAJOR_VERSION >= 3) ?
                        "Cython module failed to register with collections.abc module" :
                        "Cython module failed to register with collections module"), 1) < 0)) {
                return -1;
            }
        } else {
            module = __Pyx_patch_abc_module(module);
            abc_patched = 1;
            if (unlikely(!module))
                return -1;
            Py_DECREF(module);
        }
        module = PyImport_ImportModule("backports_abc");
        if (module) {
            module = __Pyx_patch_abc_module(module);
            Py_XDECREF(module);
        }
        if (!module) {
            PyErr_Clear();
        }
    }
#else
    if ((0)) __Pyx_Coroutine_patch_module(NULL, NULL);
#endif
    return 0;
}

 
static PyMethodDef __pyx_Generator_methods[] = {
    {"send", (PyCFunction) __Pyx_Coroutine_Send, METH_O,
     (char*) PyDoc_STR("send(arg) -> send 'arg' into generator,\nreturn next yielded value or raise StopIteration.")},
    {"throw", (PyCFunction) __Pyx_Coroutine_Throw, METH_VARARGS,
     (char*) PyDoc_STR("throw(typ[,val[,tb]]) -> raise exception in generator,\nreturn next yielded value or raise StopIteration.")},
    {"close", (PyCFunction) __Pyx_Coroutine_Close_Method, METH_NOARGS,
     (char*) PyDoc_STR("close() -> raise GeneratorExit inside generator.")},
    {0, 0, 0, 0}
};
static PyMemberDef __pyx_Generator_memberlist[] = {
    {(char *) "gi_running", T_BOOL, offsetof(__pyx_CoroutineObject, is_running), READONLY, NULL},
    {(char*) "gi_yieldfrom", T_OBJECT, offsetof(__pyx_CoroutineObject, yieldfrom), READONLY,
     (char*) PyDoc_STR("object being iterated by 'yield from', or None")},
    {(char*) "gi_code", T_OBJECT, offsetof(__pyx_CoroutineObject, gi_code), READONLY, NULL},
    {0, 0, 0, 0, 0}
};
static PyGetSetDef __pyx_Generator_getsets[] = {
    {(char *) "__name__", (getter)__Pyx_Coroutine_get_name, (setter)__Pyx_Coroutine_set_name,
     (char*) PyDoc_STR("name of the generator"), 0},
    {(char *) "__qualname__", (getter)__Pyx_Coroutine_get_qualname, (setter)__Pyx_Coroutine_set_qualname,
     (char*) PyDoc_STR("qualified name of the generator"), 0},
    {(char *) "gi_frame", (getter)__Pyx_Coroutine_get_frame, NULL,
     (char*) PyDoc_STR("Frame of the generator"), 0},
    {0, 0, 0, 0, 0}
};
static PyTypeObject __pyx_GeneratorType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    "generator",
    sizeof(__pyx_CoroutineObject),
    0,
    (destructor) __Pyx_Coroutine_dealloc,
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
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_HAVE_FINALIZE,
    0,
    (traverseproc) __Pyx_Coroutine_traverse,
    0,
    0,
    offsetof(__pyx_CoroutineObject, gi_weakreflist),
    0,
    (iternextfunc) __Pyx_Generator_Next,
    __pyx_Generator_methods,
    __pyx_Generator_memberlist,
    __pyx_Generator_getsets,
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
    0,
#if CYTHON_USE_TP_FINALIZE
    0,
#else
    __Pyx_Coroutine_del,
#endif
    0,
#if CYTHON_USE_TP_FINALIZE
    __Pyx_Coroutine_del,
#elif PY_VERSION_HEX >= 0x030400a1
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
static int __pyx_Generator_init(void) {
    __pyx_GeneratorType_type.tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
    __pyx_GeneratorType_type.tp_iter = PyObject_SelfIter;
    __pyx_GeneratorType = __Pyx_FetchCommonType(&__pyx_GeneratorType_type);
    if (unlikely(!__pyx_GeneratorType)) {
        return -1;
    }
    return 0;
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
