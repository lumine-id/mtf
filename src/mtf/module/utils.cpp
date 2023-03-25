 

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

#define __PYX_HAVE__utils
#define __PYX_HAVE_API__utils
 
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
  "mtf/module/utils.py",
};

 
struct __pyx_obj_5utils___pyx_scope_struct__get_duration;
struct __pyx_defaults;
typedef struct __pyx_defaults __pyx_defaults;
struct __pyx_defaults {
  PyObject *__pyx_arg_now;
};

 
struct __pyx_obj_5utils___pyx_scope_struct__get_duration {
  PyObject_HEAD
  PyObject *__pyx_v_days;
  PyObject *__pyx_v_duration_in_s;
  PyObject *__pyx_v_hours;
  PyObject *__pyx_v_minutes;
  PyObject *__pyx_v_seconds;
  PyObject *__pyx_v_years;
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

 
#include <string.h>

 
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);

 
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
#endif

 
#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject *__Pyx_PyCFunction_FastCall(PyObject *func, PyObject **args, Py_ssize_t nargs);
#else
#define __Pyx_PyCFunction_FastCall(func, args, nargs)  (assert(0), NULL)
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

 
static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);
#else
#define __Pyx_PyObject_CallNoArg(func) __Pyx_PyObject_Call(func, __pyx_empty_tuple, NULL)
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(
        PyObject* obj, Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
        int has_cstart, int has_cstop, int wraparound);

 
static CYTHON_INLINE PyObject *__Pyx_GetAttr(PyObject *, PyObject *);

 
static CYTHON_INLINE int __Pyx_HasAttr(PyObject *, PyObject *);

 
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

 
static CYTHON_INLINE int __Pyx_IterFinish(void);

 
static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

 
static PyObject* __Pyx_PyObject_CallMethod0(PyObject* obj, PyObject* method_name);

 
static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index);

 
static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected);

 
static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected);

 
static CYTHON_INLINE void __Pyx_RaiseNoneNotIterableError(void);

 
static void __Pyx_UnpackTupleError(PyObject *, Py_ssize_t index);

 
#define __Pyx_unpack_tuple2(tuple, value1, value2, is_tuple, has_known_size, decref_tuple)\
    (likely(is_tuple || PyTuple_Check(tuple)) ?\
        (likely(has_known_size || PyTuple_GET_SIZE(tuple) == 2) ?\
            __Pyx_unpack_tuple2_exact(tuple, value1, value2, decref_tuple) :\
            (__Pyx_UnpackTupleError(tuple, 2), -1)) :\
        __Pyx_unpack_tuple2_generic(tuple, value1, value2, has_known_size, decref_tuple))
static CYTHON_INLINE int __Pyx_unpack_tuple2_exact(
    PyObject* tuple, PyObject** value1, PyObject** value2, int decref_tuple);
static int __Pyx_unpack_tuple2_generic(
    PyObject* tuple, PyObject** value1, PyObject** value2, int has_known_size, int decref_tuple);

 
static CYTHON_INLINE PyObject* __Pyx_dict_iterator(PyObject* dict, int is_dict, PyObject* method_name,
                                                   Py_ssize_t* p_orig_length, int* p_is_dict);
static CYTHON_INLINE int __Pyx_dict_iter_next(PyObject* dict_or_iter, Py_ssize_t orig_length, Py_ssize_t* ppos,
                                              PyObject** pkey, PyObject** pvalue, PyObject** pitem, int is_dict);

 
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatSimpleAndDecref(PyObject* s, PyObject* f);
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatAndDecref(PyObject* s, PyObject* f);

 
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      Py_UCS4 max_char);

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject* key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
#endif

 
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);

 
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);

 
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject **argnames[],\
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,\
    const char* function_name);

 
static CYTHON_INLINE int __Pyx_init_unicode_iteration(
    PyObject* ustring, Py_ssize_t *length, void** data, int *kind);

 
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}

 
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

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_AddObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceAdd(op1, op2) : PyNumber_Add(op1, op2))
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyDict_Keys(PyObject* d);

 
typedef struct {
    PyObject *type;
    PyObject **method_name;
    PyCFunction func;
    PyObject *method;
    int flag;
} __Pyx_CachedCFunction;

 
static PyObject* __Pyx__CallUnboundCMethod0(__Pyx_CachedCFunction* cfunc, PyObject* self);
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_CallUnboundCMethod0(cfunc, self)\
    (likely((cfunc)->func) ?\
        (likely((cfunc)->flag == METH_NOARGS) ?  (*((cfunc)->func))(self, NULL) :\
         (PY_VERSION_HEX >= 0x030600B1 && likely((cfunc)->flag == METH_FASTCALL) ?\
            (PY_VERSION_HEX >= 0x030700A0 ?\
                (*(__Pyx_PyCFunctionFast)(void*)(PyCFunction)(cfunc)->func)(self, &__pyx_empty_tuple, 0) :\
                (*(__Pyx_PyCFunctionFastWithKeywords)(void*)(PyCFunction)(cfunc)->func)(self, &__pyx_empty_tuple, 0, NULL)) :\
          (PY_VERSION_HEX >= 0x030700A0 && (cfunc)->flag == (METH_FASTCALL | METH_KEYWORDS) ?\
            (*(__Pyx_PyCFunctionFastWithKeywords)(void*)(PyCFunction)(cfunc)->func)(self, &__pyx_empty_tuple, 0, NULL) :\
            (likely((cfunc)->flag == (METH_VARARGS | METH_KEYWORDS)) ?  ((*(PyCFunctionWithKeywords)(void*)(PyCFunction)(cfunc)->func)(self, __pyx_empty_tuple, NULL)) :\
               ((cfunc)->flag == METH_VARARGS ?  (*((cfunc)->func))(self, __pyx_empty_tuple) :\
               __Pyx__CallUnboundCMethod0(cfunc, self)))))) :\
        __Pyx__CallUnboundCMethod0(cfunc, self))
#else
#define __Pyx_CallUnboundCMethod0(cfunc, self)  __Pyx__CallUnboundCMethod0(cfunc, self)
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

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname);

 
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

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key);
#define __Pyx_PyObject_Dict_GetItem(obj, name)\
    (likely(PyDict_CheckExact(obj)) ?\
     __Pyx_PyDict_GetItem(obj, name) : PyObject_GetItem(obj, name))
#else
#define __Pyx_PyDict_GetItem(d, key) PyObject_GetItem(d, key)
#define __Pyx_PyObject_Dict_GetItem(obj, name)  PyObject_GetItem(obj, name)
#endif

 
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


 
static PyTypeObject *__pyx_ptype_5utils___pyx_scope_struct__get_duration = 0;
#define __Pyx_MODULE_NAME "utils"
extern int __pyx_module_is_main_utils;
int __pyx_module_is_main_utils = 0;

 
static PyObject *__pyx_builtin_range;
static PyObject *__pyx_builtin_enumerate;
static PyObject *__pyx_builtin_open;
static PyObject *__pyx_builtin_all;
static PyObject *__pyx_builtin_round;
static PyObject *__pyx_builtin_map;
static const char __pyx_k_a[] = "a";
static const char __pyx_k_d[] = "d";
static const char __pyx_k_f[] = "f";
static const char __pyx_k_h[] = "h";
static const char __pyx_k_m[] = "m";
static const char __pyx_k_p[] = "p";
static const char __pyx_k_s[] = "s";
static const char __pyx_k_t[] = "t";
static const char __pyx_k_y[] = "y";
static const char __pyx_k_X5[] = "X5";
static const char __pyx_k_X6[] = "X6";
static const char __pyx_k_X7[] = "X7";
static const char __pyx_k__3[] = "([^;]+)";
static const char __pyx_k__4[] = "=";
static const char __pyx_k__6[] = ";";
static const char __pyx_k__7[] = "";
static const char __pyx_k__8[] = "*";
static const char __pyx_k__9[] = "/";
static const char __pyx_k_am[] = "am";
static const char __pyx_k_fb[] = "fb";
static const char __pyx_k_id[] = "id";
static const char __pyx_k_nt[] = "nt";
static const char __pyx_k_os[] = "os";
static const char __pyx_k_re[] = "re";
static const char __pyx_k_PHX[] = " PHX/";
static const char __pyx_k_X23[] = "X23";
static const char __pyx_k_X27[] = "X27";
static const char __pyx_k_X30[] = "X30";
static const char __pyx_k_X3F[] = "X3F";
static const char __pyx_k_X3L[] = "X3L";
static const char __pyx_k_X3S[] = "X3S";
static const char __pyx_k_X3V[] = "X3V";
static const char __pyx_k_X3t[] = "X3t";
static const char __pyx_k_X40[] = "X40";
static const char __pyx_k_X50[] = "X50";
static const char __pyx_k_X5F[] = "X5F";
static const char __pyx_k_X5M[] = "X5M";
static const char __pyx_k_X60[] = "X60";
static const char __pyx_k_X6S[] = "X6S";
static const char __pyx_k_X70[] = "X70";
static const char __pyx_k_Y11[] = "Y11";
static const char __pyx_k_Y12[] = "Y12";
static const char __pyx_k_Y16[] = "Y16";
static const char __pyx_k_Y17[] = "Y17";
static const char __pyx_k_Y18[] = "Y18";
static const char __pyx_k_Y19[] = "Y19";
static const char __pyx_k_Y1S[] = "Y1S";
static const char __pyx_k_Y1i[] = "Y1i";
static const char __pyx_k_Y20[] = "Y20";
static const char __pyx_k__11[] = "\n";
static const char __pyx_k__30[] = "; ";
static const char __pyx_k__41[] = ".";
static const char __pyx_k__45[] = "_";
static const char __pyx_k_all[] = "all";
static const char __pyx_k_app[] = "app";
static const char __pyx_k_cls[] = "cls";
static const char __pyx_k_dar[] = "dar";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_key[] = "key";
static const char __pyx_k_lin[] = "lin";
static const char __pyx_k_map[] = "map";
static const char __pyx_k_now[] = "now";
static const char __pyx_k_obj[] = "obj";
static const char __pyx_k_pop[] = "pop";
static const char __pyx_k_run[] = "run";
static const char __pyx_k_sfx[] = "sfx";
static const char __pyx_k_sys[] = "sys";
static const char __pyx_k_url[] = "url";
static const char __pyx_k_web[] = "web";
static const char __pyx_k_FBSV[] = ";FBSV/";
static const char __pyx_k_MIX3[] = "MIX3";
static const char __pyx_k_MI_3[] = "MI 3";
static const char __pyx_k_MI_4[] = "MI 4";
static const char __pyx_k_OPPO[] = "OPPO";
static const char __pyx_k_PIPE[] = "PIPE";
static const char __pyx_k_Path[] = "Path";
static const char __pyx_k_VIVO[] = "VIVO";
static const char __pyx_k_Vivo[] = "; Vivo ";
static const char __pyx_k_X50e[] = "X50e";
static const char __pyx_k_X510[] = "X510";
static const char __pyx_k_X608[] = "X608";
static const char __pyx_k_X60t[] = "X60t";
static const char __pyx_k_Y11s[] = "Y11s";
static const char __pyx_k_Y11t[] = "Y11t";
static const char __pyx_k_Y12a[] = "Y12a";
static const char __pyx_k_Y15c[] = "Y15c";
static const char __pyx_k_Y15s[] = "Y15s";
static const char __pyx_k_Y17T[] = "Y17T";
static const char __pyx_k_Y17W[] = "Y17W";
static const char __pyx_k_Y19t[] = "Y19t";
static const char __pyx_k_Y20A[] = "Y20A";
static const char __pyx_k_Y20G[] = "Y20G";
static const char __pyx_k_call[] = "call";
static const char __pyx_k_data[] = "data";
static const char __pyx_k_days[] = "days";
static const char __pyx_k_dirs[] = "dirs";
static const char __pyx_k_exit[] = "exit";
static const char __pyx_k_fbid[] = "fbid";
static const char __pyx_k_item[] = "item";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_keys[] = "keys";
static const char __pyx_k_link[] = "link";
static const char __pyx_k_loop[] = "loop";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_name[] = "name";
static const char __pyx_k_open[] = "open";
static const char __pyx_k_oppo[] = "oppo";
static const char __pyx_k_path[] = "path";
static const char __pyx_k_post[] = "post";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_text[] = "text";
static const char __pyx_k_then[] = "then";
static const char __pyx_k_vivo[] = "vivo";
static const char __pyx_k_wait[] = "wait";
static const char __pyx_k_15G77[] = "15G77";
static const char __pyx_k_16B92[] = "16B92";
static const char __pyx_k_16D39[] = "16D39";
static const char __pyx_k_Build[] = " Build/";
static const char __pyx_k_JDQ39[] = "JDQ39";
static const char __pyx_k_MIX2S[] = "MIX2S";
static const char __pyx_k_MI_10[] = "MI 10";
static const char __pyx_k_MI_11[] = "MI 11";
static const char __pyx_k_MI_4i[] = "MI 4i";
static const char __pyx_k_MI_A1[] = "MI A1";
static const char __pyx_k_OPG01[] = "OPG01";
static const char __pyx_k_OPG03[] = "OPG03";
static const char __pyx_k_Popen[] = "Popen";
static const char __pyx_k_X3S_W[] = "X3S W";
static const char __pyx_k_X510t[] = "X510t";
static const char __pyx_k_X520L[] = "X520L";
static const char __pyx_k_X551F[] = "X551F";
static const char __pyx_k_X559C[] = "X559C";
static const char __pyx_k_X606B[] = "X606B";
static const char __pyx_k_array[] = "array";
static const char __pyx_k_clear[] = "clear";
static const char __pyx_k_close[] = "close";
static const char __pyx_k_enter[] = "__enter__";
static const char __pyx_k_group[] = "group";
static const char __pyx_k_hours[] = "hours";
static const char __pyx_k_index[] = "index";
static const char __pyx_k_isdir[] = "isdir";
static const char __pyx_k_items[] = "items";
static const char __pyx_k_linux[] = "linux";
static const char __pyx_k_lower[] = "lower";
static const char __pyx_k_macOS[] = "macOS";
static const char __pyx_k_mkdir[] = "mkdir";
static const char __pyx_k_model[] = "model";
static const char __pyx_k_range[] = "range";
static const char __pyx_k_round[] = "round";
static const char __pyx_k_run_2[] = "./run";
static const char __pyx_k_shell[] = "shell";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_start[] = "start";
static const char __pyx_k_strip[] = "strip";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_utils[] = "utils";
static const char __pyx_k_value[] = "value";
static const char __pyx_k_write[] = "write";
static const char __pyx_k_years[] = "years";
static const char __pyx_k_11A465[] = "11A465";
static const char __pyx_k_15E148[] = "15E148";
static const char __pyx_k_16A366[] = "16A366";
static const char __pyx_k_A001OP[] = "A001OP";
static const char __pyx_k_A002OP[] = "A002OP";
static const char __pyx_k_CPH237[] = "CPH237";
static const char __pyx_k_Chrome[] = " Chrome/";
static const char __pyx_k_KTU84P[] = "KTU84P";
static const char __pyx_k_LMY47I[] = "LMY47I";
static const char __pyx_k_MI_10S[] = "MI 10S";
static const char __pyx_k_MMB29M[] = "MMB29M";
static const char __pyx_k_MRA58K[] = "MRA58K";
static const char __pyx_k_Mobile[] = " Mobile/";
static const char __pyx_k_NRD90M[] = "NRD90M";
static const char __pyx_k_O11019[] = "O11019";
static const char __pyx_k_OPPO_2[] = "; OPPO ";
static const char __pyx_k_Safari[] = " Safari/";
static const char __pyx_k_X50_5G[] = "X50 5G";
static const char __pyx_k_X5_Pro[] = "X5 Pro";
static const char __pyx_k_X70_5G[] = "X70 5G";
static const char __pyx_k_XIAOMI[] = "XIAOMI";
static const char __pyx_k_Zero_3[] = "Zero 3";
static const char __pyx_k_Zero_X[] = "Zero X";
static const char __pyx_k_choice[] = "choice";
static const char __pyx_k_decode[] = "decode";
static const char __pyx_k_encode[] = "encode";
static const char __pyx_k_exit_2[] = "__exit__";
static const char __pyx_k_format[] = "format";
static const char __pyx_k_height[] = ",height=";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_iphone[] = "iphone";
static const char __pyx_k_isfile[] = "isfile";
static const char __pyx_k_length[] = "length";
static const char __pyx_k_mobile[] = "mobile";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_name_2[] = "__name__";
static const char __pyx_k_netloc[] = "netloc";
static const char __pyx_k_python[] = "python";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_reload[] = "reload";
static const char __pyx_k_result[] = "result";
static const char __pyx_k_run_py[] = "run.py";
static const char __pyx_k_scheme[] = "scheme";
static const char __pyx_k_search[] = "search";
static const char __pyx_k_stdout[] = "stdout";
static const char __pyx_k_string[] = "string";
static const char __pyx_k_suflix[] = "suflix";
static const char __pyx_k_unique[] = "unique";
static const char __pyx_k_userid[] = "userid";
static const char __pyx_k_values[] = "values";
static const char __pyx_k_window[] = "window";
static const char __pyx_k_xiaomi[] = "xiaomi";
static const char __pyx_k_CPH1701[] = "CPH1701";
static const char __pyx_k_CPH1871[] = "CPH1871";
static const char __pyx_k_CPH1875[] = "CPH1875";
static const char __pyx_k_CPH1907[] = "CPH1907";
static const char __pyx_k_CPH1917[] = "CPH1917";
static const char __pyx_k_CPH1919[] = "CPH1919";
static const char __pyx_k_CPH1921[] = "CPH1921";
static const char __pyx_k_CPH1945[] = "CPH1945";
static const char __pyx_k_CPH1951[] = "CPH1951";
static const char __pyx_k_CPH1955[] = "CPH1955";
static const char __pyx_k_CPH1979[] = "CPH1979";
static const char __pyx_k_CPH1983[] = "CPH1983";
static const char __pyx_k_CPH1989[] = "CPH1989";
static const char __pyx_k_CPH2005[] = "CPH2005";
static const char __pyx_k_CPH2009[] = "CPH2009";
static const char __pyx_k_CPH2013[] = "CPH2013";
static const char __pyx_k_CPH2023[] = "CPH2023";
static const char __pyx_k_CPH2025[] = "CPH2025";
static const char __pyx_k_CPH2035[] = "CPH2035";
static const char __pyx_k_CPH2036[] = "CPH2036";
static const char __pyx_k_CPH2037[] = "CPH2037";
static const char __pyx_k_CPH2043[] = "CPH2043";
static const char __pyx_k_CPH2089[] = "CPH2089";
static const char __pyx_k_CPH2091[] = "CPH2091";
static const char __pyx_k_CPH2119[] = "CPH2119";
static const char __pyx_k_CPH2121[] = "CPH2121";
static const char __pyx_k_CPH2125[] = "CPH2125";
static const char __pyx_k_CPH2127[] = "CPH2127";
static const char __pyx_k_CPH2135[] = "CPH2135";
static const char __pyx_k_CPH2145[] = "CPH2145";
static const char __pyx_k_CPH2173[] = "CPH2173";
static const char __pyx_k_CPH2207[] = "CPH2207";
static const char __pyx_k_CPH2273[] = "CPH2273";
static const char __pyx_k_CPH2305[] = "CPH2305";
static const char __pyx_k_CPH2307[] = "CPH2307";
static const char __pyx_k_CPH2309[] = "CPH2309";
static const char __pyx_k_CPH2325[] = "CPH2325";
static const char __pyx_k_CPH2343[] = "CPH2343";
static const char __pyx_k_CPH2373[] = "CPH2373";
static const char __pyx_k_CPH2437[] = "CPH2437";
static const char __pyx_k_CPH2439[] = "CPH2439";
static const char __pyx_k_HOT_10i[] = "HOT 10i";
static const char __pyx_k_HOT_10s[] = "HOT 10s";
static const char __pyx_k_HOT_11s[] = "HOT 11s";
static const char __pyx_k_HOT_20S[] = "HOT 20S";
static const char __pyx_k_HOT_20i[] = "HOT 20i";
static const char __pyx_k_INFINIX[] = "INFINIX";
static const char __pyx_k_Infinix[] = "; Infinix ";
static const char __pyx_k_MI_8_SE[] = "MI 8 SE";
static const char __pyx_k_Note_10[] = "Note 10";
static const char __pyx_k_Redmi_6[] = "Redmi 6";
static const char __pyx_k_SAMSUNG[] = "SAMSUNG";
static const char __pyx_k_Smart_6[] = "Smart 6";
static const char __pyx_k_Smart_7[] = "Smart 7";
static const char __pyx_k_Vivaldi[] = " Vivaldi/";
static const char __pyx_k_X27_Pro[] = "X27 Pro";
static const char __pyx_k_X30_Pro[] = "X30 Pro";
static const char __pyx_k_X50_Pro[] = "X50 Pro";
static const char __pyx_k_X60_Pro[] = "X60 Pro";
static const char __pyx_k_X6_Plus[] = "X6 Plus";
static const char __pyx_k_X70_Pro[] = "X70 Pro";
static const char __pyx_k_X7_Plus[] = "X7 Plus";
static const char __pyx_k_Y12_Pro[] = "Y12 Pro";
static const char __pyx_k_Zero_20[] = "Zero 20";
static const char __pyx_k_Zero_5G[] = "Zero 5G";
static const char __pyx_k_android[] = "android";
static const char __pyx_k_default[] = "default";
static const char __pyx_k_desktop[] = "desktop";
static const char __pyx_k_findall[] = "findall";
static const char __pyx_k_headers[] = "headers";
static const char __pyx_k_infinix[] = "infinix";
static const char __pyx_k_isalpha[] = "isalpha";
static const char __pyx_k_minutes[] = "minutes";
static const char __pyx_k_objects[] = "objects";
static const char __pyx_k_parents[] = "parents";
static const char __pyx_k_pathlib[] = "pathlib";
static const char __pyx_k_pattern[] = "pattern";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_randint[] = "randint";
static const char __pyx_k_samsung[] = "samsung";
static const char __pyx_k_seconds[] = "seconds";
static const char __pyx_k_uniform[] = "uniform";
static const char __pyx_k_MI_8MI_9[] = "MI 8MI 9";
static const char __pyx_k_MI_Pad_3[] = "MI Pad 3";
static const char __pyx_k_MI_Pad_4[] = "MI Pad 4";
static const char __pyx_k_Note_12i[] = "Note 12i";
static const char __pyx_k_POCO_C55[] = "POCO C55";
static const char __pyx_k_Redmi_1S[] = "Redmi 1S";
static const char __pyx_k_Redmi_6A[] = "Redmi 6A";
static const char __pyx_k_Redmi_9A[] = "Redmi 9A";
static const char __pyx_k_Redmi_9C[] = "Redmi 9C";
static const char __pyx_k_SM_A505F[] = "SM-A505F";
static const char __pyx_k_SM_A805F[] = "SM-A805F";
static const char __pyx_k_SM_F900U[] = "SM-F900U";
static const char __pyx_k_SM_G970F[] = "SM-G970F";
static const char __pyx_k_SM_G975F[] = "SM-G975F";
static const char __pyx_k_SM_G977N[] = "SM-G977N";
static const char __pyx_k_SM_G981B[] = "SM-G981B";
static const char __pyx_k_SM_N976V[] = "SM-N976V";
static const char __pyx_k_X50_Lite[] = "X50 Lite";
static const char __pyx_k_X6S_Plus[] = "X6S Plus";
static const char __pyx_k_Y12I_Pro[] = "Y12I Pro";
static const char __pyx_k_datetime[] = "datetime";
static const char __pyx_k_duration[] = "duration";
static const char __pyx_k_encoding[] = "encoding";
static const char __pyx_k_exist_ok[] = "exist_ok";
static const char __pyx_k_filename[] = "filename";
static const char __pyx_k_interval[] = "interval";
static const char __pyx_k_patterns[] = "patterns";
static const char __pyx_k_platform[] = "platform";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_replaced[] = "replaced";
static const char __pyx_k_requests[] = "requests";
static const char __pyx_k_urlparse[] = "urlparse";
static const char __pyx_k_username[] = "username";
static const char __pyx_k_xdg_open[] = "xdg-open";
static const char __pyx_k_CPH1951RU[] = "CPH1951RU";
static const char __pyx_k_GT_I9100P[] = "GT-I9100P";
static const char __pyx_k_HOT_20_5G[] = "HOT 20 5G";
static const char __pyx_k_HOT_4_Pro[] = "HOT 4 Pro";
static const char __pyx_k_MI_10_Pro[] = "MI 10 Pro";
static const char __pyx_k_MI_11_Pro[] = "MI 11 Pro";
static const char __pyx_k_Redmi_10X[] = "Redmi 10X";
static const char __pyx_k_Redmi_K40[] = "Redmi K40";
static const char __pyx_k_SAMSUNG_2[] = "; SAMSUNG ";
static const char __pyx_k_Validator[] = "Validator";
static const char __pyx_k_enumerate[] = "enumerate";
static const char __pyx_k_lookup_id[] = "lookup_id";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_mobile_id[] = "mobile_id";
static const char __pyx_k_open_link[] = "open_link";
static const char __pyx_k_startfile[] = "startfile";
static const char __pyx_k_terminate[] = "terminate";
static const char __pyx_k_Build_OPM1[] = " Build/OPM1.";
static const char __pyx_k_Build_OPR1[] = " Build/OPR1.";
static const char __pyx_k_Build_PPR1[] = " Build/PPR1.";
static const char __pyx_k_Build_QKQ1[] = " Build/QKQ1.";
static const char __pyx_k_Build_RP1A[] = " Build/RP1A.";
static const char __pyx_k_HOT_20_Pro[] = "HOT 20 Pro";
static const char __pyx_k_MI_11_Lite[] = "MI 11 Lite";
static const char __pyx_k_MI_A2_lite[] = "MI A2 lite";
static const char __pyx_k_MI_CC9_Pro[] = "MI CC9 Pro";
static const char __pyx_k_Zero_X_Pro[] = "Zero X Pro";
static const char __pyx_k_auto_lower[] = "auto_lower";
static const char __pyx_k_except_key[] = "except_key";
static const char __pyx_k_min_length[] = "min_length";
static const char __pyx_k_mtf_config[] = "mtf.config";
static const char __pyx_k_subprocess[] = "subprocess";
static const char __pyx_k_user_agent[] = "user-agent";
static const char __pyx_k_AppleWebKit[] = ") AppleWebKit/";
static const char __pyx_k_HOT_11_Play[] = "HOT 11 Play";
static const char __pyx_k_HOT_12_Play[] = "HOT 12 Play";
static const char __pyx_k_HOT_20_Play[] = "HOT 20 Play";
static const char __pyx_k_MI_10_Ultra[] = "MI 10 Ultra";
static const char __pyx_k_MI_11_Ultra[] = "MI 11 Ultra";
static const char __pyx_k_MI_9_Pro_5G[] = "MI 9 Pro 5G";
static const char __pyx_k_MI_MIX_3_5G[] = "MI MIX 3 5G";
static const char __pyx_k_Note_11_Pro[] = "Note 11 Pro";
static const char __pyx_k_Note_12_G96[] = "Note 12 G96";
static const char __pyx_k_Note_12_Pro[] = "Note 12 Pro";
static const char __pyx_k_OppoBrowser[] = " OppoBrowser/";
static const char __pyx_k_VivoBrowser[] = " VivoBrowser/";
static const char __pyx_k_random_list[] = "random_list";
static const char __pyx_k_save_result[] = "save_result";
static const char __pyx_k_sort_object[] = "sort_object";
static const char __pyx_k_POCOPHONE_F1[] = "POCOPHONE F1";
static const char __pyx_k_Redmi_5_Plus[] = "Redmi 5 Plus";
static const char __pyx_k_Redmi_Note_4[] = "Redmi Note 4";
static const char __pyx_k_Redmi_Note_7[] = "Redmi Note 7";
static const char __pyx_k_Redmi_Note_8[] = "Redmi Note 8";
static const char __pyx_k_Redmi_Note_9[] = "Redmi Note 9";
static const char __pyx_k_X50_Pro_Plus[] = "X50 Pro Plus";
static const char __pyx_k_X60_Pro_Plus[] = "X60 Pro Plus";
static const char __pyx_k_clear_screen[] = "clear_screen";
static const char __pyx_k_find_post_id[] = "find_post_id";
static const char __pyx_k_get_duration[] = "get_duration";
static const char __pyx_k_is_valid_url[] = "is_valid_url";
static const char __pyx_k_string_array[] = "string_array";
static const char __pyx_k_urllib_parse[] = "urllib.parse";
static const char __pyx_k_AppleWebKit_2[] = " AppleWebKit/";
static const char __pyx_k_MI_10_Lite_5G[] = "MI 10 Lite 5G";
static const char __pyx_k_Mobile_Safari[] = " Mobile Safari/";
static const char __pyx_k_Redmi_10X_Pro[] = "Redmi 10X Pro";
static const char __pyx_k_Redmi_K20_Pro[] = "Redmi K20 Pro";
static const char __pyx_k_Redmi_K30_Pro[] = "Redmi K30 Pro";
static const char __pyx_k_Redmi_K50_Pro[] = "Redmi K50 Pro";
static const char __pyx_k_Redmi_K60_Pro[] = "Redmi K60 Pro";
static const char __pyx_k_Redmi_Note_10[] = "Redmi Note 10";
static const char __pyx_k_Redmi_POCO_C3[] = "Redmi POCO C3";
static const char __pyx_k_duration_in_s[] = "duration_in_s";
static const char __pyx_k_object_except[] = "object_except";
static const char __pyx_k_random_string[] = "random_string";
static const char __pyx_k_sensor_string[] = "sensor_string";
static const char __pyx_k_slices_length[] = "slices_length";
static const char __pyx_k_total_seconds[] = "total_seconds";
static const char __pyx_k_FB_FW_1_FBBK_1[] = "};FB_FW/1;] FBBK/1";
static const char __pyx_k_F_A500ZKU16_01[] = "F-A500ZKU16-01";
static const char __pyx_k_F_A700ZKA32_01[] = "F-A700ZKA32-01";
static const char __pyx_k_GT_S7275UWNXEF[] = "GT-S7275UWNXEF";
static const char __pyx_k_Note_12_Pro_5G[] = "Note 12 Pro 5G";
static const char __pyx_k_SCH_I435ZKAVZW[] = "SCH-I435ZKAVZW";
static const char __pyx_k_SCH_I435ZKAXAR[] = "SCH-I435ZKAXAR";
static const char __pyx_k_SCH_I535MBPVZW[] = "SCH-I535MBPVZW";
static const char __pyx_k_SCH_I535ZKBVZW[] = "SCH-I535ZKBVZW";
static const char __pyx_k_SCH_I545ZBAVZW[] = "SCH-I545ZBAVZW";
static const char __pyx_k_SCH_I545ZKALRA[] = "SCH-I545ZKALRA";
static const char __pyx_k_SCH_I545ZWAVZW[] = "SCH-I545ZWAVZW";
static const char __pyx_k_SCH_I545ZWBVZW[] = "SCH-I545ZWBVZW";
static const char __pyx_k_SCH_I605TSAVZW[] = "SCH-I605TSAVZW";
static const char __pyx_k_SCH_I930MSAVZW[] = "SCH-I930MSAVZW";
static const char __pyx_k_SCH_R860MSAUSC[] = "SCH-R860MSAUSC";
static const char __pyx_k_SCH_R890ZKAUSC[] = "SCH-R890ZKAUSC";
static const char __pyx_k_SCH_R960ZKAUSC[] = "SCH-R960ZKAUSC";
static const char __pyx_k_SCH_R970ZWACSP[] = "SCH-R970ZWACSP";
static const char __pyx_k_SCH_R970ZWAUSC[] = "SCH-R970ZWAUSC";
static const char __pyx_k_SCH_S960RWBTFN[] = "SCH-S960RWBTFN";
static const char __pyx_k_SGH_I187XBAATT[] = "SGH-I187XBAATT";
static const char __pyx_k_SGH_I257AIAATT[] = "SGH-I257AIAATT";
static const char __pyx_k_SGH_I257ZKAATT[] = "SGH-I257ZKAATT";
static const char __pyx_k_SGH_I317TSAATT[] = "SGH-I317TSAATT";
static const char __pyx_k_SGH_I337ZKZAIO[] = "SGH-I337ZKZAIO";
static const char __pyx_k_SGH_I337ZRAATT[] = "SGH-I337ZRAATT";
static const char __pyx_k_SGH_I527ZKBATT[] = "SGH-I527ZKBATT";
static const char __pyx_k_SGH_I537ZAAATT[] = "SGH-I537ZAAATT";
static const char __pyx_k_SGH_I747MBBATT[] = "SGH-I747MBBATT";
static const char __pyx_k_SGH_M819ZKATMB[] = "SGH-M819ZKATMB";
static const char __pyx_k_SGH_M919RWATMB[] = "SGH-M919RWATMB";
static const char __pyx_k_SGH_M919ZWATMB[] = "SGH-M919ZWATMB";
static const char __pyx_k_SGH_T399DNATMB[] = "SGH-T399DNATMB";
static const char __pyx_k_SGH_T889TSATMB[] = "SGH-T889TSATMB";
static const char __pyx_k_SGH_T999MBATMB[] = "SGH-T999MBATMB";
static const char __pyx_k_SGH_T999ZWATMB[] = "SGH-T999ZWATMB";
static const char __pyx_k_SM_A300FZKUXEF[] = "SM-A300FZKUXEF";
static const char __pyx_k_SM_C105AZWAATT[] = "SM-C105AZWAATT";
static const char __pyx_k_SM_G3500ZKAXEF[] = "SM-G3500ZKAXEF";
static const char __pyx_k_SM_G357FZWZXEF[] = "SM-G357FZWZXEF";
static const char __pyx_k_SM_G360FZSAXEF[] = "SM-G360FZSAXEF";
static const char __pyx_k_SM_G386FZKAXEF[] = "SM-G386FZKAXEF";
static const char __pyx_k_SM_G386TRKATMB[] = "SM-G386TRKATMB";
static const char __pyx_k_SM_G386TZKATMB[] = "SM-G386TZKATMB";
static const char __pyx_k_SM_G388FDSAXEF[] = "SM-G388FDSAXEF";
static const char __pyx_k_SM_G530AZWZAIO[] = "SM-G530AZWZAIO";
static const char __pyx_k_SM_G530PZAASPR[] = "SM-G530PZAASPR";
static const char __pyx_k_SM_G530RZWAUSC[] = "SM-G530RZWAUSC";
static const char __pyx_k_SM_G530TZAATMB[] = "SM-G530TZAATMB";
static const char __pyx_k_SM_G730AMBAATT[] = "SM-G730AMBAATT";
static const char __pyx_k_SM_G730VMBAVZW[] = "SM-G730VMBAVZW";
static const char __pyx_k_SM_G750ANKAATT[] = "SM-G750ANKAATT";
static const char __pyx_k_SM_G800FZKAXEF[] = "SM-G800FZKAXEF";
static const char __pyx_k_SM_G850FHSEXEF[] = "SM-G850FHSEXEF";
static const char __pyx_k_SM_G900AZDAATT[] = "SM-G900AZDAATT";
static const char __pyx_k_SM_G900AZKZAIO[] = "SM-G900AZKZAIO";
static const char __pyx_k_SM_G900PZDASPR[] = "SM-G900PZDASPR";
static const char __pyx_k_SM_G900PZWABST[] = "SM-G900PZWABST";
static const char __pyx_k_SM_G900PZWAVMU[] = "SM-G900PZWAVMU";
static const char __pyx_k_SM_G900PZWEVMU[] = "SM-G900PZWEVMU";
static const char __pyx_k_SM_G900RZDAUSC[] = "SM-G900RZDAUSC";
static const char __pyx_k_SM_G900TRKATMB[] = "SM-G900TRKATMB";
static const char __pyx_k_SM_G900TZDATMB[] = "SM-G900TZDATMB";
static const char __pyx_k_SM_G900VZDAVZW[] = "SM-G900VZDAVZW";
static const char __pyx_k_SM_G920FZKAXEF[] = "SM-G920FZKAXEF";
static const char __pyx_k_SM_G925FZKAXEF[] = "SM-G925FZKAXEF";
static const char __pyx_k_SM_N900AZKEATT[] = "SM-N900AZKEATT";
static const char __pyx_k_SM_N900PZKESPR[] = "SM-N900PZKESPR";
static const char __pyx_k_SM_N900TZKETMB[] = "SM-N900TZKETMB";
static const char __pyx_k_SM_N900VWDEVZW[] = "SM-N900VWDEVZW";
static const char __pyx_k_SM_N900VZKEVZW[] = "SM-N900VZKEVZW";
static const char __pyx_k_SM_N910AZKEATT[] = "SM-N910AZKEATT";
static const char __pyx_k_SM_N910PZKESPR[] = "SM-N910PZKESPR";
static const char __pyx_k_SM_N910RZKEUSC[] = "SM-N910RZKEUSC";
static const char __pyx_k_SM_N910TZKETMB[] = "SM-N910TZKETMB";
static const char __pyx_k_SM_N910VZKEVZW[] = "SM-N910VZKEVZW";
static const char __pyx_k_SM_N915AZKEATT[] = "SM-N915AZKEATT";
static const char __pyx_k_SM_N915PZKESPR[] = "SM-N915PZKESPR";
static const char __pyx_k_SM_N915RZKEUSC[] = "SM-N915RZKEUSC";
static const char __pyx_k_SM_N915TZKETMB[] = "SM-N915TZKETMB";
static const char __pyx_k_SM_N915VZKEVZW[] = "SM-N915VZKEVZW";
static const char __pyx_k_SM_S890LZKATFN[] = "SM-S890LZKATFN";
static const char __pyx_k_SM_S902LZKATFN[] = "SM-S902LZKATFN";
static const char __pyx_k_SM_S975LZKATFN[] = "SM-S975LZKATFN";
static const char __pyx_k_SM_W750VMSAVZW[] = "SM-W750VMSAVZW";
static const char __pyx_k_SPH_I800HNASPR[] = "SPH-I800HNASPR";
static const char __pyx_k_SPH_L300ZSAVMU[] = "SPH-L300ZSAVMU";
static const char __pyx_k_SPH_L520ZKASPR[] = "SPH-L520ZKASPR";
static const char __pyx_k_SPH_L520ZKPSPR[] = "SPH-L520ZKPSPR";
static const char __pyx_k_SPH_L600ZKASPR[] = "SPH-L600ZKASPR";
static const char __pyx_k_SPH_L710MBBSPR[] = "SPH-L710MBBSPR";
static const char __pyx_k_SPH_L710RWBBST[] = "SPH-L710RWBBST";
static const char __pyx_k_SPH_L710RWBVMU[] = "SPH-L710RWBVMU";
static const char __pyx_k_SPH_L720ZBASPR[] = "SPH-L720ZBASPR";
static const char __pyx_k_SPH_L720ZPASPR[] = "SPH-L720ZPASPR";
static const char __pyx_k_SPH_L720ZWRBST[] = "SPH-L720ZWRBST";
static const char __pyx_k_SPH_L900TSASPR[] = "SPH-L900TSASPR";
static const char __pyx_k_Xiaomi_10T_Pro[] = "Xiaomi 10T Pro";
static const char __pyx_k_Xiaomi_11T_Pro[] = "Xiaomi 11T Pro";
static const char __pyx_k_decode_unicode[] = "decode_unicode";
static const char __pyx_k_iphone_version[] = "iphone_version";
static const char __pyx_k_total_duration[] = "total_duration";
static const char __pyx_k_unicode_escape[] = "unicode_escape";
static const char __pyx_k_window_version[] = "window_version";
static const char __pyx_k_LIST_USER_AGENT[] = "LIST_USER_AGENT";
static const char __pyx_k_RandomUserAgent[] = "RandomUserAgent";
static const char __pyx_k_Redmi_K20_Ultra[] = "Redmi K20 Ultra";
static const char __pyx_k_Redmi_K30_Ultra[] = "Redmi K30 Ultra";
static const char __pyx_k_android_version[] = "android_version";
static const char __pyx_k_string_password[] = "string_password";
static const char __pyx_k_Redmi_K30S_Ultra[] = "Redmi K30S Ultra";
static const char __pyx_k_Redmi_K40_Gaming[] = "Redmi K40 Gaming";
static const char __pyx_k_Redmi_Note_4_Pro[] = "Redmi Note 4 Pro";
static const char __pyx_k_Redmi_Note_7_Pro[] = "Redmi Note 7 Pro";
static const char __pyx_k_Redmi_Note_8_Pro[] = "Redmi Note 8 Pro";
static const char __pyx_k_Redmi_Note_9_Pro[] = "Redmi Note 9 Pro";
static const char __pyx_k_Xiaomi_Pad_5_pro[] = "Xiaomi Pad 5 pro";
static const char __pyx_k_Redmi_Note_10_Pro[] = "Redmi Note 10 Pro";
static const char __pyx_k_density_2_0_width[] = "{density=2.0,width=";
static const char __pyx_k_Redmi_Note_11T_Pro[] = "Redmi Note 11T Pro";
static const char __pyx_k_XiaoMi_MiuiBrowser[] = " XiaoMi/MiuiBrowser/";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_0_WOW64_AppleWebKit[] = ".0; WOW64) AppleWebKit/";
static const char __pyx_k_mtf_module_utils_py[] = "mtf/module/utils.py";
static const char __pyx_k_RandomUserAgent_oppo[] = "RandomUserAgent.oppo";
static const char __pyx_k_RandomUserAgent_vivo[] = "RandomUserAgent.vivo";
static const char __pyx_k_Redmi_Note_9_Pro_Max[] = "Redmi Note 9 Pro Max";
static const char __pyx_k_RandomUserAgent_linux[] = "RandomUserAgent.linux";
static const char __pyx_k_RandomUserAgent_macOS[] = "RandomUserAgent.macOS";
static const char __pyx_k_cookie_dict_to_string[] = "cookie_dict_to_string";
static const char __pyx_k_cookie_string_to_dict[] = "cookie_string_to_dict";
static const char __pyx_k_KHTML_like_Gecko_CriOS[] = " (KHTML, like Gecko) CriOS/";
static const char __pyx_k_Mozilla_5_0_Windows_NT[] = "Mozilla/5.0 (Windows NT ";
static const char __pyx_k_RandomUserAgent_iphone[] = "RandomUserAgent.iphone";
static const char __pyx_k_RandomUserAgent_mobile[] = "RandomUserAgent.mobile";
static const char __pyx_k_RandomUserAgent_window[] = "RandomUserAgent.window";
static const char __pyx_k_RandomUserAgent_xiaomi[] = "RandomUserAgent.xiaomi";
static const char __pyx_k_Smart_6_PlusZero_Ultra[] = "Smart 6 PlusZero Ultra";
static const char __pyx_k_Validator_is_valid_url[] = "Validator.is_valid_url";
static const char __pyx_k_https_www_facebook_com[] = "https://www.facebook.com/";
static const char __pyx_k_0_Win64_x64_AppleWebKit[] = ".0; Win64; x64) AppleWebKit/";
static const char __pyx_k_KHTML_like_Gecko_Chrome[] = " (KHTML, like Gecko) Chrome/";
static const char __pyx_k_KHTML_like_Gecko_Mobile[] = " (KHTML, like Gecko) Mobile/";
static const char __pyx_k_RandomUserAgent_android[] = "RandomUserAgent.android";
static const char __pyx_k_RandomUserAgent_desktop[] = "RandomUserAgent.desktop";
static const char __pyx_k_RandomUserAgent_infinix[] = "RandomUserAgent.infinix";
static const char __pyx_k_RandomUserAgent_samsung[] = "RandomUserAgent.samsung";
static const char __pyx_k_get_duration_locals_days[] = "get_duration.<locals>.days";
static const char __pyx_k_FBMD_iPhone_FBSN_iOS_FBSV[] = ";FBMD/iPhone;FBSN/iOS;FBSV/";
static const char __pyx_k_Mozilla_5_0_Linux_Android[] = "Mozilla/5.0 (Linux; Android ";
static const char __pyx_k_get_duration_locals_hours[] = "get_duration.<locals>.hours";
static const char __pyx_k_get_duration_locals_years[] = "get_duration.<locals>.years";
static const char __pyx_k_like_Mac_OS_X_AppleWebKit[] = " like Mac OS X) AppleWebKit/";
static const char __pyx_k_Dalvik_2_1_0_Linux_Android[] = "Dalvik/2.1.0 (Linux; Android ";
static const char __pyx_k_abcdefghijklmnopqrstuvwxyz[] = "abcdefghijklmnopqrstuvwxyz";
static const char __pyx_k_get_duration_locals_minutes[] = "get_duration.<locals>.minutes";
static const char __pyx_k_get_duration_locals_seconds[] = "get_duration.<locals>.seconds";
static const char __pyx_k_generate_passsword_from_name[] = "generate_passsword_from_name";
static const char __pyx_k_FBCA_armeabi_v7a_armeabi_FBDM[] = ";FBCA/armeabi-v7a:armeabi;FBDM/";
static const char __pyx_k_Build_O11019_FBAN_Orca_Android[] = " Build/O11019) [FBAN/Orca-Android;FBAV/241.0.0.17.116;FBPN/com.facebook.orca;FBLC/en_US;FBBV/182747440;FBCR/TRUE-H;FBMF/SAMSUNG;FBBD/SAMSUNG;FBDV/";
static const char __pyx_k_FBAN_Orca_Android_FBAV_241_0_0[] = ") [FBAN/Orca-Android;FBAV/241.0.0.17.116;FBPN/com.facebook.orca;FBLC/en_US;FBBV/182747440;FBCR/TRUE-H;FBMF/OPPO;FBBD/OPPO;FBDV/";
static const char __pyx_k_Mozilla_5_0_iPad_CPU_iPhone_OS[] = "Mozilla/5.0 (iPad; CPU iPhone OS ";
static const char __pyx_k_http_https_facebook_com_groups[] = "^(http|https):\\/\\/?(?:.*?)?facebook\\.com\\/groups\\/[a-zA-Z0-9\\.]+\\/permalink\\/([0-9]+)";
static const char __pyx_k_FBAN_MessengerForiOS_FBDV_iPhon[] = " [FBAN/MessengerForiOS;FBDV/iPhone";
static const char __pyx_k_FBSS_2_FBID_phone_FBLC_en_US_FB[] = ";FBSS/2;FBID/phone;FBLC/en_US;FBOP/5]";
static const char __pyx_k_KHTML_like_Gecko_SamsungBrowser[] = " (KHTML, like Gecko) SamsungBrowser/";
static const char __pyx_k_KHTML_like_Gecko_Ubuntu_Chromiu[] = " (KHTML, like Gecko) Ubuntu Chromium/";
static const char __pyx_k_KHTML_like_Gecko_Version_4_0_Ch[] = " (KHTML, like Gecko) Version/4.0 Chrome/";
static const char __pyx_k_Mozilla_5_0_Macintosh_Intel_Mac[] = "Mozilla/5.0 (Macintosh; Intel Mac OS X ";
static const char __pyx_k_http_https_facebook_com_0_9_pos[] = "^(http|https):\\/\\/?(?:.*?)?facebook\\.com\\/[0-9]+\\/posts\\/(pfbid\\w+|[0-9]+)";
static const char __pyx_k_http_https_facebook_com_a_zA_Z0[] = "^(http|https):\\/\\/?(?:.*?)?facebook\\.com\\/[a-zA-Z0-9\\.]+\\/videos\\/([0-9]+)";
static const char __pyx_k_http_https_facebook_com_story_p[] = "^(http|https):\\/\\/?(?:.*?)?facebook\\.com\\/story\\.php\\?story_fbid=(pfbid\\w+|[0-9]+)";
static const char __pyx_k_https_id_traodoisub_com_api_php[] = "https://id.traodoisub.com/api.php";
static const char __pyx_k_Build_O11019_FBAN_Orca_Android_2[] = " Build/O11019) [FBAN/Orca-Android;FBAV/241.0.0.17.116;FBPN/com.facebook.orca;FBLC/en_US;FBBV/182747440;FBCR/TRUE-H;FBMF/XIAOMI;FBBD/XIAOMI;FBDV/";
static const char __pyx_k_FBAN_Orca_Android_FBAV_241_0_0_2[] = ") [FBAN/Orca-Android;FBAV/241.0.0.17.116;FBPN/com.facebook.orca;FBLC/en_US;FBBV/182747440;FBCR/TRUE-H;FBMF/INFINIX;FBBD/INFINIX;FBDV/";
static const char __pyx_k_FBAN_Orca_Android_FBAV_241_0_0_3[] = ") [FBAN/Orca-Android;FBAV/241.0.0.17.116;FBPN/com.facebook.orca;FBLC/en_US;FBBV/182747440;FBCR/TRUE-H;FBMF/VIVO;FBBD/VIVO;FBDV/";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/";
static const char __pyx_k_Mozilla_5_0_iPhone_CPU_iPhone_OS[] = "Mozilla/5.0 (iPhone; CPU iPhone OS ";
static const char __pyx_k_Time_between_dates_years_days_ho[] = "Time between dates: {} years, {} days, {} hours, {} minutes and {} seconds";
static const char __pyx_k_get_duration_locals_total_durati[] = "get_duration.<locals>.total_duration";
static PyObject *__pyx_kp_u_0_WOW64_AppleWebKit;
static PyObject *__pyx_kp_u_0_Win64_x64_AppleWebKit;
static PyObject *__pyx_kp_u_11A465;
static PyObject *__pyx_kp_u_15E148;
static PyObject *__pyx_kp_u_15G77;
static PyObject *__pyx_kp_u_16A366;
static PyObject *__pyx_kp_u_16B92;
static PyObject *__pyx_kp_u_16D39;
static PyObject *__pyx_n_u_A001OP;
static PyObject *__pyx_n_u_A002OP;
static PyObject *__pyx_kp_u_AppleWebKit;
static PyObject *__pyx_kp_u_AppleWebKit_2;
static PyObject *__pyx_kp_u_Build;
static PyObject *__pyx_kp_u_Build_O11019_FBAN_Orca_Android;
static PyObject *__pyx_kp_u_Build_O11019_FBAN_Orca_Android_2;
static PyObject *__pyx_kp_u_Build_OPM1;
static PyObject *__pyx_kp_u_Build_OPR1;
static PyObject *__pyx_kp_u_Build_PPR1;
static PyObject *__pyx_kp_u_Build_QKQ1;
static PyObject *__pyx_kp_u_Build_RP1A;
static PyObject *__pyx_n_u_CPH1701;
static PyObject *__pyx_n_u_CPH1871;
static PyObject *__pyx_n_u_CPH1875;
static PyObject *__pyx_n_u_CPH1907;
static PyObject *__pyx_n_u_CPH1917;
static PyObject *__pyx_n_u_CPH1919;
static PyObject *__pyx_n_u_CPH1921;
static PyObject *__pyx_n_u_CPH1945;
static PyObject *__pyx_n_u_CPH1951;
static PyObject *__pyx_n_u_CPH1951RU;
static PyObject *__pyx_n_u_CPH1955;
static PyObject *__pyx_n_u_CPH1979;
static PyObject *__pyx_n_u_CPH1983;
static PyObject *__pyx_n_u_CPH1989;
static PyObject *__pyx_n_u_CPH2005;
static PyObject *__pyx_n_u_CPH2009;
static PyObject *__pyx_n_u_CPH2013;
static PyObject *__pyx_n_u_CPH2023;
static PyObject *__pyx_n_u_CPH2025;
static PyObject *__pyx_n_u_CPH2035;
static PyObject *__pyx_n_u_CPH2036;
static PyObject *__pyx_n_u_CPH2037;
static PyObject *__pyx_n_u_CPH2043;
static PyObject *__pyx_n_u_CPH2089;
static PyObject *__pyx_n_u_CPH2091;
static PyObject *__pyx_n_u_CPH2119;
static PyObject *__pyx_n_u_CPH2121;
static PyObject *__pyx_n_u_CPH2125;
static PyObject *__pyx_n_u_CPH2127;
static PyObject *__pyx_n_u_CPH2135;
static PyObject *__pyx_n_u_CPH2145;
static PyObject *__pyx_n_u_CPH2173;
static PyObject *__pyx_n_u_CPH2207;
static PyObject *__pyx_n_u_CPH2273;
static PyObject *__pyx_n_u_CPH2305;
static PyObject *__pyx_n_u_CPH2307;
static PyObject *__pyx_n_u_CPH2309;
static PyObject *__pyx_n_u_CPH2325;
static PyObject *__pyx_n_u_CPH2343;
static PyObject *__pyx_n_u_CPH237;
static PyObject *__pyx_n_u_CPH2373;
static PyObject *__pyx_n_u_CPH2437;
static PyObject *__pyx_n_u_CPH2439;
static PyObject *__pyx_kp_u_Chrome;
static PyObject *__pyx_kp_u_Dalvik_2_1_0_Linux_Android;
static PyObject *__pyx_kp_u_FBAN_MessengerForiOS_FBDV_iPhon;
static PyObject *__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0;
static PyObject *__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_2;
static PyObject *__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_3;
static PyObject *__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM;
static PyObject *__pyx_kp_u_FBMD_iPhone_FBSN_iOS_FBSV;
static PyObject *__pyx_kp_u_FBSS_2_FBID_phone_FBLC_en_US_FB;
static PyObject *__pyx_kp_u_FBSV;
static PyObject *__pyx_kp_u_FB_FW_1_FBBK_1;
static PyObject *__pyx_kp_u_F_A500ZKU16_01;
static PyObject *__pyx_kp_u_F_A700ZKA32_01;
static PyObject *__pyx_kp_u_GT_I9100P;
static PyObject *__pyx_kp_u_GT_S7275UWNXEF;
static PyObject *__pyx_kp_u_HOT_10i;
static PyObject *__pyx_kp_u_HOT_10s;
static PyObject *__pyx_kp_u_HOT_11_Play;
static PyObject *__pyx_kp_u_HOT_11s;
static PyObject *__pyx_kp_u_HOT_12_Play;
static PyObject *__pyx_kp_u_HOT_20S;
static PyObject *__pyx_kp_u_HOT_20_5G;
static PyObject *__pyx_kp_u_HOT_20_Play;
static PyObject *__pyx_kp_u_HOT_20_Pro;
static PyObject *__pyx_kp_u_HOT_20i;
static PyObject *__pyx_kp_u_HOT_4_Pro;
static PyObject *__pyx_n_s_INFINIX;
static PyObject *__pyx_kp_u_Infinix;
static PyObject *__pyx_n_u_JDQ39;
static PyObject *__pyx_kp_u_KHTML_like_Gecko_Chrome;
static PyObject *__pyx_kp_u_KHTML_like_Gecko_CriOS;
static PyObject *__pyx_kp_u_KHTML_like_Gecko_Mobile;
static PyObject *__pyx_kp_u_KHTML_like_Gecko_SamsungBrowser;
static PyObject *__pyx_kp_u_KHTML_like_Gecko_Ubuntu_Chromiu;
static PyObject *__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch;
static PyObject *__pyx_n_u_KTU84P;
static PyObject *__pyx_n_s_LIST_USER_AGENT;
static PyObject *__pyx_n_u_LMY47I;
static PyObject *__pyx_n_u_MIX2S;
static PyObject *__pyx_n_u_MIX3;
static PyObject *__pyx_kp_u_MI_10;
static PyObject *__pyx_kp_u_MI_10S;
static PyObject *__pyx_kp_u_MI_10_Lite_5G;
static PyObject *__pyx_kp_u_MI_10_Pro;
static PyObject *__pyx_kp_u_MI_10_Ultra;
static PyObject *__pyx_kp_u_MI_11;
static PyObject *__pyx_kp_u_MI_11_Lite;
static PyObject *__pyx_kp_u_MI_11_Pro;
static PyObject *__pyx_kp_u_MI_11_Ultra;
static PyObject *__pyx_kp_u_MI_3;
static PyObject *__pyx_kp_u_MI_4;
static PyObject *__pyx_kp_u_MI_4i;
static PyObject *__pyx_kp_u_MI_8MI_9;
static PyObject *__pyx_kp_u_MI_8_SE;
static PyObject *__pyx_kp_u_MI_9_Pro_5G;
static PyObject *__pyx_kp_u_MI_A1;
static PyObject *__pyx_kp_u_MI_A2_lite;
static PyObject *__pyx_kp_u_MI_CC9_Pro;
static PyObject *__pyx_kp_u_MI_MIX_3_5G;
static PyObject *__pyx_kp_u_MI_Pad_3;
static PyObject *__pyx_kp_u_MI_Pad_4;
static PyObject *__pyx_n_u_MMB29M;
static PyObject *__pyx_n_u_MRA58K;
static PyObject *__pyx_kp_u_Mobile;
static PyObject *__pyx_kp_u_Mobile_Safari;
static PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android;
static PyObject *__pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac;
static PyObject *__pyx_kp_u_Mozilla_5_0_Windows_NT;
static PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App;
static PyObject *__pyx_kp_u_Mozilla_5_0_iPad_CPU_iPhone_OS;
static PyObject *__pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS;
static PyObject *__pyx_n_u_NRD90M;
static PyObject *__pyx_kp_u_Note_10;
static PyObject *__pyx_kp_u_Note_11_Pro;
static PyObject *__pyx_kp_u_Note_12_G96;
static PyObject *__pyx_kp_u_Note_12_Pro;
static PyObject *__pyx_kp_u_Note_12_Pro_5G;
static PyObject *__pyx_kp_u_Note_12i;
static PyObject *__pyx_n_u_O11019;
static PyObject *__pyx_n_u_OPG01;
static PyObject *__pyx_n_u_OPG03;
static PyObject *__pyx_n_s_OPPO;
static PyObject *__pyx_kp_u_OPPO_2;
static PyObject *__pyx_kp_u_OppoBrowser;
static PyObject *__pyx_kp_u_PHX;
static PyObject *__pyx_n_s_PIPE;
static PyObject *__pyx_kp_u_POCOPHONE_F1;
static PyObject *__pyx_kp_u_POCO_C55;
static PyObject *__pyx_n_s_Path;
static PyObject *__pyx_n_s_Popen;
static PyObject *__pyx_n_s_RandomUserAgent;
static PyObject *__pyx_n_s_RandomUserAgent_android;
static PyObject *__pyx_n_s_RandomUserAgent_desktop;
static PyObject *__pyx_n_s_RandomUserAgent_infinix;
static PyObject *__pyx_n_s_RandomUserAgent_iphone;
static PyObject *__pyx_n_s_RandomUserAgent_linux;
static PyObject *__pyx_n_s_RandomUserAgent_macOS;
static PyObject *__pyx_n_s_RandomUserAgent_mobile;
static PyObject *__pyx_n_s_RandomUserAgent_oppo;
static PyObject *__pyx_n_s_RandomUserAgent_samsung;
static PyObject *__pyx_n_s_RandomUserAgent_vivo;
static PyObject *__pyx_n_s_RandomUserAgent_window;
static PyObject *__pyx_n_s_RandomUserAgent_xiaomi;
static PyObject *__pyx_kp_u_Redmi_10X;
static PyObject *__pyx_kp_u_Redmi_10X_Pro;
static PyObject *__pyx_kp_u_Redmi_1S;
static PyObject *__pyx_kp_u_Redmi_5_Plus;
static PyObject *__pyx_kp_u_Redmi_6;
static PyObject *__pyx_kp_u_Redmi_6A;
static PyObject *__pyx_kp_u_Redmi_9A;
static PyObject *__pyx_kp_u_Redmi_9C;
static PyObject *__pyx_kp_u_Redmi_K20_Pro;
static PyObject *__pyx_kp_u_Redmi_K20_Ultra;
static PyObject *__pyx_kp_u_Redmi_K30S_Ultra;
static PyObject *__pyx_kp_u_Redmi_K30_Pro;
static PyObject *__pyx_kp_u_Redmi_K30_Ultra;
static PyObject *__pyx_kp_u_Redmi_K40;
static PyObject *__pyx_kp_u_Redmi_K40_Gaming;
static PyObject *__pyx_kp_u_Redmi_K50_Pro;
static PyObject *__pyx_kp_u_Redmi_K60_Pro;
static PyObject *__pyx_kp_u_Redmi_Note_10;
static PyObject *__pyx_kp_u_Redmi_Note_10_Pro;
static PyObject *__pyx_kp_u_Redmi_Note_11T_Pro;
static PyObject *__pyx_kp_u_Redmi_Note_4;
static PyObject *__pyx_kp_u_Redmi_Note_4_Pro;
static PyObject *__pyx_kp_u_Redmi_Note_7;
static PyObject *__pyx_kp_u_Redmi_Note_7_Pro;
static PyObject *__pyx_kp_u_Redmi_Note_8;
static PyObject *__pyx_kp_u_Redmi_Note_8_Pro;
static PyObject *__pyx_kp_u_Redmi_Note_9;
static PyObject *__pyx_kp_u_Redmi_Note_9_Pro;
static PyObject *__pyx_kp_u_Redmi_Note_9_Pro_Max;
static PyObject *__pyx_kp_u_Redmi_POCO_C3;
static PyObject *__pyx_n_s_SAMSUNG;
static PyObject *__pyx_kp_u_SAMSUNG_2;
static PyObject *__pyx_kp_u_SCH_I435ZKAVZW;
static PyObject *__pyx_kp_u_SCH_I435ZKAXAR;
static PyObject *__pyx_kp_u_SCH_I535MBPVZW;
static PyObject *__pyx_kp_u_SCH_I535ZKBVZW;
static PyObject *__pyx_kp_u_SCH_I545ZBAVZW;
static PyObject *__pyx_kp_u_SCH_I545ZKALRA;
static PyObject *__pyx_kp_u_SCH_I545ZWAVZW;
static PyObject *__pyx_kp_u_SCH_I545ZWBVZW;
static PyObject *__pyx_kp_u_SCH_I605TSAVZW;
static PyObject *__pyx_kp_u_SCH_I930MSAVZW;
static PyObject *__pyx_kp_u_SCH_R860MSAUSC;
static PyObject *__pyx_kp_u_SCH_R890ZKAUSC;
static PyObject *__pyx_kp_u_SCH_R960ZKAUSC;
static PyObject *__pyx_kp_u_SCH_R970ZWACSP;
static PyObject *__pyx_kp_u_SCH_R970ZWAUSC;
static PyObject *__pyx_kp_u_SCH_S960RWBTFN;
static PyObject *__pyx_kp_u_SGH_I187XBAATT;
static PyObject *__pyx_kp_u_SGH_I257AIAATT;
static PyObject *__pyx_kp_u_SGH_I257ZKAATT;
static PyObject *__pyx_kp_u_SGH_I317TSAATT;
static PyObject *__pyx_kp_u_SGH_I337ZKZAIO;
static PyObject *__pyx_kp_u_SGH_I337ZRAATT;
static PyObject *__pyx_kp_u_SGH_I527ZKBATT;
static PyObject *__pyx_kp_u_SGH_I537ZAAATT;
static PyObject *__pyx_kp_u_SGH_I747MBBATT;
static PyObject *__pyx_kp_u_SGH_M819ZKATMB;
static PyObject *__pyx_kp_u_SGH_M919RWATMB;
static PyObject *__pyx_kp_u_SGH_M919ZWATMB;
static PyObject *__pyx_kp_u_SGH_T399DNATMB;
static PyObject *__pyx_kp_u_SGH_T889TSATMB;
static PyObject *__pyx_kp_u_SGH_T999MBATMB;
static PyObject *__pyx_kp_u_SGH_T999ZWATMB;
static PyObject *__pyx_kp_u_SM_A300FZKUXEF;
static PyObject *__pyx_kp_u_SM_A505F;
static PyObject *__pyx_kp_u_SM_A805F;
static PyObject *__pyx_kp_u_SM_C105AZWAATT;
static PyObject *__pyx_kp_u_SM_F900U;
static PyObject *__pyx_kp_u_SM_G3500ZKAXEF;
static PyObject *__pyx_kp_u_SM_G357FZWZXEF;
static PyObject *__pyx_kp_u_SM_G360FZSAXEF;
static PyObject *__pyx_kp_u_SM_G386FZKAXEF;
static PyObject *__pyx_kp_u_SM_G386TRKATMB;
static PyObject *__pyx_kp_u_SM_G386TZKATMB;
static PyObject *__pyx_kp_u_SM_G388FDSAXEF;
static PyObject *__pyx_kp_u_SM_G530AZWZAIO;
static PyObject *__pyx_kp_u_SM_G530PZAASPR;
static PyObject *__pyx_kp_u_SM_G530RZWAUSC;
static PyObject *__pyx_kp_u_SM_G530TZAATMB;
static PyObject *__pyx_kp_u_SM_G730AMBAATT;
static PyObject *__pyx_kp_u_SM_G730VMBAVZW;
static PyObject *__pyx_kp_u_SM_G750ANKAATT;
static PyObject *__pyx_kp_u_SM_G800FZKAXEF;
static PyObject *__pyx_kp_u_SM_G850FHSEXEF;
static PyObject *__pyx_kp_u_SM_G900AZDAATT;
static PyObject *__pyx_kp_u_SM_G900AZKZAIO;
static PyObject *__pyx_kp_u_SM_G900PZDASPR;
static PyObject *__pyx_kp_u_SM_G900PZWABST;
static PyObject *__pyx_kp_u_SM_G900PZWAVMU;
static PyObject *__pyx_kp_u_SM_G900PZWEVMU;
static PyObject *__pyx_kp_u_SM_G900RZDAUSC;
static PyObject *__pyx_kp_u_SM_G900TRKATMB;
static PyObject *__pyx_kp_u_SM_G900TZDATMB;
static PyObject *__pyx_kp_u_SM_G900VZDAVZW;
static PyObject *__pyx_kp_u_SM_G920FZKAXEF;
static PyObject *__pyx_kp_u_SM_G925FZKAXEF;
static PyObject *__pyx_kp_u_SM_G970F;
static PyObject *__pyx_kp_u_SM_G975F;
static PyObject *__pyx_kp_u_SM_G977N;
static PyObject *__pyx_kp_u_SM_G981B;
static PyObject *__pyx_kp_u_SM_N900AZKEATT;
static PyObject *__pyx_kp_u_SM_N900PZKESPR;
static PyObject *__pyx_kp_u_SM_N900TZKETMB;
static PyObject *__pyx_kp_u_SM_N900VWDEVZW;
static PyObject *__pyx_kp_u_SM_N900VZKEVZW;
static PyObject *__pyx_kp_u_SM_N910AZKEATT;
static PyObject *__pyx_kp_u_SM_N910PZKESPR;
static PyObject *__pyx_kp_u_SM_N910RZKEUSC;
static PyObject *__pyx_kp_u_SM_N910TZKETMB;
static PyObject *__pyx_kp_u_SM_N910VZKEVZW;
static PyObject *__pyx_kp_u_SM_N915AZKEATT;
static PyObject *__pyx_kp_u_SM_N915PZKESPR;
static PyObject *__pyx_kp_u_SM_N915RZKEUSC;
static PyObject *__pyx_kp_u_SM_N915TZKETMB;
static PyObject *__pyx_kp_u_SM_N915VZKEVZW;
static PyObject *__pyx_kp_u_SM_N976V;
static PyObject *__pyx_kp_u_SM_S890LZKATFN;
static PyObject *__pyx_kp_u_SM_S902LZKATFN;
static PyObject *__pyx_kp_u_SM_S975LZKATFN;
static PyObject *__pyx_kp_u_SM_W750VMSAVZW;
static PyObject *__pyx_kp_u_SPH_I800HNASPR;
static PyObject *__pyx_kp_u_SPH_L300ZSAVMU;
static PyObject *__pyx_kp_u_SPH_L520ZKASPR;
static PyObject *__pyx_kp_u_SPH_L520ZKPSPR;
static PyObject *__pyx_kp_u_SPH_L600ZKASPR;
static PyObject *__pyx_kp_u_SPH_L710MBBSPR;
static PyObject *__pyx_kp_u_SPH_L710RWBBST;
static PyObject *__pyx_kp_u_SPH_L710RWBVMU;
static PyObject *__pyx_kp_u_SPH_L720ZBASPR;
static PyObject *__pyx_kp_u_SPH_L720ZPASPR;
static PyObject *__pyx_kp_u_SPH_L720ZWRBST;
static PyObject *__pyx_kp_u_SPH_L900TSASPR;
static PyObject *__pyx_kp_u_Safari;
static PyObject *__pyx_kp_u_Smart_6;
static PyObject *__pyx_kp_u_Smart_6_PlusZero_Ultra;
static PyObject *__pyx_kp_u_Smart_7;
static PyObject *__pyx_kp_u_Time_between_dates_years_days_ho;
static PyObject *__pyx_n_s_VIVO;
static PyObject *__pyx_n_s_Validator;
static PyObject *__pyx_n_s_Validator_is_valid_url;
static PyObject *__pyx_kp_u_Vivaldi;
static PyObject *__pyx_kp_u_Vivo;
static PyObject *__pyx_kp_u_VivoBrowser;
static PyObject *__pyx_n_u_X23;
static PyObject *__pyx_n_u_X27;
static PyObject *__pyx_kp_u_X27_Pro;
static PyObject *__pyx_n_u_X30;
static PyObject *__pyx_kp_u_X30_Pro;
static PyObject *__pyx_n_u_X3F;
static PyObject *__pyx_n_u_X3L;
static PyObject *__pyx_n_u_X3S;
static PyObject *__pyx_kp_u_X3S_W;
static PyObject *__pyx_n_u_X3V;
static PyObject *__pyx_n_u_X3t;
static PyObject *__pyx_n_u_X40;
static PyObject *__pyx_n_u_X5;
static PyObject *__pyx_n_u_X50;
static PyObject *__pyx_kp_u_X50_5G;
static PyObject *__pyx_kp_u_X50_Lite;
static PyObject *__pyx_kp_u_X50_Pro;
static PyObject *__pyx_kp_u_X50_Pro_Plus;
static PyObject *__pyx_n_u_X50e;
static PyObject *__pyx_n_u_X510;
static PyObject *__pyx_n_u_X510t;
static PyObject *__pyx_n_u_X520L;
static PyObject *__pyx_n_u_X551F;
static PyObject *__pyx_n_u_X559C;
static PyObject *__pyx_n_u_X5F;
static PyObject *__pyx_n_u_X5M;
static PyObject *__pyx_kp_u_X5_Pro;
static PyObject *__pyx_n_u_X6;
static PyObject *__pyx_n_u_X60;
static PyObject *__pyx_n_u_X606B;
static PyObject *__pyx_n_u_X608;
static PyObject *__pyx_kp_u_X60_Pro;
static PyObject *__pyx_kp_u_X60_Pro_Plus;
static PyObject *__pyx_n_u_X60t;
static PyObject *__pyx_n_u_X6S;
static PyObject *__pyx_kp_u_X6S_Plus;
static PyObject *__pyx_kp_u_X6_Plus;
static PyObject *__pyx_n_u_X7;
static PyObject *__pyx_n_u_X70;
static PyObject *__pyx_kp_u_X70_5G;
static PyObject *__pyx_kp_u_X70_Pro;
static PyObject *__pyx_kp_u_X7_Plus;
static PyObject *__pyx_n_s_XIAOMI;
static PyObject *__pyx_kp_u_XiaoMi_MiuiBrowser;
static PyObject *__pyx_kp_u_Xiaomi_10T_Pro;
static PyObject *__pyx_kp_u_Xiaomi_11T_Pro;
static PyObject *__pyx_kp_u_Xiaomi_Pad_5_pro;
static PyObject *__pyx_n_u_Y11;
static PyObject *__pyx_n_u_Y11s;
static PyObject *__pyx_n_u_Y11t;
static PyObject *__pyx_n_u_Y12;
static PyObject *__pyx_kp_u_Y12I_Pro;
static PyObject *__pyx_kp_u_Y12_Pro;
static PyObject *__pyx_n_u_Y12a;
static PyObject *__pyx_n_u_Y15c;
static PyObject *__pyx_n_u_Y15s;
static PyObject *__pyx_n_u_Y16;
static PyObject *__pyx_n_u_Y17;
static PyObject *__pyx_n_u_Y17T;
static PyObject *__pyx_n_u_Y17W;
static PyObject *__pyx_n_u_Y18;
static PyObject *__pyx_n_u_Y19;
static PyObject *__pyx_n_u_Y19t;
static PyObject *__pyx_n_u_Y1S;
static PyObject *__pyx_n_u_Y1i;
static PyObject *__pyx_n_u_Y20;
static PyObject *__pyx_n_u_Y20A;
static PyObject *__pyx_n_u_Y20G;
static PyObject *__pyx_kp_u_Zero_20;
static PyObject *__pyx_kp_u_Zero_3;
static PyObject *__pyx_kp_u_Zero_5G;
static PyObject *__pyx_kp_u_Zero_X;
static PyObject *__pyx_kp_u_Zero_X_Pro;
static PyObject *__pyx_kp_u__11;
static PyObject *__pyx_kp_u__3;
static PyObject *__pyx_kp_u__30;
static PyObject *__pyx_kp_u__4;
static PyObject *__pyx_kp_u__41;
static PyObject *__pyx_n_s__45;
static PyObject *__pyx_n_u__45;
static PyObject *__pyx_kp_u__6;
static PyObject *__pyx_kp_u__7;
static PyObject *__pyx_kp_u__8;
static PyObject *__pyx_kp_u__9;
static PyObject *__pyx_n_u_a;
static PyObject *__pyx_n_u_abcdefghijklmnopqrstuvwxyz;
static PyObject *__pyx_n_s_all;
static PyObject *__pyx_n_u_am;
static PyObject *__pyx_n_s_android;
static PyObject *__pyx_n_s_android_version;
static PyObject *__pyx_n_s_app;
static PyObject *__pyx_n_s_array;
static PyObject *__pyx_n_s_auto_lower;
static PyObject *__pyx_n_s_call;
static PyObject *__pyx_n_s_choice;
static PyObject *__pyx_n_u_clear;
static PyObject *__pyx_n_s_clear_screen;
static PyObject *__pyx_n_s_cline_in_traceback;
static PyObject *__pyx_n_s_close;
static PyObject *__pyx_n_u_cls;
static PyObject *__pyx_n_s_cookie_dict_to_string;
static PyObject *__pyx_n_s_cookie_string_to_dict;
static PyObject *__pyx_n_s_d;
static PyObject *__pyx_n_u_dar;
static PyObject *__pyx_n_s_data;
static PyObject *__pyx_n_s_datetime;
static PyObject *__pyx_n_s_days;
static PyObject *__pyx_n_u_days;
static PyObject *__pyx_n_s_decode;
static PyObject *__pyx_n_s_decode_unicode;
static PyObject *__pyx_n_u_default;
static PyObject *__pyx_kp_u_density_2_0_width;
static PyObject *__pyx_n_s_desktop;
static PyObject *__pyx_n_s_dirs;
static PyObject *__pyx_n_s_doc;
static PyObject *__pyx_n_s_duration;
static PyObject *__pyx_n_s_duration_in_s;
static PyObject *__pyx_n_s_encode;
static PyObject *__pyx_n_s_encoding;
static PyObject *__pyx_n_s_enter;
static PyObject *__pyx_n_s_enumerate;
static PyObject *__pyx_n_s_except_key;
static PyObject *__pyx_n_s_exist_ok;
static PyObject *__pyx_n_s_exit;
static PyObject *__pyx_n_s_exit_2;
static PyObject *__pyx_n_s_f;
static PyObject *__pyx_n_s_fb;
static PyObject *__pyx_n_s_fbid;
static PyObject *__pyx_n_s_filename;
static PyObject *__pyx_n_s_find_post_id;
static PyObject *__pyx_n_s_findall;
static PyObject *__pyx_n_s_format;
static PyObject *__pyx_n_s_generate_passsword_from_name;
static PyObject *__pyx_n_s_get;
static PyObject *__pyx_n_s_get_duration;
static PyObject *__pyx_n_s_get_duration_locals_days;
static PyObject *__pyx_n_s_get_duration_locals_hours;
static PyObject *__pyx_n_s_get_duration_locals_minutes;
static PyObject *__pyx_n_s_get_duration_locals_seconds;
static PyObject *__pyx_n_s_get_duration_locals_total_durati;
static PyObject *__pyx_n_s_get_duration_locals_years;
static PyObject *__pyx_n_s_group;
static PyObject *__pyx_n_s_h;
static PyObject *__pyx_n_s_headers;
static PyObject *__pyx_kp_u_height;
static PyObject *__pyx_n_s_hours;
static PyObject *__pyx_n_u_hours;
static PyObject *__pyx_kp_u_http_https_facebook_com_0_9_pos;
static PyObject *__pyx_kp_u_http_https_facebook_com_a_zA_Z0;
static PyObject *__pyx_kp_u_http_https_facebook_com_groups;
static PyObject *__pyx_kp_u_http_https_facebook_com_story_p;
static PyObject *__pyx_kp_u_https_id_traodoisub_com_api_php;
static PyObject *__pyx_kp_u_https_www_facebook_com;
static PyObject *__pyx_n_u_id;
static PyObject *__pyx_n_s_import;
static PyObject *__pyx_n_s_index;
static PyObject *__pyx_n_s_infinix;
static PyObject *__pyx_n_u_infinix;
static PyObject *__pyx_n_s_interval;
static PyObject *__pyx_n_s_iphone;
static PyObject *__pyx_n_u_iphone;
static PyObject *__pyx_n_s_iphone_version;
static PyObject *__pyx_n_s_is_valid_url;
static PyObject *__pyx_n_s_isalpha;
static PyObject *__pyx_n_s_isdir;
static PyObject *__pyx_n_s_isfile;
static PyObject *__pyx_n_s_item;
static PyObject *__pyx_n_s_items;
static PyObject *__pyx_n_s_json;
static PyObject *__pyx_n_s_key;
static PyObject *__pyx_n_s_keys;
static PyObject *__pyx_n_s_length;
static PyObject *__pyx_kp_u_like_Mac_OS_X_AppleWebKit;
static PyObject *__pyx_n_u_lin;
static PyObject *__pyx_n_s_link;
static PyObject *__pyx_n_u_link;
static PyObject *__pyx_n_s_linux;
static PyObject *__pyx_n_u_linux;
static PyObject *__pyx_n_s_lookup_id;
static PyObject *__pyx_n_s_loop;
static PyObject *__pyx_n_s_lower;
static PyObject *__pyx_n_s_m;
static PyObject *__pyx_n_s_macOS;
static PyObject *__pyx_n_u_macOS;
static PyObject *__pyx_n_s_main;
static PyObject *__pyx_n_s_map;
static PyObject *__pyx_n_s_metaclass;
static PyObject *__pyx_n_s_min_length;
static PyObject *__pyx_n_s_minutes;
static PyObject *__pyx_n_u_minutes;
static PyObject *__pyx_n_s_mkdir;
static PyObject *__pyx_n_s_mobile;
static PyObject *__pyx_n_s_mobile_id;
static PyObject *__pyx_n_s_model;
static PyObject *__pyx_n_s_module;
static PyObject *__pyx_n_s_mtf_config;
static PyObject *__pyx_kp_s_mtf_module_utils_py;
static PyObject *__pyx_n_s_name;
static PyObject *__pyx_n_s_name_2;
static PyObject *__pyx_n_s_netloc;
static PyObject *__pyx_n_s_now;
static PyObject *__pyx_n_u_nt;
static PyObject *__pyx_n_s_obj;
static PyObject *__pyx_n_s_object_except;
static PyObject *__pyx_n_s_objects;
static PyObject *__pyx_n_s_open;
static PyObject *__pyx_n_u_open;
static PyObject *__pyx_n_s_open_link;
static PyObject *__pyx_n_s_oppo;
static PyObject *__pyx_n_u_oppo;
static PyObject *__pyx_n_s_os;
static PyObject *__pyx_n_s_p;
static PyObject *__pyx_n_s_parents;
static PyObject *__pyx_n_s_path;
static PyObject *__pyx_n_s_pathlib;
static PyObject *__pyx_n_s_pattern;
static PyObject *__pyx_n_s_patterns;
static PyObject *__pyx_n_s_platform;
static PyObject *__pyx_n_s_pop;
static PyObject *__pyx_n_s_post;
static PyObject *__pyx_n_s_prepare;
static PyObject *__pyx_n_u_python;
static PyObject *__pyx_n_s_qualname;
static PyObject *__pyx_n_s_randint;
static PyObject *__pyx_n_s_random;
static PyObject *__pyx_n_s_random_list;
static PyObject *__pyx_n_s_random_string;
static PyObject *__pyx_n_s_range;
static PyObject *__pyx_n_s_re;
static PyObject *__pyx_n_s_reload;
static PyObject *__pyx_n_s_replaced;
static PyObject *__pyx_n_s_requests;
static PyObject *__pyx_n_s_result;
static PyObject *__pyx_n_s_round;
static PyObject *__pyx_n_u_run;
static PyObject *__pyx_kp_u_run_2;
static PyObject *__pyx_kp_u_run_py;
static PyObject *__pyx_n_s_s;
static PyObject *__pyx_n_s_samsung;
static PyObject *__pyx_n_u_samsung;
static PyObject *__pyx_n_s_save_result;
static PyObject *__pyx_n_s_scheme;
static PyObject *__pyx_n_s_search;
static PyObject *__pyx_n_s_seconds;
static PyObject *__pyx_n_u_seconds;
static PyObject *__pyx_n_s_sensor_string;
static PyObject *__pyx_n_s_sfx;
static PyObject *__pyx_n_s_shell;
static PyObject *__pyx_n_s_slices_length;
static PyObject *__pyx_n_s_sort_object;
static PyObject *__pyx_n_s_split;
static PyObject *__pyx_n_u_start;
static PyObject *__pyx_n_s_startfile;
static PyObject *__pyx_n_u_startfile;
static PyObject *__pyx_n_s_stdout;
static PyObject *__pyx_n_s_string;
static PyObject *__pyx_n_s_string_array;
static PyObject *__pyx_n_s_string_password;
static PyObject *__pyx_n_s_strip;
static PyObject *__pyx_n_s_subprocess;
static PyObject *__pyx_n_s_suflix;
static PyObject *__pyx_n_s_sys;
static PyObject *__pyx_n_s_t;
static PyObject *__pyx_n_s_terminate;
static PyObject *__pyx_n_s_test;
static PyObject *__pyx_n_s_text;
static PyObject *__pyx_n_s_then;
static PyObject *__pyx_n_s_total_duration;
static PyObject *__pyx_n_s_total_seconds;
static PyObject *__pyx_n_u_unicode_escape;
static PyObject *__pyx_n_s_uniform;
static PyObject *__pyx_n_s_unique;
static PyObject *__pyx_n_s_url;
static PyObject *__pyx_n_s_urllib_parse;
static PyObject *__pyx_n_s_urlparse;
static PyObject *__pyx_kp_u_user_agent;
static PyObject *__pyx_n_s_userid;
static PyObject *__pyx_n_s_username;
static PyObject *__pyx_kp_u_utf_8;
static PyObject *__pyx_n_s_utils;
static PyObject *__pyx_n_s_value;
static PyObject *__pyx_n_s_values;
static PyObject *__pyx_n_s_vivo;
static PyObject *__pyx_n_u_vivo;
static PyObject *__pyx_n_s_wait;
static PyObject *__pyx_n_u_web;
static PyObject *__pyx_n_s_window;
static PyObject *__pyx_n_u_window;
static PyObject *__pyx_n_s_window_version;
static PyObject *__pyx_n_s_write;
static PyObject *__pyx_kp_u_xdg_open;
static PyObject *__pyx_n_s_xiaomi;
static PyObject *__pyx_n_u_xiaomi;
static PyObject *__pyx_n_s_y;
static PyObject *__pyx_n_s_years;
static PyObject *__pyx_n_u_years;
static PyObject *__pyx_pf_5utils_clear_screen(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_2reload(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_4open_link(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_link);  
static PyObject *__pyx_pf_5utils_6cookie_string_to_dict(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_value);  
static PyObject *__pyx_pf_5utils_8cookie_dict_to_string(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_value);  
static PyObject *__pyx_pf_5utils_10decode_unicode(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_string);  
static PyObject *__pyx_pf_5utils_12sort_object(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_obj);  
static PyObject *__pyx_pf_5utils_14object_except(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_obj, PyObject *__pyx_v_except_key);  
static PyObject *__pyx_pf_5utils_16random_string(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_length);  
static PyObject *__pyx_pf_5utils_18unique(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_array);  
static PyObject *__pyx_pf_5utils_20sensor_string(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_string, PyObject *__pyx_v_length, PyObject *__pyx_v_replaced);  
static PyObject *__pyx_pf_5utils_22generate_passsword_from_name(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_name, PyObject *__pyx_v_suflix, PyObject *__pyx_v_slices_length, PyObject *__pyx_v_auto_lower, PyObject *__pyx_v_min_length);  
static PyObject *__pyx_pf_5utils_24save_result(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_filename, PyObject *__pyx_v_value);  
static PyObject *__pyx_pf_5utils_32__defaults__(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_12get_duration_years(PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_12get_duration_2days(PyObject *__pyx_self, PyObject *__pyx_v_seconds);  
static PyObject *__pyx_pf_5utils_12get_duration_4hours(PyObject *__pyx_self, PyObject *__pyx_v_seconds);  
static PyObject *__pyx_pf_5utils_12get_duration_6minutes(PyObject *__pyx_self, PyObject *__pyx_v_seconds);  
static PyObject *__pyx_pf_5utils_12get_duration_8seconds(PyObject *__pyx_self, PyObject *__pyx_v_seconds);  
static PyObject *__pyx_pf_5utils_12get_duration_10total_duration(PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_26get_duration(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_then, PyObject *__pyx_v_now, PyObject *__pyx_v_interval);  
static PyObject *__pyx_pf_5utils_28lookup_id(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_username);  
static PyObject *__pyx_pf_5utils_30find_post_id(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_link);  
static PyObject *__pyx_pf_5utils_9Validator_is_valid_url(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_samsung(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_2xiaomi(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_4oppo(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_6infinix(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_8vivo(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_10iphone(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_12macOS(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_14window(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_16linux(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_18android(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_20mobile(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb);  
static PyObject *__pyx_pf_5utils_15RandomUserAgent_22desktop(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_tp_new_5utils___pyx_scope_struct__get_duration(PyTypeObject *t, PyObject *a, PyObject *k);  
static __Pyx_CachedCFunction __pyx_umethod_PyDict_Type_keys = {0, &__pyx_n_s_keys, 0, 0, 0};
static PyObject *__pyx_float_1_0;
static PyObject *__pyx_float_8_0;
static PyObject *__pyx_float_10_0;
static PyObject *__pyx_float_60_0;
static PyObject *__pyx_float_80_0;
static PyObject *__pyx_float_100_0;
static PyObject *__pyx_int_0;
static PyObject *__pyx_int_1;
static PyObject *__pyx_int_2;
static PyObject *__pyx_int_3;
static PyObject *__pyx_int_6;
static PyObject *__pyx_int_7;
static PyObject *__pyx_int_8;
static PyObject *__pyx_int_9;
static PyObject *__pyx_int_10;
static PyObject *__pyx_int_12;
static PyObject *__pyx_int_13;
static PyObject *__pyx_int_16;
static PyObject *__pyx_int_50;
static PyObject *__pyx_int_60;
static PyObject *__pyx_int_100;
static PyObject *__pyx_int_300;
static PyObject *__pyx_int_420;
static PyObject *__pyx_int_600;
static PyObject *__pyx_int_700;
static PyObject *__pyx_int_800;
static PyObject *__pyx_int_900;
static PyObject *__pyx_int_1000;
static PyObject *__pyx_int_3600;
static PyObject *__pyx_int_9000;
static PyObject *__pyx_int_86400;
static PyObject *__pyx_int_100000;
static PyObject *__pyx_int_900000;
static PyObject *__pyx_int_31536000;
static PyObject *__pyx_int_neg_1;
static PyObject *__pyx_tuple_;
static PyObject *__pyx_slice__2;
static PyObject *__pyx_slice__5;
static PyObject *__pyx_slice__10;
static PyObject *__pyx_tuple__12;
static PyObject *__pyx_tuple__14;
static PyObject *__pyx_tuple__16;
static PyObject *__pyx_tuple__17;
static PyObject *__pyx_tuple__19;
static PyObject *__pyx_tuple__20;
static PyObject *__pyx_tuple__22;
static PyObject *__pyx_tuple__23;
static PyObject *__pyx_tuple__25;
static PyObject *__pyx_tuple__26;
static PyObject *__pyx_tuple__28;
static PyObject *__pyx_tuple__29;
static PyObject *__pyx_tuple__31;
static PyObject *__pyx_tuple__32;
static PyObject *__pyx_tuple__33;
static PyObject *__pyx_tuple__34;
static PyObject *__pyx_tuple__35;
static PyObject *__pyx_tuple__36;
static PyObject *__pyx_tuple__37;
static PyObject *__pyx_tuple__38;
static PyObject *__pyx_tuple__39;
static PyObject *__pyx_tuple__40;
static PyObject *__pyx_tuple__42;
static PyObject *__pyx_tuple__43;
static PyObject *__pyx_tuple__44;
static PyObject *__pyx_tuple__46;
static PyObject *__pyx_tuple__47;
static PyObject *__pyx_tuple__48;
static PyObject *__pyx_tuple__50;
static PyObject *__pyx_tuple__52;
static PyObject *__pyx_tuple__54;
static PyObject *__pyx_tuple__56;
static PyObject *__pyx_tuple__58;
static PyObject *__pyx_tuple__60;
static PyObject *__pyx_tuple__62;
static PyObject *__pyx_tuple__64;
static PyObject *__pyx_tuple__66;
static PyObject *__pyx_tuple__68;
static PyObject *__pyx_tuple__70;
static PyObject *__pyx_tuple__71;
static PyObject *__pyx_tuple__73;
static PyObject *__pyx_tuple__74;
static PyObject *__pyx_tuple__76;
static PyObject *__pyx_tuple__78;
static PyObject *__pyx_tuple__80;
static PyObject *__pyx_tuple__82;
static PyObject *__pyx_tuple__84;
static PyObject *__pyx_tuple__86;
static PyObject *__pyx_tuple__87;
static PyObject *__pyx_tuple__89;
static PyObject *__pyx_tuple__90;
static PyObject *__pyx_tuple__92;
static PyObject *__pyx_tuple__93;
static PyObject *__pyx_tuple__95;
static PyObject *__pyx_tuple__96;
static PyObject *__pyx_tuple__98;
static PyObject *__pyx_tuple__99;
static PyObject *__pyx_tuple__101;
static PyObject *__pyx_tuple__102;
static PyObject *__pyx_tuple__104;
static PyObject *__pyx_tuple__107;
static PyObject *__pyx_tuple__109;
static PyObject *__pyx_tuple__110;
static PyObject *__pyx_tuple__112;
static PyObject *__pyx_codeobj__13;
static PyObject *__pyx_codeobj__15;
static PyObject *__pyx_codeobj__18;
static PyObject *__pyx_codeobj__21;
static PyObject *__pyx_codeobj__24;
static PyObject *__pyx_codeobj__27;
static PyObject *__pyx_codeobj__49;
static PyObject *__pyx_codeobj__51;
static PyObject *__pyx_codeobj__53;
static PyObject *__pyx_codeobj__55;
static PyObject *__pyx_codeobj__57;
static PyObject *__pyx_codeobj__59;
static PyObject *__pyx_codeobj__61;
static PyObject *__pyx_codeobj__63;
static PyObject *__pyx_codeobj__65;
static PyObject *__pyx_codeobj__67;
static PyObject *__pyx_codeobj__69;
static PyObject *__pyx_codeobj__72;
static PyObject *__pyx_codeobj__75;
static PyObject *__pyx_codeobj__77;
static PyObject *__pyx_codeobj__79;
static PyObject *__pyx_codeobj__81;
static PyObject *__pyx_codeobj__83;
static PyObject *__pyx_codeobj__85;
static PyObject *__pyx_codeobj__88;
static PyObject *__pyx_codeobj__91;
static PyObject *__pyx_codeobj__94;
static PyObject *__pyx_codeobj__97;
static PyObject *__pyx_codeobj__100;
static PyObject *__pyx_codeobj__103;
static PyObject *__pyx_codeobj__105;
static PyObject *__pyx_codeobj__106;
static PyObject *__pyx_codeobj__108;
static PyObject *__pyx_codeobj__111;
static PyObject *__pyx_codeobj__113;
 

 

 
static PyObject *__pyx_pw_5utils_1clear_screen(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_1clear_screen = {"clear_screen", (PyCFunction)__pyx_pw_5utils_1clear_screen, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_1clear_screen(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("clear_screen (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_clear_screen(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_clear_screen(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("clear_screen", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_call); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_os); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_name); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_t_4, __pyx_n_u_nt, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__pyx_t_5) {
    __Pyx_INCREF(__pyx_n_u_cls);
    __pyx_t_1 = __pyx_n_u_cls;
  } else {
    __Pyx_INCREF(__pyx_n_u_clear);
    __pyx_t_1 = __pyx_n_u_clear;
  }
  __pyx_t_4 = PyTuple_New(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GIVEREF(__pyx_t_1);
  PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 13, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("utils.clear_screen", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_3reload(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_3reload = {"reload", (PyCFunction)__pyx_pw_5utils_3reload, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_3reload(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("reload (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_2reload(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_2reload(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_p = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("reload", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_os); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_path); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_isfile); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
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
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_n_u_run) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_n_u_run);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_4) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 17, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_call); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 17, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 17, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 17, __pyx_L1_error)
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple_, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 17, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_v_p = __pyx_t_3;
    __pyx_t_3 = 0;

     
    goto __pyx_L3;
  }

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 19, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_Popen); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 19, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyList_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 19, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_INCREF(__pyx_n_u_python);
    __Pyx_GIVEREF(__pyx_n_u_python);
    PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_u_python);
    __Pyx_INCREF(__pyx_kp_u_run_py);
    __Pyx_GIVEREF(__pyx_kp_u_run_py);
    PyList_SET_ITEM(__pyx_t_1, 1, __pyx_kp_u_run_py);
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_5, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_1);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 19, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_v_p = __pyx_t_3;
    __pyx_t_3 = 0;
  }
  __pyx_L3:;

   
  __pyx_t_4 = PyInt_Check(__pyx_v_p); 
  __pyx_t_6 = ((!(__pyx_t_4 != 0)) != 0);
  if (__pyx_t_6) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_7, &__pyx_t_8, &__pyx_t_9);
      __Pyx_XGOTREF(__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_9);
        {

         
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_p, __pyx_n_s_wait); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_2);
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
        __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 22, __pyx_L5_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

         
      }
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      goto __pyx_L10_try_end;
      __pyx_L5_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

       
        {
        __Pyx_AddTraceback("utils.reload", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_2, &__pyx_t_1) < 0) __PYX_ERR(0, 23, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_GOTREF(__pyx_t_1);

         
        __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_p, __pyx_n_s_terminate); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 24, __pyx_L7_except_error)
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
        __pyx_t_5 = (__pyx_t_11) ? __Pyx_PyObject_CallOneArg(__pyx_t_10, __pyx_t_11) : __Pyx_PyObject_CallNoArg(__pyx_t_10);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 24, __pyx_L7_except_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        goto __pyx_L6_exception_handled;
      }
      __pyx_L7_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
      goto __pyx_L1_error;
      __pyx_L6_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_XGIVEREF(__pyx_t_8);
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
      __pyx_L10_try_end:;
    }

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sys); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_exit); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_AddTraceback("utils.reload", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_p);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_5open_link(PyObject *__pyx_self, PyObject *__pyx_v_link);  
static PyMethodDef __pyx_mdef_5utils_5open_link = {"open_link", (PyCFunction)__pyx_pw_5utils_5open_link, METH_O, 0};
static PyObject *__pyx_pw_5utils_5open_link(PyObject *__pyx_self, PyObject *__pyx_v_link) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("open_link (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_4open_link(__pyx_self, ((PyObject *)__pyx_v_link));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_4open_link(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_link) {
  PyObject *__pyx_v_platform = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
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
  __Pyx_RefNannySetupContext("open_link", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sys); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_platform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetSlice(__pyx_t_3, 0, 3, NULL, NULL, &__pyx_slice__2, 1, 1, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_lower); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
    }
  }
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_platform = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_platform, __pyx_n_u_lin, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 30, __pyx_L1_error)
  if (__pyx_t_4) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7);
      __Pyx_XGOTREF(__pyx_t_5);
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_7);
        {

         
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_Popen); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = PyList_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_INCREF(__pyx_n_u_am);
        __Pyx_GIVEREF(__pyx_n_u_am);
        PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_u_am);
        __Pyx_INCREF(__pyx_n_u_start);
        __Pyx_GIVEREF(__pyx_n_u_start);
        PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_start);
        __Pyx_INCREF(__pyx_v_link);
        __Pyx_GIVEREF(__pyx_v_link);
        PyList_SET_ITEM(__pyx_t_1, 2, __pyx_v_link);
        __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_GIVEREF(__pyx_t_1);
        PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1);
        __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_stdout, __pyx_t_9) < 0) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_2, __pyx_t_1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 32, __pyx_L4_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

         
      }
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      goto __pyx_L9_try_end;
      __pyx_L4_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
        {
        __Pyx_AddTraceback("utils.open_link", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_9, &__pyx_t_1, &__pyx_t_2) < 0) __PYX_ERR(0, 33, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GOTREF(__pyx_t_2);

         
        __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_Popen); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = PyList_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_INCREF(__pyx_kp_u_xdg_open);
        __Pyx_GIVEREF(__pyx_kp_u_xdg_open);
        PyList_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_xdg_open);
        __Pyx_INCREF(__pyx_v_link);
        __Pyx_GIVEREF(__pyx_v_link);
        PyList_SET_ITEM(__pyx_t_3, 1, __pyx_v_link);
        __pyx_t_10 = PyTuple_New(1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_10);
        __Pyx_GIVEREF(__pyx_t_3);
        PyTuple_SET_ITEM(__pyx_t_10, 0, __pyx_t_3);
        __pyx_t_3 = 0;
        __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_12 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_stdout, __pyx_t_12) < 0) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_10, __pyx_t_3); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 34, __pyx_L6_except_error)
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        goto __pyx_L5_exception_handled;
      }
      __pyx_L6_except_error:;

       
      __Pyx_XGIVEREF(__pyx_t_5);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
      goto __pyx_L1_error;
      __pyx_L5_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_5);
      __Pyx_XGIVEREF(__pyx_t_6);
      __Pyx_XGIVEREF(__pyx_t_7);
      __Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
      __pyx_L9_try_end:;
    }

     
    goto __pyx_L3;
  }

   
  __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_platform, __pyx_n_u_dar, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 35, __pyx_L1_error)
  if (__pyx_t_4) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_Popen); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyList_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_n_u_open);
    __Pyx_GIVEREF(__pyx_n_u_open);
    PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_open);
    __Pyx_INCREF(__pyx_v_link);
    __Pyx_GIVEREF(__pyx_v_link);
    PyList_SET_ITEM(__pyx_t_2, 1, __pyx_v_link);
    __pyx_t_9 = PyTuple_New(1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GetModuleGlobalName(__pyx_t_12, __pyx_n_s_subprocess); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_12);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_12, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
    if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_stdout, __pyx_t_3) < 0) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_9, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 36, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    goto __pyx_L3;
  }

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_os); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_HasAttr(__pyx_t_3, __pyx_n_u_startfile); if (unlikely(__pyx_t_4 == ((int)-1))) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_13 = (__pyx_t_4 != 0);
    if (__pyx_t_13) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_os); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 39, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_startfile); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 39, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_2)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
          __Pyx_INCREF(__pyx_t_2);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_9, function);
        }
      }
      __pyx_t_3 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_2, __pyx_v_link) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_v_link);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 39, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

       
    }
  }
  __pyx_L3:;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_AddTraceback("utils.open_link", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_platform);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_7cookie_string_to_dict(PyObject *__pyx_self, PyObject *__pyx_v_value);  
static PyMethodDef __pyx_mdef_5utils_7cookie_string_to_dict = {"cookie_string_to_dict", (PyCFunction)__pyx_pw_5utils_7cookie_string_to_dict, METH_O, 0};
static PyObject *__pyx_pw_5utils_7cookie_string_to_dict(PyObject *__pyx_self, PyObject *__pyx_v_value) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("cookie_string_to_dict (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_6cookie_string_to_dict(__pyx_self, ((PyObject *)__pyx_v_value));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_6cookie_string_to_dict(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_value) {
  PyObject *__pyx_v_array = NULL;
  PyObject *__pyx_v_objects = NULL;
  PyObject *__pyx_v_string = NULL;
  PyObject *__pyx_v_string_array = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("cookie_string_to_dict", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_re); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_findall); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_4 = 0;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_4 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u__3, __pyx_v_value};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_4, 2+__pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
    PyObject *__pyx_temp[3] = {__pyx_t_2, __pyx_kp_u__3, __pyx_v_value};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp+1-__pyx_t_4, 2+__pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GOTREF(__pyx_t_1);
  } else
  #endif
  {
    __pyx_t_5 = PyTuple_New(2+__pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (__pyx_t_2) {
      __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_2); __pyx_t_2 = NULL;
    }
    __Pyx_INCREF(__pyx_kp_u__3);
    __Pyx_GIVEREF(__pyx_kp_u__3);
    PyTuple_SET_ITEM(__pyx_t_5, 0+__pyx_t_4, __pyx_kp_u__3);
    __Pyx_INCREF(__pyx_v_value);
    __Pyx_GIVEREF(__pyx_v_value);
    PyTuple_SET_ITEM(__pyx_t_5, 1+__pyx_t_4, __pyx_v_value);
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_5, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_array = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_objects = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  if (likely(PyList_CheckExact(__pyx_v_array)) || PyTuple_CheckExact(__pyx_v_array)) {
    __pyx_t_1 = __pyx_v_array; __Pyx_INCREF(__pyx_t_1); __pyx_t_6 = 0;
    __pyx_t_7 = NULL;
  } else {
    __pyx_t_6 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_array); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 44, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_7)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_6 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 44, __pyx_L1_error)
        #else
        __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 44, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        #endif
      } else {
        if (__pyx_t_6 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 44, __pyx_L1_error)
        #else
        __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 44, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        #endif
      }
    } else {
      __pyx_t_3 = __pyx_t_7(__pyx_t_1);
      if (unlikely(!__pyx_t_3)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 44, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_3);
    }
    __Pyx_XDECREF_SET(__pyx_v_string, __pyx_t_3);
    __pyx_t_3 = 0;

     
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_string, __pyx_n_s_strip); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 45, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
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
    __pyx_t_3 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 45, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF_SET(__pyx_v_string, __pyx_t_3);
    __pyx_t_3 = 0;

     
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_string, __pyx_n_s_split); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 46, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
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
    __pyx_t_3 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_2, __pyx_kp_u__4) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u__4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 46, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF_SET(__pyx_v_string_array, __pyx_t_3);
    __pyx_t_3 = 0;

     
    __pyx_t_3 = __Pyx_PyObject_GetSlice(__pyx_v_string_array, 1, 0, NULL, NULL, &__pyx_slice__5, 1, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_5 = PyUnicode_Join(__pyx_kp_u__4, __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_GetItemInt(__pyx_v_string_array, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (unlikely(PyDict_SetItem(__pyx_v_objects, __pyx_t_3, __pyx_t_5) < 0)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

     
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_objects);
  __pyx_r = __pyx_v_objects;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("utils.cookie_string_to_dict", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_array);
  __Pyx_XDECREF(__pyx_v_objects);
  __Pyx_XDECREF(__pyx_v_string);
  __Pyx_XDECREF(__pyx_v_string_array);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_9cookie_dict_to_string(PyObject *__pyx_self, PyObject *__pyx_v_value);  
static PyMethodDef __pyx_mdef_5utils_9cookie_dict_to_string = {"cookie_dict_to_string", (PyCFunction)__pyx_pw_5utils_9cookie_dict_to_string, METH_O, 0};
static PyObject *__pyx_pw_5utils_9cookie_dict_to_string(PyObject *__pyx_self, PyObject *__pyx_v_value) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("cookie_dict_to_string (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_8cookie_dict_to_string(__pyx_self, ((PyObject *)__pyx_v_value));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_8cookie_dict_to_string(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_value) {
  PyObject *__pyx_7genexpr__pyx_v_name = NULL;
  PyObject *__pyx_7genexpr__pyx_v_values = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  Py_ssize_t __pyx_t_4;
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_t_8;
  Py_ssize_t __pyx_t_9;
  Py_UCS4 __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("cookie_dict_to_string", 0);

   
  __Pyx_XDECREF(__pyx_r);
  {  
    __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 51, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = 0;
    if (unlikely(__pyx_v_value == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "items");
      __PYX_ERR(0, 51, __pyx_L5_error)
    }
    __pyx_t_6 = __Pyx_dict_iterator(__pyx_v_value, 0, __pyx_n_s_items, (&__pyx_t_4), (&__pyx_t_5)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 51, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_2);
    __pyx_t_2 = __pyx_t_6;
    __pyx_t_6 = 0;
    while (1) {
      __pyx_t_8 = __Pyx_dict_iter_next(__pyx_t_2, __pyx_t_4, &__pyx_t_3, &__pyx_t_6, &__pyx_t_7, NULL, __pyx_t_5);
      if (unlikely(__pyx_t_8 == 0)) break;
      if (unlikely(__pyx_t_8 == -1)) __PYX_ERR(0, 51, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_XDECREF_SET(__pyx_7genexpr__pyx_v_name, __pyx_t_6);
      __pyx_t_6 = 0;
      __Pyx_XDECREF_SET(__pyx_7genexpr__pyx_v_values, __pyx_t_7);
      __pyx_t_7 = 0;
      __pyx_t_7 = PyTuple_New(3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 51, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_9 = 0;
      __pyx_t_10 = 127;
      __pyx_t_6 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_7genexpr__pyx_v_name), __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 51, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
      __Pyx_GIVEREF(__pyx_t_6);
      PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_6);
      __pyx_t_6 = 0;
      __Pyx_INCREF(__pyx_kp_u__4);
      __pyx_t_9 += 1;
      __Pyx_GIVEREF(__pyx_kp_u__4);
      PyTuple_SET_ITEM(__pyx_t_7, 1, __pyx_kp_u__4);
      __pyx_t_6 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_7genexpr__pyx_v_values), __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 51, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
      __Pyx_GIVEREF(__pyx_t_6);
      PyTuple_SET_ITEM(__pyx_t_7, 2, __pyx_t_6);
      __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyUnicode_Join(__pyx_t_7, 3, __pyx_t_9, __pyx_t_10); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 51, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(__Pyx_ListComp_Append(__pyx_t_1, (PyObject*)__pyx_t_6))) __PYX_ERR(0, 51, __pyx_L5_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_7genexpr__pyx_v_name); __pyx_7genexpr__pyx_v_name = 0;
    __Pyx_XDECREF(__pyx_7genexpr__pyx_v_values); __pyx_7genexpr__pyx_v_values = 0;
    goto __pyx_L8_exit_scope;
    __pyx_L5_error:;
    __Pyx_XDECREF(__pyx_7genexpr__pyx_v_name); __pyx_7genexpr__pyx_v_name = 0;
    __Pyx_XDECREF(__pyx_7genexpr__pyx_v_values); __pyx_7genexpr__pyx_v_values = 0;
    goto __pyx_L1_error;
    __pyx_L8_exit_scope:;
  }  
  __pyx_t_2 = PyUnicode_Join(__pyx_kp_u__6, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 51, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("utils.cookie_dict_to_string", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_7genexpr__pyx_v_name);
  __Pyx_XDECREF(__pyx_7genexpr__pyx_v_values);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_11decode_unicode(PyObject *__pyx_self, PyObject *__pyx_v_string);  
static PyMethodDef __pyx_mdef_5utils_11decode_unicode = {"decode_unicode", (PyCFunction)__pyx_pw_5utils_11decode_unicode, METH_O, 0};
static PyObject *__pyx_pw_5utils_11decode_unicode(PyObject *__pyx_self, PyObject *__pyx_v_string) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("decode_unicode (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_10decode_unicode(__pyx_self, ((PyObject *)__pyx_v_string));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_10decode_unicode(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_string) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("decode_unicode", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __Pyx_XDECREF(__pyx_r);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_string, __pyx_n_s_encode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 55, __pyx_L3_error)
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
      __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 55, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 55, __pyx_L3_error)
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
      __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_5, __pyx_n_u_unicode_escape) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_n_u_unicode_escape);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 55, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_r = __pyx_t_4;
      __pyx_t_4 = 0;
      goto __pyx_L7_try_return;

       
    }
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

     
      {
      __Pyx_AddTraceback("utils.decode_unicode", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_6, &__pyx_t_5) < 0) __PYX_ERR(0, 56, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_5);

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(__pyx_v_string);
      __pyx_r = __pyx_v_string;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      goto __pyx_L6_except_return;
    }
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
  __Pyx_AddTraceback("utils.decode_unicode", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_13sort_object(PyObject *__pyx_self, PyObject *__pyx_v_obj);  
static PyMethodDef __pyx_mdef_5utils_13sort_object = {"sort_object", (PyCFunction)__pyx_pw_5utils_13sort_object, METH_O, 0};
static PyObject *__pyx_pw_5utils_13sort_object(PyObject *__pyx_self, PyObject *__pyx_v_obj) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sort_object (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_12sort_object(__pyx_self, ((PyObject *)__pyx_v_obj));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_12sort_object(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_obj) {
  PyObject *__pyx_8genexpr1__pyx_v_name = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  Py_ssize_t __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("sort_object", 0);

   
  __Pyx_XDECREF(__pyx_r);
  {  
    __pyx_t_1 = PyDict_New(); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_keys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 60, __pyx_L5_error)
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
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 60, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PySequence_List(__pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 60, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_2 = ((PyObject*)__pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_6 = PyList_Sort(__pyx_t_2); if (unlikely(__pyx_t_6 == ((int)-1))) __PYX_ERR(0, 60, __pyx_L5_error)
    if (unlikely(__pyx_t_2 == Py_None)) {
      PyErr_SetString(PyExc_TypeError, "'NoneType' object is not iterable");
      __PYX_ERR(0, 60, __pyx_L5_error)
    }
    __pyx_t_4 = __pyx_t_2; __Pyx_INCREF(__pyx_t_4); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    for (;;) {
      if (__pyx_t_7 >= PyList_GET_SIZE(__pyx_t_4)) break;
      #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
      __pyx_t_2 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_7); __Pyx_INCREF(__pyx_t_2); __pyx_t_7++; if (unlikely(0 < 0)) __PYX_ERR(0, 60, __pyx_L5_error)
      #else
      __pyx_t_2 = PySequence_ITEM(__pyx_t_4, __pyx_t_7); __pyx_t_7++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_2);
      #endif
      __Pyx_XDECREF_SET(__pyx_8genexpr1__pyx_v_name, __pyx_t_2);
      __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_v_obj, __pyx_8genexpr1__pyx_v_name); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (unlikely(PyDict_SetItem(__pyx_t_1, (PyObject*)__pyx_8genexpr1__pyx_v_name, (PyObject*)__pyx_t_2))) __PYX_ERR(0, 60, __pyx_L5_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_name); __pyx_8genexpr1__pyx_v_name = 0;
    goto __pyx_L8_exit_scope;
    __pyx_L5_error:;
    __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_name); __pyx_8genexpr1__pyx_v_name = 0;
    goto __pyx_L1_error;
    __pyx_L8_exit_scope:;
  }  
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("utils.sort_object", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_name);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15object_except(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15object_except = {"object_except", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15object_except, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15object_except(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_obj = 0;
  PyObject *__pyx_v_except_key = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("object_except (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_obj,&__pyx_n_s_except_key,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_obj)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_except_key)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("object_except", 1, 2, 2, 1); __PYX_ERR(0, 62, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "object_except") < 0)) __PYX_ERR(0, 62, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_obj = values[0];
    __pyx_v_except_key = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("object_except", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 62, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.object_except", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_14object_except(__pyx_self, __pyx_v_obj, __pyx_v_except_key);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_14object_except(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_obj, PyObject *__pyx_v_except_key) {
  PyObject *__pyx_v_key = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  PyObject *(*__pyx_t_3)(PyObject *);
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("object_except", 0);

   
  if (likely(PyList_CheckExact(__pyx_v_except_key)) || PyTuple_CheckExact(__pyx_v_except_key)) {
    __pyx_t_1 = __pyx_v_except_key; __Pyx_INCREF(__pyx_t_1); __pyx_t_2 = 0;
    __pyx_t_3 = NULL;
  } else {
    __pyx_t_2 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_except_key); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 63, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_3)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_2 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely(0 < 0)) __PYX_ERR(0, 63, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      } else {
        if (__pyx_t_2 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely(0 < 0)) __PYX_ERR(0, 63, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      }
    } else {
      __pyx_t_4 = __pyx_t_3(__pyx_t_1);
      if (unlikely(!__pyx_t_4)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 63, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_4);
    }
    __Pyx_XDECREF_SET(__pyx_v_key, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_obj, __pyx_n_s_pop); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
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
    __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_v_key) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_key);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_obj);
  __pyx_r = __pyx_v_obj;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("utils.object_except", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_key);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_17random_string(PyObject *__pyx_self, PyObject *__pyx_v_length);  
static PyMethodDef __pyx_mdef_5utils_17random_string = {"random_string", (PyCFunction)__pyx_pw_5utils_17random_string, METH_O, 0};
static PyObject *__pyx_pw_5utils_17random_string(PyObject *__pyx_self, PyObject *__pyx_v_length) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("random_string (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_16random_string(__pyx_self, ((PyObject *)__pyx_v_length));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_16random_string(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_length) {
  PyObject *__pyx_v_text = NULL;
  Py_UCS4 __pyx_8genexpr2__pyx_v_t;
  CYTHON_UNUSED PyObject *__pyx_8genexpr3__pyx_v__ = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  Py_ssize_t __pyx_t_4;
  void *__pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  Py_ssize_t __pyx_t_8;
  Py_UCS4 __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *(*__pyx_t_12)(PyObject *);
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("random_string", 0);

   
  __Pyx_INCREF(__pyx_n_u_abcdefghijklmnopqrstuvwxyz);
  __pyx_v_text = __pyx_n_u_abcdefghijklmnopqrstuvwxyz;

   
  {  
    __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 68, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_INCREF(__pyx_v_text);
    __pyx_t_2 = __pyx_v_text;
    __pyx_t_7 = __Pyx_init_unicode_iteration(__pyx_t_2, (&__pyx_t_4), (&__pyx_t_5), (&__pyx_t_6)); if (unlikely(__pyx_t_7 == ((int)-1))) __PYX_ERR(0, 68, __pyx_L1_error)
    for (__pyx_t_8 = 0; __pyx_t_8 < __pyx_t_4; __pyx_t_8++) {
      __pyx_t_3 = __pyx_t_8;
      __pyx_8genexpr2__pyx_v_t = __Pyx_PyUnicode_READ(__pyx_t_6, __pyx_t_5, __pyx_t_3);
      __pyx_t_9 = Py_UNICODE_TOUPPER(__pyx_8genexpr2__pyx_v_t); 
      __pyx_t_10 = PyUnicode_FromOrdinal(__pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 68, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      if (unlikely(__Pyx_ListComp_Append(__pyx_t_1, (PyObject*)__pyx_t_10))) __PYX_ERR(0, 68, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }  
  __pyx_t_10 = PyUnicode_Join(__pyx_kp_u__7, __pyx_t_1); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 68, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyUnicode_Concat(__pyx_v_text, __pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 68, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __Pyx_DECREF_SET(__pyx_v_text, ((PyObject*)__pyx_t_1));
  __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  {  
    __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 69, __pyx_L7_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_10 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_length); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 69, __pyx_L7_error)
    __Pyx_GOTREF(__pyx_t_10);
    if (likely(PyList_CheckExact(__pyx_t_10)) || PyTuple_CheckExact(__pyx_t_10)) {
      __pyx_t_11 = __pyx_t_10; __Pyx_INCREF(__pyx_t_11); __pyx_t_4 = 0;
      __pyx_t_12 = NULL;
    } else {
      __pyx_t_4 = -1; __pyx_t_11 = PyObject_GetIter(__pyx_t_10); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 69, __pyx_L7_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = Py_TYPE(__pyx_t_11)->tp_iternext; if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 69, __pyx_L7_error)
    }
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    for (;;) {
      if (likely(!__pyx_t_12)) {
        if (likely(PyList_CheckExact(__pyx_t_11))) {
          if (__pyx_t_4 >= PyList_GET_SIZE(__pyx_t_11)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_10 = PyList_GET_ITEM(__pyx_t_11, __pyx_t_4); __Pyx_INCREF(__pyx_t_10); __pyx_t_4++; if (unlikely(0 < 0)) __PYX_ERR(0, 69, __pyx_L7_error)
          #else
          __pyx_t_10 = PySequence_ITEM(__pyx_t_11, __pyx_t_4); __pyx_t_4++; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 69, __pyx_L7_error)
          __Pyx_GOTREF(__pyx_t_10);
          #endif
        } else {
          if (__pyx_t_4 >= PyTuple_GET_SIZE(__pyx_t_11)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_10 = PyTuple_GET_ITEM(__pyx_t_11, __pyx_t_4); __Pyx_INCREF(__pyx_t_10); __pyx_t_4++; if (unlikely(0 < 0)) __PYX_ERR(0, 69, __pyx_L7_error)
          #else
          __pyx_t_10 = PySequence_ITEM(__pyx_t_11, __pyx_t_4); __pyx_t_4++; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 69, __pyx_L7_error)
          __Pyx_GOTREF(__pyx_t_10);
          #endif
        }
      } else {
        __pyx_t_10 = __pyx_t_12(__pyx_t_11);
        if (unlikely(!__pyx_t_10)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 69, __pyx_L7_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_10);
      }
      __Pyx_XDECREF_SET(__pyx_8genexpr3__pyx_v__, __pyx_t_10);
      __pyx_t_10 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_13, __pyx_n_s_random); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 69, __pyx_L7_error)
      __Pyx_GOTREF(__pyx_t_13);
      __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_t_13, __pyx_n_s_choice); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 69, __pyx_L7_error)
      __Pyx_GOTREF(__pyx_t_14);
      __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
      __pyx_t_13 = PySequence_List(__pyx_v_text); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 69, __pyx_L7_error)
      __Pyx_GOTREF(__pyx_t_13);
      __pyx_t_15 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_14))) {
        __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_14);
        if (likely(__pyx_t_15)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_14);
          __Pyx_INCREF(__pyx_t_15);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_14, function);
        }
      }
      __pyx_t_10 = (__pyx_t_15) ? __Pyx_PyObject_Call2Args(__pyx_t_14, __pyx_t_15, __pyx_t_13) : __Pyx_PyObject_CallOneArg(__pyx_t_14, __pyx_t_13);
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
      if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 69, __pyx_L7_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
      if (unlikely(__Pyx_ListComp_Append(__pyx_t_1, (PyObject*)__pyx_t_10))) __PYX_ERR(0, 69, __pyx_L7_error)
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    }
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_XDECREF(__pyx_8genexpr3__pyx_v__); __pyx_8genexpr3__pyx_v__ = 0;
    goto __pyx_L10_exit_scope;
    __pyx_L7_error:;
    __Pyx_XDECREF(__pyx_8genexpr3__pyx_v__); __pyx_8genexpr3__pyx_v__ = 0;
    goto __pyx_L1_error;
    __pyx_L10_exit_scope:;
  }  
  __pyx_t_11 = PyUnicode_Join(__pyx_kp_u__7, __pyx_t_1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 69, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_11;
  __pyx_t_11 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_XDECREF(__pyx_t_15);
  __Pyx_AddTraceback("utils.random_string", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_text);
  __Pyx_XDECREF(__pyx_8genexpr3__pyx_v__);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_19unique(PyObject *__pyx_self, PyObject *__pyx_v_array);  
static PyMethodDef __pyx_mdef_5utils_19unique = {"unique", (PyCFunction)__pyx_pw_5utils_19unique, METH_O, 0};
static PyObject *__pyx_pw_5utils_19unique(PyObject *__pyx_self, PyObject *__pyx_v_array) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("unique (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_18unique(__pyx_self, ((PyObject *)__pyx_v_array));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_18unique(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_array) {
  PyObject *__pyx_v_result = NULL;
  PyObject *__pyx_v_item = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  PyObject *(*__pyx_t_3)(PyObject *);
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("unique", 0);

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 72, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_result = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  if (likely(PyList_CheckExact(__pyx_v_array)) || PyTuple_CheckExact(__pyx_v_array)) {
    __pyx_t_1 = __pyx_v_array; __Pyx_INCREF(__pyx_t_1); __pyx_t_2 = 0;
    __pyx_t_3 = NULL;
  } else {
    __pyx_t_2 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_array); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 73, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 73, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_3)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_2 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely(0 < 0)) __PYX_ERR(0, 73, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 73, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      } else {
        if (__pyx_t_2 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely(0 < 0)) __PYX_ERR(0, 73, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 73, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      }
    } else {
      __pyx_t_4 = __pyx_t_3(__pyx_t_1);
      if (unlikely(!__pyx_t_4)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 73, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_4);
    }
    __Pyx_XDECREF_SET(__pyx_v_item, __pyx_t_4);
    __pyx_t_4 = 0;

     
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_v_item, __pyx_v_result, Py_NE)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 74, __pyx_L1_error)
    __pyx_t_6 = (__pyx_t_5 != 0);
    if (__pyx_t_6) {

       
      __pyx_t_7 = __Pyx_PyList_Append(__pyx_v_result, __pyx_v_item); if (unlikely(__pyx_t_7 == ((int)-1))) __PYX_ERR(0, 75, __pyx_L1_error)

       
    }

     
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_result);
  __pyx_r = __pyx_v_result;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("utils.unique", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_result);
  __Pyx_XDECREF(__pyx_v_item);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_21sensor_string(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_21sensor_string = {"sensor_string", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_21sensor_string, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_21sensor_string(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_string = 0;
  PyObject *__pyx_v_length = 0;
  PyObject *__pyx_v_replaced = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("sensor_string (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_string,&__pyx_n_s_length,&__pyx_n_s_replaced,0};
    PyObject* values[3] = {0,0,0};
    values[2] = ((PyObject *)((PyObject*)__pyx_kp_u__8));
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_string)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_length)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("sensor_string", 0, 2, 3, 1); __PYX_ERR(0, 78, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_replaced);
          if (value) { values[2] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "sensor_string") < 0)) __PYX_ERR(0, 78, __pyx_L3_error)
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
    __pyx_v_string = values[0];
    __pyx_v_length = values[1];
    __pyx_v_replaced = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("sensor_string", 0, 2, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 78, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.sensor_string", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_20sensor_string(__pyx_self, __pyx_v_string, __pyx_v_length, __pyx_v_replaced);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_20sensor_string(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_string, PyObject *__pyx_v_length, PyObject *__pyx_v_replaced) {
  PyObject *__pyx_v_random_list = NULL;
  PyObject *__pyx_v_loop = NULL;
  PyObject *__pyx_v_index = NULL;
  PyObject *__pyx_8genexpr4__pyx_v_index = NULL;
  CYTHON_UNUSED PyObject *__pyx_8genexpr4__pyx_v_value = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  Py_ssize_t __pyx_t_4;
  PyObject *(*__pyx_t_5)(PyObject *);
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  int __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("sensor_string", 0);
  __Pyx_INCREF(__pyx_v_string);

   
  __pyx_t_1 = PySequence_List(__pyx_v_string); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF_SET(__pyx_v_string, __pyx_t_1);
  __pyx_t_1 = 0;

   
  {  
    __pyx_t_1 = PyDict_New(); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 80, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_INCREF(__pyx_int_0);
    __pyx_t_2 = __pyx_int_0;
    if (likely(PyList_CheckExact(__pyx_v_string)) || PyTuple_CheckExact(__pyx_v_string)) {
      __pyx_t_3 = __pyx_v_string; __Pyx_INCREF(__pyx_t_3); __pyx_t_4 = 0;
      __pyx_t_5 = NULL;
    } else {
      __pyx_t_4 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_v_string); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 80, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_5 = Py_TYPE(__pyx_t_3)->tp_iternext; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 80, __pyx_L5_error)
    }
    for (;;) {
      if (likely(!__pyx_t_5)) {
        if (likely(PyList_CheckExact(__pyx_t_3))) {
          if (__pyx_t_4 >= PyList_GET_SIZE(__pyx_t_3)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_6 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_4); __Pyx_INCREF(__pyx_t_6); __pyx_t_4++; if (unlikely(0 < 0)) __PYX_ERR(0, 80, __pyx_L5_error)
          #else
          __pyx_t_6 = PySequence_ITEM(__pyx_t_3, __pyx_t_4); __pyx_t_4++; if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 80, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_6);
          #endif
        } else {
          if (__pyx_t_4 >= PyTuple_GET_SIZE(__pyx_t_3)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_6 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_4); __Pyx_INCREF(__pyx_t_6); __pyx_t_4++; if (unlikely(0 < 0)) __PYX_ERR(0, 80, __pyx_L5_error)
          #else
          __pyx_t_6 = PySequence_ITEM(__pyx_t_3, __pyx_t_4); __pyx_t_4++; if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 80, __pyx_L5_error)
          __Pyx_GOTREF(__pyx_t_6);
          #endif
        }
      } else {
        __pyx_t_6 = __pyx_t_5(__pyx_t_3);
        if (unlikely(!__pyx_t_6)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 80, __pyx_L5_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_6);
      }
      __Pyx_XDECREF_SET(__pyx_8genexpr4__pyx_v_value, __pyx_t_6);
      __pyx_t_6 = 0;
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_XDECREF_SET(__pyx_8genexpr4__pyx_v_index, __pyx_t_2);
      __pyx_t_6 = __Pyx_PyInt_AddObjC(__pyx_t_2, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 80, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_2);
      __pyx_t_2 = __pyx_t_6;
      __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetItem(__pyx_v_string, __pyx_8genexpr4__pyx_v_index); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 80, __pyx_L5_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (unlikely(PyDict_SetItem(__pyx_t_1, (PyObject*)__pyx_8genexpr4__pyx_v_index, (PyObject*)__pyx_t_6))) __PYX_ERR(0, 80, __pyx_L5_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_8genexpr4__pyx_v_index); __pyx_8genexpr4__pyx_v_index = 0;
    __Pyx_XDECREF(__pyx_8genexpr4__pyx_v_value); __pyx_8genexpr4__pyx_v_value = 0;
    goto __pyx_L8_exit_scope;
    __pyx_L5_error:;
    __Pyx_XDECREF(__pyx_8genexpr4__pyx_v_index); __pyx_8genexpr4__pyx_v_index = 0;
    __Pyx_XDECREF(__pyx_8genexpr4__pyx_v_value); __pyx_8genexpr4__pyx_v_value = 0;
    goto __pyx_L1_error;
    __pyx_L8_exit_scope:;
  }  
  __pyx_v_random_list = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __Pyx_INCREF(__pyx_int_0);
  __pyx_v_loop = __pyx_int_0;

   
  while (1) {
    __pyx_t_1 = PyObject_RichCompare(__pyx_v_loop, __pyx_v_length, Py_LT); __Pyx_XGOTREF(__pyx_t_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 82, __pyx_L1_error)
    __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_7 < 0)) __PYX_ERR(0, 82, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (!__pyx_t_7) break;

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyDict_Keys(__pyx_v_random_list); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = PySequence_List(__pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
    __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_6);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF_SET(__pyx_v_index, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_v_string, __pyx_v_index); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = PyObject_RichCompare(__pyx_t_1, __pyx_v_replaced, Py_NE); __Pyx_XGOTREF(__pyx_t_3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (__pyx_t_8) {
    } else {
      __pyx_t_7 = __pyx_t_8;
      goto __pyx_L12_bool_binop_done;
    }
    __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_v_string, __pyx_v_index); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_isalpha); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_1)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_1);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
      }
    }
    __pyx_t_3 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = __pyx_t_8;
    __pyx_L12_bool_binop_done:;
    if (__pyx_t_7) {

       
      if (unlikely(PyObject_SetItem(__pyx_v_string, __pyx_v_index, __pyx_v_replaced) < 0)) __PYX_ERR(0, 85, __pyx_L1_error)

       
      __pyx_t_3 = __Pyx_PyInt_AddObjC(__pyx_v_loop, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF_SET(__pyx_v_loop, __pyx_t_3);
      __pyx_t_3 = 0;

       
    }

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_9, &__pyx_t_10, &__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_9);
      __Pyx_XGOTREF(__pyx_t_10);
      __Pyx_XGOTREF(__pyx_t_11);
        {

         
        if (unlikely(PyDict_DelItem(__pyx_v_random_list, __pyx_v_index) < 0)) __PYX_ERR(0, 88, __pyx_L14_error)

         
      }
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      goto __pyx_L21_try_end;
      __pyx_L14_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;

       
        {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L15_exception_handled;
      }
      __pyx_L15_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_9);
      __Pyx_XGIVEREF(__pyx_t_10);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
      __pyx_L21_try_end:;
    }

     
    __pyx_t_4 = PyDict_Size(__pyx_v_random_list); if (unlikely(__pyx_t_4 == ((Py_ssize_t)-1))) __PYX_ERR(0, 90, __pyx_L1_error)
    __pyx_t_7 = ((__pyx_t_4 == 0) != 0);
    if (__pyx_t_7) {

       
      goto __pyx_L10_break;

       
    }
  }
  __pyx_L10_break:;

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_3 = PyUnicode_Join(__pyx_kp_u__7, __pyx_v_string); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 92, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("utils.sensor_string", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_random_list);
  __Pyx_XDECREF(__pyx_v_loop);
  __Pyx_XDECREF(__pyx_v_index);
  __Pyx_XDECREF(__pyx_8genexpr4__pyx_v_index);
  __Pyx_XDECREF(__pyx_8genexpr4__pyx_v_value);
  __Pyx_XDECREF(__pyx_v_string);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_23generate_passsword_from_name(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_23generate_passsword_from_name = {"generate_passsword_from_name", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_23generate_passsword_from_name, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_23generate_passsword_from_name(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_name = 0;
  PyObject *__pyx_v_suflix = 0;
  PyObject *__pyx_v_slices_length = 0;
  PyObject *__pyx_v_auto_lower = 0;
  PyObject *__pyx_v_min_length = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("generate_passsword_from_name (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_name,&__pyx_n_s_suflix,&__pyx_n_s_slices_length,&__pyx_n_s_auto_lower,&__pyx_n_s_min_length,0};
    PyObject* values[5] = {0,0,0,0,0};
    values[2] = ((PyObject *)((PyObject *)__pyx_int_2));

     
    values[3] = ((PyObject *)((PyObject *)Py_False));
    values[4] = ((PyObject *)((PyObject *)__pyx_int_6));
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_name)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_suflix)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("generate_passsword_from_name", 0, 2, 5, 1); __PYX_ERR(0, 94, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_slices_length);
          if (value) { values[2] = value; kw_args--; }
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_auto_lower);
          if (value) { values[3] = value; kw_args--; }
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_min_length);
          if (value) { values[4] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "generate_passsword_from_name") < 0)) __PYX_ERR(0, 94, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  5: values[4] = PyTuple_GET_ITEM(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_name = values[0];
    __pyx_v_suflix = values[1];
    __pyx_v_slices_length = values[2];
    __pyx_v_auto_lower = values[3];
    __pyx_v_min_length = values[4];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("generate_passsword_from_name", 0, 2, 5, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 94, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.generate_passsword_from_name", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_22generate_passsword_from_name(__pyx_self, __pyx_v_name, __pyx_v_suflix, __pyx_v_slices_length, __pyx_v_auto_lower, __pyx_v_min_length);

   

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_22generate_passsword_from_name(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_name, PyObject *__pyx_v_suflix, PyObject *__pyx_v_slices_length, PyObject *__pyx_v_auto_lower, PyObject *__pyx_v_min_length) {
  PyObject *__pyx_v_result = NULL;
  PyObject *__pyx_v_item = NULL;
  PyObject *__pyx_v_sfx = NULL;
  PyObject *__pyx_v_string_password = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  Py_ssize_t __pyx_t_4;
  PyObject *(*__pyx_t_5)(PyObject *);
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  PyObject *__pyx_t_8 = NULL;
  Py_ssize_t __pyx_t_9;
  int __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  int __pyx_t_13;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("generate_passsword_from_name", 0);

   
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 101, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_result = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_name, __pyx_n_s_split); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 102, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetSlice(__pyx_t_1, 0, 0, NULL, &__pyx_v_slices_length, NULL, 1, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (likely(PyList_CheckExact(__pyx_t_2)) || PyTuple_CheckExact(__pyx_t_2)) {
    __pyx_t_1 = __pyx_t_2; __Pyx_INCREF(__pyx_t_1); __pyx_t_4 = 0;
    __pyx_t_5 = NULL;
  } else {
    __pyx_t_4 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 102, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 102, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  for (;;) {
    if (likely(!__pyx_t_5)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_4 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_4); __Pyx_INCREF(__pyx_t_2); __pyx_t_4++; if (unlikely(0 < 0)) __PYX_ERR(0, 102, __pyx_L1_error)
        #else
        __pyx_t_2 = PySequence_ITEM(__pyx_t_1, __pyx_t_4); __pyx_t_4++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 102, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      } else {
        if (__pyx_t_4 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_4); __Pyx_INCREF(__pyx_t_2); __pyx_t_4++; if (unlikely(0 < 0)) __PYX_ERR(0, 102, __pyx_L1_error)
        #else
        __pyx_t_2 = PySequence_ITEM(__pyx_t_1, __pyx_t_4); __pyx_t_4++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 102, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      }
    } else {
      __pyx_t_2 = __pyx_t_5(__pyx_t_1);
      if (unlikely(!__pyx_t_2)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 102, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_2);
    }
    __Pyx_XDECREF_SET(__pyx_v_item, __pyx_t_2);
    __pyx_t_2 = 0;

     
    if (likely(PyList_CheckExact(__pyx_v_suflix)) || PyTuple_CheckExact(__pyx_v_suflix)) {
      __pyx_t_2 = __pyx_v_suflix; __Pyx_INCREF(__pyx_t_2); __pyx_t_6 = 0;
      __pyx_t_7 = NULL;
    } else {
      __pyx_t_6 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_v_suflix); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 103, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_7 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 103, __pyx_L1_error)
    }
    for (;;) {
      if (likely(!__pyx_t_7)) {
        if (likely(PyList_CheckExact(__pyx_t_2))) {
          if (__pyx_t_6 >= PyList_GET_SIZE(__pyx_t_2)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_3 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 103, __pyx_L1_error)
          #else
          __pyx_t_3 = PySequence_ITEM(__pyx_t_2, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 103, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_3);
          #endif
        } else {
          if (__pyx_t_6 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 103, __pyx_L1_error)
          #else
          __pyx_t_3 = PySequence_ITEM(__pyx_t_2, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 103, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_3);
          #endif
        }
      } else {
        __pyx_t_3 = __pyx_t_7(__pyx_t_2);
        if (unlikely(!__pyx_t_3)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 103, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_3);
      }
      __Pyx_XDECREF_SET(__pyx_v_sfx, __pyx_t_3);
      __pyx_t_3 = 0;

       
      __Pyx_INCREF(__pyx_v_item);
      __Pyx_XDECREF_SET(__pyx_v_string_password, __pyx_v_item);

       
      __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_sfx); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 105, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_8 = PyNumber_InPlaceAdd(__pyx_v_string_password, __pyx_t_3); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 105, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF_SET(__pyx_v_string_password, __pyx_t_8);
      __pyx_t_8 = 0;

       
      __pyx_t_9 = PyObject_Length(__pyx_v_string_password); if (unlikely(__pyx_t_9 == ((Py_ssize_t)-1))) __PYX_ERR(0, 106, __pyx_L1_error)
      __pyx_t_8 = PyInt_FromSsize_t(__pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 106, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_3 = PyObject_RichCompare(__pyx_t_8, __pyx_v_min_length, Py_GE); __Pyx_XGOTREF(__pyx_t_3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 106, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_10 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely(__pyx_t_10 < 0)) __PYX_ERR(0, 106, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (__pyx_t_10) {

         
        __pyx_t_10 = __Pyx_PyObject_IsTrue(__pyx_v_auto_lower); if (unlikely(__pyx_t_10 < 0)) __PYX_ERR(0, 107, __pyx_L1_error)
        if (__pyx_t_10) {
          __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_string_password, __pyx_n_s_lower); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 107, __pyx_L1_error)
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
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 107, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __pyx_t_3 = __pyx_t_8;
          __pyx_t_8 = 0;
        } else {
          __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_string_password, __pyx_n_s_lower); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 107, __pyx_L1_error)
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
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 107, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          __pyx_t_3 = __pyx_t_8;
          __pyx_t_8 = 0;
        }
        __pyx_t_13 = __Pyx_PyList_Append(__pyx_v_result, __pyx_t_3); if (unlikely(__pyx_t_13 == ((int)-1))) __PYX_ERR(0, 107, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

         
      }

       
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_result);
  __pyx_r = __pyx_v_result;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_AddTraceback("utils.generate_passsword_from_name", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_result);
  __Pyx_XDECREF(__pyx_v_item);
  __Pyx_XDECREF(__pyx_v_sfx);
  __Pyx_XDECREF(__pyx_v_string_password);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_25save_result(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_25save_result = {"save_result", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_25save_result, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_25save_result(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_filename = 0;
  PyObject *__pyx_v_value = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("save_result (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_filename,&__pyx_n_s_value,0};
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_filename)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_value)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("save_result", 1, 2, 2, 1); __PYX_ERR(0, 110, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "save_result") < 0)) __PYX_ERR(0, 110, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 2) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
    }
    __pyx_v_filename = values[0];
    __pyx_v_value = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("save_result", 1, 2, 2, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 110, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.save_result", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_24save_result(__pyx_self, __pyx_v_filename, __pyx_v_value);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_24save_result(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_filename, PyObject *__pyx_v_value) {
  PyObject *__pyx_v_dirs = NULL;
  PyObject *__pyx_v_f = NULL;
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
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("save_result", 0);

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_filename, __pyx_n_s_split); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 111, __pyx_L1_error)
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
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_kp_u__9) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_kp_u__9);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetSlice(__pyx_t_1, 0, -1L, NULL, NULL, &__pyx_slice__10, 0, 1, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_dirs = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_v_dirs); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 112, __pyx_L1_error)
  if (__pyx_t_4) {

     
    __pyx_t_2 = PyUnicode_Join(__pyx_kp_u__9, __pyx_v_dirs); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 113, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF_SET(__pyx_v_dirs, __pyx_t_2);
    __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_path); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_isdir); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 114, __pyx_L1_error)
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
    __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_3, __pyx_v_dirs) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_v_dirs);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_5 = ((!__pyx_t_4) != 0);
    if (__pyx_t_5) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_pathlib); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 115, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_Path); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 115, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = NULL;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
        }
      }
      __pyx_t_2 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_v_dirs) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_dirs);
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 115, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_mkdir); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 115, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 115, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_parents, Py_True) < 0) __PYX_ERR(0, 115, __pyx_L1_error)
      if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_exist_ok, Py_True) < 0) __PYX_ERR(0, 115, __pyx_L1_error)
      __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 115, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

       
    }

     
  }

   
    {
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_INCREF(__pyx_v_filename);
    __Pyx_GIVEREF(__pyx_v_filename);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_v_filename);
    __Pyx_INCREF(__pyx_n_u_a);
    __Pyx_GIVEREF(__pyx_n_u_a);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_a);
    __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_encoding, __pyx_kp_u_utf_8) < 0) __PYX_ERR(0, 120, __pyx_L1_error)
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_6 = __Pyx_PyObject_LookupSpecial(__pyx_t_3, __pyx_n_s_exit_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_1 = __Pyx_PyObject_LookupSpecial(__pyx_t_3, __pyx_n_s_enter); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 120, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_1, function);
      }
    }
    __pyx_t_2 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 120, __pyx_L5_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __pyx_t_2;
    __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      {
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
        __Pyx_XGOTREF(__pyx_t_8);
        __Pyx_XGOTREF(__pyx_t_9);
        __Pyx_XGOTREF(__pyx_t_10);
          {
          __pyx_v_f = __pyx_t_1;
          __pyx_t_1 = 0;

           
          __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_f, __pyx_n_s_write); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 121, __pyx_L9_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_2 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
            __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
            if (likely(__pyx_t_2)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
              __Pyx_INCREF(__pyx_t_2);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_3, function);
            }
          }
          __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_v_value) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_value);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 121, __pyx_L9_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

           
          __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_f, __pyx_n_s_write); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 122, __pyx_L9_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_2 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
            __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
            if (likely(__pyx_t_2)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
              __Pyx_INCREF(__pyx_t_2);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_3, function);
            }
          }
          __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_kp_u__11) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_u__11);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 122, __pyx_L9_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

           
          __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_f, __pyx_n_s_close); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 123, __pyx_L9_error)
          __Pyx_GOTREF(__pyx_t_3);
          __pyx_t_2 = NULL;
          if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
            __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
            if (likely(__pyx_t_2)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
              __Pyx_INCREF(__pyx_t_2);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_3, function);
            }
          }
          __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 123, __pyx_L9_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

           
        }
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        goto __pyx_L14_try_end;
        __pyx_L9_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
          {
          __Pyx_AddTraceback("utils.save_result", __pyx_clineno, __pyx_lineno, __pyx_filename);
          if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_3, &__pyx_t_2) < 0) __PYX_ERR(0, 120, __pyx_L11_except_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_7 = PyTuple_Pack(3, __pyx_t_1, __pyx_t_3, __pyx_t_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 120, __pyx_L11_except_error)
          __Pyx_GOTREF(__pyx_t_7);
          __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_7, NULL);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 120, __pyx_L11_except_error)
          __Pyx_GOTREF(__pyx_t_11);
          __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (__pyx_t_5 < 0) __PYX_ERR(0, 120, __pyx_L11_except_error)
          __pyx_t_4 = ((!(__pyx_t_5 != 0)) != 0);
          if (__pyx_t_4) {
            __Pyx_GIVEREF(__pyx_t_1);
            __Pyx_GIVEREF(__pyx_t_3);
            __Pyx_XGIVEREF(__pyx_t_2);
            __Pyx_ErrRestoreWithState(__pyx_t_1, __pyx_t_3, __pyx_t_2);
            __pyx_t_1 = 0; __pyx_t_3 = 0; __pyx_t_2 = 0; 
            __PYX_ERR(0, 120, __pyx_L11_except_error)
          }
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          goto __pyx_L10_exception_handled;
        }
        __pyx_L11_except_error:;
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_9);
        __Pyx_XGIVEREF(__pyx_t_10);
        __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
        goto __pyx_L1_error;
        __pyx_L10_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_9);
        __Pyx_XGIVEREF(__pyx_t_10);
        __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
        __pyx_L14_try_end:;
      }
    }
      {
       {
        if (__pyx_t_6) {
          __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__12, NULL);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
          if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 120, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_10);
          __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        }
        goto __pyx_L8;
      }
      __pyx_L8:;
    }
    goto __pyx_L18;
    __pyx_L5_error:;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    goto __pyx_L1_error;
    __pyx_L18:;
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("utils.save_result", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_dirs);
  __Pyx_XDECREF(__pyx_v_f);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

static PyObject *__pyx_pf_5utils_32__defaults__(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__defaults__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_now);
  __Pyx_GIVEREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_now);
  PyTuple_SET_ITEM(__pyx_t_1, 0, __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_now);
  __Pyx_INCREF(((PyObject*)__pyx_n_u_default));
  __Pyx_GIVEREF(((PyObject*)__pyx_n_u_default));
  PyTuple_SET_ITEM(__pyx_t_1, 1, ((PyObject*)__pyx_n_u_default));
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 125, __pyx_L1_error)
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
  __Pyx_AddTraceback("utils.__defaults__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 
static PyObject *__pyx_pw_5utils_27get_duration(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_27get_duration = {"get_duration", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_27get_duration, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_27get_duration(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_then = 0;
  PyObject *__pyx_v_now = 0;
  PyObject *__pyx_v_interval = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_duration (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_then,&__pyx_n_s_now,&__pyx_n_s_interval,0};
    PyObject* values[3] = {0,0,0};
    __pyx_defaults *__pyx_dynamic_args = __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self);
    values[1] = __pyx_dynamic_args->__pyx_arg_now;
    values[2] = ((PyObject *)((PyObject*)__pyx_n_u_default));
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
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_then)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_now);
          if (value) { values[1] = value; kw_args--; }
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_interval);
          if (value) { values[2] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "get_duration") < 0)) __PYX_ERR(0, 125, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_then = values[0];
    __pyx_v_now = values[1];
    __pyx_v_interval = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("get_duration", 0, 1, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 125, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.get_duration", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_26get_duration(__pyx_self, __pyx_v_then, __pyx_v_now, __pyx_v_interval);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_12get_duration_1years(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_12get_duration_1years = {"years", (PyCFunction)__pyx_pw_5utils_12get_duration_1years, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_12get_duration_1years(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("years (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_12get_duration_years(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_12get_duration_years(PyObject *__pyx_self) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_cur_scope;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_outer_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("years", 0);
  __pyx_outer_scope = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  __Pyx_XDECREF(__pyx_r);
  if (unlikely(!__pyx_cur_scope->__pyx_v_duration_in_s)) { __Pyx_RaiseClosureNameError("duration_in_s"); __PYX_ERR(0, 133, __pyx_L1_error) }
  __pyx_t_1 = __pyx_cur_scope->__pyx_v_duration_in_s;
  __Pyx_INCREF(__pyx_t_1);
  __pyx_t_2 = PyNumber_Divmod(__pyx_t_1, __pyx_int_31536000); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("utils.get_duration.years", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_12get_duration_3days(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_12get_duration_3days = {"days", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_12get_duration_3days, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_12get_duration_3days(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_seconds = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("days (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_seconds,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_None));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_seconds);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "days") < 0)) __PYX_ERR(0, 135, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_seconds = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("days", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 135, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.get_duration.days", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_12get_duration_2days(__pyx_self, __pyx_v_seconds);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_12get_duration_2days(PyObject *__pyx_self, PyObject *__pyx_v_seconds) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_cur_scope;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_outer_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("days", 0);
  __pyx_outer_scope = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = PyObject_RichCompare(__pyx_v_seconds, Py_None, Py_NE); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 136, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_3 < 0)) __PYX_ERR(0, 136, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_3) {
    __Pyx_INCREF(__pyx_v_seconds);
    __pyx_t_1 = __pyx_v_seconds;
  } else {
    if (unlikely(!__pyx_cur_scope->__pyx_v_duration_in_s)) { __Pyx_RaiseClosureNameError("duration_in_s"); __PYX_ERR(0, 136, __pyx_L1_error) }
    __Pyx_INCREF(__pyx_cur_scope->__pyx_v_duration_in_s);
    __pyx_t_1 = __pyx_cur_scope->__pyx_v_duration_in_s;
  }
  __pyx_t_2 = PyNumber_Divmod(__pyx_t_1, __pyx_int_86400); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 136, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("utils.get_duration.days", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_12get_duration_5hours(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_12get_duration_5hours = {"hours", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_12get_duration_5hours, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_12get_duration_5hours(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_seconds = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("hours (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_seconds,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_None));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_seconds);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "hours") < 0)) __PYX_ERR(0, 138, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_seconds = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("hours", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 138, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.get_duration.hours", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_12get_duration_4hours(__pyx_self, __pyx_v_seconds);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_12get_duration_4hours(PyObject *__pyx_self, PyObject *__pyx_v_seconds) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_cur_scope;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_outer_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("hours", 0);
  __pyx_outer_scope = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = PyObject_RichCompare(__pyx_v_seconds, Py_None, Py_NE); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 139, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_3 < 0)) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_3) {
    __Pyx_INCREF(__pyx_v_seconds);
    __pyx_t_1 = __pyx_v_seconds;
  } else {
    if (unlikely(!__pyx_cur_scope->__pyx_v_duration_in_s)) { __Pyx_RaiseClosureNameError("duration_in_s"); __PYX_ERR(0, 139, __pyx_L1_error) }
    __Pyx_INCREF(__pyx_cur_scope->__pyx_v_duration_in_s);
    __pyx_t_1 = __pyx_cur_scope->__pyx_v_duration_in_s;
  }
  __pyx_t_2 = PyNumber_Divmod(__pyx_t_1, __pyx_int_3600); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("utils.get_duration.hours", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_12get_duration_7minutes(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_12get_duration_7minutes = {"minutes", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_12get_duration_7minutes, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_12get_duration_7minutes(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_seconds = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("minutes (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_seconds,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_None));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_seconds);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "minutes") < 0)) __PYX_ERR(0, 141, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_seconds = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("minutes", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 141, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.get_duration.minutes", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_12get_duration_6minutes(__pyx_self, __pyx_v_seconds);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_12get_duration_6minutes(PyObject *__pyx_self, PyObject *__pyx_v_seconds) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_cur_scope;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_outer_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("minutes", 0);
  __pyx_outer_scope = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = PyObject_RichCompare(__pyx_v_seconds, Py_None, Py_NE); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 142, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_3 < 0)) __PYX_ERR(0, 142, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_3) {
    __Pyx_INCREF(__pyx_v_seconds);
    __pyx_t_1 = __pyx_v_seconds;
  } else {
    if (unlikely(!__pyx_cur_scope->__pyx_v_duration_in_s)) { __Pyx_RaiseClosureNameError("duration_in_s"); __PYX_ERR(0, 142, __pyx_L1_error) }
    __Pyx_INCREF(__pyx_cur_scope->__pyx_v_duration_in_s);
    __pyx_t_1 = __pyx_cur_scope->__pyx_v_duration_in_s;
  }
  __pyx_t_2 = PyNumber_Divmod(__pyx_t_1, __pyx_int_60); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 142, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("utils.get_duration.minutes", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_12get_duration_9seconds(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_12get_duration_9seconds = {"seconds", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_12get_duration_9seconds, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_12get_duration_9seconds(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_seconds = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("seconds (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_seconds,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_None));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_seconds);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "seconds") < 0)) __PYX_ERR(0, 144, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_seconds = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("seconds", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 144, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.get_duration.seconds", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_12get_duration_8seconds(__pyx_self, __pyx_v_seconds);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_12get_duration_8seconds(PyObject *__pyx_self, PyObject *__pyx_v_seconds) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_cur_scope;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_outer_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_t_2;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("seconds", 0);
  __pyx_outer_scope = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  __pyx_t_1 = PyObject_RichCompare(__pyx_v_seconds, Py_None, Py_NE); __Pyx_XGOTREF(__pyx_t_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 145, __pyx_L1_error)
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 145, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_2) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyNumber_Divmod(__pyx_v_seconds, __pyx_int_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 146, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_XDECREF(__pyx_r);
  if (unlikely(!__pyx_cur_scope->__pyx_v_duration_in_s)) { __Pyx_RaiseClosureNameError("duration_in_s"); __PYX_ERR(0, 147, __pyx_L1_error) }
  __Pyx_INCREF(__pyx_cur_scope->__pyx_v_duration_in_s);
  __pyx_r = __pyx_cur_scope->__pyx_v_duration_in_s;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("utils.get_duration.seconds", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_12get_duration_11total_duration(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_12get_duration_11total_duration = {"total_duration", (PyCFunction)__pyx_pw_5utils_12get_duration_11total_duration, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_12get_duration_11total_duration(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("total_duration (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_12get_duration_10total_duration(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_12get_duration_10total_duration(PyObject *__pyx_self) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_cur_scope;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_outer_scope;
  PyObject *__pyx_v_y = NULL;
  PyObject *__pyx_v_d = NULL;
  PyObject *__pyx_v_h = NULL;
  PyObject *__pyx_v_m = NULL;
  PyObject *__pyx_v_s = NULL;
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
  int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("total_duration", 0);
  __pyx_outer_scope = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_years)) { __Pyx_RaiseClosureNameError("years"); __PYX_ERR(0, 150, __pyx_L1_error) }
  __pyx_t_1 = __pyx_pf_5utils_12get_duration_years(__pyx_cur_scope->__pyx_v_years); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 150, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_y = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_GetItemInt(__pyx_v_y, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 151, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (unlikely(!__pyx_cur_scope->__pyx_v_days)) { __Pyx_RaiseClosureNameError("days"); __PYX_ERR(0, 151, __pyx_L1_error) }
  __pyx_t_2 = __pyx_pf_5utils_12get_duration_2days(__pyx_cur_scope->__pyx_v_days, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 151, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_d = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_GetItemInt(__pyx_v_d, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (unlikely(!__pyx_cur_scope->__pyx_v_hours)) { __Pyx_RaiseClosureNameError("hours"); __PYX_ERR(0, 152, __pyx_L1_error) }
  __pyx_t_1 = __pyx_pf_5utils_12get_duration_4hours(__pyx_cur_scope->__pyx_v_hours, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 152, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_h = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_GetItemInt(__pyx_v_h, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 153, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (unlikely(!__pyx_cur_scope->__pyx_v_minutes)) { __Pyx_RaiseClosureNameError("minutes"); __PYX_ERR(0, 153, __pyx_L1_error) }
  __pyx_t_2 = __pyx_pf_5utils_12get_duration_6minutes(__pyx_cur_scope->__pyx_v_minutes, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 153, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_m = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_GetItemInt(__pyx_v_m, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (unlikely(!__pyx_cur_scope->__pyx_v_seconds)) { __Pyx_RaiseClosureNameError("seconds"); __PYX_ERR(0, 154, __pyx_L1_error) }
  __pyx_t_1 = __pyx_pf_5utils_12get_duration_8seconds(__pyx_cur_scope->__pyx_v_seconds, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 154, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_s = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Time_between_dates_years_days_ho, __pyx_n_s_format); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_v_y, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_v_d, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_v_h, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_6 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_v_m, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_7 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_v_s, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_8 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 156, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  __pyx_t_9 = 0;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_9 = 1;
    }
  }
  #if CYTHON_FAST_PYCALL
  if (PyFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[6] = {__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_6, __pyx_t_7, __pyx_t_8};
    __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_9, 5+__pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 156, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  } else
  #endif
  #if CYTHON_FAST_PYCCALL
  if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
    PyObject *__pyx_temp[6] = {__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_6, __pyx_t_7, __pyx_t_8};
    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp+1-__pyx_t_9, 5+__pyx_t_9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 156, __pyx_L1_error)
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  } else
  #endif
  {
    __pyx_t_10 = PyTuple_New(5+__pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 156, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    if (__pyx_t_3) {
      __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_10, 0, __pyx_t_3); __pyx_t_3 = NULL;
    }
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_10, 0+__pyx_t_9, __pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_10, 1+__pyx_t_9, __pyx_t_5);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_10, 2+__pyx_t_9, __pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_7);
    PyTuple_SET_ITEM(__pyx_t_10, 3+__pyx_t_9, __pyx_t_7);
    __Pyx_GIVEREF(__pyx_t_8);
    PyTuple_SET_ITEM(__pyx_t_10, 4+__pyx_t_9, __pyx_t_8);
    __pyx_t_4 = 0;
    __pyx_t_5 = 0;
    __pyx_t_6 = 0;
    __pyx_t_7 = 0;
    __pyx_t_8 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_10, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 156, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
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
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("utils.get_duration.total_duration", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_y);
  __Pyx_XDECREF(__pyx_v_d);
  __Pyx_XDECREF(__pyx_v_h);
  __Pyx_XDECREF(__pyx_v_m);
  __Pyx_XDECREF(__pyx_v_s);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

static PyObject *__pyx_pf_5utils_26get_duration(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_then, PyObject *__pyx_v_now, PyObject *__pyx_v_interval) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_cur_scope;
  PyObject *__pyx_v_duration = NULL;
  PyObject *__pyx_v_total_duration = 0;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("get_duration", 0);
  __pyx_cur_scope = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *)__pyx_tp_new_5utils___pyx_scope_struct__get_duration(__pyx_ptype_5utils___pyx_scope_struct__get_duration, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_5utils___pyx_scope_struct__get_duration *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 125, __pyx_L1_error)
  } else {
    __Pyx_GOTREF(__pyx_cur_scope);
  }

   
  __pyx_t_1 = PyNumber_Subtract(__pyx_v_now, __pyx_v_then); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 129, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_duration = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_duration, __pyx_n_s_total_seconds); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 130, __pyx_L1_error)
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 130, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_duration_in_s = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_12get_duration_1years, 0, __pyx_n_s_get_duration_locals_years, ((PyObject*)__pyx_cur_scope), __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__13)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 132, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_years = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_12get_duration_3days, 0, __pyx_n_s_get_duration_locals_days, ((PyObject*)__pyx_cur_scope), __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__15)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 135, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__16);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_days = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_12get_duration_5hours, 0, __pyx_n_s_get_duration_locals_hours, ((PyObject*)__pyx_cur_scope), __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__18)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 138, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_hours = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_12get_duration_7minutes, 0, __pyx_n_s_get_duration_locals_minutes, ((PyObject*)__pyx_cur_scope), __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__21)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__22);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_minutes = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_12get_duration_9seconds, 0, __pyx_n_s_get_duration_locals_seconds, ((PyObject*)__pyx_cur_scope), __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__24)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 144, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_seconds = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_12get_duration_11total_duration, 0, __pyx_n_s_get_duration_locals_total_durati, ((PyObject*)__pyx_cur_scope), __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__27)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 149, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_total_duration = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __pyx_pf_5utils_12get_duration_years(__pyx_cur_scope->__pyx_v_years); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_years, __pyx_t_2) < 0) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_CallNoArg(__pyx_cur_scope->__pyx_v_days); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 160, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 160, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 160, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_days, __pyx_t_2) < 0) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_CallNoArg(__pyx_cur_scope->__pyx_v_hours); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_hours, __pyx_t_2) < 0) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_CallNoArg(__pyx_cur_scope->__pyx_v_minutes); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 162, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 162, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 162, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_minutes, __pyx_t_2) < 0) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_CallNoArg(__pyx_cur_scope->__pyx_v_seconds); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_seconds, __pyx_t_3) < 0) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __pyx_pf_5utils_12get_duration_10total_duration(__pyx_v_total_duration); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 164, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_default, __pyx_t_3) < 0) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_GetItem(__pyx_t_1, __pyx_v_interval); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 165, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("utils.get_duration", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_duration);
  __Pyx_XDECREF(__pyx_v_total_duration);
  __Pyx_DECREF(((PyObject *)__pyx_cur_scope));
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_29lookup_id(PyObject *__pyx_self, PyObject *__pyx_v_username);  
static char __pyx_doc_5utils_28lookup_id[] = "\n    from mtf.module.http_bs4 import (Http, BS4)\n    http = Http()\n    http.headers[\"user-agent\"] = app.USER_AGENT\n    response = http.get(\"https://findmyfbid.in/\").text\n    form = BS4(response, \"html.parser\").get_form(id=\"findmyfbid\")\n    if not form.get(\"action\"):\n        return None\n    \n    http.headers[\"content-type\"] = \"application/x-www-form-urlencoded\"\n    http.headers[\"referer\"] = \"https://findmyfbid.in/\"\n    payload = form[\"hidden\"]\n    payload[\"fburl\"] = \"https://www.facebook.com/{id}\".format(id=username)\n    http.post(\"https://findmyfbid.in/finding-facebook-id/\", data=payload)\n    response = http.post(\"https://findmyfbid.in/\", data=payload).text\n    userid = \"\".join(re.findall(r\"data-clipboard-text=\"([0-9]+)\"\", response))\n    return (userid if userid != \"\" else None)\n    ";
static PyMethodDef __pyx_mdef_5utils_29lookup_id = {"lookup_id", (PyCFunction)__pyx_pw_5utils_29lookup_id, METH_O, __pyx_doc_5utils_28lookup_id};
static PyObject *__pyx_pw_5utils_29lookup_id(PyObject *__pyx_self, PyObject *__pyx_v_username) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("lookup_id (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_28lookup_id(__pyx_self, ((PyObject *)__pyx_v_username));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_28lookup_id(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_username) {
  PyObject *__pyx_v_headers = NULL;
  PyObject *__pyx_v_link = NULL;
  PyObject *__pyx_v_userid = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("lookup_id", 0);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_app); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_LIST_USER_AGENT); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_t_5, __pyx_n_u_web); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
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
  __pyx_t_2 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_5, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_kp_u_user_agent, __pyx_t_2) < 0) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_headers = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject *)(&PyUnicode_Type)), __pyx_v_username); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyUnicode_Concat(__pyx_kp_u_https_www_facebook_com, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_link = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_requests); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_post); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_u_link, __pyx_v_link) < 0) __PYX_ERR(0, 188, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_data, __pyx_t_5) < 0) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_headers, __pyx_v_headers) < 0) __PYX_ERR(0, 188, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__28, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_json); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 188, __pyx_L1_error)
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
  __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_get); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = NULL;
  if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_1)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_1);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
    }
  }
  __pyx_t_2 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_1, __pyx_n_u_id) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_n_u_id);
  __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_userid = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_userid);
  __pyx_r = __pyx_v_userid;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("utils.lookup_id", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_headers);
  __Pyx_XDECREF(__pyx_v_link);
  __Pyx_XDECREF(__pyx_v_userid);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_31find_post_id(PyObject *__pyx_self, PyObject *__pyx_v_link);  
static PyMethodDef __pyx_mdef_5utils_31find_post_id = {"find_post_id", (PyCFunction)__pyx_pw_5utils_31find_post_id, METH_O, 0};
static PyObject *__pyx_pw_5utils_31find_post_id(PyObject *__pyx_self, PyObject *__pyx_v_link) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("find_post_id (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_30find_post_id(__pyx_self, ((PyObject *)__pyx_v_link));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_30find_post_id(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_link) {
  PyObject *__pyx_v_patterns = NULL;
  PyObject *__pyx_v_pattern = NULL;
  PyObject *__pyx_v_fbid = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  int __pyx_t_8;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("find_post_id", 0);

   
  __pyx_t_1 = PyList_New(4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 193, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_kp_u_http_https_facebook_com_0_9_pos);
  __Pyx_GIVEREF(__pyx_kp_u_http_https_facebook_com_0_9_pos);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_http_https_facebook_com_0_9_pos);
  __Pyx_INCREF(__pyx_kp_u_http_https_facebook_com_a_zA_Z0);
  __Pyx_GIVEREF(__pyx_kp_u_http_https_facebook_com_a_zA_Z0);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_kp_u_http_https_facebook_com_a_zA_Z0);
  __Pyx_INCREF(__pyx_kp_u_http_https_facebook_com_groups);
  __Pyx_GIVEREF(__pyx_kp_u_http_https_facebook_com_groups);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_http_https_facebook_com_groups);
  __Pyx_INCREF(__pyx_kp_u_http_https_facebook_com_story_p);
  __Pyx_GIVEREF(__pyx_kp_u_http_https_facebook_com_story_p);
  PyList_SET_ITEM(__pyx_t_1, 3, __pyx_kp_u_http_https_facebook_com_story_p);
  __pyx_v_patterns = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __pyx_v_patterns; __Pyx_INCREF(__pyx_t_1); __pyx_t_2 = 0;
  for (;;) {
    if (__pyx_t_2 >= PyList_GET_SIZE(__pyx_t_1)) break;
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_3); __pyx_t_2++; if (unlikely(0 < 0)) __PYX_ERR(0, 200, __pyx_L1_error)
    #else
    __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 200, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    #endif
    __Pyx_XDECREF_SET(__pyx_v_pattern, __pyx_t_3);
    __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_re); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 201, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_search); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    __pyx_t_6 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_6 = 1;
      }
    }
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_v_pattern, __pyx_v_link};
      __pyx_t_3 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 201, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_GOTREF(__pyx_t_3);
    } else
    #endif
    #if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
      PyObject *__pyx_temp[3] = {__pyx_t_4, __pyx_v_pattern, __pyx_v_link};
      __pyx_t_3 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp+1-__pyx_t_6, 2+__pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 201, __pyx_L1_error)
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_GOTREF(__pyx_t_3);
    } else
    #endif
    {
      __pyx_t_7 = PyTuple_New(2+__pyx_t_6); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 201, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      if (__pyx_t_4) {
        __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_4); __pyx_t_4 = NULL;
      }
      __Pyx_INCREF(__pyx_v_pattern);
      __Pyx_GIVEREF(__pyx_v_pattern);
      PyTuple_SET_ITEM(__pyx_t_7, 0+__pyx_t_6, __pyx_v_pattern);
      __Pyx_INCREF(__pyx_v_link);
      __Pyx_GIVEREF(__pyx_v_link);
      PyTuple_SET_ITEM(__pyx_t_7, 1+__pyx_t_6, __pyx_v_link);
      __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_7, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 201, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF_SET(__pyx_v_fbid, __pyx_t_3);
    __pyx_t_3 = 0;

     
    __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_v_fbid); if (unlikely(__pyx_t_8 < 0)) __PYX_ERR(0, 202, __pyx_L1_error)
    if (__pyx_t_8) {

       
      __Pyx_XDECREF(__pyx_r);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_fbid, __pyx_n_s_group); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 203, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_7 = NULL;
      if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
        }
      }
      __pyx_t_3 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_int_2) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_int_2);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 203, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_r = __pyx_t_3;
      __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L0;

       
    }

     
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("utils.find_post_id", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_patterns);
  __Pyx_XDECREF(__pyx_v_pattern);
  __Pyx_XDECREF(__pyx_v_fbid);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_9Validator_1is_valid_url(PyObject *__pyx_self, PyObject *__pyx_v_url);  
static PyMethodDef __pyx_mdef_5utils_9Validator_1is_valid_url = {"is_valid_url", (PyCFunction)__pyx_pw_5utils_9Validator_1is_valid_url, METH_O, 0};
static PyObject *__pyx_pw_5utils_9Validator_1is_valid_url(PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("is_valid_url (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_9Validator_is_valid_url(__pyx_self, ((PyObject *)__pyx_v_url));

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_9Validator_is_valid_url(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_url) {
  PyObject *__pyx_v_result = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("is_valid_url", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_urlparse); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 210, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
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
      __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_v_url) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_url);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 210, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_v_result = __pyx_t_4;
      __pyx_t_4 = 0;

       
      __Pyx_XDECREF(__pyx_r);
      __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_result, __pyx_n_s_scheme); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 211, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_result, __pyx_n_s_netloc); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 211, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = PyList_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 211, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GIVEREF(__pyx_t_4);
      PyList_SET_ITEM(__pyx_t_6, 0, __pyx_t_4);
      __Pyx_GIVEREF(__pyx_t_5);
      PyList_SET_ITEM(__pyx_t_6, 1, __pyx_t_5);
      __pyx_t_4 = 0;
      __pyx_t_5 = 0;
      __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_all, __pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 211, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_r = __pyx_t_5;
      __pyx_t_5 = 0;
      goto __pyx_L7_try_return;

       
    }
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;

     
      {
      __Pyx_AddTraceback("utils.Validator.is_valid_url", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_6, &__pyx_t_4) < 0) __PYX_ERR(0, 212, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_GOTREF(__pyx_t_4);

       
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_False);
      __pyx_r = Py_False;
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      goto __pyx_L6_except_return;
    }
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
  __Pyx_AddTraceback("utils.Validator.is_valid_url", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_result);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_1samsung(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_1samsung = {"samsung", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_1samsung, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_1samsung(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("samsung (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "samsung") < 0)) __PYX_ERR(0, 529, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("samsung", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 529, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.samsung", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_samsung(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_samsung(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_v_android_version = NULL;
  PyObject *__pyx_v_model = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("samsung", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 530, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 530, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 530, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_android_version = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 531, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 531, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 531, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_SAMSUNG); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 531, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 531, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_model = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_v_fb); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 532, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_6 += 29;
    __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_O11019_FBAN_Orca_Android);
    __pyx_t_6 += 146;
    __Pyx_GIVEREF(__pyx_kp_u_Build_O11019_FBAN_Orca_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Build_O11019_FBAN_Orca_Android);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBSV);
    __pyx_t_6 += 6;
    __Pyx_GIVEREF(__pyx_kp_u_FBSV);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_FBSV);
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_6 += 31;
    __Pyx_GIVEREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 9, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_density_2_0_width);
    __pyx_t_6 += 19;
    __Pyx_GIVEREF(__pyx_kp_u_density_2_0_width);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_density_2_0_width);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__31, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_4), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_height);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_height);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_height);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__32, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_6 += 18;
    __Pyx_GIVEREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_1, 5, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Concat(__pyx_t_3, __pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 533, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 534, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 534, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 534, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyObject_RichCompare(__pyx_t_1, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 534, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_4); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 534, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_4 = PyTuple_New(15); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_SAMSUNG_2);
    __pyx_t_6 += 10;
    __Pyx_GIVEREF(__pyx_kp_u_SAMSUNG_2);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_SAMSUNG_2);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_PPR1);
    __pyx_t_6 += 12;
    __Pyx_GIVEREF(__pyx_kp_u_Build_PPR1);
    PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Build_PPR1);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__34, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_3);
    __Pyx_GIVEREF(__pyx_int_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_SamsungBrowser);
    __pyx_t_6 += 36;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_SamsungBrowser);
    PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_KHTML_like_Gecko_SamsungBrowser);
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_v_android_version);
    __Pyx_GIVEREF(__pyx_v_android_version);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_v_android_version);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_1);
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Chrome);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Chrome);
    PyTuple_SET_ITEM(__pyx_t_4, 10, __pyx_kp_u_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 11, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 12, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_4, 13, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 14, __pyx_t_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_4, 15, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 535, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(11); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__39, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_1);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_1, 9, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 10, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 537, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("utils.RandomUserAgent.samsung", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_android_version);
  __Pyx_XDECREF(__pyx_v_model);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_3xiaomi(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_3xiaomi = {"xiaomi", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_3xiaomi, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_3xiaomi(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("xiaomi (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "xiaomi") < 0)) __PYX_ERR(0, 539, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("xiaomi", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 539, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.xiaomi", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_2xiaomi(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_2xiaomi(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_v_android_version = NULL;
  PyObject *__pyx_v_model = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("xiaomi", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 540, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 540, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 540, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_android_version = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 541, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 541, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 541, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_XIAOMI); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 541, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 541, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_model = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_v_fb); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 542, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(9); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_6 += 29;
    __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_O11019_FBAN_Orca_Android_2);
    __pyx_t_6 += 144;
    __Pyx_GIVEREF(__pyx_kp_u_Build_O11019_FBAN_Orca_Android_2);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Build_O11019_FBAN_Orca_Android_2);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBSV);
    __pyx_t_6 += 6;
    __Pyx_GIVEREF(__pyx_kp_u_FBSV);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_FBSV);
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_6 += 31;
    __Pyx_GIVEREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 9, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_density_2_0_width);
    __pyx_t_6 += 19;
    __Pyx_GIVEREF(__pyx_kp_u_density_2_0_width);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_density_2_0_width);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__31, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_4), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_height);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_height);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_height);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__32, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_6 += 18;
    __Pyx_GIVEREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_1, 5, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Concat(__pyx_t_3, __pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 543, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 544, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 544, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 544, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyObject_RichCompare(__pyx_t_1, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 544, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_4); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 544, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_4 = PyTuple_New(15); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u__30);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_QKQ1);
    __pyx_t_6 += 12;
    __Pyx_GIVEREF(__pyx_kp_u_Build_QKQ1);
    PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Build_QKQ1);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__34, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_3);
    __Pyx_GIVEREF(__pyx_int_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    __pyx_t_6 += 40;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 10, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_4, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 12, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_XiaoMi_MiuiBrowser);
    __pyx_t_6 += 20;
    __Pyx_GIVEREF(__pyx_kp_u_XiaoMi_MiuiBrowser);
    PyTuple_SET_ITEM(__pyx_t_4, 13, __pyx_kp_u_XiaoMi_MiuiBrowser);
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_INCREF(__pyx_v_android_version);
    __Pyx_GIVEREF(__pyx_v_android_version);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_v_android_version);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 14, __pyx_t_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_4, 15, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 545, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(13); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_RP1A);
    __pyx_t_6 += 12;
    __Pyx_GIVEREF(__pyx_kp_u_Build_RP1A);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Build_RP1A);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__34, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_3);
    __Pyx_GIVEREF(__pyx_int_3);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    __pyx_t_6 += 40;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_1);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 9, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 10, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_1, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 12, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_1, 13, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 547, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("utils.RandomUserAgent.xiaomi", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_android_version);
  __Pyx_XDECREF(__pyx_v_model);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_5oppo(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_5oppo = {"oppo", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_5oppo, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_5oppo(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("oppo (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "oppo") < 0)) __PYX_ERR(0, 549, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("oppo", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 549, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.oppo", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_4oppo(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_4oppo(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_v_android_version = NULL;
  PyObject *__pyx_v_model = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("oppo", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 550, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 550, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 550, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_android_version = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 551, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 551, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 551, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_OPPO); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 551, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 551, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_model = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_v_fb); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 552, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(11); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_6 += 29;
    __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Build);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Build);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyList_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_n_u_LMY47I);
    __Pyx_GIVEREF(__pyx_n_u_LMY47I);
    PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_u_LMY47I);
    __Pyx_INCREF(__pyx_n_u_O11019);
    __Pyx_GIVEREF(__pyx_n_u_O11019);
    PyList_SET_ITEM(__pyx_t_3, 1, __pyx_n_u_O11019);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_8, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0);
    __pyx_t_6 += 127;
    __Pyx_GIVEREF(__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0);
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBSV);
    __pyx_t_6 += 6;
    __Pyx_GIVEREF(__pyx_kp_u_FBSV);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_FBSV);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 9, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_6 += 31;
    __Pyx_GIVEREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    PyTuple_SET_ITEM(__pyx_t_1, 10, __pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_1, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_density_2_0_width);
    __pyx_t_6 += 19;
    __Pyx_GIVEREF(__pyx_kp_u_density_2_0_width);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_density_2_0_width);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__31, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_height);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_height);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_height);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__32, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_3), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_6 += 18;
    __Pyx_GIVEREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_1, 5, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Concat(__pyx_t_4, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 553, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 554, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 554, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 554, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyObject_RichCompare(__pyx_t_1, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 554, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 554, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_2 = PyTuple_New(17); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_OPPO_2);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_OPPO_2);
    PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_OPPO_2);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_OPM1);
    __pyx_t_6 += 12;
    __Pyx_GIVEREF(__pyx_kp_u_Build_OPM1);
    PyTuple_SET_ITEM(__pyx_t_2, 4, __pyx_kp_u_Build_OPM1);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__34, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_3);
    __Pyx_GIVEREF(__pyx_int_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_3);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 5, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_2, 6, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 7, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    __pyx_t_6 += 40;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    PyTuple_SET_ITEM(__pyx_t_2, 8, __pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 9, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 10, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_2, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 12, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_OppoBrowser);
    __pyx_t_6 += 13;
    __Pyx_GIVEREF(__pyx_kp_u_OppoBrowser);
    PyTuple_SET_ITEM(__pyx_t_2, 13, __pyx_kp_u_OppoBrowser);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__40, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 14, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u__41);
    __pyx_t_6 += 1;
    __Pyx_GIVEREF(__pyx_kp_u__41);
    PyTuple_SET_ITEM(__pyx_t_2, 15, __pyx_kp_u__41);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__40, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 16, __pyx_t_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_2, 17, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 555, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(13); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Build);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Build);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyList_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_n_u_LMY47I);
    __Pyx_GIVEREF(__pyx_n_u_LMY47I);
    PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_LMY47I);
    __Pyx_INCREF(__pyx_n_u_O11019);
    __Pyx_GIVEREF(__pyx_n_u_O11019);
    PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_O11019);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_8, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit_2);
    __pyx_t_6 += 13;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit_2);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_AppleWebKit_2);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_1);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 9, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 10, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_1, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 12, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_1, 13, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 557, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("utils.RandomUserAgent.oppo", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_android_version);
  __Pyx_XDECREF(__pyx_v_model);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_7infinix(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_7infinix = {"infinix", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_7infinix, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_7infinix(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("infinix (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "infinix") < 0)) __PYX_ERR(0, 559, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("infinix", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 559, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.infinix", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_6infinix(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_6infinix(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_v_android_version = NULL;
  PyObject *__pyx_v_model = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("infinix", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 560, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 560, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 560, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_android_version = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 561, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 561, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 561, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_INFINIX); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 561, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 561, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_model = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_v_fb); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 562, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(11); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_6 += 29;
    __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Build);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Build);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyList_New(3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_n_u_MRA58K);
    __Pyx_GIVEREF(__pyx_n_u_MRA58K);
    PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_u_MRA58K);
    __Pyx_INCREF(__pyx_n_u_O11019);
    __Pyx_GIVEREF(__pyx_n_u_O11019);
    PyList_SET_ITEM(__pyx_t_3, 1, __pyx_n_u_O11019);
    __Pyx_INCREF(__pyx_n_u_NRD90M);
    __Pyx_GIVEREF(__pyx_n_u_NRD90M);
    PyList_SET_ITEM(__pyx_t_3, 2, __pyx_n_u_NRD90M);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_8, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_2);
    __pyx_t_6 += 133;
    __Pyx_GIVEREF(__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_2);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_2);
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBSV);
    __pyx_t_6 += 6;
    __Pyx_GIVEREF(__pyx_kp_u_FBSV);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_FBSV);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 9, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_6 += 31;
    __Pyx_GIVEREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    PyTuple_SET_ITEM(__pyx_t_1, 10, __pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_1, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_density_2_0_width);
    __pyx_t_6 += 19;
    __Pyx_GIVEREF(__pyx_kp_u_density_2_0_width);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_density_2_0_width);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__31, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_height);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_height);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_height);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__32, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_3), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_6 += 18;
    __Pyx_GIVEREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_1, 5, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Concat(__pyx_t_4, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 563, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 564, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 564, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 564, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyObject_RichCompare(__pyx_t_1, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 564, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 564, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_2 = PyTuple_New(15); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Infinix);
    __pyx_t_6 += 10;
    __Pyx_GIVEREF(__pyx_kp_u_Infinix);
    PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_Infinix);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_OPR1);
    __pyx_t_6 += 12;
    __Pyx_GIVEREF(__pyx_kp_u_Build_OPR1);
    PyTuple_SET_ITEM(__pyx_t_2, 4, __pyx_kp_u_Build_OPR1);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__34, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_3);
    __Pyx_GIVEREF(__pyx_int_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_3);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 5, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_2, 6, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 7, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_2, 8, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 9, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 10, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_2, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 12, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_PHX);
    __pyx_t_6 += 5;
    __Pyx_GIVEREF(__pyx_kp_u_PHX);
    PyTuple_SET_ITEM(__pyx_t_2, 13, __pyx_kp_u_PHX);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__42, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 14, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_2, 15, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 565, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_4 = PyTuple_New(13); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_Infinix);
    __pyx_t_6 += 10;
    __Pyx_GIVEREF(__pyx_kp_u_Infinix);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_Infinix);
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Build);
    PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Build);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyList_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_n_u_MRA58K);
    __Pyx_GIVEREF(__pyx_n_u_MRA58K);
    PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_MRA58K);
    __Pyx_INCREF(__pyx_n_u_O11019);
    __Pyx_GIVEREF(__pyx_n_u_O11019);
    PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_O11019);
    __Pyx_INCREF(__pyx_n_u_NRD90M);
    __Pyx_GIVEREF(__pyx_n_u_NRD90M);
    PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_u_NRD90M);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_8, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit_2);
    __pyx_t_6 += 13;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit_2);
    PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_AppleWebKit_2);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 10, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_4, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 12, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_4, 13, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 567, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("utils.RandomUserAgent.infinix", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_android_version);
  __Pyx_XDECREF(__pyx_v_model);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_9vivo(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_9vivo = {"vivo", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_9vivo, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_9vivo(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("vivo (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "vivo") < 0)) __PYX_ERR(0, 569, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("vivo", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 569, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.vivo", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_8vivo(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_8vivo(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_v_android_version = NULL;
  PyObject *__pyx_v_model = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("vivo", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 570, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 570, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 570, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_android_version = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 571, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 571, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 571, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_VIVO); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 571, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
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
  __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
  __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 571, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_model = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_v_fb); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 572, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(11); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_6 += 29;
    __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Dalvik_2_1_0_Linux_Android);
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u__30);
    __pyx_t_6 += 2;
    __Pyx_GIVEREF(__pyx_kp_u__30);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u__30);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Build);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Build);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyList_New(3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_n_u_MMB29M);
    __Pyx_GIVEREF(__pyx_n_u_MMB29M);
    PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_u_MMB29M);
    __Pyx_INCREF(__pyx_n_u_KTU84P);
    __Pyx_GIVEREF(__pyx_n_u_KTU84P);
    PyList_SET_ITEM(__pyx_t_3, 1, __pyx_n_u_KTU84P);
    __Pyx_INCREF(__pyx_n_u_JDQ39);
    __Pyx_GIVEREF(__pyx_n_u_JDQ39);
    PyList_SET_ITEM(__pyx_t_3, 2, __pyx_n_u_JDQ39);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
      }
    }
    __pyx_t_4 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_8, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_3);
    __pyx_t_6 += 127;
    __Pyx_GIVEREF(__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_3);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_3);
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 7, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBSV);
    __pyx_t_6 += 6;
    __Pyx_GIVEREF(__pyx_kp_u_FBSV);
    PyTuple_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_FBSV);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 9, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_6 += 31;
    __Pyx_GIVEREF(__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    PyTuple_SET_ITEM(__pyx_t_1, 10, __pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM);
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_1, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_density_2_0_width);
    __pyx_t_6 += 19;
    __Pyx_GIVEREF(__pyx_kp_u_density_2_0_width);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_density_2_0_width);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__31, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_2), __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_height);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_height);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_height);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__32, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_3), __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_6 += 18;
    __Pyx_GIVEREF(__pyx_kp_u_FB_FW_1_FBBK_1);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_FB_FW_1_FBBK_1);
    __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_1, 5, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Concat(__pyx_t_4, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 573, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 574, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 574, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 574, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyObject_RichCompare(__pyx_t_1, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 574, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 574, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_2 = PyTuple_New(15); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Vivo);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Vivo);
    PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_Vivo);
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build_OPM1);
    __pyx_t_6 += 12;
    __Pyx_GIVEREF(__pyx_kp_u_Build_OPM1);
    PyTuple_SET_ITEM(__pyx_t_2, 4, __pyx_kp_u_Build_OPM1);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__34, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_3);
    __Pyx_GIVEREF(__pyx_int_3);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_3);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 5, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_2, 6, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 7, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_2, 8, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 9, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 10, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_2, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 12, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_VivoBrowser);
    __pyx_t_6 += 13;
    __Pyx_GIVEREF(__pyx_kp_u_VivoBrowser);
    PyTuple_SET_ITEM(__pyx_t_2, 13, __pyx_kp_u_VivoBrowser);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__42, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 14, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_2, 15, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 575, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_4 = PyTuple_New(13); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_android_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_Vivo);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Vivo);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_Vivo);
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_v_model, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_Build);
    __pyx_t_6 += 7;
    __Pyx_GIVEREF(__pyx_kp_u_Build);
    PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Build);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyList_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_n_u_MMB29M);
    __Pyx_GIVEREF(__pyx_n_u_MMB29M);
    PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_MMB29M);
    __Pyx_INCREF(__pyx_n_u_KTU84P);
    __Pyx_GIVEREF(__pyx_n_u_KTU84P);
    PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_KTU84P);
    __Pyx_INCREF(__pyx_n_u_JDQ39);
    __Pyx_GIVEREF(__pyx_n_u_JDQ39);
    PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_u_JDQ39);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
      }
    }
    __pyx_t_1 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_8, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_2);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit_2);
    __pyx_t_6 += 13;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit_2);
    PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_AppleWebKit_2);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_4, 10, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile_Safari);
    __pyx_t_6 += 15;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile_Safari);
    PyTuple_SET_ITEM(__pyx_t_4, 11, __pyx_kp_u_Mobile_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 12, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_4, 13, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 577, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("utils.RandomUserAgent.vivo", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_android_version);
  __Pyx_XDECREF(__pyx_v_model);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_11iphone(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_11iphone = {"iphone", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_11iphone, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_11iphone(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("iphone (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "iphone") < 0)) __PYX_ERR(0, 579, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("iphone", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 579, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.iphone", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_10iphone(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_10iphone(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_v_mobile_id = NULL;
  PyObject *__pyx_v_iphone_version = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("iphone", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 580, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 580, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyList_New(6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 580, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_kp_u_15E148);
  __Pyx_GIVEREF(__pyx_kp_u_15E148);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_15E148);
  __Pyx_INCREF(__pyx_kp_u_16A366);
  __Pyx_GIVEREF(__pyx_kp_u_16A366);
  PyList_SET_ITEM(__pyx_t_2, 1, __pyx_kp_u_16A366);
  __Pyx_INCREF(__pyx_kp_u_11A465);
  __Pyx_GIVEREF(__pyx_kp_u_11A465);
  PyList_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_11A465);
  __Pyx_INCREF(__pyx_kp_u_15G77);
  __Pyx_GIVEREF(__pyx_kp_u_15G77);
  PyList_SET_ITEM(__pyx_t_2, 3, __pyx_kp_u_15G77);
  __Pyx_INCREF(__pyx_kp_u_16D39);
  __Pyx_GIVEREF(__pyx_kp_u_16D39);
  PyList_SET_ITEM(__pyx_t_2, 4, __pyx_kp_u_16D39);
  __Pyx_INCREF(__pyx_kp_u_16B92);
  __Pyx_GIVEREF(__pyx_kp_u_16B92);
  PyList_SET_ITEM(__pyx_t_2, 5, __pyx_kp_u_16B92);
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
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 580, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_mobile_id = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyList_New(3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GIVEREF(__pyx_t_1);
  PyList_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_3);
  PyList_SET_ITEM(__pyx_t_4, 1, __pyx_t_3);
  __Pyx_GIVEREF(__pyx_t_2);
  PyList_SET_ITEM(__pyx_t_4, 2, __pyx_t_2);
  __pyx_t_1 = 0;
  __pyx_t_3 = 0;
  __pyx_t_2 = 0;
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(((PyObject *)(&PyUnicode_Type)));
  __Pyx_GIVEREF(((PyObject *)(&PyUnicode_Type)));
  PyTuple_SET_ITEM(__pyx_t_2, 0, ((PyObject *)(&PyUnicode_Type)));
  __Pyx_GIVEREF(__pyx_t_4);
  PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_4);
  __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_map, __pyx_t_2, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_iphone_version = __pyx_t_4;
  __pyx_t_4 = 0;

   
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_v_fb); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 582, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_4 = PyTuple_New(11); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS);
    __pyx_t_6 += 35;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS);
    __pyx_t_2 = PyUnicode_Join(__pyx_n_u__45, __pyx_v_iphone_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Mobile);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Mobile);
    PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_KHTML_like_Gecko_Mobile);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_mobile_id, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBAN_MessengerForiOS_FBDV_iPhon);
    __pyx_t_6 += 34;
    __Pyx_GIVEREF(__pyx_kp_u_FBAN_MessengerForiOS_FBDV_iPhon);
    PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_FBAN_MessengerForiOS_FBDV_iPhon);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__46, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBMD_iPhone_FBSN_iOS_FBSV);
    __pyx_t_6 += 27;
    __Pyx_GIVEREF(__pyx_kp_u_FBMD_iPhone_FBSN_iOS_FBSV);
    PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_FBMD_iPhone_FBSN_iOS_FBSV);
    __pyx_t_2 = PyUnicode_Join(__pyx_kp_u__41, __pyx_v_iphone_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_FBSS_2_FBID_phone_FBLC_en_US_FB);
    __pyx_t_6 += 37;
    __Pyx_GIVEREF(__pyx_kp_u_FBSS_2_FBID_phone_FBLC_en_US_FB);
    PyTuple_SET_ITEM(__pyx_t_4, 10, __pyx_kp_u_FBSS_2_FBID_phone_FBLC_en_US_FB);
    __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_4, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 583, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = 0;
    goto __pyx_L0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 584, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 584, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 584, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyObject_RichCompare(__pyx_t_2, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 584, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_4); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 584, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_4 = PyTuple_New(11); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_iPad_CPU_iPhone_OS);
    __pyx_t_6 += 33;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_iPad_CPU_iPhone_OS);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_iPad_CPU_iPhone_OS);
    __pyx_t_2 = PyUnicode_Join(__pyx_n_u__45, __pyx_v_iphone_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_CriOS);
    __pyx_t_6 += 27;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_CriOS);
    PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_KHTML_like_Gecko_CriOS);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_1);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile);
    PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_kp_u_Mobile);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_mobile_id, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 10, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_4, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 585, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_2 = PyTuple_New(11); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS);
    __pyx_t_6 += 35;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS);
    __pyx_t_4 = PyUnicode_Join(__pyx_n_u__45, __pyx_v_iphone_version); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_like_Mac_OS_X_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_CriOS);
    __pyx_t_6 += 27;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_CriOS);
    PyTuple_SET_ITEM(__pyx_t_2, 4, __pyx_kp_u_KHTML_like_Gecko_CriOS);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_1);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 5, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 6, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Mobile);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Mobile);
    PyTuple_SET_ITEM(__pyx_t_2, 7, __pyx_kp_u_Mobile);
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_mobile_id, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 8, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_2, 9, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 10, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_2, 11, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 587, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("utils.RandomUserAgent.iphone", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_mobile_id);
  __Pyx_XDECREF(__pyx_v_iphone_version);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_13macOS(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_13macOS = {"macOS", (PyCFunction)__pyx_pw_5utils_15RandomUserAgent_13macOS, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_13macOS(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("macOS (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_12macOS(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_12macOS(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_iphone_version = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_UCS4 __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("macOS", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__43, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__44, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyList_New(3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GIVEREF(__pyx_t_1);
  PyList_SET_ITEM(__pyx_t_4, 0, __pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_2);
  PyList_SET_ITEM(__pyx_t_4, 1, __pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_3);
  PyList_SET_ITEM(__pyx_t_4, 2, __pyx_t_3);
  __pyx_t_1 = 0;
  __pyx_t_2 = 0;
  __pyx_t_3 = 0;
  __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(((PyObject *)(&PyUnicode_Type)));
  __Pyx_GIVEREF(((PyObject *)(&PyUnicode_Type)));
  PyTuple_SET_ITEM(__pyx_t_3, 0, ((PyObject *)(&PyUnicode_Type)));
  __Pyx_GIVEREF(__pyx_t_4);
  PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_t_4);
  __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_map, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 590, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_iphone_version = __pyx_t_4;
  __pyx_t_4 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 591, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_randint); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 591, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 591, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = PyObject_RichCompare(__pyx_t_4, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 591, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 591, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__pyx_t_5) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_3 = PyTuple_New(12); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac);
    __pyx_t_6 += 39;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac);
    __pyx_t_4 = PyUnicode_Join(__pyx_n_u__45, __pyx_v_iphone_version); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_3, 2, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_3, 4, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_1);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 5, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 6, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_3, 7, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 8, __pyx_t_4);
    __pyx_t_4 = 0;
    __Pyx_INCREF(__pyx_kp_u_Vivaldi);
    __pyx_t_6 += 9;
    __Pyx_GIVEREF(__pyx_kp_u_Vivaldi);
    PyTuple_SET_ITEM(__pyx_t_3, 9, __pyx_kp_u_Vivaldi);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__47, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_4);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_1);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_4, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 10, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_4, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_4) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    PyTuple_SET_ITEM(__pyx_t_3, 11, __pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyUnicode_Join(__pyx_t_3, 12, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 592, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_4 = PyTuple_New(9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = 0;
    __pyx_t_7 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac);
    __pyx_t_6 += 39;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac);
    PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac);
    __pyx_t_3 = PyUnicode_Join(__pyx_n_u__45, __pyx_v_iphone_version); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_kp_u_AppleWebKit);
    __pyx_t_6 += 14;
    __Pyx_GIVEREF(__pyx_kp_u_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_6 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_1);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_3);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_3, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_6 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_3, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_7 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_7) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_7;
    __pyx_t_6 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_t_3);
    __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_4, 9, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 594, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("utils.RandomUserAgent.macOS", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_iphone_version);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_15window(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_15window = {"window", (PyCFunction)__pyx_pw_5utils_15RandomUserAgent_15window, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_15window(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("window (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_14window(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_14window(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_window_version = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  Py_ssize_t __pyx_t_4;
  Py_UCS4 __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("window", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 597, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 597, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__48, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 597, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_window_version = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 598, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 598, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 598, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyObject_RichCompare(__pyx_t_1, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 598, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_3 < 0)) __PYX_ERR(0, 598, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_3) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_2 = PyTuple_New(9); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = 0;
    __pyx_t_5 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT);
    __pyx_t_4 += 24;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Mozilla_5_0_Windows_NT);
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_window_version); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_6);
    __pyx_t_6 = 0;
    __Pyx_INCREF(__pyx_kp_u_0_Win64_x64_AppleWebKit);
    __pyx_t_4 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_0_Win64_x64_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_0_Win64_x64_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_6);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_4 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_2, 4, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_int_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 5, __pyx_t_6);
    __pyx_t_6 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_6);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 6, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_4 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_2, 7, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 8, __pyx_t_6);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyUnicode_Join(__pyx_t_2, 9, __pyx_t_4, __pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 599, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_6;
    __pyx_t_6 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_6 = PyTuple_New(9); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_4 = 0;
    __pyx_t_5 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Windows_NT);
    __pyx_t_4 += 24;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Windows_NT);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_kp_u_Mozilla_5_0_Windows_NT);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_round, __pyx_v_window_version); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_INCREF(__pyx_kp_u_0_WOW64_AppleWebKit);
    __pyx_t_4 += 23;
    __Pyx_GIVEREF(__pyx_kp_u_0_WOW64_AppleWebKit);
    PyTuple_SET_ITEM(__pyx_t_6, 2, __pyx_kp_u_0_WOW64_AppleWebKit);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_6, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_4 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_6, 4, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 5, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_6, 6, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_4 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_6, 7, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 8, __pyx_t_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_6, 9, __pyx_t_4, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 601, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("utils.RandomUserAgent.window", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_window_version);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_17linux(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_17linux = {"linux", (PyCFunction)__pyx_pw_5utils_15RandomUserAgent_17linux, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_17linux(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("linux (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_16linux(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_16linux(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  Py_ssize_t __pyx_t_4;
  Py_UCS4 __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("linux", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 604, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 604, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__33, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 604, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyObject_RichCompare(__pyx_t_1, __pyx_int_50, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 604, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_3 < 0)) __PYX_ERR(0, 604, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_3) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_2 = PyTuple_New(10); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = 0;
    __pyx_t_5 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
    __pyx_t_4 += 44;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_6);
    __pyx_t_6 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Ubuntu_Chromiu);
    __pyx_t_4 += 37;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Ubuntu_Chromiu);
    PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_KHTML_like_Gecko_Ubuntu_Chromiu);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__39, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_6);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 4, __pyx_t_6);
    __pyx_t_6 = 0;
    __Pyx_INCREF(__pyx_kp_u_Chrome);
    __pyx_t_4 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Chrome);
    PyTuple_SET_ITEM(__pyx_t_2, 5, __pyx_kp_u_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_6);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_1);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 6, __pyx_t_1);
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_1);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_int_2);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_1, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 7, __pyx_t_6);
    __pyx_t_6 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_4 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_2, 8, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_6);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_int_2);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_1, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_1) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_1);
    __Pyx_GIVEREF(__pyx_t_1);
    PyTuple_SET_ITEM(__pyx_t_2, 9, __pyx_t_1);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyUnicode_Join(__pyx_t_2, 10, __pyx_t_4, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 605, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = 0;
    goto __pyx_L0;

     
  }

   
    {
    __Pyx_XDECREF(__pyx_r);
    __pyx_t_1 = PyTuple_New(7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = 0;
    __pyx_t_5 = 127;
    __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
    __pyx_t_4 += 44;
    __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
    PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__35, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_6, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_t_6);
    __pyx_t_6 = 0;
    __Pyx_INCREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    __pyx_t_4 += 28;
    __Pyx_GIVEREF(__pyx_kp_u_KHTML_like_Gecko_Chrome);
    PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_KHTML_like_Gecko_Chrome);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__36, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_6);
    __Pyx_INCREF(__pyx_int_1);
    __Pyx_GIVEREF(__pyx_int_1);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_1);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 3, __pyx_t_2);
    __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_uniform); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__37, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_2);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_6, 1, __pyx_int_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_6, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_6) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_1, 4, __pyx_t_6);
    __pyx_t_6 = 0;
    __Pyx_INCREF(__pyx_kp_u_Safari);
    __pyx_t_4 += 8;
    __Pyx_GIVEREF(__pyx_kp_u_Safari);
    PyTuple_SET_ITEM(__pyx_t_1, 5, __pyx_kp_u_Safari);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_random); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__38, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_6);
    PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_6);
    __Pyx_INCREF(__pyx_int_2);
    __Pyx_GIVEREF(__pyx_int_2);
    PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_int_2);
    __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyObject_Call(__pyx_builtin_round, __pyx_t_2, NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_t_6, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_5 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_5) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_5;
    __pyx_t_4 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
    __Pyx_GIVEREF(__pyx_t_2);
    PyTuple_SET_ITEM(__pyx_t_1, 6, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyUnicode_Join(__pyx_t_1, 7, __pyx_t_4, __pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 607, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = 0;
    goto __pyx_L0;
  }

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("utils.RandomUserAgent.linux", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_19android(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_19android = {"android", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_19android, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_19android(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("android (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "android") < 0)) __PYX_ERR(0, 609, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("android", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 609, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.android", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_18android(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_18android(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("android", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_choice); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyList_New(5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_n_u_samsung);
  __Pyx_GIVEREF(__pyx_n_u_samsung);
  PyList_SET_ITEM(__pyx_t_4, 0, __pyx_n_u_samsung);
  __Pyx_INCREF(__pyx_n_u_xiaomi);
  __Pyx_GIVEREF(__pyx_n_u_xiaomi);
  PyList_SET_ITEM(__pyx_t_4, 1, __pyx_n_u_xiaomi);
  __Pyx_INCREF(__pyx_n_u_oppo);
  __Pyx_GIVEREF(__pyx_n_u_oppo);
  PyList_SET_ITEM(__pyx_t_4, 2, __pyx_n_u_oppo);
  __Pyx_INCREF(__pyx_n_u_infinix);
  __Pyx_GIVEREF(__pyx_n_u_infinix);
  PyList_SET_ITEM(__pyx_t_4, 3, __pyx_n_u_infinix);
  __Pyx_INCREF(__pyx_n_u_vivo);
  __Pyx_GIVEREF(__pyx_n_u_vivo);
  PyList_SET_ITEM(__pyx_t_4, 4, __pyx_n_u_vivo);
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
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_GetAttr(__pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_3, __pyx_v_fb) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_fb);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 610, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
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
  __Pyx_AddTraceback("utils.RandomUserAgent.android", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_21mobile(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_21mobile = {"mobile", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_5utils_15RandomUserAgent_21mobile, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_21mobile(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fb = 0;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("mobile (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_fb,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)((PyObject *)Py_False));
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
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_fb);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "mobile") < 0)) __PYX_ERR(0, 612, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_fb = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("mobile", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 612, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("utils.RandomUserAgent.mobile", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_20mobile(__pyx_self, __pyx_v_fb);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_20mobile(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_fb) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("mobile", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 613, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 613, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_choice); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 613, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyList_New(6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 613, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_n_u_samsung);
  __Pyx_GIVEREF(__pyx_n_u_samsung);
  PyList_SET_ITEM(__pyx_t_4, 0, __pyx_n_u_samsung);
  __Pyx_INCREF(__pyx_n_u_xiaomi);
  __Pyx_GIVEREF(__pyx_n_u_xiaomi);
  PyList_SET_ITEM(__pyx_t_4, 1, __pyx_n_u_xiaomi);
  __Pyx_INCREF(__pyx_n_u_oppo);
  __Pyx_GIVEREF(__pyx_n_u_oppo);
  PyList_SET_ITEM(__pyx_t_4, 2, __pyx_n_u_oppo);
  __Pyx_INCREF(__pyx_n_u_infinix);
  __Pyx_GIVEREF(__pyx_n_u_infinix);
  PyList_SET_ITEM(__pyx_t_4, 3, __pyx_n_u_infinix);
  __Pyx_INCREF(__pyx_n_u_vivo);
  __Pyx_GIVEREF(__pyx_n_u_vivo);
  PyList_SET_ITEM(__pyx_t_4, 4, __pyx_n_u_vivo);
  __Pyx_INCREF(__pyx_n_u_iphone);
  __Pyx_GIVEREF(__pyx_n_u_iphone);
  PyList_SET_ITEM(__pyx_t_4, 5, __pyx_n_u_iphone);
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
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 613, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_GetAttr(__pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 613, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_3, __pyx_v_fb) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_v_fb);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 613, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
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
  __Pyx_AddTraceback("utils.RandomUserAgent.mobile", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_5utils_15RandomUserAgent_23desktop(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_5utils_15RandomUserAgent_23desktop = {"desktop", (PyCFunction)__pyx_pw_5utils_15RandomUserAgent_23desktop, METH_NOARGS, 0};
static PyObject *__pyx_pw_5utils_15RandomUserAgent_23desktop(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("desktop (wrapper)", 0);
  __pyx_r = __pyx_pf_5utils_15RandomUserAgent_22desktop(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5utils_15RandomUserAgent_22desktop(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("desktop", 0);

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 616, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 616, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_choice); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 616, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyList_New(3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 616, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_n_u_window);
  __Pyx_GIVEREF(__pyx_n_u_window);
  PyList_SET_ITEM(__pyx_t_4, 0, __pyx_n_u_window);
  __Pyx_INCREF(__pyx_n_u_linux);
  __Pyx_GIVEREF(__pyx_n_u_linux);
  PyList_SET_ITEM(__pyx_t_4, 1, __pyx_n_u_linux);
  __Pyx_INCREF(__pyx_n_u_macOS);
  __Pyx_GIVEREF(__pyx_n_u_macOS);
  PyList_SET_ITEM(__pyx_t_4, 2, __pyx_n_u_macOS);
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
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 616, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_GetAttr(__pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 616, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 616, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
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
  __Pyx_AddTraceback("utils.RandomUserAgent.desktop", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static struct __pyx_obj_5utils___pyx_scope_struct__get_duration *__pyx_freelist_5utils___pyx_scope_struct__get_duration[8];
static int __pyx_freecount_5utils___pyx_scope_struct__get_duration = 0;

static PyObject *__pyx_tp_new_5utils___pyx_scope_struct__get_duration(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  if (CYTHON_COMPILING_IN_CPYTHON && likely((__pyx_freecount_5utils___pyx_scope_struct__get_duration > 0) & (t->tp_basicsize == sizeof(struct __pyx_obj_5utils___pyx_scope_struct__get_duration)))) {
    o = (PyObject*)__pyx_freelist_5utils___pyx_scope_struct__get_duration[--__pyx_freecount_5utils___pyx_scope_struct__get_duration];
    memset(o, 0, sizeof(struct __pyx_obj_5utils___pyx_scope_struct__get_duration));
    (void) PyObject_INIT(o, t);
    PyObject_GC_Track(o);
  } else {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  return o;
}

static void __pyx_tp_dealloc_5utils___pyx_scope_struct__get_duration(PyObject *o) {
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *p = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *)o;
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_v_days);
  Py_CLEAR(p->__pyx_v_duration_in_s);
  Py_CLEAR(p->__pyx_v_hours);
  Py_CLEAR(p->__pyx_v_minutes);
  Py_CLEAR(p->__pyx_v_seconds);
  Py_CLEAR(p->__pyx_v_years);
  if (CYTHON_COMPILING_IN_CPYTHON && ((__pyx_freecount_5utils___pyx_scope_struct__get_duration < 8) & (Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_5utils___pyx_scope_struct__get_duration)))) {
    __pyx_freelist_5utils___pyx_scope_struct__get_duration[__pyx_freecount_5utils___pyx_scope_struct__get_duration++] = ((struct __pyx_obj_5utils___pyx_scope_struct__get_duration *)o);
  } else {
    (*Py_TYPE(o)->tp_free)(o);
  }
}

static int __pyx_tp_traverse_5utils___pyx_scope_struct__get_duration(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *p = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *)o;
  if (p->__pyx_v_days) {
    e = (*v)(p->__pyx_v_days, a); if (e) return e;
  }
  if (p->__pyx_v_duration_in_s) {
    e = (*v)(p->__pyx_v_duration_in_s, a); if (e) return e;
  }
  if (p->__pyx_v_hours) {
    e = (*v)(p->__pyx_v_hours, a); if (e) return e;
  }
  if (p->__pyx_v_minutes) {
    e = (*v)(p->__pyx_v_minutes, a); if (e) return e;
  }
  if (p->__pyx_v_seconds) {
    e = (*v)(p->__pyx_v_seconds, a); if (e) return e;
  }
  if (p->__pyx_v_years) {
    e = (*v)(p->__pyx_v_years, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_5utils___pyx_scope_struct__get_duration(PyObject *o) {
  PyObject* tmp;
  struct __pyx_obj_5utils___pyx_scope_struct__get_duration *p = (struct __pyx_obj_5utils___pyx_scope_struct__get_duration *)o;
  tmp = ((PyObject*)p->__pyx_v_days);
  p->__pyx_v_days = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  tmp = ((PyObject*)p->__pyx_v_duration_in_s);
  p->__pyx_v_duration_in_s = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  tmp = ((PyObject*)p->__pyx_v_hours);
  p->__pyx_v_hours = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  tmp = ((PyObject*)p->__pyx_v_minutes);
  p->__pyx_v_minutes = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  tmp = ((PyObject*)p->__pyx_v_seconds);
  p->__pyx_v_seconds = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  tmp = ((PyObject*)p->__pyx_v_years);
  p->__pyx_v_years = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  return 0;
}

static PyTypeObject __pyx_type_5utils___pyx_scope_struct__get_duration = {
  PyVarObject_HEAD_INIT(0, 0)
  "utils.__pyx_scope_struct__get_duration",  
  sizeof(struct __pyx_obj_5utils___pyx_scope_struct__get_duration),  
  0,  
  __pyx_tp_dealloc_5utils___pyx_scope_struct__get_duration,  
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
  __pyx_tp_traverse_5utils___pyx_scope_struct__get_duration,  
  __pyx_tp_clear_5utils___pyx_scope_struct__get_duration,  
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
  __pyx_tp_new_5utils___pyx_scope_struct__get_duration,  
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
static int __pyx_pymod_exec_utils(PyObject* module);  
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_utils},
  {0, NULL}
};
#endif

static struct PyModuleDef __pyx_moduledef = {
    PyModuleDef_HEAD_INIT,
    "utils",
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
  {&__pyx_kp_u_0_WOW64_AppleWebKit, __pyx_k_0_WOW64_AppleWebKit, sizeof(__pyx_k_0_WOW64_AppleWebKit), 0, 1, 0, 0},
  {&__pyx_kp_u_0_Win64_x64_AppleWebKit, __pyx_k_0_Win64_x64_AppleWebKit, sizeof(__pyx_k_0_Win64_x64_AppleWebKit), 0, 1, 0, 0},
  {&__pyx_kp_u_11A465, __pyx_k_11A465, sizeof(__pyx_k_11A465), 0, 1, 0, 0},
  {&__pyx_kp_u_15E148, __pyx_k_15E148, sizeof(__pyx_k_15E148), 0, 1, 0, 0},
  {&__pyx_kp_u_15G77, __pyx_k_15G77, sizeof(__pyx_k_15G77), 0, 1, 0, 0},
  {&__pyx_kp_u_16A366, __pyx_k_16A366, sizeof(__pyx_k_16A366), 0, 1, 0, 0},
  {&__pyx_kp_u_16B92, __pyx_k_16B92, sizeof(__pyx_k_16B92), 0, 1, 0, 0},
  {&__pyx_kp_u_16D39, __pyx_k_16D39, sizeof(__pyx_k_16D39), 0, 1, 0, 0},
  {&__pyx_n_u_A001OP, __pyx_k_A001OP, sizeof(__pyx_k_A001OP), 0, 1, 0, 1},
  {&__pyx_n_u_A002OP, __pyx_k_A002OP, sizeof(__pyx_k_A002OP), 0, 1, 0, 1},
  {&__pyx_kp_u_AppleWebKit, __pyx_k_AppleWebKit, sizeof(__pyx_k_AppleWebKit), 0, 1, 0, 0},
  {&__pyx_kp_u_AppleWebKit_2, __pyx_k_AppleWebKit_2, sizeof(__pyx_k_AppleWebKit_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Build, __pyx_k_Build, sizeof(__pyx_k_Build), 0, 1, 0, 0},
  {&__pyx_kp_u_Build_O11019_FBAN_Orca_Android, __pyx_k_Build_O11019_FBAN_Orca_Android, sizeof(__pyx_k_Build_O11019_FBAN_Orca_Android), 0, 1, 0, 0},
  {&__pyx_kp_u_Build_O11019_FBAN_Orca_Android_2, __pyx_k_Build_O11019_FBAN_Orca_Android_2, sizeof(__pyx_k_Build_O11019_FBAN_Orca_Android_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Build_OPM1, __pyx_k_Build_OPM1, sizeof(__pyx_k_Build_OPM1), 0, 1, 0, 0},
  {&__pyx_kp_u_Build_OPR1, __pyx_k_Build_OPR1, sizeof(__pyx_k_Build_OPR1), 0, 1, 0, 0},
  {&__pyx_kp_u_Build_PPR1, __pyx_k_Build_PPR1, sizeof(__pyx_k_Build_PPR1), 0, 1, 0, 0},
  {&__pyx_kp_u_Build_QKQ1, __pyx_k_Build_QKQ1, sizeof(__pyx_k_Build_QKQ1), 0, 1, 0, 0},
  {&__pyx_kp_u_Build_RP1A, __pyx_k_Build_RP1A, sizeof(__pyx_k_Build_RP1A), 0, 1, 0, 0},
  {&__pyx_n_u_CPH1701, __pyx_k_CPH1701, sizeof(__pyx_k_CPH1701), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1871, __pyx_k_CPH1871, sizeof(__pyx_k_CPH1871), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1875, __pyx_k_CPH1875, sizeof(__pyx_k_CPH1875), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1907, __pyx_k_CPH1907, sizeof(__pyx_k_CPH1907), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1917, __pyx_k_CPH1917, sizeof(__pyx_k_CPH1917), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1919, __pyx_k_CPH1919, sizeof(__pyx_k_CPH1919), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1921, __pyx_k_CPH1921, sizeof(__pyx_k_CPH1921), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1945, __pyx_k_CPH1945, sizeof(__pyx_k_CPH1945), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1951, __pyx_k_CPH1951, sizeof(__pyx_k_CPH1951), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1951RU, __pyx_k_CPH1951RU, sizeof(__pyx_k_CPH1951RU), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1955, __pyx_k_CPH1955, sizeof(__pyx_k_CPH1955), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1979, __pyx_k_CPH1979, sizeof(__pyx_k_CPH1979), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1983, __pyx_k_CPH1983, sizeof(__pyx_k_CPH1983), 0, 1, 0, 1},
  {&__pyx_n_u_CPH1989, __pyx_k_CPH1989, sizeof(__pyx_k_CPH1989), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2005, __pyx_k_CPH2005, sizeof(__pyx_k_CPH2005), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2009, __pyx_k_CPH2009, sizeof(__pyx_k_CPH2009), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2013, __pyx_k_CPH2013, sizeof(__pyx_k_CPH2013), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2023, __pyx_k_CPH2023, sizeof(__pyx_k_CPH2023), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2025, __pyx_k_CPH2025, sizeof(__pyx_k_CPH2025), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2035, __pyx_k_CPH2035, sizeof(__pyx_k_CPH2035), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2036, __pyx_k_CPH2036, sizeof(__pyx_k_CPH2036), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2037, __pyx_k_CPH2037, sizeof(__pyx_k_CPH2037), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2043, __pyx_k_CPH2043, sizeof(__pyx_k_CPH2043), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2089, __pyx_k_CPH2089, sizeof(__pyx_k_CPH2089), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2091, __pyx_k_CPH2091, sizeof(__pyx_k_CPH2091), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2119, __pyx_k_CPH2119, sizeof(__pyx_k_CPH2119), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2121, __pyx_k_CPH2121, sizeof(__pyx_k_CPH2121), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2125, __pyx_k_CPH2125, sizeof(__pyx_k_CPH2125), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2127, __pyx_k_CPH2127, sizeof(__pyx_k_CPH2127), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2135, __pyx_k_CPH2135, sizeof(__pyx_k_CPH2135), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2145, __pyx_k_CPH2145, sizeof(__pyx_k_CPH2145), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2173, __pyx_k_CPH2173, sizeof(__pyx_k_CPH2173), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2207, __pyx_k_CPH2207, sizeof(__pyx_k_CPH2207), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2273, __pyx_k_CPH2273, sizeof(__pyx_k_CPH2273), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2305, __pyx_k_CPH2305, sizeof(__pyx_k_CPH2305), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2307, __pyx_k_CPH2307, sizeof(__pyx_k_CPH2307), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2309, __pyx_k_CPH2309, sizeof(__pyx_k_CPH2309), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2325, __pyx_k_CPH2325, sizeof(__pyx_k_CPH2325), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2343, __pyx_k_CPH2343, sizeof(__pyx_k_CPH2343), 0, 1, 0, 1},
  {&__pyx_n_u_CPH237, __pyx_k_CPH237, sizeof(__pyx_k_CPH237), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2373, __pyx_k_CPH2373, sizeof(__pyx_k_CPH2373), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2437, __pyx_k_CPH2437, sizeof(__pyx_k_CPH2437), 0, 1, 0, 1},
  {&__pyx_n_u_CPH2439, __pyx_k_CPH2439, sizeof(__pyx_k_CPH2439), 0, 1, 0, 1},
  {&__pyx_kp_u_Chrome, __pyx_k_Chrome, sizeof(__pyx_k_Chrome), 0, 1, 0, 0},
  {&__pyx_kp_u_Dalvik_2_1_0_Linux_Android, __pyx_k_Dalvik_2_1_0_Linux_Android, sizeof(__pyx_k_Dalvik_2_1_0_Linux_Android), 0, 1, 0, 0},
  {&__pyx_kp_u_FBAN_MessengerForiOS_FBDV_iPhon, __pyx_k_FBAN_MessengerForiOS_FBDV_iPhon, sizeof(__pyx_k_FBAN_MessengerForiOS_FBDV_iPhon), 0, 1, 0, 0},
  {&__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0, __pyx_k_FBAN_Orca_Android_FBAV_241_0_0, sizeof(__pyx_k_FBAN_Orca_Android_FBAV_241_0_0), 0, 1, 0, 0},
  {&__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_2, __pyx_k_FBAN_Orca_Android_FBAV_241_0_0_2, sizeof(__pyx_k_FBAN_Orca_Android_FBAV_241_0_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_FBAN_Orca_Android_FBAV_241_0_0_3, __pyx_k_FBAN_Orca_Android_FBAV_241_0_0_3, sizeof(__pyx_k_FBAN_Orca_Android_FBAV_241_0_0_3), 0, 1, 0, 0},
  {&__pyx_kp_u_FBCA_armeabi_v7a_armeabi_FBDM, __pyx_k_FBCA_armeabi_v7a_armeabi_FBDM, sizeof(__pyx_k_FBCA_armeabi_v7a_armeabi_FBDM), 0, 1, 0, 0},
  {&__pyx_kp_u_FBMD_iPhone_FBSN_iOS_FBSV, __pyx_k_FBMD_iPhone_FBSN_iOS_FBSV, sizeof(__pyx_k_FBMD_iPhone_FBSN_iOS_FBSV), 0, 1, 0, 0},
  {&__pyx_kp_u_FBSS_2_FBID_phone_FBLC_en_US_FB, __pyx_k_FBSS_2_FBID_phone_FBLC_en_US_FB, sizeof(__pyx_k_FBSS_2_FBID_phone_FBLC_en_US_FB), 0, 1, 0, 0},
  {&__pyx_kp_u_FBSV, __pyx_k_FBSV, sizeof(__pyx_k_FBSV), 0, 1, 0, 0},
  {&__pyx_kp_u_FB_FW_1_FBBK_1, __pyx_k_FB_FW_1_FBBK_1, sizeof(__pyx_k_FB_FW_1_FBBK_1), 0, 1, 0, 0},
  {&__pyx_kp_u_F_A500ZKU16_01, __pyx_k_F_A500ZKU16_01, sizeof(__pyx_k_F_A500ZKU16_01), 0, 1, 0, 0},
  {&__pyx_kp_u_F_A700ZKA32_01, __pyx_k_F_A700ZKA32_01, sizeof(__pyx_k_F_A700ZKA32_01), 0, 1, 0, 0},
  {&__pyx_kp_u_GT_I9100P, __pyx_k_GT_I9100P, sizeof(__pyx_k_GT_I9100P), 0, 1, 0, 0},
  {&__pyx_kp_u_GT_S7275UWNXEF, __pyx_k_GT_S7275UWNXEF, sizeof(__pyx_k_GT_S7275UWNXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_10i, __pyx_k_HOT_10i, sizeof(__pyx_k_HOT_10i), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_10s, __pyx_k_HOT_10s, sizeof(__pyx_k_HOT_10s), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_11_Play, __pyx_k_HOT_11_Play, sizeof(__pyx_k_HOT_11_Play), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_11s, __pyx_k_HOT_11s, sizeof(__pyx_k_HOT_11s), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_12_Play, __pyx_k_HOT_12_Play, sizeof(__pyx_k_HOT_12_Play), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_20S, __pyx_k_HOT_20S, sizeof(__pyx_k_HOT_20S), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_20_5G, __pyx_k_HOT_20_5G, sizeof(__pyx_k_HOT_20_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_20_Play, __pyx_k_HOT_20_Play, sizeof(__pyx_k_HOT_20_Play), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_20_Pro, __pyx_k_HOT_20_Pro, sizeof(__pyx_k_HOT_20_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_20i, __pyx_k_HOT_20i, sizeof(__pyx_k_HOT_20i), 0, 1, 0, 0},
  {&__pyx_kp_u_HOT_4_Pro, __pyx_k_HOT_4_Pro, sizeof(__pyx_k_HOT_4_Pro), 0, 1, 0, 0},
  {&__pyx_n_s_INFINIX, __pyx_k_INFINIX, sizeof(__pyx_k_INFINIX), 0, 0, 1, 1},
  {&__pyx_kp_u_Infinix, __pyx_k_Infinix, sizeof(__pyx_k_Infinix), 0, 1, 0, 0},
  {&__pyx_n_u_JDQ39, __pyx_k_JDQ39, sizeof(__pyx_k_JDQ39), 0, 1, 0, 1},
  {&__pyx_kp_u_KHTML_like_Gecko_Chrome, __pyx_k_KHTML_like_Gecko_Chrome, sizeof(__pyx_k_KHTML_like_Gecko_Chrome), 0, 1, 0, 0},
  {&__pyx_kp_u_KHTML_like_Gecko_CriOS, __pyx_k_KHTML_like_Gecko_CriOS, sizeof(__pyx_k_KHTML_like_Gecko_CriOS), 0, 1, 0, 0},
  {&__pyx_kp_u_KHTML_like_Gecko_Mobile, __pyx_k_KHTML_like_Gecko_Mobile, sizeof(__pyx_k_KHTML_like_Gecko_Mobile), 0, 1, 0, 0},
  {&__pyx_kp_u_KHTML_like_Gecko_SamsungBrowser, __pyx_k_KHTML_like_Gecko_SamsungBrowser, sizeof(__pyx_k_KHTML_like_Gecko_SamsungBrowser), 0, 1, 0, 0},
  {&__pyx_kp_u_KHTML_like_Gecko_Ubuntu_Chromiu, __pyx_k_KHTML_like_Gecko_Ubuntu_Chromiu, sizeof(__pyx_k_KHTML_like_Gecko_Ubuntu_Chromiu), 0, 1, 0, 0},
  {&__pyx_kp_u_KHTML_like_Gecko_Version_4_0_Ch, __pyx_k_KHTML_like_Gecko_Version_4_0_Ch, sizeof(__pyx_k_KHTML_like_Gecko_Version_4_0_Ch), 0, 1, 0, 0},
  {&__pyx_n_u_KTU84P, __pyx_k_KTU84P, sizeof(__pyx_k_KTU84P), 0, 1, 0, 1},
  {&__pyx_n_s_LIST_USER_AGENT, __pyx_k_LIST_USER_AGENT, sizeof(__pyx_k_LIST_USER_AGENT), 0, 0, 1, 1},
  {&__pyx_n_u_LMY47I, __pyx_k_LMY47I, sizeof(__pyx_k_LMY47I), 0, 1, 0, 1},
  {&__pyx_n_u_MIX2S, __pyx_k_MIX2S, sizeof(__pyx_k_MIX2S), 0, 1, 0, 1},
  {&__pyx_n_u_MIX3, __pyx_k_MIX3, sizeof(__pyx_k_MIX3), 0, 1, 0, 1},
  {&__pyx_kp_u_MI_10, __pyx_k_MI_10, sizeof(__pyx_k_MI_10), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_10S, __pyx_k_MI_10S, sizeof(__pyx_k_MI_10S), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_10_Lite_5G, __pyx_k_MI_10_Lite_5G, sizeof(__pyx_k_MI_10_Lite_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_10_Pro, __pyx_k_MI_10_Pro, sizeof(__pyx_k_MI_10_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_10_Ultra, __pyx_k_MI_10_Ultra, sizeof(__pyx_k_MI_10_Ultra), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_11, __pyx_k_MI_11, sizeof(__pyx_k_MI_11), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_11_Lite, __pyx_k_MI_11_Lite, sizeof(__pyx_k_MI_11_Lite), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_11_Pro, __pyx_k_MI_11_Pro, sizeof(__pyx_k_MI_11_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_11_Ultra, __pyx_k_MI_11_Ultra, sizeof(__pyx_k_MI_11_Ultra), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_3, __pyx_k_MI_3, sizeof(__pyx_k_MI_3), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_4, __pyx_k_MI_4, sizeof(__pyx_k_MI_4), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_4i, __pyx_k_MI_4i, sizeof(__pyx_k_MI_4i), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_8MI_9, __pyx_k_MI_8MI_9, sizeof(__pyx_k_MI_8MI_9), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_8_SE, __pyx_k_MI_8_SE, sizeof(__pyx_k_MI_8_SE), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_9_Pro_5G, __pyx_k_MI_9_Pro_5G, sizeof(__pyx_k_MI_9_Pro_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_A1, __pyx_k_MI_A1, sizeof(__pyx_k_MI_A1), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_A2_lite, __pyx_k_MI_A2_lite, sizeof(__pyx_k_MI_A2_lite), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_CC9_Pro, __pyx_k_MI_CC9_Pro, sizeof(__pyx_k_MI_CC9_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_MIX_3_5G, __pyx_k_MI_MIX_3_5G, sizeof(__pyx_k_MI_MIX_3_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_Pad_3, __pyx_k_MI_Pad_3, sizeof(__pyx_k_MI_Pad_3), 0, 1, 0, 0},
  {&__pyx_kp_u_MI_Pad_4, __pyx_k_MI_Pad_4, sizeof(__pyx_k_MI_Pad_4), 0, 1, 0, 0},
  {&__pyx_n_u_MMB29M, __pyx_k_MMB29M, sizeof(__pyx_k_MMB29M), 0, 1, 0, 1},
  {&__pyx_n_u_MRA58K, __pyx_k_MRA58K, sizeof(__pyx_k_MRA58K), 0, 1, 0, 1},
  {&__pyx_kp_u_Mobile, __pyx_k_Mobile, sizeof(__pyx_k_Mobile), 0, 1, 0, 0},
  {&__pyx_kp_u_Mobile_Safari, __pyx_k_Mobile_Safari, sizeof(__pyx_k_Mobile_Safari), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Linux_Android, __pyx_k_Mozilla_5_0_Linux_Android, sizeof(__pyx_k_Mozilla_5_0_Linux_Android), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Macintosh_Intel_Mac, __pyx_k_Mozilla_5_0_Macintosh_Intel_Mac, sizeof(__pyx_k_Mozilla_5_0_Macintosh_Intel_Mac), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_Windows_NT, __pyx_k_Mozilla_5_0_Windows_NT, sizeof(__pyx_k_Mozilla_5_0_Windows_NT), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_iPad_CPU_iPhone_OS, __pyx_k_Mozilla_5_0_iPad_CPU_iPhone_OS, sizeof(__pyx_k_Mozilla_5_0_iPad_CPU_iPhone_OS), 0, 1, 0, 0},
  {&__pyx_kp_u_Mozilla_5_0_iPhone_CPU_iPhone_OS, __pyx_k_Mozilla_5_0_iPhone_CPU_iPhone_OS, sizeof(__pyx_k_Mozilla_5_0_iPhone_CPU_iPhone_OS), 0, 1, 0, 0},
  {&__pyx_n_u_NRD90M, __pyx_k_NRD90M, sizeof(__pyx_k_NRD90M), 0, 1, 0, 1},
  {&__pyx_kp_u_Note_10, __pyx_k_Note_10, sizeof(__pyx_k_Note_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Note_11_Pro, __pyx_k_Note_11_Pro, sizeof(__pyx_k_Note_11_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Note_12_G96, __pyx_k_Note_12_G96, sizeof(__pyx_k_Note_12_G96), 0, 1, 0, 0},
  {&__pyx_kp_u_Note_12_Pro, __pyx_k_Note_12_Pro, sizeof(__pyx_k_Note_12_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Note_12_Pro_5G, __pyx_k_Note_12_Pro_5G, sizeof(__pyx_k_Note_12_Pro_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_Note_12i, __pyx_k_Note_12i, sizeof(__pyx_k_Note_12i), 0, 1, 0, 0},
  {&__pyx_n_u_O11019, __pyx_k_O11019, sizeof(__pyx_k_O11019), 0, 1, 0, 1},
  {&__pyx_n_u_OPG01, __pyx_k_OPG01, sizeof(__pyx_k_OPG01), 0, 1, 0, 1},
  {&__pyx_n_u_OPG03, __pyx_k_OPG03, sizeof(__pyx_k_OPG03), 0, 1, 0, 1},
  {&__pyx_n_s_OPPO, __pyx_k_OPPO, sizeof(__pyx_k_OPPO), 0, 0, 1, 1},
  {&__pyx_kp_u_OPPO_2, __pyx_k_OPPO_2, sizeof(__pyx_k_OPPO_2), 0, 1, 0, 0},
  {&__pyx_kp_u_OppoBrowser, __pyx_k_OppoBrowser, sizeof(__pyx_k_OppoBrowser), 0, 1, 0, 0},
  {&__pyx_kp_u_PHX, __pyx_k_PHX, sizeof(__pyx_k_PHX), 0, 1, 0, 0},
  {&__pyx_n_s_PIPE, __pyx_k_PIPE, sizeof(__pyx_k_PIPE), 0, 0, 1, 1},
  {&__pyx_kp_u_POCOPHONE_F1, __pyx_k_POCOPHONE_F1, sizeof(__pyx_k_POCOPHONE_F1), 0, 1, 0, 0},
  {&__pyx_kp_u_POCO_C55, __pyx_k_POCO_C55, sizeof(__pyx_k_POCO_C55), 0, 1, 0, 0},
  {&__pyx_n_s_Path, __pyx_k_Path, sizeof(__pyx_k_Path), 0, 0, 1, 1},
  {&__pyx_n_s_Popen, __pyx_k_Popen, sizeof(__pyx_k_Popen), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent, __pyx_k_RandomUserAgent, sizeof(__pyx_k_RandomUserAgent), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_android, __pyx_k_RandomUserAgent_android, sizeof(__pyx_k_RandomUserAgent_android), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_desktop, __pyx_k_RandomUserAgent_desktop, sizeof(__pyx_k_RandomUserAgent_desktop), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_infinix, __pyx_k_RandomUserAgent_infinix, sizeof(__pyx_k_RandomUserAgent_infinix), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_iphone, __pyx_k_RandomUserAgent_iphone, sizeof(__pyx_k_RandomUserAgent_iphone), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_linux, __pyx_k_RandomUserAgent_linux, sizeof(__pyx_k_RandomUserAgent_linux), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_macOS, __pyx_k_RandomUserAgent_macOS, sizeof(__pyx_k_RandomUserAgent_macOS), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_mobile, __pyx_k_RandomUserAgent_mobile, sizeof(__pyx_k_RandomUserAgent_mobile), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_oppo, __pyx_k_RandomUserAgent_oppo, sizeof(__pyx_k_RandomUserAgent_oppo), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_samsung, __pyx_k_RandomUserAgent_samsung, sizeof(__pyx_k_RandomUserAgent_samsung), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_vivo, __pyx_k_RandomUserAgent_vivo, sizeof(__pyx_k_RandomUserAgent_vivo), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_window, __pyx_k_RandomUserAgent_window, sizeof(__pyx_k_RandomUserAgent_window), 0, 0, 1, 1},
  {&__pyx_n_s_RandomUserAgent_xiaomi, __pyx_k_RandomUserAgent_xiaomi, sizeof(__pyx_k_RandomUserAgent_xiaomi), 0, 0, 1, 1},
  {&__pyx_kp_u_Redmi_10X, __pyx_k_Redmi_10X, sizeof(__pyx_k_Redmi_10X), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_10X_Pro, __pyx_k_Redmi_10X_Pro, sizeof(__pyx_k_Redmi_10X_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_1S, __pyx_k_Redmi_1S, sizeof(__pyx_k_Redmi_1S), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_5_Plus, __pyx_k_Redmi_5_Plus, sizeof(__pyx_k_Redmi_5_Plus), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_6, __pyx_k_Redmi_6, sizeof(__pyx_k_Redmi_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_6A, __pyx_k_Redmi_6A, sizeof(__pyx_k_Redmi_6A), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_9A, __pyx_k_Redmi_9A, sizeof(__pyx_k_Redmi_9A), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_9C, __pyx_k_Redmi_9C, sizeof(__pyx_k_Redmi_9C), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K20_Pro, __pyx_k_Redmi_K20_Pro, sizeof(__pyx_k_Redmi_K20_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K20_Ultra, __pyx_k_Redmi_K20_Ultra, sizeof(__pyx_k_Redmi_K20_Ultra), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K30S_Ultra, __pyx_k_Redmi_K30S_Ultra, sizeof(__pyx_k_Redmi_K30S_Ultra), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K30_Pro, __pyx_k_Redmi_K30_Pro, sizeof(__pyx_k_Redmi_K30_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K30_Ultra, __pyx_k_Redmi_K30_Ultra, sizeof(__pyx_k_Redmi_K30_Ultra), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K40, __pyx_k_Redmi_K40, sizeof(__pyx_k_Redmi_K40), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K40_Gaming, __pyx_k_Redmi_K40_Gaming, sizeof(__pyx_k_Redmi_K40_Gaming), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K50_Pro, __pyx_k_Redmi_K50_Pro, sizeof(__pyx_k_Redmi_K50_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_K60_Pro, __pyx_k_Redmi_K60_Pro, sizeof(__pyx_k_Redmi_K60_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_10, __pyx_k_Redmi_Note_10, sizeof(__pyx_k_Redmi_Note_10), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_10_Pro, __pyx_k_Redmi_Note_10_Pro, sizeof(__pyx_k_Redmi_Note_10_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_11T_Pro, __pyx_k_Redmi_Note_11T_Pro, sizeof(__pyx_k_Redmi_Note_11T_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_4, __pyx_k_Redmi_Note_4, sizeof(__pyx_k_Redmi_Note_4), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_4_Pro, __pyx_k_Redmi_Note_4_Pro, sizeof(__pyx_k_Redmi_Note_4_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_7, __pyx_k_Redmi_Note_7, sizeof(__pyx_k_Redmi_Note_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_7_Pro, __pyx_k_Redmi_Note_7_Pro, sizeof(__pyx_k_Redmi_Note_7_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_8, __pyx_k_Redmi_Note_8, sizeof(__pyx_k_Redmi_Note_8), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_8_Pro, __pyx_k_Redmi_Note_8_Pro, sizeof(__pyx_k_Redmi_Note_8_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_9, __pyx_k_Redmi_Note_9, sizeof(__pyx_k_Redmi_Note_9), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_9_Pro, __pyx_k_Redmi_Note_9_Pro, sizeof(__pyx_k_Redmi_Note_9_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_Note_9_Pro_Max, __pyx_k_Redmi_Note_9_Pro_Max, sizeof(__pyx_k_Redmi_Note_9_Pro_Max), 0, 1, 0, 0},
  {&__pyx_kp_u_Redmi_POCO_C3, __pyx_k_Redmi_POCO_C3, sizeof(__pyx_k_Redmi_POCO_C3), 0, 1, 0, 0},
  {&__pyx_n_s_SAMSUNG, __pyx_k_SAMSUNG, sizeof(__pyx_k_SAMSUNG), 0, 0, 1, 1},
  {&__pyx_kp_u_SAMSUNG_2, __pyx_k_SAMSUNG_2, sizeof(__pyx_k_SAMSUNG_2), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I435ZKAVZW, __pyx_k_SCH_I435ZKAVZW, sizeof(__pyx_k_SCH_I435ZKAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I435ZKAXAR, __pyx_k_SCH_I435ZKAXAR, sizeof(__pyx_k_SCH_I435ZKAXAR), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I535MBPVZW, __pyx_k_SCH_I535MBPVZW, sizeof(__pyx_k_SCH_I535MBPVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I535ZKBVZW, __pyx_k_SCH_I535ZKBVZW, sizeof(__pyx_k_SCH_I535ZKBVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I545ZBAVZW, __pyx_k_SCH_I545ZBAVZW, sizeof(__pyx_k_SCH_I545ZBAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I545ZKALRA, __pyx_k_SCH_I545ZKALRA, sizeof(__pyx_k_SCH_I545ZKALRA), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I545ZWAVZW, __pyx_k_SCH_I545ZWAVZW, sizeof(__pyx_k_SCH_I545ZWAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I545ZWBVZW, __pyx_k_SCH_I545ZWBVZW, sizeof(__pyx_k_SCH_I545ZWBVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I605TSAVZW, __pyx_k_SCH_I605TSAVZW, sizeof(__pyx_k_SCH_I605TSAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_I930MSAVZW, __pyx_k_SCH_I930MSAVZW, sizeof(__pyx_k_SCH_I930MSAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_R860MSAUSC, __pyx_k_SCH_R860MSAUSC, sizeof(__pyx_k_SCH_R860MSAUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_R890ZKAUSC, __pyx_k_SCH_R890ZKAUSC, sizeof(__pyx_k_SCH_R890ZKAUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_R960ZKAUSC, __pyx_k_SCH_R960ZKAUSC, sizeof(__pyx_k_SCH_R960ZKAUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_R970ZWACSP, __pyx_k_SCH_R970ZWACSP, sizeof(__pyx_k_SCH_R970ZWACSP), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_R970ZWAUSC, __pyx_k_SCH_R970ZWAUSC, sizeof(__pyx_k_SCH_R970ZWAUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SCH_S960RWBTFN, __pyx_k_SCH_S960RWBTFN, sizeof(__pyx_k_SCH_S960RWBTFN), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I187XBAATT, __pyx_k_SGH_I187XBAATT, sizeof(__pyx_k_SGH_I187XBAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I257AIAATT, __pyx_k_SGH_I257AIAATT, sizeof(__pyx_k_SGH_I257AIAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I257ZKAATT, __pyx_k_SGH_I257ZKAATT, sizeof(__pyx_k_SGH_I257ZKAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I317TSAATT, __pyx_k_SGH_I317TSAATT, sizeof(__pyx_k_SGH_I317TSAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I337ZKZAIO, __pyx_k_SGH_I337ZKZAIO, sizeof(__pyx_k_SGH_I337ZKZAIO), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I337ZRAATT, __pyx_k_SGH_I337ZRAATT, sizeof(__pyx_k_SGH_I337ZRAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I527ZKBATT, __pyx_k_SGH_I527ZKBATT, sizeof(__pyx_k_SGH_I527ZKBATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I537ZAAATT, __pyx_k_SGH_I537ZAAATT, sizeof(__pyx_k_SGH_I537ZAAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_I747MBBATT, __pyx_k_SGH_I747MBBATT, sizeof(__pyx_k_SGH_I747MBBATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_M819ZKATMB, __pyx_k_SGH_M819ZKATMB, sizeof(__pyx_k_SGH_M819ZKATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_M919RWATMB, __pyx_k_SGH_M919RWATMB, sizeof(__pyx_k_SGH_M919RWATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_M919ZWATMB, __pyx_k_SGH_M919ZWATMB, sizeof(__pyx_k_SGH_M919ZWATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_T399DNATMB, __pyx_k_SGH_T399DNATMB, sizeof(__pyx_k_SGH_T399DNATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_T889TSATMB, __pyx_k_SGH_T889TSATMB, sizeof(__pyx_k_SGH_T889TSATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_T999MBATMB, __pyx_k_SGH_T999MBATMB, sizeof(__pyx_k_SGH_T999MBATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SGH_T999ZWATMB, __pyx_k_SGH_T999ZWATMB, sizeof(__pyx_k_SGH_T999ZWATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_A300FZKUXEF, __pyx_k_SM_A300FZKUXEF, sizeof(__pyx_k_SM_A300FZKUXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_A505F, __pyx_k_SM_A505F, sizeof(__pyx_k_SM_A505F), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_A805F, __pyx_k_SM_A805F, sizeof(__pyx_k_SM_A805F), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_C105AZWAATT, __pyx_k_SM_C105AZWAATT, sizeof(__pyx_k_SM_C105AZWAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_F900U, __pyx_k_SM_F900U, sizeof(__pyx_k_SM_F900U), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G3500ZKAXEF, __pyx_k_SM_G3500ZKAXEF, sizeof(__pyx_k_SM_G3500ZKAXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G357FZWZXEF, __pyx_k_SM_G357FZWZXEF, sizeof(__pyx_k_SM_G357FZWZXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G360FZSAXEF, __pyx_k_SM_G360FZSAXEF, sizeof(__pyx_k_SM_G360FZSAXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G386FZKAXEF, __pyx_k_SM_G386FZKAXEF, sizeof(__pyx_k_SM_G386FZKAXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G386TRKATMB, __pyx_k_SM_G386TRKATMB, sizeof(__pyx_k_SM_G386TRKATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G386TZKATMB, __pyx_k_SM_G386TZKATMB, sizeof(__pyx_k_SM_G386TZKATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G388FDSAXEF, __pyx_k_SM_G388FDSAXEF, sizeof(__pyx_k_SM_G388FDSAXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G530AZWZAIO, __pyx_k_SM_G530AZWZAIO, sizeof(__pyx_k_SM_G530AZWZAIO), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G530PZAASPR, __pyx_k_SM_G530PZAASPR, sizeof(__pyx_k_SM_G530PZAASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G530RZWAUSC, __pyx_k_SM_G530RZWAUSC, sizeof(__pyx_k_SM_G530RZWAUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G530TZAATMB, __pyx_k_SM_G530TZAATMB, sizeof(__pyx_k_SM_G530TZAATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G730AMBAATT, __pyx_k_SM_G730AMBAATT, sizeof(__pyx_k_SM_G730AMBAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G730VMBAVZW, __pyx_k_SM_G730VMBAVZW, sizeof(__pyx_k_SM_G730VMBAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G750ANKAATT, __pyx_k_SM_G750ANKAATT, sizeof(__pyx_k_SM_G750ANKAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G800FZKAXEF, __pyx_k_SM_G800FZKAXEF, sizeof(__pyx_k_SM_G800FZKAXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G850FHSEXEF, __pyx_k_SM_G850FHSEXEF, sizeof(__pyx_k_SM_G850FHSEXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900AZDAATT, __pyx_k_SM_G900AZDAATT, sizeof(__pyx_k_SM_G900AZDAATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900AZKZAIO, __pyx_k_SM_G900AZKZAIO, sizeof(__pyx_k_SM_G900AZKZAIO), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900PZDASPR, __pyx_k_SM_G900PZDASPR, sizeof(__pyx_k_SM_G900PZDASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900PZWABST, __pyx_k_SM_G900PZWABST, sizeof(__pyx_k_SM_G900PZWABST), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900PZWAVMU, __pyx_k_SM_G900PZWAVMU, sizeof(__pyx_k_SM_G900PZWAVMU), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900PZWEVMU, __pyx_k_SM_G900PZWEVMU, sizeof(__pyx_k_SM_G900PZWEVMU), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900RZDAUSC, __pyx_k_SM_G900RZDAUSC, sizeof(__pyx_k_SM_G900RZDAUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900TRKATMB, __pyx_k_SM_G900TRKATMB, sizeof(__pyx_k_SM_G900TRKATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900TZDATMB, __pyx_k_SM_G900TZDATMB, sizeof(__pyx_k_SM_G900TZDATMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G900VZDAVZW, __pyx_k_SM_G900VZDAVZW, sizeof(__pyx_k_SM_G900VZDAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G920FZKAXEF, __pyx_k_SM_G920FZKAXEF, sizeof(__pyx_k_SM_G920FZKAXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G925FZKAXEF, __pyx_k_SM_G925FZKAXEF, sizeof(__pyx_k_SM_G925FZKAXEF), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G970F, __pyx_k_SM_G970F, sizeof(__pyx_k_SM_G970F), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G975F, __pyx_k_SM_G975F, sizeof(__pyx_k_SM_G975F), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G977N, __pyx_k_SM_G977N, sizeof(__pyx_k_SM_G977N), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_G981B, __pyx_k_SM_G981B, sizeof(__pyx_k_SM_G981B), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N900AZKEATT, __pyx_k_SM_N900AZKEATT, sizeof(__pyx_k_SM_N900AZKEATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N900PZKESPR, __pyx_k_SM_N900PZKESPR, sizeof(__pyx_k_SM_N900PZKESPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N900TZKETMB, __pyx_k_SM_N900TZKETMB, sizeof(__pyx_k_SM_N900TZKETMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N900VWDEVZW, __pyx_k_SM_N900VWDEVZW, sizeof(__pyx_k_SM_N900VWDEVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N900VZKEVZW, __pyx_k_SM_N900VZKEVZW, sizeof(__pyx_k_SM_N900VZKEVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N910AZKEATT, __pyx_k_SM_N910AZKEATT, sizeof(__pyx_k_SM_N910AZKEATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N910PZKESPR, __pyx_k_SM_N910PZKESPR, sizeof(__pyx_k_SM_N910PZKESPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N910RZKEUSC, __pyx_k_SM_N910RZKEUSC, sizeof(__pyx_k_SM_N910RZKEUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N910TZKETMB, __pyx_k_SM_N910TZKETMB, sizeof(__pyx_k_SM_N910TZKETMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N910VZKEVZW, __pyx_k_SM_N910VZKEVZW, sizeof(__pyx_k_SM_N910VZKEVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N915AZKEATT, __pyx_k_SM_N915AZKEATT, sizeof(__pyx_k_SM_N915AZKEATT), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N915PZKESPR, __pyx_k_SM_N915PZKESPR, sizeof(__pyx_k_SM_N915PZKESPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N915RZKEUSC, __pyx_k_SM_N915RZKEUSC, sizeof(__pyx_k_SM_N915RZKEUSC), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N915TZKETMB, __pyx_k_SM_N915TZKETMB, sizeof(__pyx_k_SM_N915TZKETMB), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N915VZKEVZW, __pyx_k_SM_N915VZKEVZW, sizeof(__pyx_k_SM_N915VZKEVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_N976V, __pyx_k_SM_N976V, sizeof(__pyx_k_SM_N976V), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_S890LZKATFN, __pyx_k_SM_S890LZKATFN, sizeof(__pyx_k_SM_S890LZKATFN), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_S902LZKATFN, __pyx_k_SM_S902LZKATFN, sizeof(__pyx_k_SM_S902LZKATFN), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_S975LZKATFN, __pyx_k_SM_S975LZKATFN, sizeof(__pyx_k_SM_S975LZKATFN), 0, 1, 0, 0},
  {&__pyx_kp_u_SM_W750VMSAVZW, __pyx_k_SM_W750VMSAVZW, sizeof(__pyx_k_SM_W750VMSAVZW), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_I800HNASPR, __pyx_k_SPH_I800HNASPR, sizeof(__pyx_k_SPH_I800HNASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L300ZSAVMU, __pyx_k_SPH_L300ZSAVMU, sizeof(__pyx_k_SPH_L300ZSAVMU), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L520ZKASPR, __pyx_k_SPH_L520ZKASPR, sizeof(__pyx_k_SPH_L520ZKASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L520ZKPSPR, __pyx_k_SPH_L520ZKPSPR, sizeof(__pyx_k_SPH_L520ZKPSPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L600ZKASPR, __pyx_k_SPH_L600ZKASPR, sizeof(__pyx_k_SPH_L600ZKASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L710MBBSPR, __pyx_k_SPH_L710MBBSPR, sizeof(__pyx_k_SPH_L710MBBSPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L710RWBBST, __pyx_k_SPH_L710RWBBST, sizeof(__pyx_k_SPH_L710RWBBST), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L710RWBVMU, __pyx_k_SPH_L710RWBVMU, sizeof(__pyx_k_SPH_L710RWBVMU), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L720ZBASPR, __pyx_k_SPH_L720ZBASPR, sizeof(__pyx_k_SPH_L720ZBASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L720ZPASPR, __pyx_k_SPH_L720ZPASPR, sizeof(__pyx_k_SPH_L720ZPASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L720ZWRBST, __pyx_k_SPH_L720ZWRBST, sizeof(__pyx_k_SPH_L720ZWRBST), 0, 1, 0, 0},
  {&__pyx_kp_u_SPH_L900TSASPR, __pyx_k_SPH_L900TSASPR, sizeof(__pyx_k_SPH_L900TSASPR), 0, 1, 0, 0},
  {&__pyx_kp_u_Safari, __pyx_k_Safari, sizeof(__pyx_k_Safari), 0, 1, 0, 0},
  {&__pyx_kp_u_Smart_6, __pyx_k_Smart_6, sizeof(__pyx_k_Smart_6), 0, 1, 0, 0},
  {&__pyx_kp_u_Smart_6_PlusZero_Ultra, __pyx_k_Smart_6_PlusZero_Ultra, sizeof(__pyx_k_Smart_6_PlusZero_Ultra), 0, 1, 0, 0},
  {&__pyx_kp_u_Smart_7, __pyx_k_Smart_7, sizeof(__pyx_k_Smart_7), 0, 1, 0, 0},
  {&__pyx_kp_u_Time_between_dates_years_days_ho, __pyx_k_Time_between_dates_years_days_ho, sizeof(__pyx_k_Time_between_dates_years_days_ho), 0, 1, 0, 0},
  {&__pyx_n_s_VIVO, __pyx_k_VIVO, sizeof(__pyx_k_VIVO), 0, 0, 1, 1},
  {&__pyx_n_s_Validator, __pyx_k_Validator, sizeof(__pyx_k_Validator), 0, 0, 1, 1},
  {&__pyx_n_s_Validator_is_valid_url, __pyx_k_Validator_is_valid_url, sizeof(__pyx_k_Validator_is_valid_url), 0, 0, 1, 1},
  {&__pyx_kp_u_Vivaldi, __pyx_k_Vivaldi, sizeof(__pyx_k_Vivaldi), 0, 1, 0, 0},
  {&__pyx_kp_u_Vivo, __pyx_k_Vivo, sizeof(__pyx_k_Vivo), 0, 1, 0, 0},
  {&__pyx_kp_u_VivoBrowser, __pyx_k_VivoBrowser, sizeof(__pyx_k_VivoBrowser), 0, 1, 0, 0},
  {&__pyx_n_u_X23, __pyx_k_X23, sizeof(__pyx_k_X23), 0, 1, 0, 1},
  {&__pyx_n_u_X27, __pyx_k_X27, sizeof(__pyx_k_X27), 0, 1, 0, 1},
  {&__pyx_kp_u_X27_Pro, __pyx_k_X27_Pro, sizeof(__pyx_k_X27_Pro), 0, 1, 0, 0},
  {&__pyx_n_u_X30, __pyx_k_X30, sizeof(__pyx_k_X30), 0, 1, 0, 1},
  {&__pyx_kp_u_X30_Pro, __pyx_k_X30_Pro, sizeof(__pyx_k_X30_Pro), 0, 1, 0, 0},
  {&__pyx_n_u_X3F, __pyx_k_X3F, sizeof(__pyx_k_X3F), 0, 1, 0, 1},
  {&__pyx_n_u_X3L, __pyx_k_X3L, sizeof(__pyx_k_X3L), 0, 1, 0, 1},
  {&__pyx_n_u_X3S, __pyx_k_X3S, sizeof(__pyx_k_X3S), 0, 1, 0, 1},
  {&__pyx_kp_u_X3S_W, __pyx_k_X3S_W, sizeof(__pyx_k_X3S_W), 0, 1, 0, 0},
  {&__pyx_n_u_X3V, __pyx_k_X3V, sizeof(__pyx_k_X3V), 0, 1, 0, 1},
  {&__pyx_n_u_X3t, __pyx_k_X3t, sizeof(__pyx_k_X3t), 0, 1, 0, 1},
  {&__pyx_n_u_X40, __pyx_k_X40, sizeof(__pyx_k_X40), 0, 1, 0, 1},
  {&__pyx_n_u_X5, __pyx_k_X5, sizeof(__pyx_k_X5), 0, 1, 0, 1},
  {&__pyx_n_u_X50, __pyx_k_X50, sizeof(__pyx_k_X50), 0, 1, 0, 1},
  {&__pyx_kp_u_X50_5G, __pyx_k_X50_5G, sizeof(__pyx_k_X50_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_X50_Lite, __pyx_k_X50_Lite, sizeof(__pyx_k_X50_Lite), 0, 1, 0, 0},
  {&__pyx_kp_u_X50_Pro, __pyx_k_X50_Pro, sizeof(__pyx_k_X50_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_X50_Pro_Plus, __pyx_k_X50_Pro_Plus, sizeof(__pyx_k_X50_Pro_Plus), 0, 1, 0, 0},
  {&__pyx_n_u_X50e, __pyx_k_X50e, sizeof(__pyx_k_X50e), 0, 1, 0, 1},
  {&__pyx_n_u_X510, __pyx_k_X510, sizeof(__pyx_k_X510), 0, 1, 0, 1},
  {&__pyx_n_u_X510t, __pyx_k_X510t, sizeof(__pyx_k_X510t), 0, 1, 0, 1},
  {&__pyx_n_u_X520L, __pyx_k_X520L, sizeof(__pyx_k_X520L), 0, 1, 0, 1},
  {&__pyx_n_u_X551F, __pyx_k_X551F, sizeof(__pyx_k_X551F), 0, 1, 0, 1},
  {&__pyx_n_u_X559C, __pyx_k_X559C, sizeof(__pyx_k_X559C), 0, 1, 0, 1},
  {&__pyx_n_u_X5F, __pyx_k_X5F, sizeof(__pyx_k_X5F), 0, 1, 0, 1},
  {&__pyx_n_u_X5M, __pyx_k_X5M, sizeof(__pyx_k_X5M), 0, 1, 0, 1},
  {&__pyx_kp_u_X5_Pro, __pyx_k_X5_Pro, sizeof(__pyx_k_X5_Pro), 0, 1, 0, 0},
  {&__pyx_n_u_X6, __pyx_k_X6, sizeof(__pyx_k_X6), 0, 1, 0, 1},
  {&__pyx_n_u_X60, __pyx_k_X60, sizeof(__pyx_k_X60), 0, 1, 0, 1},
  {&__pyx_n_u_X606B, __pyx_k_X606B, sizeof(__pyx_k_X606B), 0, 1, 0, 1},
  {&__pyx_n_u_X608, __pyx_k_X608, sizeof(__pyx_k_X608), 0, 1, 0, 1},
  {&__pyx_kp_u_X60_Pro, __pyx_k_X60_Pro, sizeof(__pyx_k_X60_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_X60_Pro_Plus, __pyx_k_X60_Pro_Plus, sizeof(__pyx_k_X60_Pro_Plus), 0, 1, 0, 0},
  {&__pyx_n_u_X60t, __pyx_k_X60t, sizeof(__pyx_k_X60t), 0, 1, 0, 1},
  {&__pyx_n_u_X6S, __pyx_k_X6S, sizeof(__pyx_k_X6S), 0, 1, 0, 1},
  {&__pyx_kp_u_X6S_Plus, __pyx_k_X6S_Plus, sizeof(__pyx_k_X6S_Plus), 0, 1, 0, 0},
  {&__pyx_kp_u_X6_Plus, __pyx_k_X6_Plus, sizeof(__pyx_k_X6_Plus), 0, 1, 0, 0},
  {&__pyx_n_u_X7, __pyx_k_X7, sizeof(__pyx_k_X7), 0, 1, 0, 1},
  {&__pyx_n_u_X70, __pyx_k_X70, sizeof(__pyx_k_X70), 0, 1, 0, 1},
  {&__pyx_kp_u_X70_5G, __pyx_k_X70_5G, sizeof(__pyx_k_X70_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_X70_Pro, __pyx_k_X70_Pro, sizeof(__pyx_k_X70_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_X7_Plus, __pyx_k_X7_Plus, sizeof(__pyx_k_X7_Plus), 0, 1, 0, 0},
  {&__pyx_n_s_XIAOMI, __pyx_k_XIAOMI, sizeof(__pyx_k_XIAOMI), 0, 0, 1, 1},
  {&__pyx_kp_u_XiaoMi_MiuiBrowser, __pyx_k_XiaoMi_MiuiBrowser, sizeof(__pyx_k_XiaoMi_MiuiBrowser), 0, 1, 0, 0},
  {&__pyx_kp_u_Xiaomi_10T_Pro, __pyx_k_Xiaomi_10T_Pro, sizeof(__pyx_k_Xiaomi_10T_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Xiaomi_11T_Pro, __pyx_k_Xiaomi_11T_Pro, sizeof(__pyx_k_Xiaomi_11T_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Xiaomi_Pad_5_pro, __pyx_k_Xiaomi_Pad_5_pro, sizeof(__pyx_k_Xiaomi_Pad_5_pro), 0, 1, 0, 0},
  {&__pyx_n_u_Y11, __pyx_k_Y11, sizeof(__pyx_k_Y11), 0, 1, 0, 1},
  {&__pyx_n_u_Y11s, __pyx_k_Y11s, sizeof(__pyx_k_Y11s), 0, 1, 0, 1},
  {&__pyx_n_u_Y11t, __pyx_k_Y11t, sizeof(__pyx_k_Y11t), 0, 1, 0, 1},
  {&__pyx_n_u_Y12, __pyx_k_Y12, sizeof(__pyx_k_Y12), 0, 1, 0, 1},
  {&__pyx_kp_u_Y12I_Pro, __pyx_k_Y12I_Pro, sizeof(__pyx_k_Y12I_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u_Y12_Pro, __pyx_k_Y12_Pro, sizeof(__pyx_k_Y12_Pro), 0, 1, 0, 0},
  {&__pyx_n_u_Y12a, __pyx_k_Y12a, sizeof(__pyx_k_Y12a), 0, 1, 0, 1},
  {&__pyx_n_u_Y15c, __pyx_k_Y15c, sizeof(__pyx_k_Y15c), 0, 1, 0, 1},
  {&__pyx_n_u_Y15s, __pyx_k_Y15s, sizeof(__pyx_k_Y15s), 0, 1, 0, 1},
  {&__pyx_n_u_Y16, __pyx_k_Y16, sizeof(__pyx_k_Y16), 0, 1, 0, 1},
  {&__pyx_n_u_Y17, __pyx_k_Y17, sizeof(__pyx_k_Y17), 0, 1, 0, 1},
  {&__pyx_n_u_Y17T, __pyx_k_Y17T, sizeof(__pyx_k_Y17T), 0, 1, 0, 1},
  {&__pyx_n_u_Y17W, __pyx_k_Y17W, sizeof(__pyx_k_Y17W), 0, 1, 0, 1},
  {&__pyx_n_u_Y18, __pyx_k_Y18, sizeof(__pyx_k_Y18), 0, 1, 0, 1},
  {&__pyx_n_u_Y19, __pyx_k_Y19, sizeof(__pyx_k_Y19), 0, 1, 0, 1},
  {&__pyx_n_u_Y19t, __pyx_k_Y19t, sizeof(__pyx_k_Y19t), 0, 1, 0, 1},
  {&__pyx_n_u_Y1S, __pyx_k_Y1S, sizeof(__pyx_k_Y1S), 0, 1, 0, 1},
  {&__pyx_n_u_Y1i, __pyx_k_Y1i, sizeof(__pyx_k_Y1i), 0, 1, 0, 1},
  {&__pyx_n_u_Y20, __pyx_k_Y20, sizeof(__pyx_k_Y20), 0, 1, 0, 1},
  {&__pyx_n_u_Y20A, __pyx_k_Y20A, sizeof(__pyx_k_Y20A), 0, 1, 0, 1},
  {&__pyx_n_u_Y20G, __pyx_k_Y20G, sizeof(__pyx_k_Y20G), 0, 1, 0, 1},
  {&__pyx_kp_u_Zero_20, __pyx_k_Zero_20, sizeof(__pyx_k_Zero_20), 0, 1, 0, 0},
  {&__pyx_kp_u_Zero_3, __pyx_k_Zero_3, sizeof(__pyx_k_Zero_3), 0, 1, 0, 0},
  {&__pyx_kp_u_Zero_5G, __pyx_k_Zero_5G, sizeof(__pyx_k_Zero_5G), 0, 1, 0, 0},
  {&__pyx_kp_u_Zero_X, __pyx_k_Zero_X, sizeof(__pyx_k_Zero_X), 0, 1, 0, 0},
  {&__pyx_kp_u_Zero_X_Pro, __pyx_k_Zero_X_Pro, sizeof(__pyx_k_Zero_X_Pro), 0, 1, 0, 0},
  {&__pyx_kp_u__11, __pyx_k__11, sizeof(__pyx_k__11), 0, 1, 0, 0},
  {&__pyx_kp_u__3, __pyx_k__3, sizeof(__pyx_k__3), 0, 1, 0, 0},
  {&__pyx_kp_u__30, __pyx_k__30, sizeof(__pyx_k__30), 0, 1, 0, 0},
  {&__pyx_kp_u__4, __pyx_k__4, sizeof(__pyx_k__4), 0, 1, 0, 0},
  {&__pyx_kp_u__41, __pyx_k__41, sizeof(__pyx_k__41), 0, 1, 0, 0},
  {&__pyx_n_s__45, __pyx_k__45, sizeof(__pyx_k__45), 0, 0, 1, 1},
  {&__pyx_n_u__45, __pyx_k__45, sizeof(__pyx_k__45), 0, 1, 0, 1},
  {&__pyx_kp_u__6, __pyx_k__6, sizeof(__pyx_k__6), 0, 1, 0, 0},
  {&__pyx_kp_u__7, __pyx_k__7, sizeof(__pyx_k__7), 0, 1, 0, 0},
  {&__pyx_kp_u__8, __pyx_k__8, sizeof(__pyx_k__8), 0, 1, 0, 0},
  {&__pyx_kp_u__9, __pyx_k__9, sizeof(__pyx_k__9), 0, 1, 0, 0},
  {&__pyx_n_u_a, __pyx_k_a, sizeof(__pyx_k_a), 0, 1, 0, 1},
  {&__pyx_n_u_abcdefghijklmnopqrstuvwxyz, __pyx_k_abcdefghijklmnopqrstuvwxyz, sizeof(__pyx_k_abcdefghijklmnopqrstuvwxyz), 0, 1, 0, 1},
  {&__pyx_n_s_all, __pyx_k_all, sizeof(__pyx_k_all), 0, 0, 1, 1},
  {&__pyx_n_u_am, __pyx_k_am, sizeof(__pyx_k_am), 0, 1, 0, 1},
  {&__pyx_n_s_android, __pyx_k_android, sizeof(__pyx_k_android), 0, 0, 1, 1},
  {&__pyx_n_s_android_version, __pyx_k_android_version, sizeof(__pyx_k_android_version), 0, 0, 1, 1},
  {&__pyx_n_s_app, __pyx_k_app, sizeof(__pyx_k_app), 0, 0, 1, 1},
  {&__pyx_n_s_array, __pyx_k_array, sizeof(__pyx_k_array), 0, 0, 1, 1},
  {&__pyx_n_s_auto_lower, __pyx_k_auto_lower, sizeof(__pyx_k_auto_lower), 0, 0, 1, 1},
  {&__pyx_n_s_call, __pyx_k_call, sizeof(__pyx_k_call), 0, 0, 1, 1},
  {&__pyx_n_s_choice, __pyx_k_choice, sizeof(__pyx_k_choice), 0, 0, 1, 1},
  {&__pyx_n_u_clear, __pyx_k_clear, sizeof(__pyx_k_clear), 0, 1, 0, 1},
  {&__pyx_n_s_clear_screen, __pyx_k_clear_screen, sizeof(__pyx_k_clear_screen), 0, 0, 1, 1},
  {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
  {&__pyx_n_s_close, __pyx_k_close, sizeof(__pyx_k_close), 0, 0, 1, 1},
  {&__pyx_n_u_cls, __pyx_k_cls, sizeof(__pyx_k_cls), 0, 1, 0, 1},
  {&__pyx_n_s_cookie_dict_to_string, __pyx_k_cookie_dict_to_string, sizeof(__pyx_k_cookie_dict_to_string), 0, 0, 1, 1},
  {&__pyx_n_s_cookie_string_to_dict, __pyx_k_cookie_string_to_dict, sizeof(__pyx_k_cookie_string_to_dict), 0, 0, 1, 1},
  {&__pyx_n_s_d, __pyx_k_d, sizeof(__pyx_k_d), 0, 0, 1, 1},
  {&__pyx_n_u_dar, __pyx_k_dar, sizeof(__pyx_k_dar), 0, 1, 0, 1},
  {&__pyx_n_s_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 0, 1, 1},
  {&__pyx_n_s_datetime, __pyx_k_datetime, sizeof(__pyx_k_datetime), 0, 0, 1, 1},
  {&__pyx_n_s_days, __pyx_k_days, sizeof(__pyx_k_days), 0, 0, 1, 1},
  {&__pyx_n_u_days, __pyx_k_days, sizeof(__pyx_k_days), 0, 1, 0, 1},
  {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
  {&__pyx_n_s_decode_unicode, __pyx_k_decode_unicode, sizeof(__pyx_k_decode_unicode), 0, 0, 1, 1},
  {&__pyx_n_u_default, __pyx_k_default, sizeof(__pyx_k_default), 0, 1, 0, 1},
  {&__pyx_kp_u_density_2_0_width, __pyx_k_density_2_0_width, sizeof(__pyx_k_density_2_0_width), 0, 1, 0, 0},
  {&__pyx_n_s_desktop, __pyx_k_desktop, sizeof(__pyx_k_desktop), 0, 0, 1, 1},
  {&__pyx_n_s_dirs, __pyx_k_dirs, sizeof(__pyx_k_dirs), 0, 0, 1, 1},
  {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
  {&__pyx_n_s_duration, __pyx_k_duration, sizeof(__pyx_k_duration), 0, 0, 1, 1},
  {&__pyx_n_s_duration_in_s, __pyx_k_duration_in_s, sizeof(__pyx_k_duration_in_s), 0, 0, 1, 1},
  {&__pyx_n_s_encode, __pyx_k_encode, sizeof(__pyx_k_encode), 0, 0, 1, 1},
  {&__pyx_n_s_encoding, __pyx_k_encoding, sizeof(__pyx_k_encoding), 0, 0, 1, 1},
  {&__pyx_n_s_enter, __pyx_k_enter, sizeof(__pyx_k_enter), 0, 0, 1, 1},
  {&__pyx_n_s_enumerate, __pyx_k_enumerate, sizeof(__pyx_k_enumerate), 0, 0, 1, 1},
  {&__pyx_n_s_except_key, __pyx_k_except_key, sizeof(__pyx_k_except_key), 0, 0, 1, 1},
  {&__pyx_n_s_exist_ok, __pyx_k_exist_ok, sizeof(__pyx_k_exist_ok), 0, 0, 1, 1},
  {&__pyx_n_s_exit, __pyx_k_exit, sizeof(__pyx_k_exit), 0, 0, 1, 1},
  {&__pyx_n_s_exit_2, __pyx_k_exit_2, sizeof(__pyx_k_exit_2), 0, 0, 1, 1},
  {&__pyx_n_s_f, __pyx_k_f, sizeof(__pyx_k_f), 0, 0, 1, 1},
  {&__pyx_n_s_fb, __pyx_k_fb, sizeof(__pyx_k_fb), 0, 0, 1, 1},
  {&__pyx_n_s_fbid, __pyx_k_fbid, sizeof(__pyx_k_fbid), 0, 0, 1, 1},
  {&__pyx_n_s_filename, __pyx_k_filename, sizeof(__pyx_k_filename), 0, 0, 1, 1},
  {&__pyx_n_s_find_post_id, __pyx_k_find_post_id, sizeof(__pyx_k_find_post_id), 0, 0, 1, 1},
  {&__pyx_n_s_findall, __pyx_k_findall, sizeof(__pyx_k_findall), 0, 0, 1, 1},
  {&__pyx_n_s_format, __pyx_k_format, sizeof(__pyx_k_format), 0, 0, 1, 1},
  {&__pyx_n_s_generate_passsword_from_name, __pyx_k_generate_passsword_from_name, sizeof(__pyx_k_generate_passsword_from_name), 0, 0, 1, 1},
  {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration, __pyx_k_get_duration, sizeof(__pyx_k_get_duration), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration_locals_days, __pyx_k_get_duration_locals_days, sizeof(__pyx_k_get_duration_locals_days), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration_locals_hours, __pyx_k_get_duration_locals_hours, sizeof(__pyx_k_get_duration_locals_hours), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration_locals_minutes, __pyx_k_get_duration_locals_minutes, sizeof(__pyx_k_get_duration_locals_minutes), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration_locals_seconds, __pyx_k_get_duration_locals_seconds, sizeof(__pyx_k_get_duration_locals_seconds), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration_locals_total_durati, __pyx_k_get_duration_locals_total_durati, sizeof(__pyx_k_get_duration_locals_total_durati), 0, 0, 1, 1},
  {&__pyx_n_s_get_duration_locals_years, __pyx_k_get_duration_locals_years, sizeof(__pyx_k_get_duration_locals_years), 0, 0, 1, 1},
  {&__pyx_n_s_group, __pyx_k_group, sizeof(__pyx_k_group), 0, 0, 1, 1},
  {&__pyx_n_s_h, __pyx_k_h, sizeof(__pyx_k_h), 0, 0, 1, 1},
  {&__pyx_n_s_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 0, 1, 1},
  {&__pyx_kp_u_height, __pyx_k_height, sizeof(__pyx_k_height), 0, 1, 0, 0},
  {&__pyx_n_s_hours, __pyx_k_hours, sizeof(__pyx_k_hours), 0, 0, 1, 1},
  {&__pyx_n_u_hours, __pyx_k_hours, sizeof(__pyx_k_hours), 0, 1, 0, 1},
  {&__pyx_kp_u_http_https_facebook_com_0_9_pos, __pyx_k_http_https_facebook_com_0_9_pos, sizeof(__pyx_k_http_https_facebook_com_0_9_pos), 0, 1, 0, 0},
  {&__pyx_kp_u_http_https_facebook_com_a_zA_Z0, __pyx_k_http_https_facebook_com_a_zA_Z0, sizeof(__pyx_k_http_https_facebook_com_a_zA_Z0), 0, 1, 0, 0},
  {&__pyx_kp_u_http_https_facebook_com_groups, __pyx_k_http_https_facebook_com_groups, sizeof(__pyx_k_http_https_facebook_com_groups), 0, 1, 0, 0},
  {&__pyx_kp_u_http_https_facebook_com_story_p, __pyx_k_http_https_facebook_com_story_p, sizeof(__pyx_k_http_https_facebook_com_story_p), 0, 1, 0, 0},
  {&__pyx_kp_u_https_id_traodoisub_com_api_php, __pyx_k_https_id_traodoisub_com_api_php, sizeof(__pyx_k_https_id_traodoisub_com_api_php), 0, 1, 0, 0},
  {&__pyx_kp_u_https_www_facebook_com, __pyx_k_https_www_facebook_com, sizeof(__pyx_k_https_www_facebook_com), 0, 1, 0, 0},
  {&__pyx_n_u_id, __pyx_k_id, sizeof(__pyx_k_id), 0, 1, 0, 1},
  {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
  {&__pyx_n_s_index, __pyx_k_index, sizeof(__pyx_k_index), 0, 0, 1, 1},
  {&__pyx_n_s_infinix, __pyx_k_infinix, sizeof(__pyx_k_infinix), 0, 0, 1, 1},
  {&__pyx_n_u_infinix, __pyx_k_infinix, sizeof(__pyx_k_infinix), 0, 1, 0, 1},
  {&__pyx_n_s_interval, __pyx_k_interval, sizeof(__pyx_k_interval), 0, 0, 1, 1},
  {&__pyx_n_s_iphone, __pyx_k_iphone, sizeof(__pyx_k_iphone), 0, 0, 1, 1},
  {&__pyx_n_u_iphone, __pyx_k_iphone, sizeof(__pyx_k_iphone), 0, 1, 0, 1},
  {&__pyx_n_s_iphone_version, __pyx_k_iphone_version, sizeof(__pyx_k_iphone_version), 0, 0, 1, 1},
  {&__pyx_n_s_is_valid_url, __pyx_k_is_valid_url, sizeof(__pyx_k_is_valid_url), 0, 0, 1, 1},
  {&__pyx_n_s_isalpha, __pyx_k_isalpha, sizeof(__pyx_k_isalpha), 0, 0, 1, 1},
  {&__pyx_n_s_isdir, __pyx_k_isdir, sizeof(__pyx_k_isdir), 0, 0, 1, 1},
  {&__pyx_n_s_isfile, __pyx_k_isfile, sizeof(__pyx_k_isfile), 0, 0, 1, 1},
  {&__pyx_n_s_item, __pyx_k_item, sizeof(__pyx_k_item), 0, 0, 1, 1},
  {&__pyx_n_s_items, __pyx_k_items, sizeof(__pyx_k_items), 0, 0, 1, 1},
  {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
  {&__pyx_n_s_key, __pyx_k_key, sizeof(__pyx_k_key), 0, 0, 1, 1},
  {&__pyx_n_s_keys, __pyx_k_keys, sizeof(__pyx_k_keys), 0, 0, 1, 1},
  {&__pyx_n_s_length, __pyx_k_length, sizeof(__pyx_k_length), 0, 0, 1, 1},
  {&__pyx_kp_u_like_Mac_OS_X_AppleWebKit, __pyx_k_like_Mac_OS_X_AppleWebKit, sizeof(__pyx_k_like_Mac_OS_X_AppleWebKit), 0, 1, 0, 0},
  {&__pyx_n_u_lin, __pyx_k_lin, sizeof(__pyx_k_lin), 0, 1, 0, 1},
  {&__pyx_n_s_link, __pyx_k_link, sizeof(__pyx_k_link), 0, 0, 1, 1},
  {&__pyx_n_u_link, __pyx_k_link, sizeof(__pyx_k_link), 0, 1, 0, 1},
  {&__pyx_n_s_linux, __pyx_k_linux, sizeof(__pyx_k_linux), 0, 0, 1, 1},
  {&__pyx_n_u_linux, __pyx_k_linux, sizeof(__pyx_k_linux), 0, 1, 0, 1},
  {&__pyx_n_s_lookup_id, __pyx_k_lookup_id, sizeof(__pyx_k_lookup_id), 0, 0, 1, 1},
  {&__pyx_n_s_loop, __pyx_k_loop, sizeof(__pyx_k_loop), 0, 0, 1, 1},
  {&__pyx_n_s_lower, __pyx_k_lower, sizeof(__pyx_k_lower), 0, 0, 1, 1},
  {&__pyx_n_s_m, __pyx_k_m, sizeof(__pyx_k_m), 0, 0, 1, 1},
  {&__pyx_n_s_macOS, __pyx_k_macOS, sizeof(__pyx_k_macOS), 0, 0, 1, 1},
  {&__pyx_n_u_macOS, __pyx_k_macOS, sizeof(__pyx_k_macOS), 0, 1, 0, 1},
  {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
  {&__pyx_n_s_map, __pyx_k_map, sizeof(__pyx_k_map), 0, 0, 1, 1},
  {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
  {&__pyx_n_s_min_length, __pyx_k_min_length, sizeof(__pyx_k_min_length), 0, 0, 1, 1},
  {&__pyx_n_s_minutes, __pyx_k_minutes, sizeof(__pyx_k_minutes), 0, 0, 1, 1},
  {&__pyx_n_u_minutes, __pyx_k_minutes, sizeof(__pyx_k_minutes), 0, 1, 0, 1},
  {&__pyx_n_s_mkdir, __pyx_k_mkdir, sizeof(__pyx_k_mkdir), 0, 0, 1, 1},
  {&__pyx_n_s_mobile, __pyx_k_mobile, sizeof(__pyx_k_mobile), 0, 0, 1, 1},
  {&__pyx_n_s_mobile_id, __pyx_k_mobile_id, sizeof(__pyx_k_mobile_id), 0, 0, 1, 1},
  {&__pyx_n_s_model, __pyx_k_model, sizeof(__pyx_k_model), 0, 0, 1, 1},
  {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
  {&__pyx_n_s_mtf_config, __pyx_k_mtf_config, sizeof(__pyx_k_mtf_config), 0, 0, 1, 1},
  {&__pyx_kp_s_mtf_module_utils_py, __pyx_k_mtf_module_utils_py, sizeof(__pyx_k_mtf_module_utils_py), 0, 0, 1, 0},
  {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
  {&__pyx_n_s_name_2, __pyx_k_name_2, sizeof(__pyx_k_name_2), 0, 0, 1, 1},
  {&__pyx_n_s_netloc, __pyx_k_netloc, sizeof(__pyx_k_netloc), 0, 0, 1, 1},
  {&__pyx_n_s_now, __pyx_k_now, sizeof(__pyx_k_now), 0, 0, 1, 1},
  {&__pyx_n_u_nt, __pyx_k_nt, sizeof(__pyx_k_nt), 0, 1, 0, 1},
  {&__pyx_n_s_obj, __pyx_k_obj, sizeof(__pyx_k_obj), 0, 0, 1, 1},
  {&__pyx_n_s_object_except, __pyx_k_object_except, sizeof(__pyx_k_object_except), 0, 0, 1, 1},
  {&__pyx_n_s_objects, __pyx_k_objects, sizeof(__pyx_k_objects), 0, 0, 1, 1},
  {&__pyx_n_s_open, __pyx_k_open, sizeof(__pyx_k_open), 0, 0, 1, 1},
  {&__pyx_n_u_open, __pyx_k_open, sizeof(__pyx_k_open), 0, 1, 0, 1},
  {&__pyx_n_s_open_link, __pyx_k_open_link, sizeof(__pyx_k_open_link), 0, 0, 1, 1},
  {&__pyx_n_s_oppo, __pyx_k_oppo, sizeof(__pyx_k_oppo), 0, 0, 1, 1},
  {&__pyx_n_u_oppo, __pyx_k_oppo, sizeof(__pyx_k_oppo), 0, 1, 0, 1},
  {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
  {&__pyx_n_s_p, __pyx_k_p, sizeof(__pyx_k_p), 0, 0, 1, 1},
  {&__pyx_n_s_parents, __pyx_k_parents, sizeof(__pyx_k_parents), 0, 0, 1, 1},
  {&__pyx_n_s_path, __pyx_k_path, sizeof(__pyx_k_path), 0, 0, 1, 1},
  {&__pyx_n_s_pathlib, __pyx_k_pathlib, sizeof(__pyx_k_pathlib), 0, 0, 1, 1},
  {&__pyx_n_s_pattern, __pyx_k_pattern, sizeof(__pyx_k_pattern), 0, 0, 1, 1},
  {&__pyx_n_s_patterns, __pyx_k_patterns, sizeof(__pyx_k_patterns), 0, 0, 1, 1},
  {&__pyx_n_s_platform, __pyx_k_platform, sizeof(__pyx_k_platform), 0, 0, 1, 1},
  {&__pyx_n_s_pop, __pyx_k_pop, sizeof(__pyx_k_pop), 0, 0, 1, 1},
  {&__pyx_n_s_post, __pyx_k_post, sizeof(__pyx_k_post), 0, 0, 1, 1},
  {&__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
  {&__pyx_n_u_python, __pyx_k_python, sizeof(__pyx_k_python), 0, 1, 0, 1},
  {&__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
  {&__pyx_n_s_randint, __pyx_k_randint, sizeof(__pyx_k_randint), 0, 0, 1, 1},
  {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
  {&__pyx_n_s_random_list, __pyx_k_random_list, sizeof(__pyx_k_random_list), 0, 0, 1, 1},
  {&__pyx_n_s_random_string, __pyx_k_random_string, sizeof(__pyx_k_random_string), 0, 0, 1, 1},
  {&__pyx_n_s_range, __pyx_k_range, sizeof(__pyx_k_range), 0, 0, 1, 1},
  {&__pyx_n_s_re, __pyx_k_re, sizeof(__pyx_k_re), 0, 0, 1, 1},
  {&__pyx_n_s_reload, __pyx_k_reload, sizeof(__pyx_k_reload), 0, 0, 1, 1},
  {&__pyx_n_s_replaced, __pyx_k_replaced, sizeof(__pyx_k_replaced), 0, 0, 1, 1},
  {&__pyx_n_s_requests, __pyx_k_requests, sizeof(__pyx_k_requests), 0, 0, 1, 1},
  {&__pyx_n_s_result, __pyx_k_result, sizeof(__pyx_k_result), 0, 0, 1, 1},
  {&__pyx_n_s_round, __pyx_k_round, sizeof(__pyx_k_round), 0, 0, 1, 1},
  {&__pyx_n_u_run, __pyx_k_run, sizeof(__pyx_k_run), 0, 1, 0, 1},
  {&__pyx_kp_u_run_2, __pyx_k_run_2, sizeof(__pyx_k_run_2), 0, 1, 0, 0},
  {&__pyx_kp_u_run_py, __pyx_k_run_py, sizeof(__pyx_k_run_py), 0, 1, 0, 0},
  {&__pyx_n_s_s, __pyx_k_s, sizeof(__pyx_k_s), 0, 0, 1, 1},
  {&__pyx_n_s_samsung, __pyx_k_samsung, sizeof(__pyx_k_samsung), 0, 0, 1, 1},
  {&__pyx_n_u_samsung, __pyx_k_samsung, sizeof(__pyx_k_samsung), 0, 1, 0, 1},
  {&__pyx_n_s_save_result, __pyx_k_save_result, sizeof(__pyx_k_save_result), 0, 0, 1, 1},
  {&__pyx_n_s_scheme, __pyx_k_scheme, sizeof(__pyx_k_scheme), 0, 0, 1, 1},
  {&__pyx_n_s_search, __pyx_k_search, sizeof(__pyx_k_search), 0, 0, 1, 1},
  {&__pyx_n_s_seconds, __pyx_k_seconds, sizeof(__pyx_k_seconds), 0, 0, 1, 1},
  {&__pyx_n_u_seconds, __pyx_k_seconds, sizeof(__pyx_k_seconds), 0, 1, 0, 1},
  {&__pyx_n_s_sensor_string, __pyx_k_sensor_string, sizeof(__pyx_k_sensor_string), 0, 0, 1, 1},
  {&__pyx_n_s_sfx, __pyx_k_sfx, sizeof(__pyx_k_sfx), 0, 0, 1, 1},
  {&__pyx_n_s_shell, __pyx_k_shell, sizeof(__pyx_k_shell), 0, 0, 1, 1},
  {&__pyx_n_s_slices_length, __pyx_k_slices_length, sizeof(__pyx_k_slices_length), 0, 0, 1, 1},
  {&__pyx_n_s_sort_object, __pyx_k_sort_object, sizeof(__pyx_k_sort_object), 0, 0, 1, 1},
  {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
  {&__pyx_n_u_start, __pyx_k_start, sizeof(__pyx_k_start), 0, 1, 0, 1},
  {&__pyx_n_s_startfile, __pyx_k_startfile, sizeof(__pyx_k_startfile), 0, 0, 1, 1},
  {&__pyx_n_u_startfile, __pyx_k_startfile, sizeof(__pyx_k_startfile), 0, 1, 0, 1},
  {&__pyx_n_s_stdout, __pyx_k_stdout, sizeof(__pyx_k_stdout), 0, 0, 1, 1},
  {&__pyx_n_s_string, __pyx_k_string, sizeof(__pyx_k_string), 0, 0, 1, 1},
  {&__pyx_n_s_string_array, __pyx_k_string_array, sizeof(__pyx_k_string_array), 0, 0, 1, 1},
  {&__pyx_n_s_string_password, __pyx_k_string_password, sizeof(__pyx_k_string_password), 0, 0, 1, 1},
  {&__pyx_n_s_strip, __pyx_k_strip, sizeof(__pyx_k_strip), 0, 0, 1, 1},
  {&__pyx_n_s_subprocess, __pyx_k_subprocess, sizeof(__pyx_k_subprocess), 0, 0, 1, 1},
  {&__pyx_n_s_suflix, __pyx_k_suflix, sizeof(__pyx_k_suflix), 0, 0, 1, 1},
  {&__pyx_n_s_sys, __pyx_k_sys, sizeof(__pyx_k_sys), 0, 0, 1, 1},
  {&__pyx_n_s_t, __pyx_k_t, sizeof(__pyx_k_t), 0, 0, 1, 1},
  {&__pyx_n_s_terminate, __pyx_k_terminate, sizeof(__pyx_k_terminate), 0, 0, 1, 1},
  {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
  {&__pyx_n_s_text, __pyx_k_text, sizeof(__pyx_k_text), 0, 0, 1, 1},
  {&__pyx_n_s_then, __pyx_k_then, sizeof(__pyx_k_then), 0, 0, 1, 1},
  {&__pyx_n_s_total_duration, __pyx_k_total_duration, sizeof(__pyx_k_total_duration), 0, 0, 1, 1},
  {&__pyx_n_s_total_seconds, __pyx_k_total_seconds, sizeof(__pyx_k_total_seconds), 0, 0, 1, 1},
  {&__pyx_n_u_unicode_escape, __pyx_k_unicode_escape, sizeof(__pyx_k_unicode_escape), 0, 1, 0, 1},
  {&__pyx_n_s_uniform, __pyx_k_uniform, sizeof(__pyx_k_uniform), 0, 0, 1, 1},
  {&__pyx_n_s_unique, __pyx_k_unique, sizeof(__pyx_k_unique), 0, 0, 1, 1},
  {&__pyx_n_s_url, __pyx_k_url, sizeof(__pyx_k_url), 0, 0, 1, 1},
  {&__pyx_n_s_urllib_parse, __pyx_k_urllib_parse, sizeof(__pyx_k_urllib_parse), 0, 0, 1, 1},
  {&__pyx_n_s_urlparse, __pyx_k_urlparse, sizeof(__pyx_k_urlparse), 0, 0, 1, 1},
  {&__pyx_kp_u_user_agent, __pyx_k_user_agent, sizeof(__pyx_k_user_agent), 0, 1, 0, 0},
  {&__pyx_n_s_userid, __pyx_k_userid, sizeof(__pyx_k_userid), 0, 0, 1, 1},
  {&__pyx_n_s_username, __pyx_k_username, sizeof(__pyx_k_username), 0, 0, 1, 1},
  {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
  {&__pyx_n_s_utils, __pyx_k_utils, sizeof(__pyx_k_utils), 0, 0, 1, 1},
  {&__pyx_n_s_value, __pyx_k_value, sizeof(__pyx_k_value), 0, 0, 1, 1},
  {&__pyx_n_s_values, __pyx_k_values, sizeof(__pyx_k_values), 0, 0, 1, 1},
  {&__pyx_n_s_vivo, __pyx_k_vivo, sizeof(__pyx_k_vivo), 0, 0, 1, 1},
  {&__pyx_n_u_vivo, __pyx_k_vivo, sizeof(__pyx_k_vivo), 0, 1, 0, 1},
  {&__pyx_n_s_wait, __pyx_k_wait, sizeof(__pyx_k_wait), 0, 0, 1, 1},
  {&__pyx_n_u_web, __pyx_k_web, sizeof(__pyx_k_web), 0, 1, 0, 1},
  {&__pyx_n_s_window, __pyx_k_window, sizeof(__pyx_k_window), 0, 0, 1, 1},
  {&__pyx_n_u_window, __pyx_k_window, sizeof(__pyx_k_window), 0, 1, 0, 1},
  {&__pyx_n_s_window_version, __pyx_k_window_version, sizeof(__pyx_k_window_version), 0, 0, 1, 1},
  {&__pyx_n_s_write, __pyx_k_write, sizeof(__pyx_k_write), 0, 0, 1, 1},
  {&__pyx_kp_u_xdg_open, __pyx_k_xdg_open, sizeof(__pyx_k_xdg_open), 0, 1, 0, 0},
  {&__pyx_n_s_xiaomi, __pyx_k_xiaomi, sizeof(__pyx_k_xiaomi), 0, 0, 1, 1},
  {&__pyx_n_u_xiaomi, __pyx_k_xiaomi, sizeof(__pyx_k_xiaomi), 0, 1, 0, 1},
  {&__pyx_n_s_y, __pyx_k_y, sizeof(__pyx_k_y), 0, 0, 1, 1},
  {&__pyx_n_s_years, __pyx_k_years, sizeof(__pyx_k_years), 0, 0, 1, 1},
  {&__pyx_n_u_years, __pyx_k_years, sizeof(__pyx_k_years), 0, 1, 0, 1},
  {0, 0, 0, 0, 0, 0, 0}
};
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_range = __Pyx_GetBuiltinName(__pyx_n_s_range); if (!__pyx_builtin_range) __PYX_ERR(0, 69, __pyx_L1_error)
  __pyx_builtin_enumerate = __Pyx_GetBuiltinName(__pyx_n_s_enumerate); if (!__pyx_builtin_enumerate) __PYX_ERR(0, 80, __pyx_L1_error)
  __pyx_builtin_open = __Pyx_GetBuiltinName(__pyx_n_s_open); if (!__pyx_builtin_open) __PYX_ERR(0, 120, __pyx_L1_error)
  __pyx_builtin_all = __Pyx_GetBuiltinName(__pyx_n_s_all); if (!__pyx_builtin_all) __PYX_ERR(0, 211, __pyx_L1_error)
  __pyx_builtin_round = __Pyx_GetBuiltinName(__pyx_n_s_round); if (!__pyx_builtin_round) __PYX_ERR(0, 533, __pyx_L1_error)
  __pyx_builtin_map = __Pyx_GetBuiltinName(__pyx_n_s_map); if (!__pyx_builtin_map) __PYX_ERR(0, 581, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

   
  __pyx_tuple_ = PyTuple_Pack(1, __pyx_kp_u_run_2); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple_);
  __Pyx_GIVEREF(__pyx_tuple_);

   
  __pyx_slice__2 = PySlice_New(__pyx_int_0, __pyx_int_3, Py_None); if (unlikely(!__pyx_slice__2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__2);
  __Pyx_GIVEREF(__pyx_slice__2);

   
  __pyx_slice__5 = PySlice_New(__pyx_int_1, Py_None, Py_None); if (unlikely(!__pyx_slice__5)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__5);
  __Pyx_GIVEREF(__pyx_slice__5);

   
  __pyx_slice__10 = PySlice_New(Py_None, __pyx_int_neg_1, Py_None); if (unlikely(!__pyx_slice__10)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__10);
  __Pyx_GIVEREF(__pyx_slice__10);

   
  __pyx_tuple__12 = PyTuple_Pack(3, Py_None, Py_None, Py_None); if (unlikely(!__pyx_tuple__12)) __PYX_ERR(0, 120, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__12);
  __Pyx_GIVEREF(__pyx_tuple__12);

   
  __pyx_codeobj__13 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_years, 132, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__13)) __PYX_ERR(0, 132, __pyx_L1_error)

   
  __pyx_tuple__14 = PyTuple_Pack(1, __pyx_n_s_seconds); if (unlikely(!__pyx_tuple__14)) __PYX_ERR(0, 135, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__14);
  __Pyx_GIVEREF(__pyx_tuple__14);
  __pyx_codeobj__15 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__14, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_days, 135, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__15)) __PYX_ERR(0, 135, __pyx_L1_error)
  __pyx_tuple__16 = PyTuple_Pack(1, ((PyObject *)Py_None)); if (unlikely(!__pyx_tuple__16)) __PYX_ERR(0, 135, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__16);
  __Pyx_GIVEREF(__pyx_tuple__16);

   
  __pyx_tuple__17 = PyTuple_Pack(1, __pyx_n_s_seconds); if (unlikely(!__pyx_tuple__17)) __PYX_ERR(0, 138, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__17);
  __Pyx_GIVEREF(__pyx_tuple__17);
  __pyx_codeobj__18 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__17, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_hours, 138, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__18)) __PYX_ERR(0, 138, __pyx_L1_error)
  __pyx_tuple__19 = PyTuple_Pack(1, ((PyObject *)Py_None)); if (unlikely(!__pyx_tuple__19)) __PYX_ERR(0, 138, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_tuple__19);

   
  __pyx_tuple__20 = PyTuple_Pack(1, __pyx_n_s_seconds); if (unlikely(!__pyx_tuple__20)) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__20);
  __Pyx_GIVEREF(__pyx_tuple__20);
  __pyx_codeobj__21 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__20, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_minutes, 141, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__21)) __PYX_ERR(0, 141, __pyx_L1_error)
  __pyx_tuple__22 = PyTuple_Pack(1, ((PyObject *)Py_None)); if (unlikely(!__pyx_tuple__22)) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__22);
  __Pyx_GIVEREF(__pyx_tuple__22);

   
  __pyx_tuple__23 = PyTuple_Pack(1, __pyx_n_s_seconds); if (unlikely(!__pyx_tuple__23)) __PYX_ERR(0, 144, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__23);
  __Pyx_GIVEREF(__pyx_tuple__23);
  __pyx_codeobj__24 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__23, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_seconds, 144, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__24)) __PYX_ERR(0, 144, __pyx_L1_error)
  __pyx_tuple__25 = PyTuple_Pack(1, ((PyObject *)Py_None)); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 144, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);

   
  __pyx_tuple__26 = PyTuple_Pack(5, __pyx_n_s_y, __pyx_n_s_d, __pyx_n_s_h, __pyx_n_s_m, __pyx_n_s_s); if (unlikely(!__pyx_tuple__26)) __PYX_ERR(0, 149, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__26);
  __Pyx_GIVEREF(__pyx_tuple__26);
  __pyx_codeobj__27 = (PyObject*)__Pyx_PyCode_New(0, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__26, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_total_duration, 149, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__27)) __PYX_ERR(0, 149, __pyx_L1_error)

   
  __pyx_tuple__28 = PyTuple_Pack(1, __pyx_kp_u_https_id_traodoisub_com_api_php); if (unlikely(!__pyx_tuple__28)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__28);
  __Pyx_GIVEREF(__pyx_tuple__28);

   
  __pyx_tuple__29 = PyTuple_Pack(2, __pyx_int_8, __pyx_int_12); if (unlikely(!__pyx_tuple__29)) __PYX_ERR(0, 530, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__29);
  __Pyx_GIVEREF(__pyx_tuple__29);

   
  __pyx_tuple__31 = PyTuple_Pack(2, __pyx_int_420, __pyx_int_600); if (unlikely(!__pyx_tuple__31)) __PYX_ERR(0, 533, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__31);
  __Pyx_GIVEREF(__pyx_tuple__31);
  __pyx_tuple__32 = PyTuple_Pack(2, __pyx_int_800, __pyx_int_1000); if (unlikely(!__pyx_tuple__32)) __PYX_ERR(0, 533, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__32);
  __Pyx_GIVEREF(__pyx_tuple__32);

   
  __pyx_tuple__33 = PyTuple_Pack(2, __pyx_int_0, __pyx_int_100); if (unlikely(!__pyx_tuple__33)) __PYX_ERR(0, 534, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__33);
  __Pyx_GIVEREF(__pyx_tuple__33);

   
  __pyx_tuple__34 = PyTuple_Pack(2, __pyx_int_100000, __pyx_int_900000); if (unlikely(!__pyx_tuple__34)) __PYX_ERR(0, 535, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__34);
  __Pyx_GIVEREF(__pyx_tuple__34);
  __pyx_tuple__35 = PyTuple_Pack(2, __pyx_int_300, __pyx_int_700); if (unlikely(!__pyx_tuple__35)) __PYX_ERR(0, 535, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__35);
  __Pyx_GIVEREF(__pyx_tuple__35);
  __pyx_tuple__36 = PyTuple_Pack(2, __pyx_float_80_0, __pyx_float_100_0); if (unlikely(!__pyx_tuple__36)) __PYX_ERR(0, 535, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__36);
  __Pyx_GIVEREF(__pyx_tuple__36);
  __pyx_tuple__37 = PyTuple_Pack(2, __pyx_int_1000, __pyx_int_9000); if (unlikely(!__pyx_tuple__37)) __PYX_ERR(0, 535, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__37);
  __Pyx_GIVEREF(__pyx_tuple__37);
  __pyx_tuple__38 = PyTuple_Pack(2, __pyx_int_100, __pyx_int_900); if (unlikely(!__pyx_tuple__38)) __PYX_ERR(0, 535, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__38);
  __Pyx_GIVEREF(__pyx_tuple__38);

   
  __pyx_tuple__39 = PyTuple_Pack(2, __pyx_float_60_0, __pyx_float_100_0); if (unlikely(!__pyx_tuple__39)) __PYX_ERR(0, 537, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__39);
  __Pyx_GIVEREF(__pyx_tuple__39);

   
  __pyx_tuple__40 = PyTuple_Pack(2, __pyx_float_1_0, __pyx_float_10_0); if (unlikely(!__pyx_tuple__40)) __PYX_ERR(0, 555, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__40);
  __Pyx_GIVEREF(__pyx_tuple__40);

   
  __pyx_tuple__42 = PyTuple_Pack(2, __pyx_float_8_0, __pyx_float_10_0); if (unlikely(!__pyx_tuple__42)) __PYX_ERR(0, 565, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__42);
  __Pyx_GIVEREF(__pyx_tuple__42);

   
  __pyx_tuple__43 = PyTuple_Pack(2, __pyx_int_8, __pyx_int_16); if (unlikely(!__pyx_tuple__43)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__43);
  __Pyx_GIVEREF(__pyx_tuple__43);
  __pyx_tuple__44 = PyTuple_Pack(2, __pyx_int_1, __pyx_int_9); if (unlikely(!__pyx_tuple__44)) __PYX_ERR(0, 581, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__44);
  __Pyx_GIVEREF(__pyx_tuple__44);

   
  __pyx_tuple__46 = PyTuple_Pack(2, __pyx_int_6, __pyx_int_13); if (unlikely(!__pyx_tuple__46)) __PYX_ERR(0, 583, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__46);
  __Pyx_GIVEREF(__pyx_tuple__46);

   
  __pyx_tuple__47 = PyTuple_Pack(2, __pyx_float_10_0, __pyx_float_100_0); if (unlikely(!__pyx_tuple__47)) __PYX_ERR(0, 592, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__47);
  __Pyx_GIVEREF(__pyx_tuple__47);

   
  __pyx_tuple__48 = PyTuple_Pack(2, __pyx_int_7, __pyx_int_10); if (unlikely(!__pyx_tuple__48)) __PYX_ERR(0, 597, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__48);
  __Pyx_GIVEREF(__pyx_tuple__48);

   
  __pyx_codeobj__49 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_clear_screen, 12, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__49)) __PYX_ERR(0, 12, __pyx_L1_error)

   
  __pyx_tuple__50 = PyTuple_Pack(1, __pyx_n_s_p); if (unlikely(!__pyx_tuple__50)) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__50);
  __Pyx_GIVEREF(__pyx_tuple__50);
  __pyx_codeobj__51 = (PyObject*)__Pyx_PyCode_New(0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__50, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_reload, 15, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__51)) __PYX_ERR(0, 15, __pyx_L1_error)

   
  __pyx_tuple__52 = PyTuple_Pack(2, __pyx_n_s_link, __pyx_n_s_platform); if (unlikely(!__pyx_tuple__52)) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__52);
  __Pyx_GIVEREF(__pyx_tuple__52);
  __pyx_codeobj__53 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__52, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_open_link, 28, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__53)) __PYX_ERR(0, 28, __pyx_L1_error)

   
  __pyx_tuple__54 = PyTuple_Pack(5, __pyx_n_s_value, __pyx_n_s_array, __pyx_n_s_objects, __pyx_n_s_string, __pyx_n_s_string_array); if (unlikely(!__pyx_tuple__54)) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__54);
  __Pyx_GIVEREF(__pyx_tuple__54);
  __pyx_codeobj__55 = (PyObject*)__Pyx_PyCode_New(1, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__54, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_cookie_string_to_dict, 41, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__55)) __PYX_ERR(0, 41, __pyx_L1_error)

   
  __pyx_tuple__56 = PyTuple_Pack(3, __pyx_n_s_value, __pyx_n_s_name, __pyx_n_s_values); if (unlikely(!__pyx_tuple__56)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__56);
  __Pyx_GIVEREF(__pyx_tuple__56);
  __pyx_codeobj__57 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__56, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_cookie_dict_to_string, 50, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__57)) __PYX_ERR(0, 50, __pyx_L1_error)

   
  __pyx_tuple__58 = PyTuple_Pack(1, __pyx_n_s_string); if (unlikely(!__pyx_tuple__58)) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__58);
  __Pyx_GIVEREF(__pyx_tuple__58);
  __pyx_codeobj__59 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__58, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_decode_unicode, 53, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__59)) __PYX_ERR(0, 53, __pyx_L1_error)

   
  __pyx_tuple__60 = PyTuple_Pack(2, __pyx_n_s_obj, __pyx_n_s_name); if (unlikely(!__pyx_tuple__60)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__60);
  __Pyx_GIVEREF(__pyx_tuple__60);
  __pyx_codeobj__61 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__60, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_sort_object, 59, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__61)) __PYX_ERR(0, 59, __pyx_L1_error)

   
  __pyx_tuple__62 = PyTuple_Pack(3, __pyx_n_s_obj, __pyx_n_s_except_key, __pyx_n_s_key); if (unlikely(!__pyx_tuple__62)) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__62);
  __Pyx_GIVEREF(__pyx_tuple__62);
  __pyx_codeobj__63 = (PyObject*)__Pyx_PyCode_New(2, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__62, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_object_except, 62, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__63)) __PYX_ERR(0, 62, __pyx_L1_error)

   
  __pyx_tuple__64 = PyTuple_Pack(4, __pyx_n_s_length, __pyx_n_s_text, __pyx_n_s_t, __pyx_n_s__45); if (unlikely(!__pyx_tuple__64)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__64);
  __Pyx_GIVEREF(__pyx_tuple__64);
  __pyx_codeobj__65 = (PyObject*)__Pyx_PyCode_New(1, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__64, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_random_string, 66, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__65)) __PYX_ERR(0, 66, __pyx_L1_error)

   
  __pyx_tuple__66 = PyTuple_Pack(3, __pyx_n_s_array, __pyx_n_s_result, __pyx_n_s_item); if (unlikely(!__pyx_tuple__66)) __PYX_ERR(0, 71, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__66);
  __Pyx_GIVEREF(__pyx_tuple__66);
  __pyx_codeobj__67 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__66, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_unique, 71, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__67)) __PYX_ERR(0, 71, __pyx_L1_error)

   
  __pyx_tuple__68 = PyTuple_Pack(8, __pyx_n_s_string, __pyx_n_s_length, __pyx_n_s_replaced, __pyx_n_s_random_list, __pyx_n_s_loop, __pyx_n_s_index, __pyx_n_s_index, __pyx_n_s_value); if (unlikely(!__pyx_tuple__68)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__68);
  __Pyx_GIVEREF(__pyx_tuple__68);
  __pyx_codeobj__69 = (PyObject*)__Pyx_PyCode_New(3, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__68, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_sensor_string, 78, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__69)) __PYX_ERR(0, 78, __pyx_L1_error)
  __pyx_tuple__70 = PyTuple_Pack(1, ((PyObject*)__pyx_kp_u__8)); if (unlikely(!__pyx_tuple__70)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__70);
  __Pyx_GIVEREF(__pyx_tuple__70);

   
  __pyx_tuple__71 = PyTuple_Pack(9, __pyx_n_s_name, __pyx_n_s_suflix, __pyx_n_s_slices_length, __pyx_n_s_auto_lower, __pyx_n_s_min_length, __pyx_n_s_result, __pyx_n_s_item, __pyx_n_s_sfx, __pyx_n_s_string_password); if (unlikely(!__pyx_tuple__71)) __PYX_ERR(0, 94, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__71);
  __Pyx_GIVEREF(__pyx_tuple__71);
  __pyx_codeobj__72 = (PyObject*)__Pyx_PyCode_New(5, 0, 9, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__71, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_generate_passsword_from_name, 94, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__72)) __PYX_ERR(0, 94, __pyx_L1_error)
  __pyx_tuple__73 = PyTuple_Pack(3, ((PyObject *)__pyx_int_2), ((PyObject *)Py_False), ((PyObject *)__pyx_int_6)); if (unlikely(!__pyx_tuple__73)) __PYX_ERR(0, 94, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__73);
  __Pyx_GIVEREF(__pyx_tuple__73);

   
  __pyx_tuple__74 = PyTuple_Pack(4, __pyx_n_s_filename, __pyx_n_s_value, __pyx_n_s_dirs, __pyx_n_s_f); if (unlikely(!__pyx_tuple__74)) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__74);
  __Pyx_GIVEREF(__pyx_tuple__74);
  __pyx_codeobj__75 = (PyObject*)__Pyx_PyCode_New(2, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__74, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_save_result, 110, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__75)) __PYX_ERR(0, 110, __pyx_L1_error)

   
  __pyx_tuple__76 = PyTuple_Pack(17, __pyx_n_s_then, __pyx_n_s_now, __pyx_n_s_interval, __pyx_n_s_duration, __pyx_n_s_duration_in_s, __pyx_n_s_years, __pyx_n_s_years, __pyx_n_s_days, __pyx_n_s_days, __pyx_n_s_hours, __pyx_n_s_hours, __pyx_n_s_minutes, __pyx_n_s_minutes, __pyx_n_s_seconds, __pyx_n_s_seconds, __pyx_n_s_total_duration, __pyx_n_s_total_duration); if (unlikely(!__pyx_tuple__76)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__76);
  __Pyx_GIVEREF(__pyx_tuple__76);
  __pyx_codeobj__77 = (PyObject*)__Pyx_PyCode_New(3, 0, 17, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__76, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_get_duration, 125, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__77)) __PYX_ERR(0, 125, __pyx_L1_error)

   
  __pyx_tuple__78 = PyTuple_Pack(4, __pyx_n_s_username, __pyx_n_s_headers, __pyx_n_s_link, __pyx_n_s_userid); if (unlikely(!__pyx_tuple__78)) __PYX_ERR(0, 167, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__78);
  __Pyx_GIVEREF(__pyx_tuple__78);
  __pyx_codeobj__79 = (PyObject*)__Pyx_PyCode_New(1, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__78, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_lookup_id, 167, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__79)) __PYX_ERR(0, 167, __pyx_L1_error)

   
  __pyx_tuple__80 = PyTuple_Pack(4, __pyx_n_s_link, __pyx_n_s_patterns, __pyx_n_s_pattern, __pyx_n_s_fbid); if (unlikely(!__pyx_tuple__80)) __PYX_ERR(0, 192, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__80);
  __Pyx_GIVEREF(__pyx_tuple__80);
  __pyx_codeobj__81 = (PyObject*)__Pyx_PyCode_New(1, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__80, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_find_post_id, 192, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__81)) __PYX_ERR(0, 192, __pyx_L1_error)

   
  __pyx_tuple__82 = PyTuple_Pack(2, __pyx_n_s_url, __pyx_n_s_result); if (unlikely(!__pyx_tuple__82)) __PYX_ERR(0, 208, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__82);
  __Pyx_GIVEREF(__pyx_tuple__82);
  __pyx_codeobj__83 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__82, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_is_valid_url, 208, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__83)) __PYX_ERR(0, 208, __pyx_L1_error)

   
  __pyx_tuple__84 = PyTuple_Pack(3, __pyx_n_s_fb, __pyx_n_s_android_version, __pyx_n_s_model); if (unlikely(!__pyx_tuple__84)) __PYX_ERR(0, 529, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__84);
  __Pyx_GIVEREF(__pyx_tuple__84);
  __pyx_codeobj__85 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__84, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_samsung, 529, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__85)) __PYX_ERR(0, 529, __pyx_L1_error)
  __pyx_tuple__86 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__86)) __PYX_ERR(0, 529, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__86);
  __Pyx_GIVEREF(__pyx_tuple__86);

   
  __pyx_tuple__87 = PyTuple_Pack(3, __pyx_n_s_fb, __pyx_n_s_android_version, __pyx_n_s_model); if (unlikely(!__pyx_tuple__87)) __PYX_ERR(0, 539, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__87);
  __Pyx_GIVEREF(__pyx_tuple__87);
  __pyx_codeobj__88 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__87, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_xiaomi, 539, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__88)) __PYX_ERR(0, 539, __pyx_L1_error)
  __pyx_tuple__89 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__89)) __PYX_ERR(0, 539, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__89);
  __Pyx_GIVEREF(__pyx_tuple__89);

   
  __pyx_tuple__90 = PyTuple_Pack(3, __pyx_n_s_fb, __pyx_n_s_android_version, __pyx_n_s_model); if (unlikely(!__pyx_tuple__90)) __PYX_ERR(0, 549, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__90);
  __Pyx_GIVEREF(__pyx_tuple__90);
  __pyx_codeobj__91 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__90, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_oppo, 549, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__91)) __PYX_ERR(0, 549, __pyx_L1_error)
  __pyx_tuple__92 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__92)) __PYX_ERR(0, 549, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__92);
  __Pyx_GIVEREF(__pyx_tuple__92);

   
  __pyx_tuple__93 = PyTuple_Pack(3, __pyx_n_s_fb, __pyx_n_s_android_version, __pyx_n_s_model); if (unlikely(!__pyx_tuple__93)) __PYX_ERR(0, 559, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__93);
  __Pyx_GIVEREF(__pyx_tuple__93);
  __pyx_codeobj__94 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__93, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_infinix, 559, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__94)) __PYX_ERR(0, 559, __pyx_L1_error)
  __pyx_tuple__95 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__95)) __PYX_ERR(0, 559, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__95);
  __Pyx_GIVEREF(__pyx_tuple__95);

   
  __pyx_tuple__96 = PyTuple_Pack(3, __pyx_n_s_fb, __pyx_n_s_android_version, __pyx_n_s_model); if (unlikely(!__pyx_tuple__96)) __PYX_ERR(0, 569, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__96);
  __Pyx_GIVEREF(__pyx_tuple__96);
  __pyx_codeobj__97 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__96, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_vivo, 569, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__97)) __PYX_ERR(0, 569, __pyx_L1_error)
  __pyx_tuple__98 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__98)) __PYX_ERR(0, 569, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__98);
  __Pyx_GIVEREF(__pyx_tuple__98);

   
  __pyx_tuple__99 = PyTuple_Pack(3, __pyx_n_s_fb, __pyx_n_s_mobile_id, __pyx_n_s_iphone_version); if (unlikely(!__pyx_tuple__99)) __PYX_ERR(0, 579, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__99);
  __Pyx_GIVEREF(__pyx_tuple__99);
  __pyx_codeobj__100 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__99, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_iphone, 579, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__100)) __PYX_ERR(0, 579, __pyx_L1_error)
  __pyx_tuple__101 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__101)) __PYX_ERR(0, 579, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__101);
  __Pyx_GIVEREF(__pyx_tuple__101);

   
  __pyx_tuple__102 = PyTuple_Pack(1, __pyx_n_s_iphone_version); if (unlikely(!__pyx_tuple__102)) __PYX_ERR(0, 589, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__102);
  __Pyx_GIVEREF(__pyx_tuple__102);
  __pyx_codeobj__103 = (PyObject*)__Pyx_PyCode_New(0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__102, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_macOS, 589, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__103)) __PYX_ERR(0, 589, __pyx_L1_error)

   
  __pyx_tuple__104 = PyTuple_Pack(1, __pyx_n_s_window_version); if (unlikely(!__pyx_tuple__104)) __PYX_ERR(0, 596, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__104);
  __Pyx_GIVEREF(__pyx_tuple__104);
  __pyx_codeobj__105 = (PyObject*)__Pyx_PyCode_New(0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__104, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_window, 596, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__105)) __PYX_ERR(0, 596, __pyx_L1_error)

   
  __pyx_codeobj__106 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_linux, 603, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__106)) __PYX_ERR(0, 603, __pyx_L1_error)

   
  __pyx_tuple__107 = PyTuple_Pack(1, __pyx_n_s_fb); if (unlikely(!__pyx_tuple__107)) __PYX_ERR(0, 609, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__107);
  __Pyx_GIVEREF(__pyx_tuple__107);
  __pyx_codeobj__108 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__107, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_android, 609, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__108)) __PYX_ERR(0, 609, __pyx_L1_error)
  __pyx_tuple__109 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__109)) __PYX_ERR(0, 609, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__109);
  __Pyx_GIVEREF(__pyx_tuple__109);

   
  __pyx_tuple__110 = PyTuple_Pack(1, __pyx_n_s_fb); if (unlikely(!__pyx_tuple__110)) __PYX_ERR(0, 612, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__110);
  __Pyx_GIVEREF(__pyx_tuple__110);
  __pyx_codeobj__111 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__110, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_mobile, 612, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__111)) __PYX_ERR(0, 612, __pyx_L1_error)
  __pyx_tuple__112 = PyTuple_Pack(1, ((PyObject *)Py_False)); if (unlikely(!__pyx_tuple__112)) __PYX_ERR(0, 612, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__112);
  __Pyx_GIVEREF(__pyx_tuple__112);

   
  __pyx_codeobj__113 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_utils_py, __pyx_n_s_desktop, 615, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__113)) __PYX_ERR(0, 615, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
  __pyx_umethod_PyDict_Type_keys.type = (PyObject*)&PyDict_Type;
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_float_1_0 = PyFloat_FromDouble(1.0); if (unlikely(!__pyx_float_1_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_float_8_0 = PyFloat_FromDouble(8.0); if (unlikely(!__pyx_float_8_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_float_10_0 = PyFloat_FromDouble(10.0); if (unlikely(!__pyx_float_10_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_float_60_0 = PyFloat_FromDouble(60.0); if (unlikely(!__pyx_float_60_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_float_80_0 = PyFloat_FromDouble(80.0); if (unlikely(!__pyx_float_80_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_float_100_0 = PyFloat_FromDouble(100.0); if (unlikely(!__pyx_float_100_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_2 = PyInt_FromLong(2); if (unlikely(!__pyx_int_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_3 = PyInt_FromLong(3); if (unlikely(!__pyx_int_3)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_6 = PyInt_FromLong(6); if (unlikely(!__pyx_int_6)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_7 = PyInt_FromLong(7); if (unlikely(!__pyx_int_7)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_8 = PyInt_FromLong(8); if (unlikely(!__pyx_int_8)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_9 = PyInt_FromLong(9); if (unlikely(!__pyx_int_9)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_10 = PyInt_FromLong(10); if (unlikely(!__pyx_int_10)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_12 = PyInt_FromLong(12); if (unlikely(!__pyx_int_12)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_13 = PyInt_FromLong(13); if (unlikely(!__pyx_int_13)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_16 = PyInt_FromLong(16); if (unlikely(!__pyx_int_16)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_50 = PyInt_FromLong(50); if (unlikely(!__pyx_int_50)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_60 = PyInt_FromLong(60); if (unlikely(!__pyx_int_60)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_100 = PyInt_FromLong(100); if (unlikely(!__pyx_int_100)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_300 = PyInt_FromLong(300); if (unlikely(!__pyx_int_300)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_420 = PyInt_FromLong(420); if (unlikely(!__pyx_int_420)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_600 = PyInt_FromLong(600); if (unlikely(!__pyx_int_600)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_700 = PyInt_FromLong(700); if (unlikely(!__pyx_int_700)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_800 = PyInt_FromLong(800); if (unlikely(!__pyx_int_800)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_900 = PyInt_FromLong(900); if (unlikely(!__pyx_int_900)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1000 = PyInt_FromLong(1000); if (unlikely(!__pyx_int_1000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_3600 = PyInt_FromLong(3600); if (unlikely(!__pyx_int_3600)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_9000 = PyInt_FromLong(9000); if (unlikely(!__pyx_int_9000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_86400 = PyInt_FromLong(86400L); if (unlikely(!__pyx_int_86400)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_100000 = PyInt_FromLong(100000L); if (unlikely(!__pyx_int_100000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_900000 = PyInt_FromLong(900000L); if (unlikely(!__pyx_int_900000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_31536000 = PyInt_FromLong(31536000L); if (unlikely(!__pyx_int_31536000)) __PYX_ERR(0, 1, __pyx_L1_error)
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
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
   
  if (PyType_Ready(&__pyx_type_5utils___pyx_scope_struct__get_duration) < 0) __PYX_ERR(0, 125, __pyx_L1_error)
  #if PY_VERSION_HEX < 0x030800B1
  __pyx_type_5utils___pyx_scope_struct__get_duration.tp_print = 0;
  #endif
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_type_5utils___pyx_scope_struct__get_duration.tp_dictoffset && __pyx_type_5utils___pyx_scope_struct__get_duration.tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_type_5utils___pyx_scope_struct__get_duration.tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  __pyx_ptype_5utils___pyx_scope_struct__get_duration = &__pyx_type_5utils___pyx_scope_struct__get_duration;
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
__Pyx_PyMODINIT_FUNC initutils(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC initutils(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_utils(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC PyInit_utils(void)
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


static CYTHON_SMALL_CODE int __pyx_pymod_exec_utils(PyObject *__pyx_pyinit_module)
#endif
#endif
{
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'utils' has already been imported. Re-initialisation is not supported.");
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
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_utils(void)", 0);
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
  __pyx_m = Py_InitModule4("utils", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
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
  if (__pyx_module_is_main_utils) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name_2, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "utils")) {
      if (unlikely(PyDict_SetItemString(modules, "utils", __pyx_m) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
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

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_re, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_re, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_os, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_os, __pyx_t_1) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_sys, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_sys, __pyx_t_1) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_random, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_1) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_pathlib, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_pathlib, __pyx_t_1) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_requests, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_requests, __pyx_t_1) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_subprocess, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_subprocess, __pyx_t_1) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
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
  __Pyx_INCREF(__pyx_n_s_datetime);
  __Pyx_GIVEREF(__pyx_n_s_datetime);
  PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_datetime);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_datetime, __pyx_t_2, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_datetime); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_datetime, __pyx_t_2) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_urlparse);
  __Pyx_GIVEREF(__pyx_n_s_urlparse);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_urlparse);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_urllib_parse, __pyx_t_1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_urlparse); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_urlparse, __pyx_t_1) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_1clear_screen, 0, __pyx_n_s_clear_screen, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__49)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_clear_screen, __pyx_t_2) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_3reload, 0, __pyx_n_s_reload, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__51)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_reload, __pyx_t_2) < 0) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_5open_link, 0, __pyx_n_s_open_link, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__53)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_open_link, __pyx_t_2) < 0) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_7cookie_string_to_dict, 0, __pyx_n_s_cookie_string_to_dict, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__55)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_cookie_string_to_dict, __pyx_t_2) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_9cookie_dict_to_string, 0, __pyx_n_s_cookie_dict_to_string, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__57)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_cookie_dict_to_string, __pyx_t_2) < 0) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_11decode_unicode, 0, __pyx_n_s_decode_unicode, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__59)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_decode_unicode, __pyx_t_2) < 0) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_13sort_object, 0, __pyx_n_s_sort_object, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__61)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_sort_object, __pyx_t_2) < 0) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15object_except, 0, __pyx_n_s_object_except, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__63)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_object_except, __pyx_t_2) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_17random_string, 0, __pyx_n_s_random_string, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__65)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random_string, __pyx_t_2) < 0) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_19unique, 0, __pyx_n_s_unique, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__67)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 71, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_unique, __pyx_t_2) < 0) __PYX_ERR(0, 71, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_21sensor_string, 0, __pyx_n_s_sensor_string, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__69)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_2, __pyx_tuple__70);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_sensor_string, __pyx_t_2) < 0) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_23generate_passsword_from_name, 0, __pyx_n_s_generate_passsword_from_name, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__72)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 94, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_2, __pyx_tuple__73);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_generate_passsword_from_name, __pyx_t_2) < 0) __PYX_ERR(0, 94, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_25save_result, 0, __pyx_n_s_save_result, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__75)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_save_result, __pyx_t_2) < 0) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_27get_duration, 0, __pyx_n_s_get_duration, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__77)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (!__Pyx_CyFunction_InitDefaults(__pyx_t_2, sizeof(__pyx_defaults), 1)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_datetime); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_now); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_t_2)->__pyx_arg_now = __pyx_t_1;
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_t_1 = 0;
  __Pyx_CyFunction_SetDefaultsGetter(__pyx_t_2, __pyx_pf_5utils_32__defaults__);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_duration, __pyx_t_2) < 0) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_29lookup_id, 0, __pyx_n_s_lookup_id, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__79)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 167, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_lookup_id, __pyx_t_2) < 0) __PYX_ERR(0, 167, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_31find_post_id, 0, __pyx_n_s_find_post_id, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__81)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 192, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_find_post_id, __pyx_t_2) < 0) __PYX_ERR(0, 192, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_Validator, __pyx_n_s_Validator, (PyObject *) NULL, __pyx_n_s_utils, (PyObject *) NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 207, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_9Validator_1is_valid_url, 0, __pyx_n_s_Validator_is_valid_url, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__83)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 208, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_is_valid_url, __pyx_t_1) < 0) __PYX_ERR(0, 208, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Py3ClassCreate(((PyObject*)&__Pyx_DefaultClassType), __pyx_n_s_Validator, __pyx_empty_tuple, __pyx_t_2, NULL, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 207, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Validator, __pyx_t_1) < 0) __PYX_ERR(0, 207, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_RandomUserAgent, __pyx_n_s_RandomUserAgent, (PyObject *) NULL, __pyx_n_s_utils, (PyObject *) NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 215, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

   
  __pyx_t_1 = PyList_New(105); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 216, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_kp_u_SM_G981B);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G981B);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_SM_G981B);
  __Pyx_INCREF(__pyx_kp_u_SM_N976V);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N976V);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_kp_u_SM_N976V);
  __Pyx_INCREF(__pyx_kp_u_SM_G977N);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G977N);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_SM_G977N);
  __Pyx_INCREF(__pyx_kp_u_SM_G975F);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G975F);
  PyList_SET_ITEM(__pyx_t_1, 3, __pyx_kp_u_SM_G975F);
  __Pyx_INCREF(__pyx_kp_u_SM_G970F);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G970F);
  PyList_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_SM_G970F);
  __Pyx_INCREF(__pyx_kp_u_SM_F900U);
  __Pyx_GIVEREF(__pyx_kp_u_SM_F900U);
  PyList_SET_ITEM(__pyx_t_1, 5, __pyx_kp_u_SM_F900U);
  __Pyx_INCREF(__pyx_kp_u_SM_A805F);
  __Pyx_GIVEREF(__pyx_kp_u_SM_A805F);
  PyList_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_SM_A805F);
  __Pyx_INCREF(__pyx_kp_u_SM_A505F);
  __Pyx_GIVEREF(__pyx_kp_u_SM_A505F);
  PyList_SET_ITEM(__pyx_t_1, 7, __pyx_kp_u_SM_A505F);
  __Pyx_INCREF(__pyx_kp_u_SM_G357FZWZXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G357FZWZXEF);
  PyList_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_SM_G357FZWZXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G850FHSEXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G850FHSEXEF);
  PyList_SET_ITEM(__pyx_t_1, 9, __pyx_kp_u_SM_G850FHSEXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G386TRKATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G386TRKATMB);
  PyList_SET_ITEM(__pyx_t_1, 10, __pyx_kp_u_SM_G386TRKATMB);
  __Pyx_INCREF(__pyx_kp_u_SM_G386TZKATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G386TZKATMB);
  PyList_SET_ITEM(__pyx_t_1, 11, __pyx_kp_u_SM_G386TZKATMB);
  __Pyx_INCREF(__pyx_kp_u_SM_G386FZKAXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G386FZKAXEF);
  PyList_SET_ITEM(__pyx_t_1, 12, __pyx_kp_u_SM_G386FZKAXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G3500ZKAXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G3500ZKAXEF);
  PyList_SET_ITEM(__pyx_t_1, 13, __pyx_kp_u_SM_G3500ZKAXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G360FZSAXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G360FZSAXEF);
  PyList_SET_ITEM(__pyx_t_1, 14, __pyx_kp_u_SM_G360FZSAXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G530RZWAUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G530RZWAUSC);
  PyList_SET_ITEM(__pyx_t_1, 15, __pyx_kp_u_SM_G530RZWAUSC);
  __Pyx_INCREF(__pyx_kp_u_SM_G530TZAATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G530TZAATMB);
  PyList_SET_ITEM(__pyx_t_1, 16, __pyx_kp_u_SM_G530TZAATMB);
  __Pyx_INCREF(__pyx_kp_u_SM_G530PZAASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G530PZAASPR);
  PyList_SET_ITEM(__pyx_t_1, 17, __pyx_kp_u_SM_G530PZAASPR);
  __Pyx_INCREF(__pyx_kp_u_SM_G530AZWZAIO);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G530AZWZAIO);
  PyList_SET_ITEM(__pyx_t_1, 18, __pyx_kp_u_SM_G530AZWZAIO);
  __Pyx_INCREF(__pyx_kp_u_SM_G750ANKAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G750ANKAATT);
  PyList_SET_ITEM(__pyx_t_1, 19, __pyx_kp_u_SM_G750ANKAATT);
  __Pyx_INCREF(__pyx_kp_u_SM_N900VWDEVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N900VWDEVZW);
  PyList_SET_ITEM(__pyx_t_1, 20, __pyx_kp_u_SM_N900VWDEVZW);
  __Pyx_INCREF(__pyx_kp_u_SM_N900VZKEVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N900VZKEVZW);
  PyList_SET_ITEM(__pyx_t_1, 21, __pyx_kp_u_SM_N900VZKEVZW);
  __Pyx_INCREF(__pyx_kp_u_SM_N900AZKEATT);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N900AZKEATT);
  PyList_SET_ITEM(__pyx_t_1, 22, __pyx_kp_u_SM_N900AZKEATT);
  __Pyx_INCREF(__pyx_kp_u_SM_N900TZKETMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N900TZKETMB);
  PyList_SET_ITEM(__pyx_t_1, 23, __pyx_kp_u_SM_N900TZKETMB);
  __Pyx_INCREF(__pyx_kp_u_SM_N900PZKESPR);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N900PZKESPR);
  PyList_SET_ITEM(__pyx_t_1, 24, __pyx_kp_u_SM_N900PZKESPR);
  __Pyx_INCREF(__pyx_kp_u_SM_N910AZKEATT);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N910AZKEATT);
  PyList_SET_ITEM(__pyx_t_1, 25, __pyx_kp_u_SM_N910AZKEATT);
  __Pyx_INCREF(__pyx_kp_u_SM_N910PZKESPR);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N910PZKESPR);
  PyList_SET_ITEM(__pyx_t_1, 26, __pyx_kp_u_SM_N910PZKESPR);
  __Pyx_INCREF(__pyx_kp_u_SM_N910VZKEVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N910VZKEVZW);
  PyList_SET_ITEM(__pyx_t_1, 27, __pyx_kp_u_SM_N910VZKEVZW);
  __Pyx_INCREF(__pyx_kp_u_SM_N910TZKETMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N910TZKETMB);
  PyList_SET_ITEM(__pyx_t_1, 28, __pyx_kp_u_SM_N910TZKETMB);
  __Pyx_INCREF(__pyx_kp_u_SM_N910RZKEUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N910RZKEUSC);
  PyList_SET_ITEM(__pyx_t_1, 29, __pyx_kp_u_SM_N910RZKEUSC);
  __Pyx_INCREF(__pyx_kp_u_SM_N915VZKEVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N915VZKEVZW);
  PyList_SET_ITEM(__pyx_t_1, 30, __pyx_kp_u_SM_N915VZKEVZW);
  __Pyx_INCREF(__pyx_kp_u_SM_N915AZKEATT);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N915AZKEATT);
  PyList_SET_ITEM(__pyx_t_1, 31, __pyx_kp_u_SM_N915AZKEATT);
  __Pyx_INCREF(__pyx_kp_u_SM_N915TZKETMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N915TZKETMB);
  PyList_SET_ITEM(__pyx_t_1, 32, __pyx_kp_u_SM_N915TZKETMB);
  __Pyx_INCREF(__pyx_kp_u_SM_N915PZKESPR);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N915PZKESPR);
  PyList_SET_ITEM(__pyx_t_1, 33, __pyx_kp_u_SM_N915PZKESPR);
  __Pyx_INCREF(__pyx_kp_u_SM_N915RZKEUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SM_N915RZKEUSC);
  PyList_SET_ITEM(__pyx_t_1, 34, __pyx_kp_u_SM_N915RZKEUSC);
  __Pyx_INCREF(__pyx_kp_u_SM_G730VMBAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G730VMBAVZW);
  PyList_SET_ITEM(__pyx_t_1, 35, __pyx_kp_u_SM_G730VMBAVZW);
  __Pyx_INCREF(__pyx_kp_u_SM_G730AMBAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G730AMBAATT);
  PyList_SET_ITEM(__pyx_t_1, 36, __pyx_kp_u_SM_G730AMBAATT);
  __Pyx_INCREF(__pyx_kp_u_SM_S890LZKATFN);
  __Pyx_GIVEREF(__pyx_kp_u_SM_S890LZKATFN);
  PyList_SET_ITEM(__pyx_t_1, 37, __pyx_kp_u_SM_S890LZKATFN);
  __Pyx_INCREF(__pyx_kp_u_SM_C105AZWAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SM_C105AZWAATT);
  PyList_SET_ITEM(__pyx_t_1, 38, __pyx_kp_u_SM_C105AZWAATT);
  __Pyx_INCREF(__pyx_kp_u_SM_G900PZWEVMU);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900PZWEVMU);
  PyList_SET_ITEM(__pyx_t_1, 39, __pyx_kp_u_SM_G900PZWEVMU);
  __Pyx_INCREF(__pyx_kp_u_SM_S902LZKATFN);
  __Pyx_GIVEREF(__pyx_kp_u_SM_S902LZKATFN);
  PyList_SET_ITEM(__pyx_t_1, 40, __pyx_kp_u_SM_S902LZKATFN);
  __Pyx_INCREF(__pyx_kp_u_SM_G900VZDAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900VZDAVZW);
  PyList_SET_ITEM(__pyx_t_1, 41, __pyx_kp_u_SM_G900VZDAVZW);
  __Pyx_INCREF(__pyx_kp_u_SM_G900AZDAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900AZDAATT);
  PyList_SET_ITEM(__pyx_t_1, 42, __pyx_kp_u_SM_G900AZDAATT);
  __Pyx_INCREF(__pyx_kp_u_SM_G900TZDATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900TZDATMB);
  PyList_SET_ITEM(__pyx_t_1, 43, __pyx_kp_u_SM_G900TZDATMB);
  __Pyx_INCREF(__pyx_kp_u_SM_G900PZDASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900PZDASPR);
  PyList_SET_ITEM(__pyx_t_1, 44, __pyx_kp_u_SM_G900PZDASPR);
  __Pyx_INCREF(__pyx_kp_u_SM_G900TRKATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900TRKATMB);
  PyList_SET_ITEM(__pyx_t_1, 45, __pyx_kp_u_SM_G900TRKATMB);
  __Pyx_INCREF(__pyx_kp_u_SM_G900PZWABST);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900PZWABST);
  PyList_SET_ITEM(__pyx_t_1, 46, __pyx_kp_u_SM_G900PZWABST);
  __Pyx_INCREF(__pyx_kp_u_SM_G900RZDAUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900RZDAUSC);
  PyList_SET_ITEM(__pyx_t_1, 47, __pyx_kp_u_SM_G900RZDAUSC);
  __Pyx_INCREF(__pyx_kp_u_SM_G900PZWAVMU);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900PZWAVMU);
  PyList_SET_ITEM(__pyx_t_1, 48, __pyx_kp_u_SM_G900PZWAVMU);
  __Pyx_INCREF(__pyx_kp_u_SM_G900AZKZAIO);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G900AZKZAIO);
  PyList_SET_ITEM(__pyx_t_1, 49, __pyx_kp_u_SM_G900AZKZAIO);
  __Pyx_INCREF(__pyx_kp_u_SM_G800FZKAXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G800FZKAXEF);
  PyList_SET_ITEM(__pyx_t_1, 50, __pyx_kp_u_SM_G800FZKAXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G920FZKAXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G920FZKAXEF);
  PyList_SET_ITEM(__pyx_t_1, 51, __pyx_kp_u_SM_G920FZKAXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G925FZKAXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G925FZKAXEF);
  PyList_SET_ITEM(__pyx_t_1, 52, __pyx_kp_u_SM_G925FZKAXEF);
  __Pyx_INCREF(__pyx_kp_u_SM_G388FDSAXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_G388FDSAXEF);
  PyList_SET_ITEM(__pyx_t_1, 53, __pyx_kp_u_SM_G388FDSAXEF);
  __Pyx_INCREF(__pyx_kp_u_F_A500ZKU16_01);
  __Pyx_GIVEREF(__pyx_kp_u_F_A500ZKU16_01);
  PyList_SET_ITEM(__pyx_t_1, 54, __pyx_kp_u_F_A500ZKU16_01);
  __Pyx_INCREF(__pyx_kp_u_F_A700ZKA32_01);
  __Pyx_GIVEREF(__pyx_kp_u_F_A700ZKA32_01);
  PyList_SET_ITEM(__pyx_t_1, 55, __pyx_kp_u_F_A700ZKA32_01);
  __Pyx_INCREF(__pyx_kp_u_GT_S7275UWNXEF);
  __Pyx_GIVEREF(__pyx_kp_u_GT_S7275UWNXEF);
  PyList_SET_ITEM(__pyx_t_1, 56, __pyx_kp_u_GT_S7275UWNXEF);
  __Pyx_INCREF(__pyx_kp_u_GT_I9100P);
  __Pyx_GIVEREF(__pyx_kp_u_GT_I9100P);
  PyList_SET_ITEM(__pyx_t_1, 57, __pyx_kp_u_GT_I9100P);
  __Pyx_INCREF(__pyx_kp_u_SM_W750VMSAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SM_W750VMSAVZW);
  PyList_SET_ITEM(__pyx_t_1, 58, __pyx_kp_u_SM_W750VMSAVZW);
  __Pyx_INCREF(__pyx_kp_u_SM_A300FZKUXEF);
  __Pyx_GIVEREF(__pyx_kp_u_SM_A300FZKUXEF);
  PyList_SET_ITEM(__pyx_t_1, 59, __pyx_kp_u_SM_A300FZKUXEF);
  __Pyx_INCREF(__pyx_kp_u_SCH_I930MSAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I930MSAVZW);
  PyList_SET_ITEM(__pyx_t_1, 60, __pyx_kp_u_SCH_I930MSAVZW);
  __Pyx_INCREF(__pyx_kp_u_SCH_R860MSAUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_R860MSAUSC);
  PyList_SET_ITEM(__pyx_t_1, 61, __pyx_kp_u_SCH_R860MSAUSC);
  __Pyx_INCREF(__pyx_kp_u_SGH_I187XBAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I187XBAATT);
  PyList_SET_ITEM(__pyx_t_1, 62, __pyx_kp_u_SGH_I187XBAATT);
  __Pyx_INCREF(__pyx_kp_u_SPH_I800HNASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_I800HNASPR);
  PyList_SET_ITEM(__pyx_t_1, 63, __pyx_kp_u_SPH_I800HNASPR);
  __Pyx_INCREF(__pyx_kp_u_SCH_I605TSAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I605TSAVZW);
  PyList_SET_ITEM(__pyx_t_1, 64, __pyx_kp_u_SCH_I605TSAVZW);
  __Pyx_INCREF(__pyx_kp_u_SGH_I317TSAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I317TSAATT);
  PyList_SET_ITEM(__pyx_t_1, 65, __pyx_kp_u_SGH_I317TSAATT);
  __Pyx_INCREF(__pyx_kp_u_SGH_T889TSATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_T889TSATMB);
  PyList_SET_ITEM(__pyx_t_1, 66, __pyx_kp_u_SGH_T889TSATMB);
  __Pyx_INCREF(__pyx_kp_u_SPH_L900TSASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L900TSASPR);
  PyList_SET_ITEM(__pyx_t_1, 67, __pyx_kp_u_SPH_L900TSASPR);
  __Pyx_INCREF(__pyx_kp_u_SGH_T399DNATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_T399DNATMB);
  PyList_SET_ITEM(__pyx_t_1, 68, __pyx_kp_u_SGH_T399DNATMB);
  __Pyx_INCREF(__pyx_kp_u_SGH_I527ZKBATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I527ZKBATT);
  PyList_SET_ITEM(__pyx_t_1, 69, __pyx_kp_u_SGH_I527ZKBATT);
  __Pyx_INCREF(__pyx_kp_u_SPH_L600ZKASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L600ZKASPR);
  PyList_SET_ITEM(__pyx_t_1, 70, __pyx_kp_u_SPH_L600ZKASPR);
  __Pyx_INCREF(__pyx_kp_u_SGH_M819ZKATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_M819ZKATMB);
  PyList_SET_ITEM(__pyx_t_1, 71, __pyx_kp_u_SGH_M819ZKATMB);
  __Pyx_INCREF(__pyx_kp_u_SCH_R960ZKAUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_R960ZKAUSC);
  PyList_SET_ITEM(__pyx_t_1, 72, __pyx_kp_u_SCH_R960ZKAUSC);
  __Pyx_INCREF(__pyx_kp_u_SCH_I535ZKBVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I535ZKBVZW);
  PyList_SET_ITEM(__pyx_t_1, 73, __pyx_kp_u_SCH_I535ZKBVZW);
  __Pyx_INCREF(__pyx_kp_u_SGH_I747MBBATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I747MBBATT);
  PyList_SET_ITEM(__pyx_t_1, 74, __pyx_kp_u_SGH_I747MBBATT);
  __Pyx_INCREF(__pyx_kp_u_SGH_T999MBATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_T999MBATMB);
  PyList_SET_ITEM(__pyx_t_1, 75, __pyx_kp_u_SGH_T999MBATMB);
  __Pyx_INCREF(__pyx_kp_u_SGH_T999ZWATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_T999ZWATMB);
  PyList_SET_ITEM(__pyx_t_1, 76, __pyx_kp_u_SGH_T999ZWATMB);
  __Pyx_INCREF(__pyx_kp_u_SPH_L710MBBSPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L710MBBSPR);
  PyList_SET_ITEM(__pyx_t_1, 77, __pyx_kp_u_SPH_L710MBBSPR);
  __Pyx_INCREF(__pyx_kp_u_SPH_L710RWBBST);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L710RWBBST);
  PyList_SET_ITEM(__pyx_t_1, 78, __pyx_kp_u_SPH_L710RWBBST);
  __Pyx_INCREF(__pyx_kp_u_SPH_L710RWBVMU);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L710RWBVMU);
  PyList_SET_ITEM(__pyx_t_1, 79, __pyx_kp_u_SPH_L710RWBVMU);
  __Pyx_INCREF(__pyx_kp_u_SCH_S960RWBTFN);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_S960RWBTFN);
  PyList_SET_ITEM(__pyx_t_1, 80, __pyx_kp_u_SCH_S960RWBTFN);
  __Pyx_INCREF(__pyx_kp_u_SCH_I535MBPVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I535MBPVZW);
  PyList_SET_ITEM(__pyx_t_1, 81, __pyx_kp_u_SCH_I535MBPVZW);
  __Pyx_INCREF(__pyx_kp_u_SPH_L720ZWRBST);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L720ZWRBST);
  PyList_SET_ITEM(__pyx_t_1, 82, __pyx_kp_u_SPH_L720ZWRBST);
  __Pyx_INCREF(__pyx_kp_u_SCH_I545ZBAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I545ZBAVZW);
  PyList_SET_ITEM(__pyx_t_1, 83, __pyx_kp_u_SCH_I545ZBAVZW);
  __Pyx_INCREF(__pyx_kp_u_SCH_I545ZWBVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I545ZWBVZW);
  PyList_SET_ITEM(__pyx_t_1, 84, __pyx_kp_u_SCH_I545ZWBVZW);
  __Pyx_INCREF(__pyx_kp_u_SCH_I545ZWAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I545ZWAVZW);
  PyList_SET_ITEM(__pyx_t_1, 85, __pyx_kp_u_SCH_I545ZWAVZW);
  __Pyx_INCREF(__pyx_kp_u_SGH_I337ZRAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I337ZRAATT);
  PyList_SET_ITEM(__pyx_t_1, 86, __pyx_kp_u_SGH_I337ZRAATT);
  __Pyx_INCREF(__pyx_kp_u_SGH_M919ZWATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_M919ZWATMB);
  PyList_SET_ITEM(__pyx_t_1, 87, __pyx_kp_u_SGH_M919ZWATMB);
  __Pyx_INCREF(__pyx_kp_u_SPH_L720ZBASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L720ZBASPR);
  PyList_SET_ITEM(__pyx_t_1, 88, __pyx_kp_u_SPH_L720ZBASPR);
  __Pyx_INCREF(__pyx_kp_u_SPH_L720ZPASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L720ZPASPR);
  PyList_SET_ITEM(__pyx_t_1, 89, __pyx_kp_u_SPH_L720ZPASPR);
  __Pyx_INCREF(__pyx_kp_u_SPH_L300ZSAVMU);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L300ZSAVMU);
  PyList_SET_ITEM(__pyx_t_1, 90, __pyx_kp_u_SPH_L300ZSAVMU);
  __Pyx_INCREF(__pyx_kp_u_SGH_M919RWATMB);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_M919RWATMB);
  PyList_SET_ITEM(__pyx_t_1, 91, __pyx_kp_u_SGH_M919RWATMB);
  __Pyx_INCREF(__pyx_kp_u_SCH_R970ZWAUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_R970ZWAUSC);
  PyList_SET_ITEM(__pyx_t_1, 92, __pyx_kp_u_SCH_R970ZWAUSC);
  __Pyx_INCREF(__pyx_kp_u_SGH_I337ZKZAIO);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I337ZKZAIO);
  PyList_SET_ITEM(__pyx_t_1, 93, __pyx_kp_u_SGH_I337ZKZAIO);
  __Pyx_INCREF(__pyx_kp_u_SM_S975LZKATFN);
  __Pyx_GIVEREF(__pyx_kp_u_SM_S975LZKATFN);
  PyList_SET_ITEM(__pyx_t_1, 94, __pyx_kp_u_SM_S975LZKATFN);
  __Pyx_INCREF(__pyx_kp_u_SCH_I545ZKALRA);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I545ZKALRA);
  PyList_SET_ITEM(__pyx_t_1, 95, __pyx_kp_u_SCH_I545ZKALRA);
  __Pyx_INCREF(__pyx_kp_u_SCH_R970ZWACSP);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_R970ZWACSP);
  PyList_SET_ITEM(__pyx_t_1, 96, __pyx_kp_u_SCH_R970ZWACSP);
  __Pyx_INCREF(__pyx_kp_u_SGH_I537ZAAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I537ZAAATT);
  PyList_SET_ITEM(__pyx_t_1, 97, __pyx_kp_u_SGH_I537ZAAATT);
  __Pyx_INCREF(__pyx_kp_u_SCH_I435ZKAVZW);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I435ZKAVZW);
  PyList_SET_ITEM(__pyx_t_1, 98, __pyx_kp_u_SCH_I435ZKAVZW);
  __Pyx_INCREF(__pyx_kp_u_SGH_I257ZKAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I257ZKAATT);
  PyList_SET_ITEM(__pyx_t_1, 99, __pyx_kp_u_SGH_I257ZKAATT);
  __Pyx_INCREF(__pyx_kp_u_SGH_I257AIAATT);
  __Pyx_GIVEREF(__pyx_kp_u_SGH_I257AIAATT);
  PyList_SET_ITEM(__pyx_t_1, 100, __pyx_kp_u_SGH_I257AIAATT);
  __Pyx_INCREF(__pyx_kp_u_SPH_L520ZKPSPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L520ZKPSPR);
  PyList_SET_ITEM(__pyx_t_1, 101, __pyx_kp_u_SPH_L520ZKPSPR);
  __Pyx_INCREF(__pyx_kp_u_SPH_L520ZKASPR);
  __Pyx_GIVEREF(__pyx_kp_u_SPH_L520ZKASPR);
  PyList_SET_ITEM(__pyx_t_1, 102, __pyx_kp_u_SPH_L520ZKASPR);
  __Pyx_INCREF(__pyx_kp_u_SCH_R890ZKAUSC);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_R890ZKAUSC);
  PyList_SET_ITEM(__pyx_t_1, 103, __pyx_kp_u_SCH_R890ZKAUSC);
  __Pyx_INCREF(__pyx_kp_u_SCH_I435ZKAXAR);
  __Pyx_GIVEREF(__pyx_kp_u_SCH_I435ZKAXAR);
  PyList_SET_ITEM(__pyx_t_1, 104, __pyx_kp_u_SCH_I435ZKAXAR);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_SAMSUNG, __pyx_t_1) < 0) __PYX_ERR(0, 216, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(59); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 323, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K40);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K40);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Redmi_K40);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K40_Gaming);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K40_Gaming);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_kp_u_Redmi_K40_Gaming);
  __Pyx_INCREF(__pyx_kp_u_Redmi_1S);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_1S);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_Redmi_1S);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K30S_Ultra);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K30S_Ultra);
  PyList_SET_ITEM(__pyx_t_1, 3, __pyx_kp_u_Redmi_K30S_Ultra);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_4_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_4_Pro);
  PyList_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Redmi_Note_4_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_7_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_7_Pro);
  PyList_SET_ITEM(__pyx_t_1, 5, __pyx_kp_u_Redmi_Note_7_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_8_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_8_Pro);
  PyList_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_Redmi_Note_8_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_9_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_9_Pro);
  PyList_SET_ITEM(__pyx_t_1, 7, __pyx_kp_u_Redmi_Note_9_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_9_Pro_Max);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_9_Pro_Max);
  PyList_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_Redmi_Note_9_Pro_Max);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_10_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_10_Pro);
  PyList_SET_ITEM(__pyx_t_1, 9, __pyx_kp_u_Redmi_Note_10_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_4);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_4);
  PyList_SET_ITEM(__pyx_t_1, 10, __pyx_kp_u_Redmi_Note_4);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_7);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_7);
  PyList_SET_ITEM(__pyx_t_1, 11, __pyx_kp_u_Redmi_Note_7);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_8);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_8);
  PyList_SET_ITEM(__pyx_t_1, 12, __pyx_kp_u_Redmi_Note_8);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_9);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_9);
  PyList_SET_ITEM(__pyx_t_1, 13, __pyx_kp_u_Redmi_Note_9);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_10);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_10);
  PyList_SET_ITEM(__pyx_t_1, 14, __pyx_kp_u_Redmi_Note_10);
  __Pyx_INCREF(__pyx_kp_u_Redmi_Note_11T_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_Note_11T_Pro);
  PyList_SET_ITEM(__pyx_t_1, 15, __pyx_kp_u_Redmi_Note_11T_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_10X);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_10X);
  PyList_SET_ITEM(__pyx_t_1, 16, __pyx_kp_u_Redmi_10X);
  __Pyx_INCREF(__pyx_kp_u_Redmi_10X_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_10X_Pro);
  PyList_SET_ITEM(__pyx_t_1, 17, __pyx_kp_u_Redmi_10X_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_6A);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_6A);
  PyList_SET_ITEM(__pyx_t_1, 18, __pyx_kp_u_Redmi_6A);
  __Pyx_INCREF(__pyx_kp_u_Redmi_6);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_6);
  PyList_SET_ITEM(__pyx_t_1, 19, __pyx_kp_u_Redmi_6);
  __Pyx_INCREF(__pyx_kp_u_Redmi_9C);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_9C);
  PyList_SET_ITEM(__pyx_t_1, 20, __pyx_kp_u_Redmi_9C);
  __Pyx_INCREF(__pyx_kp_u_Redmi_POCO_C3);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_POCO_C3);
  PyList_SET_ITEM(__pyx_t_1, 21, __pyx_kp_u_Redmi_POCO_C3);
  __Pyx_INCREF(__pyx_kp_u_Redmi_9A);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_9A);
  PyList_SET_ITEM(__pyx_t_1, 22, __pyx_kp_u_Redmi_9A);
  __Pyx_INCREF(__pyx_kp_u_POCOPHONE_F1);
  __Pyx_GIVEREF(__pyx_kp_u_POCOPHONE_F1);
  PyList_SET_ITEM(__pyx_t_1, 23, __pyx_kp_u_POCOPHONE_F1);
  __Pyx_INCREF(__pyx_kp_u_POCO_C55);
  __Pyx_GIVEREF(__pyx_kp_u_POCO_C55);
  PyList_SET_ITEM(__pyx_t_1, 24, __pyx_kp_u_POCO_C55);
  __Pyx_INCREF(__pyx_n_u_MIX2S);
  __Pyx_GIVEREF(__pyx_n_u_MIX2S);
  PyList_SET_ITEM(__pyx_t_1, 25, __pyx_n_u_MIX2S);
  __Pyx_INCREF(__pyx_n_u_MIX3);
  __Pyx_GIVEREF(__pyx_n_u_MIX3);
  PyList_SET_ITEM(__pyx_t_1, 26, __pyx_n_u_MIX3);
  __Pyx_INCREF(__pyx_kp_u_MI_MIX_3_5G);
  __Pyx_GIVEREF(__pyx_kp_u_MI_MIX_3_5G);
  PyList_SET_ITEM(__pyx_t_1, 27, __pyx_kp_u_MI_MIX_3_5G);
  __Pyx_INCREF(__pyx_kp_u_MI_10S);
  __Pyx_GIVEREF(__pyx_kp_u_MI_10S);
  PyList_SET_ITEM(__pyx_t_1, 28, __pyx_kp_u_MI_10S);
  __Pyx_INCREF(__pyx_kp_u_MI_3);
  __Pyx_GIVEREF(__pyx_kp_u_MI_3);
  PyList_SET_ITEM(__pyx_t_1, 29, __pyx_kp_u_MI_3);
  __Pyx_INCREF(__pyx_kp_u_MI_4);
  __Pyx_GIVEREF(__pyx_kp_u_MI_4);
  PyList_SET_ITEM(__pyx_t_1, 30, __pyx_kp_u_MI_4);
  __Pyx_INCREF(__pyx_kp_u_MI_4i);
  __Pyx_GIVEREF(__pyx_kp_u_MI_4i);
  PyList_SET_ITEM(__pyx_t_1, 31, __pyx_kp_u_MI_4i);
  __Pyx_INCREF(__pyx_kp_u_MI_8MI_9);
  __Pyx_GIVEREF(__pyx_kp_u_MI_8MI_9);
  PyList_SET_ITEM(__pyx_t_1, 32, __pyx_kp_u_MI_8MI_9);
  __Pyx_INCREF(__pyx_kp_u_MI_9_Pro_5G);
  __Pyx_GIVEREF(__pyx_kp_u_MI_9_Pro_5G);
  PyList_SET_ITEM(__pyx_t_1, 33, __pyx_kp_u_MI_9_Pro_5G);
  __Pyx_INCREF(__pyx_kp_u_MI_10);
  __Pyx_GIVEREF(__pyx_kp_u_MI_10);
  PyList_SET_ITEM(__pyx_t_1, 34, __pyx_kp_u_MI_10);
  __Pyx_INCREF(__pyx_kp_u_MI_11);
  __Pyx_GIVEREF(__pyx_kp_u_MI_11);
  PyList_SET_ITEM(__pyx_t_1, 35, __pyx_kp_u_MI_11);
  __Pyx_INCREF(__pyx_kp_u_MI_11_Lite);
  __Pyx_GIVEREF(__pyx_kp_u_MI_11_Lite);
  PyList_SET_ITEM(__pyx_t_1, 36, __pyx_kp_u_MI_11_Lite);
  __Pyx_INCREF(__pyx_kp_u_MI_Pad_3);
  __Pyx_GIVEREF(__pyx_kp_u_MI_Pad_3);
  PyList_SET_ITEM(__pyx_t_1, 37, __pyx_kp_u_MI_Pad_3);
  __Pyx_INCREF(__pyx_kp_u_MI_Pad_4);
  __Pyx_GIVEREF(__pyx_kp_u_MI_Pad_4);
  PyList_SET_ITEM(__pyx_t_1, 38, __pyx_kp_u_MI_Pad_4);
  __Pyx_INCREF(__pyx_kp_u_MI_10_Ultra);
  __Pyx_GIVEREF(__pyx_kp_u_MI_10_Ultra);
  PyList_SET_ITEM(__pyx_t_1, 39, __pyx_kp_u_MI_10_Ultra);
  __Pyx_INCREF(__pyx_kp_u_MI_10_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_MI_10_Pro);
  PyList_SET_ITEM(__pyx_t_1, 40, __pyx_kp_u_MI_10_Pro);
  __Pyx_INCREF(__pyx_kp_u_MI_11_Ultra);
  __Pyx_GIVEREF(__pyx_kp_u_MI_11_Ultra);
  PyList_SET_ITEM(__pyx_t_1, 41, __pyx_kp_u_MI_11_Ultra);
  __Pyx_INCREF(__pyx_kp_u_MI_11_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_MI_11_Pro);
  PyList_SET_ITEM(__pyx_t_1, 42, __pyx_kp_u_MI_11_Pro);
  __Pyx_INCREF(__pyx_kp_u_MI_A2_lite);
  __Pyx_GIVEREF(__pyx_kp_u_MI_A2_lite);
  PyList_SET_ITEM(__pyx_t_1, 43, __pyx_kp_u_MI_A2_lite);
  __Pyx_INCREF(__pyx_kp_u_MI_10_Lite_5G);
  __Pyx_GIVEREF(__pyx_kp_u_MI_10_Lite_5G);
  PyList_SET_ITEM(__pyx_t_1, 44, __pyx_kp_u_MI_10_Lite_5G);
  __Pyx_INCREF(__pyx_kp_u_MI_CC9_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_MI_CC9_Pro);
  PyList_SET_ITEM(__pyx_t_1, 45, __pyx_kp_u_MI_CC9_Pro);
  __Pyx_INCREF(__pyx_kp_u_MI_A1);
  __Pyx_GIVEREF(__pyx_kp_u_MI_A1);
  PyList_SET_ITEM(__pyx_t_1, 46, __pyx_kp_u_MI_A1);
  __Pyx_INCREF(__pyx_kp_u_MI_8_SE);
  __Pyx_GIVEREF(__pyx_kp_u_MI_8_SE);
  PyList_SET_ITEM(__pyx_t_1, 47, __pyx_kp_u_MI_8_SE);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K60_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K60_Pro);
  PyList_SET_ITEM(__pyx_t_1, 48, __pyx_kp_u_Redmi_K60_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K50_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K50_Pro);
  PyList_SET_ITEM(__pyx_t_1, 49, __pyx_kp_u_Redmi_K50_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K30_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K30_Pro);
  PyList_SET_ITEM(__pyx_t_1, 50, __pyx_kp_u_Redmi_K30_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K30_Ultra);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K30_Ultra);
  PyList_SET_ITEM(__pyx_t_1, 51, __pyx_kp_u_Redmi_K30_Ultra);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K30S_Ultra);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K30S_Ultra);
  PyList_SET_ITEM(__pyx_t_1, 52, __pyx_kp_u_Redmi_K30S_Ultra);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K20_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K20_Pro);
  PyList_SET_ITEM(__pyx_t_1, 53, __pyx_kp_u_Redmi_K20_Pro);
  __Pyx_INCREF(__pyx_kp_u_Redmi_K20_Ultra);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_K20_Ultra);
  PyList_SET_ITEM(__pyx_t_1, 54, __pyx_kp_u_Redmi_K20_Ultra);
  __Pyx_INCREF(__pyx_kp_u_Redmi_5_Plus);
  __Pyx_GIVEREF(__pyx_kp_u_Redmi_5_Plus);
  PyList_SET_ITEM(__pyx_t_1, 55, __pyx_kp_u_Redmi_5_Plus);
  __Pyx_INCREF(__pyx_kp_u_Xiaomi_Pad_5_pro);
  __Pyx_GIVEREF(__pyx_kp_u_Xiaomi_Pad_5_pro);
  PyList_SET_ITEM(__pyx_t_1, 56, __pyx_kp_u_Xiaomi_Pad_5_pro);
  __Pyx_INCREF(__pyx_kp_u_Xiaomi_11T_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Xiaomi_11T_Pro);
  PyList_SET_ITEM(__pyx_t_1, 57, __pyx_kp_u_Xiaomi_11T_Pro);
  __Pyx_INCREF(__pyx_kp_u_Xiaomi_10T_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Xiaomi_10T_Pro);
  PyList_SET_ITEM(__pyx_t_1, 58, __pyx_kp_u_Xiaomi_10T_Pro);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_XIAOMI, __pyx_t_1) < 0) __PYX_ERR(0, 323, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(47); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 385, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_u_CPH1871);
  __Pyx_GIVEREF(__pyx_n_u_CPH1871);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_u_CPH1871);
  __Pyx_INCREF(__pyx_n_u_CPH1875);
  __Pyx_GIVEREF(__pyx_n_u_CPH1875);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_CPH1875);
  __Pyx_INCREF(__pyx_n_u_CPH2023);
  __Pyx_GIVEREF(__pyx_n_u_CPH2023);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_n_u_CPH2023);
  __Pyx_INCREF(__pyx_n_u_CPH2025);
  __Pyx_GIVEREF(__pyx_n_u_CPH2025);
  PyList_SET_ITEM(__pyx_t_1, 3, __pyx_n_u_CPH2025);
  __Pyx_INCREF(__pyx_n_u_CPH2005);
  __Pyx_GIVEREF(__pyx_n_u_CPH2005);
  PyList_SET_ITEM(__pyx_t_1, 4, __pyx_n_u_CPH2005);
  __Pyx_INCREF(__pyx_n_u_CPH2009);
  __Pyx_GIVEREF(__pyx_n_u_CPH2009);
  PyList_SET_ITEM(__pyx_t_1, 5, __pyx_n_u_CPH2009);
  __Pyx_INCREF(__pyx_n_u_CPH2173);
  __Pyx_GIVEREF(__pyx_n_u_CPH2173);
  PyList_SET_ITEM(__pyx_t_1, 6, __pyx_n_u_CPH2173);
  __Pyx_INCREF(__pyx_n_u_CPH2145);
  __Pyx_GIVEREF(__pyx_n_u_CPH2145);
  PyList_SET_ITEM(__pyx_t_1, 7, __pyx_n_u_CPH2145);
  __Pyx_INCREF(__pyx_n_u_CPH2207);
  __Pyx_GIVEREF(__pyx_n_u_CPH2207);
  PyList_SET_ITEM(__pyx_t_1, 8, __pyx_n_u_CPH2207);
  __Pyx_INCREF(__pyx_n_u_CPH2307);
  __Pyx_GIVEREF(__pyx_n_u_CPH2307);
  PyList_SET_ITEM(__pyx_t_1, 9, __pyx_n_u_CPH2307);
  __Pyx_INCREF(__pyx_n_u_CPH2305);
  __Pyx_GIVEREF(__pyx_n_u_CPH2305);
  PyList_SET_ITEM(__pyx_t_1, 10, __pyx_n_u_CPH2305);
  __Pyx_INCREF(__pyx_n_u_CPH237);
  __Pyx_GIVEREF(__pyx_n_u_CPH237);
  PyList_SET_ITEM(__pyx_t_1, 11, __pyx_n_u_CPH237);
  __Pyx_INCREF(__pyx_n_u_CPH2439);
  __Pyx_GIVEREF(__pyx_n_u_CPH2439);
  PyList_SET_ITEM(__pyx_t_1, 12, __pyx_n_u_CPH2439);
  __Pyx_INCREF(__pyx_n_u_CPH2437);
  __Pyx_GIVEREF(__pyx_n_u_CPH2437);
  PyList_SET_ITEM(__pyx_t_1, 13, __pyx_n_u_CPH2437);
  __Pyx_INCREF(__pyx_n_u_CPH1917);
  __Pyx_GIVEREF(__pyx_n_u_CPH1917);
  PyList_SET_ITEM(__pyx_t_1, 14, __pyx_n_u_CPH1917);
  __Pyx_INCREF(__pyx_n_u_CPH1921);
  __Pyx_GIVEREF(__pyx_n_u_CPH1921);
  PyList_SET_ITEM(__pyx_t_1, 15, __pyx_n_u_CPH1921);
  __Pyx_INCREF(__pyx_n_u_CPH1919);
  __Pyx_GIVEREF(__pyx_n_u_CPH1919);
  PyList_SET_ITEM(__pyx_t_1, 16, __pyx_n_u_CPH1919);
  __Pyx_INCREF(__pyx_n_u_CPH1983);
  __Pyx_GIVEREF(__pyx_n_u_CPH1983);
  PyList_SET_ITEM(__pyx_t_1, 17, __pyx_n_u_CPH1983);
  __Pyx_INCREF(__pyx_n_u_CPH1979);
  __Pyx_GIVEREF(__pyx_n_u_CPH1979);
  PyList_SET_ITEM(__pyx_t_1, 18, __pyx_n_u_CPH1979);
  __Pyx_INCREF(__pyx_n_u_CPH1907);
  __Pyx_GIVEREF(__pyx_n_u_CPH1907);
  PyList_SET_ITEM(__pyx_t_1, 19, __pyx_n_u_CPH1907);
  __Pyx_INCREF(__pyx_n_u_CPH1945);
  __Pyx_GIVEREF(__pyx_n_u_CPH1945);
  PyList_SET_ITEM(__pyx_t_1, 20, __pyx_n_u_CPH1945);
  __Pyx_INCREF(__pyx_n_u_CPH1951);
  __Pyx_GIVEREF(__pyx_n_u_CPH1951);
  PyList_SET_ITEM(__pyx_t_1, 21, __pyx_n_u_CPH1951);
  __Pyx_INCREF(__pyx_n_u_CPH1951RU);
  __Pyx_GIVEREF(__pyx_n_u_CPH1951RU);
  PyList_SET_ITEM(__pyx_t_1, 22, __pyx_n_u_CPH1951RU);
  __Pyx_INCREF(__pyx_n_u_CPH1989);
  __Pyx_GIVEREF(__pyx_n_u_CPH1989);
  PyList_SET_ITEM(__pyx_t_1, 23, __pyx_n_u_CPH1989);
  __Pyx_INCREF(__pyx_n_u_CPH2043);
  __Pyx_GIVEREF(__pyx_n_u_CPH2043);
  PyList_SET_ITEM(__pyx_t_1, 24, __pyx_n_u_CPH2043);
  __Pyx_INCREF(__pyx_n_u_CPH2035);
  __Pyx_GIVEREF(__pyx_n_u_CPH2035);
  PyList_SET_ITEM(__pyx_t_1, 25, __pyx_n_u_CPH2035);
  __Pyx_INCREF(__pyx_n_u_CPH2036);
  __Pyx_GIVEREF(__pyx_n_u_CPH2036);
  PyList_SET_ITEM(__pyx_t_1, 26, __pyx_n_u_CPH2036);
  __Pyx_INCREF(__pyx_n_u_CPH2037);
  __Pyx_GIVEREF(__pyx_n_u_CPH2037);
  PyList_SET_ITEM(__pyx_t_1, 27, __pyx_n_u_CPH2037);
  __Pyx_INCREF(__pyx_n_u_CPH2013);
  __Pyx_GIVEREF(__pyx_n_u_CPH2013);
  PyList_SET_ITEM(__pyx_t_1, 28, __pyx_n_u_CPH2013);
  __Pyx_INCREF(__pyx_n_u_CPH2091);
  __Pyx_GIVEREF(__pyx_n_u_CPH2091);
  PyList_SET_ITEM(__pyx_t_1, 29, __pyx_n_u_CPH2091);
  __Pyx_INCREF(__pyx_n_u_CPH2089);
  __Pyx_GIVEREF(__pyx_n_u_CPH2089);
  PyList_SET_ITEM(__pyx_t_1, 30, __pyx_n_u_CPH2089);
  __Pyx_INCREF(__pyx_n_u_CPH2119);
  __Pyx_GIVEREF(__pyx_n_u_CPH2119);
  PyList_SET_ITEM(__pyx_t_1, 31, __pyx_n_u_CPH2119);
  __Pyx_INCREF(__pyx_n_u_CPH2125);
  __Pyx_GIVEREF(__pyx_n_u_CPH2125);
  PyList_SET_ITEM(__pyx_t_1, 32, __pyx_n_u_CPH2125);
  __Pyx_INCREF(__pyx_n_u_CPH2343);
  __Pyx_GIVEREF(__pyx_n_u_CPH2343);
  PyList_SET_ITEM(__pyx_t_1, 33, __pyx_n_u_CPH2343);
  __Pyx_INCREF(__pyx_n_u_CPH2127);
  __Pyx_GIVEREF(__pyx_n_u_CPH2127);
  PyList_SET_ITEM(__pyx_t_1, 34, __pyx_n_u_CPH2127);
  __Pyx_INCREF(__pyx_n_u_CPH2135);
  __Pyx_GIVEREF(__pyx_n_u_CPH2135);
  PyList_SET_ITEM(__pyx_t_1, 35, __pyx_n_u_CPH2135);
  __Pyx_INCREF(__pyx_n_u_CPH2273);
  __Pyx_GIVEREF(__pyx_n_u_CPH2273);
  PyList_SET_ITEM(__pyx_t_1, 36, __pyx_n_u_CPH2273);
  __Pyx_INCREF(__pyx_n_u_CPH2325);
  __Pyx_GIVEREF(__pyx_n_u_CPH2325);
  PyList_SET_ITEM(__pyx_t_1, 37, __pyx_n_u_CPH2325);
  __Pyx_INCREF(__pyx_n_u_CPH2309);
  __Pyx_GIVEREF(__pyx_n_u_CPH2309);
  PyList_SET_ITEM(__pyx_t_1, 38, __pyx_n_u_CPH2309);
  __Pyx_INCREF(__pyx_n_u_CPH1701);
  __Pyx_GIVEREF(__pyx_n_u_CPH1701);
  PyList_SET_ITEM(__pyx_t_1, 39, __pyx_n_u_CPH1701);
  __Pyx_INCREF(__pyx_n_u_CPH2121);
  __Pyx_GIVEREF(__pyx_n_u_CPH2121);
  PyList_SET_ITEM(__pyx_t_1, 40, __pyx_n_u_CPH2121);
  __Pyx_INCREF(__pyx_n_u_CPH1955);
  __Pyx_GIVEREF(__pyx_n_u_CPH1955);
  PyList_SET_ITEM(__pyx_t_1, 41, __pyx_n_u_CPH1955);
  __Pyx_INCREF(__pyx_n_u_CPH2373);
  __Pyx_GIVEREF(__pyx_n_u_CPH2373);
  PyList_SET_ITEM(__pyx_t_1, 42, __pyx_n_u_CPH2373);
  __Pyx_INCREF(__pyx_n_u_A002OP);
  __Pyx_GIVEREF(__pyx_n_u_A002OP);
  PyList_SET_ITEM(__pyx_t_1, 43, __pyx_n_u_A002OP);
  __Pyx_INCREF(__pyx_n_u_A001OP);
  __Pyx_GIVEREF(__pyx_n_u_A001OP);
  PyList_SET_ITEM(__pyx_t_1, 44, __pyx_n_u_A001OP);
  __Pyx_INCREF(__pyx_n_u_OPG03);
  __Pyx_GIVEREF(__pyx_n_u_OPG03);
  PyList_SET_ITEM(__pyx_t_1, 45, __pyx_n_u_OPG03);
  __Pyx_INCREF(__pyx_n_u_OPG01);
  __Pyx_GIVEREF(__pyx_n_u_OPG01);
  PyList_SET_ITEM(__pyx_t_1, 46, __pyx_n_u_OPG01);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_OPPO, __pyx_t_1) < 0) __PYX_ERR(0, 385, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(30); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 434, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_kp_u_Zero_3);
  __Pyx_GIVEREF(__pyx_kp_u_Zero_3);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_Zero_3);
  __Pyx_INCREF(__pyx_kp_u_Zero_5G);
  __Pyx_GIVEREF(__pyx_kp_u_Zero_5G);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_kp_u_Zero_5G);
  __Pyx_INCREF(__pyx_kp_u_Zero_20);
  __Pyx_GIVEREF(__pyx_kp_u_Zero_20);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_Zero_20);
  __Pyx_INCREF(__pyx_kp_u_Zero_X);
  __Pyx_GIVEREF(__pyx_kp_u_Zero_X);
  PyList_SET_ITEM(__pyx_t_1, 3, __pyx_kp_u_Zero_X);
  __Pyx_INCREF(__pyx_kp_u_Zero_X_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Zero_X_Pro);
  PyList_SET_ITEM(__pyx_t_1, 4, __pyx_kp_u_Zero_X_Pro);
  __Pyx_INCREF(__pyx_kp_u_Smart_6);
  __Pyx_GIVEREF(__pyx_kp_u_Smart_6);
  PyList_SET_ITEM(__pyx_t_1, 5, __pyx_kp_u_Smart_6);
  __Pyx_INCREF(__pyx_kp_u_Smart_7);
  __Pyx_GIVEREF(__pyx_kp_u_Smart_7);
  PyList_SET_ITEM(__pyx_t_1, 6, __pyx_kp_u_Smart_7);
  __Pyx_INCREF(__pyx_kp_u_Smart_6_PlusZero_Ultra);
  __Pyx_GIVEREF(__pyx_kp_u_Smart_6_PlusZero_Ultra);
  PyList_SET_ITEM(__pyx_t_1, 7, __pyx_kp_u_Smart_6_PlusZero_Ultra);
  __Pyx_INCREF(__pyx_kp_u_HOT_4_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_4_Pro);
  PyList_SET_ITEM(__pyx_t_1, 8, __pyx_kp_u_HOT_4_Pro);
  __Pyx_INCREF(__pyx_kp_u_HOT_20_Play);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_20_Play);
  PyList_SET_ITEM(__pyx_t_1, 9, __pyx_kp_u_HOT_20_Play);
  __Pyx_INCREF(__pyx_kp_u_HOT_12_Play);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_12_Play);
  PyList_SET_ITEM(__pyx_t_1, 10, __pyx_kp_u_HOT_12_Play);
  __Pyx_INCREF(__pyx_kp_u_HOT_11_Play);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_11_Play);
  PyList_SET_ITEM(__pyx_t_1, 11, __pyx_kp_u_HOT_11_Play);
  __Pyx_INCREF(__pyx_kp_u_HOT_20S);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_20S);
  PyList_SET_ITEM(__pyx_t_1, 12, __pyx_kp_u_HOT_20S);
  __Pyx_INCREF(__pyx_kp_u_HOT_20_5G);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_20_5G);
  PyList_SET_ITEM(__pyx_t_1, 13, __pyx_kp_u_HOT_20_5G);
  __Pyx_INCREF(__pyx_kp_u_HOT_20_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_20_Pro);
  PyList_SET_ITEM(__pyx_t_1, 14, __pyx_kp_u_HOT_20_Pro);
  __Pyx_INCREF(__pyx_kp_u_HOT_20i);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_20i);
  PyList_SET_ITEM(__pyx_t_1, 15, __pyx_kp_u_HOT_20i);
  __Pyx_INCREF(__pyx_kp_u_HOT_11s);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_11s);
  PyList_SET_ITEM(__pyx_t_1, 16, __pyx_kp_u_HOT_11s);
  __Pyx_INCREF(__pyx_kp_u_HOT_10i);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_10i);
  PyList_SET_ITEM(__pyx_t_1, 17, __pyx_kp_u_HOT_10i);
  __Pyx_INCREF(__pyx_kp_u_HOT_10s);
  __Pyx_GIVEREF(__pyx_kp_u_HOT_10s);
  PyList_SET_ITEM(__pyx_t_1, 18, __pyx_kp_u_HOT_10s);
  __Pyx_INCREF(__pyx_kp_u_Note_12_G96);
  __Pyx_GIVEREF(__pyx_kp_u_Note_12_G96);
  PyList_SET_ITEM(__pyx_t_1, 19, __pyx_kp_u_Note_12_G96);
  __Pyx_INCREF(__pyx_kp_u_Note_12i);
  __Pyx_GIVEREF(__pyx_kp_u_Note_12i);
  PyList_SET_ITEM(__pyx_t_1, 20, __pyx_kp_u_Note_12i);
  __Pyx_INCREF(__pyx_kp_u_Note_12_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Note_12_Pro);
  PyList_SET_ITEM(__pyx_t_1, 21, __pyx_kp_u_Note_12_Pro);
  __Pyx_INCREF(__pyx_kp_u_Note_12_Pro_5G);
  __Pyx_GIVEREF(__pyx_kp_u_Note_12_Pro_5G);
  PyList_SET_ITEM(__pyx_t_1, 22, __pyx_kp_u_Note_12_Pro_5G);
  __Pyx_INCREF(__pyx_kp_u_Note_11_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Note_11_Pro);
  PyList_SET_ITEM(__pyx_t_1, 23, __pyx_kp_u_Note_11_Pro);
  __Pyx_INCREF(__pyx_kp_u_Note_10);
  __Pyx_GIVEREF(__pyx_kp_u_Note_10);
  PyList_SET_ITEM(__pyx_t_1, 24, __pyx_kp_u_Note_10);
  __Pyx_INCREF(__pyx_n_u_X608);
  __Pyx_GIVEREF(__pyx_n_u_X608);
  PyList_SET_ITEM(__pyx_t_1, 25, __pyx_n_u_X608);
  __Pyx_INCREF(__pyx_n_u_X559C);
  __Pyx_GIVEREF(__pyx_n_u_X559C);
  PyList_SET_ITEM(__pyx_t_1, 26, __pyx_n_u_X559C);
  __Pyx_INCREF(__pyx_n_u_X606B);
  __Pyx_GIVEREF(__pyx_n_u_X606B);
  PyList_SET_ITEM(__pyx_t_1, 27, __pyx_n_u_X606B);
  __Pyx_INCREF(__pyx_n_u_X551F);
  __Pyx_GIVEREF(__pyx_n_u_X551F);
  PyList_SET_ITEM(__pyx_t_1, 28, __pyx_n_u_X551F);
  __Pyx_INCREF(__pyx_n_u_X510);
  __Pyx_GIVEREF(__pyx_n_u_X510);
  PyList_SET_ITEM(__pyx_t_1, 29, __pyx_n_u_X510);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_INFINIX, __pyx_t_1) < 0) __PYX_ERR(0, 434, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(59); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 467, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_u_X23);
  __Pyx_GIVEREF(__pyx_n_u_X23);
  PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_u_X23);
  __Pyx_INCREF(__pyx_n_u_X27);
  __Pyx_GIVEREF(__pyx_n_u_X27);
  PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_X27);
  __Pyx_INCREF(__pyx_kp_u_X27_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_X27_Pro);
  PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_X27_Pro);
  __Pyx_INCREF(__pyx_kp_u_X27_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_X27_Pro);
  PyList_SET_ITEM(__pyx_t_1, 3, __pyx_kp_u_X27_Pro);
  __Pyx_INCREF(__pyx_n_u_X30);
  __Pyx_GIVEREF(__pyx_n_u_X30);
  PyList_SET_ITEM(__pyx_t_1, 4, __pyx_n_u_X30);
  __Pyx_INCREF(__pyx_kp_u_X30_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_X30_Pro);
  PyList_SET_ITEM(__pyx_t_1, 5, __pyx_kp_u_X30_Pro);
  __Pyx_INCREF(__pyx_n_u_X3F);
  __Pyx_GIVEREF(__pyx_n_u_X3F);
  PyList_SET_ITEM(__pyx_t_1, 6, __pyx_n_u_X3F);
  __Pyx_INCREF(__pyx_n_u_X3L);
  __Pyx_GIVEREF(__pyx_n_u_X3L);
  PyList_SET_ITEM(__pyx_t_1, 7, __pyx_n_u_X3L);
  __Pyx_INCREF(__pyx_n_u_X3S);
  __Pyx_GIVEREF(__pyx_n_u_X3S);
  PyList_SET_ITEM(__pyx_t_1, 8, __pyx_n_u_X3S);
  __Pyx_INCREF(__pyx_kp_u_X3S_W);
  __Pyx_GIVEREF(__pyx_kp_u_X3S_W);
  PyList_SET_ITEM(__pyx_t_1, 9, __pyx_kp_u_X3S_W);
  __Pyx_INCREF(__pyx_n_u_X3t);
  __Pyx_GIVEREF(__pyx_n_u_X3t);
  PyList_SET_ITEM(__pyx_t_1, 10, __pyx_n_u_X3t);
  __Pyx_INCREF(__pyx_n_u_X3V);
  __Pyx_GIVEREF(__pyx_n_u_X3V);
  PyList_SET_ITEM(__pyx_t_1, 11, __pyx_n_u_X3V);
  __Pyx_INCREF(__pyx_n_u_X40);
  __Pyx_GIVEREF(__pyx_n_u_X40);
  PyList_SET_ITEM(__pyx_t_1, 12, __pyx_n_u_X40);
  __Pyx_INCREF(__pyx_n_u_X5);
  __Pyx_GIVEREF(__pyx_n_u_X5);
  PyList_SET_ITEM(__pyx_t_1, 13, __pyx_n_u_X5);
  __Pyx_INCREF(__pyx_kp_u_X5_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_X5_Pro);
  PyList_SET_ITEM(__pyx_t_1, 14, __pyx_kp_u_X5_Pro);
  __Pyx_INCREF(__pyx_n_u_X50);
  __Pyx_GIVEREF(__pyx_n_u_X50);
  PyList_SET_ITEM(__pyx_t_1, 15, __pyx_n_u_X50);
  __Pyx_INCREF(__pyx_kp_u_X50_5G);
  __Pyx_GIVEREF(__pyx_kp_u_X50_5G);
  PyList_SET_ITEM(__pyx_t_1, 16, __pyx_kp_u_X50_5G);
  __Pyx_INCREF(__pyx_kp_u_X50_Lite);
  __Pyx_GIVEREF(__pyx_kp_u_X50_Lite);
  PyList_SET_ITEM(__pyx_t_1, 17, __pyx_kp_u_X50_Lite);
  __Pyx_INCREF(__pyx_kp_u_X50_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_X50_Pro);
  PyList_SET_ITEM(__pyx_t_1, 18, __pyx_kp_u_X50_Pro);
  __Pyx_INCREF(__pyx_kp_u_X50_Pro_Plus);
  __Pyx_GIVEREF(__pyx_kp_u_X50_Pro_Plus);
  PyList_SET_ITEM(__pyx_t_1, 19, __pyx_kp_u_X50_Pro_Plus);
  __Pyx_INCREF(__pyx_n_u_X50e);
  __Pyx_GIVEREF(__pyx_n_u_X50e);
  PyList_SET_ITEM(__pyx_t_1, 20, __pyx_n_u_X50e);
  __Pyx_INCREF(__pyx_n_u_X510t);
  __Pyx_GIVEREF(__pyx_n_u_X510t);
  PyList_SET_ITEM(__pyx_t_1, 21, __pyx_n_u_X510t);
  __Pyx_INCREF(__pyx_n_u_X520L);
  __Pyx_GIVEREF(__pyx_n_u_X520L);
  PyList_SET_ITEM(__pyx_t_1, 22, __pyx_n_u_X520L);
  __Pyx_INCREF(__pyx_n_u_X5F);
  __Pyx_GIVEREF(__pyx_n_u_X5F);
  PyList_SET_ITEM(__pyx_t_1, 23, __pyx_n_u_X5F);
  __Pyx_INCREF(__pyx_n_u_X5M);
  __Pyx_GIVEREF(__pyx_n_u_X5M);
  PyList_SET_ITEM(__pyx_t_1, 24, __pyx_n_u_X5M);
  __Pyx_INCREF(__pyx_n_u_X6);
  __Pyx_GIVEREF(__pyx_n_u_X6);
  PyList_SET_ITEM(__pyx_t_1, 25, __pyx_n_u_X6);
  __Pyx_INCREF(__pyx_kp_u_X6_Plus);
  __Pyx_GIVEREF(__pyx_kp_u_X6_Plus);
  PyList_SET_ITEM(__pyx_t_1, 26, __pyx_kp_u_X6_Plus);
  __Pyx_INCREF(__pyx_n_u_X60);
  __Pyx_GIVEREF(__pyx_n_u_X60);
  PyList_SET_ITEM(__pyx_t_1, 27, __pyx_n_u_X60);
  __Pyx_INCREF(__pyx_kp_u_X60_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_X60_Pro);
  PyList_SET_ITEM(__pyx_t_1, 28, __pyx_kp_u_X60_Pro);
  __Pyx_INCREF(__pyx_kp_u_X60_Pro_Plus);
  __Pyx_GIVEREF(__pyx_kp_u_X60_Pro_Plus);
  PyList_SET_ITEM(__pyx_t_1, 29, __pyx_kp_u_X60_Pro_Plus);
  __Pyx_INCREF(__pyx_n_u_X60t);
  __Pyx_GIVEREF(__pyx_n_u_X60t);
  PyList_SET_ITEM(__pyx_t_1, 30, __pyx_n_u_X60t);
  __Pyx_INCREF(__pyx_n_u_X6S);
  __Pyx_GIVEREF(__pyx_n_u_X6S);
  PyList_SET_ITEM(__pyx_t_1, 31, __pyx_n_u_X6S);
  __Pyx_INCREF(__pyx_kp_u_X6S_Plus);
  __Pyx_GIVEREF(__pyx_kp_u_X6S_Plus);
  PyList_SET_ITEM(__pyx_t_1, 32, __pyx_kp_u_X6S_Plus);
  __Pyx_INCREF(__pyx_n_u_X7);
  __Pyx_GIVEREF(__pyx_n_u_X7);
  PyList_SET_ITEM(__pyx_t_1, 33, __pyx_n_u_X7);
  __Pyx_INCREF(__pyx_kp_u_X7_Plus);
  __Pyx_GIVEREF(__pyx_kp_u_X7_Plus);
  PyList_SET_ITEM(__pyx_t_1, 34, __pyx_kp_u_X7_Plus);
  __Pyx_INCREF(__pyx_n_u_X70);
  __Pyx_GIVEREF(__pyx_n_u_X70);
  PyList_SET_ITEM(__pyx_t_1, 35, __pyx_n_u_X70);
  __Pyx_INCREF(__pyx_kp_u_X70_5G);
  __Pyx_GIVEREF(__pyx_kp_u_X70_5G);
  PyList_SET_ITEM(__pyx_t_1, 36, __pyx_kp_u_X70_5G);
  __Pyx_INCREF(__pyx_kp_u_X70_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_X70_Pro);
  PyList_SET_ITEM(__pyx_t_1, 37, __pyx_kp_u_X70_Pro);
  __Pyx_INCREF(__pyx_n_u_Y11);
  __Pyx_GIVEREF(__pyx_n_u_Y11);
  PyList_SET_ITEM(__pyx_t_1, 38, __pyx_n_u_Y11);
  __Pyx_INCREF(__pyx_n_u_Y11s);
  __Pyx_GIVEREF(__pyx_n_u_Y11s);
  PyList_SET_ITEM(__pyx_t_1, 39, __pyx_n_u_Y11s);
  __Pyx_INCREF(__pyx_n_u_Y11t);
  __Pyx_GIVEREF(__pyx_n_u_Y11t);
  PyList_SET_ITEM(__pyx_t_1, 40, __pyx_n_u_Y11t);
  __Pyx_INCREF(__pyx_n_u_Y12);
  __Pyx_GIVEREF(__pyx_n_u_Y12);
  PyList_SET_ITEM(__pyx_t_1, 41, __pyx_n_u_Y12);
  __Pyx_INCREF(__pyx_kp_u_Y12_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Y12_Pro);
  PyList_SET_ITEM(__pyx_t_1, 42, __pyx_kp_u_Y12_Pro);
  __Pyx_INCREF(__pyx_n_u_Y12a);
  __Pyx_GIVEREF(__pyx_n_u_Y12a);
  PyList_SET_ITEM(__pyx_t_1, 43, __pyx_n_u_Y12a);
  __Pyx_INCREF(__pyx_kp_u_Y12I_Pro);
  __Pyx_GIVEREF(__pyx_kp_u_Y12I_Pro);
  PyList_SET_ITEM(__pyx_t_1, 44, __pyx_kp_u_Y12I_Pro);
  __Pyx_INCREF(__pyx_n_u_Y15c);
  __Pyx_GIVEREF(__pyx_n_u_Y15c);
  PyList_SET_ITEM(__pyx_t_1, 45, __pyx_n_u_Y15c);
  __Pyx_INCREF(__pyx_n_u_Y15s);
  __Pyx_GIVEREF(__pyx_n_u_Y15s);
  PyList_SET_ITEM(__pyx_t_1, 46, __pyx_n_u_Y15s);
  __Pyx_INCREF(__pyx_n_u_Y16);
  __Pyx_GIVEREF(__pyx_n_u_Y16);
  PyList_SET_ITEM(__pyx_t_1, 47, __pyx_n_u_Y16);
  __Pyx_INCREF(__pyx_n_u_Y17);
  __Pyx_GIVEREF(__pyx_n_u_Y17);
  PyList_SET_ITEM(__pyx_t_1, 48, __pyx_n_u_Y17);
  __Pyx_INCREF(__pyx_n_u_Y17T);
  __Pyx_GIVEREF(__pyx_n_u_Y17T);
  PyList_SET_ITEM(__pyx_t_1, 49, __pyx_n_u_Y17T);
  __Pyx_INCREF(__pyx_n_u_Y17W);
  __Pyx_GIVEREF(__pyx_n_u_Y17W);
  PyList_SET_ITEM(__pyx_t_1, 50, __pyx_n_u_Y17W);
  __Pyx_INCREF(__pyx_n_u_Y18);
  __Pyx_GIVEREF(__pyx_n_u_Y18);
  PyList_SET_ITEM(__pyx_t_1, 51, __pyx_n_u_Y18);
  __Pyx_INCREF(__pyx_n_u_Y19);
  __Pyx_GIVEREF(__pyx_n_u_Y19);
  PyList_SET_ITEM(__pyx_t_1, 52, __pyx_n_u_Y19);
  __Pyx_INCREF(__pyx_n_u_Y19t);
  __Pyx_GIVEREF(__pyx_n_u_Y19t);
  PyList_SET_ITEM(__pyx_t_1, 53, __pyx_n_u_Y19t);
  __Pyx_INCREF(__pyx_n_u_Y1i);
  __Pyx_GIVEREF(__pyx_n_u_Y1i);
  PyList_SET_ITEM(__pyx_t_1, 54, __pyx_n_u_Y1i);
  __Pyx_INCREF(__pyx_n_u_Y1S);
  __Pyx_GIVEREF(__pyx_n_u_Y1S);
  PyList_SET_ITEM(__pyx_t_1, 55, __pyx_n_u_Y1S);
  __Pyx_INCREF(__pyx_n_u_Y20);
  __Pyx_GIVEREF(__pyx_n_u_Y20);
  PyList_SET_ITEM(__pyx_t_1, 56, __pyx_n_u_Y20);
  __Pyx_INCREF(__pyx_n_u_Y20A);
  __Pyx_GIVEREF(__pyx_n_u_Y20A);
  PyList_SET_ITEM(__pyx_t_1, 57, __pyx_n_u_Y20A);
  __Pyx_INCREF(__pyx_n_u_Y20G);
  __Pyx_GIVEREF(__pyx_n_u_Y20G);
  PyList_SET_ITEM(__pyx_t_1, 58, __pyx_n_u_Y20G);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_VIVO, __pyx_t_1) < 0) __PYX_ERR(0, 467, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_1samsung, 0, __pyx_n_s_RandomUserAgent_samsung, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__85)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 529, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__86);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_samsung, __pyx_t_1) < 0) __PYX_ERR(0, 529, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_3xiaomi, 0, __pyx_n_s_RandomUserAgent_xiaomi, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__88)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 539, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__89);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_xiaomi, __pyx_t_1) < 0) __PYX_ERR(0, 539, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_5oppo, 0, __pyx_n_s_RandomUserAgent_oppo, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__91)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 549, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__92);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_oppo, __pyx_t_1) < 0) __PYX_ERR(0, 549, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_7infinix, 0, __pyx_n_s_RandomUserAgent_infinix, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__94)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 559, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__95);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_infinix, __pyx_t_1) < 0) __PYX_ERR(0, 559, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_9vivo, 0, __pyx_n_s_RandomUserAgent_vivo, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__97)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 569, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__98);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_vivo, __pyx_t_1) < 0) __PYX_ERR(0, 569, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_11iphone, 0, __pyx_n_s_RandomUserAgent_iphone, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__100)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 579, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__101);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_iphone, __pyx_t_1) < 0) __PYX_ERR(0, 579, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_13macOS, 0, __pyx_n_s_RandomUserAgent_macOS, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__103)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 589, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_macOS, __pyx_t_1) < 0) __PYX_ERR(0, 589, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_15window, 0, __pyx_n_s_RandomUserAgent_window, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__105)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 596, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_window, __pyx_t_1) < 0) __PYX_ERR(0, 596, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_17linux, 0, __pyx_n_s_RandomUserAgent_linux, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__106)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 603, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_linux, __pyx_t_1) < 0) __PYX_ERR(0, 603, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_19android, 0, __pyx_n_s_RandomUserAgent_android, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__108)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 609, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__109);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_android, __pyx_t_1) < 0) __PYX_ERR(0, 609, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_21mobile, 0, __pyx_n_s_RandomUserAgent_mobile, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__111)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 612, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_1, __pyx_tuple__112);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_mobile, __pyx_t_1) < 0) __PYX_ERR(0, 612, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_5utils_15RandomUserAgent_23desktop, 0, __pyx_n_s_RandomUserAgent_desktop, NULL, __pyx_n_s_utils, __pyx_d, ((PyObject *)__pyx_codeobj__113)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 615, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_desktop, __pyx_t_1) < 0) __PYX_ERR(0, 615, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_Py3ClassCreate(((PyObject*)&__Pyx_DefaultClassType), __pyx_n_s_RandomUserAgent, __pyx_empty_tuple, __pyx_t_2, NULL, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 215, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_RandomUserAgent, __pyx_t_1) < 0) __PYX_ERR(0, 215, __pyx_L1_error)
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
  if (__pyx_m) {
    if (__pyx_d) {
      __Pyx_AddTraceback("init utils", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    Py_CLEAR(__pyx_m);
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init utils");
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

 
static CYTHON_INLINE int __Pyx_HasAttr(PyObject *o, PyObject *n) {
    PyObject *r;
    if (unlikely(!__Pyx_PyBaseString_Check(n))) {
        PyErr_SetString(PyExc_TypeError,
                        "hasattr(): attribute name must be string");
        return -1;
    }
    r = __Pyx_GetAttr(o, n);
    if (unlikely(!r)) {
        PyErr_Clear();
        return 0;
    } else {
        Py_DECREF(r);
        return 1;
    }
}

 
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

 
static PyObject* __Pyx_PyObject_CallMethod0(PyObject* obj, PyObject* method_name) {
    PyObject *method = NULL, *result = NULL;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (likely(is_method)) {
        result = __Pyx_PyObject_CallOneArg(method, obj);
        Py_DECREF(method);
        return result;
    }
    if (unlikely(!method)) goto bad;
    result = __Pyx_PyObject_CallNoArg(method);
    Py_DECREF(method);
bad:
    return result;
}

 
static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index) {
    PyErr_Format(PyExc_ValueError,
                 "need more than %" CYTHON_FORMAT_SSIZE_T "d value%.1s to unpack",
                 index, (index == 1) ? "" : "s");
}

 
static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected) {
    PyErr_Format(PyExc_ValueError,
                 "too many values to unpack (expected %" CYTHON_FORMAT_SSIZE_T "d)", expected);
}

 
static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected) {
    if (unlikely(retval)) {
        Py_DECREF(retval);
        __Pyx_RaiseTooManyValuesError(expected);
        return -1;
    }
    return __Pyx_IterFinish();
}

 
static CYTHON_INLINE void __Pyx_RaiseNoneNotIterableError(void) {
    PyErr_SetString(PyExc_TypeError, "'NoneType' object is not iterable");
}

 
static void __Pyx_UnpackTupleError(PyObject *t, Py_ssize_t index) {
    if (t == Py_None) {
      __Pyx_RaiseNoneNotIterableError();
    } else if (PyTuple_GET_SIZE(t) < index) {
      __Pyx_RaiseNeedMoreValuesError(PyTuple_GET_SIZE(t));
    } else {
      __Pyx_RaiseTooManyValuesError(index);
    }
}

 
static CYTHON_INLINE int __Pyx_unpack_tuple2_exact(
        PyObject* tuple, PyObject** pvalue1, PyObject** pvalue2, int decref_tuple) {
    PyObject *value1 = NULL, *value2 = NULL;
#if CYTHON_COMPILING_IN_PYPY
    value1 = PySequence_ITEM(tuple, 0);  if (unlikely(!value1)) goto bad;
    value2 = PySequence_ITEM(tuple, 1);  if (unlikely(!value2)) goto bad;
#else
    value1 = PyTuple_GET_ITEM(tuple, 0);  Py_INCREF(value1);
    value2 = PyTuple_GET_ITEM(tuple, 1);  Py_INCREF(value2);
#endif
    if (decref_tuple) {
        Py_DECREF(tuple);
    }
    *pvalue1 = value1;
    *pvalue2 = value2;
    return 0;
#if CYTHON_COMPILING_IN_PYPY
bad:
    Py_XDECREF(value1);
    Py_XDECREF(value2);
    if (decref_tuple) { Py_XDECREF(tuple); }
    return -1;
#endif
}
static int __Pyx_unpack_tuple2_generic(PyObject* tuple, PyObject** pvalue1, PyObject** pvalue2,
                                       int has_known_size, int decref_tuple) {
    Py_ssize_t index;
    PyObject *value1 = NULL, *value2 = NULL, *iter = NULL;
    iternextfunc iternext;
    iter = PyObject_GetIter(tuple);
    if (unlikely(!iter)) goto bad;
    if (decref_tuple) { Py_DECREF(tuple); tuple = NULL; }
    iternext = Py_TYPE(iter)->tp_iternext;
    value1 = iternext(iter); if (unlikely(!value1)) { index = 0; goto unpacking_failed; }
    value2 = iternext(iter); if (unlikely(!value2)) { index = 1; goto unpacking_failed; }
    if (!has_known_size && unlikely(__Pyx_IternextUnpackEndCheck(iternext(iter), 2))) goto bad;
    Py_DECREF(iter);
    *pvalue1 = value1;
    *pvalue2 = value2;
    return 0;
unpacking_failed:
    if (!has_known_size && __Pyx_IterFinish() == 0)
        __Pyx_RaiseNeedMoreValuesError(index);
bad:
    Py_XDECREF(iter);
    Py_XDECREF(value1);
    Py_XDECREF(value2);
    if (decref_tuple) { Py_XDECREF(tuple); }
    return -1;
}

 
static CYTHON_INLINE PyObject* __Pyx_dict_iterator(PyObject* iterable, int is_dict, PyObject* method_name,
                                                   Py_ssize_t* p_orig_length, int* p_source_is_dict) {
    is_dict = is_dict || likely(PyDict_CheckExact(iterable));
    *p_source_is_dict = is_dict;
    if (is_dict) {
#if !CYTHON_COMPILING_IN_PYPY
        *p_orig_length = PyDict_Size(iterable);
        Py_INCREF(iterable);
        return iterable;
#elif PY_MAJOR_VERSION >= 3
        static PyObject *py_items = NULL, *py_keys = NULL, *py_values = NULL;
        PyObject **pp = NULL;
        if (method_name) {
            const char *name = PyUnicode_AsUTF8(method_name);
            if (strcmp(name, "iteritems") == 0) pp = &py_items;
            else if (strcmp(name, "iterkeys") == 0) pp = &py_keys;
            else if (strcmp(name, "itervalues") == 0) pp = &py_values;
            if (pp) {
                if (!*pp) {
                    *pp = PyUnicode_FromString(name + 4);
                    if (!*pp)
                        return NULL;
                }
                method_name = *pp;
            }
        }
#endif
    }
    *p_orig_length = 0;
    if (method_name) {
        PyObject* iter;
        iterable = __Pyx_PyObject_CallMethod0(iterable, method_name);
        if (!iterable)
            return NULL;
#if !CYTHON_COMPILING_IN_PYPY
        if (PyTuple_CheckExact(iterable) || PyList_CheckExact(iterable))
            return iterable;
#endif
        iter = PyObject_GetIter(iterable);
        Py_DECREF(iterable);
        return iter;
    }
    return PyObject_GetIter(iterable);
}
static CYTHON_INLINE int __Pyx_dict_iter_next(
        PyObject* iter_obj, CYTHON_NCP_UNUSED Py_ssize_t orig_length, CYTHON_NCP_UNUSED Py_ssize_t* ppos,
        PyObject** pkey, PyObject** pvalue, PyObject** pitem, int source_is_dict) {
    PyObject* next_item;
#if !CYTHON_COMPILING_IN_PYPY
    if (source_is_dict) {
        PyObject *key, *value;
        if (unlikely(orig_length != PyDict_Size(iter_obj))) {
            PyErr_SetString(PyExc_RuntimeError, "dictionary changed size during iteration");
            return -1;
        }
        if (unlikely(!PyDict_Next(iter_obj, ppos, &key, &value))) {
            return 0;
        }
        if (pitem) {
            PyObject* tuple = PyTuple_New(2);
            if (unlikely(!tuple)) {
                return -1;
            }
            Py_INCREF(key);
            Py_INCREF(value);
            PyTuple_SET_ITEM(tuple, 0, key);
            PyTuple_SET_ITEM(tuple, 1, value);
            *pitem = tuple;
        } else {
            if (pkey) {
                Py_INCREF(key);
                *pkey = key;
            }
            if (pvalue) {
                Py_INCREF(value);
                *pvalue = value;
            }
        }
        return 1;
    } else if (PyTuple_CheckExact(iter_obj)) {
        Py_ssize_t pos = *ppos;
        if (unlikely(pos >= PyTuple_GET_SIZE(iter_obj))) return 0;
        *ppos = pos + 1;
        next_item = PyTuple_GET_ITEM(iter_obj, pos);
        Py_INCREF(next_item);
    } else if (PyList_CheckExact(iter_obj)) {
        Py_ssize_t pos = *ppos;
        if (unlikely(pos >= PyList_GET_SIZE(iter_obj))) return 0;
        *ppos = pos + 1;
        next_item = PyList_GET_ITEM(iter_obj, pos);
        Py_INCREF(next_item);
    } else
#endif
    {
        next_item = PyIter_Next(iter_obj);
        if (unlikely(!next_item)) {
            return __Pyx_IterFinish();
        }
    }
    if (pitem) {
        *pitem = next_item;
    } else if (pkey && pvalue) {
        if (__Pyx_unpack_tuple2(next_item, pkey, pvalue, source_is_dict, source_is_dict, 1))
            return -1;
    } else if (pkey) {
        *pkey = next_item;
    } else {
        *pvalue = next_item;
    }
    return 1;
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

 
static CYTHON_INLINE int __Pyx_init_unicode_iteration(
    PyObject* ustring, Py_ssize_t *length, void** data, int *kind) {
#if CYTHON_PEP393_ENABLED
    if (unlikely(__Pyx_PyUnicode_READY(ustring) < 0)) return -1;
    *kind   = PyUnicode_KIND(ustring);
    *length = PyUnicode_GET_LENGTH(ustring);
    *data   = PyUnicode_DATA(ustring);
#else
    *kind   = 0;
    *length = PyUnicode_GET_SIZE(ustring);
    *data   = (void*)PyUnicode_AS_UNICODE(ustring);
#endif
    return 0;
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

 
static PyObject* __Pyx__CallUnboundCMethod0(__Pyx_CachedCFunction* cfunc, PyObject* self) {
    PyObject *args, *result = NULL;
    if (unlikely(!cfunc->method) && unlikely(__Pyx_TryUnpackUnboundCMethod(cfunc) < 0)) return NULL;
#if CYTHON_ASSUME_SAFE_MACROS
    args = PyTuple_New(1);
    if (unlikely(!args)) goto bad;
    Py_INCREF(self);
    PyTuple_SET_ITEM(args, 0, self);
#else
    args = PyTuple_Pack(1, self);
    if (unlikely(!args)) goto bad;
#endif
    result = __Pyx_PyObject_Call(cfunc->method, args, NULL);
    Py_DECREF(args);
bad:
    return result;
}

 
static CYTHON_INLINE PyObject* __Pyx_PyDict_Keys(PyObject* d) {
    if (PY_MAJOR_VERSION >= 3)
        return __Pyx_CallUnboundCMethod0(&__pyx_umethod_PyDict_Type_keys, d);
    else
        return PyDict_Keys(d);
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

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname) {
    PyErr_Format(PyExc_NameError, "free variable '%s' referenced before assignment in enclosing scope", varname);
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
