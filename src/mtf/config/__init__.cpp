 

#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif  
#if defined(CYTHON_LIMITED_API) && 0
  #ifndef Py_LIMITED_API
    #if CYTHON_LIMITED_API+0 > 0x03030000
      #define Py_LIMITED_API CYTHON_LIMITED_API
    #else
      #define Py_LIMITED_API 0x03030000
    #endif
  #endif
#endif

#include "Python.h"
#ifndef Py_PYTHON_H
    #error Python headers needed to compile C extensions, please install development version of Python.
#elif PY_VERSION_HEX < 0x02070000 || (0x03000000 <= PY_VERSION_HEX && PY_VERSION_HEX < 0x03030000)
    #error Cython requires Python 2.7+ or Python 3.3+.
#else
#if CYTHON_LIMITED_API
#define __PYX_EXTRA_ABI_MODULE_NAME "limited"
#else
#define __PYX_EXTRA_ABI_MODULE_NAME ""
#endif
#define CYTHON_ABI "3_0_2" __PYX_EXTRA_ABI_MODULE_NAME
#define __PYX_ABI_MODULE_NAME "_cython_" CYTHON_ABI
#define __PYX_TYPE_MODULE_PREFIX __PYX_ABI_MODULE_NAME "."
#define CYTHON_HEX_VERSION 0x030002F0
#define CYTHON_FUTURE_DIVISION 1
#include <stddef.h>
#ifndef offsetof
  #define offsetof(type, member) ( (size_t) & ((type*)0) -> member )
#endif
#if !defined(_WIN32) && !defined(WIN32) && !defined(MS_WINDOWS)
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
  #define HAVE_LONG_LONG
#endif
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifndef Py_HUGE_VAL
  #define Py_HUGE_VAL HUGE_VAL
#endif
#define __PYX_LIMITED_VERSION_HEX PY_VERSION_HEX
#if defined(GRAALVM_PYTHON)
   
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 1
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_TYPE_SPECS
  #define CYTHON_USE_TYPE_SPECS 0
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
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS (PY_MAJOR_VERSION >= 3)
  #endif
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE 0
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
#elif defined(PYPY_VERSION)
  #define CYTHON_COMPILING_IN_PYPY 1
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
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
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS (PY_MAJOR_VERSION >= 3)
  #endif
  #if PY_VERSION_HEX < 0x03090000
    #undef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #elif !defined(CYTHON_PEP489_MULTI_PHASE_INIT)
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE (PY_VERSION_HEX >= 0x030400a1 && PYPY_VERSION_NUM >= 0x07030C00)
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
#elif defined(CYTHON_LIMITED_API)
  #ifdef Py_LIMITED_API
    #undef __PYX_LIMITED_VERSION_HEX
    #define __PYX_LIMITED_VERSION_HEX Py_LIMITED_API
  #endif
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 1
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_CLINE_IN_TRACEBACK
  #define CYTHON_CLINE_IN_TRACEBACK 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_TYPE_SPECS
  #define CYTHON_USE_TYPE_SPECS 1
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #undef CYTHON_USE_ASYNC_SLOTS
  #define CYTHON_USE_ASYNC_SLOTS 0
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_WRITER
    #define CYTHON_USE_UNICODE_WRITER 0
  #endif
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 1
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 0
  #endif
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
#elif defined(PY_NOGIL)
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
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
  #define CYTHON_COMPILING_IN_CPYTHON 1
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
  #ifndef CYTHON_USE_PYTYPE_LOOKUP
    #define CYTHON_USE_PYTYPE_LOOKUP 1
  #endif
  #if PY_MAJOR_VERSION < 3
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #ifndef CYTHON_USE_PYLONG_INTERNALS
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
  #ifndef CYTHON_FAST_THREAD_STATE
    #define CYTHON_FAST_THREAD_STATE 1
  #endif
  #ifndef CYTHON_FAST_GIL
    #define CYTHON_FAST_GIL (PY_MAJOR_VERSION < 3 || PY_VERSION_HEX >= 0x03060000 && PY_VERSION_HEX < 0x030C00A6)
  #endif
  #ifndef CYTHON_METH_FASTCALL
    #define CYTHON_METH_FASTCALL (PY_VERSION_HEX >= 0x030700A1)
  #endif
  #ifndef CYTHON_FAST_PYCALL
    #define CYTHON_FAST_PYCALL 1
  #endif
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #elif !defined(CYTHON_PEP489_MULTI_PHASE_INIT)
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #ifndef CYTHON_USE_MODULE_STATE
    #define CYTHON_USE_MODULE_STATE 0
  #endif
  #if PY_VERSION_HEX < 0x030400a1
    #undef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 0
  #elif !defined(CYTHON_USE_TP_FINALIZE)
    #define CYTHON_USE_TP_FINALIZE 1
  #endif
  #if PY_VERSION_HEX < 0x030600B1
    #undef CYTHON_USE_DICT_VERSIONS
    #define CYTHON_USE_DICT_VERSIONS 0
  #elif !defined(CYTHON_USE_DICT_VERSIONS)
    #define CYTHON_USE_DICT_VERSIONS  (PY_VERSION_HEX < 0x030C00A5)
  #endif
  #if PY_VERSION_HEX < 0x030700A3
    #undef CYTHON_USE_EXC_INFO_STACK
    #define CYTHON_USE_EXC_INFO_STACK 0
  #elif !defined(CYTHON_USE_EXC_INFO_STACK)
    #define CYTHON_USE_EXC_INFO_STACK 1
  #endif
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 1
  #endif
#endif
#if !defined(CYTHON_FAST_PYCCALL)
#define CYTHON_FAST_PYCCALL  (CYTHON_FAST_PYCALL && PY_VERSION_HEX >= 0x030600B1)
#endif
#if !defined(CYTHON_VECTORCALL)
#define CYTHON_VECTORCALL  (CYTHON_FAST_PYCCALL && PY_VERSION_HEX >= 0x030800B1)
#endif
#define CYTHON_BACKPORT_VECTORCALL (CYTHON_METH_FASTCALL && PY_VERSION_HEX < 0x030800B1)
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
  #if defined(__cplusplus)
     
    #if ((defined(_MSVC_LANG) && _MSVC_LANG >= 201703L) || __cplusplus >= 201703L)
      #if __has_cpp_attribute(maybe_unused)
        #define CYTHON_UNUSED [[maybe_unused]]
      #endif
    #endif
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
#ifndef CYTHON_UNUSED_VAR
#  if defined(__cplusplus)
     template<class T> void CYTHON_UNUSED_VAR( const T& ) { }
#  else
#    define CYTHON_UNUSED_VAR(x) (void)(x)
#  endif
#endif
#ifndef CYTHON_MAYBE_UNUSED_VAR
  #define CYTHON_MAYBE_UNUSED_VAR(x) CYTHON_UNUSED_VAR(x)
#endif
#ifndef CYTHON_NCP_UNUSED
# if CYTHON_COMPILING_IN_CPYTHON
#  define CYTHON_NCP_UNUSED
# else
#  define CYTHON_NCP_UNUSED CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_USE_CPP_STD_MOVE
  #if defined(__cplusplus) && (\
    __cplusplus >= 201103L || (defined(_MSC_VER) && _MSC_VER >= 1600))
    #define CYTHON_USE_CPP_STD_MOVE 1
  #else
    #define CYTHON_USE_CPP_STD_MOVE 0
  #endif
#endif
#define __Pyx_void_to_None(void_result) ((void)(void_result), Py_INCREF(Py_None), Py_None)
#ifdef _MSC_VER
    #ifndef _MSC_STDINT_H_
        #if _MSC_VER < 1300
            typedef unsigned char     uint8_t;
            typedef unsigned short    uint16_t;
            typedef unsigned int      uint32_t;
        #else
            typedef unsigned __int8   uint8_t;
            typedef unsigned __int16  uint16_t;
            typedef unsigned __int32  uint32_t;
        #endif
    #endif
    #if _MSC_VER < 1300
        #ifdef _WIN64
            typedef unsigned long long  __pyx_uintptr_t;
        #else
            typedef unsigned int        __pyx_uintptr_t;
        #endif
    #else
        #ifdef _WIN64
            typedef unsigned __int64    __pyx_uintptr_t;
        #else
            typedef unsigned __int32    __pyx_uintptr_t;
        #endif
    #endif
#else
    #include <stdint.h>
    typedef uintptr_t  __pyx_uintptr_t;
#endif
#ifndef CYTHON_FALLTHROUGH
  #if defined(__cplusplus)
     
    #if ((defined(_MSVC_LANG) && _MSVC_LANG >= 201703L) || __cplusplus >= 201703L)
      #if __has_cpp_attribute(fallthrough)
        #define CYTHON_FALLTHROUGH [[fallthrough]]
      #endif
    #endif
    #ifndef CYTHON_FALLTHROUGH
      #if __has_cpp_attribute(clang::fallthrough)
        #define CYTHON_FALLTHROUGH [[clang::fallthrough]]
      #elif __has_cpp_attribute(gnu::fallthrough)
        #define CYTHON_FALLTHROUGH [[gnu::fallthrough]]
      #endif
    #endif
  #endif
  #ifndef CYTHON_FALLTHROUGH
    #if __has_attribute(fallthrough)
      #define CYTHON_FALLTHROUGH __attribute__((fallthrough))
    #else
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
  #if defined(__clang__) && defined(__apple_build_version__)
    #if __apple_build_version__ < 7000000
      #undef  CYTHON_FALLTHROUGH
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
#endif
#ifdef __cplusplus
  template <typename T>
  struct __PYX_IS_UNSIGNED_IMPL {static const bool value = T(0) < T(-1);};
  #define __PYX_IS_UNSIGNED(type) (__PYX_IS_UNSIGNED_IMPL<type>::value)
#else
  #define __PYX_IS_UNSIGNED(type) (((type)-1) > 0)
#endif
#if CYTHON_COMPILING_IN_PYPY == 1
  #define __PYX_NEED_TP_PRINT_SLOT  (PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x030A0000)
#else
  #define __PYX_NEED_TP_PRINT_SLOT  (PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x03090000)
#endif
#define __PYX_REINTERPRET_FUNCION(func_pointer, other_pointer) ((func_pointer)(void(*)(void))(other_pointer))

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
    template<typename U> bool operator ==(const U& other) const { return *ptr == other; }
    template<typename U> bool operator !=(const U& other) const { return *ptr != other; }
    template<typename U> bool operator==(const __Pyx_FakeReference<U>& other) const { return *ptr == *other.ptr; }
    template<typename U> bool operator!=(const __Pyx_FakeReference<U>& other) const { return *ptr != *other.ptr; }
  private:
    T *ptr;
};

#define __PYX_BUILD_PY_SSIZE_T "n"
#define CYTHON_FORMAT_SSIZE_T "z"
#if PY_MAJOR_VERSION < 3
  #define __Pyx_BUILTIN_MODULE_NAME "__builtin__"
  #define __Pyx_DefaultClassType PyClass_Type
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a+k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#else
  #define __Pyx_BUILTIN_MODULE_NAME "builtins"
  #define __Pyx_DefaultClassType PyType_Type
#if CYTHON_COMPILING_IN_LIMITED_API
    static CYTHON_INLINE PyObject* __Pyx_PyCode_New(int a, int p, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
        PyObject *exception_table = NULL;
        PyObject *types_module=NULL, *code_type=NULL, *result=NULL;
        PyObject *version_info;  
        PyObject *py_minor_version = NULL;
        long minor_version = 0;
        PyObject *type, *value, *traceback;
        PyErr_Fetch(&type, &value, &traceback);
        #if __PYX_LIMITED_VERSION_HEX >= 0x030B0000
        minor_version = 11;  
        #else
        if (!(version_info = PySys_GetObject("version_info"))) goto end;
        if (!(py_minor_version = PySequence_GetItem(version_info, 1))) goto end;
        minor_version = PyLong_AsLong(py_minor_version);
        if (minor_version == -1 && PyErr_Occurred()) goto end;
        #endif
        if (!(types_module = PyImport_ImportModule("types"))) goto end;
        if (!(code_type = PyObject_GetAttrString(types_module, "CodeType"))) goto end;
        if (minor_version <= 7) {
            (void)p;
            result = PyObject_CallFunction(code_type, "iiiiiOOOOOOiOO", a, k, l, s, f, code,
                          c, n, v, fn, name, fline, lnos, fv, cell);
        } else if (minor_version <= 10) {
            result = PyObject_CallFunction(code_type, "iiiiiiOOOOOOiOO", a,p, k, l, s, f, code,
                          c, n, v, fn, name, fline, lnos, fv, cell);
        } else {
            if (!(exception_table = PyBytes_FromStringAndSize(NULL, 0))) goto end;
            result = PyObject_CallFunction(code_type, "iiiiiiOOOOOOOiOO", a,p, k, l, s, f, code,
                          c, n, v, fn, name, name, fline, lnos, exception_table, fv, cell);
        }
    end:
        Py_XDECREF(code_type);
        Py_XDECREF(exception_table);
        Py_XDECREF(types_module);
        Py_XDECREF(py_minor_version);
        if (type) {
            PyErr_Restore(type, value, traceback);
        }
        return result;
    }
    #ifndef CO_OPTIMIZED
    #define CO_OPTIMIZED 0x0001
    #endif
    #ifndef CO_NEWLOCALS
    #define CO_NEWLOCALS 0x0002
    #endif
    #ifndef CO_VARARGS
    #define CO_VARARGS 0x0004
    #endif
    #ifndef CO_VARKEYWORDS
    #define CO_VARKEYWORDS 0x0008
    #endif
    #ifndef CO_ASYNC_GENERATOR
    #define CO_ASYNC_GENERATOR 0x0200
    #endif
    #ifndef CO_GENERATOR
    #define CO_GENERATOR 0x0020
    #endif
    #ifndef CO_COROUTINE
    #define CO_COROUTINE 0x0080
    #endif
#elif PY_VERSION_HEX >= 0x030B0000
  static CYTHON_INLINE PyCodeObject* __Pyx_PyCode_New(int a, int p, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
    PyCodeObject *result;
    PyObject *empty_bytes = PyBytes_FromStringAndSize("", 0);   
    if (!empty_bytes) return NULL;
    result =
      #if PY_VERSION_HEX >= 0x030C0000
        PyUnstable_Code_NewWithPosOnlyArgs
      #else
        PyCode_NewWithPosOnlyArgs
      #endif
        (a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, name, fline, lnos, empty_bytes);
    Py_DECREF(empty_bytes);
    return result;
  }
#elif PY_VERSION_HEX >= 0x030800B2 && !CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_NewWithPosOnlyArgs(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#else
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#endif
#endif
#if PY_VERSION_HEX >= 0x030900A4 || defined(Py_IS_TYPE)
  #define __Pyx_IS_TYPE(ob, type) Py_IS_TYPE(ob, type)
#else
  #define __Pyx_IS_TYPE(ob, type) (((const PyObject*)ob)->ob_type == (type))
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_Is)
  #define __Pyx_Py_Is(x, y)  Py_Is(x, y)
#else
  #define __Pyx_Py_Is(x, y) ((x) == (y))
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsNone)
  #define __Pyx_Py_IsNone(ob) Py_IsNone(ob)
#else
  #define __Pyx_Py_IsNone(ob) __Pyx_Py_Is((ob), Py_None)
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsTrue)
  #define __Pyx_Py_IsTrue(ob) Py_IsTrue(ob)
#else
  #define __Pyx_Py_IsTrue(ob) __Pyx_Py_Is((ob), Py_True)
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsFalse)
  #define __Pyx_Py_IsFalse(ob) Py_IsFalse(ob)
#else
  #define __Pyx_Py_IsFalse(ob) __Pyx_Py_Is((ob), Py_False)
#endif
#define __Pyx_NoneAsNull(obj)  (__Pyx_Py_IsNone(obj) ? NULL : (obj))
#if PY_VERSION_HEX >= 0x030900F0 && !CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyObject_GC_IsFinalized(o) PyObject_GC_IsFinalized(o)
#else
  #define __Pyx_PyObject_GC_IsFinalized(o) _PyGC_FINALIZED(o)
#endif
#ifndef CO_COROUTINE
  #define CO_COROUTINE 0x80
#endif
#ifndef CO_ASYNC_GENERATOR
  #define CO_ASYNC_GENERATOR 0x200
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
#ifndef Py_TPFLAGS_SEQUENCE
  #define Py_TPFLAGS_SEQUENCE 0
#endif
#ifndef Py_TPFLAGS_MAPPING
  #define Py_TPFLAGS_MAPPING 0
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
#if CYTHON_METH_FASTCALL
  #define __Pyx_METH_FASTCALL METH_FASTCALL
  #define __Pyx_PyCFunction_FastCall __Pyx_PyCFunctionFast
  #define __Pyx_PyCFunction_FastCallWithKeywords __Pyx_PyCFunctionFastWithKeywords
#else
  #define __Pyx_METH_FASTCALL METH_VARARGS
  #define __Pyx_PyCFunction_FastCall PyCFunction
  #define __Pyx_PyCFunction_FastCallWithKeywords PyCFunctionWithKeywords
#endif
#if CYTHON_VECTORCALL
  #define __pyx_vectorcallfunc vectorcallfunc
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  PY_VECTORCALL_ARGUMENTS_OFFSET
  #define __Pyx_PyVectorcall_NARGS(n)  PyVectorcall_NARGS((size_t)(n))
#elif CYTHON_BACKPORT_VECTORCALL
  typedef PyObject *(*__pyx_vectorcallfunc)(PyObject *callable, PyObject *const *args,
                                            size_t nargsf, PyObject *kwnames);
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  ((size_t)1 << (8 * sizeof(size_t) - 1))
  #define __Pyx_PyVectorcall_NARGS(n)  ((Py_ssize_t)(((size_t)(n)) & ~__Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET))
#else
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  0
  #define __Pyx_PyVectorcall_NARGS(n)  ((Py_ssize_t)(n))
#endif
#if __PYX_LIMITED_VERSION_HEX < 0x030900B1
  #define __Pyx_PyType_FromModuleAndSpec(m, s, b)  ((void)m, PyType_FromSpecWithBases(s, b))
  typedef PyObject *(*__Pyx_PyCMethod)(PyObject *, PyTypeObject *, PyObject *const *, size_t, PyObject *);
#else
  #define __Pyx_PyType_FromModuleAndSpec(m, s, b)  PyType_FromModuleAndSpec(m, s, b)
  #define __Pyx_PyCMethod  PyCMethod
#endif
#ifndef METH_METHOD
  #define METH_METHOD 0x200
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Malloc)
  #define PyObject_Malloc(s)   PyMem_Malloc(s)
  #define PyObject_Free(p)     PyMem_Free(p)
  #define PyObject_Realloc(p)  PyMem_Realloc(p)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)
#else
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)  (frame)->f_lineno = (lineno)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyThreadState_Current PyThreadState_Get()
#elif !CYTHON_FAST_THREAD_STATE
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#elif PY_VERSION_HEX >= 0x03060000
  #define __Pyx_PyThreadState_Current _PyThreadState_UncheckedGet()
#elif PY_VERSION_HEX >= 0x03000000
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#else
  #define __Pyx_PyThreadState_Current _PyThreadState_Current
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_INLINE void *__Pyx_PyModule_GetState(PyObject *op)
{
    void *result;
    result = PyModule_GetState(op);
    if (!result)
        Py_FatalError("Couldn't find the module state");
    return result;
}
#endif
#define __Pyx_PyObject_GetSlot(obj, name, func_ctype)  __Pyx_PyType_GetSlot(Py_TYPE(obj), name, func_ctype)
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyType_GetSlot(type, name, func_ctype)  ((func_ctype) PyType_GetSlot((type), Py_##name))
#else
  #define __Pyx_PyType_GetSlot(type, name, func_ctype)  ((type)->name)
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
#if PY_MAJOR_VERSION < 3
    #if CYTHON_COMPILING_IN_PYPY
        #if PYPY_VERSION_NUM < 0x07030600
            #if defined(__cplusplus) && __cplusplus >= 201402L
                [[deprecated("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6")]]
            #elif defined(__GNUC__) || defined(__clang__)
                __attribute__ ((__deprecated__("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6")))
            #elif defined(_MSC_VER)
                __declspec(deprecated("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6"))
            #endif
            static CYTHON_INLINE int PyGILState_Check(void) {
                return 0;
            }
        #else   
        #endif   
    #else
        static CYTHON_INLINE int PyGILState_Check(void) {
            PyThreadState * tstate = _PyThreadState_Current;
            return tstate && (tstate == PyGILState_GetThisThreadState());
        }
    #endif
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
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX > 0x030600B4 && CYTHON_USE_UNICODE_INTERNALS
#define __Pyx_PyDict_GetItemStrWithError(dict, name)  _PyDict_GetItem_KnownHash(dict, name, ((PyASCIIObject *) name)->hash)
static CYTHON_INLINE PyObject * __Pyx_PyDict_GetItemStr(PyObject *dict, PyObject *name) {
    PyObject *res = __Pyx_PyDict_GetItemStrWithError(dict, name);
    if (res == NULL) PyErr_Clear();
    return res;
}
#elif PY_MAJOR_VERSION >= 3 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07020000)
#define __Pyx_PyDict_GetItemStrWithError  PyDict_GetItemWithError
#define __Pyx_PyDict_GetItemStr           PyDict_GetItem
#else
static CYTHON_INLINE PyObject * __Pyx_PyDict_GetItemStrWithError(PyObject *dict, PyObject *name) {
#if CYTHON_COMPILING_IN_PYPY
    return PyDict_GetItem(dict, name);
#else
    PyDictEntry *ep;
    PyDictObject *mp = (PyDictObject*) dict;
    long hash = ((PyStringObject *) name)->ob_shash;
    assert(hash != -1);
    ep = (mp->ma_lookup)(mp, name, hash);
    if (ep == NULL) {
        return NULL;
    }
    return ep->me_value;
#endif
}
#define __Pyx_PyDict_GetItemStr           PyDict_GetItem
#endif
#if CYTHON_USE_TYPE_SLOTS
  #define __Pyx_PyType_GetFlags(tp)   (((PyTypeObject *)tp)->tp_flags)
  #define __Pyx_PyType_HasFeature(type, feature)  ((__Pyx_PyType_GetFlags(type) & (feature)) != 0)
  #define __Pyx_PyObject_GetIterNextFunc(obj)  (Py_TYPE(obj)->tp_iternext)
#else
  #define __Pyx_PyType_GetFlags(tp)   (PyType_GetFlags((PyTypeObject *)tp))
  #define __Pyx_PyType_HasFeature(type, feature)  PyType_HasFeature(type, feature)
  #define __Pyx_PyObject_GetIterNextFunc(obj)  PyIter_Next
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_SetItemOnTypeDict(tp, k, v) PyObject_GenericSetAttr((PyObject*)tp, k, v)
#else
  #define __Pyx_SetItemOnTypeDict(tp, k, v) PyDict_SetItem(tp->tp_dict, k, v)
#endif
#if CYTHON_USE_TYPE_SPECS && PY_VERSION_HEX >= 0x03080000
#define __Pyx_PyHeapTypeObject_GC_Del(obj)  {\
    PyTypeObject *type = Py_TYPE(obj);\
    assert(__Pyx_PyType_HasFeature(type, Py_TPFLAGS_HEAPTYPE));\
    PyObject_GC_Del(obj);\
    Py_DECREF(type);\
}
#else
#define __Pyx_PyHeapTypeObject_GC_Del(obj)  PyObject_GC_Del(obj)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define CYTHON_PEP393_ENABLED 1
  #define __Pyx_PyUnicode_READY(op)       (0)
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GetLength(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_ReadChar(u, i)
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((void)u, 1114111U)
  #define __Pyx_PyUnicode_KIND(u)         ((void)u, (0))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)u)
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)k, PyUnicode_ReadChar((PyObject*)(d), i))
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GetLength(u))
#elif PY_VERSION_HEX > 0x03030000 && defined(PyUnicode_KIND)
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
  #define __Pyx_PyUnicode_KIND(u)         ((int)PyUnicode_KIND(u))
  #define __Pyx_PyUnicode_DATA(u)         PyUnicode_DATA(u)
  #define __Pyx_PyUnicode_READ(k, d, i)   PyUnicode_READ(k, d, i)
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  PyUnicode_WRITE(k, d, i, (Py_UCS4) ch)
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
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((sizeof(Py_UNICODE) == 2) ? 65535U : 1114111U)
  #define __Pyx_PyUnicode_KIND(u)         ((int)sizeof(Py_UNICODE))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)PyUnicode_AS_UNICODE(u))
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)(k), (Py_UCS4)(((Py_UNICODE*)d)[i]))
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  (((void)(k)), ((Py_UNICODE*)d)[i] = (Py_UNICODE) ch)
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
#if CYTHON_COMPILING_IN_PYPY
  #if !defined(PyUnicode_DecodeUnicodeEscape)
    #define PyUnicode_DecodeUnicodeEscape(s, size, errors)  PyUnicode_Decode(s, size, "unicode_escape", errors)
  #endif
  #if !defined(PyUnicode_Contains) || (PY_MAJOR_VERSION == 2 && PYPY_VERSION_NUM < 0x07030500)
    #undef PyUnicode_Contains
    #define PyUnicode_Contains(u, s)  PySequence_Contains(u, s)
  #endif
  #if !defined(PyByteArray_Check)
    #define PyByteArray_Check(obj)  PyObject_TypeCheck(obj, &PyByteArray_Type)
  #endif
  #if !defined(PyObject_Format)
    #define PyObject_Format(obj, fmt)  PyObject_CallMethod(obj, "__format__", "O", fmt)
  #endif
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
#if CYTHON_COMPILING_IN_CPYTHON
  #define __Pyx_PySequence_ListKeepNew(obj)\
    (likely(PyList_CheckExact(obj) && Py_REFCNT(obj) == 1) ? __Pyx_NewRef(obj) : PySequence_List(obj))
#else
  #define __Pyx_PySequence_ListKeepNew(obj)  PySequence_List(obj)
#endif
#ifndef PySet_CheckExact
  #define PySet_CheckExact(obj)        __Pyx_IS_TYPE(obj, &PySet_Type)
#endif
#if PY_VERSION_HEX >= 0x030900A4
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_SET_REFCNT(obj, refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SET_SIZE(obj, size)
#else
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_REFCNT(obj) = (refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SIZE(obj) = (size)
#endif
#if CYTHON_ASSUME_SAFE_MACROS
  #define __Pyx_PySequence_ITEM(o, i) PySequence_ITEM(o, i)
  #define __Pyx_PySequence_SIZE(seq)  Py_SIZE(seq)
  #define __Pyx_PyTuple_SET_ITEM(o, i, v) (PyTuple_SET_ITEM(o, i, v), (0))
  #define __Pyx_PyList_SET_ITEM(o, i, v) (PyList_SET_ITEM(o, i, v), (0))
  #define __Pyx_PyTuple_GET_SIZE(o) PyTuple_GET_SIZE(o)
  #define __Pyx_PyList_GET_SIZE(o) PyList_GET_SIZE(o)
  #define __Pyx_PySet_GET_SIZE(o) PySet_GET_SIZE(o)
  #define __Pyx_PyBytes_GET_SIZE(o) PyBytes_GET_SIZE(o)
  #define __Pyx_PyByteArray_GET_SIZE(o) PyByteArray_GET_SIZE(o)
#else
  #define __Pyx_PySequence_ITEM(o, i) PySequence_GetItem(o, i)
  #define __Pyx_PySequence_SIZE(seq)  PySequence_Size(seq)
  #define __Pyx_PyTuple_SET_ITEM(o, i, v) PyTuple_SetItem(o, i, v)
  #define __Pyx_PyList_SET_ITEM(o, i, v) PyList_SetItem(o, i, v)
  #define __Pyx_PyTuple_GET_SIZE(o) PyTuple_Size(o)
  #define __Pyx_PyList_GET_SIZE(o) PyList_Size(o)
  #define __Pyx_PySet_GET_SIZE(o) PySet_Size(o)
  #define __Pyx_PyBytes_GET_SIZE(o) PyBytes_Size(o)
  #define __Pyx_PyByteArray_GET_SIZE(o) PyByteArray_Size(o)
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyIntObject                  PyLongObject
  #define PyInt_Type                   PyLong_Type
  #define PyInt_Check(op)              PyLong_Check(op)
  #define PyInt_CheckExact(op)         PyLong_CheckExact(op)
  #define __Pyx_Py3Int_Check(op)       PyLong_Check(op)
  #define __Pyx_Py3Int_CheckExact(op)  PyLong_CheckExact(op)
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
#else
  #define __Pyx_Py3Int_Check(op)       (PyLong_Check(op) || PyInt_Check(op))
  #define __Pyx_Py3Int_CheckExact(op)  (PyLong_CheckExact(op) || PyInt_CheckExact(op))
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

#ifdef CYTHON_EXTERN_C
    #undef __PYX_EXTERN_C
    #define __PYX_EXTERN_C CYTHON_EXTERN_C
#elif defined(__PYX_EXTERN_C)
    #ifdef _MSC_VER
    #pragma message ("Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.")
    #else
    #warning Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.
    #endif
#else
    #define __PYX_EXTERN_C extern "C++"
#endif

#define __PYX_HAVE__config
#define __PYX_HAVE_API__config
 
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
#define __Pyx_PyObject_AsWritableString(s)    ((char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableSString(s)    ((signed char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableUString(s)    ((unsigned char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsSString(s)    ((const signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsUString(s)    ((const unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_FromCString(s)  __Pyx_PyObject_FromString((const char*)s)
#define __Pyx_PyBytes_FromCString(s)   __Pyx_PyBytes_FromString((const char*)s)
#define __Pyx_PyByteArray_FromCString(s)   __Pyx_PyByteArray_FromString((const char*)s)
#define __Pyx_PyStr_FromCString(s)     __Pyx_PyStr_FromString((const char*)s)
#define __Pyx_PyUnicode_FromCString(s) __Pyx_PyUnicode_FromString((const char*)s)
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_INLINE size_t __Pyx_Py_UNICODE_strlen(const wchar_t *u)
{
    const wchar_t *u_end = u;
    while (*u_end++) ;
    return (size_t)(u_end - u - 1);
}
#else
static CYTHON_INLINE size_t __Pyx_Py_UNICODE_strlen(const Py_UNICODE *u)
{
    const Py_UNICODE *u_end = u;
    while (*u_end++) ;
    return (size_t)(u_end - u - 1);
}
#endif
#define __Pyx_PyUnicode_FromOrdinal(o)       PyUnicode_FromOrdinal((int)o)
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
#if CYTHON_USE_PYLONG_INTERNALS
  #if PY_VERSION_HEX >= 0x030C00A7
  #ifndef _PyLong_SIGN_MASK
    #define _PyLong_SIGN_MASK 3
  #endif
  #ifndef _PyLong_NON_SIZE_BITS
    #define _PyLong_NON_SIZE_BITS 3
  #endif
  #define __Pyx_PyLong_Sign(x)  (((PyLongObject*)x)->long_value.lv_tag & _PyLong_SIGN_MASK)
  #define __Pyx_PyLong_IsNeg(x)  ((__Pyx_PyLong_Sign(x) & 2) != 0)
  #define __Pyx_PyLong_IsNonNeg(x)  (!__Pyx_PyLong_IsNeg(x))
  #define __Pyx_PyLong_IsZero(x)  (__Pyx_PyLong_Sign(x) & 1)
  #define __Pyx_PyLong_IsPos(x)  (__Pyx_PyLong_Sign(x) == 0)
  #define __Pyx_PyLong_CompactValueUnsigned(x)  (__Pyx_PyLong_Digits(x)[0])
  #define __Pyx_PyLong_DigitCount(x)  ((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> _PyLong_NON_SIZE_BITS))
  #define __Pyx_PyLong_SignedDigitCount(x)\
        ((1 - (Py_ssize_t) __Pyx_PyLong_Sign(x)) * __Pyx_PyLong_DigitCount(x))
  #if defined(PyUnstable_Long_IsCompact) && defined(PyUnstable_Long_CompactValue)
    #define __Pyx_PyLong_IsCompact(x)     PyUnstable_Long_IsCompact((PyLongObject*) x)
    #define __Pyx_PyLong_CompactValue(x)  PyUnstable_Long_CompactValue((PyLongObject*) x)
  #else
    #define __Pyx_PyLong_IsCompact(x)     (((PyLongObject*)x)->long_value.lv_tag < (2 << _PyLong_NON_SIZE_BITS))
    #define __Pyx_PyLong_CompactValue(x)  ((1 - (Py_ssize_t) __Pyx_PyLong_Sign(x)) * (Py_ssize_t) __Pyx_PyLong_Digits(x)[0])
  #endif
  typedef Py_ssize_t  __Pyx_compact_pylong;
  typedef size_t  __Pyx_compact_upylong;
  #else   
  #define __Pyx_PyLong_IsNeg(x)  (Py_SIZE(x) < 0)
  #define __Pyx_PyLong_IsNonNeg(x)  (Py_SIZE(x) >= 0)
  #define __Pyx_PyLong_IsZero(x)  (Py_SIZE(x) == 0)
  #define __Pyx_PyLong_IsPos(x)  (Py_SIZE(x) > 0)
  #define __Pyx_PyLong_CompactValueUnsigned(x)  ((Py_SIZE(x) == 0) ? 0 : __Pyx_PyLong_Digits(x)[0])
  #define __Pyx_PyLong_DigitCount(x)  __Pyx_sst_abs(Py_SIZE(x))
  #define __Pyx_PyLong_SignedDigitCount(x)  Py_SIZE(x)
  #define __Pyx_PyLong_IsCompact(x)  (Py_SIZE(x) == 0 || Py_SIZE(x) == 1 || Py_SIZE(x) == -1)
  #define __Pyx_PyLong_CompactValue(x)\
        ((Py_SIZE(x) == 0) ? (sdigit) 0 : ((Py_SIZE(x) < 0) ? -(sdigit)__Pyx_PyLong_Digits(x)[0] : (sdigit)__Pyx_PyLong_Digits(x)[0]))
  typedef sdigit  __Pyx_compact_pylong;
  typedef digit  __Pyx_compact_upylong;
  #endif
  #if PY_VERSION_HEX >= 0x030C00A5
  #define __Pyx_PyLong_Digits(x)  (((PyLongObject*)x)->long_value.ob_digit)
  #else
  #define __Pyx_PyLong_Digits(x)  (((PyLongObject*)x)->ob_digit)
  #endif
#endif
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
            ascii_chars[c] = (char) c;
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

#if !CYTHON_USE_MODULE_STATE
static PyObject *__pyx_m = NULL;
#endif
static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char * __pyx_cfilenm = __FILE__;
static const char *__pyx_filename;

 

static const char *__pyx_f[] = {
  "mtf/config/__init__.py",
};
 
 
 
 

 
 

 
 
#ifndef CYTHON_REFNANNY
  #define CYTHON_REFNANNY 0
#endif
#if CYTHON_REFNANNY
  typedef struct {
    void (*INCREF)(void*, PyObject*, Py_ssize_t);
    void (*DECREF)(void*, PyObject*, Py_ssize_t);
    void (*GOTREF)(void*, PyObject*, Py_ssize_t);
    void (*GIVEREF)(void*, PyObject*, Py_ssize_t);
    void* (*SetupContext)(const char*, Py_ssize_t, const char*);
    void (*FinishContext)(void**);
  } __Pyx_RefNannyAPIStruct;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNanny = NULL;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname);
  #define __Pyx_RefNannyDeclarations void *__pyx_refnanny = NULL;
#ifdef WITH_THREAD
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          if (acquire_gil) {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__));\
              PyGILState_Release(__pyx_gilstate_save);\
          } else {\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__));\
          }
  #define __Pyx_RefNannyFinishContextNogil() {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __Pyx_RefNannyFinishContext();\
              PyGILState_Release(__pyx_gilstate_save);\
          }
#else
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__))
  #define __Pyx_RefNannyFinishContextNogil() __Pyx_RefNannyFinishContext()
#endif
  #define __Pyx_RefNannyFinishContextNogil() {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __Pyx_RefNannyFinishContext();\
              PyGILState_Release(__pyx_gilstate_save);\
          }
  #define __Pyx_RefNannyFinishContext()\
          __Pyx_RefNanny->FinishContext(&__pyx_refnanny)
  #define __Pyx_INCREF(r)  __Pyx_RefNanny->INCREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_DECREF(r)  __Pyx_RefNanny->DECREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_GOTREF(r)  __Pyx_RefNanny->GOTREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_GIVEREF(r) __Pyx_RefNanny->GIVEREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_XINCREF(r)  do { if((r) == NULL); else {__Pyx_INCREF(r); }} while(0)
  #define __Pyx_XDECREF(r)  do { if((r) == NULL); else {__Pyx_DECREF(r); }} while(0)
  #define __Pyx_XGOTREF(r)  do { if((r) == NULL); else {__Pyx_GOTREF(r); }} while(0)
  #define __Pyx_XGIVEREF(r) do { if((r) == NULL); else {__Pyx_GIVEREF(r);}} while(0)
#else
  #define __Pyx_RefNannyDeclarations
  #define __Pyx_RefNannySetupContext(name, acquire_gil)
  #define __Pyx_RefNannyFinishContextNogil()
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
#define __Pyx_Py_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; Py_XDECREF(tmp);\
    } while (0)
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

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyList_FromArray(PyObject *const *src, Py_ssize_t n);
static CYTHON_INLINE PyObject* __Pyx_PyTuple_FromArray(PyObject *const *src, Py_ssize_t n);
#endif

 
#include <string.h>

 
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);

 
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);

 
#if CYTHON_AVOID_BORROWED_REFS
    #define __Pyx_Arg_VARARGS(args, i) PySequence_GetItem(args, i)
#elif CYTHON_ASSUME_SAFE_MACROS
    #define __Pyx_Arg_VARARGS(args, i) PyTuple_GET_ITEM(args, i)
#else
    #define __Pyx_Arg_VARARGS(args, i) PyTuple_GetItem(args, i)
#endif
#if CYTHON_AVOID_BORROWED_REFS
    #define __Pyx_Arg_NewRef_VARARGS(arg) __Pyx_NewRef(arg)
    #define __Pyx_Arg_XDECREF_VARARGS(arg) Py_XDECREF(arg)
#else
    #define __Pyx_Arg_NewRef_VARARGS(arg) arg  
    #define __Pyx_Arg_XDECREF_VARARGS(arg)  
#endif
#define __Pyx_NumKwargs_VARARGS(kwds) PyDict_Size(kwds)
#define __Pyx_KwValues_VARARGS(args, nargs) NULL
#define __Pyx_GetKwValue_VARARGS(kw, kwvalues, s) __Pyx_PyDict_GetItemStrWithError(kw, s)
#define __Pyx_KwargsAsDict_VARARGS(kw, kwvalues) PyDict_Copy(kw)
#if CYTHON_METH_FASTCALL
    #define __Pyx_Arg_FASTCALL(args, i) args[i]
    #define __Pyx_NumKwargs_FASTCALL(kwds) PyTuple_GET_SIZE(kwds)
    #define __Pyx_KwValues_FASTCALL(args, nargs) ((args) + (nargs))
    static CYTHON_INLINE PyObject * __Pyx_GetKwValue_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues, PyObject *s);
    #define __Pyx_KwargsAsDict_FASTCALL(kw, kwvalues) _PyStack_AsDict(kwvalues, kw)
    #define __Pyx_Arg_NewRef_FASTCALL(arg) arg  
    #define __Pyx_Arg_XDECREF_FASTCALL(arg)   
#else
    #define __Pyx_Arg_FASTCALL __Pyx_Arg_VARARGS
    #define __Pyx_NumKwargs_FASTCALL __Pyx_NumKwargs_VARARGS
    #define __Pyx_KwValues_FASTCALL __Pyx_KwValues_VARARGS
    #define __Pyx_GetKwValue_FASTCALL __Pyx_GetKwValue_VARARGS
    #define __Pyx_KwargsAsDict_FASTCALL __Pyx_KwargsAsDict_VARARGS
    #define __Pyx_Arg_NewRef_FASTCALL(arg) __Pyx_Arg_NewRef_VARARGS(arg)
    #define __Pyx_Arg_XDECREF_FASTCALL(arg) __Pyx_Arg_XDECREF_VARARGS(arg)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
#define __Pyx_ArgsSlice_VARARGS(args, start, stop) __Pyx_PyTuple_FromArray(&__Pyx_Arg_VARARGS(args, start), stop - start)
#define __Pyx_ArgsSlice_FASTCALL(args, start, stop) __Pyx_PyTuple_FromArray(&__Pyx_Arg_FASTCALL(args, start), stop - start)
#else
#define __Pyx_ArgsSlice_VARARGS(args, start, stop) PyTuple_GetSlice(args, start, stop)
#define __Pyx_ArgsSlice_FASTCALL(args, start, stop) PyTuple_GetSlice(args, start, stop)
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_ExceptionMatches(err) __Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, err)
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
#else
#define __Pyx_PyErr_ExceptionMatches(err)  PyErr_ExceptionMatches(err)
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyThreadState_declare  PyThreadState *__pyx_tstate;
#define __Pyx_PyThreadState_assign  __pyx_tstate = __Pyx_PyThreadState_Current;
#if PY_VERSION_HEX >= 0x030C00A6
#define __Pyx_PyErr_Occurred()  (__pyx_tstate->current_exception != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  (__pyx_tstate->current_exception ? (PyObject*) Py_TYPE(__pyx_tstate->current_exception) : (PyObject*) NULL)
#else
#define __Pyx_PyErr_Occurred()  (__pyx_tstate->curexc_type != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  (__pyx_tstate->curexc_type)
#endif
#else
#define __Pyx_PyThreadState_declare
#define __Pyx_PyThreadState_assign
#define __Pyx_PyErr_Occurred()  (PyErr_Occurred() != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  PyErr_Occurred()
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_Clear() __Pyx_ErrRestore(NULL, NULL, NULL)
#define __Pyx_ErrRestoreWithState(type, value, tb)  __Pyx_ErrRestoreInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)    __Pyx_ErrFetchInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  __Pyx_ErrRestoreInState(__pyx_tstate, type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)    __Pyx_ErrFetchInState(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A6
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

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GetAttrStr(o,n) PyObject_GetAttr(o,n)
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name);

 
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
#if !CYTHON_VECTORCALL
#define __Pyx_PyFunction_FastCall(func, args, nargs)\
    __Pyx_PyFunction_FastCallDict((func), (args), (nargs), NULL)
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs);
#endif
#define __Pyx_BUILD_ASSERT_EXPR(cond)\
    (sizeof(char [1 - 2*!(cond)]) - 1)
#ifndef Py_MEMBER_SIZE
#define Py_MEMBER_SIZE(type, member) sizeof(((type *)0)->member)
#endif
#if !CYTHON_VECTORCALL
#if PY_VERSION_HEX >= 0x03080000
  #include "frameobject.h"
#if PY_VERSION_HEX >= 0x030b00a6 && !CYTHON_COMPILING_IN_LIMITED_API
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
  #define __Pxy_PyFrame_Initialize_Offsets()
  #define __Pyx_PyFrame_GetLocalsplus(frame)  ((frame)->f_localsplus)
#else
  static size_t __pyx_pyframe_localsplus_offset = 0;
  #include "frameobject.h"
  #define __Pxy_PyFrame_Initialize_Offsets()\
    ((void)__Pyx_BUILD_ASSERT_EXPR(sizeof(PyFrameObject) == offsetof(PyFrameObject, f_localsplus) + Py_MEMBER_SIZE(PyFrameObject, f_localsplus)),\
     (void)(__pyx_pyframe_localsplus_offset = ((size_t)PyFrame_Type.tp_basicsize) - Py_MEMBER_SIZE(PyFrameObject, f_localsplus)))
  #define __Pyx_PyFrame_GetLocalsplus(frame)\
    (assert(__pyx_pyframe_localsplus_offset), (PyObject **)(((char *)(frame)) + __pyx_pyframe_localsplus_offset))
#endif
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

 
#define __Pyx_PyObject_FastCall(func, args, nargs)  __Pyx_PyObject_FastCallDict(func, args, (size_t)(nargs), NULL)
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs);

 
#if CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_DelAttrStr(o,n) __Pyx_PyObject_SetAttrStr(o, n, NULL)
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value);
#else
#define __Pyx_PyObject_DelAttrStr(o,n)   PyObject_DelAttr(o,n)
#define __Pyx_PyObject_SetAttrStr(o,n,v) PyObject_SetAttr(o,n,v)
#endif

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);

 
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

 
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple);
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple);
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject *key);
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

 
#define __Pyx_PyObject_Str(obj)\
    (likely(PyString_CheckExact(obj)) ? __Pyx_NewRef(obj) : PyObject_Str(obj))

 
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

 
#if CYTHON_USE_PYTYPE_LOOKUP && CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_LookupSpecialNoError(obj, attr_name)  __Pyx__PyObject_LookupSpecial(obj, attr_name, 0)
#define __Pyx_PyObject_LookupSpecial(obj, attr_name)  __Pyx__PyObject_LookupSpecial(obj, attr_name, 1)
static CYTHON_INLINE PyObject* __Pyx__PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name, int with_error);
#else
#define __Pyx_PyObject_LookupSpecialNoError(o,n) __Pyx_PyObject_GetAttrStrNoError(o,n)
#define __Pyx_PyObject_LookupSpecial(o,n) __Pyx_PyObject_GetAttrStr(o,n)
#endif

 
static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name, PyObject *qualname,
                                           PyObject *mkw, PyObject *modname, PyObject *doc);
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases, PyObject *dict,
                                      PyObject *mkw, int calculate_metaclass, int allow_py2_metaclass);

 
#include <structmember.h>

 
#if CYTHON_USE_TYPE_SPECS
static int __Pyx_fix_up_extension_type_from_spec(PyType_Spec *spec, PyTypeObject *type);
#endif

 
static PyObject *__Pyx_FetchSharedCythonABIModule(void);

 
#if !CYTHON_USE_TYPE_SPECS
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type);
#else
static PyTypeObject* __Pyx_FetchCommonTypeFromSpec(PyObject *module, PyType_Spec *spec, PyObject *bases);
#endif

 
#if CYTHON_COMPILING_IN_LIMITED_API
static PyObject *__Pyx_PyMethod_New(PyObject *func, PyObject *self, PyObject *typ) {
    PyObject *typesModule=NULL, *methodType=NULL, *result=NULL;
    CYTHON_UNUSED_VAR(typ);
    if (!self)
        return __Pyx_NewRef(func);
    typesModule = PyImport_ImportModule("types");
    if (!typesModule) return NULL;
    methodType = PyObject_GetAttrString(typesModule, "MethodType");
    Py_DECREF(typesModule);
    if (!methodType) return NULL;
    result = PyObject_CallFunctionObjArgs(methodType, func, self, NULL);
    Py_DECREF(methodType);
    return result;
}
#elif PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_PyMethod_New(PyObject *func, PyObject *self, PyObject *typ) {
    CYTHON_UNUSED_VAR(typ);
    if (!self)
        return __Pyx_NewRef(func);
    return PyMethod_New(func, self);
}
#else
    #define __Pyx_PyMethod_New PyMethod_New
#endif

 
#if CYTHON_METH_FASTCALL
static CYTHON_INLINE PyObject *__Pyx_PyVectorcall_FastCallDict(PyObject *func, __pyx_vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw);
#endif

 
#define __Pyx_CyFunction_USED
#define __Pyx_CYFUNCTION_STATICMETHOD  0x01
#define __Pyx_CYFUNCTION_CLASSMETHOD   0x02
#define __Pyx_CYFUNCTION_CCLASS        0x04
#define __Pyx_CYFUNCTION_COROUTINE     0x08
#define __Pyx_CyFunction_GetClosure(f)\
    (((__pyx_CyFunctionObject *) (f))->func_closure)
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_CyFunction_GetClassObj(f)\
      (((__pyx_CyFunctionObject *) (f))->func_classobj)
#else
  #define __Pyx_CyFunction_GetClassObj(f)\
      ((PyObject*) ((PyCMethodObject *) (f))->mm_class)
#endif
#define __Pyx_CyFunction_SetClassObj(f, classobj)\
    __Pyx__CyFunction_SetClassObj((__pyx_CyFunctionObject *) (f), (classobj))
#define __Pyx_CyFunction_Defaults(type, f)\
    ((type *)(((__pyx_CyFunctionObject *) (f))->defaults))
#define __Pyx_CyFunction_SetDefaultsGetter(f, g)\
    ((__pyx_CyFunctionObject *) (f))->defaults_getter = (g)
typedef struct {
#if CYTHON_COMPILING_IN_LIMITED_API
    PyObject_HEAD
    PyObject *func;
#elif PY_VERSION_HEX < 0x030900B1
    PyCFunctionObject func;
#else
    PyCMethodObject func;
#endif
#if CYTHON_BACKPORT_VECTORCALL
    __pyx_vectorcallfunc func_vectorcall;
#endif
#if PY_VERSION_HEX < 0x030500A0 || CYTHON_COMPILING_IN_LIMITED_API
    PyObject *func_weakreflist;
#endif
    PyObject *func_dict;
    PyObject *func_name;
    PyObject *func_qualname;
    PyObject *func_doc;
    PyObject *func_globals;
    PyObject *func_code;
    PyObject *func_closure;
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    PyObject *func_classobj;
#endif
    void *defaults;
    int defaults_pyobjects;
    size_t defaults_size;   
    int flags;
    PyObject *defaults_tuple;
    PyObject *defaults_kwdict;
    PyObject *(*defaults_getter)(PyObject *);
    PyObject *func_annotations;
    PyObject *func_is_coroutine;
} __pyx_CyFunctionObject;
#define __Pyx_CyFunction_Check(obj)  __Pyx_TypeCheck(obj, __pyx_CyFunctionType)
#define __Pyx_IsCyOrPyCFunction(obj)  __Pyx_TypeCheck2(obj, __pyx_CyFunctionType, &PyCFunction_Type)
#define __Pyx_CyFunction_CheckExact(obj)  __Pyx_IS_TYPE(obj, __pyx_CyFunctionType)
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject* op, PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);
static CYTHON_INLINE void __Pyx__CyFunction_SetClassObj(__pyx_CyFunctionObject* f, PyObject* classobj);
static CYTHON_INLINE void *__Pyx_CyFunction_InitDefaults(PyObject *m,
                                                         size_t size,
                                                         int pyobjects);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject *m,
                                                            PyObject *tuple);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *m,
                                                             PyObject *dict);
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject *m,
                                                              PyObject *dict);
static int __pyx_CyFunction_init(PyObject *module);
#if CYTHON_METH_FASTCALL
static PyObject * __Pyx_CyFunction_Vectorcall_NOARGS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_O(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
#if CYTHON_BACKPORT_VECTORCALL
#define __Pyx_CyFunction_func_vectorcall(f) (((__pyx_CyFunctionObject*)f)->func_vectorcall)
#else
#define __Pyx_CyFunction_func_vectorcall(f) (((PyCFunctionObject*)f)->vectorcall)
#endif
#endif

 
static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);

 
#ifdef CYTHON_CLINE_IN_TRACEBACK
#define __Pyx_CLineForTraceback(tstate, c_line)  (((CYTHON_CLINE_IN_TRACEBACK)) ? c_line : 0)
#else
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line);
#endif

 
#if !CYTHON_COMPILING_IN_LIMITED_API
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
#endif

 
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename);

 
#if CYTHON_COMPILING_IN_LIMITED_API
typedef PyObject *__Pyx_TypeName;
#define __Pyx_FMT_TYPENAME "%U"
static __Pyx_TypeName __Pyx_PyType_GetName(PyTypeObject* tp);
#define __Pyx_DECREF_TypeName(obj) Py_XDECREF(obj)
#else
typedef const char *__Pyx_TypeName;
#define __Pyx_FMT_TYPENAME "%.200s"
#define __Pyx_PyType_GetName(tp) ((tp)->tp_name)
#define __Pyx_DECREF_TypeName(obj)
#endif

 
#if !defined(__INTEL_COMPILER) && defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);

 
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);

 
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);

 
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_TypeCheck(obj, type) __Pyx_IsSubtype(Py_TYPE(obj), (PyTypeObject *)type)
#define __Pyx_TypeCheck2(obj, type1, type2) __Pyx_IsAnySubtype2(Py_TYPE(obj), (PyTypeObject *)type1, (PyTypeObject *)type2)
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject *type);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *type1, PyObject *type2);
#else
#define __Pyx_TypeCheck(obj, type) PyObject_TypeCheck(obj, (PyTypeObject *)type)
#define __Pyx_TypeCheck2(obj, type1, type2) (PyObject_TypeCheck(obj, (PyTypeObject *)type1) || PyObject_TypeCheck(obj, (PyTypeObject *)type2))
#define __Pyx_PyErr_GivenExceptionMatches(err, type) PyErr_GivenExceptionMatches(err, type)
#define __Pyx_PyErr_GivenExceptionMatches2(err, type1, type2) (PyErr_GivenExceptionMatches(err, type1) || PyErr_GivenExceptionMatches(err, type2))
#endif
#define __Pyx_PyErr_ExceptionMatches2(err1, err2)  __Pyx_PyErr_GivenExceptionMatches2(__Pyx_PyErr_CurrentExceptionType(), err1, err2)
#define __Pyx_PyException_Check(obj) __Pyx_TypeCheck(obj, PyExc_Exception)

 
static int __Pyx_check_binary_version(void);

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);

 

 
 
 
#define __Pyx_MODULE_NAME "config.__init__"
extern int __pyx_module_is_main_config____init__;
int __pyx_module_is_main_config____init__ = 0;

 
 
 
static const char __pyx_k_[] = ".";
static const char __pyx_k_0[] = "?0";
static const char __pyx_k_1[] = "1";
static const char __pyx_k_t[] = "t";
static const char __pyx_k_y[] = "y";
static const char __pyx_k_FB[] = "FB";
static const char __pyx_k_IG[] = "IG";
static const char __pyx_k_IP[] = "IP";
static const char __pyx_k__2[] = "/";
static const char __pyx_k__7[] = "*";
static const char __pyx_k_fb[] = "fb";
static const char __pyx_k_ig[] = "ig";
static const char __pyx_k_os[] = "os";
static const char __pyx_k_0_2[] = "0";
static const char __pyx_k_1_2[] = "?1";
static const char __pyx_k_5_1[] = "5.1";
static const char __pyx_k__12[] = "?";
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
static const char __pyx_k_cors[] = "cors";
static const char __pyx_k_dict[] = "__dict__";
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
static const char __pyx_k_spec[] = "__spec__";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_Files[] = "Files";
static const char __pyx_k_Panel[] = "Panel";
static const char __pyx_k_Style[] = "Style";
static const char __pyx_k_black[] = "black";
static const char __pyx_k_color[] = "color";
static const char __pyx_k_empty[] = "empty";
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
static const char __pyx_k_other[] = "other";
static const char __pyx_k_quiet[] = "quiet";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_style[] = "style";
static const char __pyx_k_super[] = "super";
static const char __pyx_k_theme[] = "theme";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_utils[] = "utils";
static const char __pyx_k_vi_vn[] = "vi-vn";
static const char __pyx_k_white[] = "white";
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
static const char __pyx_k_Android[] = "\"Android\"";
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
static const char __pyx_k_set_name[] = "__set_name__";
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
static const char __pyx_k_initializing[] = "_initializing";
static const char __pyx_k_is_coroutine[] = "_is_coroutine";
static const char __pyx_k_FB_USER_AGENT[] = "FB_USER_AGENT";
static const char __pyx_k_IG_USER_AGENT[] = "IG_USER_AGENT";
static const char __pyx_k_cache_control[] = "cache-control";
static const char __pyx_k_class_getitem[] = "__class_getitem__";
static const char __pyx_k_config___init[] = "config.__init__";
static const char __pyx_k_configuration[] = ".configuration";
static const char __pyx_k_init_subclass[] = "__init_subclass__";
static const char __pyx_k_object_except[] = "object_except";
static const char __pyx_k_DEFAULT_STYLES[] = "DEFAULT_STYLES";
static const char __pyx_k_TMP_COOKIE_DIR[] = "TMP_COOKIE_DIR";
static const char __pyx_k_deep_sky_blue2[] = "deep_sky_blue2";
static const char __pyx_k_en_US_en_q_0_9[] = "en-US,en;q=0.9";
static const char __pyx_k_hi_IN_hi_q_0_9[] = "hi-IN,hi;q=0.9";
static const char __pyx_k_id_ID_id_q_0_9[] = "id-ID,id;q=0.9";
static const char __pyx_k_ja_JP_jp_q_0_9[] = "ja-JP,jp;q=0.9";
static const char __pyx_k_ms_MY_ms_q_0_9[] = "ms-MY,ms;q=0.9";
static const char __pyx_k_prompt_choices[] = "prompt.choices";
static const char __pyx_k_rgb_114_156_31[] = "rgb(114,156,31)";
static const char __pyx_k_rgb_249_38_114[] = "rgb(249,38,114)";
static const char __pyx_k_sec_fetch_dest[] = "sec-fetch-dest";
static const char __pyx_k_sec_fetch_mode[] = "sec-fetch-mode";
static const char __pyx_k_sec_fetch_site[] = "sec-fetch-site";
static const char __pyx_k_sec_fetch_user[] = "sec-fetch-user";
static const char __pyx_k_vi_VN_vi_q_0_9[] = "vi-VN,vi;q=0.9";
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
static const char __pyx_k_asyncio_coroutines[] = "asyncio.coroutines";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_mtf_module_session[] = "mtf.module.session";
static const char __pyx_k_sec_ch_ua_platform[] = "sec-ch-ua-platform";
static const char __pyx_k_DEFAULT_THEME_COLOR[] = "DEFAULT_THEME_COLOR";
static const char __pyx_k_progress_percentage[] = "progress.percentage";
static const char __pyx_k_rich_default_styles[] = "rich.default_styles";
static const char __pyx_k_window___accessToken[] = "window\\.__accessToken=\\\"(.*?)\\\"";
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
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv[] = "Mozilla/5.0 (X11; Linux x86_64; rv:24.0) Gecko/20100101 Firefox/24.0";
static const char __pyx_k_en_US_en_q_0_9_id_ID_q_0_8_id_q[] = "en-US,en;q=0.9,id-ID;q=0.8,id;q=0.7";
static const char __pyx_k_smirking_face_Silakan_pilih_sal[] = ":smirking_face: Silakan pilih salah satu opsi yang tersedia";
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
static const char __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple[] = "Mozilla/5.0 (X11; Linux i686) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/30.0.1599.114 Chrome/30.0.1599.114 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_i686_rv_17[] = "Mozilla/5.0 (X11; Linux i686; rv:17.0) Gecko/20131030 Firefox/17.0 Iceweasel/17.0.10";
static const char __pyx_k_Mozilla_5_0_X11_Linux_i686_rv_24[] = "Mozilla/5.0 (X11; Linux i686; rv:24.0) Gecko/20100101 Firefox/24.0";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/30.0.1599.101 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_i686_x86[] = "Mozilla/5.0 (X11; U; Linux i686 (x86_64); rv:1.9.2.10) Gecko/20100914 Firefox/3.6.10";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_A[] = "Mozilla/5.0 (X11; U; Linux x86_64) AppleWebKit/534.35 (KHTML, like Gecko)  Chrome/11.0.696.65 Safari/534.35 Puffin/3.10623IP";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r[] = "Mozilla/5.0 (X11; U; Linux x86_64; rv:1.9) Gecko Minefield/3.0";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68[] = "Mozilla/5.0 (X11; Ubuntu; Linux i686; rv:18.0) Gecko/20100101 Firefox/18.0";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86[] = "Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:24.0) Gecko/20100101 Firefox/24.0";
static const char __pyx_k_Opera_9_80_X11_Linux_i686_U_ru_P[] = "Opera/9.80 (X11; Linux i686; U; ru) Presto/2.10.229 Version/11.62";
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
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_2[] = "Mozilla/5.0 (X11; Linux x86_64; rv:13.0) Gecko/20100101 Firefox/13.0";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_3[] = "Mozilla/5.0 (X11; Linux x86_64; rv:9.0.1) Gecko/ /9.0.1";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_4[] = "Mozilla/5.0 (X11; Linux x86_64; rv:25.0) Gecko/20100101 Firefox/25.0";
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
static const char __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_2[] = "Mozilla/5.0 (X11; Linux i686) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/28.0.1500.71 Chrome/28.0.1500.71 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_3[] = "Mozilla/5.0 (X11; Linux i686) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/30.0.1599.66 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_4[] = "Mozilla/5.0 (X11; Linux i686) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/27.0.1453.93 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_5[] = "Mozilla/5.0 (X11; Linux i686) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/29.0.1547.65 Chrome/29.0.1547.65 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_2[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/31.0.1636.0 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_3[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko; Google Page Speed Insights) Chrome/27.0.1453 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_4[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/30.0.1599.114 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_5[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.4 (KHTML, like Gecko; Google Page Speed Insights) Chrome/22.0.1229 Safari/537.4";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_6[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/30.0.1599.114 Chrome/30.0.1599.114 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_7[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko; Google Web Preview) Chrome/27.0.1453 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_8[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/534.34 (KHTML, like Gecko) Qt/4.8.4 Safari/534.34";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_9[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/31.0.1650.48 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_A_2[] = "Mozilla/5.0 (X11; U; Linux x86_64) AppleWebKit/534.35 (KHTML, like Gecko)  Chrome/11.0.696.65 Safari/534.35 Puffin/3.10248IP";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_2[] = "Mozilla/5.0 (X11; U; Linux x86_64; rv:1.9.0.19) Gecko/2010120923 ThumbShotsBot (KFSW 3.0.6-3)";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_3[] = "Mozilla/5.0 (X11; U; Linux x86_64; rv:1.9.2.3) Gecko/20100423 Ubuntu/10.04 (lucid) Firefox/3.6.3";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_4[] = "Mozilla/5.0 (X11; U; Linux x86_64; rv:1.9.2.24) Gecko/20111107 Ubuntu/10.04 (lucid) Firefox/3.6.24";
static const char __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_5[] = "Mozilla/5.0 (X11; U; Linux x86_64; rv:1.9.2.13) Gecko/20101206 Ubuntu/8.04 (hardy) Firefox/3.6.13";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68_2[] = "Mozilla/5.0 (X11; Ubuntu; Linux i686; rv:24.0) Gecko/20100101 Firefox/24.0";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68_3[] = "Mozilla/5.0 (X11; Ubuntu; Linux i686; rv:25.0) Gecko/20100101 Firefox/25.0";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_2[] = "Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:25.0) Gecko/20100101 Firefox/25.0";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_3[] = "Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:23.0) Gecko/20100101 Firefox/23.0";
static const char __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_4[] = "Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:17.0) Gecko/20100101 Firefox/17.0";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_10[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.32 (KHTML, like Gecko) Chromium/25.0.1349.2 Chrome/25.0.1349.2 Safari/537.32 Epiphany/3.8.2";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_11[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/28.0.1500.71 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_12[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/29.0.1547.76 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_13[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/28.0.1500.71 Chrome/28.0.1500.71 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_14[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Ubuntu Chromium/29.0.1547.65 Chrome/29.0.1547.65 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_15[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.31 (KHTML, like Gecko) Chrome/26.0.1410.63 Safari/537.31";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_16[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/534.24 (KHTML, like Gecko) Chrome/11.0.696.34 Safari/534.24";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_17[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/30.0.1599.66 Safari/537.36";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_18[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.32 (KHTML, like Gecko) Chromium/25.0.1349.2 Chrome/25.0.1349.2 Safari/537.32 dwb/2013.04.14";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_19[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.4 (KHTML, like Gecko; Google Web Preview) Chrome/22.0.1229 Safari/537.4";
static const char __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_20[] = "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/534.34 (KHTML, like Gecko) PhantomJS/1.9.2 Safari/534.34";
 
static PyObject *__pyx_pf_6config_init(CYTHON_UNUSED PyObject *__pyx_self);  
 
 
typedef struct {
  PyObject *__pyx_d;
  PyObject *__pyx_b;
  PyObject *__pyx_cython_runtime;
  PyObject *__pyx_empty_tuple;
  PyObject *__pyx_empty_bytes;
  PyObject *__pyx_empty_unicode;
  #ifdef __Pyx_CyFunction_USED
  PyTypeObject *__pyx_CyFunctionType;
  #endif
  #ifdef __Pyx_FusedFunction_USED
  PyTypeObject *__pyx_FusedFunctionType;
  #endif
  #ifdef __Pyx_Generator_USED
  PyTypeObject *__pyx_GeneratorType;
  #endif
  #ifdef __Pyx_IterableCoroutine_USED
  PyTypeObject *__pyx_IterableCoroutineType;
  #endif
  #ifdef __Pyx_Coroutine_USED
  PyTypeObject *__pyx_CoroutineAwaitType;
  #endif
  #ifdef __Pyx_Coroutine_USED
  PyTypeObject *__pyx_CoroutineType;
  #endif
  #if CYTHON_USE_MODULE_STATE
  #endif
  PyObject *__pyx_kp_u_;
  PyObject *__pyx_kp_u_0;
  PyObject *__pyx_kp_u_0_2;
  PyObject *__pyx_kp_u_1;
  PyObject *__pyx_kp_u_1217981644879628;
  PyObject *__pyx_kp_u_1_2;
  PyObject *__pyx_kp_u_5_1;
  PyObject *__pyx_n_s_ACCEPT_LANGUAGE;
  PyObject *__pyx_n_s_ANSI_COLOR_NAMES;
  PyObject *__pyx_n_s_AUTH_DIR;
  PyObject *__pyx_n_s_AUTH_FILES;
  PyObject *__pyx_kp_u_Android;
  PyObject *__pyx_n_s_CONFIG_FILES;
  PyObject *__pyx_n_s_CONSOLE_SPINNER;
  PyObject *__pyx_n_s_CP_DETECTOR_USER_AGENT;
  PyObject *__pyx_n_s_Confirm;
  PyObject *__pyx_n_s_DEFAULT_STYLES;
  PyObject *__pyx_n_s_DEFAULT_THEME_COLOR;
  PyObject *__pyx_n_s_DESKTOP_REQUEST_HEADERS;
  PyObject *__pyx_n_s_DESKTOP_USER_AGENT;
  PyObject *__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4;
  PyObject *__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1;
  PyObject *__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0;
  PyObject *__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I;
  PyObject *__pyx_n_s_FB;
  PyObject *__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F;
  PyObject *__pyx_n_s_FB_USER_AGENT;
  PyObject *__pyx_n_s_Files;
  PyObject *__pyx_n_u_GIT_PYTHON_REFRESH;
  PyObject *__pyx_n_s_IG;
  PyObject *__pyx_n_s_IG_REQUEST_HEADERS;
  PyObject *__pyx_n_s_IG_USER_AGENT;
  PyObject *__pyx_n_s_IP;
  PyObject *__pyx_n_s_IntPrompt;
  PyObject *__pyx_n_s_LIST_USER_AGENT;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0;
  PyObject *__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3;
  PyObject *__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4;
  PyObject *__pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P;
  PyObject *__pyx_n_s_PATTERN_MATCH_FB_TOKEN;
  PyObject *__pyx_n_u_PYTHONIOENCODING;
  PyObject *__pyx_n_s_Panel;
  PyObject *__pyx_n_s_Path;
  PyObject *__pyx_n_s_Prompt;
  PyObject *__pyx_n_s_REQUEST_HEADERS;
  PyObject *__pyx_n_s_START_TIME;
  PyObject *__pyx_n_s_Style;
  PyObject *__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li;
  PyObject *__pyx_n_s_THEME_COLOR;
  PyObject *__pyx_n_s_TMP_COOKIE_DIR;
  PyObject *__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY;
  PyObject *__pyx_n_s_USER_AGENT;
  PyObject *__pyx_n_s_VERSION;
  PyObject *__pyx_n_s__12;
  PyObject *__pyx_kp_u__2;
  PyObject *__pyx_n_s__7;
  PyObject *__pyx_kp_u_accept_language;
  PyObject *__pyx_n_s_app;
  PyObject *__pyx_n_s_asyncio_coroutines;
  PyObject *__pyx_n_s_b64decode;
  PyObject *__pyx_kp_u_bar_back;
  PyObject *__pyx_kp_u_bar_complete;
  PyObject *__pyx_kp_u_bar_finished;
  PyObject *__pyx_kp_u_bar_pulse;
  PyObject *__pyx_n_s_base64;
  PyObject *__pyx_n_u_black;
  PyObject *__pyx_n_s_bold;
  PyObject *__pyx_kp_u_bold_red;
  PyObject *__pyx_n_u_bright_white;
  PyObject *__pyx_kp_u_cache_control;
  PyObject *__pyx_n_s_choices;
  PyObject *__pyx_n_s_class_getitem;
  PyObject *__pyx_n_s_cline_in_traceback;
  PyObject *__pyx_n_s_color;
  PyObject *__pyx_n_s_config;
  PyObject *__pyx_kp_u_config___init;
  PyObject *__pyx_kp_u_configuration;
  PyObject *__pyx_n_s_copy;
  PyObject *__pyx_n_u_cors;
  PyObject *__pyx_kp_u_cross_site;
  PyObject *__pyx_n_u_dark_red;
  PyObject *__pyx_n_s_datetime;
  PyObject *__pyx_n_s_decode;
  PyObject *__pyx_n_u_deep_sky_blue2;
  PyObject *__pyx_n_u_desktop;
  PyObject *__pyx_n_s_dict;
  PyObject *__pyx_n_s_doc;
  PyObject *__pyx_n_u_document;
  PyObject *__pyx_n_u_dots;
  PyObject *__pyx_n_u_empty;
  PyObject *__pyx_kp_u_en_US_en_q_0_9;
  PyObject *__pyx_kp_u_en_US_en_q_0_9_id_ID_q_0_8_id_q;
  PyObject *__pyx_kp_u_en_us;
  PyObject *__pyx_n_s_environ;
  PyObject *__pyx_n_s_exist_ok;
  PyObject *__pyx_n_u_fb;
  PyObject *__pyx_n_s_get;
  PyObject *__pyx_n_u_gold1;
  PyObject *__pyx_n_u_green;
  PyObject *__pyx_n_u_grey0;
  PyObject *__pyx_n_u_grey100;
  PyObject *__pyx_n_u_grey11;
  PyObject *__pyx_n_u_grey15;
  PyObject *__pyx_n_u_grey19;
  PyObject *__pyx_n_u_grey23;
  PyObject *__pyx_n_u_grey3;
  PyObject *__pyx_n_u_grey7;
  PyObject *__pyx_kp_u_hi_IN_hi_q_0_9;
  PyObject *__pyx_kp_u_hi_in;
  PyObject *__pyx_kp_u_id_ID_id_q_0_9;
  PyObject *__pyx_kp_u_id_id;
  PyObject *__pyx_n_u_ig;
  PyObject *__pyx_n_s_illegal_choice_message;
  PyObject *__pyx_n_s_import;
  PyObject *__pyx_n_s_init;
  PyObject *__pyx_n_s_init_subclass;
  PyObject *__pyx_n_s_initializing;
  PyObject *__pyx_n_s_is_coroutine;
  PyObject *__pyx_n_s_isdir;
  PyObject *__pyx_kp_u_ja_JP_jp_q_0_9;
  PyObject *__pyx_kp_u_ja_jp;
  PyObject *__pyx_n_s_join;
  PyObject *__pyx_n_u_magenta;
  PyObject *__pyx_n_s_main;
  PyObject *__pyx_kp_u_max_age_0;
  PyObject *__pyx_n_s_metaclass;
  PyObject *__pyx_n_s_mkdir;
  PyObject *__pyx_n_s_mode;
  PyObject *__pyx_n_s_module;
  PyObject *__pyx_kp_u_ms_MY_ms_q_0_9;
  PyObject *__pyx_kp_u_ms_my;
  PyObject *__pyx_kp_s_mtf_config___init___py;
  PyObject *__pyx_n_s_mtf_module;
  PyObject *__pyx_n_s_mtf_module_session;
  PyObject *__pyx_n_s_name;
  PyObject *__pyx_n_u_navigate;
  PyObject *__pyx_n_s_now;
  PyObject *__pyx_n_s_object_except;
  PyObject *__pyx_n_s_os;
  PyObject *__pyx_n_u_other;
  PyObject *__pyx_n_s_parents;
  PyObject *__pyx_n_s_path;
  PyObject *__pyx_n_s_pathlib;
  PyObject *__pyx_n_s_prefix;
  PyObject *__pyx_n_s_prepare;
  PyObject *__pyx_kp_u_progress_elapsed;
  PyObject *__pyx_kp_u_progress_percentage;
  PyObject *__pyx_kp_u_prompt_choices;
  PyObject *__pyx_n_s_qualname;
  PyObject *__pyx_n_u_quiet;
  PyObject *__pyx_n_s_randint;
  PyObject *__pyx_n_s_random;
  PyObject *__pyx_n_u_red;
  PyObject *__pyx_n_u_red1;
  PyObject *__pyx_n_u_red3;
  PyObject *__pyx_kp_u_rgb_114_156_31;
  PyObject *__pyx_kp_u_rgb_249_38_114;
  PyObject *__pyx_n_s_rich;
  PyObject *__pyx_n_s_rich_default_styles;
  PyObject *__pyx_n_s_rich_panel;
  PyObject *__pyx_n_s_rich_prompt;
  PyObject *__pyx_n_s_rich_style;
  PyObject *__pyx_n_s_rmtree;
  PyObject *__pyx_kp_u_same_origin;
  PyObject *__pyx_kp_u_sec_ch_ua_mobile;
  PyObject *__pyx_kp_u_sec_ch_ua_platform;
  PyObject *__pyx_kp_u_sec_fetch_dest;
  PyObject *__pyx_kp_u_sec_fetch_mode;
  PyObject *__pyx_kp_u_sec_fetch_site;
  PyObject *__pyx_kp_u_sec_fetch_user;
  PyObject *__pyx_n_s_set_name;
  PyObject *__pyx_n_s_shutil;
  PyObject *__pyx_kp_u_smirking_face_Silakan_Masukkan;
  PyObject *__pyx_kp_u_smirking_face_Silakan_Masukkan_2;
  PyObject *__pyx_kp_u_smirking_face_Silakan_pilih_sal;
  PyObject *__pyx_n_s_spec;
  PyObject *__pyx_n_s_split;
  PyObject *__pyx_n_s_style;
  PyObject *__pyx_n_s_super;
  PyObject *__pyx_n_s_sys;
  PyObject *__pyx_n_u_t;
  PyObject *__pyx_n_s_test;
  PyObject *__pyx_n_u_theme;
  PyObject *__pyx_n_s_timestamp;
  PyObject *__pyx_kp_u_tmp;
  PyObject *__pyx_kp_u_upgrade_insecure_requests;
  PyObject *__pyx_kp_u_user_agent;
  PyObject *__pyx_kp_u_utf_8;
  PyObject *__pyx_n_s_utils;
  PyObject *__pyx_n_s_validate_error_message;
  PyObject *__pyx_kp_u_vi_VN_vi_q_0_9;
  PyObject *__pyx_kp_u_vi_vn;
  PyObject *__pyx_n_u_web;
  PyObject *__pyx_n_u_white;
  PyObject *__pyx_kp_u_window___accessToken;
  PyObject *__pyx_kp_u_x_asbd_id;
  PyObject *__pyx_kp_u_x_ig_app_id;
  PyObject *__pyx_kp_u_x_ig_www_claim;
  PyObject *__pyx_n_u_y;
  PyObject *__pyx_n_u_yellow;
  PyObject *__pyx_n_u_yellow1;
  PyObject *__pyx_n_u_yellow2;
  PyObject *__pyx_int_0;
  PyObject *__pyx_int_511;
  PyObject *__pyx_int_190000;
  PyObject *__pyx_int_290000;
  PyObject *__pyx_int_neg_1;
  PyObject *__pyx_slice__3;
  PyObject *__pyx_slice__8;
  PyObject *__pyx_tuple__4;
  PyObject *__pyx_tuple__5;
  PyObject *__pyx_tuple__6;
  PyObject *__pyx_tuple__9;
  PyObject *__pyx_tuple__10;
  PyObject *__pyx_codeobj__11;
} __pyx_mstate;

#if CYTHON_USE_MODULE_STATE
#ifdef __cplusplus
namespace {
  extern struct PyModuleDef __pyx_moduledef;
}  
#else
static struct PyModuleDef __pyx_moduledef;
#endif

#define __pyx_mstate(o) ((__pyx_mstate *)__Pyx_PyModule_GetState(o))

#define __pyx_mstate_global (__pyx_mstate(PyState_FindModule(&__pyx_moduledef)))

#define __pyx_m (PyState_FindModule(&__pyx_moduledef))
#else
static __pyx_mstate __pyx_mstate_global_static =
#ifdef __cplusplus
    {};
#else
    {0};
#endif
static __pyx_mstate *__pyx_mstate_global = &__pyx_mstate_global_static;
#endif
 
#if CYTHON_USE_MODULE_STATE
static int __pyx_m_clear(PyObject *m) {
  __pyx_mstate *clear_module_state = __pyx_mstate(m);
  if (!clear_module_state) return 0;
  Py_CLEAR(clear_module_state->__pyx_d);
  Py_CLEAR(clear_module_state->__pyx_b);
  Py_CLEAR(clear_module_state->__pyx_cython_runtime);
  Py_CLEAR(clear_module_state->__pyx_empty_tuple);
  Py_CLEAR(clear_module_state->__pyx_empty_bytes);
  Py_CLEAR(clear_module_state->__pyx_empty_unicode);
  #ifdef __Pyx_CyFunction_USED
  Py_CLEAR(clear_module_state->__pyx_CyFunctionType);
  #endif
  #ifdef __Pyx_FusedFunction_USED
  Py_CLEAR(clear_module_state->__pyx_FusedFunctionType);
  #endif
  Py_CLEAR(clear_module_state->__pyx_kp_u_);
  Py_CLEAR(clear_module_state->__pyx_kp_u_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_0_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_1217981644879628);
  Py_CLEAR(clear_module_state->__pyx_kp_u_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_5_1);
  Py_CLEAR(clear_module_state->__pyx_n_s_ACCEPT_LANGUAGE);
  Py_CLEAR(clear_module_state->__pyx_n_s_ANSI_COLOR_NAMES);
  Py_CLEAR(clear_module_state->__pyx_n_s_AUTH_DIR);
  Py_CLEAR(clear_module_state->__pyx_n_s_AUTH_FILES);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Android);
  Py_CLEAR(clear_module_state->__pyx_n_s_CONFIG_FILES);
  Py_CLEAR(clear_module_state->__pyx_n_s_CONSOLE_SPINNER);
  Py_CLEAR(clear_module_state->__pyx_n_s_CP_DETECTOR_USER_AGENT);
  Py_CLEAR(clear_module_state->__pyx_n_s_Confirm);
  Py_CLEAR(clear_module_state->__pyx_n_s_DEFAULT_STYLES);
  Py_CLEAR(clear_module_state->__pyx_n_s_DEFAULT_THEME_COLOR);
  Py_CLEAR(clear_module_state->__pyx_n_s_DESKTOP_REQUEST_HEADERS);
  Py_CLEAR(clear_module_state->__pyx_n_s_DESKTOP_USER_AGENT);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I);
  Py_CLEAR(clear_module_state->__pyx_n_s_FB);
  Py_CLEAR(clear_module_state->__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F);
  Py_CLEAR(clear_module_state->__pyx_n_s_FB_USER_AGENT);
  Py_CLEAR(clear_module_state->__pyx_n_s_Files);
  Py_CLEAR(clear_module_state->__pyx_n_u_GIT_PYTHON_REFRESH);
  Py_CLEAR(clear_module_state->__pyx_n_s_IG);
  Py_CLEAR(clear_module_state->__pyx_n_s_IG_REQUEST_HEADERS);
  Py_CLEAR(clear_module_state->__pyx_n_s_IG_USER_AGENT);
  Py_CLEAR(clear_module_state->__pyx_n_s_IP);
  Py_CLEAR(clear_module_state->__pyx_n_s_IntPrompt);
  Py_CLEAR(clear_module_state->__pyx_n_s_LIST_USER_AGENT);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P);
  Py_CLEAR(clear_module_state->__pyx_n_s_PATTERN_MATCH_FB_TOKEN);
  Py_CLEAR(clear_module_state->__pyx_n_u_PYTHONIOENCODING);
  Py_CLEAR(clear_module_state->__pyx_n_s_Panel);
  Py_CLEAR(clear_module_state->__pyx_n_s_Path);
  Py_CLEAR(clear_module_state->__pyx_n_s_Prompt);
  Py_CLEAR(clear_module_state->__pyx_n_s_REQUEST_HEADERS);
  Py_CLEAR(clear_module_state->__pyx_n_s_START_TIME);
  Py_CLEAR(clear_module_state->__pyx_n_s_Style);
  Py_CLEAR(clear_module_state->__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li);
  Py_CLEAR(clear_module_state->__pyx_n_s_THEME_COLOR);
  Py_CLEAR(clear_module_state->__pyx_n_s_TMP_COOKIE_DIR);
  Py_CLEAR(clear_module_state->__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY);
  Py_CLEAR(clear_module_state->__pyx_n_s_USER_AGENT);
  Py_CLEAR(clear_module_state->__pyx_n_s_VERSION);
  Py_CLEAR(clear_module_state->__pyx_n_s__12);
  Py_CLEAR(clear_module_state->__pyx_kp_u__2);
  Py_CLEAR(clear_module_state->__pyx_n_s__7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_accept_language);
  Py_CLEAR(clear_module_state->__pyx_n_s_app);
  Py_CLEAR(clear_module_state->__pyx_n_s_asyncio_coroutines);
  Py_CLEAR(clear_module_state->__pyx_n_s_b64decode);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bar_back);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bar_complete);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bar_finished);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bar_pulse);
  Py_CLEAR(clear_module_state->__pyx_n_s_base64);
  Py_CLEAR(clear_module_state->__pyx_n_u_black);
  Py_CLEAR(clear_module_state->__pyx_n_s_bold);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_red);
  Py_CLEAR(clear_module_state->__pyx_n_u_bright_white);
  Py_CLEAR(clear_module_state->__pyx_kp_u_cache_control);
  Py_CLEAR(clear_module_state->__pyx_n_s_choices);
  Py_CLEAR(clear_module_state->__pyx_n_s_class_getitem);
  Py_CLEAR(clear_module_state->__pyx_n_s_cline_in_traceback);
  Py_CLEAR(clear_module_state->__pyx_n_s_color);
  Py_CLEAR(clear_module_state->__pyx_n_s_config);
  Py_CLEAR(clear_module_state->__pyx_kp_u_config___init);
  Py_CLEAR(clear_module_state->__pyx_kp_u_configuration);
  Py_CLEAR(clear_module_state->__pyx_n_s_copy);
  Py_CLEAR(clear_module_state->__pyx_n_u_cors);
  Py_CLEAR(clear_module_state->__pyx_kp_u_cross_site);
  Py_CLEAR(clear_module_state->__pyx_n_u_dark_red);
  Py_CLEAR(clear_module_state->__pyx_n_s_datetime);
  Py_CLEAR(clear_module_state->__pyx_n_s_decode);
  Py_CLEAR(clear_module_state->__pyx_n_u_deep_sky_blue2);
  Py_CLEAR(clear_module_state->__pyx_n_u_desktop);
  Py_CLEAR(clear_module_state->__pyx_n_s_dict);
  Py_CLEAR(clear_module_state->__pyx_n_s_doc);
  Py_CLEAR(clear_module_state->__pyx_n_u_document);
  Py_CLEAR(clear_module_state->__pyx_n_u_dots);
  Py_CLEAR(clear_module_state->__pyx_n_u_empty);
  Py_CLEAR(clear_module_state->__pyx_kp_u_en_US_en_q_0_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_en_US_en_q_0_9_id_ID_q_0_8_id_q);
  Py_CLEAR(clear_module_state->__pyx_kp_u_en_us);
  Py_CLEAR(clear_module_state->__pyx_n_s_environ);
  Py_CLEAR(clear_module_state->__pyx_n_s_exist_ok);
  Py_CLEAR(clear_module_state->__pyx_n_u_fb);
  Py_CLEAR(clear_module_state->__pyx_n_s_get);
  Py_CLEAR(clear_module_state->__pyx_n_u_gold1);
  Py_CLEAR(clear_module_state->__pyx_n_u_green);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey0);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey100);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey11);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey15);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey19);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey23);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey3);
  Py_CLEAR(clear_module_state->__pyx_n_u_grey7);
  Py_CLEAR(clear_module_state->__pyx_kp_u_hi_IN_hi_q_0_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_hi_in);
  Py_CLEAR(clear_module_state->__pyx_kp_u_id_ID_id_q_0_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_id_id);
  Py_CLEAR(clear_module_state->__pyx_n_u_ig);
  Py_CLEAR(clear_module_state->__pyx_n_s_illegal_choice_message);
  Py_CLEAR(clear_module_state->__pyx_n_s_import);
  Py_CLEAR(clear_module_state->__pyx_n_s_init);
  Py_CLEAR(clear_module_state->__pyx_n_s_init_subclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_initializing);
  Py_CLEAR(clear_module_state->__pyx_n_s_is_coroutine);
  Py_CLEAR(clear_module_state->__pyx_n_s_isdir);
  Py_CLEAR(clear_module_state->__pyx_kp_u_ja_JP_jp_q_0_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_ja_jp);
  Py_CLEAR(clear_module_state->__pyx_n_s_join);
  Py_CLEAR(clear_module_state->__pyx_n_u_magenta);
  Py_CLEAR(clear_module_state->__pyx_n_s_main);
  Py_CLEAR(clear_module_state->__pyx_kp_u_max_age_0);
  Py_CLEAR(clear_module_state->__pyx_n_s_metaclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_mkdir);
  Py_CLEAR(clear_module_state->__pyx_n_s_mode);
  Py_CLEAR(clear_module_state->__pyx_n_s_module);
  Py_CLEAR(clear_module_state->__pyx_kp_u_ms_MY_ms_q_0_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_ms_my);
  Py_CLEAR(clear_module_state->__pyx_kp_s_mtf_config___init___py);
  Py_CLEAR(clear_module_state->__pyx_n_s_mtf_module);
  Py_CLEAR(clear_module_state->__pyx_n_s_mtf_module_session);
  Py_CLEAR(clear_module_state->__pyx_n_s_name);
  Py_CLEAR(clear_module_state->__pyx_n_u_navigate);
  Py_CLEAR(clear_module_state->__pyx_n_s_now);
  Py_CLEAR(clear_module_state->__pyx_n_s_object_except);
  Py_CLEAR(clear_module_state->__pyx_n_s_os);
  Py_CLEAR(clear_module_state->__pyx_n_u_other);
  Py_CLEAR(clear_module_state->__pyx_n_s_parents);
  Py_CLEAR(clear_module_state->__pyx_n_s_path);
  Py_CLEAR(clear_module_state->__pyx_n_s_pathlib);
  Py_CLEAR(clear_module_state->__pyx_n_s_prefix);
  Py_CLEAR(clear_module_state->__pyx_n_s_prepare);
  Py_CLEAR(clear_module_state->__pyx_kp_u_progress_elapsed);
  Py_CLEAR(clear_module_state->__pyx_kp_u_progress_percentage);
  Py_CLEAR(clear_module_state->__pyx_kp_u_prompt_choices);
  Py_CLEAR(clear_module_state->__pyx_n_s_qualname);
  Py_CLEAR(clear_module_state->__pyx_n_u_quiet);
  Py_CLEAR(clear_module_state->__pyx_n_s_randint);
  Py_CLEAR(clear_module_state->__pyx_n_s_random);
  Py_CLEAR(clear_module_state->__pyx_n_u_red);
  Py_CLEAR(clear_module_state->__pyx_n_u_red1);
  Py_CLEAR(clear_module_state->__pyx_n_u_red3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_rgb_114_156_31);
  Py_CLEAR(clear_module_state->__pyx_kp_u_rgb_249_38_114);
  Py_CLEAR(clear_module_state->__pyx_n_s_rich);
  Py_CLEAR(clear_module_state->__pyx_n_s_rich_default_styles);
  Py_CLEAR(clear_module_state->__pyx_n_s_rich_panel);
  Py_CLEAR(clear_module_state->__pyx_n_s_rich_prompt);
  Py_CLEAR(clear_module_state->__pyx_n_s_rich_style);
  Py_CLEAR(clear_module_state->__pyx_n_s_rmtree);
  Py_CLEAR(clear_module_state->__pyx_kp_u_same_origin);
  Py_CLEAR(clear_module_state->__pyx_kp_u_sec_ch_ua_mobile);
  Py_CLEAR(clear_module_state->__pyx_kp_u_sec_ch_ua_platform);
  Py_CLEAR(clear_module_state->__pyx_kp_u_sec_fetch_dest);
  Py_CLEAR(clear_module_state->__pyx_kp_u_sec_fetch_mode);
  Py_CLEAR(clear_module_state->__pyx_kp_u_sec_fetch_site);
  Py_CLEAR(clear_module_state->__pyx_kp_u_sec_fetch_user);
  Py_CLEAR(clear_module_state->__pyx_n_s_set_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_shutil);
  Py_CLEAR(clear_module_state->__pyx_kp_u_smirking_face_Silakan_Masukkan);
  Py_CLEAR(clear_module_state->__pyx_kp_u_smirking_face_Silakan_Masukkan_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_smirking_face_Silakan_pilih_sal);
  Py_CLEAR(clear_module_state->__pyx_n_s_spec);
  Py_CLEAR(clear_module_state->__pyx_n_s_split);
  Py_CLEAR(clear_module_state->__pyx_n_s_style);
  Py_CLEAR(clear_module_state->__pyx_n_s_super);
  Py_CLEAR(clear_module_state->__pyx_n_s_sys);
  Py_CLEAR(clear_module_state->__pyx_n_u_t);
  Py_CLEAR(clear_module_state->__pyx_n_s_test);
  Py_CLEAR(clear_module_state->__pyx_n_u_theme);
  Py_CLEAR(clear_module_state->__pyx_n_s_timestamp);
  Py_CLEAR(clear_module_state->__pyx_kp_u_tmp);
  Py_CLEAR(clear_module_state->__pyx_kp_u_upgrade_insecure_requests);
  Py_CLEAR(clear_module_state->__pyx_kp_u_user_agent);
  Py_CLEAR(clear_module_state->__pyx_kp_u_utf_8);
  Py_CLEAR(clear_module_state->__pyx_n_s_utils);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_error_message);
  Py_CLEAR(clear_module_state->__pyx_kp_u_vi_VN_vi_q_0_9);
  Py_CLEAR(clear_module_state->__pyx_kp_u_vi_vn);
  Py_CLEAR(clear_module_state->__pyx_n_u_web);
  Py_CLEAR(clear_module_state->__pyx_n_u_white);
  Py_CLEAR(clear_module_state->__pyx_kp_u_window___accessToken);
  Py_CLEAR(clear_module_state->__pyx_kp_u_x_asbd_id);
  Py_CLEAR(clear_module_state->__pyx_kp_u_x_ig_app_id);
  Py_CLEAR(clear_module_state->__pyx_kp_u_x_ig_www_claim);
  Py_CLEAR(clear_module_state->__pyx_n_u_y);
  Py_CLEAR(clear_module_state->__pyx_n_u_yellow);
  Py_CLEAR(clear_module_state->__pyx_n_u_yellow1);
  Py_CLEAR(clear_module_state->__pyx_n_u_yellow2);
  Py_CLEAR(clear_module_state->__pyx_int_0);
  Py_CLEAR(clear_module_state->__pyx_int_511);
  Py_CLEAR(clear_module_state->__pyx_int_190000);
  Py_CLEAR(clear_module_state->__pyx_int_290000);
  Py_CLEAR(clear_module_state->__pyx_int_neg_1);
  Py_CLEAR(clear_module_state->__pyx_slice__3);
  Py_CLEAR(clear_module_state->__pyx_slice__8);
  Py_CLEAR(clear_module_state->__pyx_tuple__4);
  Py_CLEAR(clear_module_state->__pyx_tuple__5);
  Py_CLEAR(clear_module_state->__pyx_tuple__6);
  Py_CLEAR(clear_module_state->__pyx_tuple__9);
  Py_CLEAR(clear_module_state->__pyx_tuple__10);
  Py_CLEAR(clear_module_state->__pyx_codeobj__11);
  return 0;
}
#endif
 
#if CYTHON_USE_MODULE_STATE
static int __pyx_m_traverse(PyObject *m, visitproc visit, void *arg) {
  __pyx_mstate *traverse_module_state = __pyx_mstate(m);
  if (!traverse_module_state) return 0;
  Py_VISIT(traverse_module_state->__pyx_d);
  Py_VISIT(traverse_module_state->__pyx_b);
  Py_VISIT(traverse_module_state->__pyx_cython_runtime);
  Py_VISIT(traverse_module_state->__pyx_empty_tuple);
  Py_VISIT(traverse_module_state->__pyx_empty_bytes);
  Py_VISIT(traverse_module_state->__pyx_empty_unicode);
  #ifdef __Pyx_CyFunction_USED
  Py_VISIT(traverse_module_state->__pyx_CyFunctionType);
  #endif
  #ifdef __Pyx_FusedFunction_USED
  Py_VISIT(traverse_module_state->__pyx_FusedFunctionType);
  #endif
  Py_VISIT(traverse_module_state->__pyx_kp_u_);
  Py_VISIT(traverse_module_state->__pyx_kp_u_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_0_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_1217981644879628);
  Py_VISIT(traverse_module_state->__pyx_kp_u_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_5_1);
  Py_VISIT(traverse_module_state->__pyx_n_s_ACCEPT_LANGUAGE);
  Py_VISIT(traverse_module_state->__pyx_n_s_ANSI_COLOR_NAMES);
  Py_VISIT(traverse_module_state->__pyx_n_s_AUTH_DIR);
  Py_VISIT(traverse_module_state->__pyx_n_s_AUTH_FILES);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Android);
  Py_VISIT(traverse_module_state->__pyx_n_s_CONFIG_FILES);
  Py_VISIT(traverse_module_state->__pyx_n_s_CONSOLE_SPINNER);
  Py_VISIT(traverse_module_state->__pyx_n_s_CP_DETECTOR_USER_AGENT);
  Py_VISIT(traverse_module_state->__pyx_n_s_Confirm);
  Py_VISIT(traverse_module_state->__pyx_n_s_DEFAULT_STYLES);
  Py_VISIT(traverse_module_state->__pyx_n_s_DEFAULT_THEME_COLOR);
  Py_VISIT(traverse_module_state->__pyx_n_s_DESKTOP_REQUEST_HEADERS);
  Py_VISIT(traverse_module_state->__pyx_n_s_DESKTOP_USER_AGENT);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I);
  Py_VISIT(traverse_module_state->__pyx_n_s_FB);
  Py_VISIT(traverse_module_state->__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F);
  Py_VISIT(traverse_module_state->__pyx_n_s_FB_USER_AGENT);
  Py_VISIT(traverse_module_state->__pyx_n_s_Files);
  Py_VISIT(traverse_module_state->__pyx_n_u_GIT_PYTHON_REFRESH);
  Py_VISIT(traverse_module_state->__pyx_n_s_IG);
  Py_VISIT(traverse_module_state->__pyx_n_s_IG_REQUEST_HEADERS);
  Py_VISIT(traverse_module_state->__pyx_n_s_IG_USER_AGENT);
  Py_VISIT(traverse_module_state->__pyx_n_s_IP);
  Py_VISIT(traverse_module_state->__pyx_n_s_IntPrompt);
  Py_VISIT(traverse_module_state->__pyx_n_s_LIST_USER_AGENT);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P);
  Py_VISIT(traverse_module_state->__pyx_n_s_PATTERN_MATCH_FB_TOKEN);
  Py_VISIT(traverse_module_state->__pyx_n_u_PYTHONIOENCODING);
  Py_VISIT(traverse_module_state->__pyx_n_s_Panel);
  Py_VISIT(traverse_module_state->__pyx_n_s_Path);
  Py_VISIT(traverse_module_state->__pyx_n_s_Prompt);
  Py_VISIT(traverse_module_state->__pyx_n_s_REQUEST_HEADERS);
  Py_VISIT(traverse_module_state->__pyx_n_s_START_TIME);
  Py_VISIT(traverse_module_state->__pyx_n_s_Style);
  Py_VISIT(traverse_module_state->__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li);
  Py_VISIT(traverse_module_state->__pyx_n_s_THEME_COLOR);
  Py_VISIT(traverse_module_state->__pyx_n_s_TMP_COOKIE_DIR);
  Py_VISIT(traverse_module_state->__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY);
  Py_VISIT(traverse_module_state->__pyx_n_s_USER_AGENT);
  Py_VISIT(traverse_module_state->__pyx_n_s_VERSION);
  Py_VISIT(traverse_module_state->__pyx_n_s__12);
  Py_VISIT(traverse_module_state->__pyx_kp_u__2);
  Py_VISIT(traverse_module_state->__pyx_n_s__7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_accept_language);
  Py_VISIT(traverse_module_state->__pyx_n_s_app);
  Py_VISIT(traverse_module_state->__pyx_n_s_asyncio_coroutines);
  Py_VISIT(traverse_module_state->__pyx_n_s_b64decode);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bar_back);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bar_complete);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bar_finished);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bar_pulse);
  Py_VISIT(traverse_module_state->__pyx_n_s_base64);
  Py_VISIT(traverse_module_state->__pyx_n_u_black);
  Py_VISIT(traverse_module_state->__pyx_n_s_bold);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_red);
  Py_VISIT(traverse_module_state->__pyx_n_u_bright_white);
  Py_VISIT(traverse_module_state->__pyx_kp_u_cache_control);
  Py_VISIT(traverse_module_state->__pyx_n_s_choices);
  Py_VISIT(traverse_module_state->__pyx_n_s_class_getitem);
  Py_VISIT(traverse_module_state->__pyx_n_s_cline_in_traceback);
  Py_VISIT(traverse_module_state->__pyx_n_s_color);
  Py_VISIT(traverse_module_state->__pyx_n_s_config);
  Py_VISIT(traverse_module_state->__pyx_kp_u_config___init);
  Py_VISIT(traverse_module_state->__pyx_kp_u_configuration);
  Py_VISIT(traverse_module_state->__pyx_n_s_copy);
  Py_VISIT(traverse_module_state->__pyx_n_u_cors);
  Py_VISIT(traverse_module_state->__pyx_kp_u_cross_site);
  Py_VISIT(traverse_module_state->__pyx_n_u_dark_red);
  Py_VISIT(traverse_module_state->__pyx_n_s_datetime);
  Py_VISIT(traverse_module_state->__pyx_n_s_decode);
  Py_VISIT(traverse_module_state->__pyx_n_u_deep_sky_blue2);
  Py_VISIT(traverse_module_state->__pyx_n_u_desktop);
  Py_VISIT(traverse_module_state->__pyx_n_s_dict);
  Py_VISIT(traverse_module_state->__pyx_n_s_doc);
  Py_VISIT(traverse_module_state->__pyx_n_u_document);
  Py_VISIT(traverse_module_state->__pyx_n_u_dots);
  Py_VISIT(traverse_module_state->__pyx_n_u_empty);
  Py_VISIT(traverse_module_state->__pyx_kp_u_en_US_en_q_0_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_en_US_en_q_0_9_id_ID_q_0_8_id_q);
  Py_VISIT(traverse_module_state->__pyx_kp_u_en_us);
  Py_VISIT(traverse_module_state->__pyx_n_s_environ);
  Py_VISIT(traverse_module_state->__pyx_n_s_exist_ok);
  Py_VISIT(traverse_module_state->__pyx_n_u_fb);
  Py_VISIT(traverse_module_state->__pyx_n_s_get);
  Py_VISIT(traverse_module_state->__pyx_n_u_gold1);
  Py_VISIT(traverse_module_state->__pyx_n_u_green);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey0);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey100);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey11);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey15);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey19);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey23);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey3);
  Py_VISIT(traverse_module_state->__pyx_n_u_grey7);
  Py_VISIT(traverse_module_state->__pyx_kp_u_hi_IN_hi_q_0_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_hi_in);
  Py_VISIT(traverse_module_state->__pyx_kp_u_id_ID_id_q_0_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_id_id);
  Py_VISIT(traverse_module_state->__pyx_n_u_ig);
  Py_VISIT(traverse_module_state->__pyx_n_s_illegal_choice_message);
  Py_VISIT(traverse_module_state->__pyx_n_s_import);
  Py_VISIT(traverse_module_state->__pyx_n_s_init);
  Py_VISIT(traverse_module_state->__pyx_n_s_init_subclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_initializing);
  Py_VISIT(traverse_module_state->__pyx_n_s_is_coroutine);
  Py_VISIT(traverse_module_state->__pyx_n_s_isdir);
  Py_VISIT(traverse_module_state->__pyx_kp_u_ja_JP_jp_q_0_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_ja_jp);
  Py_VISIT(traverse_module_state->__pyx_n_s_join);
  Py_VISIT(traverse_module_state->__pyx_n_u_magenta);
  Py_VISIT(traverse_module_state->__pyx_n_s_main);
  Py_VISIT(traverse_module_state->__pyx_kp_u_max_age_0);
  Py_VISIT(traverse_module_state->__pyx_n_s_metaclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_mkdir);
  Py_VISIT(traverse_module_state->__pyx_n_s_mode);
  Py_VISIT(traverse_module_state->__pyx_n_s_module);
  Py_VISIT(traverse_module_state->__pyx_kp_u_ms_MY_ms_q_0_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_ms_my);
  Py_VISIT(traverse_module_state->__pyx_kp_s_mtf_config___init___py);
  Py_VISIT(traverse_module_state->__pyx_n_s_mtf_module);
  Py_VISIT(traverse_module_state->__pyx_n_s_mtf_module_session);
  Py_VISIT(traverse_module_state->__pyx_n_s_name);
  Py_VISIT(traverse_module_state->__pyx_n_u_navigate);
  Py_VISIT(traverse_module_state->__pyx_n_s_now);
  Py_VISIT(traverse_module_state->__pyx_n_s_object_except);
  Py_VISIT(traverse_module_state->__pyx_n_s_os);
  Py_VISIT(traverse_module_state->__pyx_n_u_other);
  Py_VISIT(traverse_module_state->__pyx_n_s_parents);
  Py_VISIT(traverse_module_state->__pyx_n_s_path);
  Py_VISIT(traverse_module_state->__pyx_n_s_pathlib);
  Py_VISIT(traverse_module_state->__pyx_n_s_prefix);
  Py_VISIT(traverse_module_state->__pyx_n_s_prepare);
  Py_VISIT(traverse_module_state->__pyx_kp_u_progress_elapsed);
  Py_VISIT(traverse_module_state->__pyx_kp_u_progress_percentage);
  Py_VISIT(traverse_module_state->__pyx_kp_u_prompt_choices);
  Py_VISIT(traverse_module_state->__pyx_n_s_qualname);
  Py_VISIT(traverse_module_state->__pyx_n_u_quiet);
  Py_VISIT(traverse_module_state->__pyx_n_s_randint);
  Py_VISIT(traverse_module_state->__pyx_n_s_random);
  Py_VISIT(traverse_module_state->__pyx_n_u_red);
  Py_VISIT(traverse_module_state->__pyx_n_u_red1);
  Py_VISIT(traverse_module_state->__pyx_n_u_red3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_rgb_114_156_31);
  Py_VISIT(traverse_module_state->__pyx_kp_u_rgb_249_38_114);
  Py_VISIT(traverse_module_state->__pyx_n_s_rich);
  Py_VISIT(traverse_module_state->__pyx_n_s_rich_default_styles);
  Py_VISIT(traverse_module_state->__pyx_n_s_rich_panel);
  Py_VISIT(traverse_module_state->__pyx_n_s_rich_prompt);
  Py_VISIT(traverse_module_state->__pyx_n_s_rich_style);
  Py_VISIT(traverse_module_state->__pyx_n_s_rmtree);
  Py_VISIT(traverse_module_state->__pyx_kp_u_same_origin);
  Py_VISIT(traverse_module_state->__pyx_kp_u_sec_ch_ua_mobile);
  Py_VISIT(traverse_module_state->__pyx_kp_u_sec_ch_ua_platform);
  Py_VISIT(traverse_module_state->__pyx_kp_u_sec_fetch_dest);
  Py_VISIT(traverse_module_state->__pyx_kp_u_sec_fetch_mode);
  Py_VISIT(traverse_module_state->__pyx_kp_u_sec_fetch_site);
  Py_VISIT(traverse_module_state->__pyx_kp_u_sec_fetch_user);
  Py_VISIT(traverse_module_state->__pyx_n_s_set_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_shutil);
  Py_VISIT(traverse_module_state->__pyx_kp_u_smirking_face_Silakan_Masukkan);
  Py_VISIT(traverse_module_state->__pyx_kp_u_smirking_face_Silakan_Masukkan_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_smirking_face_Silakan_pilih_sal);
  Py_VISIT(traverse_module_state->__pyx_n_s_spec);
  Py_VISIT(traverse_module_state->__pyx_n_s_split);
  Py_VISIT(traverse_module_state->__pyx_n_s_style);
  Py_VISIT(traverse_module_state->__pyx_n_s_super);
  Py_VISIT(traverse_module_state->__pyx_n_s_sys);
  Py_VISIT(traverse_module_state->__pyx_n_u_t);
  Py_VISIT(traverse_module_state->__pyx_n_s_test);
  Py_VISIT(traverse_module_state->__pyx_n_u_theme);
  Py_VISIT(traverse_module_state->__pyx_n_s_timestamp);
  Py_VISIT(traverse_module_state->__pyx_kp_u_tmp);
  Py_VISIT(traverse_module_state->__pyx_kp_u_upgrade_insecure_requests);
  Py_VISIT(traverse_module_state->__pyx_kp_u_user_agent);
  Py_VISIT(traverse_module_state->__pyx_kp_u_utf_8);
  Py_VISIT(traverse_module_state->__pyx_n_s_utils);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_error_message);
  Py_VISIT(traverse_module_state->__pyx_kp_u_vi_VN_vi_q_0_9);
  Py_VISIT(traverse_module_state->__pyx_kp_u_vi_vn);
  Py_VISIT(traverse_module_state->__pyx_n_u_web);
  Py_VISIT(traverse_module_state->__pyx_n_u_white);
  Py_VISIT(traverse_module_state->__pyx_kp_u_window___accessToken);
  Py_VISIT(traverse_module_state->__pyx_kp_u_x_asbd_id);
  Py_VISIT(traverse_module_state->__pyx_kp_u_x_ig_app_id);
  Py_VISIT(traverse_module_state->__pyx_kp_u_x_ig_www_claim);
  Py_VISIT(traverse_module_state->__pyx_n_u_y);
  Py_VISIT(traverse_module_state->__pyx_n_u_yellow);
  Py_VISIT(traverse_module_state->__pyx_n_u_yellow1);
  Py_VISIT(traverse_module_state->__pyx_n_u_yellow2);
  Py_VISIT(traverse_module_state->__pyx_int_0);
  Py_VISIT(traverse_module_state->__pyx_int_511);
  Py_VISIT(traverse_module_state->__pyx_int_190000);
  Py_VISIT(traverse_module_state->__pyx_int_290000);
  Py_VISIT(traverse_module_state->__pyx_int_neg_1);
  Py_VISIT(traverse_module_state->__pyx_slice__3);
  Py_VISIT(traverse_module_state->__pyx_slice__8);
  Py_VISIT(traverse_module_state->__pyx_tuple__4);
  Py_VISIT(traverse_module_state->__pyx_tuple__5);
  Py_VISIT(traverse_module_state->__pyx_tuple__6);
  Py_VISIT(traverse_module_state->__pyx_tuple__9);
  Py_VISIT(traverse_module_state->__pyx_tuple__10);
  Py_VISIT(traverse_module_state->__pyx_codeobj__11);
  return 0;
}
#endif
 
#define __pyx_d __pyx_mstate_global->__pyx_d
#define __pyx_b __pyx_mstate_global->__pyx_b
#define __pyx_cython_runtime __pyx_mstate_global->__pyx_cython_runtime
#define __pyx_empty_tuple __pyx_mstate_global->__pyx_empty_tuple
#define __pyx_empty_bytes __pyx_mstate_global->__pyx_empty_bytes
#define __pyx_empty_unicode __pyx_mstate_global->__pyx_empty_unicode
#ifdef __Pyx_CyFunction_USED
#define __pyx_CyFunctionType __pyx_mstate_global->__pyx_CyFunctionType
#endif
#ifdef __Pyx_FusedFunction_USED
#define __pyx_FusedFunctionType __pyx_mstate_global->__pyx_FusedFunctionType
#endif
#ifdef __Pyx_Generator_USED
#define __pyx_GeneratorType __pyx_mstate_global->__pyx_GeneratorType
#endif
#ifdef __Pyx_IterableCoroutine_USED
#define __pyx_IterableCoroutineType __pyx_mstate_global->__pyx_IterableCoroutineType
#endif
#ifdef __Pyx_Coroutine_USED
#define __pyx_CoroutineAwaitType __pyx_mstate_global->__pyx_CoroutineAwaitType
#endif
#ifdef __Pyx_Coroutine_USED
#define __pyx_CoroutineType __pyx_mstate_global->__pyx_CoroutineType
#endif
#if CYTHON_USE_MODULE_STATE
#endif
#define __pyx_kp_u_ __pyx_mstate_global->__pyx_kp_u_
#define __pyx_kp_u_0 __pyx_mstate_global->__pyx_kp_u_0
#define __pyx_kp_u_0_2 __pyx_mstate_global->__pyx_kp_u_0_2
#define __pyx_kp_u_1 __pyx_mstate_global->__pyx_kp_u_1
#define __pyx_kp_u_1217981644879628 __pyx_mstate_global->__pyx_kp_u_1217981644879628
#define __pyx_kp_u_1_2 __pyx_mstate_global->__pyx_kp_u_1_2
#define __pyx_kp_u_5_1 __pyx_mstate_global->__pyx_kp_u_5_1
#define __pyx_n_s_ACCEPT_LANGUAGE __pyx_mstate_global->__pyx_n_s_ACCEPT_LANGUAGE
#define __pyx_n_s_ANSI_COLOR_NAMES __pyx_mstate_global->__pyx_n_s_ANSI_COLOR_NAMES
#define __pyx_n_s_AUTH_DIR __pyx_mstate_global->__pyx_n_s_AUTH_DIR
#define __pyx_n_s_AUTH_FILES __pyx_mstate_global->__pyx_n_s_AUTH_FILES
#define __pyx_kp_u_Android __pyx_mstate_global->__pyx_kp_u_Android
#define __pyx_n_s_CONFIG_FILES __pyx_mstate_global->__pyx_n_s_CONFIG_FILES
#define __pyx_n_s_CONSOLE_SPINNER __pyx_mstate_global->__pyx_n_s_CONSOLE_SPINNER
#define __pyx_n_s_CP_DETECTOR_USER_AGENT __pyx_mstate_global->__pyx_n_s_CP_DETECTOR_USER_AGENT
#define __pyx_n_s_Confirm __pyx_mstate_global->__pyx_n_s_Confirm
#define __pyx_n_s_DEFAULT_STYLES __pyx_mstate_global->__pyx_n_s_DEFAULT_STYLES
#define __pyx_n_s_DEFAULT_THEME_COLOR __pyx_mstate_global->__pyx_n_s_DEFAULT_THEME_COLOR
#define __pyx_n_s_DESKTOP_REQUEST_HEADERS __pyx_mstate_global->__pyx_n_s_DESKTOP_REQUEST_HEADERS
#define __pyx_n_s_DESKTOP_USER_AGENT __pyx_mstate_global->__pyx_n_s_DESKTOP_USER_AGENT
#define __pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4 __pyx_mstate_global->__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4
#define __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1 __pyx_mstate_global->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1
#define __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0 __pyx_mstate_global->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0
#define __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I __pyx_mstate_global->__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I
#define __pyx_n_s_FB __pyx_mstate_global->__pyx_n_s_FB
#define __pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F __pyx_mstate_global->__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F
#define __pyx_n_s_FB_USER_AGENT __pyx_mstate_global->__pyx_n_s_FB_USER_AGENT
#define __pyx_n_s_Files __pyx_mstate_global->__pyx_n_s_Files
#define __pyx_n_u_GIT_PYTHON_REFRESH __pyx_mstate_global->__pyx_n_u_GIT_PYTHON_REFRESH
#define __pyx_n_s_IG __pyx_mstate_global->__pyx_n_s_IG
#define __pyx_n_s_IG_REQUEST_HEADERS __pyx_mstate_global->__pyx_n_s_IG_REQUEST_HEADERS
#define __pyx_n_s_IG_USER_AGENT __pyx_mstate_global->__pyx_n_s_IG_USER_AGENT
#define __pyx_n_s_IP __pyx_mstate_global->__pyx_n_s_IP
#define __pyx_n_s_IntPrompt __pyx_mstate_global->__pyx_n_s_IntPrompt
#define __pyx_n_s_LIST_USER_AGENT __pyx_mstate_global->__pyx_n_s_LIST_USER_AGENT
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37
#define __pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0
#define __pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3
#define __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4
#define __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5
#define __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68
#define __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2
#define __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3
#define __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86
#define __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2
#define __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3
#define __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4 __pyx_mstate_global->__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4
#define __pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P __pyx_mstate_global->__pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P
#define __pyx_n_s_PATTERN_MATCH_FB_TOKEN __pyx_mstate_global->__pyx_n_s_PATTERN_MATCH_FB_TOKEN
#define __pyx_n_u_PYTHONIOENCODING __pyx_mstate_global->__pyx_n_u_PYTHONIOENCODING
#define __pyx_n_s_Panel __pyx_mstate_global->__pyx_n_s_Panel
#define __pyx_n_s_Path __pyx_mstate_global->__pyx_n_s_Path
#define __pyx_n_s_Prompt __pyx_mstate_global->__pyx_n_s_Prompt
#define __pyx_n_s_REQUEST_HEADERS __pyx_mstate_global->__pyx_n_s_REQUEST_HEADERS
#define __pyx_n_s_START_TIME __pyx_mstate_global->__pyx_n_s_START_TIME
#define __pyx_n_s_Style __pyx_mstate_global->__pyx_n_s_Style
#define __pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li __pyx_mstate_global->__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li
#define __pyx_n_s_THEME_COLOR __pyx_mstate_global->__pyx_n_s_THEME_COLOR
#define __pyx_n_s_TMP_COOKIE_DIR __pyx_mstate_global->__pyx_n_s_TMP_COOKIE_DIR
#define __pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY __pyx_mstate_global->__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY
#define __pyx_n_s_USER_AGENT __pyx_mstate_global->__pyx_n_s_USER_AGENT
#define __pyx_n_s_VERSION __pyx_mstate_global->__pyx_n_s_VERSION
#define __pyx_n_s__12 __pyx_mstate_global->__pyx_n_s__12
#define __pyx_kp_u__2 __pyx_mstate_global->__pyx_kp_u__2
#define __pyx_n_s__7 __pyx_mstate_global->__pyx_n_s__7
#define __pyx_kp_u_accept_language __pyx_mstate_global->__pyx_kp_u_accept_language
#define __pyx_n_s_app __pyx_mstate_global->__pyx_n_s_app
#define __pyx_n_s_asyncio_coroutines __pyx_mstate_global->__pyx_n_s_asyncio_coroutines
#define __pyx_n_s_b64decode __pyx_mstate_global->__pyx_n_s_b64decode
#define __pyx_kp_u_bar_back __pyx_mstate_global->__pyx_kp_u_bar_back
#define __pyx_kp_u_bar_complete __pyx_mstate_global->__pyx_kp_u_bar_complete
#define __pyx_kp_u_bar_finished __pyx_mstate_global->__pyx_kp_u_bar_finished
#define __pyx_kp_u_bar_pulse __pyx_mstate_global->__pyx_kp_u_bar_pulse
#define __pyx_n_s_base64 __pyx_mstate_global->__pyx_n_s_base64
#define __pyx_n_u_black __pyx_mstate_global->__pyx_n_u_black
#define __pyx_n_s_bold __pyx_mstate_global->__pyx_n_s_bold
#define __pyx_kp_u_bold_red __pyx_mstate_global->__pyx_kp_u_bold_red
#define __pyx_n_u_bright_white __pyx_mstate_global->__pyx_n_u_bright_white
#define __pyx_kp_u_cache_control __pyx_mstate_global->__pyx_kp_u_cache_control
#define __pyx_n_s_choices __pyx_mstate_global->__pyx_n_s_choices
#define __pyx_n_s_class_getitem __pyx_mstate_global->__pyx_n_s_class_getitem
#define __pyx_n_s_cline_in_traceback __pyx_mstate_global->__pyx_n_s_cline_in_traceback
#define __pyx_n_s_color __pyx_mstate_global->__pyx_n_s_color
#define __pyx_n_s_config __pyx_mstate_global->__pyx_n_s_config
#define __pyx_kp_u_config___init __pyx_mstate_global->__pyx_kp_u_config___init
#define __pyx_kp_u_configuration __pyx_mstate_global->__pyx_kp_u_configuration
#define __pyx_n_s_copy __pyx_mstate_global->__pyx_n_s_copy
#define __pyx_n_u_cors __pyx_mstate_global->__pyx_n_u_cors
#define __pyx_kp_u_cross_site __pyx_mstate_global->__pyx_kp_u_cross_site
#define __pyx_n_u_dark_red __pyx_mstate_global->__pyx_n_u_dark_red
#define __pyx_n_s_datetime __pyx_mstate_global->__pyx_n_s_datetime
#define __pyx_n_s_decode __pyx_mstate_global->__pyx_n_s_decode
#define __pyx_n_u_deep_sky_blue2 __pyx_mstate_global->__pyx_n_u_deep_sky_blue2
#define __pyx_n_u_desktop __pyx_mstate_global->__pyx_n_u_desktop
#define __pyx_n_s_dict __pyx_mstate_global->__pyx_n_s_dict
#define __pyx_n_s_doc __pyx_mstate_global->__pyx_n_s_doc
#define __pyx_n_u_document __pyx_mstate_global->__pyx_n_u_document
#define __pyx_n_u_dots __pyx_mstate_global->__pyx_n_u_dots
#define __pyx_n_u_empty __pyx_mstate_global->__pyx_n_u_empty
#define __pyx_kp_u_en_US_en_q_0_9 __pyx_mstate_global->__pyx_kp_u_en_US_en_q_0_9
#define __pyx_kp_u_en_US_en_q_0_9_id_ID_q_0_8_id_q __pyx_mstate_global->__pyx_kp_u_en_US_en_q_0_9_id_ID_q_0_8_id_q
#define __pyx_kp_u_en_us __pyx_mstate_global->__pyx_kp_u_en_us
#define __pyx_n_s_environ __pyx_mstate_global->__pyx_n_s_environ
#define __pyx_n_s_exist_ok __pyx_mstate_global->__pyx_n_s_exist_ok
#define __pyx_n_u_fb __pyx_mstate_global->__pyx_n_u_fb
#define __pyx_n_s_get __pyx_mstate_global->__pyx_n_s_get
#define __pyx_n_u_gold1 __pyx_mstate_global->__pyx_n_u_gold1
#define __pyx_n_u_green __pyx_mstate_global->__pyx_n_u_green
#define __pyx_n_u_grey0 __pyx_mstate_global->__pyx_n_u_grey0
#define __pyx_n_u_grey100 __pyx_mstate_global->__pyx_n_u_grey100
#define __pyx_n_u_grey11 __pyx_mstate_global->__pyx_n_u_grey11
#define __pyx_n_u_grey15 __pyx_mstate_global->__pyx_n_u_grey15
#define __pyx_n_u_grey19 __pyx_mstate_global->__pyx_n_u_grey19
#define __pyx_n_u_grey23 __pyx_mstate_global->__pyx_n_u_grey23
#define __pyx_n_u_grey3 __pyx_mstate_global->__pyx_n_u_grey3
#define __pyx_n_u_grey7 __pyx_mstate_global->__pyx_n_u_grey7
#define __pyx_kp_u_hi_IN_hi_q_0_9 __pyx_mstate_global->__pyx_kp_u_hi_IN_hi_q_0_9
#define __pyx_kp_u_hi_in __pyx_mstate_global->__pyx_kp_u_hi_in
#define __pyx_kp_u_id_ID_id_q_0_9 __pyx_mstate_global->__pyx_kp_u_id_ID_id_q_0_9
#define __pyx_kp_u_id_id __pyx_mstate_global->__pyx_kp_u_id_id
#define __pyx_n_u_ig __pyx_mstate_global->__pyx_n_u_ig
#define __pyx_n_s_illegal_choice_message __pyx_mstate_global->__pyx_n_s_illegal_choice_message
#define __pyx_n_s_import __pyx_mstate_global->__pyx_n_s_import
#define __pyx_n_s_init __pyx_mstate_global->__pyx_n_s_init
#define __pyx_n_s_init_subclass __pyx_mstate_global->__pyx_n_s_init_subclass
#define __pyx_n_s_initializing __pyx_mstate_global->__pyx_n_s_initializing
#define __pyx_n_s_is_coroutine __pyx_mstate_global->__pyx_n_s_is_coroutine
#define __pyx_n_s_isdir __pyx_mstate_global->__pyx_n_s_isdir
#define __pyx_kp_u_ja_JP_jp_q_0_9 __pyx_mstate_global->__pyx_kp_u_ja_JP_jp_q_0_9
#define __pyx_kp_u_ja_jp __pyx_mstate_global->__pyx_kp_u_ja_jp
#define __pyx_n_s_join __pyx_mstate_global->__pyx_n_s_join
#define __pyx_n_u_magenta __pyx_mstate_global->__pyx_n_u_magenta
#define __pyx_n_s_main __pyx_mstate_global->__pyx_n_s_main
#define __pyx_kp_u_max_age_0 __pyx_mstate_global->__pyx_kp_u_max_age_0
#define __pyx_n_s_metaclass __pyx_mstate_global->__pyx_n_s_metaclass
#define __pyx_n_s_mkdir __pyx_mstate_global->__pyx_n_s_mkdir
#define __pyx_n_s_mode __pyx_mstate_global->__pyx_n_s_mode
#define __pyx_n_s_module __pyx_mstate_global->__pyx_n_s_module
#define __pyx_kp_u_ms_MY_ms_q_0_9 __pyx_mstate_global->__pyx_kp_u_ms_MY_ms_q_0_9
#define __pyx_kp_u_ms_my __pyx_mstate_global->__pyx_kp_u_ms_my
#define __pyx_kp_s_mtf_config___init___py __pyx_mstate_global->__pyx_kp_s_mtf_config___init___py
#define __pyx_n_s_mtf_module __pyx_mstate_global->__pyx_n_s_mtf_module
#define __pyx_n_s_mtf_module_session __pyx_mstate_global->__pyx_n_s_mtf_module_session
#define __pyx_n_s_name __pyx_mstate_global->__pyx_n_s_name
#define __pyx_n_u_navigate __pyx_mstate_global->__pyx_n_u_navigate
#define __pyx_n_s_now __pyx_mstate_global->__pyx_n_s_now
#define __pyx_n_s_object_except __pyx_mstate_global->__pyx_n_s_object_except
#define __pyx_n_s_os __pyx_mstate_global->__pyx_n_s_os
#define __pyx_n_u_other __pyx_mstate_global->__pyx_n_u_other
#define __pyx_n_s_parents __pyx_mstate_global->__pyx_n_s_parents
#define __pyx_n_s_path __pyx_mstate_global->__pyx_n_s_path
#define __pyx_n_s_pathlib __pyx_mstate_global->__pyx_n_s_pathlib
#define __pyx_n_s_prefix __pyx_mstate_global->__pyx_n_s_prefix
#define __pyx_n_s_prepare __pyx_mstate_global->__pyx_n_s_prepare
#define __pyx_kp_u_progress_elapsed __pyx_mstate_global->__pyx_kp_u_progress_elapsed
#define __pyx_kp_u_progress_percentage __pyx_mstate_global->__pyx_kp_u_progress_percentage
#define __pyx_kp_u_prompt_choices __pyx_mstate_global->__pyx_kp_u_prompt_choices
#define __pyx_n_s_qualname __pyx_mstate_global->__pyx_n_s_qualname
#define __pyx_n_u_quiet __pyx_mstate_global->__pyx_n_u_quiet
#define __pyx_n_s_randint __pyx_mstate_global->__pyx_n_s_randint
#define __pyx_n_s_random __pyx_mstate_global->__pyx_n_s_random
#define __pyx_n_u_red __pyx_mstate_global->__pyx_n_u_red
#define __pyx_n_u_red1 __pyx_mstate_global->__pyx_n_u_red1
#define __pyx_n_u_red3 __pyx_mstate_global->__pyx_n_u_red3
#define __pyx_kp_u_rgb_114_156_31 __pyx_mstate_global->__pyx_kp_u_rgb_114_156_31
#define __pyx_kp_u_rgb_249_38_114 __pyx_mstate_global->__pyx_kp_u_rgb_249_38_114
#define __pyx_n_s_rich __pyx_mstate_global->__pyx_n_s_rich
#define __pyx_n_s_rich_default_styles __pyx_mstate_global->__pyx_n_s_rich_default_styles
#define __pyx_n_s_rich_panel __pyx_mstate_global->__pyx_n_s_rich_panel
#define __pyx_n_s_rich_prompt __pyx_mstate_global->__pyx_n_s_rich_prompt
#define __pyx_n_s_rich_style __pyx_mstate_global->__pyx_n_s_rich_style
#define __pyx_n_s_rmtree __pyx_mstate_global->__pyx_n_s_rmtree
#define __pyx_kp_u_same_origin __pyx_mstate_global->__pyx_kp_u_same_origin
#define __pyx_kp_u_sec_ch_ua_mobile __pyx_mstate_global->__pyx_kp_u_sec_ch_ua_mobile
#define __pyx_kp_u_sec_ch_ua_platform __pyx_mstate_global->__pyx_kp_u_sec_ch_ua_platform
#define __pyx_kp_u_sec_fetch_dest __pyx_mstate_global->__pyx_kp_u_sec_fetch_dest
#define __pyx_kp_u_sec_fetch_mode __pyx_mstate_global->__pyx_kp_u_sec_fetch_mode
#define __pyx_kp_u_sec_fetch_site __pyx_mstate_global->__pyx_kp_u_sec_fetch_site
#define __pyx_kp_u_sec_fetch_user __pyx_mstate_global->__pyx_kp_u_sec_fetch_user
#define __pyx_n_s_set_name __pyx_mstate_global->__pyx_n_s_set_name
#define __pyx_n_s_shutil __pyx_mstate_global->__pyx_n_s_shutil
#define __pyx_kp_u_smirking_face_Silakan_Masukkan __pyx_mstate_global->__pyx_kp_u_smirking_face_Silakan_Masukkan
#define __pyx_kp_u_smirking_face_Silakan_Masukkan_2 __pyx_mstate_global->__pyx_kp_u_smirking_face_Silakan_Masukkan_2
#define __pyx_kp_u_smirking_face_Silakan_pilih_sal __pyx_mstate_global->__pyx_kp_u_smirking_face_Silakan_pilih_sal
#define __pyx_n_s_spec __pyx_mstate_global->__pyx_n_s_spec
#define __pyx_n_s_split __pyx_mstate_global->__pyx_n_s_split
#define __pyx_n_s_style __pyx_mstate_global->__pyx_n_s_style
#define __pyx_n_s_super __pyx_mstate_global->__pyx_n_s_super
#define __pyx_n_s_sys __pyx_mstate_global->__pyx_n_s_sys
#define __pyx_n_u_t __pyx_mstate_global->__pyx_n_u_t
#define __pyx_n_s_test __pyx_mstate_global->__pyx_n_s_test
#define __pyx_n_u_theme __pyx_mstate_global->__pyx_n_u_theme
#define __pyx_n_s_timestamp __pyx_mstate_global->__pyx_n_s_timestamp
#define __pyx_kp_u_tmp __pyx_mstate_global->__pyx_kp_u_tmp
#define __pyx_kp_u_upgrade_insecure_requests __pyx_mstate_global->__pyx_kp_u_upgrade_insecure_requests
#define __pyx_kp_u_user_agent __pyx_mstate_global->__pyx_kp_u_user_agent
#define __pyx_kp_u_utf_8 __pyx_mstate_global->__pyx_kp_u_utf_8
#define __pyx_n_s_utils __pyx_mstate_global->__pyx_n_s_utils
#define __pyx_n_s_validate_error_message __pyx_mstate_global->__pyx_n_s_validate_error_message
#define __pyx_kp_u_vi_VN_vi_q_0_9 __pyx_mstate_global->__pyx_kp_u_vi_VN_vi_q_0_9
#define __pyx_kp_u_vi_vn __pyx_mstate_global->__pyx_kp_u_vi_vn
#define __pyx_n_u_web __pyx_mstate_global->__pyx_n_u_web
#define __pyx_n_u_white __pyx_mstate_global->__pyx_n_u_white
#define __pyx_kp_u_window___accessToken __pyx_mstate_global->__pyx_kp_u_window___accessToken
#define __pyx_kp_u_x_asbd_id __pyx_mstate_global->__pyx_kp_u_x_asbd_id
#define __pyx_kp_u_x_ig_app_id __pyx_mstate_global->__pyx_kp_u_x_ig_app_id
#define __pyx_kp_u_x_ig_www_claim __pyx_mstate_global->__pyx_kp_u_x_ig_www_claim
#define __pyx_n_u_y __pyx_mstate_global->__pyx_n_u_y
#define __pyx_n_u_yellow __pyx_mstate_global->__pyx_n_u_yellow
#define __pyx_n_u_yellow1 __pyx_mstate_global->__pyx_n_u_yellow1
#define __pyx_n_u_yellow2 __pyx_mstate_global->__pyx_n_u_yellow2
#define __pyx_int_0 __pyx_mstate_global->__pyx_int_0
#define __pyx_int_511 __pyx_mstate_global->__pyx_int_511
#define __pyx_int_190000 __pyx_mstate_global->__pyx_int_190000
#define __pyx_int_290000 __pyx_mstate_global->__pyx_int_290000
#define __pyx_int_neg_1 __pyx_mstate_global->__pyx_int_neg_1
#define __pyx_slice__3 __pyx_mstate_global->__pyx_slice__3
#define __pyx_slice__8 __pyx_mstate_global->__pyx_slice__8
#define __pyx_tuple__4 __pyx_mstate_global->__pyx_tuple__4
#define __pyx_tuple__5 __pyx_mstate_global->__pyx_tuple__5
#define __pyx_tuple__6 __pyx_mstate_global->__pyx_tuple__6
#define __pyx_tuple__9 __pyx_mstate_global->__pyx_tuple__9
#define __pyx_tuple__10 __pyx_mstate_global->__pyx_tuple__10
#define __pyx_codeobj__11 __pyx_mstate_global->__pyx_codeobj__11
 

 

 
static PyObject *__pyx_pw_6config_1init(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_6config_1init = {"init", (PyCFunction)__pyx_pw_6config_1init, METH_NOARGS, 0};
static PyObject *__pyx_pw_6config_1init(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("init (wrapper)", 0);
  __pyx_kwvalues = __Pyx_KwValues_VARARGS(__pyx_args, __pyx_nargs);
  __pyx_r = __pyx_pf_6config_init(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_6config_init(CYTHON_UNUSED PyObject *__pyx_self) {
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
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("init", 0);

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_datetime); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_now); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[1] = {__pyx_t_3, };
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 0+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 374, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_timestamp); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[1] = {__pyx_t_2, };
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 0+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 374, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __pyx_t_4 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_t_1, __pyx_n_s_START_TIME, __pyx_t_4) < 0) __PYX_ERR(0, 374, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 375, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_utils);
  __Pyx_GIVEREF(__pyx_n_s_utils);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_utils)) __PYX_ERR(0, 375, __pyx_L1_error);
  __pyx_t_4 = __Pyx_Import(__pyx_n_s_mtf_module, __pyx_t_1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 375, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_4, __pyx_n_s_utils); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 375, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_utils = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = PyList_New(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 376, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_n_s_DEFAULT_STYLES);
  __Pyx_GIVEREF(__pyx_n_s_DEFAULT_STYLES);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 0, __pyx_n_s_DEFAULT_STYLES)) __PYX_ERR(0, 376, __pyx_L1_error);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich_default_styles, __pyx_t_4, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 376, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_DEFAULT_STYLES); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 376, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_t_4);
  __pyx_v_DEFAULT_STYLES = __pyx_t_4;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_Style);
  __Pyx_GIVEREF(__pyx_n_s_Style);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Style)) __PYX_ERR(0, 377, __pyx_L1_error);
  __pyx_t_4 = __Pyx_Import(__pyx_n_s_rich_style, __pyx_t_1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_4, __pyx_n_s_Style); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 377, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_Style = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_utils, __pyx_n_s_object_except); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ANSI_COLOR_NAMES); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyList_New(19); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_u_black);
  __Pyx_GIVEREF(__pyx_n_u_black);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_black)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_red);
  __Pyx_GIVEREF(__pyx_n_u_red);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_red)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_red1);
  __Pyx_GIVEREF(__pyx_n_u_red1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_u_red1)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_dark_red);
  __Pyx_GIVEREF(__pyx_n_u_dark_red);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 3, __pyx_n_u_dark_red)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_red3);
  __Pyx_GIVEREF(__pyx_n_u_red3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 4, __pyx_n_u_red3)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_white);
  __Pyx_GIVEREF(__pyx_n_u_white);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 5, __pyx_n_u_white)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_bright_white);
  __Pyx_GIVEREF(__pyx_n_u_bright_white);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 6, __pyx_n_u_bright_white)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_yellow);
  __Pyx_GIVEREF(__pyx_n_u_yellow);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 7, __pyx_n_u_yellow)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_yellow1);
  __Pyx_GIVEREF(__pyx_n_u_yellow1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 8, __pyx_n_u_yellow1)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_yellow2);
  __Pyx_GIVEREF(__pyx_n_u_yellow2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 9, __pyx_n_u_yellow2)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_gold1);
  __Pyx_GIVEREF(__pyx_n_u_gold1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 10, __pyx_n_u_gold1)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_green);
  __Pyx_GIVEREF(__pyx_n_u_green);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 11, __pyx_n_u_green)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_grey0);
  __Pyx_GIVEREF(__pyx_n_u_grey0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 12, __pyx_n_u_grey0)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_grey3);
  __Pyx_GIVEREF(__pyx_n_u_grey3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 13, __pyx_n_u_grey3)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_grey7);
  __Pyx_GIVEREF(__pyx_n_u_grey7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 14, __pyx_n_u_grey7)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_grey11);
  __Pyx_GIVEREF(__pyx_n_u_grey11);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 15, __pyx_n_u_grey11)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_grey15);
  __Pyx_GIVEREF(__pyx_n_u_grey15);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 16, __pyx_n_u_grey15)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_grey19);
  __Pyx_GIVEREF(__pyx_n_u_grey19);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 17, __pyx_n_u_grey19)) __PYX_ERR(0, 378, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_grey100);
  __Pyx_GIVEREF(__pyx_n_u_grey100);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 18, __pyx_n_u_grey100)) __PYX_ERR(0, 378, __pyx_L1_error);
  __pyx_t_6 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_6)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_6);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[3] = {__pyx_t_6, __pyx_t_3, __pyx_t_2};
    __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_5, 2+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 378, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_t_1, __pyx_n_s_ANSI_COLOR_NAMES, __pyx_t_4) < 0) __PYX_ERR(0, 378, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Files); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_CONFIG_FILES); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 400, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 400, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __pyx_v_config = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_config, __pyx_n_s_get); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_app); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_DEFAULT_THEME_COLOR); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 401, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[3] = {__pyx_t_3, __pyx_n_u_theme, __pyx_t_2};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 2+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 401, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __pyx_v_color = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_app); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 403, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_ANSI_COLOR_NAMES); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 403, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_7 = (__Pyx_PySequence_ContainsTF(__pyx_v_color, __pyx_t_4, Py_NE)); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 403, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__pyx_t_7) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_app); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 404, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_DEFAULT_THEME_COLOR); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 404, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF_SET(__pyx_v_color, __pyx_t_1);
    __pyx_t_1 = 0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_os); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 406, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_path); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 406, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_isdir); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 406, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 406, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_TMP_COOKIE_DIR); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 406, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 406, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 406, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_7) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_shutil); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 407, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_rmtree); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 407, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_app); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 407, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_TMP_COOKIE_DIR); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 407, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_4, __pyx_t_2};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 407, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_app); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 409, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_AUTH_FILES); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 409, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_split); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 409, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_kp_u__2};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 409, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_t_3 = __Pyx_PyObject_GetSlice(__pyx_t_1, 0, -1L, NULL, NULL, &__pyx_slice__3, 0, 1, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 409, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyUnicode_Join(__pyx_kp_u__2, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 409, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_AUTH_DIR = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_os); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 410, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_path); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 410, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_isdir); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 410, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_v_AUTH_DIR};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 410, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 410, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_8 = (!__pyx_t_7);
  if (__pyx_t_8) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_pathlib); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 411, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_Path); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 411, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_v_AUTH_DIR};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 411, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_mkdir); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 411, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 411, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_parents, Py_True) < 0) __PYX_ERR(0, 411, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_exist_ok, Py_True) < 0) __PYX_ERR(0, 411, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_mode, __pyx_int_511) < 0) __PYX_ERR(0, 411, __pyx_L1_error)
    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 411, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_app); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 413, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_PyObject_SetAttrStr(__pyx_t_3, __pyx_n_s_THEME_COLOR, __pyx_v_color) < 0) __PYX_ERR(0, 413, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 414, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_color, __pyx_v_color) < 0) __PYX_ERR(0, 414, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 414, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 414, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_n_u_theme, __pyx_t_1) < 0))) __PYX_ERR(0, 414, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 415, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_v_color) < 0) __PYX_ERR(0, 415, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 415, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 415, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_prompt_choices, __pyx_t_3) < 0))) __PYX_ERR(0, 415, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 416, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_color, __pyx_n_u_magenta) < 0) __PYX_ERR(0, 416, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 416, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 416, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_progress_percentage, __pyx_t_1) < 0))) __PYX_ERR(0, 416, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 417, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_v_color) < 0) __PYX_ERR(0, 417, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 417, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 417, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_progress_elapsed, __pyx_t_3) < 0))) __PYX_ERR(0, 417, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 418, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_color, __pyx_n_u_grey23) < 0) __PYX_ERR(0, 418, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 418, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 418, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_back, __pyx_t_1) < 0))) __PYX_ERR(0, 418, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 419, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_kp_u_rgb_249_38_114) < 0) __PYX_ERR(0, 419, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 419, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 419, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_complete, __pyx_t_3) < 0))) __PYX_ERR(0, 419, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 420, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_color, __pyx_kp_u_rgb_114_156_31) < 0) __PYX_ERR(0, 420, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 420, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 420, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_finished, __pyx_t_1) < 0))) __PYX_ERR(0, 420, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_color, __pyx_kp_u_rgb_249_38_114) < 0) __PYX_ERR(0, 421, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_bold, Py_True) < 0) __PYX_ERR(0, 421, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_v_Style, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely((PyObject_SetItem(__pyx_v_DEFAULT_STYLES, __pyx_kp_u_bar_pulse, __pyx_t_3) < 0))) __PYX_ERR(0, 421, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_os); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_environ); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely((PyObject_SetItem(__pyx_t_1, __pyx_n_u_PYTHONIOENCODING, __pyx_kp_u_utf_8) < 0))) __PYX_ERR(0, 423, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 424, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_environ); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 424, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (unlikely((PyObject_SetItem(__pyx_t_3, __pyx_n_u_GIT_PYTHON_REFRESH, __pyx_n_u_quiet) < 0))) __PYX_ERR(0, 424, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 426, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_Panel);
  __Pyx_GIVEREF(__pyx_n_s_Panel);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_Panel)) __PYX_ERR(0, 426, __pyx_L1_error);
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_rich_panel, __pyx_t_3, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 426, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_Panel); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 426, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_t_3);
  __pyx_v_Panel = __pyx_t_3;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 427, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_s_Prompt);
  __Pyx_GIVEREF(__pyx_n_s_Prompt);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_s_Prompt)) __PYX_ERR(0, 427, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_Confirm);
  __Pyx_GIVEREF(__pyx_n_s_Confirm);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_s_Confirm)) __PYX_ERR(0, 427, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_IntPrompt);
  __Pyx_GIVEREF(__pyx_n_s_IntPrompt);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 2, __pyx_n_s_IntPrompt)) __PYX_ERR(0, 427, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_rich_prompt, __pyx_t_1, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 427, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Prompt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 427, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_Prompt = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Confirm); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 427, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_Confirm = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_IntPrompt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 427, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_t_1);
  __pyx_v_IntPrompt = __pyx_t_1;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 429, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Panel, __pyx_tuple__4, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_Prompt, __pyx_n_s_illegal_choice_message, __pyx_t_1) < 0) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 430, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 430, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_v_Panel, __pyx_tuple__5, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 430, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_Confirm, __pyx_n_s_validate_error_message, __pyx_t_3) < 0) __PYX_ERR(0, 430, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 431, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 431, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_v_Panel, __pyx_tuple__6, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 431, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_IntPrompt, __pyx_n_s_validate_error_message, __pyx_t_1) < 0) __PYX_ERR(0, 431, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyList_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 432, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_n_u_y);
  __Pyx_GIVEREF(__pyx_n_u_y);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 0, __pyx_n_u_y)) __PYX_ERR(0, 432, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_u_t);
  __Pyx_GIVEREF(__pyx_n_u_t);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_t)) __PYX_ERR(0, 432, __pyx_L1_error);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_Confirm, __pyx_n_s_choices, __pyx_t_1) < 0) __PYX_ERR(0, 432, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("config.init", __pyx_clineno, __pyx_lineno, __pyx_filename);
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
#ifndef CYTHON_SMALL_CODE
#if defined(__clang__)
    #define CYTHON_SMALL_CODE
#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))
    #define CYTHON_SMALL_CODE __attribute__((cold))
#else
    #define CYTHON_SMALL_CODE
#endif
#endif
 

static int __Pyx_CreateStringTabAndInitStrings(void) {
  __Pyx_StringTabEntry __pyx_string_tab[] = {
    {&__pyx_kp_u_, __pyx_k_, sizeof(__pyx_k_), 0, 1, 0, 0},
    {&__pyx_kp_u_0, __pyx_k_0, sizeof(__pyx_k_0), 0, 1, 0, 0},
    {&__pyx_kp_u_0_2, __pyx_k_0_2, sizeof(__pyx_k_0_2), 0, 1, 0, 0},
    {&__pyx_kp_u_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 1, 0, 0},
    {&__pyx_kp_u_1217981644879628, __pyx_k_1217981644879628, sizeof(__pyx_k_1217981644879628), 0, 1, 0, 0},
    {&__pyx_kp_u_1_2, __pyx_k_1_2, sizeof(__pyx_k_1_2), 0, 1, 0, 0},
    {&__pyx_kp_u_5_1, __pyx_k_5_1, sizeof(__pyx_k_5_1), 0, 1, 0, 0},
    {&__pyx_n_s_ACCEPT_LANGUAGE, __pyx_k_ACCEPT_LANGUAGE, sizeof(__pyx_k_ACCEPT_LANGUAGE), 0, 0, 1, 1},
    {&__pyx_n_s_ANSI_COLOR_NAMES, __pyx_k_ANSI_COLOR_NAMES, sizeof(__pyx_k_ANSI_COLOR_NAMES), 0, 0, 1, 1},
    {&__pyx_n_s_AUTH_DIR, __pyx_k_AUTH_DIR, sizeof(__pyx_k_AUTH_DIR), 0, 0, 1, 1},
    {&__pyx_n_s_AUTH_FILES, __pyx_k_AUTH_FILES, sizeof(__pyx_k_AUTH_FILES), 0, 0, 1, 1},
    {&__pyx_kp_u_Android, __pyx_k_Android, sizeof(__pyx_k_Android), 0, 1, 0, 0},
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
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple, __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_i686_Apple), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2, __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_2, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3, __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_3, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_3), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4, __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_4, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_4), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5, __pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_5, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_i686_Apple_5), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17, __pyx_k_Mozilla_5_0_X11_Linux_i686_rv_17, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_i686_rv_17), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24, __pyx_k_Mozilla_5_0_X11_Linux_i686_rv_24, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_i686_rv_24), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_10, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_10), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_11, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_11), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_12, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_12), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_13, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_13), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_14, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_14), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_15, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_15), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_16, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_16), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_17, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_17), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_18, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_18), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_19, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_19), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_2, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_20, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_20), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_3, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_3), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_4, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_4), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_5, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_5), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_6, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_6), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_7, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_7), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_8, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_8), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_9, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_App_9), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_2, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_3, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_3), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4, __pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_4, sizeof(__pyx_k_Mozilla_5_0_X11_Linux_x86_64_rv_4), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86, __pyx_k_Mozilla_5_0_X11_U_Linux_i686_x86, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_i686_x86), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A, __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_A, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_A), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2, __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_A_2, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_A_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r, __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2, __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_2, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3, __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_3, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_3), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4, __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_4, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_4), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5, __pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_5, sizeof(__pyx_k_Mozilla_5_0_X11_U_Linux_x86_64_r_5), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68_2, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68_3, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_i68_3), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_2, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_3, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_3), 0, 1, 0, 0},
    {&__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4, __pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_4, sizeof(__pyx_k_Mozilla_5_0_X11_Ubuntu_Linux_x86_4), 0, 1, 0, 0},
    {&__pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P, __pyx_k_Opera_9_80_X11_Linux_i686_U_ru_P, sizeof(__pyx_k_Opera_9_80_X11_Linux_i686_U_ru_P), 0, 1, 0, 0},
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
    {&__pyx_n_s__12, __pyx_k__12, sizeof(__pyx_k__12), 0, 0, 1, 1},
    {&__pyx_kp_u__2, __pyx_k__2, sizeof(__pyx_k__2), 0, 1, 0, 0},
    {&__pyx_n_s__7, __pyx_k__7, sizeof(__pyx_k__7), 0, 0, 1, 1},
    {&__pyx_kp_u_accept_language, __pyx_k_accept_language, sizeof(__pyx_k_accept_language), 0, 1, 0, 0},
    {&__pyx_n_s_app, __pyx_k_app, sizeof(__pyx_k_app), 0, 0, 1, 1},
    {&__pyx_n_s_asyncio_coroutines, __pyx_k_asyncio_coroutines, sizeof(__pyx_k_asyncio_coroutines), 0, 0, 1, 1},
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
    {&__pyx_n_s_class_getitem, __pyx_k_class_getitem, sizeof(__pyx_k_class_getitem), 0, 0, 1, 1},
    {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
    {&__pyx_n_s_color, __pyx_k_color, sizeof(__pyx_k_color), 0, 0, 1, 1},
    {&__pyx_n_s_config, __pyx_k_config, sizeof(__pyx_k_config), 0, 0, 1, 1},
    {&__pyx_kp_u_config___init, __pyx_k_config___init, sizeof(__pyx_k_config___init), 0, 1, 0, 0},
    {&__pyx_kp_u_configuration, __pyx_k_configuration, sizeof(__pyx_k_configuration), 0, 1, 0, 0},
    {&__pyx_n_s_copy, __pyx_k_copy, sizeof(__pyx_k_copy), 0, 0, 1, 1},
    {&__pyx_n_u_cors, __pyx_k_cors, sizeof(__pyx_k_cors), 0, 1, 0, 1},
    {&__pyx_kp_u_cross_site, __pyx_k_cross_site, sizeof(__pyx_k_cross_site), 0, 1, 0, 0},
    {&__pyx_n_u_dark_red, __pyx_k_dark_red, sizeof(__pyx_k_dark_red), 0, 1, 0, 1},
    {&__pyx_n_s_datetime, __pyx_k_datetime, sizeof(__pyx_k_datetime), 0, 0, 1, 1},
    {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
    {&__pyx_n_u_deep_sky_blue2, __pyx_k_deep_sky_blue2, sizeof(__pyx_k_deep_sky_blue2), 0, 1, 0, 1},
    {&__pyx_n_u_desktop, __pyx_k_desktop, sizeof(__pyx_k_desktop), 0, 1, 0, 1},
    {&__pyx_n_s_dict, __pyx_k_dict, sizeof(__pyx_k_dict), 0, 0, 1, 1},
    {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
    {&__pyx_n_u_document, __pyx_k_document, sizeof(__pyx_k_document), 0, 1, 0, 1},
    {&__pyx_n_u_dots, __pyx_k_dots, sizeof(__pyx_k_dots), 0, 1, 0, 1},
    {&__pyx_n_u_empty, __pyx_k_empty, sizeof(__pyx_k_empty), 0, 1, 0, 1},
    {&__pyx_kp_u_en_US_en_q_0_9, __pyx_k_en_US_en_q_0_9, sizeof(__pyx_k_en_US_en_q_0_9), 0, 1, 0, 0},
    {&__pyx_kp_u_en_US_en_q_0_9_id_ID_q_0_8_id_q, __pyx_k_en_US_en_q_0_9_id_ID_q_0_8_id_q, sizeof(__pyx_k_en_US_en_q_0_9_id_ID_q_0_8_id_q), 0, 1, 0, 0},
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
    {&__pyx_kp_u_hi_IN_hi_q_0_9, __pyx_k_hi_IN_hi_q_0_9, sizeof(__pyx_k_hi_IN_hi_q_0_9), 0, 1, 0, 0},
    {&__pyx_kp_u_hi_in, __pyx_k_hi_in, sizeof(__pyx_k_hi_in), 0, 1, 0, 0},
    {&__pyx_kp_u_id_ID_id_q_0_9, __pyx_k_id_ID_id_q_0_9, sizeof(__pyx_k_id_ID_id_q_0_9), 0, 1, 0, 0},
    {&__pyx_kp_u_id_id, __pyx_k_id_id, sizeof(__pyx_k_id_id), 0, 1, 0, 0},
    {&__pyx_n_u_ig, __pyx_k_ig, sizeof(__pyx_k_ig), 0, 1, 0, 1},
    {&__pyx_n_s_illegal_choice_message, __pyx_k_illegal_choice_message, sizeof(__pyx_k_illegal_choice_message), 0, 0, 1, 1},
    {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
    {&__pyx_n_s_init, __pyx_k_init, sizeof(__pyx_k_init), 0, 0, 1, 1},
    {&__pyx_n_s_init_subclass, __pyx_k_init_subclass, sizeof(__pyx_k_init_subclass), 0, 0, 1, 1},
    {&__pyx_n_s_initializing, __pyx_k_initializing, sizeof(__pyx_k_initializing), 0, 0, 1, 1},
    {&__pyx_n_s_is_coroutine, __pyx_k_is_coroutine, sizeof(__pyx_k_is_coroutine), 0, 0, 1, 1},
    {&__pyx_n_s_isdir, __pyx_k_isdir, sizeof(__pyx_k_isdir), 0, 0, 1, 1},
    {&__pyx_kp_u_ja_JP_jp_q_0_9, __pyx_k_ja_JP_jp_q_0_9, sizeof(__pyx_k_ja_JP_jp_q_0_9), 0, 1, 0, 0},
    {&__pyx_kp_u_ja_jp, __pyx_k_ja_jp, sizeof(__pyx_k_ja_jp), 0, 1, 0, 0},
    {&__pyx_n_s_join, __pyx_k_join, sizeof(__pyx_k_join), 0, 0, 1, 1},
    {&__pyx_n_u_magenta, __pyx_k_magenta, sizeof(__pyx_k_magenta), 0, 1, 0, 1},
    {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
    {&__pyx_kp_u_max_age_0, __pyx_k_max_age_0, sizeof(__pyx_k_max_age_0), 0, 1, 0, 0},
    {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
    {&__pyx_n_s_mkdir, __pyx_k_mkdir, sizeof(__pyx_k_mkdir), 0, 0, 1, 1},
    {&__pyx_n_s_mode, __pyx_k_mode, sizeof(__pyx_k_mode), 0, 0, 1, 1},
    {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
    {&__pyx_kp_u_ms_MY_ms_q_0_9, __pyx_k_ms_MY_ms_q_0_9, sizeof(__pyx_k_ms_MY_ms_q_0_9), 0, 1, 0, 0},
    {&__pyx_kp_u_ms_my, __pyx_k_ms_my, sizeof(__pyx_k_ms_my), 0, 1, 0, 0},
    {&__pyx_kp_s_mtf_config___init___py, __pyx_k_mtf_config___init___py, sizeof(__pyx_k_mtf_config___init___py), 0, 0, 1, 0},
    {&__pyx_n_s_mtf_module, __pyx_k_mtf_module, sizeof(__pyx_k_mtf_module), 0, 0, 1, 1},
    {&__pyx_n_s_mtf_module_session, __pyx_k_mtf_module_session, sizeof(__pyx_k_mtf_module_session), 0, 0, 1, 1},
    {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
    {&__pyx_n_u_navigate, __pyx_k_navigate, sizeof(__pyx_k_navigate), 0, 1, 0, 1},
    {&__pyx_n_s_now, __pyx_k_now, sizeof(__pyx_k_now), 0, 0, 1, 1},
    {&__pyx_n_s_object_except, __pyx_k_object_except, sizeof(__pyx_k_object_except), 0, 0, 1, 1},
    {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
    {&__pyx_n_u_other, __pyx_k_other, sizeof(__pyx_k_other), 0, 1, 0, 1},
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
    {&__pyx_n_s_set_name, __pyx_k_set_name, sizeof(__pyx_k_set_name), 0, 0, 1, 1},
    {&__pyx_n_s_shutil, __pyx_k_shutil, sizeof(__pyx_k_shutil), 0, 0, 1, 1},
    {&__pyx_kp_u_smirking_face_Silakan_Masukkan, __pyx_k_smirking_face_Silakan_Masukkan, sizeof(__pyx_k_smirking_face_Silakan_Masukkan), 0, 1, 0, 0},
    {&__pyx_kp_u_smirking_face_Silakan_Masukkan_2, __pyx_k_smirking_face_Silakan_Masukkan_2, sizeof(__pyx_k_smirking_face_Silakan_Masukkan_2), 0, 1, 0, 0},
    {&__pyx_kp_u_smirking_face_Silakan_pilih_sal, __pyx_k_smirking_face_Silakan_pilih_sal, sizeof(__pyx_k_smirking_face_Silakan_pilih_sal), 0, 1, 0, 0},
    {&__pyx_n_s_spec, __pyx_k_spec, sizeof(__pyx_k_spec), 0, 0, 1, 1},
    {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
    {&__pyx_n_s_style, __pyx_k_style, sizeof(__pyx_k_style), 0, 0, 1, 1},
    {&__pyx_n_s_super, __pyx_k_super, sizeof(__pyx_k_super), 0, 0, 1, 1},
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
    {&__pyx_kp_u_vi_VN_vi_q_0_9, __pyx_k_vi_VN_vi_q_0_9, sizeof(__pyx_k_vi_VN_vi_q_0_9), 0, 1, 0, 0},
    {&__pyx_kp_u_vi_vn, __pyx_k_vi_vn, sizeof(__pyx_k_vi_vn), 0, 1, 0, 0},
    {&__pyx_n_u_web, __pyx_k_web, sizeof(__pyx_k_web), 0, 1, 0, 1},
    {&__pyx_n_u_white, __pyx_k_white, sizeof(__pyx_k_white), 0, 1, 0, 1},
    {&__pyx_kp_u_window___accessToken, __pyx_k_window___accessToken, sizeof(__pyx_k_window___accessToken), 0, 1, 0, 0},
    {&__pyx_kp_u_x_asbd_id, __pyx_k_x_asbd_id, sizeof(__pyx_k_x_asbd_id), 0, 1, 0, 0},
    {&__pyx_kp_u_x_ig_app_id, __pyx_k_x_ig_app_id, sizeof(__pyx_k_x_ig_app_id), 0, 1, 0, 0},
    {&__pyx_kp_u_x_ig_www_claim, __pyx_k_x_ig_www_claim, sizeof(__pyx_k_x_ig_www_claim), 0, 1, 0, 0},
    {&__pyx_n_u_y, __pyx_k_y, sizeof(__pyx_k_y), 0, 1, 0, 1},
    {&__pyx_n_u_yellow, __pyx_k_yellow, sizeof(__pyx_k_yellow), 0, 1, 0, 1},
    {&__pyx_n_u_yellow1, __pyx_k_yellow1, sizeof(__pyx_k_yellow1), 0, 1, 0, 1},
    {&__pyx_n_u_yellow2, __pyx_k_yellow2, sizeof(__pyx_k_yellow2), 0, 1, 0, 1},
    {0, 0, 0, 0, 0, 0, 0}
  };
  return __Pyx_InitStrings(__pyx_string_tab);
}
 
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  return 0;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

   
  __pyx_slice__3 = PySlice_New(Py_None, __pyx_int_neg_1, Py_None); if (unlikely(!__pyx_slice__3)) __PYX_ERR(0, 409, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__3);
  __Pyx_GIVEREF(__pyx_slice__3);

   
  __pyx_tuple__4 = PyTuple_Pack(1, __pyx_kp_u_smirking_face_Silakan_pilih_sal); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 429, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);

   
  __pyx_tuple__5 = PyTuple_Pack(1, __pyx_kp_u_smirking_face_Silakan_Masukkan); if (unlikely(!__pyx_tuple__5)) __PYX_ERR(0, 430, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__5);
  __Pyx_GIVEREF(__pyx_tuple__5);

   
  __pyx_tuple__6 = PyTuple_Pack(1, __pyx_kp_u_smirking_face_Silakan_Masukkan_2); if (unlikely(!__pyx_tuple__6)) __PYX_ERR(0, 431, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__6);
  __Pyx_GIVEREF(__pyx_tuple__6);

   
  __pyx_slice__8 = PySlice_New(Py_None, Py_None, __pyx_int_neg_1); if (unlikely(!__pyx_slice__8)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__8);
  __Pyx_GIVEREF(__pyx_slice__8);

   
  __pyx_tuple__9 = PyTuple_Pack(2, __pyx_int_190000, __pyx_int_290000); if (unlikely(!__pyx_tuple__9)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__9);
  __Pyx_GIVEREF(__pyx_tuple__9);

   
  __pyx_tuple__10 = PyTuple_Pack(10, __pyx_n_s_utils, __pyx_n_s_DEFAULT_STYLES, __pyx_n_s_Style, __pyx_n_s_config, __pyx_n_s_color, __pyx_n_s_AUTH_DIR, __pyx_n_s_Panel, __pyx_n_s_Prompt, __pyx_n_s_Confirm, __pyx_n_s_IntPrompt); if (unlikely(!__pyx_tuple__10)) __PYX_ERR(0, 373, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__10);
  __Pyx_GIVEREF(__pyx_tuple__10);
  __pyx_codeobj__11 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 10, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__10, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_config___init___py, __pyx_n_s_init, 373, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__11)) __PYX_ERR(0, 373, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitConstants(void) {
  if (__Pyx_CreateStringTabAndInitStrings() < 0) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_511 = PyInt_FromLong(511); if (unlikely(!__pyx_int_511)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_190000 = PyInt_FromLong(190000L); if (unlikely(!__pyx_int_190000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_290000 = PyInt_FromLong(290000L); if (unlikely(!__pyx_int_290000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_neg_1 = PyInt_FromLong(-1); if (unlikely(!__pyx_int_neg_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
  return 0;
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

#ifdef __cplusplus
namespace {
  struct PyModuleDef __pyx_moduledef =
  #else
  static struct PyModuleDef __pyx_moduledef =
  #endif
  {
      PyModuleDef_HEAD_INIT,
      "config",
      0,  
    #if CYTHON_PEP489_MULTI_PHASE_INIT
      0,  
    #elif CYTHON_USE_MODULE_STATE
      sizeof(__pyx_mstate),  
    #else
      -1,  
    #endif
      __pyx_methods  ,
    #if CYTHON_PEP489_MULTI_PHASE_INIT
      __pyx_moduledef_slots,  
    #else
      NULL,  
    #endif
    #if CYTHON_USE_MODULE_STATE
      __pyx_m_traverse,  
      __pyx_m_clear,  
      NULL  
    #else
      NULL,  
      NULL,  
      NULL  
    #endif
  };
  #ifdef __cplusplus
}  
#endif
#endif

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
#if !defined(CYTHON_NO_PYINIT_EXPORT) && (defined(_WIN32) || defined(WIN32) || defined(MS_WINDOWS))
__Pyx_PyMODINIT_FUNC init__init__(void) { initconfig(); }
#endif
__Pyx_PyMODINIT_FUNC initconfig(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_config(void) CYTHON_SMALL_CODE;  
#if !defined(CYTHON_NO_PYINIT_EXPORT) && (defined(_WIN32) || defined(WIN32) || defined(MS_WINDOWS))
__Pyx_PyMODINIT_FUNC PyInit___init__(void) { return PyInit_config(); }
#endif
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
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *module, const char* from_name, const char* to_name, int allow_none)
#else
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *moddict, const char* from_name, const char* to_name, int allow_none)
#endif
{
    PyObject *value = PyObject_GetAttrString(spec, from_name);
    int result = 0;
    if (likely(value)) {
        if (allow_none || value != Py_None) {
#if CYTHON_COMPILING_IN_LIMITED_API
            result = PyModule_AddObject(module, to_name, value);
#else
            result = PyDict_SetItemString(moddict, to_name, value);
#endif
        }
        Py_DECREF(value);
    } else if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Clear();
    } else {
        result = -1;
    }
    return result;
}
static CYTHON_SMALL_CODE PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def) {
    PyObject *module = NULL, *moddict, *modname;
    CYTHON_UNUSED_VAR(def);
    if (__Pyx_check_single_interpreter())
        return NULL;
    if (__pyx_m)
        return __Pyx_NewRef(__pyx_m);
    modname = PyObject_GetAttrString(spec, "name");
    if (unlikely(!modname)) goto bad;
    module = PyModule_NewObject(modname);
    Py_DECREF(modname);
    if (unlikely(!module)) goto bad;
#if CYTHON_COMPILING_IN_LIMITED_API
    moddict = module;
#else
    moddict = PyModule_GetDict(module);
    if (unlikely(!moddict)) goto bad;
#endif
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
  int stringtab_initialized = 0;
  #if CYTHON_USE_MODULE_STATE
  int pystate_addmodule_run = 0;
  #endif
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
  int __pyx_t_11;
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
   
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  __pyx_m = __pyx_pyinit_module;
  Py_INCREF(__pyx_m);
  #else
  #if PY_MAJOR_VERSION < 3
  __pyx_m = Py_InitModule4("config", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 1, __pyx_L1_error)
  #elif CYTHON_USE_MODULE_STATE
  __pyx_t_1 = PyModule_Create(&__pyx_moduledef); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  {
    int add_module_result = PyState_AddModule(__pyx_t_1, &__pyx_moduledef);
    __pyx_t_1 = 0;  
    if (unlikely((add_module_result < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
    pystate_addmodule_run = 1;
  }
  #else
  __pyx_m = PyModule_Create(&__pyx_moduledef);
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #endif
  CYTHON_UNUSED_VAR(__pyx_t_1);
  __pyx_d = PyModule_GetDict(__pyx_m); if (unlikely(!__pyx_d)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_d);
  __pyx_b = PyImport_AddModule(__Pyx_BUILTIN_MODULE_NAME); if (unlikely(!__pyx_b)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_b);
  __pyx_cython_runtime = PyImport_AddModule((char *) "cython_runtime"); if (unlikely(!__pyx_cython_runtime)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_cython_runtime);
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
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
  if (__pyx_CyFunction_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_FusedFunction_USED
  if (__pyx_FusedFunction_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Coroutine_USED
  if (__pyx_Coroutine_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Generator_USED
  if (__pyx_Generator_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_AsyncGen_USED
  if (__pyx_AsyncGen_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_StopAsyncIteration_USED
  if (__pyx_StopAsyncIteration_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
   
   
  #if defined(WITH_THREAD) && PY_VERSION_HEX < 0x030700F0 && defined(__PYX_FORCE_INIT_THREADS) && __PYX_FORCE_INIT_THREADS
  PyEval_InitThreads();
  #endif
   
  if (__Pyx_InitConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  stringtab_initialized = 1;
  if (__Pyx_InitGlobals() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #if PY_MAJOR_VERSION < 3 && (__PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT)
  if (__Pyx_init_sys_getdefaultencoding_params() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  if (__pyx_module_is_main_config____init__) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  if (!CYTHON_PEP489_MULTI_PHASE_INIT) {
    if (unlikely((__Pyx_SetPackagePathFromImportLib(__pyx_kp_u_config___init) < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "config")) {
      if (unlikely((PyDict_SetItemString(modules, "config", __pyx_m) < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
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

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_Files);
  __Pyx_GIVEREF(__pyx_n_s_Files);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Files)) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_mtf_module_session, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Files); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Files, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_datetime);
  __Pyx_GIVEREF(__pyx_n_s_datetime);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_datetime)) __PYX_ERR(0, 2, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_datetime, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_datetime); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_datetime, __pyx_t_3) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_b64decode);
  __Pyx_GIVEREF(__pyx_n_s_b64decode);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_b64decode)) __PYX_ERR(0, 3, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_base64, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_b64decode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_b64decode, __pyx_t_2) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_color);
  __Pyx_GIVEREF(__pyx_n_s_color);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_color)) __PYX_ERR(0, 4, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_rich, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_color); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_color, __pyx_t_3) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_sys, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_sys, __pyx_t_2) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_os, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_os, __pyx_t_2) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_shutil, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_shutil, __pyx_t_2) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_random, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_2) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_pathlib, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_pathlib, __pyx_t_2) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_app, __pyx_n_s_app, (PyObject *) NULL, __pyx_n_s_config, (PyObject *) NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_VERSION, __pyx_kp_u_5_1) < 0) __PYX_ERR(0, 12, __pyx_L1_error)

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_IP, __pyx_t_3) < 0) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_FB, __pyx_t_3) < 0) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_IG, __pyx_t_3) < 0) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_START_TIME, __pyx_int_0) < 0) __PYX_ERR(0, 16, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_CONFIG_FILES, __pyx_kp_u_configuration) < 0) __PYX_ERR(0, 17, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_TMP_COOKIE_DIR, __pyx_kp_u_tmp) < 0) __PYX_ERR(0, 18, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_os); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_path); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_join); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_sys); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_prefix); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_b64decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_9 = __Pyx_PyObject_GetItem(__pyx_kp_u_U2cuV2YpxWLoRXdh5yLulmY, __pyx_slice__8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_10 = PyUnicode_AsEncodedString(((PyObject*)__pyx_t_9), NULL, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = NULL;
  __pyx_t_11 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
      __pyx_t_11 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_t_10};
    __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_11, 1+__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  }
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  __pyx_t_11 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_8))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_8);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_8, function);
      __pyx_t_11 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[1] = {__pyx_t_7, };
    __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_11, 0+__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  }
  __pyx_t_8 = NULL;
  __pyx_t_11 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_8)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_8);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_11 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[3] = {__pyx_t_8, __pyx_t_6, __pyx_t_5};
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_11, 2+__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_AUTH_FILES, __pyx_t_3) < 0) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2) < 0) __PYX_ERR(0, 21, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_CP_DETECTOR_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1) < 0) __PYX_ERR(0, 22, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_FB_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U) < 0) __PYX_ERR(0, 23, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_IG_USER_AGENT, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM) < 0) __PYX_ERR(0, 24, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_DESKTOP_USER_AGENT, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App) < 0) __PYX_ERR(0, 25, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_CONSOLE_SPINNER, __pyx_n_u_dots) < 0) __PYX_ERR(0, 26, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_PATTERN_MATCH_FB_TOKEN, __pyx_kp_u_window___accessToken) < 0) __PYX_ERR(0, 27, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_DEFAULT_THEME_COLOR, __pyx_n_u_deep_sky_blue2) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  __pyx_t_3 = PyObject_GetItem(__pyx_t_2, __pyx_n_s_DEFAULT_THEME_COLOR);
  if (unlikely(!__pyx_t_3)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_DEFAULT_THEME_COLOR);
  }
  if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_THEME_COLOR, __pyx_t_3) < 0) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_other, __pyx_kp_u_en_US_en_q_0_9_id_ID_q_0_8_id_q) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_en_us, __pyx_kp_u_en_US_en_q_0_9) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_ja_jp, __pyx_kp_u_ja_JP_jp_q_0_9) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_id_id, __pyx_kp_u_id_ID_id_q_0_9) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_ms_my, __pyx_kp_u_ms_MY_ms_q_0_9) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_hi_in, __pyx_kp_u_hi_IN_hi_q_0_9) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_vi_vn, __pyx_kp_u_vi_VN_vi_q_0_9) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_ACCEPT_LANGUAGE, __pyx_t_3) < 0) __PYX_ERR(0, 30, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(9); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = PyObject_GetItem(__pyx_t_2, __pyx_n_s_USER_AGENT);
  if (unlikely(!__pyx_t_4)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_USER_AGENT);
  }
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_user_agent, __pyx_t_4) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1) < 0) __PYX_ERR(0, 43, __pyx_L1_error)

   
  __pyx_t_4 = PyObject_GetItem(__pyx_t_2, __pyx_n_s_ACCEPT_LANGUAGE);
  if (unlikely(!__pyx_t_4)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ACCEPT_LANGUAGE);
  }
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_kp_u_id_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_accept_language, __pyx_t_5) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_empty) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_cors) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_same_origin) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_user, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_ch_ua_mobile, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_REQUEST_HEADERS, __pyx_t_3) < 0) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(9); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = PyObject_GetItem(__pyx_t_2, __pyx_n_s_DESKTOP_USER_AGENT);
  if (unlikely(!__pyx_t_5)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_DESKTOP_USER_AGENT);
  }
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_user_agent, __pyx_t_5) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1) < 0) __PYX_ERR(0, 54, __pyx_L1_error)

   
  __pyx_t_5 = PyObject_GetItem(__pyx_t_2, __pyx_n_s_ACCEPT_LANGUAGE);
  if (unlikely(!__pyx_t_5)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ACCEPT_LANGUAGE);
  }
  if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 56, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_t_5, __pyx_kp_u_id_id); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 56, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_accept_language, __pyx_t_4) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_empty) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_cors) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_same_origin) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_user, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_ch_ua_mobile, __pyx_kp_u_0) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_DESKTOP_REQUEST_HEADERS, __pyx_t_3) < 0) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(13); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = PyObject_GetItem(__pyx_t_2, __pyx_n_s_IG_USER_AGENT);
  if (unlikely(!__pyx_t_4)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_IG_USER_AGENT);
  }
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_user_agent, __pyx_t_4) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1) < 0) __PYX_ERR(0, 65, __pyx_L1_error)

   
  __pyx_t_4 = PyObject_GetItem(__pyx_t_2, __pyx_n_s_ACCEPT_LANGUAGE);
  if (unlikely(!__pyx_t_4)) {
    PyErr_Clear();
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ACCEPT_LANGUAGE);
  }
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 67, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_t_4, __pyx_kp_u_id_id); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 67, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_accept_language, __pyx_t_5) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_cache_control, __pyx_kp_u_max_age_0) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_dest, __pyx_n_u_document) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_mode, __pyx_n_u_navigate) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_site, __pyx_kp_u_cross_site) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_fetch_user, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_ch_ua_mobile, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_sec_ch_ua_platform, __pyx_kp_u_Android) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_x_ig_app_id, __pyx_kp_u_1217981644879628) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_x_ig_www_claim, __pyx_kp_u_0_2) < 0) __PYX_ERR(0, 65, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_random); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__9, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_Str(__pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_x_asbd_id, __pyx_t_4) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_IG_REQUEST_HEADERS, __pyx_t_3) < 0) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = PyList_New(205); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_LYA)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 1, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_POT)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 3, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_VOG_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_mot)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 5, __pyx_kp_u_Mozilla_5_0_Linux_Android_11_AC2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 7, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_0_4_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 9, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 10, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 11, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 12, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 13, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 14, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 15, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 16, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 17, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_2_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 18, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_GT)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 19, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 20, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_3_LT_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 21, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 22, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 23, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 24, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 25, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 26, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 27, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 28, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 29, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_9)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 30, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_10)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 31, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_11)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 32, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_12)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 33, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_13)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 34, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_14)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 35, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_15)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 36, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_16)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 37, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_17)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 38, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_18)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 39, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_19)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 40, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_20)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 41, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_21)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 42, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_2_22)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 43, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 44, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 45, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 46, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 47, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 48, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 49, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 50, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 51, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_9)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 52, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_10)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 53, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_11)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 54, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_12)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 55, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_13)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 56, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_14)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 57, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_15)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 58, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_4_16)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 59, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 60, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_4_Ne_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 61, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 62, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 63, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_1_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 64, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 65, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 66, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 67, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 68, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 69, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 70, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 71, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 72, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 73, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 74, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_AS_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 75, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_Le)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 76, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 77, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SA_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 78, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 79, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_SM_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 80, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 81, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 82, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 83, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 84, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 85, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 86, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 87, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 88, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_9)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 89, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_10)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 90, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_11)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 91, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_12)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 92, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_13)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 93, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_14)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 94, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_15)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 95, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_16)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 96, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_17)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 97, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_18)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 98, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_19)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 99, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_A1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 100, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_An)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 101, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 102, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 103, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 104, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_LG_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 105, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 106, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_XT_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 107, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 108, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_AL)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 109, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_MY)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 110, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_FR)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 111, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_In)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 112, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_Mo)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 113, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_TR)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 114, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 115, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 116, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_1_1_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 117, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 118, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_0_0_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 119, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 120, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 121, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_Andr)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 122, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_JKM)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 123, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_Q)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 124, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_LM_X)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 125, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 126, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_cp37_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 127, __pyx_kp_u_Mozilla_5_0_Linux_Android_4_1_2_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 128, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_0)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 129, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 130, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_1_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 131, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 132, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_2_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 133, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 134, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 135, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 136, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 137, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 138, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 139, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 140, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 141, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 142, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 143, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 144, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_11)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 145, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_12)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 146, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_13)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 147, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_10)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 148, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_9)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 149, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_2_3_14)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 150, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 151, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 152, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 153, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 154, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 155, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 156, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_0_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 157, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 158, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 159, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 160, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 161, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 162, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 163, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 164, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 165, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_9)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 166, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 167, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 168, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 169, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 170, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 171, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 172, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 173, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 174, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_2_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 175, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 176, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 177, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 178, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 179, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 180, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 181, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 182, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 183, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 184, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 185, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_3)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 186, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_4)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 187, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_5)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 188, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_6)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 189, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_7)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 190, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_8)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 191, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_9)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 192, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_10)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 193, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_11)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 194, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_12)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 195, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_13)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 196, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_14)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 197, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_15)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 198, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_16)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 199, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_17)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 200, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_18)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 201, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_19)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 202, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 203, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_5_0_2)) __PYX_ERR(0, 80, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 204, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_4_20)) __PYX_ERR(0, 80, __pyx_L1_error);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_web, __pyx_t_4) < 0) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = PyList_New(47); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 287, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 1, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_2)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 3, __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_17)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 5, __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_2)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_2)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P);
  __Pyx_GIVEREF(__pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 7, __pyx_kp_u_Opera_9_80_X11_Linux_i686_U_ru_P)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_i68_3)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 9, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 10, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_3)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 11, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 12, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_2)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 13, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_2)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 14, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_i686_x86)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 15, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 16, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_4)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 17, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_5)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 18, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_6)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 19, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_A_2)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 20, __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_rv_24)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 21, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_7)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 22, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 23, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_3)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 24, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_8)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 25, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_2)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 26, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_rv_4)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 27, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_3)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 28, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_9)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 29, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_10)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 30, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_3)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 31, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_11)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 32, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_12)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 33, __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_3)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 34, __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_4)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 35, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_13)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 36, __pyx_kp_u_Mozilla_5_0_X11_Ubuntu_Linux_x86_4)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 37, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_4)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 38, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_14)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 39, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_15)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 40, __pyx_kp_u_Mozilla_5_0_X11_U_Linux_x86_64_r_5)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 41, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_16)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 42, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_17)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 43, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_18)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 44, __pyx_kp_u_Mozilla_5_0_X11_Linux_i686_Apple_5)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 45, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_19)) __PYX_ERR(0, 287, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 46, __pyx_kp_u_Mozilla_5_0_X11_Linux_x86_64_App_20)) __PYX_ERR(0, 287, __pyx_L1_error);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_desktop, __pyx_t_4) < 0) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = PyList_New(20); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 336, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F);
  __Pyx_GIVEREF(__pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_FBAN_FB4A_FBAV_222_0_0_48_113_F)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 1, __pyx_kp_u_Dalvik_1_6_0_Linux_U_Android_4_4)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_5_1)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 3, __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_9_I)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li);
  __Pyx_GIVEREF(__pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_SupportsFresco_1_Dalvik_2_1_0_Li)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0);
  __Pyx_GIVEREF(__pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 5, __pyx_kp_u_Dalvik_2_1_0_Linux_U_Android_8_0)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 7, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SL)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_7)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 9, __pyx_kp_u_Mozilla_5_0_Linux_Android_8_1_0_3)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 10, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_PR)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 11, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 12, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_ST)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 13, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_3)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 14, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_BG)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 15, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_LG)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 16, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_2)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 17, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_20)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 18, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_HU)) __PYX_ERR(0, 336, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 19, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_U_2)) __PYX_ERR(0, 336, __pyx_L1_error);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_fb, __pyx_t_4) < 0) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = PyList_New(10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 358, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_3)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 1, __pyx_kp_u_Mozilla_5_0_Linux_Android_7_0_SM_4)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_1_1_21)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 3, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_4)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 4, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_1_10)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 5, __pyx_kp_u_Mozilla_5_0_Linux_Android_10_SM_2)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 6, __pyx_kp_u_Mozilla_5_0_Linux_Android_9_SM_G)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 7, __pyx_kp_u_Mozilla_5_0_Linux_Android_6_0_1_5)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 8, __pyx_kp_u_Mozilla_5_0_Linux_Android_5_0_2_8)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8);
  __Pyx_GIVEREF(__pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 9, __pyx_kp_u_Mozilla_5_0_Linux_U_Android_4_3_8)) __PYX_ERR(0, 358, __pyx_L1_error);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_ig, __pyx_t_4) < 0) __PYX_ERR(0, 80, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_LIST_USER_AGENT, __pyx_t_3) < 0) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_color); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_ANSI_COLOR_NAMES); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_copy); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  __pyx_t_11 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_11 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[1] = {__pyx_t_5, };
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_11, 0+__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 371, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_ANSI_COLOR_NAMES, __pyx_t_3) < 0) __PYX_ERR(0, 371, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_Py3ClassCreate(((PyObject*)&PyType_Type), __pyx_n_s_app, __pyx_empty_tuple, __pyx_t_2, NULL, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_app, __pyx_t_3) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_6config_1init, 0, __pyx_n_s_init, NULL, __pyx_n_s_config, __pyx_d, ((PyObject *)__pyx_codeobj__11)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 373, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_init, __pyx_t_2) < 0) __PYX_ERR(0, 373, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  if (__pyx_m) {
    if (__pyx_d && stringtab_initialized) {
      __Pyx_AddTraceback("init config", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    #if !CYTHON_USE_MODULE_STATE
    Py_CLEAR(__pyx_m);
    #else
    Py_DECREF(__pyx_m);
    if (pystate_addmodule_run) {
      PyObject *tp, *value, *tb;
      PyErr_Fetch(&tp, &value, &tb);
      PyState_RemoveModule(&__pyx_moduledef);
      PyErr_Restore(tp, value, tb);
    }
    #endif
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init config");
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
 
 
 
 
#ifdef _MSC_VER
#pragma warning( push )
 
#pragma warning( disable : 4127 )
#endif



 

 
 
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

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE void __Pyx_copy_object_array(PyObject *const *CYTHON_RESTRICT src, PyObject** CYTHON_RESTRICT dest, Py_ssize_t length) {
    PyObject *v;
    Py_ssize_t i;
    for (i = 0; i < length; i++) {
        v = dest[i] = src[i];
        Py_INCREF(v);
    }
}
static CYTHON_INLINE PyObject *
__Pyx_PyTuple_FromArray(PyObject *const *src, Py_ssize_t n)
{
    PyObject *res;
    if (n <= 0) {
        Py_INCREF(__pyx_empty_tuple);
        return __pyx_empty_tuple;
    }
    res = PyTuple_New(n);
    if (unlikely(res == NULL)) return NULL;
    __Pyx_copy_object_array(src, ((PyTupleObject*)res)->ob_item, n);
    return res;
}
static CYTHON_INLINE PyObject *
__Pyx_PyList_FromArray(PyObject *const *src, Py_ssize_t n)
{
    PyObject *res;
    if (n <= 0) {
        return PyList_New(0);
    }
    res = PyList_New(n);
    if (unlikely(res == NULL)) return NULL;
    __Pyx_copy_object_array(src, ((PyListObject*)res)->ob_item, n);
    return res;
}
#endif

 
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API
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
#if CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API
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

 
#if CYTHON_METH_FASTCALL
static CYTHON_INLINE PyObject * __Pyx_GetKwValue_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues, PyObject *s)
{
    Py_ssize_t i, n = PyTuple_GET_SIZE(kwnames);
    for (i = 0; i < n; i++)
    {
        if (s == PyTuple_GET_ITEM(kwnames, i)) return kwvalues[i];
    }
    for (i = 0; i < n; i++)
    {
        int eq = __Pyx_PyUnicode_Equals(s, PyTuple_GET_ITEM(kwnames, i), Py_EQ);
        if (unlikely(eq != 0)) {
            if (unlikely(eq < 0)) return NULL;   
            return kwvalues[i];
        }
    }
    return NULL;   
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
    int result;
    PyObject *exc_type;
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject *current_exception = tstate->current_exception;
    if (unlikely(!current_exception)) return 0;
    exc_type = (PyObject*) Py_TYPE(current_exception);
    if (exc_type == err) return 1;
#else
    exc_type = tstate->curexc_type;
    if (exc_type == err) return 1;
    if (unlikely(!exc_type)) return 0;
#endif
    #if CYTHON_AVOID_BORROWED_REFS
    Py_INCREF(exc_type);
    #endif
    if (unlikely(PyTuple_Check(err))) {
        result = __Pyx_PyErr_ExceptionMatchesTuple(exc_type, err);
    } else {
        result = __Pyx_PyErr_GivenExceptionMatches(exc_type, err);
    }
    #if CYTHON_AVOID_BORROWED_REFS
    Py_DECREF(exc_type);
    #endif
    return result;
}
#endif

 
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject *tmp_value;
    assert(type == NULL || (value != NULL && type == (PyObject*) Py_TYPE(value)));
    if (value) {
        #if CYTHON_COMPILING_IN_CPYTHON
        if (unlikely(((PyBaseExceptionObject*) value)->traceback != tb))
        #endif
            PyException_SetTraceback(value, tb);
    }
    tmp_value = tstate->current_exception;
    tstate->current_exception = value;
    Py_XDECREF(tmp_value);
#else
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
#endif
}
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject* exc_value;
    exc_value = tstate->current_exception;
    tstate->current_exception = 0;
    *value = exc_value;
    *type = NULL;
    *tb = NULL;
    if (exc_value) {
        *type = (PyObject*) Py_TYPE(exc_value);
        Py_INCREF(*type);
        #if CYTHON_COMPILING_IN_CPYTHON
        *tb = ((PyBaseExceptionObject*) exc_value)->traceback;
        Py_XINCREF(*tb);
        #else
        *tb = PyException_GetTraceback(exc_value);
        #endif
    }
#else
    *type = tstate->curexc_type;
    *value = tstate->curexc_value;
    *tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
#endif
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

 
static void __Pyx_PyObject_GetAttrStr_ClearAttributeError(void) {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    if (likely(__Pyx_PyErr_ExceptionMatches(PyExc_AttributeError)))
        __Pyx_PyErr_Clear();
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name) {
    PyObject *result;
#if CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_TYPE_SLOTS && PY_VERSION_HEX >= 0x030700B1
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro == PyObject_GenericGetAttr)) {
        return _PyObject_GenericGetAttrWithDict(obj, attr_name, NULL, 1);
    }
#endif
    result = __Pyx_PyObject_GetAttrStr(obj, attr_name);
    if (unlikely(!result)) {
        __Pyx_PyObject_GetAttrStr_ClearAttributeError();
    }
    return result;
}

 
static PyObject *__Pyx_GetBuiltinName(PyObject *name) {
    PyObject* result = __Pyx_PyObject_GetAttrStrNoError(__pyx_b, name);
    if (unlikely(!result) && !PyErr_Occurred()) {
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
#elif CYTHON_COMPILING_IN_LIMITED_API
    if (unlikely(!__pyx_m)) {
        return NULL;
    }
    result = PyObject_GetAttr(__pyx_m, name);
    if (likely(result)) {
        return result;
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

 
#if CYTHON_FAST_PYCALL && !CYTHON_VECTORCALL
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
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object"))) {
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

 
static PyObject* __Pyx_PyObject_FastCall_fallback(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs) {
    PyObject *argstuple;
    PyObject *result = 0;
    size_t i;
    argstuple = PyTuple_New((Py_ssize_t)nargs);
    if (unlikely(!argstuple)) return NULL;
    for (i = 0; i < nargs; i++) {
        Py_INCREF(args[i]);
        if (__Pyx_PyTuple_SET_ITEM(argstuple, (Py_ssize_t)i, args[i]) < 0) goto bad;
    }
    result = __Pyx_PyObject_Call(func, argstuple, kwargs);
  bad:
    Py_DECREF(argstuple);
    return result;
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t _nargs, PyObject *kwargs) {
    Py_ssize_t nargs = __Pyx_PyVectorcall_NARGS(_nargs);
#if CYTHON_COMPILING_IN_CPYTHON
    if (nargs == 0 && kwargs == NULL) {
#if defined(__Pyx_CyFunction_USED) && defined(NDEBUG)
        if (__Pyx_IsCyOrPyCFunction(func))
#else
        if (PyCFunction_Check(func))
#endif
        {
            if (likely(PyCFunction_GET_FLAGS(func) & METH_NOARGS)) {
                return __Pyx_PyObject_CallMethO(func, NULL);
            }
        }
    }
    else if (nargs == 1 && kwargs == NULL) {
        if (PyCFunction_Check(func))
        {
            if (likely(PyCFunction_GET_FLAGS(func) & METH_O)) {
                return __Pyx_PyObject_CallMethO(func, args[0]);
            }
        }
    }
#endif
    #if PY_VERSION_HEX < 0x030800B1
    #if CYTHON_FAST_PYCCALL
    if (PyCFunction_Check(func)) {
        if (kwargs) {
            return _PyCFunction_FastCallDict(func, args, nargs, kwargs);
        } else {
            return _PyCFunction_FastCallKeywords(func, args, nargs, NULL);
        }
    }
    #if PY_VERSION_HEX >= 0x030700A1
    if (!kwargs && __Pyx_IS_TYPE(func, &PyMethodDescr_Type)) {
        return _PyMethodDescr_FastCallKeywords(func, args, nargs, NULL);
    }
    #endif
    #endif
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCallDict(func, args, nargs, kwargs);
    }
    #endif
    #endif
    #if CYTHON_VECTORCALL
    #if Py_VERSION_HEX < 0x03090000
    vectorcallfunc f = _PyVectorcall_Function(func);
    #else
    vectorcallfunc f = PyVectorcall_Function(func);
    #endif
    if (f) {
        return f(func, args, (size_t)nargs, kwargs);
    }
    #elif defined(__Pyx_CyFunction_USED) && CYTHON_BACKPORT_VECTORCALL
    if (__Pyx_CyFunction_CheckExact(func)) {
        __pyx_vectorcallfunc f = __Pyx_CyFunction_func_vectorcall(func);
        if (f) return f(func, args, (size_t)nargs, kwargs);
    }
    #endif
    if (nargs == 0) {
        return __Pyx_PyObject_Call(func, __pyx_empty_tuple, kwargs);
    }
    return __Pyx_PyObject_FastCall_fallback(func, args, (size_t)nargs, kwargs);
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

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level) {
    PyObject *module = 0;
    PyObject *empty_dict = 0;
    PyObject *empty_list = 0;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_import;
    py_import = __Pyx_PyObject_GetAttrStr(__pyx_b, __pyx_n_s_import);
    if (unlikely(!py_import))
        goto bad;
    if (!from_list) {
        empty_list = PyList_New(0);
        if (unlikely(!empty_list))
            goto bad;
        from_list = empty_list;
    }
    #endif
    empty_dict = PyDict_New();
    if (unlikely(!empty_dict))
        goto bad;
    {
        #if PY_MAJOR_VERSION >= 3
        if (level == -1) {
            if ((1) && (strchr(__Pyx_MODULE_NAME, '.'))) {
                module = PyImport_ImportModuleLevelObject(
                    name, __pyx_d, empty_dict, from_list, 1);
                if (unlikely(!module)) {
                    if (unlikely(!PyErr_ExceptionMatches(PyExc_ImportError)))
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
            if (unlikely(!py_level))
                goto bad;
            module = PyObject_CallFunctionObjArgs(py_import,
                name, __pyx_d, empty_dict, from_list, py_level, (PyObject *)NULL);
            Py_DECREF(py_level);
            #else
            module = PyImport_ImportModuleLevelObject(
                name, __pyx_d, empty_dict, from_list, level);
            #endif
        }
    }
bad:
    Py_XDECREF(empty_dict);
    Py_XDECREF(empty_list);
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_import);
    #endif
    return module;
}

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name) {
    PyObject* value = __Pyx_PyObject_GetAttrStr(module, name);
    if (unlikely(!value) && PyErr_ExceptionMatches(PyExc_AttributeError)) {
        const char* module_name_str = 0;
        PyObject* module_name = 0;
        PyObject* module_dot = 0;
        PyObject* full_name = 0;
        PyErr_Clear();
        module_name_str = PyModule_GetName(module);
        if (unlikely(!module_name_str)) { goto modbad; }
        module_name = PyUnicode_FromString(module_name_str);
        if (unlikely(!module_name)) { goto modbad; }
        module_dot = PyUnicode_Concat(module_name, __pyx_kp_u_);
        if (unlikely(!module_dot)) { goto modbad; }
        full_name = PyUnicode_Concat(module_dot, name);
        if (unlikely(!full_name)) { goto modbad; }
        #if PY_VERSION_HEX < 0x030700A1 || (CYTHON_COMPILING_IN_PYPY && PYPY_VERSION_NUM  < 0x07030400)
        {
            PyObject *modules = PyImport_GetModuleDict();
            if (unlikely(!modules))
                goto modbad;
            value = PyObject_GetItem(modules, full_name);
        }
        #else
        value = PyImport_GetModule(full_name);
        #endif
      modbad:
        Py_XDECREF(full_name);
        Py_XDECREF(module_dot);
        Py_XDECREF(module_name);
    }
    if (unlikely(!value)) {
        PyErr_Format(PyExc_ImportError,
        #if PY_MAJOR_VERSION < 3
            "cannot import name %.230s", PyString_AS_STRING(name));
        #else
            "cannot import name %S", name);
        #endif
    }
    return value;
}

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(PyObject* obj,
        Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** _py_start, PyObject** _py_stop, PyObject** _py_slice,
        int has_cstart, int has_cstop, int wraparound) {
    __Pyx_TypeName obj_type_name;
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
#else
    CYTHON_UNUSED_VAR(wraparound);
#endif
    mp = Py_TYPE(obj)->tp_as_mapping;
    if (likely(mp && mp->mp_subscript))
#else
    CYTHON_UNUSED_VAR(wraparound);
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
    obj_type_name = __Pyx_PyType_GetName(Py_TYPE(obj));
    PyErr_Format(PyExc_TypeError,
        "'" __Pyx_FMT_TYPENAME "' object is unsliceable", obj_type_name);
    __Pyx_DECREF_TypeName(obj_type_name);
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

 
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx__ImportDottedModule_Error(PyObject *name, PyObject *parts_tuple, Py_ssize_t count) {
    PyObject *partial_name = NULL, *slice = NULL, *sep = NULL;
    if (unlikely(PyErr_Occurred())) {
        PyErr_Clear();
    }
    if (likely(PyTuple_GET_SIZE(parts_tuple) == count)) {
        partial_name = name;
    } else {
        slice = PySequence_GetSlice(parts_tuple, 0, count);
        if (unlikely(!slice))
            goto bad;
        sep = PyUnicode_FromStringAndSize(".", 1);
        if (unlikely(!sep))
            goto bad;
        partial_name = PyUnicode_Join(sep, slice);
    }
    PyErr_Format(
#if PY_MAJOR_VERSION < 3
        PyExc_ImportError,
        "No module named '%s'", PyString_AS_STRING(partial_name));
#else
#if PY_VERSION_HEX >= 0x030600B1
        PyExc_ModuleNotFoundError,
#else
        PyExc_ImportError,
#endif
        "No module named '%U'", partial_name);
#endif
bad:
    Py_XDECREF(sep);
    Py_XDECREF(slice);
    Py_XDECREF(partial_name);
    return NULL;
}
#endif
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx__ImportDottedModule_Lookup(PyObject *name) {
    PyObject *imported_module;
#if PY_VERSION_HEX < 0x030700A1 || (CYTHON_COMPILING_IN_PYPY && PYPY_VERSION_NUM  < 0x07030400)
    PyObject *modules = PyImport_GetModuleDict();
    if (unlikely(!modules))
        return NULL;
    imported_module = __Pyx_PyDict_GetItemStr(modules, name);
    Py_XINCREF(imported_module);
#else
    imported_module = PyImport_GetModule(name);
#endif
    return imported_module;
}
#endif
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple) {
    Py_ssize_t i, nparts;
    nparts = PyTuple_GET_SIZE(parts_tuple);
    for (i=1; i < nparts && module; i++) {
        PyObject *part, *submodule;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        part = PyTuple_GET_ITEM(parts_tuple, i);
#else
        part = PySequence_ITEM(parts_tuple, i);
#endif
        submodule = __Pyx_PyObject_GetAttrStrNoError(module, part);
#if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
        Py_DECREF(part);
#endif
        Py_DECREF(module);
        module = submodule;
    }
    if (unlikely(!module)) {
        return __Pyx__ImportDottedModule_Error(name, parts_tuple, i);
    }
    return module;
}
#endif
static PyObject *__Pyx__ImportDottedModule(PyObject *name, PyObject *parts_tuple) {
#if PY_MAJOR_VERSION < 3
    PyObject *module, *from_list, *star = __pyx_n_s__7;
    CYTHON_UNUSED_VAR(parts_tuple);
    from_list = PyList_New(1);
    if (unlikely(!from_list))
        return NULL;
    Py_INCREF(star);
    PyList_SET_ITEM(from_list, 0, star);
    module = __Pyx_Import(name, from_list, 0);
    Py_DECREF(from_list);
    return module;
#else
    PyObject *imported_module;
    PyObject *module = __Pyx_Import(name, NULL, 0);
    if (!parts_tuple || unlikely(!module))
        return module;
    imported_module = __Pyx__ImportDottedModule_Lookup(name);
    if (likely(imported_module)) {
        Py_DECREF(module);
        return imported_module;
    }
    PyErr_Clear();
    return __Pyx_ImportDottedModule_WalkParts(module, name, parts_tuple);
#endif
}
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple) {
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030400B1
    PyObject *module = __Pyx__ImportDottedModule_Lookup(name);
    if (likely(module)) {
        PyObject *spec = __Pyx_PyObject_GetAttrStrNoError(module, __pyx_n_s_spec);
        if (likely(spec)) {
            PyObject *unsafe = __Pyx_PyObject_GetAttrStrNoError(spec, __pyx_n_s_initializing);
            if (likely(!unsafe || !__Pyx_PyObject_IsTrue(unsafe))) {
                Py_DECREF(spec);
                spec = NULL;
            }
            Py_XDECREF(unsafe);
        }
        if (likely(!spec)) {
            PyErr_Clear();
            return module;
        }
        Py_DECREF(spec);
        Py_DECREF(module);
    } else if (PyErr_Occurred()) {
        PyErr_Clear();
    }
#endif
    return __Pyx__ImportDottedModule(name, parts_tuple);
}

 
static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j) {
    PyObject *r;
    if (unlikely(!j)) return NULL;
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
        PyMappingMethods *mm = Py_TYPE(o)->tp_as_mapping;
        PySequenceMethods *sm = Py_TYPE(o)->tp_as_sequence;
        if (mm && mm->mp_subscript) {
            PyObject *r, *key = PyInt_FromSsize_t(i);
            if (unlikely(!key)) return NULL;
            r = mm->mp_subscript(o, key);
            Py_DECREF(key);
            return r;
        }
        if (likely(sm && sm->sq_item)) {
            if (wraparound && unlikely(i < 0) && likely(sm->sq_length)) {
                Py_ssize_t l = sm->sq_length(o);
                if (likely(l >= 0)) {
                    i += l;
                } else {
                    if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                        return NULL;
                    PyErr_Clear();
                }
            }
            return sm->sq_item(o, i);
        }
    }
#else
    if (is_list || PySequence_Check(o)) {
        return PySequence_GetItem(o, i);
    }
#endif
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *args[2] = {NULL, arg};
    return __Pyx_PyObject_FastCall(func, args+1, 1 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

 
#if CYTHON_USE_TYPE_SLOTS
static PyObject *__Pyx_PyObject_GetIndex(PyObject *obj, PyObject *index) {
    PyObject *runerr = NULL;
    Py_ssize_t key_value;
    key_value = __Pyx_PyIndex_AsSsize_t(index);
    if (likely(key_value != -1 || !(runerr = PyErr_Occurred()))) {
        return __Pyx_GetItemInt_Fast(obj, key_value, 0, 1, 1);
    }
    if (PyErr_GivenExceptionMatches(runerr, PyExc_OverflowError)) {
        __Pyx_TypeName index_type_name = __Pyx_PyType_GetName(Py_TYPE(index));
        PyErr_Clear();
        PyErr_Format(PyExc_IndexError,
            "cannot fit '" __Pyx_FMT_TYPENAME "' into an index-sized integer", index_type_name);
        __Pyx_DECREF_TypeName(index_type_name);
    }
    return NULL;
}
static PyObject *__Pyx_PyObject_GetItem_Slow(PyObject *obj, PyObject *key) {
    __Pyx_TypeName obj_type_name;
    if (likely(PyType_Check(obj))) {
        PyObject *meth = __Pyx_PyObject_GetAttrStrNoError(obj, __pyx_n_s_class_getitem);
        if (meth) {
            PyObject *result = __Pyx_PyObject_CallOneArg(meth, key);
            Py_DECREF(meth);
            return result;
        }
    }
    obj_type_name = __Pyx_PyType_GetName(Py_TYPE(obj));
    PyErr_Format(PyExc_TypeError,
        "'" __Pyx_FMT_TYPENAME "' object is not subscriptable", obj_type_name);
    __Pyx_DECREF_TypeName(obj_type_name);
    return NULL;
}
static PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject *key) {
    PyTypeObject *tp = Py_TYPE(obj);
    PyMappingMethods *mm = tp->tp_as_mapping;
    PySequenceMethods *sm = tp->tp_as_sequence;
    if (likely(mm && mm->mp_subscript)) {
        return mm->mp_subscript(obj, key);
    }
    if (likely(sm && sm->sq_item)) {
        return __Pyx_PyObject_GetIndex(obj, key);
    }
    return __Pyx_PyObject_GetItem_Slow(obj, key);
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
    Py_ssize_t i, nbases;
#if CYTHON_ASSUME_SAFE_MACROS
    nbases = PyTuple_GET_SIZE(bases);
#else
    nbases = PyTuple_Size(bases);
    if (nbases < 0) return NULL;
#endif
    for (i=0; i < nbases; i++) {
        PyTypeObject *tmptype;
#if CYTHON_ASSUME_SAFE_MACROS
        PyObject *tmp = PyTuple_GET_ITEM(bases, i);
#else
        PyObject *tmp = PyTuple_GetItem(bases, i);
        if (!tmp) return NULL;
#endif
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject *args[3] = {NULL, arg1, arg2};
    return __Pyx_PyObject_FastCall(function, args+1, 2 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

 
#if CYTHON_USE_PYTYPE_LOOKUP && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx__PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name, int with_error) {
    PyObject *res;
    PyTypeObject *tp = Py_TYPE(obj);
#if PY_MAJOR_VERSION < 3
    if (unlikely(PyInstance_Check(obj)))
        return with_error ? __Pyx_PyObject_GetAttrStr(obj, attr_name) : __Pyx_PyObject_GetAttrStrNoError(obj, attr_name);
#endif
    res = _PyType_Lookup(tp, attr_name);
    if (likely(res)) {
        descrgetfunc f = Py_TYPE(res)->tp_descr_get;
        if (!f) {
            Py_INCREF(res);
        } else {
            res = f(res, obj, (PyObject *)tp);
        }
    } else if (with_error) {
        PyErr_SetObject(PyExc_AttributeError, attr_name);
    }
    return res;
}
#endif

 
static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name,
                                           PyObject *qualname, PyObject *mkw, PyObject *modname, PyObject *doc) {
    PyObject *ns;
    if (metaclass) {
        PyObject *prep = __Pyx_PyObject_GetAttrStrNoError(metaclass, __pyx_n_s_prepare);
        if (prep) {
            PyObject *pargs[3] = {NULL, name, bases};
            ns = __Pyx_PyObject_FastCallDict(prep, pargs+1, 2 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET, mkw);
            Py_DECREF(prep);
        } else {
            if (unlikely(PyErr_Occurred()))
                return NULL;
            ns = PyDict_New();
        }
    } else {
        ns = PyDict_New();
    }
    if (unlikely(!ns))
        return NULL;
    if (unlikely(PyObject_SetItem(ns, __pyx_n_s_module, modname) < 0)) goto bad;
#if PY_VERSION_HEX >= 0x03030000
    if (unlikely(PyObject_SetItem(ns, __pyx_n_s_qualname, qualname) < 0)) goto bad;
#else
    CYTHON_MAYBE_UNUSED_VAR(qualname);
#endif
    if (unlikely(doc && PyObject_SetItem(ns, __pyx_n_s_doc, doc) < 0)) goto bad;
    return ns;
bad:
    Py_DECREF(ns);
    return NULL;
}
#if PY_VERSION_HEX < 0x030600A4 && CYTHON_PEP487_INIT_SUBCLASS
static int __Pyx_SetNamesPEP487(PyObject *type_obj) {
    PyTypeObject *type = (PyTypeObject*) type_obj;
    PyObject *names_to_set, *key, *value, *set_name, *tmp;
    Py_ssize_t i = 0;
#if CYTHON_USE_TYPE_SLOTS
    names_to_set = PyDict_Copy(type->tp_dict);
#else
    {
        PyObject *d = PyObject_GetAttr(type_obj, __pyx_n_s_dict);
        names_to_set = NULL;
        if (likely(d)) {
            PyObject *names_to_set = PyDict_New();
            int ret = likely(names_to_set) ? PyDict_Update(names_to_set, d) : -1;
            Py_DECREF(d);
            if (unlikely(ret < 0))
                Py_CLEAR(names_to_set);
        }
    }
#endif
    if (unlikely(names_to_set == NULL))
        goto bad;
    while (PyDict_Next(names_to_set, &i, &key, &value)) {
        set_name = __Pyx_PyObject_LookupSpecialNoError(value, __pyx_n_s_set_name);
        if (unlikely(set_name != NULL)) {
            tmp = __Pyx_PyObject_Call2Args(set_name, type_obj, key);
            Py_DECREF(set_name);
            if (unlikely(tmp == NULL)) {
                __Pyx_TypeName value_type_name =
                    __Pyx_PyType_GetName(Py_TYPE(value));
                __Pyx_TypeName type_name = __Pyx_PyType_GetName(type);
                PyErr_Format(PyExc_RuntimeError,
#if PY_MAJOR_VERSION >= 3
                    "Error calling __set_name__ on '" __Pyx_FMT_TYPENAME "' instance %R " "in '" __Pyx_FMT_TYPENAME "'",
                    value_type_name, key, type_name);
#else
                    "Error calling __set_name__ on '" __Pyx_FMT_TYPENAME "' instance %.100s in '" __Pyx_FMT_TYPENAME "'",
                    value_type_name,
                    PyString_Check(key) ? PyString_AS_STRING(key) : "?",
                    type_name);
#endif
                goto bad;
            } else {
                Py_DECREF(tmp);
            }
        }
        else if (unlikely(PyErr_Occurred())) {
            goto bad;
        }
    }
    Py_DECREF(names_to_set);
    return 0;
bad:
    Py_XDECREF(names_to_set);
    return -1;
}
static PyObject *__Pyx_InitSubclassPEP487(PyObject *type_obj, PyObject *mkw) {
#if CYTHON_USE_TYPE_SLOTS && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    PyTypeObject *type = (PyTypeObject*) type_obj;
    PyObject *mro = type->tp_mro;
    Py_ssize_t i, nbases;
    if (unlikely(!mro)) goto done;
    (void) &__Pyx_GetBuiltinName;
    Py_INCREF(mro);
    nbases = PyTuple_GET_SIZE(mro);
    assert(PyTuple_GET_ITEM(mro, 0) == type_obj);
    for (i = 1; i < nbases-1; i++) {
        PyObject *base, *dict, *meth;
        base = PyTuple_GET_ITEM(mro, i);
        dict = ((PyTypeObject *)base)->tp_dict;
        meth = __Pyx_PyDict_GetItemStrWithError(dict, __pyx_n_s_init_subclass);
        if (unlikely(meth)) {
            descrgetfunc f = Py_TYPE(meth)->tp_descr_get;
            PyObject *res;
            Py_INCREF(meth);
            if (likely(f)) {
                res = f(meth, NULL, type_obj);
                Py_DECREF(meth);
                if (unlikely(!res)) goto bad;
                meth = res;
            }
            res = __Pyx_PyObject_FastCallDict(meth, NULL, 0, mkw);
            Py_DECREF(meth);
            if (unlikely(!res)) goto bad;
            Py_DECREF(res);
            goto done;
        } else if (unlikely(PyErr_Occurred())) {
            goto bad;
        }
    }
done:
    Py_XDECREF(mro);
    return type_obj;
bad:
    Py_XDECREF(mro);
    Py_DECREF(type_obj);
    return NULL;
#else
    PyObject *super_type, *super, *func, *res;
#if CYTHON_COMPILING_IN_PYPY && !defined(PySuper_Type)
    super_type = __Pyx_GetBuiltinName(__pyx_n_s_super);
#else
    super_type = (PyObject*) &PySuper_Type;
    (void) &__Pyx_GetBuiltinName;
#endif
    super = likely(super_type) ? __Pyx_PyObject_Call2Args(super_type, type_obj, type_obj) : NULL;
#if CYTHON_COMPILING_IN_PYPY && !defined(PySuper_Type)
    Py_XDECREF(super_type);
#endif
    if (unlikely(!super)) {
        Py_CLEAR(type_obj);
        goto done;
    }
    func = __Pyx_PyObject_GetAttrStrNoError(super, __pyx_n_s_init_subclass);
    Py_DECREF(super);
    if (likely(!func)) {
        if (unlikely(PyErr_Occurred()))
            Py_CLEAR(type_obj);
        goto done;
    }
    res = __Pyx_PyObject_FastCallDict(func, NULL, 0, mkw);
    Py_DECREF(func);
    if (unlikely(!res))
        Py_CLEAR(type_obj);
    Py_XDECREF(res);
done:
    return type_obj;
#endif
}
#endif
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases,
                                      PyObject *dict, PyObject *mkw,
                                      int calculate_metaclass, int allow_py2_metaclass) {
    PyObject *result;
    PyObject *owned_metaclass = NULL;
    PyObject *margs[4] = {NULL, name, bases, dict};
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
    result = __Pyx_PyObject_FastCallDict(metaclass, margs+1, 3 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET,
#if PY_VERSION_HEX < 0x030600A4
        (metaclass == (PyObject*)&PyType_Type) ? NULL : mkw
#else
        mkw
#endif
    );
    Py_XDECREF(owned_metaclass);
#if PY_VERSION_HEX < 0x030600A4 && CYTHON_PEP487_INIT_SUBCLASS
    if (likely(result) && likely(PyType_Check(result))) {
        if (unlikely(__Pyx_SetNamesPEP487(result) < 0)) {
            Py_CLEAR(result);
        } else {
            result = __Pyx_InitSubclassPEP487(result, mkw);
        }
    }
#else
    (void) &__Pyx_GetBuiltinName;
#endif
    return result;
}

 
#if CYTHON_USE_TYPE_SPECS
static int __Pyx_fix_up_extension_type_from_spec(PyType_Spec *spec, PyTypeObject *type) {
#if PY_VERSION_HEX > 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    CYTHON_UNUSED_VAR(spec);
    CYTHON_UNUSED_VAR(type);
#else
    const PyType_Slot *slot = spec->slots;
    while (slot && slot->slot && slot->slot != Py_tp_members)
        slot++;
    if (slot && slot->slot == Py_tp_members) {
        int changed = 0;
#if !(PY_VERSION_HEX <= 0x030900b1 && CYTHON_COMPILING_IN_CPYTHON)
        const
#endif
            PyMemberDef *memb = (PyMemberDef*) slot->pfunc;
        while (memb && memb->name) {
            if (memb->name[0] == '_' && memb->name[1] == '_') {
#if PY_VERSION_HEX < 0x030900b1
                if (strcmp(memb->name, "__weaklistoffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
                    type->tp_weaklistoffset = memb->offset;
                    changed = 1;
                }
                else if (strcmp(memb->name, "__dictoffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
                    type->tp_dictoffset = memb->offset;
                    changed = 1;
                }
#if CYTHON_METH_FASTCALL
                else if (strcmp(memb->name, "__vectorcalloffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
#if PY_VERSION_HEX >= 0x030800b4
                    type->tp_vectorcall_offset = memb->offset;
#else
                    type->tp_print = (printfunc) memb->offset;
#endif
                    changed = 1;
                }
#endif
#else
                if ((0));
#endif
#if PY_VERSION_HEX <= 0x030900b1 && CYTHON_COMPILING_IN_CPYTHON
                else if (strcmp(memb->name, "__module__") == 0) {
                    PyObject *descr;
                    assert(memb->type == T_OBJECT);
                    assert(memb->flags == 0 || memb->flags == READONLY);
                    descr = PyDescr_NewMember(type, memb);
                    if (unlikely(!descr))
                        return -1;
                    if (unlikely(PyDict_SetItem(type->tp_dict, PyDescr_NAME(descr), descr) < 0)) {
                        Py_DECREF(descr);
                        return -1;
                    }
                    Py_DECREF(descr);
                    changed = 1;
                }
#endif
            }
            memb++;
        }
        if (changed)
            PyType_Modified(type);
    }
#endif
    return 0;
}
#endif

 
static PyObject *__Pyx_FetchSharedCythonABIModule(void) {
    PyObject *abi_module = PyImport_AddModule((char*) __PYX_ABI_MODULE_NAME);
    if (unlikely(!abi_module)) return NULL;
    Py_INCREF(abi_module);
    return abi_module;
}

 
static int __Pyx_VerifyCachedType(PyObject *cached_type,
                               const char *name,
                               Py_ssize_t basicsize,
                               Py_ssize_t expected_basicsize) {
    if (!PyType_Check(cached_type)) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s is not a type object", name);
        return -1;
    }
    if (basicsize != expected_basicsize) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s has the wrong size, try recompiling",
            name);
        return -1;
    }
    return 0;
}
#if !CYTHON_USE_TYPE_SPECS
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type) {
    PyObject* abi_module;
    const char* object_name;
    PyTypeObject *cached_type = NULL;
    abi_module = __Pyx_FetchSharedCythonABIModule();
    if (!abi_module) return NULL;
    object_name = strrchr(type->tp_name, '.');
    object_name = object_name ? object_name+1 : type->tp_name;
    cached_type = (PyTypeObject*) PyObject_GetAttrString(abi_module, object_name);
    if (cached_type) {
        if (__Pyx_VerifyCachedType(
              (PyObject *)cached_type,
              object_name,
              cached_type->tp_basicsize,
              type->tp_basicsize) < 0) {
            goto bad;
        }
        goto done;
    }
    if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
    PyErr_Clear();
    if (PyType_Ready(type) < 0) goto bad;
    if (PyObject_SetAttrString(abi_module, object_name, (PyObject *)type) < 0)
        goto bad;
    Py_INCREF(type);
    cached_type = type;
done:
    Py_DECREF(abi_module);
    return cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}
#else
static PyTypeObject *__Pyx_FetchCommonTypeFromSpec(PyObject *module, PyType_Spec *spec, PyObject *bases) {
    PyObject *abi_module, *cached_type = NULL;
    const char* object_name = strrchr(spec->name, '.');
    object_name = object_name ? object_name+1 : spec->name;
    abi_module = __Pyx_FetchSharedCythonABIModule();
    if (!abi_module) return NULL;
    cached_type = PyObject_GetAttrString(abi_module, object_name);
    if (cached_type) {
        Py_ssize_t basicsize;
#if CYTHON_COMPILING_IN_LIMITED_API
        PyObject *py_basicsize;
        py_basicsize = PyObject_GetAttrString(cached_type, "__basicsize__");
        if (unlikely(!py_basicsize)) goto bad;
        basicsize = PyLong_AsSsize_t(py_basicsize);
        Py_DECREF(py_basicsize);
        py_basicsize = 0;
        if (unlikely(basicsize == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
#else
        basicsize = likely(PyType_Check(cached_type)) ? ((PyTypeObject*) cached_type)->tp_basicsize : -1;
#endif
        if (__Pyx_VerifyCachedType(
              cached_type,
              object_name,
              basicsize,
              spec->basicsize) < 0) {
            goto bad;
        }
        goto done;
    }
    if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
    PyErr_Clear();
    CYTHON_UNUSED_VAR(module);
    cached_type = __Pyx_PyType_FromModuleAndSpec(abi_module, spec, bases);
    if (unlikely(!cached_type)) goto bad;
    if (unlikely(__Pyx_fix_up_extension_type_from_spec(spec, (PyTypeObject *) cached_type) < 0)) goto bad;
    if (PyObject_SetAttrString(abi_module, object_name, cached_type) < 0) goto bad;
done:
    Py_DECREF(abi_module);
    assert(cached_type == NULL || PyType_Check(cached_type));
    return (PyTypeObject *) cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}
#endif

 
#if CYTHON_METH_FASTCALL
static PyObject *__Pyx_PyVectorcall_FastCallDict_kw(PyObject *func, __pyx_vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw)
{
    PyObject *res = NULL;
    PyObject *kwnames;
    PyObject **newargs;
    PyObject **kwvalues;
    Py_ssize_t i, pos;
    size_t j;
    PyObject *key, *value;
    unsigned long keys_are_strings;
    Py_ssize_t nkw = PyDict_GET_SIZE(kw);
    newargs = (PyObject **)PyMem_Malloc((nargs + (size_t)nkw) * sizeof(args[0]));
    if (unlikely(newargs == NULL)) {
        PyErr_NoMemory();
        return NULL;
    }
    for (j = 0; j < nargs; j++) newargs[j] = args[j];
    kwnames = PyTuple_New(nkw);
    if (unlikely(kwnames == NULL)) {
        PyMem_Free(newargs);
        return NULL;
    }
    kwvalues = newargs + nargs;
    pos = i = 0;
    keys_are_strings = Py_TPFLAGS_UNICODE_SUBCLASS;
    while (PyDict_Next(kw, &pos, &key, &value)) {
        keys_are_strings &= Py_TYPE(key)->tp_flags;
        Py_INCREF(key);
        Py_INCREF(value);
        PyTuple_SET_ITEM(kwnames, i, key);
        kwvalues[i] = value;
        i++;
    }
    if (unlikely(!keys_are_strings)) {
        PyErr_SetString(PyExc_TypeError, "keywords must be strings");
        goto cleanup;
    }
    res = vc(func, newargs, nargs, kwnames);
cleanup:
    Py_DECREF(kwnames);
    for (i = 0; i < nkw; i++)
        Py_DECREF(kwvalues[i]);
    PyMem_Free(newargs);
    return res;
}
static CYTHON_INLINE PyObject *__Pyx_PyVectorcall_FastCallDict(PyObject *func, __pyx_vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw)
{
    if (likely(kw == NULL) || PyDict_GET_SIZE(kw) == 0) {
        return vc(func, args, nargs, NULL);
    }
    return __Pyx_PyVectorcall_FastCallDict_kw(func, vc, args, nargs, kw);
}
#endif

 
static CYTHON_INLINE void __Pyx__CyFunction_SetClassObj(__pyx_CyFunctionObject* f, PyObject* classobj) {
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    __Pyx_Py_XDECREF_SET(
        __Pyx_CyFunction_GetClassObj(f),
            ((classobj) ? __Pyx_NewRef(classobj) : NULL));
#else
    __Pyx_Py_XDECREF_SET(
        ((PyCMethodObject *) (f))->mm_class,
        (PyTypeObject*)((classobj) ? __Pyx_NewRef(classobj) : NULL));
#endif
}
static PyObject *
__Pyx_CyFunction_get_doc(__pyx_CyFunctionObject *op, void *closure)
{
    CYTHON_UNUSED_VAR(closure);
    if (unlikely(op->func_doc == NULL)) {
#if CYTHON_COMPILING_IN_LIMITED_API
        op->func_doc = PyObject_GetAttrString(op->func, "__doc__");
        if (unlikely(!op->func_doc)) return NULL;
#else
        if (((PyCFunctionObject*)op)->m_ml->ml_doc) {
#if PY_MAJOR_VERSION >= 3
            op->func_doc = PyUnicode_FromString(((PyCFunctionObject*)op)->m_ml->ml_doc);
#else
            op->func_doc = PyString_FromString(((PyCFunctionObject*)op)->m_ml->ml_doc);
#endif
            if (unlikely(op->func_doc == NULL))
                return NULL;
        } else {
            Py_INCREF(Py_None);
            return Py_None;
        }
#endif
    }
    Py_INCREF(op->func_doc);
    return op->func_doc;
}
static int
__Pyx_CyFunction_set_doc(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (value == NULL) {
        value = Py_None;
    }
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_doc, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_name(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (unlikely(op->func_name == NULL)) {
#if CYTHON_COMPILING_IN_LIMITED_API
        op->func_name = PyObject_GetAttrString(op->func, "__name__");
#elif PY_MAJOR_VERSION >= 3
        op->func_name = PyUnicode_InternFromString(((PyCFunctionObject*)op)->m_ml->ml_name);
#else
        op->func_name = PyString_InternFromString(((PyCFunctionObject*)op)->m_ml->ml_name);
#endif
        if (unlikely(op->func_name == NULL))
            return NULL;
    }
    Py_INCREF(op->func_name);
    return op->func_name;
}
static int
__Pyx_CyFunction_set_name(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
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
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_name, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_qualname(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(op->func_qualname);
    return op->func_qualname;
}
static int
__Pyx_CyFunction_set_qualname(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
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
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_qualname, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_dict(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (unlikely(op->func_dict == NULL)) {
        op->func_dict = PyDict_New();
        if (unlikely(op->func_dict == NULL))
            return NULL;
    }
    Py_INCREF(op->func_dict);
    return op->func_dict;
}
static int
__Pyx_CyFunction_set_dict(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
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
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_dict, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_globals(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(op->func_globals);
    return op->func_globals;
}
static PyObject *
__Pyx_CyFunction_get_closure(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(op);
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(Py_None);
    return Py_None;
}
static PyObject *
__Pyx_CyFunction_get_code(__pyx_CyFunctionObject *op, void *context)
{
    PyObject* result = (op->func_code) ? op->func_code : Py_None;
    CYTHON_UNUSED_VAR(context);
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
    op->defaults_tuple = __Pyx_PySequence_ITEM(res, 0);
    if (unlikely(!op->defaults_tuple)) result = -1;
    else {
        op->defaults_kwdict = __Pyx_PySequence_ITEM(res, 1);
        if (unlikely(!op->defaults_kwdict)) result = -1;
    }
    #endif
    Py_DECREF(res);
    return result;
}
static int
__Pyx_CyFunction_set_defaults(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value) {
        value = Py_None;
    } else if (unlikely(value != Py_None && !PyTuple_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
                        "__defaults__ must be set to a tuple object");
        return -1;
    }
    PyErr_WarnEx(PyExc_RuntimeWarning, "changes to cyfunction.__defaults__ will not "
                 "currently affect the values used in function calls", 1);
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->defaults_tuple, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_defaults(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->defaults_tuple;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (unlikely(__Pyx_CyFunction_init_defaults(op) < 0)) return NULL;
            result = op->defaults_tuple;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_kwdefaults(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value) {
        value = Py_None;
    } else if (unlikely(value != Py_None && !PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
                        "__kwdefaults__ must be set to a dict object");
        return -1;
    }
    PyErr_WarnEx(PyExc_RuntimeWarning, "changes to cyfunction.__kwdefaults__ will not "
                 "currently affect the values used in function calls", 1);
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->defaults_kwdict, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_kwdefaults(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->defaults_kwdict;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (unlikely(__Pyx_CyFunction_init_defaults(op) < 0)) return NULL;
            result = op->defaults_kwdict;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_annotations(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value || value == Py_None) {
        value = NULL;
    } else if (unlikely(!PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
                        "__annotations__ must be set to a dict object");
        return -1;
    }
    Py_XINCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_annotations, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_annotations(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->func_annotations;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!result)) {
        result = PyDict_New();
        if (unlikely(!result)) return NULL;
        op->func_annotations = result;
    }
    Py_INCREF(result);
    return result;
}
static PyObject *
__Pyx_CyFunction_get_is_coroutine(__pyx_CyFunctionObject *op, void *context) {
    int is_coroutine;
    CYTHON_UNUSED_VAR(context);
    if (op->func_is_coroutine) {
        return __Pyx_NewRef(op->func_is_coroutine);
    }
    is_coroutine = op->flags & __Pyx_CYFUNCTION_COROUTINE;
#if PY_VERSION_HEX >= 0x03050000
    if (is_coroutine) {
        PyObject *module, *fromlist, *marker = __pyx_n_s_is_coroutine;
        fromlist = PyList_New(1);
        if (unlikely(!fromlist)) return NULL;
        Py_INCREF(marker);
#if CYTHON_ASSUME_SAFE_MACROS
        PyList_SET_ITEM(fromlist, 0, marker);
#else
        if (unlikely(PyList_SetItem(fromlist, 0, marker) < 0)) {
            Py_DECREF(marker);
            Py_DECREF(fromlist);
            return NULL;
        }
#endif
        module = PyImport_ImportModuleLevelObject(__pyx_n_s_asyncio_coroutines, NULL, NULL, fromlist, 0);
        Py_DECREF(fromlist);
        if (unlikely(!module)) goto ignore;
        op->func_is_coroutine = __Pyx_PyObject_GetAttrStr(module, marker);
        Py_DECREF(module);
        if (likely(op->func_is_coroutine)) {
            return __Pyx_NewRef(op->func_is_coroutine);
        }
ignore:
        PyErr_Clear();
    }
#endif
    op->func_is_coroutine = __Pyx_PyBool_FromLong(is_coroutine);
    return __Pyx_NewRef(op->func_is_coroutine);
}
#if CYTHON_COMPILING_IN_LIMITED_API
static PyObject *
__Pyx_CyFunction_get_module(__pyx_CyFunctionObject *op, void *context) {
    CYTHON_UNUSED_VAR(context);
    return PyObject_GetAttrString(op->func, "__module__");
}
static int
__Pyx_CyFunction_set_module(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    return PyObject_SetAttrString(op->func, "__module__", value);
}
#endif
static PyGetSetDef __pyx_CyFunction_getsets[] = {
    {(char *) "func_doc", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "__doc__",  (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "func_name", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__name__", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__qualname__", (getter)__Pyx_CyFunction_get_qualname, (setter)__Pyx_CyFunction_set_qualname, 0, 0},
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
    {(char *) "_is_coroutine", (getter)__Pyx_CyFunction_get_is_coroutine, 0, 0, 0},
#if CYTHON_COMPILING_IN_LIMITED_API
    {"__module__", (getter)__Pyx_CyFunction_get_module, (setter)__Pyx_CyFunction_set_module, 0, 0},
#endif
    {0, 0, 0, 0, 0}
};
static PyMemberDef __pyx_CyFunction_members[] = {
#if !CYTHON_COMPILING_IN_LIMITED_API
    {(char *) "__module__", T_OBJECT, offsetof(PyCFunctionObject, m_module), 0, 0},
#endif
#if CYTHON_USE_TYPE_SPECS
    {(char *) "__dictoffset__", T_PYSSIZET, offsetof(__pyx_CyFunctionObject, func_dict), READONLY, 0},
#if CYTHON_METH_FASTCALL
#if CYTHON_BACKPORT_VECTORCALL
    {(char *) "__vectorcalloffset__", T_PYSSIZET, offsetof(__pyx_CyFunctionObject, func_vectorcall), READONLY, 0},
#else
#if !CYTHON_COMPILING_IN_LIMITED_API
    {(char *) "__vectorcalloffset__", T_PYSSIZET, offsetof(PyCFunctionObject, vectorcall), READONLY, 0},
#endif
#endif
#endif
#if PY_VERSION_HEX < 0x030500A0 || CYTHON_COMPILING_IN_LIMITED_API
    {(char *) "__weaklistoffset__", T_PYSSIZET, offsetof(__pyx_CyFunctionObject, func_weakreflist), READONLY, 0},
#else
    {(char *) "__weaklistoffset__", T_PYSSIZET, offsetof(PyCFunctionObject, m_weakreflist), READONLY, 0},
#endif
#endif
    {0, 0, 0,  0, 0}
};
static PyObject *
__Pyx_CyFunction_reduce(__pyx_CyFunctionObject *m, PyObject *args)
{
    CYTHON_UNUSED_VAR(args);
#if PY_MAJOR_VERSION >= 3
    Py_INCREF(m->func_qualname);
    return m->func_qualname;
#else
    return PyString_FromString(((PyCFunctionObject*)m)->m_ml->ml_name);
#endif
}
static PyMethodDef __pyx_CyFunction_methods[] = {
    {"__reduce__", (PyCFunction)__Pyx_CyFunction_reduce, METH_VARARGS, 0},
    {0, 0, 0, 0}
};
#if PY_VERSION_HEX < 0x030500A0 || CYTHON_COMPILING_IN_LIMITED_API
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func_weakreflist)
#else
#define __Pyx_CyFunction_weakreflist(cyfunc) (((PyCFunctionObject*)cyfunc)->m_weakreflist)
#endif
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject *op, PyMethodDef *ml, int flags, PyObject* qualname,
                                       PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
#if !CYTHON_COMPILING_IN_LIMITED_API
    PyCFunctionObject *cf = (PyCFunctionObject*) op;
#endif
    if (unlikely(op == NULL))
        return NULL;
#if CYTHON_COMPILING_IN_LIMITED_API
    op->func = PyCFunction_NewEx(ml, (PyObject*)op, module);
    if (unlikely(!op->func)) return NULL;
#endif
    op->flags = flags;
    __Pyx_CyFunction_weakreflist(op) = NULL;
#if !CYTHON_COMPILING_IN_LIMITED_API
    cf->m_ml = ml;
    cf->m_self = (PyObject *) op;
#endif
    Py_XINCREF(closure);
    op->func_closure = closure;
#if !CYTHON_COMPILING_IN_LIMITED_API
    Py_XINCREF(module);
    cf->m_module = module;
#endif
    op->func_dict = NULL;
    op->func_name = NULL;
    Py_INCREF(qualname);
    op->func_qualname = qualname;
    op->func_doc = NULL;
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    op->func_classobj = NULL;
#else
    ((PyCMethodObject*)op)->mm_class = NULL;
#endif
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
    op->func_is_coroutine = NULL;
#if CYTHON_METH_FASTCALL
    switch (ml->ml_flags & (METH_VARARGS | METH_FASTCALL | METH_NOARGS | METH_O | METH_KEYWORDS | METH_METHOD)) {
    case METH_NOARGS:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_NOARGS;
        break;
    case METH_O:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_O;
        break;
    case METH_METHOD | METH_FASTCALL | METH_KEYWORDS:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD;
        break;
    case METH_FASTCALL | METH_KEYWORDS:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS;
        break;
    case METH_VARARGS | METH_KEYWORDS:
        __Pyx_CyFunction_func_vectorcall(op) = NULL;
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags for CyFunction");
        Py_DECREF(op);
        return NULL;
    }
#endif
    return (PyObject *) op;
}
static int
__Pyx_CyFunction_clear(__pyx_CyFunctionObject *m)
{
    Py_CLEAR(m->func_closure);
#if CYTHON_COMPILING_IN_LIMITED_API
    Py_CLEAR(m->func);
#else
    Py_CLEAR(((PyCFunctionObject*)m)->m_module);
#endif
    Py_CLEAR(m->func_dict);
    Py_CLEAR(m->func_name);
    Py_CLEAR(m->func_qualname);
    Py_CLEAR(m->func_doc);
    Py_CLEAR(m->func_globals);
    Py_CLEAR(m->func_code);
#if !CYTHON_COMPILING_IN_LIMITED_API
#if PY_VERSION_HEX < 0x030900B1
    Py_CLEAR(__Pyx_CyFunction_GetClassObj(m));
#else
    {
        PyObject *cls = (PyObject*) ((PyCMethodObject *) (m))->mm_class;
        ((PyCMethodObject *) (m))->mm_class = NULL;
        Py_XDECREF(cls);
    }
#endif
#endif
    Py_CLEAR(m->defaults_tuple);
    Py_CLEAR(m->defaults_kwdict);
    Py_CLEAR(m->func_annotations);
    Py_CLEAR(m->func_is_coroutine);
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
    __Pyx_PyHeapTypeObject_GC_Del(m);
}
static void __Pyx_CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    PyObject_GC_UnTrack(m);
    __Pyx__CyFunction_dealloc(m);
}
static int __Pyx_CyFunction_traverse(__pyx_CyFunctionObject *m, visitproc visit, void *arg)
{
    Py_VISIT(m->func_closure);
#if CYTHON_COMPILING_IN_LIMITED_API
    Py_VISIT(m->func);
#else
    Py_VISIT(((PyCFunctionObject*)m)->m_module);
#endif
    Py_VISIT(m->func_dict);
    Py_VISIT(m->func_name);
    Py_VISIT(m->func_qualname);
    Py_VISIT(m->func_doc);
    Py_VISIT(m->func_globals);
    Py_VISIT(m->func_code);
#if !CYTHON_COMPILING_IN_LIMITED_API
    Py_VISIT(__Pyx_CyFunction_GetClassObj(m));
#endif
    Py_VISIT(m->defaults_tuple);
    Py_VISIT(m->defaults_kwdict);
    Py_VISIT(m->func_is_coroutine);
    if (m->defaults) {
        PyObject **pydefaults = __Pyx_CyFunction_Defaults(PyObject *, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_VISIT(pydefaults[i]);
    }
    return 0;
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
#if CYTHON_COMPILING_IN_LIMITED_API
    PyObject *f = ((__pyx_CyFunctionObject*)func)->func;
    PyObject *py_name = NULL;
    PyCFunction meth;
    int flags;
    meth = PyCFunction_GetFunction(f);
    if (unlikely(!meth)) return NULL;
    flags = PyCFunction_GetFlags(f);
    if (unlikely(flags < 0)) return NULL;
#else
    PyCFunctionObject* f = (PyCFunctionObject*)func;
    PyCFunction meth = f->m_ml->ml_meth;
    int flags = f->m_ml->ml_flags;
#endif
    Py_ssize_t size;
    switch (flags & (METH_VARARGS | METH_KEYWORDS | METH_NOARGS | METH_O)) {
    case METH_VARARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0))
            return (*meth)(self, arg);
        break;
    case METH_VARARGS | METH_KEYWORDS:
        return (*(PyCFunctionWithKeywords)(void*)meth)(self, arg, kw);
    case METH_NOARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
#if CYTHON_ASSUME_SAFE_MACROS
            size = PyTuple_GET_SIZE(arg);
#else
            size = PyTuple_Size(arg);
            if (unlikely(size < 0)) return NULL;
#endif
            if (likely(size == 0))
                return (*meth)(self, NULL);
#if CYTHON_COMPILING_IN_LIMITED_API
            py_name = __Pyx_CyFunction_get_name((__pyx_CyFunctionObject*)func, NULL);
            if (!py_name) return NULL;
            PyErr_Format(PyExc_TypeError,
                "%.200S() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
                py_name, size);
            Py_DECREF(py_name);
#else
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
#endif
            return NULL;
        }
        break;
    case METH_O:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
#if CYTHON_ASSUME_SAFE_MACROS
            size = PyTuple_GET_SIZE(arg);
#else
            size = PyTuple_Size(arg);
            if (unlikely(size < 0)) return NULL;
#endif
            if (likely(size == 1)) {
                PyObject *result, *arg0;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                arg0 = PyTuple_GET_ITEM(arg, 0);
                #else
                arg0 = __Pyx_PySequence_ITEM(arg, 0); if (unlikely(!arg0)) return NULL;
                #endif
                result = (*meth)(self, arg0);
                #if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
                Py_DECREF(arg0);
                #endif
                return result;
            }
#if CYTHON_COMPILING_IN_LIMITED_API
            py_name = __Pyx_CyFunction_get_name((__pyx_CyFunctionObject*)func, NULL);
            if (!py_name) return NULL;
            PyErr_Format(PyExc_TypeError,
                "%.200S() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
                py_name, size);
            Py_DECREF(py_name);
#else
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
#endif
            return NULL;
        }
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags for CyFunction");
        return NULL;
    }
#if CYTHON_COMPILING_IN_LIMITED_API
    py_name = __Pyx_CyFunction_get_name((__pyx_CyFunctionObject*)func, NULL);
    if (!py_name) return NULL;
    PyErr_Format(PyExc_TypeError, "%.200S() takes no keyword arguments",
                 py_name);
    Py_DECREF(py_name);
#else
    PyErr_Format(PyExc_TypeError, "%.200s() takes no keyword arguments",
                 f->m_ml->ml_name);
#endif
    return NULL;
}
static CYTHON_INLINE PyObject *__Pyx_CyFunction_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *self, *result;
#if CYTHON_COMPILING_IN_LIMITED_API
    self = PyCFunction_GetSelf(((__pyx_CyFunctionObject*)func)->func);
    if (unlikely(!self) && PyErr_Occurred()) return NULL;
#else
    self = ((PyCFunctionObject*)func)->m_self;
#endif
    result = __Pyx_CyFunction_CallMethod(func, self, arg, kw);
    return result;
}
static PyObject *__Pyx_CyFunction_CallAsMethod(PyObject *func, PyObject *args, PyObject *kw) {
    PyObject *result;
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *) func;
#if CYTHON_METH_FASTCALL
     __pyx_vectorcallfunc vc = __Pyx_CyFunction_func_vectorcall(cyfunc);
    if (vc) {
#if CYTHON_ASSUME_SAFE_MACROS
        return __Pyx_PyVectorcall_FastCallDict(func, vc, &PyTuple_GET_ITEM(args, 0), (size_t)PyTuple_GET_SIZE(args), kw);
#else
        (void) &__Pyx_PyVectorcall_FastCallDict;
        return PyVectorcall_Call(func, args, kw);
#endif
    }
#endif
    if ((cyfunc->flags & __Pyx_CYFUNCTION_CCLASS) && !(cyfunc->flags & __Pyx_CYFUNCTION_STATICMETHOD)) {
        Py_ssize_t argc;
        PyObject *new_args;
        PyObject *self;
#if CYTHON_ASSUME_SAFE_MACROS
        argc = PyTuple_GET_SIZE(args);
#else
        argc = PyTuple_Size(args);
        if (unlikely(!argc) < 0) return NULL;
#endif
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
#if CYTHON_METH_FASTCALL
static CYTHON_INLINE int __Pyx_CyFunction_Vectorcall_CheckArgs(__pyx_CyFunctionObject *cyfunc, Py_ssize_t nargs, PyObject *kwnames)
{
    int ret = 0;
    if ((cyfunc->flags & __Pyx_CYFUNCTION_CCLASS) && !(cyfunc->flags & __Pyx_CYFUNCTION_STATICMETHOD)) {
        if (unlikely(nargs < 1)) {
            PyErr_Format(PyExc_TypeError, "%.200s() needs an argument",
                         ((PyCFunctionObject*)cyfunc)->m_ml->ml_name);
            return -1;
        }
        ret = 1;
    }
    if (unlikely(kwnames) && unlikely(PyTuple_GET_SIZE(kwnames))) {
        PyErr_Format(PyExc_TypeError,
                     "%.200s() takes no keyword arguments", ((PyCFunctionObject*)cyfunc)->m_ml->ml_name);
        return -1;
    }
    return ret;
}
static PyObject * __Pyx_CyFunction_Vectorcall_NOARGS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, kwnames)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    if (unlikely(nargs != 0)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
            def->ml_name, nargs);
        return NULL;
    }
    return def->ml_meth(self, NULL);
}
static PyObject * __Pyx_CyFunction_Vectorcall_O(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, kwnames)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    if (unlikely(nargs != 1)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
            def->ml_name, nargs);
        return NULL;
    }
    return def->ml_meth(self, args[0]);
}
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, NULL)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    return ((_PyCFunctionFastWithKeywords)(void(*)(void))def->ml_meth)(self, args, nargs, kwnames);
}
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
    PyTypeObject *cls = (PyTypeObject *) __Pyx_CyFunction_GetClassObj(cyfunc);
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, NULL)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    return ((__Pyx_PyCMethod)(void(*)(void))def->ml_meth)(self, cls, args, (size_t)nargs, kwnames);
}
#endif
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_CyFunctionType_slots[] = {
    {Py_tp_dealloc, (void *)__Pyx_CyFunction_dealloc},
    {Py_tp_repr, (void *)__Pyx_CyFunction_repr},
    {Py_tp_call, (void *)__Pyx_CyFunction_CallAsMethod},
    {Py_tp_traverse, (void *)__Pyx_CyFunction_traverse},
    {Py_tp_clear, (void *)__Pyx_CyFunction_clear},
    {Py_tp_methods, (void *)__pyx_CyFunction_methods},
    {Py_tp_members, (void *)__pyx_CyFunction_members},
    {Py_tp_getset, (void *)__pyx_CyFunction_getsets},
    {Py_tp_descr_get, (void *)__Pyx_PyMethod_New},
    {0, 0},
};
static PyType_Spec __pyx_CyFunctionType_spec = {
    __PYX_TYPE_MODULE_PREFIX "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
#ifdef Py_TPFLAGS_METHOD_DESCRIPTOR
    Py_TPFLAGS_METHOD_DESCRIPTOR |
#endif
#if (defined(_Py_TPFLAGS_HAVE_VECTORCALL) && CYTHON_METH_FASTCALL)
    _Py_TPFLAGS_HAVE_VECTORCALL |
#endif
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_BASETYPE,
    __pyx_CyFunctionType_slots
};
#else
static PyTypeObject __pyx_CyFunctionType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    __PYX_TYPE_MODULE_PREFIX "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
    (destructor) __Pyx_CyFunction_dealloc,
#if !CYTHON_METH_FASTCALL
    0,
#elif CYTHON_BACKPORT_VECTORCALL
    (printfunc)offsetof(__pyx_CyFunctionObject, func_vectorcall),
#else
    offsetof(PyCFunctionObject, vectorcall),
#endif
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
#ifdef Py_TPFLAGS_METHOD_DESCRIPTOR
    Py_TPFLAGS_METHOD_DESCRIPTOR |
#endif
#if defined(_Py_TPFLAGS_HAVE_VECTORCALL) && CYTHON_METH_FASTCALL
    _Py_TPFLAGS_HAVE_VECTORCALL |
#endif
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_BASETYPE,
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
    __Pyx_PyMethod_New,
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
#if __PYX_NEED_TP_PRINT_SLOT
    0,
#endif
#if PY_VERSION_HEX >= 0x030C0000
    0,
#endif
#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000 && PY_VERSION_HEX < 0x030a0000
    0,
#endif
};
#endif
static int __pyx_CyFunction_init(PyObject *module) {
#if CYTHON_USE_TYPE_SPECS
    __pyx_CyFunctionType = __Pyx_FetchCommonTypeFromSpec(module, &__pyx_CyFunctionType_spec, NULL);
#else
    CYTHON_UNUSED_VAR(module);
    __pyx_CyFunctionType = __Pyx_FetchCommonType(&__pyx_CyFunctionType_type);
#endif
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

 
#ifndef CYTHON_CLINE_IN_TRACEBACK
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line) {
    PyObject *use_cline;
    PyObject *ptype, *pvalue, *ptraceback;
#if CYTHON_COMPILING_IN_CPYTHON
    PyObject **cython_runtime_dict;
#endif
    CYTHON_MAYBE_UNUSED_VAR(tstate);
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
      PyObject *use_cline_obj = __Pyx_PyObject_GetAttrStrNoError(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback);
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

 
#if !CYTHON_COMPILING_IN_LIMITED_API
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
#endif

 
#include "compile.h"
#include "frameobject.h"
#include "traceback.h"
#if PY_VERSION_HEX >= 0x030b00a6 && !CYTHON_COMPILING_IN_LIMITED_API
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
static PyObject *__Pyx_PyCode_Replace_For_AddTraceback(PyObject *code, PyObject *scratch_dict,
                                                       PyObject *firstlineno, PyObject *name) {
    PyObject *replace = NULL;
    if (unlikely(PyDict_SetItemString(scratch_dict, "co_firstlineno", firstlineno))) return NULL;
    if (unlikely(PyDict_SetItemString(scratch_dict, "co_name", name))) return NULL;
    replace = PyObject_GetAttrString(code, "replace");
    if (likely(replace)) {
        PyObject *result;
        result = PyObject_Call(replace, __pyx_empty_tuple, scratch_dict);
        Py_DECREF(replace);
        return result;
    }
    #if __PYX_LIMITED_VERSION_HEX < 0x030780000
    PyErr_Clear();
    {
        PyObject *compiled = NULL, *result = NULL;
        if (unlikely(PyDict_SetItemString(scratch_dict, "code", code))) return NULL;
        if (unlikely(PyDict_SetItemString(scratch_dict, "type", (PyObject*)(&PyType_Type)))) return NULL;
        compiled = Py_CompileString(
            "out = type(code)(\n"
            "  code.co_argcount, code.co_kwonlyargcount, code.co_nlocals, code.co_stacksize,\n"
            "  code.co_flags, code.co_code, code.co_consts, code.co_names,\n"
            "  code.co_varnames, code.co_filename, co_name, co_firstlineno,\n"
            "  code.co_lnotab)\n", "<dummy>", Py_file_input);
        if (!compiled) return NULL;
        result = PyEval_EvalCode(compiled, scratch_dict, scratch_dict);
        Py_DECREF(compiled);
        if (!result) PyErr_Print();
        Py_DECREF(result);
        result = PyDict_GetItemString(scratch_dict, "out");
        if (result) Py_INCREF(result);
        return result;
    }
    #endif
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyObject *code_object = NULL, *py_py_line = NULL, *py_funcname = NULL, *dict = NULL;
    PyObject *replace = NULL, *getframe = NULL, *frame = NULL;
    PyObject *exc_type, *exc_value, *exc_traceback;
    int success = 0;
    if (c_line) {
        (void) __pyx_cfilenm;
        (void) __Pyx_CLineForTraceback(__Pyx_PyThreadState_Current, c_line);
    }
    PyErr_Fetch(&exc_type, &exc_value, &exc_traceback);
    code_object = Py_CompileString("_getframe()", filename, Py_eval_input);
    if (unlikely(!code_object)) goto bad;
    py_py_line = PyLong_FromLong(py_line);
    if (unlikely(!py_py_line)) goto bad;
    py_funcname = PyUnicode_FromString(funcname);
    if (unlikely(!py_funcname)) goto bad;
    dict = PyDict_New();
    if (unlikely(!dict)) goto bad;
    {
        PyObject *old_code_object = code_object;
        code_object = __Pyx_PyCode_Replace_For_AddTraceback(code_object, dict, py_py_line, py_funcname);
        Py_DECREF(old_code_object);
    }
    if (unlikely(!code_object)) goto bad;
    getframe = PySys_GetObject("_getframe");
    if (unlikely(!getframe)) goto bad;
    if (unlikely(PyDict_SetItemString(dict, "_getframe", getframe))) goto bad;
    frame = PyEval_EvalCode(code_object, dict, dict);
    if (unlikely(!frame) || frame == Py_None) goto bad;
    success = 1;
  bad:
    PyErr_Restore(exc_type, exc_value, exc_traceback);
    Py_XDECREF(code_object);
    Py_XDECREF(py_py_line);
    Py_XDECREF(py_funcname);
    Py_XDECREF(dict);
    Py_XDECREF(replace);
    if (success) {
        PyTraceBack_Here(
            (struct _frame*)frame);
    }
    Py_XDECREF(frame);
}
#else
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
#endif

 
#if CYTHON_COMPILING_IN_LIMITED_API
static __Pyx_TypeName
__Pyx_PyType_GetName(PyTypeObject* tp)
{
    PyObject *name = __Pyx_PyObject_GetAttrStr((PyObject *)tp,
                                               __pyx_n_s_name);
    if (unlikely(name == NULL) || unlikely(!PyUnicode_Check(name))) {
        PyErr_Clear();
        Py_XDECREF(name);
        name = __Pyx_NewRef(__pyx_n_s__12);
    }
    return name;
}
#endif

 
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
#if !CYTHON_COMPILING_IN_LIMITED_API
        return _PyLong_FromByteArray(bytes, sizeof(long),
                                     little, !is_unsigned);
#else
        PyObject *from_bytes, *result = NULL;
        PyObject *py_bytes = NULL, *arg_tuple = NULL, *kwds = NULL, *order_str = NULL;
        from_bytes = PyObject_GetAttrString((PyObject*)&PyInt_Type, "from_bytes");
        if (!from_bytes) return NULL;
        py_bytes = PyBytes_FromStringAndSize((char*)bytes, sizeof(long));
        if (!py_bytes) goto limited_bad;
        order_str = PyUnicode_FromString(little ? "little" : "big");
        if (!order_str) goto limited_bad;
        arg_tuple = PyTuple_Pack(2, py_bytes, order_str);
        if (!arg_tuple) goto limited_bad;
        kwds = PyDict_New();
        if (!kwds) goto limited_bad;
        if (PyDict_SetItemString(kwds, "signed", __Pyx_NewRef(!is_unsigned ? Py_True : Py_False))) goto limited_bad;
        result = PyObject_Call(from_bytes, arg_tuple, kwds);
        limited_bad:
        Py_XDECREF(from_bytes);
        Py_XDECREF(py_bytes);
        Py_XDECREF(order_str);
        Py_XDECREF(arg_tuple);
        Py_XDECREF(kwds);
        return result;
#endif
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
        if ((sizeof(long) < sizeof(long))) {
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
            if (unlikely(__Pyx_PyLong_IsNeg(x))) {
                goto raise_neg_overflow;
            } else if (__Pyx_PyLong_IsCompact(x)) {
                __PYX_VERIFY_RETURN_INT(long, __Pyx_compact_upylong, __Pyx_PyLong_CompactValueUnsigned(x))
            } else {
                const digit* digits = __Pyx_PyLong_Digits(x);
                assert(__Pyx_PyLong_DigitCount(x) > 1);
                switch (__Pyx_PyLong_DigitCount(x)) {
                    case 2:
                        if ((8 * sizeof(long) > 1 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) >= 2 * PyLong_SHIFT)) {
                                return (long) (((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                            }
                        }
                        break;
                    case 3:
                        if ((8 * sizeof(long) > 2 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) >= 3 * PyLong_SHIFT)) {
                                return (long) (((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                            }
                        }
                        break;
                    case 4:
                        if ((8 * sizeof(long) > 3 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) >= 4 * PyLong_SHIFT)) {
                                return (long) (((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                            }
                        }
                        break;
                }
            }
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A7
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
            if ((sizeof(long) <= sizeof(unsigned long))) {
                __PYX_VERIFY_RETURN_INT_EXC(long, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
            } else if ((sizeof(long) <= sizeof(unsigned PY_LONG_LONG))) {
                __PYX_VERIFY_RETURN_INT_EXC(long, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
            }
        } else {
#if CYTHON_USE_PYLONG_INTERNALS
            if (__Pyx_PyLong_IsCompact(x)) {
                __PYX_VERIFY_RETURN_INT(long, __Pyx_compact_pylong, __Pyx_PyLong_CompactValue(x))
            } else {
                const digit* digits = __Pyx_PyLong_Digits(x);
                assert(__Pyx_PyLong_DigitCount(x) > 1);
                switch (__Pyx_PyLong_SignedDigitCount(x)) {
                    case -2:
                        if ((8 * sizeof(long) - 1 > 1 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                                return (long) (((long)-1)*(((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                            }
                        }
                        break;
                    case 2:
                        if ((8 * sizeof(long) > 1 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                                return (long) ((((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                            }
                        }
                        break;
                    case -3:
                        if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                                return (long) (((long)-1)*(((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                            }
                        }
                        break;
                    case 3:
                        if ((8 * sizeof(long) > 2 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                                return (long) ((((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                            }
                        }
                        break;
                    case -4:
                        if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) - 1 > 4 * PyLong_SHIFT)) {
                                return (long) (((long)-1)*(((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                            }
                        }
                        break;
                    case 4:
                        if ((8 * sizeof(long) > 3 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(long) - 1 > 4 * PyLong_SHIFT)) {
                                return (long) ((((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                            }
                        }
                        break;
                }
            }
#endif
            if ((sizeof(long) <= sizeof(long))) {
                __PYX_VERIFY_RETURN_INT_EXC(long, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
            } else if ((sizeof(long) <= sizeof(PY_LONG_LONG))) {
                __PYX_VERIFY_RETURN_INT_EXC(long, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
            }
        }
        {
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
                int ret = -1;
#if !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
                int one = 1; int is_little = (int)*(unsigned char *)&one;
                unsigned char *bytes = (unsigned char *)&val;
                ret = _PyLong_AsByteArray((PyLongObject *)v,
                                           bytes, sizeof(val),
                                           is_little, !is_unsigned);
#else
                PyObject *stepval = NULL, *mask = NULL, *shift = NULL;
                int bits, remaining_bits, is_negative = 0;
                long idigit;
                int chunk_size = (sizeof(long) < 8) ? 30 : 62;
                if (unlikely(!PyLong_CheckExact(v))) {
                    PyObject *tmp = v;
                    v = PyNumber_Long(v);
                    assert(PyLong_CheckExact(v));
                    Py_DECREF(tmp);
                    if (unlikely(!v)) return (long) -1;
                }
#if CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030B0000
                if (Py_SIZE(x) == 0)
                    return (long) 0;
                is_negative = Py_SIZE(x) < 0;
#else
                {
                    int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                    if (unlikely(result < 0))
                        return (long) -1;
                    is_negative = result == 1;
                }
#endif
                if (is_unsigned && unlikely(is_negative)) {
                    goto raise_neg_overflow;
                } else if (is_negative) {
                    stepval = PyNumber_Invert(v);
                    if (unlikely(!stepval))
                        return (long) -1;
                } else {
                    stepval = __Pyx_NewRef(v);
                }
                val = (long) 0;
                mask = PyLong_FromLong((1L << chunk_size) - 1); if (unlikely(!mask)) goto done;
                shift = PyLong_FromLong(chunk_size); if (unlikely(!shift)) goto done;
                for (bits = 0; bits < (int) sizeof(long) * 8 - chunk_size; bits += chunk_size) {
                    PyObject *tmp, *digit;
                    digit = PyNumber_And(stepval, mask);
                    if (unlikely(!digit)) goto done;
                    idigit = PyLong_AsLong(digit);
                    Py_DECREF(digit);
                    if (unlikely(idigit < 0)) goto done;
                    tmp = PyNumber_Rshift(stepval, shift);
                    if (unlikely(!tmp)) goto done;
                    Py_DECREF(stepval); stepval = tmp;
                    val |= ((long) idigit) << bits;
                    #if CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030B0000
                    if (Py_SIZE(stepval) == 0)
                        goto unpacking_done;
                    #endif
                }
                idigit = PyLong_AsLong(stepval);
                if (unlikely(idigit < 0)) goto done;
                remaining_bits = ((int) sizeof(long) * 8) - bits - (is_unsigned ? 0 : 1);
                if (unlikely(idigit >= (1L << remaining_bits)))
                    goto raise_overflow;
                val |= ((long) idigit) << bits;
            #if CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030B0000
            unpacking_done:
            #endif
                if (!is_unsigned) {
                    if (unlikely(val & (((long) 1) << (sizeof(long) * 8 - 1))))
                        goto raise_overflow;
                    if (is_negative)
                        val = ~val;
                }
                ret = 0;
            done:
                Py_XDECREF(shift);
                Py_XDECREF(mask);
                Py_XDECREF(stepval);
#endif
                Py_DECREF(v);
                if (likely(!ret))
                    return val;
            }
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
        if ((sizeof(int) < sizeof(long))) {
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
            if (unlikely(__Pyx_PyLong_IsNeg(x))) {
                goto raise_neg_overflow;
            } else if (__Pyx_PyLong_IsCompact(x)) {
                __PYX_VERIFY_RETURN_INT(int, __Pyx_compact_upylong, __Pyx_PyLong_CompactValueUnsigned(x))
            } else {
                const digit* digits = __Pyx_PyLong_Digits(x);
                assert(__Pyx_PyLong_DigitCount(x) > 1);
                switch (__Pyx_PyLong_DigitCount(x)) {
                    case 2:
                        if ((8 * sizeof(int) > 1 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) >= 2 * PyLong_SHIFT)) {
                                return (int) (((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                            }
                        }
                        break;
                    case 3:
                        if ((8 * sizeof(int) > 2 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) >= 3 * PyLong_SHIFT)) {
                                return (int) (((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                            }
                        }
                        break;
                    case 4:
                        if ((8 * sizeof(int) > 3 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) >= 4 * PyLong_SHIFT)) {
                                return (int) (((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                            }
                        }
                        break;
                }
            }
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A7
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
            if ((sizeof(int) <= sizeof(unsigned long))) {
                __PYX_VERIFY_RETURN_INT_EXC(int, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
            } else if ((sizeof(int) <= sizeof(unsigned PY_LONG_LONG))) {
                __PYX_VERIFY_RETURN_INT_EXC(int, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
            }
        } else {
#if CYTHON_USE_PYLONG_INTERNALS
            if (__Pyx_PyLong_IsCompact(x)) {
                __PYX_VERIFY_RETURN_INT(int, __Pyx_compact_pylong, __Pyx_PyLong_CompactValue(x))
            } else {
                const digit* digits = __Pyx_PyLong_Digits(x);
                assert(__Pyx_PyLong_DigitCount(x) > 1);
                switch (__Pyx_PyLong_SignedDigitCount(x)) {
                    case -2:
                        if ((8 * sizeof(int) - 1 > 1 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                                return (int) (((int)-1)*(((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                            }
                        }
                        break;
                    case 2:
                        if ((8 * sizeof(int) > 1 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                                return (int) ((((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                            }
                        }
                        break;
                    case -3:
                        if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                                return (int) (((int)-1)*(((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                            }
                        }
                        break;
                    case 3:
                        if ((8 * sizeof(int) > 2 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                                return (int) ((((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                            }
                        }
                        break;
                    case -4:
                        if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) - 1 > 4 * PyLong_SHIFT)) {
                                return (int) (((int)-1)*(((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                            }
                        }
                        break;
                    case 4:
                        if ((8 * sizeof(int) > 3 * PyLong_SHIFT)) {
                            if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                                __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                            } else if ((8 * sizeof(int) - 1 > 4 * PyLong_SHIFT)) {
                                return (int) ((((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                            }
                        }
                        break;
                }
            }
#endif
            if ((sizeof(int) <= sizeof(long))) {
                __PYX_VERIFY_RETURN_INT_EXC(int, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
            } else if ((sizeof(int) <= sizeof(PY_LONG_LONG))) {
                __PYX_VERIFY_RETURN_INT_EXC(int, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
            }
        }
        {
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
                int ret = -1;
#if !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
                int one = 1; int is_little = (int)*(unsigned char *)&one;
                unsigned char *bytes = (unsigned char *)&val;
                ret = _PyLong_AsByteArray((PyLongObject *)v,
                                           bytes, sizeof(val),
                                           is_little, !is_unsigned);
#else
                PyObject *stepval = NULL, *mask = NULL, *shift = NULL;
                int bits, remaining_bits, is_negative = 0;
                long idigit;
                int chunk_size = (sizeof(long) < 8) ? 30 : 62;
                if (unlikely(!PyLong_CheckExact(v))) {
                    PyObject *tmp = v;
                    v = PyNumber_Long(v);
                    assert(PyLong_CheckExact(v));
                    Py_DECREF(tmp);
                    if (unlikely(!v)) return (int) -1;
                }
#if CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030B0000
                if (Py_SIZE(x) == 0)
                    return (int) 0;
                is_negative = Py_SIZE(x) < 0;
#else
                {
                    int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                    if (unlikely(result < 0))
                        return (int) -1;
                    is_negative = result == 1;
                }
#endif
                if (is_unsigned && unlikely(is_negative)) {
                    goto raise_neg_overflow;
                } else if (is_negative) {
                    stepval = PyNumber_Invert(v);
                    if (unlikely(!stepval))
                        return (int) -1;
                } else {
                    stepval = __Pyx_NewRef(v);
                }
                val = (int) 0;
                mask = PyLong_FromLong((1L << chunk_size) - 1); if (unlikely(!mask)) goto done;
                shift = PyLong_FromLong(chunk_size); if (unlikely(!shift)) goto done;
                for (bits = 0; bits < (int) sizeof(int) * 8 - chunk_size; bits += chunk_size) {
                    PyObject *tmp, *digit;
                    digit = PyNumber_And(stepval, mask);
                    if (unlikely(!digit)) goto done;
                    idigit = PyLong_AsLong(digit);
                    Py_DECREF(digit);
                    if (unlikely(idigit < 0)) goto done;
                    tmp = PyNumber_Rshift(stepval, shift);
                    if (unlikely(!tmp)) goto done;
                    Py_DECREF(stepval); stepval = tmp;
                    val |= ((int) idigit) << bits;
                    #if CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030B0000
                    if (Py_SIZE(stepval) == 0)
                        goto unpacking_done;
                    #endif
                }
                idigit = PyLong_AsLong(stepval);
                if (unlikely(idigit < 0)) goto done;
                remaining_bits = ((int) sizeof(int) * 8) - bits - (is_unsigned ? 0 : 1);
                if (unlikely(idigit >= (1L << remaining_bits)))
                    goto raise_overflow;
                val |= ((int) idigit) << bits;
            #if CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030B0000
            unpacking_done:
            #endif
                if (!is_unsigned) {
                    if (unlikely(val & (((int) 1) << (sizeof(int) * 8 - 1))))
                        goto raise_overflow;
                    if (is_negative)
                        val = ~val;
                }
                ret = 0;
            done:
                Py_XDECREF(shift);
                Py_XDECREF(mask);
                Py_XDECREF(stepval);
#endif
                Py_DECREF(v);
                if (likely(!ret))
                    return val;
            }
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
        a = __Pyx_PyType_GetSlot(a, tp_base, PyTypeObject*);
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
static CYTHON_INLINE int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (cls == a || cls == b) return 1;
    mro = cls->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            PyObject *base = PyTuple_GET_ITEM(mro, i);
            if (base == (PyObject *)a || base == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(cls, a) || __Pyx_InBases(cls, b);
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
    if (exc_type1) {
        return __Pyx_IsAnySubtype2((PyTypeObject*)err, (PyTypeObject*)exc_type1, (PyTypeObject*)exc_type2);
    } else {
        return __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type2);
    }
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
                      "compile time version %s of module '%.100s' "
                      "does not match runtime version %s",
                      ctversion, __Pyx_MODULE_NAME, rtversion);
        return PyErr_WarnEx(NULL, message, 1);
    }
    return 0;
}

 
#if PY_MAJOR_VERSION >= 3
static int __Pyx_InitString(__Pyx_StringTabEntry t, PyObject **str) {
    if (t.is_unicode | t.is_str) {
        if (t.intern) {
            *str = PyUnicode_InternFromString(t.s);
        } else if (t.encoding) {
            *str = PyUnicode_Decode(t.s, t.n - 1, t.encoding, NULL);
        } else {
            *str = PyUnicode_FromStringAndSize(t.s, t.n - 1);
        }
    } else {
        *str = PyBytes_FromStringAndSize(t.s, t.n - 1);
    }
    if (!*str)
        return -1;
    if (PyObject_Hash(*str) == -1)
        return -1;
    return 0;
}
#endif
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        #if PY_MAJOR_VERSION >= 3
        __Pyx_InitString(*t, t->p);
        #else
        if (t->is_unicode) {
            *t->p = PyUnicode_DecodeUTF8(t->s, t->n - 1, NULL);
        } else if (t->intern) {
            *t->p = PyString_InternFromString(t->s);
        } else {
            *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        }
        if (!*t->p)
            return -1;
        if (PyObject_Hash(*t->p) == -1)
            return -1;
        #endif
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
#if (!CYTHON_COMPILING_IN_PYPY && !CYTHON_COMPILING_IN_LIMITED_API) || (defined(PyByteArray_AS_STRING) && defined(PyByteArray_GET_SIZE))
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
    __Pyx_TypeName result_type_name = __Pyx_PyType_GetName(Py_TYPE(result));
#if PY_MAJOR_VERSION >= 3
    if (PyLong_Check(result)) {
        if (PyErr_WarnFormat(PyExc_DeprecationWarning, 1,
                "__int__ returned non-int (type " __Pyx_FMT_TYPENAME ").  "
                "The ability to return an instance of a strict subclass of int is deprecated, "
                "and may be removed in a future version of Python.",
                result_type_name)) {
            __Pyx_DECREF_TypeName(result_type_name);
            Py_DECREF(result);
            return NULL;
        }
        __Pyx_DECREF_TypeName(result_type_name);
        return result;
    }
#endif
    PyErr_Format(PyExc_TypeError,
                 "__%.4s__ returned non-%.4s (type " __Pyx_FMT_TYPENAME ")",
                 type_name, type_name, result_type_name);
    __Pyx_DECREF_TypeName(result_type_name);
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
    if (likely(__Pyx_PyLong_IsCompact(b))) {
        return __Pyx_PyLong_CompactValue(b);
    } else {
      const digit* digits = __Pyx_PyLong_Digits(b);
      const Py_ssize_t size = __Pyx_PyLong_SignedDigitCount(b);
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


 
#ifdef _MSC_VER
#pragma warning( pop )
#endif



 
#endif  
