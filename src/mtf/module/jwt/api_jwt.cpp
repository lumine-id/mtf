 

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

#define __PYX_HAVE__jwt__api_jwt
#define __PYX_HAVE_API__jwt__api_jwt
 
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
  "mtf/module/jwt/api_jwt.py",
};
 
 
 
 

 
struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud;
struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr;
struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr;

 
struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud {
  PyObject_HEAD
  PyObject *__pyx_v_audience_claims;
};


 
struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr {
  PyObject_HEAD
  PyObject *__pyx_genexpr_arg_0;
  PyObject *__pyx_v_c;
};


 
struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr {
  PyObject_HEAD
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *__pyx_outer_scope;
  PyObject *__pyx_genexpr_arg_0;
  PyObject *__pyx_v_aud;
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

 
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);

 
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject *const *kwvalues,
    PyObject **argnames[],
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,
    const char* function_name);

 
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);

 
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

 
static void __Pyx_RaiseMappingExpectedError(PyObject* arg);

 
#if CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_DelAttrStr(o,n) __Pyx_PyObject_SetAttrStr(o, n, NULL)
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value);
#else
#define __Pyx_PyObject_DelAttrStr(o,n)   PyObject_DelAttr(o,n)
#define __Pyx_PyObject_SetAttrStr(o,n,v) PyObject_SetAttr(o,n,v)
#endif

 
#define __Pyx_ArgTypeTest(obj, type, none_allowed, name, exact)\
    ((likely(__Pyx_IS_TYPE(obj, type) | (none_allowed && (obj == Py_None)))) ? 1 :\
        __Pyx__ArgTypeTest(obj, type, name, exact))
static int __Pyx__ArgTypeTest(PyObject *obj, PyTypeObject *type, const char *name, int exact);

 
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

 
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause);

 
static PyObject* __Pyx_PyDict_GetItemDefault(PyObject* d, PyObject* key, PyObject* default_value);

 
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

 
static PyObject* __Pyx__CallUnboundCMethod2(__Pyx_CachedCFunction* cfunc, PyObject* self, PyObject* arg1, PyObject* arg2);
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030600B1
static CYTHON_INLINE PyObject *__Pyx_CallUnboundCMethod2(__Pyx_CachedCFunction *cfunc, PyObject *self, PyObject *arg1, PyObject *arg2);
#else
#define __Pyx_CallUnboundCMethod2(cfunc, self, arg1, arg2)  __Pyx__CallUnboundCMethod2(cfunc, self, arg1, arg2)
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

 
static int __Pyx_RaiseUnexpectedTypeError(const char *expected, PyObject *obj);

 
static CYTHON_INLINE PyObject *__Pyx_PyDict_SetDefault(PyObject *d, PyObject *key, PyObject *default_value, int is_safe_type);

 
static CYTHON_INLINE int __Pyx_IterFinish(void);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);

 
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

 
static int __Pyx_MergeKeywords(PyObject *kwdict, PyObject *source_mapping);

 
#if CYTHON_USE_EXC_INFO_STACK && CYTHON_FAST_THREAD_STATE
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
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
#endif

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSwap(type, value, tb)  __Pyx__ExceptionSwap(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb);
#endif

 
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}

 
static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname);

 
static void __Pyx_Generator_Replace_StopIteration(int in_async_gen);

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname);

 
#include <structmember.h>

 
#if CYTHON_USE_TYPE_SPECS
static int __Pyx_fix_up_extension_type_from_spec(PyType_Spec *spec, PyTypeObject *type);
#endif

 
#if CYTHON_COMPILING_IN_CPYTHON || CYTHON_COMPILING_IN_LIMITED_API || CYTHON_USE_TYPE_SPECS
static int __Pyx_validate_bases_tuple(const char *type_name, Py_ssize_t dictoffset, PyObject *bases);
#endif

 
CYTHON_UNUSED static int __Pyx_PyType_Ready(PyTypeObject *t);

 
#if CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP && PY_VERSION_HEX < 0x03070000
static CYTHON_INLINE PyObject* __Pyx_PyObject_GenericGetAttrNoDict(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GenericGetAttrNoDict PyObject_GenericGetAttr
#endif

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

 
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple);
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple);
#endif

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);

 
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

 
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg);

 
struct __pyx_CoroutineObject;
typedef PyObject *(*__pyx_coroutine_body_t)(struct __pyx_CoroutineObject *, PyThreadState *, PyObject *);
#if CYTHON_USE_EXC_INFO_STACK
#define __Pyx_ExcInfoStruct  _PyErr_StackItem
#else
typedef struct {
    PyObject *exc_type;
    PyObject *exc_value;
    PyObject *exc_traceback;
} __Pyx_ExcInfoStruct;
#endif
typedef struct __pyx_CoroutineObject {
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
#define __Pyx_Generator_CheckExact(obj) __Pyx_IS_TYPE(obj, __pyx_GeneratorType)
#define __Pyx_Generator_New(body, code, closure, name, qualname, module_name)\
    __Pyx__Coroutine_New(__pyx_GeneratorType, body, code, closure, name, qualname, module_name)
static PyObject *__Pyx_Generator_Next(PyObject *self);
static int __pyx_Generator_init(PyObject *module);

 
static int __Pyx_check_binary_version(void);

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);

 

 
 
 
#define __Pyx_MODULE_NAME "jwt.api_jwt"
extern int __pyx_module_is_main_jwt__api_jwt;
int __pyx_module_is_main_jwt__api_jwt = 0;

 
 
static PyObject *__pyx_builtin_staticmethod;
static PyObject *__pyx_builtin_TypeError;
static PyObject *__pyx_builtin_ValueError;
 
static const char __pyx_k_e[] = "e";
static const char __pyx_k__3[] = ",";
static const char __pyx_k__4[] = ":";
static const char __pyx_k__6[] = "";
static const char __pyx_k__8[] = "*";
static const char __pyx_k__9[] = ".";
static const char __pyx_k_gc[] = "gc";
static const char __pyx_k_tz[] = "tz";
static const char __pyx_k_Any[] = "Any";
static const char __pyx_k__37[] = "?";
static const char __pyx_k_aud[] = "aud";
static const char __pyx_k_cls[] = "cls";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_exp[] = "exp";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_iat[] = "iat";
static const char __pyx_k_iss[] = "iss";
static const char __pyx_k_jwt[] = "jwt";
static const char __pyx_k_key[] = "key";
static const char __pyx_k_nbf[] = "nbf";
static const char __pyx_k_now[] = "now";
static const char __pyx_k_str[] = "str";
static const char __pyx_k_utc[] = "utc";
static const char __pyx_k_Dict[] = "Dict";
static const char __pyx_k_List[] = "List";
static const char __pyx_k_Type[] = "Type";
static const char __pyx_k_args[] = "args";
static const char __pyx_k_dict[] = "__dict__";
static const char __pyx_k_init[] = "__init__";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_self[] = "self";
static const char __pyx_k_send[] = "send";
static const char __pyx_k_spec[] = "__spec__";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_HS256[] = "HS256";
static const char __pyx_k_PyJWT[] = "PyJWT";
static const char __pyx_k_Union[] = "Union";
static const char __pyx_k_claim[] = "claim";
static const char __pyx_k_close[] = "close";
static const char __pyx_k_dumps[] = "dumps";
static const char __pyx_k_items[] = "items";
static const char __pyx_k_loads[] = "loads";
static const char __pyx_k_super[] = "super";
static const char __pyx_k_throw[] = "throw";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_decode[] = "decode";
static const char __pyx_k_enable[] = "enable";
static const char __pyx_k_encode[] = "encode";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_issuer[] = "issuer";
static const char __pyx_k_kwargs[] = "kwargs";
static const char __pyx_k_leeway[] = "leeway";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_return[] = "return";
static const char __pyx_k_timegm[] = "timegm";
static const char __pyx_k_typing[] = "typing";
static const char __pyx_k_Mapping[] = "Mapping";
static const char __pyx_k_api_jws[] = "api_jws";
static const char __pyx_k_decoded[] = "decoded";
static const char __pyx_k_disable[] = "disable";
static const char __pyx_k_genexpr[] = "genexpr";
static const char __pyx_k_headers[] = "headers";
static const char __pyx_k_options[] = "options";
static const char __pyx_k_payload[] = "payload";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_require[] = "require";
static const char __pyx_k_Iterable[] = "Iterable";
static const char __pyx_k_Optional[] = "Optional";
static const char __pyx_k_audience[] = "audience";
static const char __pyx_k_calendar[] = "calendar";
static const char __pyx_k_datetime[] = "datetime";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_set_name[] = "__set_name__";
static const char __pyx_k_timezone[] = "timezone";
static const char __pyx_k_TypeError[] = "TypeError";
static const char __pyx_k_algorithm[] = "algorithm";
static const char __pyx_k_isenabled[] = "isenabled";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_timedelta[] = "timedelta";
static const char __pyx_k_ValueError[] = "ValueError";
static const char __pyx_k_algorithms[] = "algorithms";
static const char __pyx_k_exceptions[] = "exceptions";
static const char __pyx_k_separators[] = "separators";
static const char __pyx_k_setdefault[] = "setdefault";
static const char __pyx_k_time_claim[] = "time_claim";
static const char __pyx_k_verify_aud[] = "verify_aud";
static const char __pyx_k_verify_exp[] = "verify_exp";
static const char __pyx_k_verify_iat[] = "verify_iat";
static const char __pyx_k_verify_iss[] = "verify_iss";
static const char __pyx_k_verify_nbf[] = "verify_nbf";
static const char __pyx_k_DecodeError[] = "DecodeError";
static const char __pyx_k_jwt_api_jwt[] = "jwt.api_jwt";
static const char __pyx_k_Dict_str_Any[] = "Dict[str, Any]";
static const char __pyx_k_Optional_str[] = "Optional[str]";
static const char __pyx_k_PyJWT___init[] = "PyJWT.__init__";
static const char __pyx_k_PyJWT_decode[] = "PyJWT.decode";
static const char __pyx_k_PyJWT_encode[] = "PyJWT.encode";
static const char __pyx_k_initializing[] = "_initializing";
static const char __pyx_k_is_coroutine[] = "_is_coroutine";
static const char __pyx_k_json_encoder[] = "json_encoder";
static const char __pyx_k_json_payload[] = "json_payload";
static const char __pyx_k_staticmethod[] = "staticmethod";
static const char __pyx_k_utctimetuple[] = "utctimetuple";
static const char __pyx_k_validate_aud[] = "_validate_aud";
static const char __pyx_k_validate_exp[] = "_validate_exp";
static const char __pyx_k_validate_iat[] = "_validate_iat";
static const char __pyx_k_validate_iss[] = "_validate_iss";
static const char __pyx_k_validate_nbf[] = "_validate_nbf";
static const char __pyx_k_Optional_Dict[] = "Optional[Dict]";
static const char __pyx_k_init_subclass[] = "__init_subclass__";
static const char __pyx_k_total_seconds[] = "total_seconds";
static const char __pyx_k_Invalid_issuer[] = "Invalid issuer";
static const char __pyx_k_jwt_global_obj[] = "_jwt_global_obj";
static const char __pyx_k_merged_options[] = "merged_options";
static const char __pyx_k_audience_claims[] = "audience_claims";
static const char __pyx_k_collections_abc[] = "collections.abc";
static const char __pyx_k_decode_complete[] = "decode_complete";
static const char __pyx_k_validate_claims[] = "_validate_claims";
static const char __pyx_k_Invalid_audience[] = "Invalid audience";
static const char __pyx_k_verify_signature[] = "verify_signature";
static const char __pyx_k_Optional_List_str[] = "Optional[List[str]]";
static const char __pyx_k_InvalidIssuerError[] = "InvalidIssuerError";
static const char __pyx_k_asyncio_coroutines[] = "asyncio.coroutines";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_PyJWT__validate_aud[] = "PyJWT._validate_aud";
static const char __pyx_k_PyJWT__validate_exp[] = "PyJWT._validate_exp";
static const char __pyx_k_PyJWT__validate_iat[] = "PyJWT._validate_iat";
static const char __pyx_k_PyJWT__validate_iss[] = "PyJWT._validate_iss";
static const char __pyx_k_PyJWT__validate_nbf[] = "PyJWT._validate_nbf";
static const char __pyx_k_get_default_options[] = "_get_default_options";
static const char __pyx_k_InvalidAudienceError[] = "InvalidAudienceError";
static const char __pyx_k_InvalidIssuedAtError[] = "InvalidIssuedAtError";
static const char __pyx_k_ExpiredSignatureError[] = "ExpiredSignatureError";
static const char __pyx_k_PyJWT_decode_complete[] = "PyJWT.decode_complete";
static const char __pyx_k_Signature_has_expired[] = "Signature has expired";
static const char __pyx_k_ImmatureSignatureError[] = "ImmatureSignatureError";
static const char __pyx_k_PyJWT__validate_claims[] = "PyJWT._validate_claims";
static const char __pyx_k_Invalid_payload_string_s[] = "Invalid payload string: %s";
static const char __pyx_k_validate_required_claims[] = "_validate_required_claims";
static const char __pyx_k_MissingRequiredClaimError[] = "MissingRequiredClaimError";
static const char __pyx_k_mtf_module_jwt_api_jwt_py[] = "mtf/module/jwt/api_jwt.py";
static const char __pyx_k_PyJWT__get_default_options[] = "PyJWT._get_default_options";
static const char __pyx_k_Dict_str_Union_bool_List_str[] = "Dict[str, Union[bool, List[str]]]";
static const char __pyx_k_Invalid_claim_format_in_token[] = "Invalid claim format in token";
static const char __pyx_k_Optional_Type_json_JSONEncoder[] = "Optional[Type[json.JSONEncoder]]";
static const char __pyx_k_The_token_is_not_yet_valid_nbf[] = "The token is not yet valid (nbf)";
static const char __pyx_k_It_is_required_that_you_pass_in[] = "It is required that you pass in a value for the \"algorithms\" argument when calling decode().";
static const char __pyx_k_Not_Before_claim_nbf_must_be_an[] = "Not Before claim (nbf) must be an integer.";
static const char __pyx_k_PyJWT__validate_required_claims[] = "PyJWT._validate_required_claims";
static const char __pyx_k_Expecting_a_mapping_object_as_JW[] = "Expecting a mapping object, as JWT only supports JSON objects as payloads.";
static const char __pyx_k_Expiration_Time_claim_exp_must_b[] = "Expiration Time claim (exp) must be an integer.";
static const char __pyx_k_Invalid_payload_string_must_be_a[] = "Invalid payload string: must be a json object";
static const char __pyx_k_Issued_At_claim_iat_must_be_an_i[] = "Issued At claim (iat) must be an integer.";
static const char __pyx_k_PyJWT__validate_aud_locals_genex[] = "PyJWT._validate_aud.<locals>.genexpr";
static const char __pyx_k_audience_must_be_a_string_iterab[] = "audience must be a string, iterable, or None";
 
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_options);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_2_get_default_options(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_4encode(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_key, PyObject *__pyx_v_algorithm, PyObject *__pyx_v_headers, PyObject *__pyx_v_json_encoder);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_6decode_complete(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_jwt, PyObject *__pyx_v_key, PyObject *__pyx_v_algorithms, PyObject *__pyx_v_options, PyObject *__pyx_v_kwargs);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_8decode(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_jwt, PyObject *__pyx_v_key, PyObject *__pyx_v_algorithms, PyObject *__pyx_v_options, PyObject *__pyx_v_kwargs);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_10_validate_claims(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_options, PyObject *__pyx_v_audience, PyObject *__pyx_v_issuer, PyObject *__pyx_v_leeway, CYTHON_UNUSED PyObject *__pyx_v_kwargs);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_12_validate_required_claims(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_options);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_14_validate_iat(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, CYTHON_UNUSED PyObject *__pyx_v_now, CYTHON_UNUSED PyObject *__pyx_v_leeway);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_16_validate_nbf(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_now, PyObject *__pyx_v_leeway);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_18_validate_exp(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_now, PyObject *__pyx_v_leeway);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_13_validate_aud_genexpr(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_13_validate_aud_3genexpr(PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_20_validate_aud(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_audience);  
static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_22_validate_iss(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_issuer);  
static PyObject *__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct___validate_aud(PyTypeObject *t, PyObject *a, PyObject *k);  
static PyObject *__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_1_genexpr(PyTypeObject *t, PyObject *a, PyObject *k);  
static PyObject *__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_2_genexpr(PyTypeObject *t, PyObject *a, PyObject *k);  
static __Pyx_CachedCFunction __pyx_umethod_PyDict_Type_get = {0, 0, 0, 0, 0};
static __Pyx_CachedCFunction __pyx_umethod_PyDict_Type_setdefault = {0, 0, 0, 0, 0};
 
 
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
  PyObject *__pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud;
  PyObject *__pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr;
  PyObject *__pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr;
  #endif
  PyTypeObject *__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud;
  PyTypeObject *__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr;
  PyTypeObject *__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr;
  PyObject *__pyx_n_s_Any;
  PyObject *__pyx_n_s_DecodeError;
  PyObject *__pyx_n_s_Dict;
  PyObject *__pyx_kp_s_Dict_str_Any;
  PyObject *__pyx_kp_s_Dict_str_Union_bool_List_str;
  PyObject *__pyx_kp_u_Expecting_a_mapping_object_as_JW;
  PyObject *__pyx_kp_u_Expiration_Time_claim_exp_must_b;
  PyObject *__pyx_n_s_ExpiredSignatureError;
  PyObject *__pyx_n_u_HS256;
  PyObject *__pyx_n_s_ImmatureSignatureError;
  PyObject *__pyx_n_s_InvalidAudienceError;
  PyObject *__pyx_n_s_InvalidIssuedAtError;
  PyObject *__pyx_n_s_InvalidIssuerError;
  PyObject *__pyx_kp_u_Invalid_audience;
  PyObject *__pyx_kp_u_Invalid_claim_format_in_token;
  PyObject *__pyx_kp_u_Invalid_issuer;
  PyObject *__pyx_kp_u_Invalid_payload_string_must_be_a;
  PyObject *__pyx_kp_u_Invalid_payload_string_s;
  PyObject *__pyx_kp_u_Issued_At_claim_iat_must_be_an_i;
  PyObject *__pyx_kp_u_It_is_required_that_you_pass_in;
  PyObject *__pyx_n_s_Iterable;
  PyObject *__pyx_n_s_List;
  PyObject *__pyx_n_s_Mapping;
  PyObject *__pyx_n_s_MissingRequiredClaimError;
  PyObject *__pyx_kp_u_Not_Before_claim_nbf_must_be_an;
  PyObject *__pyx_n_s_Optional;
  PyObject *__pyx_kp_s_Optional_Dict;
  PyObject *__pyx_kp_s_Optional_List_str;
  PyObject *__pyx_kp_s_Optional_Type_json_JSONEncoder;
  PyObject *__pyx_kp_s_Optional_str;
  PyObject *__pyx_n_s_PyJWT;
  PyObject *__pyx_n_s_PyJWT___init;
  PyObject *__pyx_n_s_PyJWT__get_default_options;
  PyObject *__pyx_n_s_PyJWT__validate_aud;
  PyObject *__pyx_n_s_PyJWT__validate_aud_locals_genex;
  PyObject *__pyx_n_s_PyJWT__validate_claims;
  PyObject *__pyx_n_s_PyJWT__validate_exp;
  PyObject *__pyx_n_s_PyJWT__validate_iat;
  PyObject *__pyx_n_s_PyJWT__validate_iss;
  PyObject *__pyx_n_s_PyJWT__validate_nbf;
  PyObject *__pyx_n_s_PyJWT__validate_required_claims;
  PyObject *__pyx_n_s_PyJWT_decode;
  PyObject *__pyx_n_s_PyJWT_decode_complete;
  PyObject *__pyx_n_s_PyJWT_encode;
  PyObject *__pyx_kp_u_Signature_has_expired;
  PyObject *__pyx_kp_u_The_token_is_not_yet_valid_nbf;
  PyObject *__pyx_n_s_Type;
  PyObject *__pyx_n_s_TypeError;
  PyObject *__pyx_n_s_Union;
  PyObject *__pyx_n_s_ValueError;
  PyObject *__pyx_kp_u__3;
  PyObject *__pyx_n_s__37;
  PyObject *__pyx_kp_u__4;
  PyObject *__pyx_n_s__6;
  PyObject *__pyx_kp_u__6;
  PyObject *__pyx_n_s__8;
  PyObject *__pyx_kp_u__9;
  PyObject *__pyx_n_s_algorithm;
  PyObject *__pyx_n_s_algorithms;
  PyObject *__pyx_n_s_api_jws;
  PyObject *__pyx_n_s_args;
  PyObject *__pyx_n_s_asyncio_coroutines;
  PyObject *__pyx_n_u_aud;
  PyObject *__pyx_n_s_audience;
  PyObject *__pyx_n_s_audience_claims;
  PyObject *__pyx_kp_u_audience_must_be_a_string_iterab;
  PyObject *__pyx_n_s_calendar;
  PyObject *__pyx_n_s_claim;
  PyObject *__pyx_n_s_cline_in_traceback;
  PyObject *__pyx_n_s_close;
  PyObject *__pyx_n_s_cls;
  PyObject *__pyx_n_s_collections_abc;
  PyObject *__pyx_n_s_datetime;
  PyObject *__pyx_n_s_decode;
  PyObject *__pyx_n_s_decode_complete;
  PyObject *__pyx_n_s_decoded;
  PyObject *__pyx_n_s_dict;
  PyObject *__pyx_kp_u_disable;
  PyObject *__pyx_n_s_doc;
  PyObject *__pyx_n_s_dumps;
  PyObject *__pyx_n_s_e;
  PyObject *__pyx_kp_u_enable;
  PyObject *__pyx_n_s_encode;
  PyObject *__pyx_n_s_exceptions;
  PyObject *__pyx_n_s_exp;
  PyObject *__pyx_n_u_exp;
  PyObject *__pyx_kp_u_gc;
  PyObject *__pyx_n_s_genexpr;
  PyObject *__pyx_n_s_get;
  PyObject *__pyx_n_s_get_default_options;
  PyObject *__pyx_n_s_headers;
  PyObject *__pyx_n_u_iat;
  PyObject *__pyx_n_s_import;
  PyObject *__pyx_n_s_init;
  PyObject *__pyx_n_s_init_subclass;
  PyObject *__pyx_n_s_initializing;
  PyObject *__pyx_n_s_is_coroutine;
  PyObject *__pyx_kp_u_isenabled;
  PyObject *__pyx_n_u_iss;
  PyObject *__pyx_n_s_issuer;
  PyObject *__pyx_n_s_items;
  PyObject *__pyx_n_s_json;
  PyObject *__pyx_n_s_json_encoder;
  PyObject *__pyx_n_s_json_payload;
  PyObject *__pyx_n_s_jwt;
  PyObject *__pyx_n_s_jwt_api_jwt;
  PyObject *__pyx_n_s_jwt_global_obj;
  PyObject *__pyx_n_s_key;
  PyObject *__pyx_n_s_kwargs;
  PyObject *__pyx_n_s_leeway;
  PyObject *__pyx_n_s_loads;
  PyObject *__pyx_n_s_main;
  PyObject *__pyx_n_s_merged_options;
  PyObject *__pyx_n_s_metaclass;
  PyObject *__pyx_n_s_module;
  PyObject *__pyx_kp_s_mtf_module_jwt_api_jwt_py;
  PyObject *__pyx_n_s_name;
  PyObject *__pyx_n_s_nbf;
  PyObject *__pyx_n_u_nbf;
  PyObject *__pyx_n_s_now;
  PyObject *__pyx_n_s_options;
  PyObject *__pyx_n_s_payload;
  PyObject *__pyx_n_u_payload;
  PyObject *__pyx_n_s_prepare;
  PyObject *__pyx_n_s_qualname;
  PyObject *__pyx_n_u_require;
  PyObject *__pyx_n_s_return;
  PyObject *__pyx_n_s_self;
  PyObject *__pyx_n_s_send;
  PyObject *__pyx_n_s_separators;
  PyObject *__pyx_n_s_set_name;
  PyObject *__pyx_n_s_setdefault;
  PyObject *__pyx_n_s_spec;
  PyObject *__pyx_n_s_staticmethod;
  PyObject *__pyx_n_s_str;
  PyObject *__pyx_n_s_super;
  PyObject *__pyx_n_s_test;
  PyObject *__pyx_n_s_throw;
  PyObject *__pyx_n_s_time_claim;
  PyObject *__pyx_n_s_timedelta;
  PyObject *__pyx_n_s_timegm;
  PyObject *__pyx_n_s_timezone;
  PyObject *__pyx_n_s_total_seconds;
  PyObject *__pyx_n_s_typing;
  PyObject *__pyx_n_s_tz;
  PyObject *__pyx_n_s_utc;
  PyObject *__pyx_n_s_utctimetuple;
  PyObject *__pyx_kp_u_utf_8;
  PyObject *__pyx_n_s_validate_aud;
  PyObject *__pyx_n_s_validate_claims;
  PyObject *__pyx_n_s_validate_exp;
  PyObject *__pyx_n_s_validate_iat;
  PyObject *__pyx_n_s_validate_iss;
  PyObject *__pyx_n_s_validate_nbf;
  PyObject *__pyx_n_s_validate_required_claims;
  PyObject *__pyx_n_u_verify_aud;
  PyObject *__pyx_n_u_verify_exp;
  PyObject *__pyx_n_u_verify_iat;
  PyObject *__pyx_n_u_verify_iss;
  PyObject *__pyx_n_u_verify_nbf;
  PyObject *__pyx_n_u_verify_signature;
  PyObject *__pyx_int_0;
  PyObject *__pyx_tuple_;
  PyObject *__pyx_tuple__2;
  PyObject *__pyx_tuple__5;
  PyObject *__pyx_tuple__7;
  PyObject *__pyx_tuple__10;
  PyObject *__pyx_tuple__12;
  PyObject *__pyx_tuple__14;
  PyObject *__pyx_tuple__16;
  PyObject *__pyx_tuple__17;
  PyObject *__pyx_tuple__19;
  PyObject *__pyx_tuple__20;
  PyObject *__pyx_tuple__22;
  PyObject *__pyx_tuple__24;
  PyObject *__pyx_tuple__25;
  PyObject *__pyx_tuple__27;
  PyObject *__pyx_tuple__29;
  PyObject *__pyx_tuple__31;
  PyObject *__pyx_tuple__33;
  PyObject *__pyx_tuple__35;
  PyObject *__pyx_codeobj__11;
  PyObject *__pyx_codeobj__13;
  PyObject *__pyx_codeobj__15;
  PyObject *__pyx_codeobj__18;
  PyObject *__pyx_codeobj__21;
  PyObject *__pyx_codeobj__23;
  PyObject *__pyx_codeobj__26;
  PyObject *__pyx_codeobj__28;
  PyObject *__pyx_codeobj__30;
  PyObject *__pyx_codeobj__32;
  PyObject *__pyx_codeobj__34;
  PyObject *__pyx_codeobj__36;
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
  Py_CLEAR(clear_module_state->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud);
  Py_CLEAR(clear_module_state->__pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud);
  Py_CLEAR(clear_module_state->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr);
  Py_CLEAR(clear_module_state->__pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr);
  Py_CLEAR(clear_module_state->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr);
  Py_CLEAR(clear_module_state->__pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr);
  Py_CLEAR(clear_module_state->__pyx_n_s_Any);
  Py_CLEAR(clear_module_state->__pyx_n_s_DecodeError);
  Py_CLEAR(clear_module_state->__pyx_n_s_Dict);
  Py_CLEAR(clear_module_state->__pyx_kp_s_Dict_str_Any);
  Py_CLEAR(clear_module_state->__pyx_kp_s_Dict_str_Union_bool_List_str);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Expecting_a_mapping_object_as_JW);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Expiration_Time_claim_exp_must_b);
  Py_CLEAR(clear_module_state->__pyx_n_s_ExpiredSignatureError);
  Py_CLEAR(clear_module_state->__pyx_n_u_HS256);
  Py_CLEAR(clear_module_state->__pyx_n_s_ImmatureSignatureError);
  Py_CLEAR(clear_module_state->__pyx_n_s_InvalidAudienceError);
  Py_CLEAR(clear_module_state->__pyx_n_s_InvalidIssuedAtError);
  Py_CLEAR(clear_module_state->__pyx_n_s_InvalidIssuerError);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Invalid_audience);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Invalid_claim_format_in_token);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Invalid_issuer);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Invalid_payload_string_must_be_a);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Invalid_payload_string_s);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Issued_At_claim_iat_must_be_an_i);
  Py_CLEAR(clear_module_state->__pyx_kp_u_It_is_required_that_you_pass_in);
  Py_CLEAR(clear_module_state->__pyx_n_s_Iterable);
  Py_CLEAR(clear_module_state->__pyx_n_s_List);
  Py_CLEAR(clear_module_state->__pyx_n_s_Mapping);
  Py_CLEAR(clear_module_state->__pyx_n_s_MissingRequiredClaimError);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Not_Before_claim_nbf_must_be_an);
  Py_CLEAR(clear_module_state->__pyx_n_s_Optional);
  Py_CLEAR(clear_module_state->__pyx_kp_s_Optional_Dict);
  Py_CLEAR(clear_module_state->__pyx_kp_s_Optional_List_str);
  Py_CLEAR(clear_module_state->__pyx_kp_s_Optional_Type_json_JSONEncoder);
  Py_CLEAR(clear_module_state->__pyx_kp_s_Optional_str);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT___init);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__get_default_options);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_aud);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_aud_locals_genex);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_claims);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_exp);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_iat);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_iss);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_nbf);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT__validate_required_claims);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT_decode);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT_decode_complete);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyJWT_encode);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Signature_has_expired);
  Py_CLEAR(clear_module_state->__pyx_kp_u_The_token_is_not_yet_valid_nbf);
  Py_CLEAR(clear_module_state->__pyx_n_s_Type);
  Py_CLEAR(clear_module_state->__pyx_n_s_TypeError);
  Py_CLEAR(clear_module_state->__pyx_n_s_Union);
  Py_CLEAR(clear_module_state->__pyx_n_s_ValueError);
  Py_CLEAR(clear_module_state->__pyx_kp_u__3);
  Py_CLEAR(clear_module_state->__pyx_n_s__37);
  Py_CLEAR(clear_module_state->__pyx_kp_u__4);
  Py_CLEAR(clear_module_state->__pyx_n_s__6);
  Py_CLEAR(clear_module_state->__pyx_kp_u__6);
  Py_CLEAR(clear_module_state->__pyx_n_s__8);
  Py_CLEAR(clear_module_state->__pyx_kp_u__9);
  Py_CLEAR(clear_module_state->__pyx_n_s_algorithm);
  Py_CLEAR(clear_module_state->__pyx_n_s_algorithms);
  Py_CLEAR(clear_module_state->__pyx_n_s_api_jws);
  Py_CLEAR(clear_module_state->__pyx_n_s_args);
  Py_CLEAR(clear_module_state->__pyx_n_s_asyncio_coroutines);
  Py_CLEAR(clear_module_state->__pyx_n_u_aud);
  Py_CLEAR(clear_module_state->__pyx_n_s_audience);
  Py_CLEAR(clear_module_state->__pyx_n_s_audience_claims);
  Py_CLEAR(clear_module_state->__pyx_kp_u_audience_must_be_a_string_iterab);
  Py_CLEAR(clear_module_state->__pyx_n_s_calendar);
  Py_CLEAR(clear_module_state->__pyx_n_s_claim);
  Py_CLEAR(clear_module_state->__pyx_n_s_cline_in_traceback);
  Py_CLEAR(clear_module_state->__pyx_n_s_close);
  Py_CLEAR(clear_module_state->__pyx_n_s_cls);
  Py_CLEAR(clear_module_state->__pyx_n_s_collections_abc);
  Py_CLEAR(clear_module_state->__pyx_n_s_datetime);
  Py_CLEAR(clear_module_state->__pyx_n_s_decode);
  Py_CLEAR(clear_module_state->__pyx_n_s_decode_complete);
  Py_CLEAR(clear_module_state->__pyx_n_s_decoded);
  Py_CLEAR(clear_module_state->__pyx_n_s_dict);
  Py_CLEAR(clear_module_state->__pyx_kp_u_disable);
  Py_CLEAR(clear_module_state->__pyx_n_s_doc);
  Py_CLEAR(clear_module_state->__pyx_n_s_dumps);
  Py_CLEAR(clear_module_state->__pyx_n_s_e);
  Py_CLEAR(clear_module_state->__pyx_kp_u_enable);
  Py_CLEAR(clear_module_state->__pyx_n_s_encode);
  Py_CLEAR(clear_module_state->__pyx_n_s_exceptions);
  Py_CLEAR(clear_module_state->__pyx_n_s_exp);
  Py_CLEAR(clear_module_state->__pyx_n_u_exp);
  Py_CLEAR(clear_module_state->__pyx_kp_u_gc);
  Py_CLEAR(clear_module_state->__pyx_n_s_genexpr);
  Py_CLEAR(clear_module_state->__pyx_n_s_get);
  Py_CLEAR(clear_module_state->__pyx_n_s_get_default_options);
  Py_CLEAR(clear_module_state->__pyx_n_s_headers);
  Py_CLEAR(clear_module_state->__pyx_n_u_iat);
  Py_CLEAR(clear_module_state->__pyx_n_s_import);
  Py_CLEAR(clear_module_state->__pyx_n_s_init);
  Py_CLEAR(clear_module_state->__pyx_n_s_init_subclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_initializing);
  Py_CLEAR(clear_module_state->__pyx_n_s_is_coroutine);
  Py_CLEAR(clear_module_state->__pyx_kp_u_isenabled);
  Py_CLEAR(clear_module_state->__pyx_n_u_iss);
  Py_CLEAR(clear_module_state->__pyx_n_s_issuer);
  Py_CLEAR(clear_module_state->__pyx_n_s_items);
  Py_CLEAR(clear_module_state->__pyx_n_s_json);
  Py_CLEAR(clear_module_state->__pyx_n_s_json_encoder);
  Py_CLEAR(clear_module_state->__pyx_n_s_json_payload);
  Py_CLEAR(clear_module_state->__pyx_n_s_jwt);
  Py_CLEAR(clear_module_state->__pyx_n_s_jwt_api_jwt);
  Py_CLEAR(clear_module_state->__pyx_n_s_jwt_global_obj);
  Py_CLEAR(clear_module_state->__pyx_n_s_key);
  Py_CLEAR(clear_module_state->__pyx_n_s_kwargs);
  Py_CLEAR(clear_module_state->__pyx_n_s_leeway);
  Py_CLEAR(clear_module_state->__pyx_n_s_loads);
  Py_CLEAR(clear_module_state->__pyx_n_s_main);
  Py_CLEAR(clear_module_state->__pyx_n_s_merged_options);
  Py_CLEAR(clear_module_state->__pyx_n_s_metaclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_module);
  Py_CLEAR(clear_module_state->__pyx_kp_s_mtf_module_jwt_api_jwt_py);
  Py_CLEAR(clear_module_state->__pyx_n_s_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_nbf);
  Py_CLEAR(clear_module_state->__pyx_n_u_nbf);
  Py_CLEAR(clear_module_state->__pyx_n_s_now);
  Py_CLEAR(clear_module_state->__pyx_n_s_options);
  Py_CLEAR(clear_module_state->__pyx_n_s_payload);
  Py_CLEAR(clear_module_state->__pyx_n_u_payload);
  Py_CLEAR(clear_module_state->__pyx_n_s_prepare);
  Py_CLEAR(clear_module_state->__pyx_n_s_qualname);
  Py_CLEAR(clear_module_state->__pyx_n_u_require);
  Py_CLEAR(clear_module_state->__pyx_n_s_return);
  Py_CLEAR(clear_module_state->__pyx_n_s_self);
  Py_CLEAR(clear_module_state->__pyx_n_s_send);
  Py_CLEAR(clear_module_state->__pyx_n_s_separators);
  Py_CLEAR(clear_module_state->__pyx_n_s_set_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_setdefault);
  Py_CLEAR(clear_module_state->__pyx_n_s_spec);
  Py_CLEAR(clear_module_state->__pyx_n_s_staticmethod);
  Py_CLEAR(clear_module_state->__pyx_n_s_str);
  Py_CLEAR(clear_module_state->__pyx_n_s_super);
  Py_CLEAR(clear_module_state->__pyx_n_s_test);
  Py_CLEAR(clear_module_state->__pyx_n_s_throw);
  Py_CLEAR(clear_module_state->__pyx_n_s_time_claim);
  Py_CLEAR(clear_module_state->__pyx_n_s_timedelta);
  Py_CLEAR(clear_module_state->__pyx_n_s_timegm);
  Py_CLEAR(clear_module_state->__pyx_n_s_timezone);
  Py_CLEAR(clear_module_state->__pyx_n_s_total_seconds);
  Py_CLEAR(clear_module_state->__pyx_n_s_typing);
  Py_CLEAR(clear_module_state->__pyx_n_s_tz);
  Py_CLEAR(clear_module_state->__pyx_n_s_utc);
  Py_CLEAR(clear_module_state->__pyx_n_s_utctimetuple);
  Py_CLEAR(clear_module_state->__pyx_kp_u_utf_8);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_aud);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_claims);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_exp);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_iat);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_iss);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_nbf);
  Py_CLEAR(clear_module_state->__pyx_n_s_validate_required_claims);
  Py_CLEAR(clear_module_state->__pyx_n_u_verify_aud);
  Py_CLEAR(clear_module_state->__pyx_n_u_verify_exp);
  Py_CLEAR(clear_module_state->__pyx_n_u_verify_iat);
  Py_CLEAR(clear_module_state->__pyx_n_u_verify_iss);
  Py_CLEAR(clear_module_state->__pyx_n_u_verify_nbf);
  Py_CLEAR(clear_module_state->__pyx_n_u_verify_signature);
  Py_CLEAR(clear_module_state->__pyx_int_0);
  Py_CLEAR(clear_module_state->__pyx_tuple_);
  Py_CLEAR(clear_module_state->__pyx_tuple__2);
  Py_CLEAR(clear_module_state->__pyx_tuple__5);
  Py_CLEAR(clear_module_state->__pyx_tuple__7);
  Py_CLEAR(clear_module_state->__pyx_tuple__10);
  Py_CLEAR(clear_module_state->__pyx_tuple__12);
  Py_CLEAR(clear_module_state->__pyx_tuple__14);
  Py_CLEAR(clear_module_state->__pyx_tuple__16);
  Py_CLEAR(clear_module_state->__pyx_tuple__17);
  Py_CLEAR(clear_module_state->__pyx_tuple__19);
  Py_CLEAR(clear_module_state->__pyx_tuple__20);
  Py_CLEAR(clear_module_state->__pyx_tuple__22);
  Py_CLEAR(clear_module_state->__pyx_tuple__24);
  Py_CLEAR(clear_module_state->__pyx_tuple__25);
  Py_CLEAR(clear_module_state->__pyx_tuple__27);
  Py_CLEAR(clear_module_state->__pyx_tuple__29);
  Py_CLEAR(clear_module_state->__pyx_tuple__31);
  Py_CLEAR(clear_module_state->__pyx_tuple__33);
  Py_CLEAR(clear_module_state->__pyx_tuple__35);
  Py_CLEAR(clear_module_state->__pyx_codeobj__11);
  Py_CLEAR(clear_module_state->__pyx_codeobj__13);
  Py_CLEAR(clear_module_state->__pyx_codeobj__15);
  Py_CLEAR(clear_module_state->__pyx_codeobj__18);
  Py_CLEAR(clear_module_state->__pyx_codeobj__21);
  Py_CLEAR(clear_module_state->__pyx_codeobj__23);
  Py_CLEAR(clear_module_state->__pyx_codeobj__26);
  Py_CLEAR(clear_module_state->__pyx_codeobj__28);
  Py_CLEAR(clear_module_state->__pyx_codeobj__30);
  Py_CLEAR(clear_module_state->__pyx_codeobj__32);
  Py_CLEAR(clear_module_state->__pyx_codeobj__34);
  Py_CLEAR(clear_module_state->__pyx_codeobj__36);
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
  Py_VISIT(traverse_module_state->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud);
  Py_VISIT(traverse_module_state->__pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud);
  Py_VISIT(traverse_module_state->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr);
  Py_VISIT(traverse_module_state->__pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr);
  Py_VISIT(traverse_module_state->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr);
  Py_VISIT(traverse_module_state->__pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr);
  Py_VISIT(traverse_module_state->__pyx_n_s_Any);
  Py_VISIT(traverse_module_state->__pyx_n_s_DecodeError);
  Py_VISIT(traverse_module_state->__pyx_n_s_Dict);
  Py_VISIT(traverse_module_state->__pyx_kp_s_Dict_str_Any);
  Py_VISIT(traverse_module_state->__pyx_kp_s_Dict_str_Union_bool_List_str);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Expecting_a_mapping_object_as_JW);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Expiration_Time_claim_exp_must_b);
  Py_VISIT(traverse_module_state->__pyx_n_s_ExpiredSignatureError);
  Py_VISIT(traverse_module_state->__pyx_n_u_HS256);
  Py_VISIT(traverse_module_state->__pyx_n_s_ImmatureSignatureError);
  Py_VISIT(traverse_module_state->__pyx_n_s_InvalidAudienceError);
  Py_VISIT(traverse_module_state->__pyx_n_s_InvalidIssuedAtError);
  Py_VISIT(traverse_module_state->__pyx_n_s_InvalidIssuerError);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Invalid_audience);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Invalid_claim_format_in_token);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Invalid_issuer);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Invalid_payload_string_must_be_a);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Invalid_payload_string_s);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Issued_At_claim_iat_must_be_an_i);
  Py_VISIT(traverse_module_state->__pyx_kp_u_It_is_required_that_you_pass_in);
  Py_VISIT(traverse_module_state->__pyx_n_s_Iterable);
  Py_VISIT(traverse_module_state->__pyx_n_s_List);
  Py_VISIT(traverse_module_state->__pyx_n_s_Mapping);
  Py_VISIT(traverse_module_state->__pyx_n_s_MissingRequiredClaimError);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Not_Before_claim_nbf_must_be_an);
  Py_VISIT(traverse_module_state->__pyx_n_s_Optional);
  Py_VISIT(traverse_module_state->__pyx_kp_s_Optional_Dict);
  Py_VISIT(traverse_module_state->__pyx_kp_s_Optional_List_str);
  Py_VISIT(traverse_module_state->__pyx_kp_s_Optional_Type_json_JSONEncoder);
  Py_VISIT(traverse_module_state->__pyx_kp_s_Optional_str);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT___init);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__get_default_options);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_aud);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_aud_locals_genex);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_claims);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_exp);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_iat);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_iss);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_nbf);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT__validate_required_claims);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT_decode);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT_decode_complete);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyJWT_encode);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Signature_has_expired);
  Py_VISIT(traverse_module_state->__pyx_kp_u_The_token_is_not_yet_valid_nbf);
  Py_VISIT(traverse_module_state->__pyx_n_s_Type);
  Py_VISIT(traverse_module_state->__pyx_n_s_TypeError);
  Py_VISIT(traverse_module_state->__pyx_n_s_Union);
  Py_VISIT(traverse_module_state->__pyx_n_s_ValueError);
  Py_VISIT(traverse_module_state->__pyx_kp_u__3);
  Py_VISIT(traverse_module_state->__pyx_n_s__37);
  Py_VISIT(traverse_module_state->__pyx_kp_u__4);
  Py_VISIT(traverse_module_state->__pyx_n_s__6);
  Py_VISIT(traverse_module_state->__pyx_kp_u__6);
  Py_VISIT(traverse_module_state->__pyx_n_s__8);
  Py_VISIT(traverse_module_state->__pyx_kp_u__9);
  Py_VISIT(traverse_module_state->__pyx_n_s_algorithm);
  Py_VISIT(traverse_module_state->__pyx_n_s_algorithms);
  Py_VISIT(traverse_module_state->__pyx_n_s_api_jws);
  Py_VISIT(traverse_module_state->__pyx_n_s_args);
  Py_VISIT(traverse_module_state->__pyx_n_s_asyncio_coroutines);
  Py_VISIT(traverse_module_state->__pyx_n_u_aud);
  Py_VISIT(traverse_module_state->__pyx_n_s_audience);
  Py_VISIT(traverse_module_state->__pyx_n_s_audience_claims);
  Py_VISIT(traverse_module_state->__pyx_kp_u_audience_must_be_a_string_iterab);
  Py_VISIT(traverse_module_state->__pyx_n_s_calendar);
  Py_VISIT(traverse_module_state->__pyx_n_s_claim);
  Py_VISIT(traverse_module_state->__pyx_n_s_cline_in_traceback);
  Py_VISIT(traverse_module_state->__pyx_n_s_close);
  Py_VISIT(traverse_module_state->__pyx_n_s_cls);
  Py_VISIT(traverse_module_state->__pyx_n_s_collections_abc);
  Py_VISIT(traverse_module_state->__pyx_n_s_datetime);
  Py_VISIT(traverse_module_state->__pyx_n_s_decode);
  Py_VISIT(traverse_module_state->__pyx_n_s_decode_complete);
  Py_VISIT(traverse_module_state->__pyx_n_s_decoded);
  Py_VISIT(traverse_module_state->__pyx_n_s_dict);
  Py_VISIT(traverse_module_state->__pyx_kp_u_disable);
  Py_VISIT(traverse_module_state->__pyx_n_s_doc);
  Py_VISIT(traverse_module_state->__pyx_n_s_dumps);
  Py_VISIT(traverse_module_state->__pyx_n_s_e);
  Py_VISIT(traverse_module_state->__pyx_kp_u_enable);
  Py_VISIT(traverse_module_state->__pyx_n_s_encode);
  Py_VISIT(traverse_module_state->__pyx_n_s_exceptions);
  Py_VISIT(traverse_module_state->__pyx_n_s_exp);
  Py_VISIT(traverse_module_state->__pyx_n_u_exp);
  Py_VISIT(traverse_module_state->__pyx_kp_u_gc);
  Py_VISIT(traverse_module_state->__pyx_n_s_genexpr);
  Py_VISIT(traverse_module_state->__pyx_n_s_get);
  Py_VISIT(traverse_module_state->__pyx_n_s_get_default_options);
  Py_VISIT(traverse_module_state->__pyx_n_s_headers);
  Py_VISIT(traverse_module_state->__pyx_n_u_iat);
  Py_VISIT(traverse_module_state->__pyx_n_s_import);
  Py_VISIT(traverse_module_state->__pyx_n_s_init);
  Py_VISIT(traverse_module_state->__pyx_n_s_init_subclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_initializing);
  Py_VISIT(traverse_module_state->__pyx_n_s_is_coroutine);
  Py_VISIT(traverse_module_state->__pyx_kp_u_isenabled);
  Py_VISIT(traverse_module_state->__pyx_n_u_iss);
  Py_VISIT(traverse_module_state->__pyx_n_s_issuer);
  Py_VISIT(traverse_module_state->__pyx_n_s_items);
  Py_VISIT(traverse_module_state->__pyx_n_s_json);
  Py_VISIT(traverse_module_state->__pyx_n_s_json_encoder);
  Py_VISIT(traverse_module_state->__pyx_n_s_json_payload);
  Py_VISIT(traverse_module_state->__pyx_n_s_jwt);
  Py_VISIT(traverse_module_state->__pyx_n_s_jwt_api_jwt);
  Py_VISIT(traverse_module_state->__pyx_n_s_jwt_global_obj);
  Py_VISIT(traverse_module_state->__pyx_n_s_key);
  Py_VISIT(traverse_module_state->__pyx_n_s_kwargs);
  Py_VISIT(traverse_module_state->__pyx_n_s_leeway);
  Py_VISIT(traverse_module_state->__pyx_n_s_loads);
  Py_VISIT(traverse_module_state->__pyx_n_s_main);
  Py_VISIT(traverse_module_state->__pyx_n_s_merged_options);
  Py_VISIT(traverse_module_state->__pyx_n_s_metaclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_module);
  Py_VISIT(traverse_module_state->__pyx_kp_s_mtf_module_jwt_api_jwt_py);
  Py_VISIT(traverse_module_state->__pyx_n_s_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_nbf);
  Py_VISIT(traverse_module_state->__pyx_n_u_nbf);
  Py_VISIT(traverse_module_state->__pyx_n_s_now);
  Py_VISIT(traverse_module_state->__pyx_n_s_options);
  Py_VISIT(traverse_module_state->__pyx_n_s_payload);
  Py_VISIT(traverse_module_state->__pyx_n_u_payload);
  Py_VISIT(traverse_module_state->__pyx_n_s_prepare);
  Py_VISIT(traverse_module_state->__pyx_n_s_qualname);
  Py_VISIT(traverse_module_state->__pyx_n_u_require);
  Py_VISIT(traverse_module_state->__pyx_n_s_return);
  Py_VISIT(traverse_module_state->__pyx_n_s_self);
  Py_VISIT(traverse_module_state->__pyx_n_s_send);
  Py_VISIT(traverse_module_state->__pyx_n_s_separators);
  Py_VISIT(traverse_module_state->__pyx_n_s_set_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_setdefault);
  Py_VISIT(traverse_module_state->__pyx_n_s_spec);
  Py_VISIT(traverse_module_state->__pyx_n_s_staticmethod);
  Py_VISIT(traverse_module_state->__pyx_n_s_str);
  Py_VISIT(traverse_module_state->__pyx_n_s_super);
  Py_VISIT(traverse_module_state->__pyx_n_s_test);
  Py_VISIT(traverse_module_state->__pyx_n_s_throw);
  Py_VISIT(traverse_module_state->__pyx_n_s_time_claim);
  Py_VISIT(traverse_module_state->__pyx_n_s_timedelta);
  Py_VISIT(traverse_module_state->__pyx_n_s_timegm);
  Py_VISIT(traverse_module_state->__pyx_n_s_timezone);
  Py_VISIT(traverse_module_state->__pyx_n_s_total_seconds);
  Py_VISIT(traverse_module_state->__pyx_n_s_typing);
  Py_VISIT(traverse_module_state->__pyx_n_s_tz);
  Py_VISIT(traverse_module_state->__pyx_n_s_utc);
  Py_VISIT(traverse_module_state->__pyx_n_s_utctimetuple);
  Py_VISIT(traverse_module_state->__pyx_kp_u_utf_8);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_aud);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_claims);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_exp);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_iat);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_iss);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_nbf);
  Py_VISIT(traverse_module_state->__pyx_n_s_validate_required_claims);
  Py_VISIT(traverse_module_state->__pyx_n_u_verify_aud);
  Py_VISIT(traverse_module_state->__pyx_n_u_verify_exp);
  Py_VISIT(traverse_module_state->__pyx_n_u_verify_iat);
  Py_VISIT(traverse_module_state->__pyx_n_u_verify_iss);
  Py_VISIT(traverse_module_state->__pyx_n_u_verify_nbf);
  Py_VISIT(traverse_module_state->__pyx_n_u_verify_signature);
  Py_VISIT(traverse_module_state->__pyx_int_0);
  Py_VISIT(traverse_module_state->__pyx_tuple_);
  Py_VISIT(traverse_module_state->__pyx_tuple__2);
  Py_VISIT(traverse_module_state->__pyx_tuple__5);
  Py_VISIT(traverse_module_state->__pyx_tuple__7);
  Py_VISIT(traverse_module_state->__pyx_tuple__10);
  Py_VISIT(traverse_module_state->__pyx_tuple__12);
  Py_VISIT(traverse_module_state->__pyx_tuple__14);
  Py_VISIT(traverse_module_state->__pyx_tuple__16);
  Py_VISIT(traverse_module_state->__pyx_tuple__17);
  Py_VISIT(traverse_module_state->__pyx_tuple__19);
  Py_VISIT(traverse_module_state->__pyx_tuple__20);
  Py_VISIT(traverse_module_state->__pyx_tuple__22);
  Py_VISIT(traverse_module_state->__pyx_tuple__24);
  Py_VISIT(traverse_module_state->__pyx_tuple__25);
  Py_VISIT(traverse_module_state->__pyx_tuple__27);
  Py_VISIT(traverse_module_state->__pyx_tuple__29);
  Py_VISIT(traverse_module_state->__pyx_tuple__31);
  Py_VISIT(traverse_module_state->__pyx_tuple__33);
  Py_VISIT(traverse_module_state->__pyx_tuple__35);
  Py_VISIT(traverse_module_state->__pyx_codeobj__11);
  Py_VISIT(traverse_module_state->__pyx_codeobj__13);
  Py_VISIT(traverse_module_state->__pyx_codeobj__15);
  Py_VISIT(traverse_module_state->__pyx_codeobj__18);
  Py_VISIT(traverse_module_state->__pyx_codeobj__21);
  Py_VISIT(traverse_module_state->__pyx_codeobj__23);
  Py_VISIT(traverse_module_state->__pyx_codeobj__26);
  Py_VISIT(traverse_module_state->__pyx_codeobj__28);
  Py_VISIT(traverse_module_state->__pyx_codeobj__30);
  Py_VISIT(traverse_module_state->__pyx_codeobj__32);
  Py_VISIT(traverse_module_state->__pyx_codeobj__34);
  Py_VISIT(traverse_module_state->__pyx_codeobj__36);
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
#define __pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud __pyx_mstate_global->__pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud
#define __pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr __pyx_mstate_global->__pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr
#define __pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr __pyx_mstate_global->__pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr
#endif
#define __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud __pyx_mstate_global->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud
#define __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr __pyx_mstate_global->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr
#define __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr __pyx_mstate_global->__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr
#define __pyx_n_s_Any __pyx_mstate_global->__pyx_n_s_Any
#define __pyx_n_s_DecodeError __pyx_mstate_global->__pyx_n_s_DecodeError
#define __pyx_n_s_Dict __pyx_mstate_global->__pyx_n_s_Dict
#define __pyx_kp_s_Dict_str_Any __pyx_mstate_global->__pyx_kp_s_Dict_str_Any
#define __pyx_kp_s_Dict_str_Union_bool_List_str __pyx_mstate_global->__pyx_kp_s_Dict_str_Union_bool_List_str
#define __pyx_kp_u_Expecting_a_mapping_object_as_JW __pyx_mstate_global->__pyx_kp_u_Expecting_a_mapping_object_as_JW
#define __pyx_kp_u_Expiration_Time_claim_exp_must_b __pyx_mstate_global->__pyx_kp_u_Expiration_Time_claim_exp_must_b
#define __pyx_n_s_ExpiredSignatureError __pyx_mstate_global->__pyx_n_s_ExpiredSignatureError
#define __pyx_n_u_HS256 __pyx_mstate_global->__pyx_n_u_HS256
#define __pyx_n_s_ImmatureSignatureError __pyx_mstate_global->__pyx_n_s_ImmatureSignatureError
#define __pyx_n_s_InvalidAudienceError __pyx_mstate_global->__pyx_n_s_InvalidAudienceError
#define __pyx_n_s_InvalidIssuedAtError __pyx_mstate_global->__pyx_n_s_InvalidIssuedAtError
#define __pyx_n_s_InvalidIssuerError __pyx_mstate_global->__pyx_n_s_InvalidIssuerError
#define __pyx_kp_u_Invalid_audience __pyx_mstate_global->__pyx_kp_u_Invalid_audience
#define __pyx_kp_u_Invalid_claim_format_in_token __pyx_mstate_global->__pyx_kp_u_Invalid_claim_format_in_token
#define __pyx_kp_u_Invalid_issuer __pyx_mstate_global->__pyx_kp_u_Invalid_issuer
#define __pyx_kp_u_Invalid_payload_string_must_be_a __pyx_mstate_global->__pyx_kp_u_Invalid_payload_string_must_be_a
#define __pyx_kp_u_Invalid_payload_string_s __pyx_mstate_global->__pyx_kp_u_Invalid_payload_string_s
#define __pyx_kp_u_Issued_At_claim_iat_must_be_an_i __pyx_mstate_global->__pyx_kp_u_Issued_At_claim_iat_must_be_an_i
#define __pyx_kp_u_It_is_required_that_you_pass_in __pyx_mstate_global->__pyx_kp_u_It_is_required_that_you_pass_in
#define __pyx_n_s_Iterable __pyx_mstate_global->__pyx_n_s_Iterable
#define __pyx_n_s_List __pyx_mstate_global->__pyx_n_s_List
#define __pyx_n_s_Mapping __pyx_mstate_global->__pyx_n_s_Mapping
#define __pyx_n_s_MissingRequiredClaimError __pyx_mstate_global->__pyx_n_s_MissingRequiredClaimError
#define __pyx_kp_u_Not_Before_claim_nbf_must_be_an __pyx_mstate_global->__pyx_kp_u_Not_Before_claim_nbf_must_be_an
#define __pyx_n_s_Optional __pyx_mstate_global->__pyx_n_s_Optional
#define __pyx_kp_s_Optional_Dict __pyx_mstate_global->__pyx_kp_s_Optional_Dict
#define __pyx_kp_s_Optional_List_str __pyx_mstate_global->__pyx_kp_s_Optional_List_str
#define __pyx_kp_s_Optional_Type_json_JSONEncoder __pyx_mstate_global->__pyx_kp_s_Optional_Type_json_JSONEncoder
#define __pyx_kp_s_Optional_str __pyx_mstate_global->__pyx_kp_s_Optional_str
#define __pyx_n_s_PyJWT __pyx_mstate_global->__pyx_n_s_PyJWT
#define __pyx_n_s_PyJWT___init __pyx_mstate_global->__pyx_n_s_PyJWT___init
#define __pyx_n_s_PyJWT__get_default_options __pyx_mstate_global->__pyx_n_s_PyJWT__get_default_options
#define __pyx_n_s_PyJWT__validate_aud __pyx_mstate_global->__pyx_n_s_PyJWT__validate_aud
#define __pyx_n_s_PyJWT__validate_aud_locals_genex __pyx_mstate_global->__pyx_n_s_PyJWT__validate_aud_locals_genex
#define __pyx_n_s_PyJWT__validate_claims __pyx_mstate_global->__pyx_n_s_PyJWT__validate_claims
#define __pyx_n_s_PyJWT__validate_exp __pyx_mstate_global->__pyx_n_s_PyJWT__validate_exp
#define __pyx_n_s_PyJWT__validate_iat __pyx_mstate_global->__pyx_n_s_PyJWT__validate_iat
#define __pyx_n_s_PyJWT__validate_iss __pyx_mstate_global->__pyx_n_s_PyJWT__validate_iss
#define __pyx_n_s_PyJWT__validate_nbf __pyx_mstate_global->__pyx_n_s_PyJWT__validate_nbf
#define __pyx_n_s_PyJWT__validate_required_claims __pyx_mstate_global->__pyx_n_s_PyJWT__validate_required_claims
#define __pyx_n_s_PyJWT_decode __pyx_mstate_global->__pyx_n_s_PyJWT_decode
#define __pyx_n_s_PyJWT_decode_complete __pyx_mstate_global->__pyx_n_s_PyJWT_decode_complete
#define __pyx_n_s_PyJWT_encode __pyx_mstate_global->__pyx_n_s_PyJWT_encode
#define __pyx_kp_u_Signature_has_expired __pyx_mstate_global->__pyx_kp_u_Signature_has_expired
#define __pyx_kp_u_The_token_is_not_yet_valid_nbf __pyx_mstate_global->__pyx_kp_u_The_token_is_not_yet_valid_nbf
#define __pyx_n_s_Type __pyx_mstate_global->__pyx_n_s_Type
#define __pyx_n_s_TypeError __pyx_mstate_global->__pyx_n_s_TypeError
#define __pyx_n_s_Union __pyx_mstate_global->__pyx_n_s_Union
#define __pyx_n_s_ValueError __pyx_mstate_global->__pyx_n_s_ValueError
#define __pyx_kp_u__3 __pyx_mstate_global->__pyx_kp_u__3
#define __pyx_n_s__37 __pyx_mstate_global->__pyx_n_s__37
#define __pyx_kp_u__4 __pyx_mstate_global->__pyx_kp_u__4
#define __pyx_n_s__6 __pyx_mstate_global->__pyx_n_s__6
#define __pyx_kp_u__6 __pyx_mstate_global->__pyx_kp_u__6
#define __pyx_n_s__8 __pyx_mstate_global->__pyx_n_s__8
#define __pyx_kp_u__9 __pyx_mstate_global->__pyx_kp_u__9
#define __pyx_n_s_algorithm __pyx_mstate_global->__pyx_n_s_algorithm
#define __pyx_n_s_algorithms __pyx_mstate_global->__pyx_n_s_algorithms
#define __pyx_n_s_api_jws __pyx_mstate_global->__pyx_n_s_api_jws
#define __pyx_n_s_args __pyx_mstate_global->__pyx_n_s_args
#define __pyx_n_s_asyncio_coroutines __pyx_mstate_global->__pyx_n_s_asyncio_coroutines
#define __pyx_n_u_aud __pyx_mstate_global->__pyx_n_u_aud
#define __pyx_n_s_audience __pyx_mstate_global->__pyx_n_s_audience
#define __pyx_n_s_audience_claims __pyx_mstate_global->__pyx_n_s_audience_claims
#define __pyx_kp_u_audience_must_be_a_string_iterab __pyx_mstate_global->__pyx_kp_u_audience_must_be_a_string_iterab
#define __pyx_n_s_calendar __pyx_mstate_global->__pyx_n_s_calendar
#define __pyx_n_s_claim __pyx_mstate_global->__pyx_n_s_claim
#define __pyx_n_s_cline_in_traceback __pyx_mstate_global->__pyx_n_s_cline_in_traceback
#define __pyx_n_s_close __pyx_mstate_global->__pyx_n_s_close
#define __pyx_n_s_cls __pyx_mstate_global->__pyx_n_s_cls
#define __pyx_n_s_collections_abc __pyx_mstate_global->__pyx_n_s_collections_abc
#define __pyx_n_s_datetime __pyx_mstate_global->__pyx_n_s_datetime
#define __pyx_n_s_decode __pyx_mstate_global->__pyx_n_s_decode
#define __pyx_n_s_decode_complete __pyx_mstate_global->__pyx_n_s_decode_complete
#define __pyx_n_s_decoded __pyx_mstate_global->__pyx_n_s_decoded
#define __pyx_n_s_dict __pyx_mstate_global->__pyx_n_s_dict
#define __pyx_kp_u_disable __pyx_mstate_global->__pyx_kp_u_disable
#define __pyx_n_s_doc __pyx_mstate_global->__pyx_n_s_doc
#define __pyx_n_s_dumps __pyx_mstate_global->__pyx_n_s_dumps
#define __pyx_n_s_e __pyx_mstate_global->__pyx_n_s_e
#define __pyx_kp_u_enable __pyx_mstate_global->__pyx_kp_u_enable
#define __pyx_n_s_encode __pyx_mstate_global->__pyx_n_s_encode
#define __pyx_n_s_exceptions __pyx_mstate_global->__pyx_n_s_exceptions
#define __pyx_n_s_exp __pyx_mstate_global->__pyx_n_s_exp
#define __pyx_n_u_exp __pyx_mstate_global->__pyx_n_u_exp
#define __pyx_kp_u_gc __pyx_mstate_global->__pyx_kp_u_gc
#define __pyx_n_s_genexpr __pyx_mstate_global->__pyx_n_s_genexpr
#define __pyx_n_s_get __pyx_mstate_global->__pyx_n_s_get
#define __pyx_n_s_get_default_options __pyx_mstate_global->__pyx_n_s_get_default_options
#define __pyx_n_s_headers __pyx_mstate_global->__pyx_n_s_headers
#define __pyx_n_u_iat __pyx_mstate_global->__pyx_n_u_iat
#define __pyx_n_s_import __pyx_mstate_global->__pyx_n_s_import
#define __pyx_n_s_init __pyx_mstate_global->__pyx_n_s_init
#define __pyx_n_s_init_subclass __pyx_mstate_global->__pyx_n_s_init_subclass
#define __pyx_n_s_initializing __pyx_mstate_global->__pyx_n_s_initializing
#define __pyx_n_s_is_coroutine __pyx_mstate_global->__pyx_n_s_is_coroutine
#define __pyx_kp_u_isenabled __pyx_mstate_global->__pyx_kp_u_isenabled
#define __pyx_n_u_iss __pyx_mstate_global->__pyx_n_u_iss
#define __pyx_n_s_issuer __pyx_mstate_global->__pyx_n_s_issuer
#define __pyx_n_s_items __pyx_mstate_global->__pyx_n_s_items
#define __pyx_n_s_json __pyx_mstate_global->__pyx_n_s_json
#define __pyx_n_s_json_encoder __pyx_mstate_global->__pyx_n_s_json_encoder
#define __pyx_n_s_json_payload __pyx_mstate_global->__pyx_n_s_json_payload
#define __pyx_n_s_jwt __pyx_mstate_global->__pyx_n_s_jwt
#define __pyx_n_s_jwt_api_jwt __pyx_mstate_global->__pyx_n_s_jwt_api_jwt
#define __pyx_n_s_jwt_global_obj __pyx_mstate_global->__pyx_n_s_jwt_global_obj
#define __pyx_n_s_key __pyx_mstate_global->__pyx_n_s_key
#define __pyx_n_s_kwargs __pyx_mstate_global->__pyx_n_s_kwargs
#define __pyx_n_s_leeway __pyx_mstate_global->__pyx_n_s_leeway
#define __pyx_n_s_loads __pyx_mstate_global->__pyx_n_s_loads
#define __pyx_n_s_main __pyx_mstate_global->__pyx_n_s_main
#define __pyx_n_s_merged_options __pyx_mstate_global->__pyx_n_s_merged_options
#define __pyx_n_s_metaclass __pyx_mstate_global->__pyx_n_s_metaclass
#define __pyx_n_s_module __pyx_mstate_global->__pyx_n_s_module
#define __pyx_kp_s_mtf_module_jwt_api_jwt_py __pyx_mstate_global->__pyx_kp_s_mtf_module_jwt_api_jwt_py
#define __pyx_n_s_name __pyx_mstate_global->__pyx_n_s_name
#define __pyx_n_s_nbf __pyx_mstate_global->__pyx_n_s_nbf
#define __pyx_n_u_nbf __pyx_mstate_global->__pyx_n_u_nbf
#define __pyx_n_s_now __pyx_mstate_global->__pyx_n_s_now
#define __pyx_n_s_options __pyx_mstate_global->__pyx_n_s_options
#define __pyx_n_s_payload __pyx_mstate_global->__pyx_n_s_payload
#define __pyx_n_u_payload __pyx_mstate_global->__pyx_n_u_payload
#define __pyx_n_s_prepare __pyx_mstate_global->__pyx_n_s_prepare
#define __pyx_n_s_qualname __pyx_mstate_global->__pyx_n_s_qualname
#define __pyx_n_u_require __pyx_mstate_global->__pyx_n_u_require
#define __pyx_n_s_return __pyx_mstate_global->__pyx_n_s_return
#define __pyx_n_s_self __pyx_mstate_global->__pyx_n_s_self
#define __pyx_n_s_send __pyx_mstate_global->__pyx_n_s_send
#define __pyx_n_s_separators __pyx_mstate_global->__pyx_n_s_separators
#define __pyx_n_s_set_name __pyx_mstate_global->__pyx_n_s_set_name
#define __pyx_n_s_setdefault __pyx_mstate_global->__pyx_n_s_setdefault
#define __pyx_n_s_spec __pyx_mstate_global->__pyx_n_s_spec
#define __pyx_n_s_staticmethod __pyx_mstate_global->__pyx_n_s_staticmethod
#define __pyx_n_s_str __pyx_mstate_global->__pyx_n_s_str
#define __pyx_n_s_super __pyx_mstate_global->__pyx_n_s_super
#define __pyx_n_s_test __pyx_mstate_global->__pyx_n_s_test
#define __pyx_n_s_throw __pyx_mstate_global->__pyx_n_s_throw
#define __pyx_n_s_time_claim __pyx_mstate_global->__pyx_n_s_time_claim
#define __pyx_n_s_timedelta __pyx_mstate_global->__pyx_n_s_timedelta
#define __pyx_n_s_timegm __pyx_mstate_global->__pyx_n_s_timegm
#define __pyx_n_s_timezone __pyx_mstate_global->__pyx_n_s_timezone
#define __pyx_n_s_total_seconds __pyx_mstate_global->__pyx_n_s_total_seconds
#define __pyx_n_s_typing __pyx_mstate_global->__pyx_n_s_typing
#define __pyx_n_s_tz __pyx_mstate_global->__pyx_n_s_tz
#define __pyx_n_s_utc __pyx_mstate_global->__pyx_n_s_utc
#define __pyx_n_s_utctimetuple __pyx_mstate_global->__pyx_n_s_utctimetuple
#define __pyx_kp_u_utf_8 __pyx_mstate_global->__pyx_kp_u_utf_8
#define __pyx_n_s_validate_aud __pyx_mstate_global->__pyx_n_s_validate_aud
#define __pyx_n_s_validate_claims __pyx_mstate_global->__pyx_n_s_validate_claims
#define __pyx_n_s_validate_exp __pyx_mstate_global->__pyx_n_s_validate_exp
#define __pyx_n_s_validate_iat __pyx_mstate_global->__pyx_n_s_validate_iat
#define __pyx_n_s_validate_iss __pyx_mstate_global->__pyx_n_s_validate_iss
#define __pyx_n_s_validate_nbf __pyx_mstate_global->__pyx_n_s_validate_nbf
#define __pyx_n_s_validate_required_claims __pyx_mstate_global->__pyx_n_s_validate_required_claims
#define __pyx_n_u_verify_aud __pyx_mstate_global->__pyx_n_u_verify_aud
#define __pyx_n_u_verify_exp __pyx_mstate_global->__pyx_n_u_verify_exp
#define __pyx_n_u_verify_iat __pyx_mstate_global->__pyx_n_u_verify_iat
#define __pyx_n_u_verify_iss __pyx_mstate_global->__pyx_n_u_verify_iss
#define __pyx_n_u_verify_nbf __pyx_mstate_global->__pyx_n_u_verify_nbf
#define __pyx_n_u_verify_signature __pyx_mstate_global->__pyx_n_u_verify_signature
#define __pyx_int_0 __pyx_mstate_global->__pyx_int_0
#define __pyx_tuple_ __pyx_mstate_global->__pyx_tuple_
#define __pyx_tuple__2 __pyx_mstate_global->__pyx_tuple__2
#define __pyx_tuple__5 __pyx_mstate_global->__pyx_tuple__5
#define __pyx_tuple__7 __pyx_mstate_global->__pyx_tuple__7
#define __pyx_tuple__10 __pyx_mstate_global->__pyx_tuple__10
#define __pyx_tuple__12 __pyx_mstate_global->__pyx_tuple__12
#define __pyx_tuple__14 __pyx_mstate_global->__pyx_tuple__14
#define __pyx_tuple__16 __pyx_mstate_global->__pyx_tuple__16
#define __pyx_tuple__17 __pyx_mstate_global->__pyx_tuple__17
#define __pyx_tuple__19 __pyx_mstate_global->__pyx_tuple__19
#define __pyx_tuple__20 __pyx_mstate_global->__pyx_tuple__20
#define __pyx_tuple__22 __pyx_mstate_global->__pyx_tuple__22
#define __pyx_tuple__24 __pyx_mstate_global->__pyx_tuple__24
#define __pyx_tuple__25 __pyx_mstate_global->__pyx_tuple__25
#define __pyx_tuple__27 __pyx_mstate_global->__pyx_tuple__27
#define __pyx_tuple__29 __pyx_mstate_global->__pyx_tuple__29
#define __pyx_tuple__31 __pyx_mstate_global->__pyx_tuple__31
#define __pyx_tuple__33 __pyx_mstate_global->__pyx_tuple__33
#define __pyx_tuple__35 __pyx_mstate_global->__pyx_tuple__35
#define __pyx_codeobj__11 __pyx_mstate_global->__pyx_codeobj__11
#define __pyx_codeobj__13 __pyx_mstate_global->__pyx_codeobj__13
#define __pyx_codeobj__15 __pyx_mstate_global->__pyx_codeobj__15
#define __pyx_codeobj__18 __pyx_mstate_global->__pyx_codeobj__18
#define __pyx_codeobj__21 __pyx_mstate_global->__pyx_codeobj__21
#define __pyx_codeobj__23 __pyx_mstate_global->__pyx_codeobj__23
#define __pyx_codeobj__26 __pyx_mstate_global->__pyx_codeobj__26
#define __pyx_codeobj__28 __pyx_mstate_global->__pyx_codeobj__28
#define __pyx_codeobj__30 __pyx_mstate_global->__pyx_codeobj__30
#define __pyx_codeobj__32 __pyx_mstate_global->__pyx_codeobj__32
#define __pyx_codeobj__34 __pyx_mstate_global->__pyx_codeobj__34
#define __pyx_codeobj__36 __pyx_mstate_global->__pyx_codeobj__36
 

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_1__init__ = {"__init__", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_1__init__, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_options = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[2] = {0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 20, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_options,0};
    values[1] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)Py_None));
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 20, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_options);
          if (value) { values[1] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 20, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "__init__") < 0)) __PYX_ERR(0, 20, __pyx_L3_error)
      }
    } else {
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_self = values[0];
    __pyx_v_options = values[1];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 0, 1, 2, __pyx_nargs); __PYX_ERR(0, 20, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT___init__(__pyx_self, __pyx_v_self, __pyx_v_options);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_options) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_t_1;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 0);
  __Pyx_INCREF(__pyx_v_options);

   
  __pyx_t_1 = (__pyx_v_options == Py_None);
  if (__pyx_t_1) {

     
    __pyx_t_2 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF_SET(__pyx_v_options, __pyx_t_2);
    __pyx_t_2 = 0;

     
  }

   
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_get_default_options); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = NULL;
  __pyx_t_6 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_4))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_4, function);
      __pyx_t_6 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[1] = {__pyx_t_5, };
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_6, 0+__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }
  if (unlikely(__pyx_t_3 == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "argument after ** must be a mapping, not NoneType");
    __PYX_ERR(0, 23, __pyx_L1_error)
  }
  if (likely(PyDict_CheckExact(__pyx_t_3))) {
    __pyx_t_2 = PyDict_Copy(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  } else {
    __pyx_t_2 = __Pyx_PyObject_CallOneArg((PyObject*)&PyDict_Type, __pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  if (unlikely(__pyx_v_options == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "argument after ** must be a mapping, not NoneType");
    __PYX_ERR(0, 23, __pyx_L1_error)
  }
  if (unlikely(PyDict_Update(__pyx_t_2, __pyx_v_options) < 0)) {
    if (PyErr_ExceptionMatches(PyExc_AttributeError)) __Pyx_RaiseMappingExpectedError(__pyx_v_options);
    __PYX_ERR(0, 23, __pyx_L1_error)
  }
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_options, __pyx_t_2) < 0) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_options);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_3_get_default_options(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_3_get_default_options = {"_get_default_options", (PyCFunction)__pyx_pw_3jwt_7api_jwt_5PyJWT_3_get_default_options, METH_NOARGS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_3_get_default_options(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_get_default_options (wrapper)", 0);
  __pyx_kwvalues = __Pyx_KwValues_VARARGS(__pyx_args, __pyx_nargs);
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_2_get_default_options(__pyx_self);

   
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_2_get_default_options(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_get_default_options", 0);

   
  __Pyx_XDECREF(__pyx_r);

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_verify_signature, Py_True) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_verify_exp, Py_True) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_verify_nbf, Py_True) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_verify_iat, Py_True) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_verify_aud, Py_True) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_verify_iss, Py_True) < 0) __PYX_ERR(0, 28, __pyx_L1_error)

   
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_require, __pyx_t_2) < 0) __PYX_ERR(0, 28, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_r = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._get_default_options", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_5encode(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_5encode = {"encode", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_5encode, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_5encode(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  PyObject *__pyx_v_key = 0;
  PyObject *__pyx_v_algorithm = 0;
  PyObject *__pyx_v_headers = 0;
  PyObject *__pyx_v_json_encoder = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[6] = {0,0,0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("encode (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 37, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_key,&__pyx_n_s_algorithm,&__pyx_n_s_headers,&__pyx_n_s_json_encoder,0};
    values[3] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)((PyObject*)__pyx_n_u_HS256)));

     
    values[4] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)Py_None));

     
    values[5] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)Py_None));
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  6: values[5] = __Pyx_Arg_FASTCALL(__pyx_args, 5);
        CYTHON_FALLTHROUGH;
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 37, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 37, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("encode", 0, 3, 6, 1); __PYX_ERR(0, 37, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_key)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 37, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("encode", 0, 3, 6, 2); __PYX_ERR(0, 37, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_algorithm);
          if (value) { values[3] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 37, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_headers);
          if (value) { values[4] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 37, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  5:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_json_encoder);
          if (value) { values[5] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 37, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "encode") < 0)) __PYX_ERR(0, 37, __pyx_L3_error)
      }
    } else {
      switch (__pyx_nargs) {
        case  6: values[5] = __Pyx_Arg_FASTCALL(__pyx_args, 5);
        CYTHON_FALLTHROUGH;
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = ((PyObject*)values[1]);
    __pyx_v_key = ((PyObject*)values[2]);
    __pyx_v_algorithm = ((PyObject*)values[3]);
    __pyx_v_headers = ((PyObject*)values[4]);
    __pyx_v_json_encoder = values[5];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("encode", 0, 3, 6, __pyx_nargs); __PYX_ERR(0, 37, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.encode", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_payload), (&PyDict_Type), 0, "payload", 1))) __PYX_ERR(0, 39, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_key), (&PyUnicode_Type), 0, "key", 1))) __PYX_ERR(0, 40, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_algorithm), (&PyUnicode_Type), 1, "algorithm", 1))) __PYX_ERR(0, 41, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_headers), (&PyDict_Type), 1, "headers", 1))) __PYX_ERR(0, 42, __pyx_L1_error)
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_4encode(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_key, __pyx_v_algorithm, __pyx_v_headers, __pyx_v_json_encoder);

   

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __pyx_r = NULL;
  __pyx_L0:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_4encode(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_key, PyObject *__pyx_v_algorithm, PyObject *__pyx_v_headers, PyObject *__pyx_v_json_encoder) {
  PyObject *__pyx_v_time_claim = NULL;
  PyObject *__pyx_v_json_payload = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_t_2;
  int __pyx_t_3;
  Py_ssize_t __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("encode", 0);
  __Pyx_INCREF(__pyx_v_payload);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Mapping); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = PyObject_IsInstance(__pyx_v_payload, __pyx_t_1); if (unlikely(__pyx_t_2 == ((int)-1))) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_3 = (!__pyx_t_2);
  if (unlikely(__pyx_t_3)) {

     
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_TypeError, __pyx_tuple_, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 47, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_Raise(__pyx_t_1, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __PYX_ERR(0, 47, __pyx_L1_error)

     
  }

   
  __pyx_t_1 = PyDict_Copy(__pyx_v_payload); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF_SET(__pyx_v_payload, ((PyObject*)__pyx_t_1));
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __pyx_tuple__2; __Pyx_INCREF(__pyx_t_1); __pyx_t_4 = 0;
  for (;;) {
    if (__pyx_t_4 >= 3) break;
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_4); __Pyx_INCREF(__pyx_t_5); __pyx_t_4++; if (unlikely((0 < 0))) __PYX_ERR(0, 54, __pyx_L1_error)
    #else
    __pyx_t_5 = PySequence_ITEM(__pyx_t_1, __pyx_t_4); __pyx_t_4++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 54, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    #endif
    __Pyx_XDECREF_SET(__pyx_v_time_claim, ((PyObject*)__pyx_t_5));
    __pyx_t_5 = 0;

     
    if (unlikely(__pyx_v_payload == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "get");
      __PYX_ERR(0, 56, __pyx_L1_error)
    }
    __pyx_t_5 = __Pyx_PyDict_GetItemDefault(__pyx_v_payload, __pyx_v_time_claim, Py_None); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 56, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_datetime); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 56, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_3 = PyObject_IsInstance(__pyx_t_5, __pyx_t_6); if (unlikely(__pyx_t_3 == ((int)-1))) __PYX_ERR(0, 56, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (__pyx_t_3) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_timegm); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 57, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      if (unlikely(__pyx_v_payload == Py_None)) {
        PyErr_SetString(PyExc_TypeError, "'NoneType' object is not subscriptable");
        __PYX_ERR(0, 57, __pyx_L1_error)
      }
      __pyx_t_8 = __Pyx_PyDict_GetItem(__pyx_v_payload, __pyx_v_time_claim); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 57, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_utctimetuple); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 57, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      __pyx_t_10 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_9, function);
          __pyx_t_10 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[1] = {__pyx_t_8, };
        __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_10, 0+__pyx_t_10);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 57, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __pyx_t_9 = NULL;
      __pyx_t_10 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_10 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_t_7};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_10, 1+__pyx_t_10);
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 57, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      if (unlikely(__pyx_v_payload == Py_None)) {
        PyErr_SetString(PyExc_TypeError, "'NoneType' object is not subscriptable");
        __PYX_ERR(0, 57, __pyx_L1_error)
      }
      if (unlikely((PyDict_SetItem(__pyx_v_payload, __pyx_v_time_claim, __pyx_t_6) < 0))) __PYX_ERR(0, 57, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
    }

     
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_json); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_dumps); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

   
  __pyx_t_6 = PyTuple_New(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_INCREF(__pyx_v_payload);
  __Pyx_GIVEREF(__pyx_v_payload);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_v_payload)) __PYX_ERR(0, 59, __pyx_L1_error);
  __pyx_t_7 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_separators, __pyx_tuple__5) < 0) __PYX_ERR(0, 60, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_cls, __pyx_v_json_encoder) < 0) __PYX_ERR(0, 60, __pyx_L1_error)

   
  __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

   
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_encode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = NULL;
  __pyx_t_10 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
      __pyx_t_10 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_kp_u_utf_8};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_10, 1+__pyx_t_10);
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  }
  __pyx_v_json_payload = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_api_jws); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_encode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = NULL;
  __pyx_t_10 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
      __pyx_t_10 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[6] = {__pyx_t_7, __pyx_v_json_payload, __pyx_v_key, __pyx_v_algorithm, __pyx_v_headers, __pyx_v_json_encoder};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_10, 5+__pyx_t_10);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 63, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  }
  if (!(likely(PyUnicode_CheckExact(__pyx_t_1))||((__pyx_t_1) == Py_None) || __Pyx_RaiseUnexpectedTypeError("unicode", __pyx_t_1))) __PYX_ERR(0, 63, __pyx_L1_error)
  __pyx_r = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.encode", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_time_claim);
  __Pyx_XDECREF(__pyx_v_json_payload);
  __Pyx_XDECREF(__pyx_v_payload);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_7decode_complete(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_7decode_complete = {"decode_complete", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_7decode_complete, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_7decode_complete(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_jwt = 0;
  PyObject *__pyx_v_key = 0;
  PyObject *__pyx_v_algorithms = 0;
  PyObject *__pyx_v_options = 0;
  PyObject *__pyx_v_kwargs = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[5] = {0,0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("decode_complete (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 65, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_jwt,&__pyx_n_s_key,&__pyx_n_s_algorithms,&__pyx_n_s_options,0};
    values[2] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)((PyObject*)__pyx_kp_u__6)));

     
    values[3] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)Py_None));

     
    values[4] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)Py_None));
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 65, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_jwt)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 65, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("decode_complete", 0, 2, 5, 1); __PYX_ERR(0, 65, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_key);
          if (value) { values[2] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 65, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_algorithms);
          if (value) { values[3] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 65, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_options);
          if (value) { values[4] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 65, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, __pyx_v_kwargs, values + 0, kwd_pos_args, "decode_complete") < 0)) __PYX_ERR(0, 65, __pyx_L3_error)
      }
    } else {
      switch (__pyx_nargs) {
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_self = values[0];
    __pyx_v_jwt = ((PyObject*)values[1]);
    __pyx_v_key = ((PyObject*)values[2]);
    __pyx_v_algorithms = ((PyObject*)values[3]);
    __pyx_v_options = ((PyObject*)values[4]);
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("decode_complete", 0, 2, 5, __pyx_nargs); __PYX_ERR(0, 65, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.decode_complete", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_jwt), (&PyUnicode_Type), 0, "jwt", 1))) __PYX_ERR(0, 67, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_key), (&PyUnicode_Type), 0, "key", 1))) __PYX_ERR(0, 68, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_algorithms), (&PyList_Type), 1, "algorithms", 1))) __PYX_ERR(0, 69, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_options), (&PyDict_Type), 1, "options", 1))) __PYX_ERR(0, 70, __pyx_L1_error)
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_6decode_complete(__pyx_self, __pyx_v_self, __pyx_v_jwt, __pyx_v_key, __pyx_v_algorithms, __pyx_v_options, __pyx_v_kwargs);

   

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_DECREF(__pyx_v_kwargs);
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_6decode_complete(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_jwt, PyObject *__pyx_v_key, PyObject *__pyx_v_algorithms, PyObject *__pyx_v_options, PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_v_decoded = NULL;
  PyObject *__pyx_v_payload = NULL;
  PyObject *__pyx_v_e = NULL;
  PyObject *__pyx_v_merged_options = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_t_1;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_t_3;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  char const *__pyx_t_16;
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  PyObject *__pyx_t_19 = NULL;
  PyObject *__pyx_t_20 = NULL;
  PyObject *__pyx_t_21 = NULL;
  PyObject *__pyx_t_22 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("decode_complete", 0);
  __Pyx_INCREF(__pyx_v_options);

   
  __pyx_t_1 = (__pyx_v_options == ((PyObject*)Py_None));
  if (__pyx_t_1) {

     
    __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 74, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_t_2, __pyx_n_u_verify_signature, Py_True) < 0) __PYX_ERR(0, 74, __pyx_L1_error)
    __Pyx_DECREF_SET(__pyx_v_options, ((PyObject*)__pyx_t_2));
    __pyx_t_2 = 0;

     
    goto __pyx_L3;
  }

   
    {
    if (unlikely(__pyx_v_options == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "setdefault");
      __PYX_ERR(0, 76, __pyx_L1_error)
    }
    __pyx_t_2 = __Pyx_PyDict_SetDefault(__pyx_v_options, __pyx_n_u_verify_signature, Py_True, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 76, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_L3:;

   
  if (unlikely(__pyx_v_options == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "'NoneType' object is not subscriptable");
    __PYX_ERR(0, 78, __pyx_L1_error)
  }
  __pyx_t_2 = __Pyx_PyDict_GetItem(__pyx_v_options, __pyx_n_u_verify_signature); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 78, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_3 = (!__pyx_t_1);
  if (__pyx_t_3) {

     
    if (unlikely(__pyx_v_options == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "setdefault");
      __PYX_ERR(0, 79, __pyx_L1_error)
    }
    __pyx_t_2 = __Pyx_PyDict_SetDefault(__pyx_v_options, __pyx_n_u_verify_exp, Py_False, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 79, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    if (unlikely(__pyx_v_options == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "setdefault");
      __PYX_ERR(0, 80, __pyx_L1_error)
    }
    __pyx_t_2 = __Pyx_PyDict_SetDefault(__pyx_v_options, __pyx_n_u_verify_nbf, Py_False, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 80, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    if (unlikely(__pyx_v_options == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "setdefault");
      __PYX_ERR(0, 81, __pyx_L1_error)
    }
    __pyx_t_2 = __Pyx_PyDict_SetDefault(__pyx_v_options, __pyx_n_u_verify_iat, Py_False, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 81, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    if (unlikely(__pyx_v_options == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "setdefault");
      __PYX_ERR(0, 82, __pyx_L1_error)
    }
    __pyx_t_2 = __Pyx_PyDict_SetDefault(__pyx_v_options, __pyx_n_u_verify_aud, Py_False, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 82, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    if (unlikely(__pyx_v_options == Py_None)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "setdefault");
      __PYX_ERR(0, 83, __pyx_L1_error)
    }
    __pyx_t_2 = __Pyx_PyDict_SetDefault(__pyx_v_options, __pyx_n_u_verify_iss, Py_False, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
  }

   
  if (unlikely(__pyx_v_options == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "'NoneType' object is not subscriptable");
    __PYX_ERR(0, 85, __pyx_L1_error)
  }
  __pyx_t_2 = __Pyx_PyDict_GetItem(__pyx_v_options, __pyx_n_u_verify_signature); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 85, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 85, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_1) {
  } else {
    __pyx_t_3 = __pyx_t_1;
    goto __pyx_L6_bool_binop_done;
  }
  __pyx_t_1 = (__pyx_v_algorithms != Py_None)&&(PyList_GET_SIZE(__pyx_v_algorithms) != 0);
  __pyx_t_4 = (!__pyx_t_1);
  __pyx_t_3 = __pyx_t_4;
  __pyx_L6_bool_binop_done:;
  if (unlikely(__pyx_t_3)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_DecodeError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 86, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = NULL;
    __pyx_t_7 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_7 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_kp_u_It_is_required_that_you_pass_in};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __Pyx_Raise(__pyx_t_2, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __PYX_ERR(0, 86, __pyx_L1_error)

     
  }

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_api_jws); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_decode_complete); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_v_jwt);
  __Pyx_GIVEREF(__pyx_v_jwt);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_jwt)) __PYX_ERR(0, 90, __pyx_L1_error);

   
  __pyx_t_8 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 92, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_key, __pyx_v_key) < 0) __PYX_ERR(0, 92, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_algorithms, __pyx_v_algorithms) < 0) __PYX_ERR(0, 92, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_options, __pyx_v_options) < 0) __PYX_ERR(0, 92, __pyx_L1_error)
  __pyx_t_6 = __pyx_t_8;
  __pyx_t_8 = 0;

   
  if (__Pyx_MergeKeywords(__pyx_t_6, __pyx_v_kwargs) < 0) __PYX_ERR(0, 95, __pyx_L1_error)

   
  __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_2, __pyx_t_6); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __pyx_v_decoded = __pyx_t_8;
  __pyx_t_8 = 0;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_9, &__pyx_t_10, &__pyx_t_11);
    __Pyx_XGOTREF(__pyx_t_9);
    __Pyx_XGOTREF(__pyx_t_10);
    __Pyx_XGOTREF(__pyx_t_11);
      {

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_json); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 99, __pyx_L8_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_loads); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 99, __pyx_L8_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_Dict_GetItem(__pyx_v_decoded, __pyx_n_u_payload); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 99, __pyx_L8_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_5 = NULL;
      __pyx_t_7 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_5)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_5);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
          __pyx_t_7 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_t_6};
        __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 99, __pyx_L8_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      }
      __pyx_v_payload = __pyx_t_8;
      __pyx_t_8 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
    goto __pyx_L13_try_end;
    __pyx_L8_error:;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;

     
    __pyx_t_7 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_7) {
      __Pyx_AddTraceback("jwt.api_jwt.PyJWT.decode_complete", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_8, &__pyx_t_2, &__pyx_t_6) < 0) __PYX_ERR(0, 100, __pyx_L10_except_error)
      __Pyx_XGOTREF(__pyx_t_8);
      __Pyx_XGOTREF(__pyx_t_2);
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_INCREF(__pyx_t_2);
      __pyx_v_e = __pyx_t_2;
        {

         
        __Pyx_GetModuleGlobalName(__pyx_t_12, __pyx_n_s_DecodeError); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 101, __pyx_L19_error)
        __Pyx_GOTREF(__pyx_t_12);
        __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Invalid_payload_string_s, __pyx_v_e); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 101, __pyx_L19_error)
        __Pyx_GOTREF(__pyx_t_13);
        __pyx_t_14 = NULL;
        __pyx_t_7 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_12))) {
          __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_12);
          if (likely(__pyx_t_14)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_12);
            __Pyx_INCREF(__pyx_t_14);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_12, function);
            __pyx_t_7 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_14, __pyx_t_13};
          __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_12, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 101, __pyx_L19_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
        }
        __Pyx_Raise(__pyx_t_5, 0, 0, 0);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __PYX_ERR(0, 101, __pyx_L19_error)
      }

       
        {
        __pyx_L19_error:;
         {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0; __pyx_t_21 = 0; __pyx_t_22 = 0;
          __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_20, &__pyx_t_21, &__pyx_t_22);
          if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19) < 0)) __Pyx_ErrFetch(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19);
          __Pyx_XGOTREF(__pyx_t_17);
          __Pyx_XGOTREF(__pyx_t_18);
          __Pyx_XGOTREF(__pyx_t_19);
          __Pyx_XGOTREF(__pyx_t_20);
          __Pyx_XGOTREF(__pyx_t_21);
          __Pyx_XGOTREF(__pyx_t_22);
          __pyx_t_7 = __pyx_lineno; __pyx_t_15 = __pyx_clineno; __pyx_t_16 = __pyx_filename;
          {
            __Pyx_DECREF(__pyx_v_e); __pyx_v_e = 0;
          }
          if (PY_MAJOR_VERSION >= 3) {
            __Pyx_XGIVEREF(__pyx_t_20);
            __Pyx_XGIVEREF(__pyx_t_21);
            __Pyx_XGIVEREF(__pyx_t_22);
            __Pyx_ExceptionReset(__pyx_t_20, __pyx_t_21, __pyx_t_22);
          }
          __Pyx_XGIVEREF(__pyx_t_17);
          __Pyx_XGIVEREF(__pyx_t_18);
          __Pyx_XGIVEREF(__pyx_t_19);
          __Pyx_ErrRestore(__pyx_t_17, __pyx_t_18, __pyx_t_19);
          __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0; __pyx_t_21 = 0; __pyx_t_22 = 0;
          __pyx_lineno = __pyx_t_7; __pyx_clineno = __pyx_t_15; __pyx_filename = __pyx_t_16;
          goto __pyx_L10_except_error;
        }
      }
    }
    goto __pyx_L10_except_error;

     
    __pyx_L10_except_error:;
    __Pyx_XGIVEREF(__pyx_t_9);
    __Pyx_XGIVEREF(__pyx_t_10);
    __Pyx_XGIVEREF(__pyx_t_11);
    __Pyx_ExceptionReset(__pyx_t_9, __pyx_t_10, __pyx_t_11);
    goto __pyx_L1_error;
    __pyx_L13_try_end:;
  }

   
  __pyx_t_3 = PyDict_Check(__pyx_v_payload); 
  __pyx_t_4 = (!__pyx_t_3);
  if (unlikely(__pyx_t_4)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_DecodeError); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 103, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_8 = NULL;
    __pyx_t_15 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_15 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_kp_u_Invalid_payload_string_must_be_a};
      __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_15, 1+__pyx_t_15);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 103, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_Raise(__pyx_t_6, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __PYX_ERR(0, 103, __pyx_L1_error)

     
  }

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_options); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (unlikely(__pyx_t_2 == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "argument after ** must be a mapping, not NoneType");
    __PYX_ERR(0, 105, __pyx_L1_error)
  }
  if (likely(PyDict_CheckExact(__pyx_t_2))) {
    __pyx_t_6 = PyDict_Copy(__pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 105, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  } else {
    __pyx_t_6 = __Pyx_PyObject_CallOneArg((PyObject*)&PyDict_Type, __pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 105, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  if (unlikely(__pyx_v_options == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "argument after ** must be a mapping, not NoneType");
    __PYX_ERR(0, 105, __pyx_L1_error)
  }
  if (unlikely(PyDict_Update(__pyx_t_6, __pyx_v_options) < 0)) {
    if (PyErr_ExceptionMatches(PyExc_AttributeError)) __Pyx_RaiseMappingExpectedError(__pyx_v_options);
    __PYX_ERR(0, 105, __pyx_L1_error)
  }
  __pyx_v_merged_options = ((PyObject*)__pyx_t_6);
  __pyx_t_6 = 0;

   
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_validate_claims); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 106, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_v_payload);
  __Pyx_GIVEREF(__pyx_v_payload);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_payload)) __PYX_ERR(0, 106, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_merged_options);
  __Pyx_GIVEREF(__pyx_v_merged_options);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_v_merged_options)) __PYX_ERR(0, 106, __pyx_L1_error);
  __pyx_t_8 = PyDict_Copy(__pyx_v_kwargs); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 106, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_2, __pyx_t_8); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 106, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

   
  if (unlikely((PyObject_SetItem(__pyx_v_decoded, __pyx_n_u_payload, __pyx_v_payload) < 0))) __PYX_ERR(0, 108, __pyx_L1_error)

   
  __Pyx_XDECREF(__pyx_r);
  if (!(likely(PyDict_CheckExact(__pyx_v_decoded))||((__pyx_v_decoded) == Py_None) || __Pyx_RaiseUnexpectedTypeError("dict", __pyx_v_decoded))) __PYX_ERR(0, 109, __pyx_L1_error)
  __Pyx_INCREF(__pyx_v_decoded);
  __pyx_r = ((PyObject*)__pyx_v_decoded);
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.decode_complete", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_decoded);
  __Pyx_XDECREF(__pyx_v_payload);
  __Pyx_XDECREF(__pyx_v_e);
  __Pyx_XDECREF(__pyx_v_merged_options);
  __Pyx_XDECREF(__pyx_v_options);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_9decode(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_9decode = {"decode", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_9decode, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_9decode(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_jwt = 0;
  PyObject *__pyx_v_key = 0;
  PyObject *__pyx_v_algorithms = 0;
  PyObject *__pyx_v_options = 0;
  PyObject *__pyx_v_kwargs = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[5] = {0,0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("decode (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 111, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_jwt,&__pyx_n_s_key,&__pyx_n_s_algorithms,&__pyx_n_s_options,0};
    values[2] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)((PyObject*)__pyx_kp_u__6)));

     
    values[3] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)Py_None));

     
    values[4] = __Pyx_Arg_NewRef_FASTCALL(((PyObject*)Py_None));
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 111, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_jwt)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 111, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("decode", 0, 2, 5, 1); __PYX_ERR(0, 111, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_key);
          if (value) { values[2] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 111, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_algorithms);
          if (value) { values[3] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 111, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_options);
          if (value) { values[4] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 111, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, __pyx_v_kwargs, values + 0, kwd_pos_args, "decode") < 0)) __PYX_ERR(0, 111, __pyx_L3_error)
      }
    } else {
      switch (__pyx_nargs) {
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_self = values[0];
    __pyx_v_jwt = ((PyObject*)values[1]);
    __pyx_v_key = ((PyObject*)values[2]);
    __pyx_v_algorithms = ((PyObject*)values[3]);
    __pyx_v_options = ((PyObject*)values[4]);
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("decode", 0, 2, 5, __pyx_nargs); __PYX_ERR(0, 111, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.decode", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_jwt), (&PyUnicode_Type), 0, "jwt", 1))) __PYX_ERR(0, 113, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_key), (&PyUnicode_Type), 0, "key", 1))) __PYX_ERR(0, 114, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_algorithms), (&PyList_Type), 1, "algorithms", 1))) __PYX_ERR(0, 115, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_options), (&PyDict_Type), 1, "options", 1))) __PYX_ERR(0, 116, __pyx_L1_error)
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_8decode(__pyx_self, __pyx_v_self, __pyx_v_jwt, __pyx_v_key, __pyx_v_algorithms, __pyx_v_options, __pyx_v_kwargs);

   

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_DECREF(__pyx_v_kwargs);
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_8decode(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_jwt, PyObject *__pyx_v_key, PyObject *__pyx_v_algorithms, PyObject *__pyx_v_options, PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_v_decoded = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("decode", 0);

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_decode_complete); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = PyTuple_New(4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_v_jwt);
  __Pyx_GIVEREF(__pyx_v_jwt);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_jwt)) __PYX_ERR(0, 119, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_key);
  __Pyx_GIVEREF(__pyx_v_key);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_v_key)) __PYX_ERR(0, 119, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_algorithms);
  __Pyx_GIVEREF(__pyx_v_algorithms);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_v_algorithms)) __PYX_ERR(0, 119, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_options);
  __Pyx_GIVEREF(__pyx_v_options);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_v_options)) __PYX_ERR(0, 119, __pyx_L1_error);
  __pyx_t_3 = PyDict_Copy(__pyx_v_kwargs); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_decoded = __pyx_t_4;
  __pyx_t_4 = 0;

   
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_decoded, __pyx_n_u_payload); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 120, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (!(likely(PyDict_CheckExact(__pyx_t_4))||((__pyx_t_4) == Py_None) || __Pyx_RaiseUnexpectedTypeError("dict", __pyx_t_4))) __PYX_ERR(0, 120, __pyx_L1_error)
  __pyx_r = ((PyObject*)__pyx_t_4);
  __pyx_t_4 = 0;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT.decode", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_decoded);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_11_validate_claims(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_11_validate_claims = {"_validate_claims", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_11_validate_claims, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_11_validate_claims(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  PyObject *__pyx_v_options = 0;
  PyObject *__pyx_v_audience = 0;
  PyObject *__pyx_v_issuer = 0;
  PyObject *__pyx_v_leeway = 0;
  CYTHON_UNUSED PyObject *__pyx_v_kwargs = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[6] = {0,0,0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_validate_claims (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 122, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_options,&__pyx_n_s_audience,&__pyx_n_s_issuer,&__pyx_n_s_leeway,0};

     
    values[3] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)Py_None));
    values[4] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)Py_None));
    values[5] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)((PyObject *)__pyx_int_0)));
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  6: values[5] = __Pyx_Arg_FASTCALL(__pyx_args, 5);
        CYTHON_FALLTHROUGH;
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 122, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 122, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_claims", 0, 3, 6, 1); __PYX_ERR(0, 122, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_options)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 122, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_claims", 0, 3, 6, 2); __PYX_ERR(0, 122, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_audience);
          if (value) { values[3] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 122, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_issuer);
          if (value) { values[4] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 122, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  5:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_leeway);
          if (value) { values[5] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 122, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, __pyx_v_kwargs, values + 0, kwd_pos_args, "_validate_claims") < 0)) __PYX_ERR(0, 122, __pyx_L3_error)
      }
    } else {
      switch (__pyx_nargs) {
        case  6: values[5] = __Pyx_Arg_FASTCALL(__pyx_args, 5);
        CYTHON_FALLTHROUGH;
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = values[1];
    __pyx_v_options = values[2];
    __pyx_v_audience = values[3];
    __pyx_v_issuer = values[4];
    __pyx_v_leeway = values[5];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_validate_claims", 0, 3, 6, __pyx_nargs); __PYX_ERR(0, 122, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_claims", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_10_validate_claims(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_options, __pyx_v_audience, __pyx_v_issuer, __pyx_v_leeway, __pyx_v_kwargs);

   

   
  __Pyx_DECREF(__pyx_v_kwargs);
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_10_validate_claims(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_options, PyObject *__pyx_v_audience, PyObject *__pyx_v_issuer, PyObject *__pyx_v_leeway, CYTHON_UNUSED PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_v_now = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  int __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_validate_claims", 0);
  __Pyx_INCREF(__pyx_v_leeway);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_timedelta); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = PyObject_IsInstance(__pyx_v_leeway, __pyx_t_1); if (unlikely(__pyx_t_2 == ((int)-1))) __PYX_ERR(0, 125, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_2) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_leeway, __pyx_n_s_total_seconds); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 126, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
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
      PyObject *__pyx_callargs[1] = {__pyx_t_4, };
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 0+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF_SET(__pyx_v_leeway, __pyx_t_1);
    __pyx_t_1 = 0;

     
  }

   
  __Pyx_INCREF(((PyObject *)Py_TYPE(Py_None)));
  __pyx_t_1 = ((PyObject *)Py_TYPE(Py_None));
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Iterable); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 128, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_6 = PyBytes_Check(__pyx_v_audience); 
  if (!__pyx_t_6) {
  } else {
    __pyx_t_2 = __pyx_t_6;
    goto __pyx_L5_bool_binop_done;
  }
  __pyx_t_6 = PyUnicode_Check(__pyx_v_audience); 
  if (!__pyx_t_6) {
  } else {
    __pyx_t_2 = __pyx_t_6;
    goto __pyx_L5_bool_binop_done;
  }
  __pyx_t_6 = PyObject_IsInstance(__pyx_v_audience, __pyx_t_1); 
  if (!__pyx_t_6) {
  } else {
    __pyx_t_2 = __pyx_t_6;
    goto __pyx_L5_bool_binop_done;
  }
  __pyx_t_6 = PyObject_IsInstance(__pyx_v_audience, __pyx_t_3); 
  __pyx_t_2 = __pyx_t_6;
  __pyx_L5_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_6 = (!__pyx_t_2);
  if (unlikely(__pyx_t_6)) {

     
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_TypeError, __pyx_tuple__7, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 129, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_Raise(__pyx_t_1, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __PYX_ERR(0, 129, __pyx_L1_error)

     
  }

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_validate_required_claims); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 131, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_3))) {
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
    PyObject *__pyx_callargs[3] = {__pyx_t_4, __pyx_v_payload, __pyx_v_options};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 2+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 131, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_timegm); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_datetime); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_now); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_timezone); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_utc); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_tz, __pyx_t_10) < 0) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_empty_tuple, __pyx_t_7); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_10);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_utctimetuple); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 133, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
  __pyx_t_10 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_7))) {
    __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_7);
    if (likely(__pyx_t_10)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
      __Pyx_INCREF(__pyx_t_10);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_7, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[1] = {__pyx_t_10, };
    __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_5, 0+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 133, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  }
  __pyx_t_7 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_4};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 133, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_v_now = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_2 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_iat, __pyx_v_payload, Py_EQ)); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 135, __pyx_L1_error)
  if (__pyx_t_2) {
  } else {
    __pyx_t_6 = __pyx_t_2;
    goto __pyx_L10_bool_binop_done;
  }
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_options, __pyx_n_u_verify_iat); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 135, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 135, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_6 = __pyx_t_2;
  __pyx_L10_bool_binop_done:;
  if (__pyx_t_6) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_validate_iat); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 136, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
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
      PyObject *__pyx_callargs[4] = {__pyx_t_4, __pyx_v_payload, __pyx_v_now, __pyx_v_leeway};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 3+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 136, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   
  __pyx_t_2 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_nbf, __pyx_v_payload, Py_EQ)); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 138, __pyx_L1_error)
  if (__pyx_t_2) {
  } else {
    __pyx_t_6 = __pyx_t_2;
    goto __pyx_L13_bool_binop_done;
  }
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_options, __pyx_n_u_verify_nbf); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 138, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 138, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_6 = __pyx_t_2;
  __pyx_L13_bool_binop_done:;
  if (__pyx_t_6) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_validate_nbf); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 139, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
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
      PyObject *__pyx_callargs[4] = {__pyx_t_4, __pyx_v_payload, __pyx_v_now, __pyx_v_leeway};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 3+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 139, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   
  __pyx_t_2 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_exp, __pyx_v_payload, Py_EQ)); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 141, __pyx_L1_error)
  if (__pyx_t_2) {
  } else {
    __pyx_t_6 = __pyx_t_2;
    goto __pyx_L16_bool_binop_done;
  }
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_options, __pyx_n_u_verify_exp); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 141, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_6 = __pyx_t_2;
  __pyx_L16_bool_binop_done:;
  if (__pyx_t_6) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_validate_exp); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 142, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
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
      PyObject *__pyx_callargs[4] = {__pyx_t_4, __pyx_v_payload, __pyx_v_now, __pyx_v_leeway};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 3+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 142, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_options, __pyx_n_u_verify_iss); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 144, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_6 < 0))) __PYX_ERR(0, 144, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_6) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_validate_iss); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 145, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
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
      PyObject *__pyx_callargs[3] = {__pyx_t_4, __pyx_v_payload, __pyx_v_issuer};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 2+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 145, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_options, __pyx_n_u_verify_aud); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 147, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_6 < 0))) __PYX_ERR(0, 147, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_6) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_validate_aud); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 148, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
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
      PyObject *__pyx_callargs[3] = {__pyx_t_4, __pyx_v_payload, __pyx_v_audience};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 2+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 148, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_claims", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_now);
  __Pyx_XDECREF(__pyx_v_leeway);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_13_validate_required_claims(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_13_validate_required_claims = {"_validate_required_claims", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_13_validate_required_claims, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_13_validate_required_claims(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  PyObject *__pyx_v_options = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[3] = {0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_validate_required_claims (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 150, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_options,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 150, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 150, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_required_claims", 1, 3, 3, 1); __PYX_ERR(0, 150, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_options)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 150, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_required_claims", 1, 3, 3, 2); __PYX_ERR(0, 150, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "_validate_required_claims") < 0)) __PYX_ERR(0, 150, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 3)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = values[1];
    __pyx_v_options = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_validate_required_claims", 1, 3, 3, __pyx_nargs); __PYX_ERR(0, 150, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_required_claims", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_12_validate_required_claims(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_options);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_12_validate_required_claims(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_options) {
  PyObject *__pyx_v_claim = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  PyObject *(*__pyx_t_4)(PyObject *);
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_validate_required_claims", 0);

   
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_options, __pyx_n_u_require); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 151, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 151, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 151, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        if (__pyx_t_3 >= PyList_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 151, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 151, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        if (__pyx_t_3 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 151, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 151, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 151, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_claim, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_payload, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 152, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = NULL;
    __pyx_t_7 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_7 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_v_claim};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 152, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __pyx_t_8 = (__pyx_t_1 == Py_None);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(__pyx_t_8)) {

       
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_MissingRequiredClaimError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 153, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = NULL;
      __pyx_t_7 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_6)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_6);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_7 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_v_claim};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 153, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      __Pyx_Raise(__pyx_t_1, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __PYX_ERR(0, 153, __pyx_L1_error)

       
    }

     
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_required_claims", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_claim);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_15_validate_iat(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_15_validate_iat = {"_validate_iat", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_15_validate_iat, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_15_validate_iat(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  CYTHON_UNUSED PyObject *__pyx_v_now = 0;
  CYTHON_UNUSED PyObject *__pyx_v_leeway = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[4] = {0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_validate_iat (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 155, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_now,&__pyx_n_s_leeway,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 155, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 155, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_iat", 1, 4, 4, 1); __PYX_ERR(0, 155, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_now)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 155, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_iat", 1, 4, 4, 2); __PYX_ERR(0, 155, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_leeway)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[3]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 155, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_iat", 1, 4, 4, 3); __PYX_ERR(0, 155, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "_validate_iat") < 0)) __PYX_ERR(0, 155, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 4)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
      values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = values[1];
    __pyx_v_now = values[2];
    __pyx_v_leeway = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_validate_iat", 1, 4, 4, __pyx_nargs); __PYX_ERR(0, 155, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_iat", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_14_validate_iat(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_now, __pyx_v_leeway);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_14_validate_iat(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, CYTHON_UNUSED PyObject *__pyx_v_now, CYTHON_UNUSED PyObject *__pyx_v_leeway) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_validate_iat", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_payload, __pyx_n_u_iat); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 157, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 157, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

     
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_6) {
      __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_iat", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_7) < 0) __PYX_ERR(0, 158, __pyx_L5_except_error)
      __Pyx_XGOTREF(__pyx_t_5);
      __Pyx_XGOTREF(__pyx_t_4);
      __Pyx_XGOTREF(__pyx_t_7);

       
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_InvalidIssuedAtError); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 159, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = NULL;
      __pyx_t_6 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_9, function);
          __pyx_t_6 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_10, __pyx_kp_u_Issued_At_claim_iat_must_be_an_i};
        __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_6, 1+__pyx_t_6);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 159, __pyx_L5_except_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_Raise(__pyx_t_8, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __PYX_ERR(0, 159, __pyx_L5_except_error)
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

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_iat", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_17_validate_nbf(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_17_validate_nbf = {"_validate_nbf", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_17_validate_nbf, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_17_validate_nbf(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  PyObject *__pyx_v_now = 0;
  PyObject *__pyx_v_leeway = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[4] = {0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_validate_nbf (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 161, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_now,&__pyx_n_s_leeway,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 161, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 161, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_nbf", 1, 4, 4, 1); __PYX_ERR(0, 161, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_now)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 161, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_nbf", 1, 4, 4, 2); __PYX_ERR(0, 161, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_leeway)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[3]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 161, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_nbf", 1, 4, 4, 3); __PYX_ERR(0, 161, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "_validate_nbf") < 0)) __PYX_ERR(0, 161, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 4)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
      values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = values[1];
    __pyx_v_now = values[2];
    __pyx_v_leeway = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_validate_nbf", 1, 4, 4, __pyx_nargs); __PYX_ERR(0, 161, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_nbf", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_16_validate_nbf(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_now, __pyx_v_leeway);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_16_validate_nbf(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_now, PyObject *__pyx_v_leeway) {
  PyObject *__pyx_v_nbf = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_validate_nbf", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_payload, __pyx_n_u_nbf); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 163, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 163, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_v_nbf = __pyx_t_5;
      __pyx_t_5 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

     
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_6) {
      __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_nbf", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_7) < 0) __PYX_ERR(0, 164, __pyx_L5_except_error)
      __Pyx_XGOTREF(__pyx_t_5);
      __Pyx_XGOTREF(__pyx_t_4);
      __Pyx_XGOTREF(__pyx_t_7);

       
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_DecodeError); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 165, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = NULL;
      __pyx_t_6 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_9, function);
          __pyx_t_6 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_10, __pyx_kp_u_Not_Before_claim_nbf_must_be_an};
        __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_6, 1+__pyx_t_6);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 165, __pyx_L5_except_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_Raise(__pyx_t_8, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __PYX_ERR(0, 165, __pyx_L5_except_error)
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

   
  __pyx_t_7 = PyNumber_Add(__pyx_v_now, __pyx_v_leeway); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 167, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_4 = PyObject_RichCompare(__pyx_v_nbf, __pyx_t_7, Py_GT); __Pyx_XGOTREF(__pyx_t_4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 167, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_11 = __Pyx_PyObject_IsTrue(__pyx_t_4); if (unlikely((__pyx_t_11 < 0))) __PYX_ERR(0, 167, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(__pyx_t_11)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_ImmatureSignatureError); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 168, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_5 = NULL;
    __pyx_t_6 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
        __pyx_t_6 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_kp_u_The_token_is_not_yet_valid_nbf};
      __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_6, 1+__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 168, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __Pyx_Raise(__pyx_t_4, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __PYX_ERR(0, 168, __pyx_L1_error)

     
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_nbf", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_nbf);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_19_validate_exp(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_19_validate_exp = {"_validate_exp", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_19_validate_exp, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_19_validate_exp(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  PyObject *__pyx_v_now = 0;
  PyObject *__pyx_v_leeway = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[4] = {0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_validate_exp (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 170, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_now,&__pyx_n_s_leeway,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 170, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 170, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_exp", 1, 4, 4, 1); __PYX_ERR(0, 170, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_now)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 170, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_exp", 1, 4, 4, 2); __PYX_ERR(0, 170, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (likely((values[3] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_leeway)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[3]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 170, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_exp", 1, 4, 4, 3); __PYX_ERR(0, 170, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "_validate_exp") < 0)) __PYX_ERR(0, 170, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 4)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
      values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = values[1];
    __pyx_v_now = values[2];
    __pyx_v_leeway = values[3];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_validate_exp", 1, 4, 4, __pyx_nargs); __PYX_ERR(0, 170, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_exp", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_18_validate_exp(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_now, __pyx_v_leeway);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_18_validate_exp(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_now, PyObject *__pyx_v_leeway) {
  PyObject *__pyx_v_exp = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_t_11;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_validate_exp", 0);

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_1);
    __Pyx_XGOTREF(__pyx_t_2);
    __Pyx_XGOTREF(__pyx_t_3);
      {

       
      __pyx_t_4 = __Pyx_PyObject_Dict_GetItem(__pyx_v_payload, __pyx_n_u_exp); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 172, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_4);
      __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 172, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_v_exp = __pyx_t_5;
      __pyx_t_5 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;

     
    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ValueError);
    if (__pyx_t_6) {
      __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_exp", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_4, &__pyx_t_7) < 0) __PYX_ERR(0, 173, __pyx_L5_except_error)
      __Pyx_XGOTREF(__pyx_t_5);
      __Pyx_XGOTREF(__pyx_t_4);
      __Pyx_XGOTREF(__pyx_t_7);

       
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_DecodeError); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 174, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = NULL;
      __pyx_t_6 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_9, function);
          __pyx_t_6 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_10, __pyx_kp_u_Expiration_Time_claim_exp_must_b};
        __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_6, 1+__pyx_t_6);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 174, __pyx_L5_except_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_Raise(__pyx_t_8, 0, 0, 0);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __PYX_ERR(0, 174, __pyx_L5_except_error)
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

   
  __pyx_t_7 = PyNumber_Subtract(__pyx_v_now, __pyx_v_leeway); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __pyx_t_4 = PyObject_RichCompare(__pyx_v_exp, __pyx_t_7, Py_LT); __Pyx_XGOTREF(__pyx_t_4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  __pyx_t_11 = __Pyx_PyObject_IsTrue(__pyx_t_4); if (unlikely((__pyx_t_11 < 0))) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (unlikely(__pyx_t_11)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_ExpiredSignatureError); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 177, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_5 = NULL;
    __pyx_t_6 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
        __pyx_t_6 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_kp_u_Signature_has_expired};
      __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_6, 1+__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 177, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __Pyx_Raise(__pyx_t_4, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __PYX_ERR(0, 177, __pyx_L1_error)

     
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_exp", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_exp);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_21_validate_aud(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_21_validate_aud = {"_validate_aud", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_21_validate_aud, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_21_validate_aud(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  PyObject *__pyx_v_audience = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[3] = {0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_validate_aud (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 179, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_audience,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 179, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 179, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_aud", 1, 3, 3, 1); __PYX_ERR(0, 179, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_audience)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 179, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_aud", 1, 3, 3, 2); __PYX_ERR(0, 179, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "_validate_aud") < 0)) __PYX_ERR(0, 179, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 3)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = values[1];
    __pyx_v_audience = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_validate_aud", 1, 3, 3, __pyx_nargs); __PYX_ERR(0, 179, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_aud", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_20_validate_aud(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_audience);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
static PyObject *__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_2generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value);  

 

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_13_validate_aud_genexpr(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0) {
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *)__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_1_genexpr(__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 198, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  __pyx_cur_scope->__pyx_genexpr_arg_0 = __pyx_genexpr_arg_0;
  __Pyx_INCREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  __Pyx_GIVEREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_2generator, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_PyJWT__validate_aud_locals_genex, __pyx_n_s_jwt_api_jwt); if (unlikely(!gen)) __PYX_ERR(0, 198, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_aud.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_2generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value)  
{
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *__pyx_cur_scope = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  PyObject *(*__pyx_t_3)(PyObject *);
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  int __pyx_t_6;
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
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 198, __pyx_L1_error)
  if (unlikely(!__pyx_cur_scope->__pyx_genexpr_arg_0)) { __Pyx_RaiseUnboundLocalError(".0"); __PYX_ERR(0, 198, __pyx_L1_error) }
  if (likely(PyList_CheckExact(__pyx_cur_scope->__pyx_genexpr_arg_0)) || PyTuple_CheckExact(__pyx_cur_scope->__pyx_genexpr_arg_0)) {
    __pyx_t_1 = __pyx_cur_scope->__pyx_genexpr_arg_0; __Pyx_INCREF(__pyx_t_1); __pyx_t_2 = 0;
    __pyx_t_3 = NULL;
  } else {
    __pyx_t_2 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_cur_scope->__pyx_genexpr_arg_0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 198, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 198, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_3)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_2 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely((0 < 0))) __PYX_ERR(0, 198, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 198, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      } else {
        if (__pyx_t_2 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely((0 < 0))) __PYX_ERR(0, 198, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 198, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      }
    } else {
      __pyx_t_4 = __pyx_t_3(__pyx_t_1);
      if (unlikely(!__pyx_t_4)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 198, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_4);
    }
    __Pyx_XGOTREF(__pyx_cur_scope->__pyx_v_c);
    __Pyx_XDECREF_SET(__pyx_cur_scope->__pyx_v_c, __pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    __pyx_t_4 = 0;
    __pyx_t_5 = PyUnicode_Check(__pyx_cur_scope->__pyx_v_c); 
    __pyx_t_6 = (!__pyx_t_5);
    if (__pyx_t_6) {
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_True);
      __pyx_r = Py_True;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L0;
    }
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    {
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(Py_False);
    __pyx_r = Py_False;
    goto __pyx_L0;
  }
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_Generator_Replace_StopIteration(0);
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_4);
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
static PyObject *__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_5generator1(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value);  

 

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_13_validate_aud_3genexpr(PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0) {
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *)__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_2_genexpr(__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 204, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  __pyx_cur_scope->__pyx_outer_scope = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *) __pyx_self;
  __Pyx_INCREF((PyObject *)__pyx_cur_scope->__pyx_outer_scope);
  __Pyx_GIVEREF((PyObject *)__pyx_cur_scope->__pyx_outer_scope);
  __pyx_cur_scope->__pyx_genexpr_arg_0 = __pyx_genexpr_arg_0;
  __Pyx_INCREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  __Pyx_GIVEREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_5generator1, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_PyJWT__validate_aud_locals_genex, __pyx_n_s_jwt_api_jwt); if (unlikely(!gen)) __PYX_ERR(0, 204, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_aud.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_5generator1(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value)  
{
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *__pyx_cur_scope = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  PyObject *(*__pyx_t_3)(PyObject *);
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  int __pyx_t_6;
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
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 204, __pyx_L1_error)
  if (unlikely(!__pyx_cur_scope->__pyx_genexpr_arg_0)) { __Pyx_RaiseUnboundLocalError(".0"); __PYX_ERR(0, 204, __pyx_L1_error) }
  if (likely(PyList_CheckExact(__pyx_cur_scope->__pyx_genexpr_arg_0)) || PyTuple_CheckExact(__pyx_cur_scope->__pyx_genexpr_arg_0)) {
    __pyx_t_1 = __pyx_cur_scope->__pyx_genexpr_arg_0; __Pyx_INCREF(__pyx_t_1); __pyx_t_2 = 0;
    __pyx_t_3 = NULL;
  } else {
    __pyx_t_2 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_cur_scope->__pyx_genexpr_arg_0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 204, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 204, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_3)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        if (__pyx_t_2 >= PyList_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely((0 < 0))) __PYX_ERR(0, 204, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 204, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      } else {
        if (__pyx_t_2 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_2); __Pyx_INCREF(__pyx_t_4); __pyx_t_2++; if (unlikely((0 < 0))) __PYX_ERR(0, 204, __pyx_L1_error)
        #else
        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_2); __pyx_t_2++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 204, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
        #endif
      }
    } else {
      __pyx_t_4 = __pyx_t_3(__pyx_t_1);
      if (unlikely(!__pyx_t_4)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 204, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_4);
    }
    __Pyx_XGOTREF(__pyx_cur_scope->__pyx_v_aud);
    __Pyx_XDECREF_SET(__pyx_cur_scope->__pyx_v_aud, __pyx_t_4);
    __Pyx_GIVEREF(__pyx_t_4);
    __pyx_t_4 = 0;
    if (unlikely(!__pyx_cur_scope->__pyx_outer_scope->__pyx_v_audience_claims)) { __Pyx_RaiseClosureNameError("audience_claims"); __PYX_ERR(0, 204, __pyx_L1_error) }
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_cur_scope->__pyx_v_aud, __pyx_cur_scope->__pyx_outer_scope->__pyx_v_audience_claims, Py_NE)); if (unlikely((__pyx_t_5 < 0))) __PYX_ERR(0, 204, __pyx_L1_error)
    __pyx_t_6 = (!__pyx_t_5);
    if (__pyx_t_6) {
      __Pyx_XDECREF(__pyx_r);
      __Pyx_INCREF(Py_False);
      __pyx_r = Py_False;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      goto __pyx_L0;
    }
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    {
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(Py_True);
    __pyx_r = Py_True;
    goto __pyx_L0;
  }
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_Generator_Replace_StopIteration(0);
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_4);
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

 

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_20_validate_aud(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_audience) {
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *__pyx_cur_scope;
  PyObject *__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_2generator = 0;
  PyObject *__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_5generator1 = 0;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_t_1;
  int __pyx_t_2;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_validate_aud", 0);
  __pyx_cur_scope = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *)__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct___validate_aud(__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 179, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  __Pyx_INCREF(__pyx_v_audience);

   
  __pyx_t_1 = (__pyx_v_audience == Py_None);
  if (__pyx_t_1) {

     
    __pyx_t_2 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_aud, __pyx_v_payload, Py_NE)); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 181, __pyx_L1_error)
    if (!__pyx_t_2) {
    } else {
      __pyx_t_1 = __pyx_t_2;
      goto __pyx_L5_bool_binop_done;
    }
    __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_payload, __pyx_n_u_aud); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 181, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 181, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_4 = (!__pyx_t_2);
    __pyx_t_1 = __pyx_t_4;
    __pyx_L5_bool_binop_done:;
    if (__pyx_t_1) {

       
      __Pyx_XDECREF(__pyx_r);
      __pyx_r = Py_None; __Pyx_INCREF(Py_None);
      goto __pyx_L0;

       
    }

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_InvalidAudienceError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 185, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = NULL;
    __pyx_t_7 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_7 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_kp_u_Invalid_audience};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 185, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __Pyx_Raise(__pyx_t_3, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __PYX_ERR(0, 185, __pyx_L1_error)

     
  }

   
  __pyx_t_4 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_aud, __pyx_v_payload, Py_NE)); if (unlikely((__pyx_t_4 < 0))) __PYX_ERR(0, 187, __pyx_L1_error)
  if (!__pyx_t_4) {
  } else {
    __pyx_t_1 = __pyx_t_4;
    goto __pyx_L8_bool_binop_done;
  }
  __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_payload, __pyx_n_u_aud); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely((__pyx_t_4 < 0))) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_2 = (!__pyx_t_4);
  __pyx_t_1 = __pyx_t_2;
  __pyx_L8_bool_binop_done:;
  if (unlikely(__pyx_t_1)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_MissingRequiredClaimError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 190, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = NULL;
    __pyx_t_7 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_7 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_n_u_aud};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 190, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __Pyx_Raise(__pyx_t_3, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __PYX_ERR(0, 190, __pyx_L1_error)

     
  }

   
  __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_payload, __pyx_n_u_aud); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 192, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GIVEREF(__pyx_t_3);
  __pyx_cur_scope->__pyx_v_audience_claims = __pyx_t_3;
  __pyx_t_3 = 0;

   
  __pyx_t_3 = __pyx_cur_scope->__pyx_v_audience_claims;
  __Pyx_INCREF(__pyx_t_3);
  __pyx_t_1 = PyUnicode_Check(__pyx_t_3); 
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__pyx_t_1) {

     
    __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 195, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_INCREF(__pyx_cur_scope->__pyx_v_audience_claims);
    __Pyx_GIVEREF(__pyx_cur_scope->__pyx_v_audience_claims);
    if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_cur_scope->__pyx_v_audience_claims)) __PYX_ERR(0, 195, __pyx_L1_error);
    __Pyx_GOTREF(__pyx_cur_scope->__pyx_v_audience_claims);
    __Pyx_DECREF_SET(__pyx_cur_scope->__pyx_v_audience_claims, __pyx_t_3);
    __Pyx_GIVEREF(__pyx_t_3);
    __pyx_t_3 = 0;

     
  }

   
  __pyx_t_3 = __pyx_cur_scope->__pyx_v_audience_claims;
  __Pyx_INCREF(__pyx_t_3);
  __pyx_t_1 = PyList_Check(__pyx_t_3); 
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_2 = (!__pyx_t_1);
  if (unlikely(__pyx_t_2)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_InvalidAudienceError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 197, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = NULL;
    __pyx_t_7 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_7 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_kp_u_Invalid_claim_format_in_token};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 197, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __Pyx_Raise(__pyx_t_3, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __PYX_ERR(0, 197, __pyx_L1_error)

     
  }

   
  __pyx_t_3 = __pyx_pf_3jwt_7api_jwt_5PyJWT_13_validate_aud_genexpr(NULL, __pyx_cur_scope->__pyx_v_audience_claims); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 198, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = __Pyx_Generator_Next(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 198, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_5); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 198, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  if (unlikely(__pyx_t_2)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_InvalidAudienceError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 199, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_6 = NULL;
    __pyx_t_7 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_7 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_kp_u_Invalid_claim_format_in_token};
      __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 199, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_Raise(__pyx_t_5, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __PYX_ERR(0, 199, __pyx_L1_error)

     
  }

   
  __pyx_t_2 = PyUnicode_Check(__pyx_v_audience); 
  if (__pyx_t_2) {

     
    __pyx_t_5 = PyList_New(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 202, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_INCREF(__pyx_v_audience);
    __Pyx_GIVEREF(__pyx_v_audience);
    if (__Pyx_PyList_SET_ITEM(__pyx_t_5, 0, __pyx_v_audience)) __PYX_ERR(0, 202, __pyx_L1_error);
    __Pyx_DECREF_SET(__pyx_v_audience, __pyx_t_5);
    __pyx_t_5 = 0;

     
  }

   
  __pyx_t_5 = __pyx_pf_3jwt_7api_jwt_5PyJWT_13_validate_aud_3genexpr(((PyObject*)__pyx_cur_scope), __pyx_v_audience); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 204, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_3 = __Pyx_Generator_Next(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 204, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely((__pyx_t_2 < 0))) __PYX_ERR(0, 204, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(__pyx_t_2)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_InvalidAudienceError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 205, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = NULL;
    __pyx_t_7 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_6)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_6);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_7 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_kp_u_Invalid_audience};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, 1+__pyx_t_7);
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 205, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __Pyx_Raise(__pyx_t_3, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __PYX_ERR(0, 205, __pyx_L1_error)

     
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_aud", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_2generator);
  __Pyx_XDECREF(__pyx_gb_3jwt_7api_jwt_5PyJWT_13_validate_aud_5generator1);
  __Pyx_XDECREF(__pyx_v_audience);
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_23_validate_iss(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_3jwt_7api_jwt_5PyJWT_23_validate_iss = {"_validate_iss", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_3jwt_7api_jwt_5PyJWT_23_validate_iss, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_3jwt_7api_jwt_5PyJWT_23_validate_iss(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_payload = 0;
  PyObject *__pyx_v_issuer = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[3] = {0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("_validate_iss (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args);
  if (unlikely((__pyx_nargs < 0))) __PYX_ERR(0, 207, __pyx_L3_error)
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_payload,&__pyx_n_s_issuer,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 207, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_payload)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 207, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_iss", 1, 3, 3, 1); __PYX_ERR(0, 207, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_issuer)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 207, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("_validate_iss", 1, 3, 3, 2); __PYX_ERR(0, 207, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "_validate_iss") < 0)) __PYX_ERR(0, 207, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 3)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_payload = values[1];
    __pyx_v_issuer = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("_validate_iss", 1, 3, 3, __pyx_nargs); __PYX_ERR(0, 207, __pyx_L3_error)
  goto __pyx_L3_error;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_iss", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_3jwt_7api_jwt_5PyJWT_22_validate_iss(__pyx_self, __pyx_v_self, __pyx_v_payload, __pyx_v_issuer);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_3jwt_7api_jwt_5PyJWT_22_validate_iss(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, PyObject *__pyx_v_payload, PyObject *__pyx_v_issuer) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_t_1;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  int __pyx_t_5;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("_validate_iss", 0);

   
  __pyx_t_1 = (__pyx_v_issuer == Py_None);
  if (__pyx_t_1) {

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;

     
  }

   
  __pyx_t_1 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_iss, __pyx_v_payload, Py_NE)); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 211, __pyx_L1_error)
  if (unlikely(__pyx_t_1)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_MissingRequiredClaimError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 212, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
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
      PyObject *__pyx_callargs[2] = {__pyx_t_4, __pyx_n_u_iss};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 212, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_Raise(__pyx_t_2, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __PYX_ERR(0, 212, __pyx_L1_error)

     
  }

   
  __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_v_payload, __pyx_n_u_iss); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 214, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = PyObject_RichCompare(__pyx_t_2, __pyx_v_issuer, Py_NE); __Pyx_XGOTREF(__pyx_t_3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 214, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 214, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (unlikely(__pyx_t_1)) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_InvalidIssuerError); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 215, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_4, __pyx_kp_u_Invalid_issuer};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 215, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_Raise(__pyx_t_3, 0, 0, 0);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __PYX_ERR(0, 215, __pyx_L1_error)

     
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("jwt.api_jwt.PyJWT._validate_iss", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *__pyx_freelist_3jwt_7api_jwt___pyx_scope_struct___validate_aud[8];
static int __pyx_freecount_3jwt_7api_jwt___pyx_scope_struct___validate_aud = 0;

static PyObject *__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct___validate_aud(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_COMPILING_IN_CPYTHON
  if (likely((int)(__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct___validate_aud > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud)))) {
    o = (PyObject*)__pyx_freelist_3jwt_7api_jwt___pyx_scope_struct___validate_aud[--__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct___validate_aud];
    memset(o, 0, sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud));
    (void) PyObject_INIT(o, t);
    PyObject_GC_Track(o);
  } else
  #endif
  {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  #endif
  return o;
}

static void __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct___validate_aud(PyObject *o) {
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *p = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *)o;
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && !__Pyx_PyObject_GC_IsFinalized(o)) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct___validate_aud) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_v_audience_claims);
  #if CYTHON_COMPILING_IN_CPYTHON
  if (((int)(__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct___validate_aud < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud)))) {
    __pyx_freelist_3jwt_7api_jwt___pyx_scope_struct___validate_aud[__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct___validate_aud++] = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *)o);
  } else
  #endif
  {
    #if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
    (*Py_TYPE(o)->tp_free)(o);
    #else
    {
      freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(o), Py_tp_free);
      if (tp_free) tp_free(o);
    }
    #endif
  }
}

static int __pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct___validate_aud(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *p = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *)o;
  if (p->__pyx_v_audience_claims) {
    e = (*v)(p->__pyx_v_audience_claims, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_3jwt_7api_jwt___pyx_scope_struct___validate_aud(PyObject *o) {
  PyObject* tmp;
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *p = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud *)o;
  tmp = ((PyObject*)p->__pyx_v_audience_claims);
  p->__pyx_v_audience_claims = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  return 0;
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct___validate_aud},
  {Py_tp_traverse, (void *)__pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct___validate_aud},
  {Py_tp_clear, (void *)__pyx_tp_clear_3jwt_7api_jwt___pyx_scope_struct___validate_aud},
  {Py_tp_new, (void *)__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct___validate_aud},
  {0, 0},
};
static PyType_Spec __pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud_spec = {
  "jwt.api_jwt.__pyx_scope_struct___validate_aud",
  sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud_slots,
};
#else

static PyTypeObject __pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud = {
  PyVarObject_HEAD_INIT(0, 0)
  "jwt.api_jwt.""__pyx_scope_struct___validate_aud",  
  sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct___validate_aud),  
  0,  
  __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct___validate_aud,  
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
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,  
  0,  
  __pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct___validate_aud,  
  __pyx_tp_clear_3jwt_7api_jwt___pyx_scope_struct___validate_aud,  
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
  #if !CYTHON_USE_TYPE_SPECS
  0,  
  #endif
  0,  
  0,  
  __pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct___validate_aud,  
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
  #if CYTHON_USE_TP_FINALIZE
  0,  
  #else
  NULL,  
  #endif
  #endif
  #if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
  0,  
  #endif
  #if __PYX_NEED_TP_PRINT_SLOT == 1
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

static struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *__pyx_freelist_3jwt_7api_jwt___pyx_scope_struct_1_genexpr[8];
static int __pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_1_genexpr = 0;

static PyObject *__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_1_genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_COMPILING_IN_CPYTHON
  if (likely((int)(__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_1_genexpr > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr)))) {
    o = (PyObject*)__pyx_freelist_3jwt_7api_jwt___pyx_scope_struct_1_genexpr[--__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_1_genexpr];
    memset(o, 0, sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr));
    (void) PyObject_INIT(o, t);
    PyObject_GC_Track(o);
  } else
  #endif
  {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  #endif
  return o;
}

static void __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_1_genexpr(PyObject *o) {
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *p = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *)o;
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && !__Pyx_PyObject_GC_IsFinalized(o)) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_1_genexpr) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_genexpr_arg_0);
  Py_CLEAR(p->__pyx_v_c);
  #if CYTHON_COMPILING_IN_CPYTHON
  if (((int)(__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_1_genexpr < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr)))) {
    __pyx_freelist_3jwt_7api_jwt___pyx_scope_struct_1_genexpr[__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_1_genexpr++] = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *)o);
  } else
  #endif
  {
    #if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
    (*Py_TYPE(o)->tp_free)(o);
    #else
    {
      freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(o), Py_tp_free);
      if (tp_free) tp_free(o);
    }
    #endif
  }
}

static int __pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct_1_genexpr(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *p = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr *)o;
  if (p->__pyx_genexpr_arg_0) {
    e = (*v)(p->__pyx_genexpr_arg_0, a); if (e) return e;
  }
  if (p->__pyx_v_c) {
    e = (*v)(p->__pyx_v_c, a); if (e) return e;
  }
  return 0;
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_1_genexpr},
  {Py_tp_traverse, (void *)__pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct_1_genexpr},
  {Py_tp_new, (void *)__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_1_genexpr},
  {0, 0},
};
static PyType_Spec __pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr_spec = {
  "jwt.api_jwt.__pyx_scope_struct_1_genexpr",
  sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr_slots,
};
#else

static PyTypeObject __pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr = {
  PyVarObject_HEAD_INIT(0, 0)
  "jwt.api_jwt.""__pyx_scope_struct_1_genexpr",  
  sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_1_genexpr),  
  0,  
  __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_1_genexpr,  
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
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,  
  0,  
  __pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct_1_genexpr,  
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
  #if !CYTHON_USE_TYPE_SPECS
  0,  
  #endif
  0,  
  0,  
  __pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_1_genexpr,  
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
  #if CYTHON_USE_TP_FINALIZE
  0,  
  #else
  NULL,  
  #endif
  #endif
  #if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
  0,  
  #endif
  #if __PYX_NEED_TP_PRINT_SLOT == 1
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

static struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *__pyx_freelist_3jwt_7api_jwt___pyx_scope_struct_2_genexpr[8];
static int __pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_2_genexpr = 0;

static PyObject *__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_2_genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_COMPILING_IN_CPYTHON
  if (likely((int)(__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_2_genexpr > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr)))) {
    o = (PyObject*)__pyx_freelist_3jwt_7api_jwt___pyx_scope_struct_2_genexpr[--__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_2_genexpr];
    memset(o, 0, sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr));
    (void) PyObject_INIT(o, t);
    PyObject_GC_Track(o);
  } else
  #endif
  {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  #endif
  return o;
}

static void __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_2_genexpr(PyObject *o) {
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *p = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *)o;
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && !__Pyx_PyObject_GC_IsFinalized(o)) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_2_genexpr) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_outer_scope);
  Py_CLEAR(p->__pyx_genexpr_arg_0);
  Py_CLEAR(p->__pyx_v_aud);
  #if CYTHON_COMPILING_IN_CPYTHON
  if (((int)(__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_2_genexpr < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr)))) {
    __pyx_freelist_3jwt_7api_jwt___pyx_scope_struct_2_genexpr[__pyx_freecount_3jwt_7api_jwt___pyx_scope_struct_2_genexpr++] = ((struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *)o);
  } else
  #endif
  {
    #if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
    (*Py_TYPE(o)->tp_free)(o);
    #else
    {
      freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(o), Py_tp_free);
      if (tp_free) tp_free(o);
    }
    #endif
  }
}

static int __pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct_2_genexpr(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *p = (struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr *)o;
  if (p->__pyx_outer_scope) {
    e = (*v)(((PyObject *)p->__pyx_outer_scope), a); if (e) return e;
  }
  if (p->__pyx_genexpr_arg_0) {
    e = (*v)(p->__pyx_genexpr_arg_0, a); if (e) return e;
  }
  if (p->__pyx_v_aud) {
    e = (*v)(p->__pyx_v_aud, a); if (e) return e;
  }
  return 0;
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_2_genexpr},
  {Py_tp_traverse, (void *)__pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct_2_genexpr},
  {Py_tp_new, (void *)__pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_2_genexpr},
  {0, 0},
};
static PyType_Spec __pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr_spec = {
  "jwt.api_jwt.__pyx_scope_struct_2_genexpr",
  sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr_slots,
};
#else

static PyTypeObject __pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr = {
  PyVarObject_HEAD_INIT(0, 0)
  "jwt.api_jwt.""__pyx_scope_struct_2_genexpr",  
  sizeof(struct __pyx_obj_3jwt_7api_jwt___pyx_scope_struct_2_genexpr),  
  0,  
  __pyx_tp_dealloc_3jwt_7api_jwt___pyx_scope_struct_2_genexpr,  
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
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,  
  0,  
  __pyx_tp_traverse_3jwt_7api_jwt___pyx_scope_struct_2_genexpr,  
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
  #if !CYTHON_USE_TYPE_SPECS
  0,  
  #endif
  0,  
  0,  
  __pyx_tp_new_3jwt_7api_jwt___pyx_scope_struct_2_genexpr,  
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
  #if CYTHON_USE_TP_FINALIZE
  0,  
  #else
  NULL,  
  #endif
  #endif
  #if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
  0,  
  #endif
  #if __PYX_NEED_TP_PRINT_SLOT == 1
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
    {&__pyx_n_s_Any, __pyx_k_Any, sizeof(__pyx_k_Any), 0, 0, 1, 1},
    {&__pyx_n_s_DecodeError, __pyx_k_DecodeError, sizeof(__pyx_k_DecodeError), 0, 0, 1, 1},
    {&__pyx_n_s_Dict, __pyx_k_Dict, sizeof(__pyx_k_Dict), 0, 0, 1, 1},
    {&__pyx_kp_s_Dict_str_Any, __pyx_k_Dict_str_Any, sizeof(__pyx_k_Dict_str_Any), 0, 0, 1, 0},
    {&__pyx_kp_s_Dict_str_Union_bool_List_str, __pyx_k_Dict_str_Union_bool_List_str, sizeof(__pyx_k_Dict_str_Union_bool_List_str), 0, 0, 1, 0},
    {&__pyx_kp_u_Expecting_a_mapping_object_as_JW, __pyx_k_Expecting_a_mapping_object_as_JW, sizeof(__pyx_k_Expecting_a_mapping_object_as_JW), 0, 1, 0, 0},
    {&__pyx_kp_u_Expiration_Time_claim_exp_must_b, __pyx_k_Expiration_Time_claim_exp_must_b, sizeof(__pyx_k_Expiration_Time_claim_exp_must_b), 0, 1, 0, 0},
    {&__pyx_n_s_ExpiredSignatureError, __pyx_k_ExpiredSignatureError, sizeof(__pyx_k_ExpiredSignatureError), 0, 0, 1, 1},
    {&__pyx_n_u_HS256, __pyx_k_HS256, sizeof(__pyx_k_HS256), 0, 1, 0, 1},
    {&__pyx_n_s_ImmatureSignatureError, __pyx_k_ImmatureSignatureError, sizeof(__pyx_k_ImmatureSignatureError), 0, 0, 1, 1},
    {&__pyx_n_s_InvalidAudienceError, __pyx_k_InvalidAudienceError, sizeof(__pyx_k_InvalidAudienceError), 0, 0, 1, 1},
    {&__pyx_n_s_InvalidIssuedAtError, __pyx_k_InvalidIssuedAtError, sizeof(__pyx_k_InvalidIssuedAtError), 0, 0, 1, 1},
    {&__pyx_n_s_InvalidIssuerError, __pyx_k_InvalidIssuerError, sizeof(__pyx_k_InvalidIssuerError), 0, 0, 1, 1},
    {&__pyx_kp_u_Invalid_audience, __pyx_k_Invalid_audience, sizeof(__pyx_k_Invalid_audience), 0, 1, 0, 0},
    {&__pyx_kp_u_Invalid_claim_format_in_token, __pyx_k_Invalid_claim_format_in_token, sizeof(__pyx_k_Invalid_claim_format_in_token), 0, 1, 0, 0},
    {&__pyx_kp_u_Invalid_issuer, __pyx_k_Invalid_issuer, sizeof(__pyx_k_Invalid_issuer), 0, 1, 0, 0},
    {&__pyx_kp_u_Invalid_payload_string_must_be_a, __pyx_k_Invalid_payload_string_must_be_a, sizeof(__pyx_k_Invalid_payload_string_must_be_a), 0, 1, 0, 0},
    {&__pyx_kp_u_Invalid_payload_string_s, __pyx_k_Invalid_payload_string_s, sizeof(__pyx_k_Invalid_payload_string_s), 0, 1, 0, 0},
    {&__pyx_kp_u_Issued_At_claim_iat_must_be_an_i, __pyx_k_Issued_At_claim_iat_must_be_an_i, sizeof(__pyx_k_Issued_At_claim_iat_must_be_an_i), 0, 1, 0, 0},
    {&__pyx_kp_u_It_is_required_that_you_pass_in, __pyx_k_It_is_required_that_you_pass_in, sizeof(__pyx_k_It_is_required_that_you_pass_in), 0, 1, 0, 0},
    {&__pyx_n_s_Iterable, __pyx_k_Iterable, sizeof(__pyx_k_Iterable), 0, 0, 1, 1},
    {&__pyx_n_s_List, __pyx_k_List, sizeof(__pyx_k_List), 0, 0, 1, 1},
    {&__pyx_n_s_Mapping, __pyx_k_Mapping, sizeof(__pyx_k_Mapping), 0, 0, 1, 1},
    {&__pyx_n_s_MissingRequiredClaimError, __pyx_k_MissingRequiredClaimError, sizeof(__pyx_k_MissingRequiredClaimError), 0, 0, 1, 1},
    {&__pyx_kp_u_Not_Before_claim_nbf_must_be_an, __pyx_k_Not_Before_claim_nbf_must_be_an, sizeof(__pyx_k_Not_Before_claim_nbf_must_be_an), 0, 1, 0, 0},
    {&__pyx_n_s_Optional, __pyx_k_Optional, sizeof(__pyx_k_Optional), 0, 0, 1, 1},
    {&__pyx_kp_s_Optional_Dict, __pyx_k_Optional_Dict, sizeof(__pyx_k_Optional_Dict), 0, 0, 1, 0},
    {&__pyx_kp_s_Optional_List_str, __pyx_k_Optional_List_str, sizeof(__pyx_k_Optional_List_str), 0, 0, 1, 0},
    {&__pyx_kp_s_Optional_Type_json_JSONEncoder, __pyx_k_Optional_Type_json_JSONEncoder, sizeof(__pyx_k_Optional_Type_json_JSONEncoder), 0, 0, 1, 0},
    {&__pyx_kp_s_Optional_str, __pyx_k_Optional_str, sizeof(__pyx_k_Optional_str), 0, 0, 1, 0},
    {&__pyx_n_s_PyJWT, __pyx_k_PyJWT, sizeof(__pyx_k_PyJWT), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT___init, __pyx_k_PyJWT___init, sizeof(__pyx_k_PyJWT___init), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__get_default_options, __pyx_k_PyJWT__get_default_options, sizeof(__pyx_k_PyJWT__get_default_options), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_aud, __pyx_k_PyJWT__validate_aud, sizeof(__pyx_k_PyJWT__validate_aud), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_aud_locals_genex, __pyx_k_PyJWT__validate_aud_locals_genex, sizeof(__pyx_k_PyJWT__validate_aud_locals_genex), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_claims, __pyx_k_PyJWT__validate_claims, sizeof(__pyx_k_PyJWT__validate_claims), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_exp, __pyx_k_PyJWT__validate_exp, sizeof(__pyx_k_PyJWT__validate_exp), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_iat, __pyx_k_PyJWT__validate_iat, sizeof(__pyx_k_PyJWT__validate_iat), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_iss, __pyx_k_PyJWT__validate_iss, sizeof(__pyx_k_PyJWT__validate_iss), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_nbf, __pyx_k_PyJWT__validate_nbf, sizeof(__pyx_k_PyJWT__validate_nbf), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT__validate_required_claims, __pyx_k_PyJWT__validate_required_claims, sizeof(__pyx_k_PyJWT__validate_required_claims), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT_decode, __pyx_k_PyJWT_decode, sizeof(__pyx_k_PyJWT_decode), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT_decode_complete, __pyx_k_PyJWT_decode_complete, sizeof(__pyx_k_PyJWT_decode_complete), 0, 0, 1, 1},
    {&__pyx_n_s_PyJWT_encode, __pyx_k_PyJWT_encode, sizeof(__pyx_k_PyJWT_encode), 0, 0, 1, 1},
    {&__pyx_kp_u_Signature_has_expired, __pyx_k_Signature_has_expired, sizeof(__pyx_k_Signature_has_expired), 0, 1, 0, 0},
    {&__pyx_kp_u_The_token_is_not_yet_valid_nbf, __pyx_k_The_token_is_not_yet_valid_nbf, sizeof(__pyx_k_The_token_is_not_yet_valid_nbf), 0, 1, 0, 0},
    {&__pyx_n_s_Type, __pyx_k_Type, sizeof(__pyx_k_Type), 0, 0, 1, 1},
    {&__pyx_n_s_TypeError, __pyx_k_TypeError, sizeof(__pyx_k_TypeError), 0, 0, 1, 1},
    {&__pyx_n_s_Union, __pyx_k_Union, sizeof(__pyx_k_Union), 0, 0, 1, 1},
    {&__pyx_n_s_ValueError, __pyx_k_ValueError, sizeof(__pyx_k_ValueError), 0, 0, 1, 1},
    {&__pyx_kp_u__3, __pyx_k__3, sizeof(__pyx_k__3), 0, 1, 0, 0},
    {&__pyx_n_s__37, __pyx_k__37, sizeof(__pyx_k__37), 0, 0, 1, 1},
    {&__pyx_kp_u__4, __pyx_k__4, sizeof(__pyx_k__4), 0, 1, 0, 0},
    {&__pyx_n_s__6, __pyx_k__6, sizeof(__pyx_k__6), 0, 0, 1, 1},
    {&__pyx_kp_u__6, __pyx_k__6, sizeof(__pyx_k__6), 0, 1, 0, 0},
    {&__pyx_n_s__8, __pyx_k__8, sizeof(__pyx_k__8), 0, 0, 1, 1},
    {&__pyx_kp_u__9, __pyx_k__9, sizeof(__pyx_k__9), 0, 1, 0, 0},
    {&__pyx_n_s_algorithm, __pyx_k_algorithm, sizeof(__pyx_k_algorithm), 0, 0, 1, 1},
    {&__pyx_n_s_algorithms, __pyx_k_algorithms, sizeof(__pyx_k_algorithms), 0, 0, 1, 1},
    {&__pyx_n_s_api_jws, __pyx_k_api_jws, sizeof(__pyx_k_api_jws), 0, 0, 1, 1},
    {&__pyx_n_s_args, __pyx_k_args, sizeof(__pyx_k_args), 0, 0, 1, 1},
    {&__pyx_n_s_asyncio_coroutines, __pyx_k_asyncio_coroutines, sizeof(__pyx_k_asyncio_coroutines), 0, 0, 1, 1},
    {&__pyx_n_u_aud, __pyx_k_aud, sizeof(__pyx_k_aud), 0, 1, 0, 1},
    {&__pyx_n_s_audience, __pyx_k_audience, sizeof(__pyx_k_audience), 0, 0, 1, 1},
    {&__pyx_n_s_audience_claims, __pyx_k_audience_claims, sizeof(__pyx_k_audience_claims), 0, 0, 1, 1},
    {&__pyx_kp_u_audience_must_be_a_string_iterab, __pyx_k_audience_must_be_a_string_iterab, sizeof(__pyx_k_audience_must_be_a_string_iterab), 0, 1, 0, 0},
    {&__pyx_n_s_calendar, __pyx_k_calendar, sizeof(__pyx_k_calendar), 0, 0, 1, 1},
    {&__pyx_n_s_claim, __pyx_k_claim, sizeof(__pyx_k_claim), 0, 0, 1, 1},
    {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
    {&__pyx_n_s_close, __pyx_k_close, sizeof(__pyx_k_close), 0, 0, 1, 1},
    {&__pyx_n_s_cls, __pyx_k_cls, sizeof(__pyx_k_cls), 0, 0, 1, 1},
    {&__pyx_n_s_collections_abc, __pyx_k_collections_abc, sizeof(__pyx_k_collections_abc), 0, 0, 1, 1},
    {&__pyx_n_s_datetime, __pyx_k_datetime, sizeof(__pyx_k_datetime), 0, 0, 1, 1},
    {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
    {&__pyx_n_s_decode_complete, __pyx_k_decode_complete, sizeof(__pyx_k_decode_complete), 0, 0, 1, 1},
    {&__pyx_n_s_decoded, __pyx_k_decoded, sizeof(__pyx_k_decoded), 0, 0, 1, 1},
    {&__pyx_n_s_dict, __pyx_k_dict, sizeof(__pyx_k_dict), 0, 0, 1, 1},
    {&__pyx_kp_u_disable, __pyx_k_disable, sizeof(__pyx_k_disable), 0, 1, 0, 0},
    {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
    {&__pyx_n_s_dumps, __pyx_k_dumps, sizeof(__pyx_k_dumps), 0, 0, 1, 1},
    {&__pyx_n_s_e, __pyx_k_e, sizeof(__pyx_k_e), 0, 0, 1, 1},
    {&__pyx_kp_u_enable, __pyx_k_enable, sizeof(__pyx_k_enable), 0, 1, 0, 0},
    {&__pyx_n_s_encode, __pyx_k_encode, sizeof(__pyx_k_encode), 0, 0, 1, 1},
    {&__pyx_n_s_exceptions, __pyx_k_exceptions, sizeof(__pyx_k_exceptions), 0, 0, 1, 1},
    {&__pyx_n_s_exp, __pyx_k_exp, sizeof(__pyx_k_exp), 0, 0, 1, 1},
    {&__pyx_n_u_exp, __pyx_k_exp, sizeof(__pyx_k_exp), 0, 1, 0, 1},
    {&__pyx_kp_u_gc, __pyx_k_gc, sizeof(__pyx_k_gc), 0, 1, 0, 0},
    {&__pyx_n_s_genexpr, __pyx_k_genexpr, sizeof(__pyx_k_genexpr), 0, 0, 1, 1},
    {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
    {&__pyx_n_s_get_default_options, __pyx_k_get_default_options, sizeof(__pyx_k_get_default_options), 0, 0, 1, 1},
    {&__pyx_n_s_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 0, 1, 1},
    {&__pyx_n_u_iat, __pyx_k_iat, sizeof(__pyx_k_iat), 0, 1, 0, 1},
    {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
    {&__pyx_n_s_init, __pyx_k_init, sizeof(__pyx_k_init), 0, 0, 1, 1},
    {&__pyx_n_s_init_subclass, __pyx_k_init_subclass, sizeof(__pyx_k_init_subclass), 0, 0, 1, 1},
    {&__pyx_n_s_initializing, __pyx_k_initializing, sizeof(__pyx_k_initializing), 0, 0, 1, 1},
    {&__pyx_n_s_is_coroutine, __pyx_k_is_coroutine, sizeof(__pyx_k_is_coroutine), 0, 0, 1, 1},
    {&__pyx_kp_u_isenabled, __pyx_k_isenabled, sizeof(__pyx_k_isenabled), 0, 1, 0, 0},
    {&__pyx_n_u_iss, __pyx_k_iss, sizeof(__pyx_k_iss), 0, 1, 0, 1},
    {&__pyx_n_s_issuer, __pyx_k_issuer, sizeof(__pyx_k_issuer), 0, 0, 1, 1},
    {&__pyx_n_s_items, __pyx_k_items, sizeof(__pyx_k_items), 0, 0, 1, 1},
    {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
    {&__pyx_n_s_json_encoder, __pyx_k_json_encoder, sizeof(__pyx_k_json_encoder), 0, 0, 1, 1},
    {&__pyx_n_s_json_payload, __pyx_k_json_payload, sizeof(__pyx_k_json_payload), 0, 0, 1, 1},
    {&__pyx_n_s_jwt, __pyx_k_jwt, sizeof(__pyx_k_jwt), 0, 0, 1, 1},
    {&__pyx_n_s_jwt_api_jwt, __pyx_k_jwt_api_jwt, sizeof(__pyx_k_jwt_api_jwt), 0, 0, 1, 1},
    {&__pyx_n_s_jwt_global_obj, __pyx_k_jwt_global_obj, sizeof(__pyx_k_jwt_global_obj), 0, 0, 1, 1},
    {&__pyx_n_s_key, __pyx_k_key, sizeof(__pyx_k_key), 0, 0, 1, 1},
    {&__pyx_n_s_kwargs, __pyx_k_kwargs, sizeof(__pyx_k_kwargs), 0, 0, 1, 1},
    {&__pyx_n_s_leeway, __pyx_k_leeway, sizeof(__pyx_k_leeway), 0, 0, 1, 1},
    {&__pyx_n_s_loads, __pyx_k_loads, sizeof(__pyx_k_loads), 0, 0, 1, 1},
    {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
    {&__pyx_n_s_merged_options, __pyx_k_merged_options, sizeof(__pyx_k_merged_options), 0, 0, 1, 1},
    {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
    {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
    {&__pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_k_mtf_module_jwt_api_jwt_py, sizeof(__pyx_k_mtf_module_jwt_api_jwt_py), 0, 0, 1, 0},
    {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
    {&__pyx_n_s_nbf, __pyx_k_nbf, sizeof(__pyx_k_nbf), 0, 0, 1, 1},
    {&__pyx_n_u_nbf, __pyx_k_nbf, sizeof(__pyx_k_nbf), 0, 1, 0, 1},
    {&__pyx_n_s_now, __pyx_k_now, sizeof(__pyx_k_now), 0, 0, 1, 1},
    {&__pyx_n_s_options, __pyx_k_options, sizeof(__pyx_k_options), 0, 0, 1, 1},
    {&__pyx_n_s_payload, __pyx_k_payload, sizeof(__pyx_k_payload), 0, 0, 1, 1},
    {&__pyx_n_u_payload, __pyx_k_payload, sizeof(__pyx_k_payload), 0, 1, 0, 1},
    {&__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
    {&__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
    {&__pyx_n_u_require, __pyx_k_require, sizeof(__pyx_k_require), 0, 1, 0, 1},
    {&__pyx_n_s_return, __pyx_k_return, sizeof(__pyx_k_return), 0, 0, 1, 1},
    {&__pyx_n_s_self, __pyx_k_self, sizeof(__pyx_k_self), 0, 0, 1, 1},
    {&__pyx_n_s_send, __pyx_k_send, sizeof(__pyx_k_send), 0, 0, 1, 1},
    {&__pyx_n_s_separators, __pyx_k_separators, sizeof(__pyx_k_separators), 0, 0, 1, 1},
    {&__pyx_n_s_set_name, __pyx_k_set_name, sizeof(__pyx_k_set_name), 0, 0, 1, 1},
    {&__pyx_n_s_setdefault, __pyx_k_setdefault, sizeof(__pyx_k_setdefault), 0, 0, 1, 1},
    {&__pyx_n_s_spec, __pyx_k_spec, sizeof(__pyx_k_spec), 0, 0, 1, 1},
    {&__pyx_n_s_staticmethod, __pyx_k_staticmethod, sizeof(__pyx_k_staticmethod), 0, 0, 1, 1},
    {&__pyx_n_s_str, __pyx_k_str, sizeof(__pyx_k_str), 0, 0, 1, 1},
    {&__pyx_n_s_super, __pyx_k_super, sizeof(__pyx_k_super), 0, 0, 1, 1},
    {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
    {&__pyx_n_s_throw, __pyx_k_throw, sizeof(__pyx_k_throw), 0, 0, 1, 1},
    {&__pyx_n_s_time_claim, __pyx_k_time_claim, sizeof(__pyx_k_time_claim), 0, 0, 1, 1},
    {&__pyx_n_s_timedelta, __pyx_k_timedelta, sizeof(__pyx_k_timedelta), 0, 0, 1, 1},
    {&__pyx_n_s_timegm, __pyx_k_timegm, sizeof(__pyx_k_timegm), 0, 0, 1, 1},
    {&__pyx_n_s_timezone, __pyx_k_timezone, sizeof(__pyx_k_timezone), 0, 0, 1, 1},
    {&__pyx_n_s_total_seconds, __pyx_k_total_seconds, sizeof(__pyx_k_total_seconds), 0, 0, 1, 1},
    {&__pyx_n_s_typing, __pyx_k_typing, sizeof(__pyx_k_typing), 0, 0, 1, 1},
    {&__pyx_n_s_tz, __pyx_k_tz, sizeof(__pyx_k_tz), 0, 0, 1, 1},
    {&__pyx_n_s_utc, __pyx_k_utc, sizeof(__pyx_k_utc), 0, 0, 1, 1},
    {&__pyx_n_s_utctimetuple, __pyx_k_utctimetuple, sizeof(__pyx_k_utctimetuple), 0, 0, 1, 1},
    {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
    {&__pyx_n_s_validate_aud, __pyx_k_validate_aud, sizeof(__pyx_k_validate_aud), 0, 0, 1, 1},
    {&__pyx_n_s_validate_claims, __pyx_k_validate_claims, sizeof(__pyx_k_validate_claims), 0, 0, 1, 1},
    {&__pyx_n_s_validate_exp, __pyx_k_validate_exp, sizeof(__pyx_k_validate_exp), 0, 0, 1, 1},
    {&__pyx_n_s_validate_iat, __pyx_k_validate_iat, sizeof(__pyx_k_validate_iat), 0, 0, 1, 1},
    {&__pyx_n_s_validate_iss, __pyx_k_validate_iss, sizeof(__pyx_k_validate_iss), 0, 0, 1, 1},
    {&__pyx_n_s_validate_nbf, __pyx_k_validate_nbf, sizeof(__pyx_k_validate_nbf), 0, 0, 1, 1},
    {&__pyx_n_s_validate_required_claims, __pyx_k_validate_required_claims, sizeof(__pyx_k_validate_required_claims), 0, 0, 1, 1},
    {&__pyx_n_u_verify_aud, __pyx_k_verify_aud, sizeof(__pyx_k_verify_aud), 0, 1, 0, 1},
    {&__pyx_n_u_verify_exp, __pyx_k_verify_exp, sizeof(__pyx_k_verify_exp), 0, 1, 0, 1},
    {&__pyx_n_u_verify_iat, __pyx_k_verify_iat, sizeof(__pyx_k_verify_iat), 0, 1, 0, 1},
    {&__pyx_n_u_verify_iss, __pyx_k_verify_iss, sizeof(__pyx_k_verify_iss), 0, 1, 0, 1},
    {&__pyx_n_u_verify_nbf, __pyx_k_verify_nbf, sizeof(__pyx_k_verify_nbf), 0, 1, 0, 1},
    {&__pyx_n_u_verify_signature, __pyx_k_verify_signature, sizeof(__pyx_k_verify_signature), 0, 1, 0, 1},
    {0, 0, 0, 0, 0, 0, 0}
  };
  return __Pyx_InitStrings(__pyx_string_tab);
}
 
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_staticmethod = __Pyx_GetBuiltinName(__pyx_n_s_staticmethod); if (!__pyx_builtin_staticmethod) __PYX_ERR(0, 25, __pyx_L1_error)
  __pyx_builtin_TypeError = __Pyx_GetBuiltinName(__pyx_n_s_TypeError); if (!__pyx_builtin_TypeError) __PYX_ERR(0, 47, __pyx_L1_error)
  __pyx_builtin_ValueError = __Pyx_GetBuiltinName(__pyx_n_s_ValueError); if (!__pyx_builtin_ValueError) __PYX_ERR(0, 100, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

   
  __pyx_tuple_ = PyTuple_Pack(1, __pyx_kp_u_Expecting_a_mapping_object_as_JW); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple_);
  __Pyx_GIVEREF(__pyx_tuple_);

   
  __pyx_tuple__2 = PyTuple_Pack(3, __pyx_n_u_exp, __pyx_n_u_iat, __pyx_n_u_nbf); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

   
  __pyx_tuple__5 = PyTuple_Pack(2, __pyx_kp_u__3, __pyx_kp_u__4); if (unlikely(!__pyx_tuple__5)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__5);
  __Pyx_GIVEREF(__pyx_tuple__5);

   
  __pyx_tuple__7 = PyTuple_Pack(1, __pyx_kp_u_audience_must_be_a_string_iterab); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 129, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);

   
  __pyx_tuple__10 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_options); if (unlikely(!__pyx_tuple__10)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__10);
  __Pyx_GIVEREF(__pyx_tuple__10);
  __pyx_codeobj__11 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__10, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_init, 20, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__11)) __PYX_ERR(0, 20, __pyx_L1_error)
  __pyx_tuple__12 = PyTuple_Pack(1, Py_None); if (unlikely(!__pyx_tuple__12)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__12);
  __Pyx_GIVEREF(__pyx_tuple__12);

   
  __pyx_codeobj__13 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_get_default_options, 25, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__13)) __PYX_ERR(0, 25, __pyx_L1_error)

   
  __pyx_tuple__14 = PyTuple_Pack(8, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_key, __pyx_n_s_algorithm, __pyx_n_s_headers, __pyx_n_s_json_encoder, __pyx_n_s_time_claim, __pyx_n_s_json_payload); if (unlikely(!__pyx_tuple__14)) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__14);
  __Pyx_GIVEREF(__pyx_tuple__14);
  __pyx_codeobj__15 = (PyObject*)__Pyx_PyCode_New(6, 0, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__14, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_encode, 37, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__15)) __PYX_ERR(0, 37, __pyx_L1_error)
  __pyx_tuple__16 = PyTuple_Pack(3, ((PyObject*)__pyx_n_u_HS256), Py_None, Py_None); if (unlikely(!__pyx_tuple__16)) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__16);
  __Pyx_GIVEREF(__pyx_tuple__16);

   
  __pyx_tuple__17 = PyTuple_Pack(10, __pyx_n_s_self, __pyx_n_s_jwt, __pyx_n_s_key, __pyx_n_s_algorithms, __pyx_n_s_options, __pyx_n_s_kwargs, __pyx_n_s_decoded, __pyx_n_s_payload, __pyx_n_s_e, __pyx_n_s_merged_options); if (unlikely(!__pyx_tuple__17)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__17);
  __Pyx_GIVEREF(__pyx_tuple__17);
  __pyx_codeobj__18 = (PyObject*)__Pyx_PyCode_New(5, 0, 0, 10, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__17, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_decode_complete, 65, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__18)) __PYX_ERR(0, 65, __pyx_L1_error)
  __pyx_tuple__19 = PyTuple_Pack(3, ((PyObject*)__pyx_kp_u__6), Py_None, Py_None); if (unlikely(!__pyx_tuple__19)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_tuple__19);

   
  __pyx_tuple__20 = PyTuple_Pack(7, __pyx_n_s_self, __pyx_n_s_jwt, __pyx_n_s_key, __pyx_n_s_algorithms, __pyx_n_s_options, __pyx_n_s_kwargs, __pyx_n_s_decoded); if (unlikely(!__pyx_tuple__20)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__20);
  __Pyx_GIVEREF(__pyx_tuple__20);
  __pyx_codeobj__21 = (PyObject*)__Pyx_PyCode_New(5, 0, 0, 7, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__20, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_decode, 111, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__21)) __PYX_ERR(0, 111, __pyx_L1_error)

   
  __pyx_tuple__22 = PyTuple_Pack(8, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_options, __pyx_n_s_audience, __pyx_n_s_issuer, __pyx_n_s_leeway, __pyx_n_s_kwargs, __pyx_n_s_now); if (unlikely(!__pyx_tuple__22)) __PYX_ERR(0, 122, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__22);
  __Pyx_GIVEREF(__pyx_tuple__22);
  __pyx_codeobj__23 = (PyObject*)__Pyx_PyCode_New(6, 0, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__22, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_validate_claims, 122, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__23)) __PYX_ERR(0, 122, __pyx_L1_error)
  __pyx_tuple__24 = PyTuple_Pack(3, Py_None, Py_None, ((PyObject *)__pyx_int_0)); if (unlikely(!__pyx_tuple__24)) __PYX_ERR(0, 122, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__24);
  __Pyx_GIVEREF(__pyx_tuple__24);

   
  __pyx_tuple__25 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_options, __pyx_n_s_claim); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 150, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);
  __pyx_codeobj__26 = (PyObject*)__Pyx_PyCode_New(3, 0, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__25, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_validate_required_claims, 150, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__26)) __PYX_ERR(0, 150, __pyx_L1_error)

   
  __pyx_tuple__27 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_now, __pyx_n_s_leeway); if (unlikely(!__pyx_tuple__27)) __PYX_ERR(0, 155, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__27);
  __Pyx_GIVEREF(__pyx_tuple__27);
  __pyx_codeobj__28 = (PyObject*)__Pyx_PyCode_New(4, 0, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__27, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_validate_iat, 155, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__28)) __PYX_ERR(0, 155, __pyx_L1_error)

   
  __pyx_tuple__29 = PyTuple_Pack(5, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_now, __pyx_n_s_leeway, __pyx_n_s_nbf); if (unlikely(!__pyx_tuple__29)) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__29);
  __Pyx_GIVEREF(__pyx_tuple__29);
  __pyx_codeobj__30 = (PyObject*)__Pyx_PyCode_New(4, 0, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__29, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_validate_nbf, 161, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__30)) __PYX_ERR(0, 161, __pyx_L1_error)

   
  __pyx_tuple__31 = PyTuple_Pack(5, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_now, __pyx_n_s_leeway, __pyx_n_s_exp); if (unlikely(!__pyx_tuple__31)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__31);
  __Pyx_GIVEREF(__pyx_tuple__31);
  __pyx_codeobj__32 = (PyObject*)__Pyx_PyCode_New(4, 0, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__31, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_validate_exp, 170, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__32)) __PYX_ERR(0, 170, __pyx_L1_error)

   
  __pyx_tuple__33 = PyTuple_Pack(7, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_audience, __pyx_n_s_audience_claims, __pyx_n_s_genexpr, __pyx_n_s_genexpr, __pyx_n_s_genexpr); if (unlikely(!__pyx_tuple__33)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__33);
  __Pyx_GIVEREF(__pyx_tuple__33);
  __pyx_codeobj__34 = (PyObject*)__Pyx_PyCode_New(3, 0, 0, 7, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__33, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_validate_aud, 179, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__34)) __PYX_ERR(0, 179, __pyx_L1_error)

   
  __pyx_tuple__35 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_payload, __pyx_n_s_issuer); if (unlikely(!__pyx_tuple__35)) __PYX_ERR(0, 207, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__35);
  __Pyx_GIVEREF(__pyx_tuple__35);
  __pyx_codeobj__36 = (PyObject*)__Pyx_PyCode_New(3, 0, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__35, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_module_jwt_api_jwt_py, __pyx_n_s_validate_iss, 207, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__36)) __PYX_ERR(0, 207, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitConstants(void) {
  __pyx_umethod_PyDict_Type_get.type = (PyObject*)&PyDict_Type;
  __pyx_umethod_PyDict_Type_get.method_name = &__pyx_n_s_get;
  __pyx_umethod_PyDict_Type_setdefault.type = (PyObject*)&PyDict_Type;
  __pyx_umethod_PyDict_Type_setdefault.method_name = &__pyx_n_s_setdefault;
  if (__Pyx_CreateStringTabAndInitStrings() < 0) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
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
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
   
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud_spec, NULL); if (unlikely(!__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud)) __PYX_ERR(0, 179, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud_spec, __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
  #else
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud = &__pyx_type_3jwt_7api_jwt___pyx_scope_struct___validate_aud;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud->tp_dictoffset && __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct___validate_aud->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr_spec, NULL); if (unlikely(!__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr)) __PYX_ERR(0, 198, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr_spec, __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr) < 0) __PYX_ERR(0, 198, __pyx_L1_error)
  #else
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr = &__pyx_type_3jwt_7api_jwt___pyx_scope_struct_1_genexpr;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr) < 0) __PYX_ERR(0, 198, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr->tp_dictoffset && __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_1_genexpr->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr_spec, NULL); if (unlikely(!__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr)) __PYX_ERR(0, 204, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr_spec, __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr) < 0) __PYX_ERR(0, 204, __pyx_L1_error)
  #else
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr = &__pyx_type_3jwt_7api_jwt___pyx_scope_struct_2_genexpr;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr) < 0) __PYX_ERR(0, 204, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr->tp_dictoffset && __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_3jwt_7api_jwt___pyx_scope_struct_2_genexpr->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
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


#if PY_MAJOR_VERSION >= 3
#if CYTHON_PEP489_MULTI_PHASE_INIT
static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def);  
static int __pyx_pymod_exec_api_jwt(PyObject* module);  
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_api_jwt},
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
      "api_jwt",
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
__Pyx_PyMODINIT_FUNC initapi_jwt(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC initapi_jwt(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_api_jwt(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC PyInit_api_jwt(void)
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


static CYTHON_SMALL_CODE int __pyx_pymod_exec_api_jwt(PyObject *__pyx_pyinit_module)
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
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'api_jwt' has already been imported. Re-initialisation is not supported.");
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
  __pyx_m = Py_InitModule4("api_jwt", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
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
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_api_jwt(void)", 0);
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
  if (__pyx_module_is_main_jwt__api_jwt) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "jwt.api_jwt")) {
      if (unlikely((PyDict_SetItemString(modules, "jwt.api_jwt", __pyx_m) < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
    }
  }
  #endif
   
  if (__Pyx_InitCachedBuiltins() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
   
  if (__Pyx_InitCachedConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
   
  (void)__Pyx_modinit_global_init_code();
  (void)__Pyx_modinit_variable_export_code();
  (void)__Pyx_modinit_function_export_code();
  if (unlikely((__Pyx_modinit_type_init_code() < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
  (void)__Pyx_modinit_type_import_code();
  (void)__Pyx_modinit_variable_import_code();
  (void)__Pyx_modinit_function_import_code();
   
  #if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
  if (__Pyx_patch_abc() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_json, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_json, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_timegm);
  __Pyx_GIVEREF(__pyx_n_s_timegm);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_timegm)) __PYX_ERR(0, 2, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_calendar, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_timegm); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_timegm, __pyx_t_2) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_Iterable);
  __Pyx_GIVEREF(__pyx_n_s_Iterable);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_Iterable)) __PYX_ERR(0, 3, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_Mapping);
  __Pyx_GIVEREF(__pyx_n_s_Mapping);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 1, __pyx_n_s_Mapping)) __PYX_ERR(0, 3, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_collections_abc, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Iterable); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Iterable, __pyx_t_3) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Mapping); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Mapping, __pyx_t_3) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_datetime);
  __Pyx_GIVEREF(__pyx_n_s_datetime);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_datetime)) __PYX_ERR(0, 4, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_timedelta);
  __Pyx_GIVEREF(__pyx_n_s_timedelta);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_timedelta)) __PYX_ERR(0, 4, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_timezone);
  __Pyx_GIVEREF(__pyx_n_s_timezone);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_s_timezone)) __PYX_ERR(0, 4, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_datetime, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_datetime); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_datetime, __pyx_t_2) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_timedelta); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_timedelta, __pyx_t_2) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_timezone); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_timezone, __pyx_t_2) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_Any);
  __Pyx_GIVEREF(__pyx_n_s_Any);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_Any)) __PYX_ERR(0, 5, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_Dict);
  __Pyx_GIVEREF(__pyx_n_s_Dict);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 1, __pyx_n_s_Dict)) __PYX_ERR(0, 5, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_List);
  __Pyx_GIVEREF(__pyx_n_s_List);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 2, __pyx_n_s_List)) __PYX_ERR(0, 5, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_Optional);
  __Pyx_GIVEREF(__pyx_n_s_Optional);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 3, __pyx_n_s_Optional)) __PYX_ERR(0, 5, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_Type);
  __Pyx_GIVEREF(__pyx_n_s_Type);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 4, __pyx_n_s_Type)) __PYX_ERR(0, 5, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_Union);
  __Pyx_GIVEREF(__pyx_n_s_Union);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 5, __pyx_n_s_Union)) __PYX_ERR(0, 5, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_typing, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Any); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Any, __pyx_t_3) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Dict); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Dict, __pyx_t_3) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_List); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_List, __pyx_t_3) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Optional); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Optional, __pyx_t_3) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Type); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Type, __pyx_t_3) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_Union); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Union, __pyx_t_3) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_api_jws);
  __Pyx_GIVEREF(__pyx_n_s_api_jws);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_api_jws)) __PYX_ERR(0, 7, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s__6, __pyx_t_2, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_api_jws); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_api_jws, __pyx_t_2) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(7); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_DecodeError);
  __Pyx_GIVEREF(__pyx_n_s_DecodeError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_DecodeError)) __PYX_ERR(0, 9, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_ExpiredSignatureError);
  __Pyx_GIVEREF(__pyx_n_s_ExpiredSignatureError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 1, __pyx_n_s_ExpiredSignatureError)) __PYX_ERR(0, 9, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_ImmatureSignatureError);
  __Pyx_GIVEREF(__pyx_n_s_ImmatureSignatureError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 2, __pyx_n_s_ImmatureSignatureError)) __PYX_ERR(0, 9, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_InvalidAudienceError);
  __Pyx_GIVEREF(__pyx_n_s_InvalidAudienceError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 3, __pyx_n_s_InvalidAudienceError)) __PYX_ERR(0, 9, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_InvalidIssuedAtError);
  __Pyx_GIVEREF(__pyx_n_s_InvalidIssuedAtError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 4, __pyx_n_s_InvalidIssuedAtError)) __PYX_ERR(0, 9, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_InvalidIssuerError);
  __Pyx_GIVEREF(__pyx_n_s_InvalidIssuerError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 5, __pyx_n_s_InvalidIssuerError)) __PYX_ERR(0, 9, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_MissingRequiredClaimError);
  __Pyx_GIVEREF(__pyx_n_s_MissingRequiredClaimError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 6, __pyx_n_s_MissingRequiredClaimError)) __PYX_ERR(0, 9, __pyx_L1_error);

   
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_exceptions, __pyx_t_3, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_DecodeError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_DecodeError, __pyx_t_3) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_ExpiredSignatureError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ExpiredSignatureError, __pyx_t_3) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_ImmatureSignatureError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ImmatureSignatureError, __pyx_t_3) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_InvalidAudienceError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_InvalidAudienceError, __pyx_t_3) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_InvalidIssuedAtError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_InvalidIssuedAtError, __pyx_t_3) < 0) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_InvalidIssuerError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_InvalidIssuerError, __pyx_t_3) < 0) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_MissingRequiredClaimError); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_MissingRequiredClaimError, __pyx_t_3) < 0) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_PyJWT, __pyx_n_s_PyJWT, (PyObject *) NULL, __pyx_n_s_jwt_api_jwt, (PyObject *) NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

   
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_1__init__, 0, __pyx_n_s_PyJWT___init, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__11)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_3, __pyx_tuple__12);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_init, __pyx_t_3) < 0) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_return, __pyx_kp_s_Dict_str_Union_bool_List_str) < 0) __PYX_ERR(0, 25, __pyx_L1_error)
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_3_get_default_options, __Pyx_CYFUNCTION_STATICMETHOD, __pyx_n_s_PyJWT__get_default_options, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__13)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_CyFunction_SetAnnotationsDict(__pyx_t_4, __pyx_t_3);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_staticmethod, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_get_default_options, __pyx_t_3) < 0) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_payload, __pyx_kp_s_Dict_str_Any) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_key, __pyx_n_s_str) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_algorithm, __pyx_kp_s_Optional_str) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_headers, __pyx_kp_s_Optional_Dict) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_json_encoder, __pyx_kp_s_Optional_Type_json_JSONEncoder) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_return, __pyx_n_s_str) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_5encode, 0, __pyx_n_s_PyJWT_encode, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__15)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_4, __pyx_tuple__16);
  __Pyx_CyFunction_SetAnnotationsDict(__pyx_t_4, __pyx_t_3);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_encode, __pyx_t_4) < 0) __PYX_ERR(0, 37, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_PyDict_NewPresized(5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_jwt, __pyx_n_s_str) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_key, __pyx_n_s_str) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_algorithms, __pyx_kp_s_Optional_List_str) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_options, __pyx_kp_s_Optional_Dict) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_return, __pyx_kp_s_Dict_str_Any) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_7decode_complete, 0, __pyx_n_s_PyJWT_decode_complete, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__18)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_3, __pyx_tuple__19);
  __Pyx_CyFunction_SetAnnotationsDict(__pyx_t_3, __pyx_t_4);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_decode_complete, __pyx_t_3) < 0) __PYX_ERR(0, 65, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_jwt, __pyx_n_s_str) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_key, __pyx_n_s_str) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_algorithms, __pyx_kp_s_Optional_List_str) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_options, __pyx_kp_s_Optional_Dict) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_return, __pyx_kp_s_Dict_str_Any) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_9decode, 0, __pyx_n_s_PyJWT_decode, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__21)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_4, __pyx_tuple__19);
  __Pyx_CyFunction_SetAnnotationsDict(__pyx_t_4, __pyx_t_3);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_decode, __pyx_t_4) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_11_validate_claims, 0, __pyx_n_s_PyJWT__validate_claims, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__23)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 122, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_4, __pyx_tuple__24);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_validate_claims, __pyx_t_4) < 0) __PYX_ERR(0, 122, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_13_validate_required_claims, 0, __pyx_n_s_PyJWT__validate_required_claims, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__26)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 150, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_validate_required_claims, __pyx_t_4) < 0) __PYX_ERR(0, 150, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_15_validate_iat, 0, __pyx_n_s_PyJWT__validate_iat, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__28)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 155, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_validate_iat, __pyx_t_4) < 0) __PYX_ERR(0, 155, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_17_validate_nbf, 0, __pyx_n_s_PyJWT__validate_nbf, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__30)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_validate_nbf, __pyx_t_4) < 0) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_19_validate_exp, 0, __pyx_n_s_PyJWT__validate_exp, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__32)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_validate_exp, __pyx_t_4) < 0) __PYX_ERR(0, 170, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_21_validate_aud, 0, __pyx_n_s_PyJWT__validate_aud, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__34)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_validate_aud, __pyx_t_4) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_CyFunction_New(&__pyx_mdef_3jwt_7api_jwt_5PyJWT_23_validate_iss, 0, __pyx_n_s_PyJWT__validate_iss, NULL, __pyx_n_s_jwt_api_jwt, __pyx_d, ((PyObject *)__pyx_codeobj__36)); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 207, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_validate_iss, __pyx_t_4) < 0) __PYX_ERR(0, 207, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __pyx_t_4 = __Pyx_Py3ClassCreate(((PyObject*)&PyType_Type), __pyx_n_s_PyJWT, __pyx_empty_tuple, __pyx_t_2, NULL, 0, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_PyJWT, __pyx_t_4) < 0) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_PyJWT); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_CallNoArg(__pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_jwt_global_obj, __pyx_t_4) < 0) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_jwt_global_obj); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 219, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_encode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 219, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_encode, __pyx_t_2) < 0) __PYX_ERR(0, 219, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_jwt_global_obj); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 220, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_decode_complete); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 220, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_decode_complete, __pyx_t_4) < 0) __PYX_ERR(0, 220, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_jwt_global_obj); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 221, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_decode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 221, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_decode, __pyx_t_2) < 0) __PYX_ERR(0, 221, __pyx_L1_error)
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
  if (__pyx_m) {
    if (__pyx_d && stringtab_initialized) {
      __Pyx_AddTraceback("init jwt.api_jwt", __pyx_clineno, __pyx_lineno, __pyx_filename);
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
    PyErr_SetString(PyExc_ImportError, "init jwt.api_jwt");
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
    PyObject *const *kwvalues,
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
    int kwds_is_tuple = CYTHON_METH_FASTCALL && likely(PyTuple_Check(kwds));
    while (1) {
        Py_XDECREF(key); key = NULL;
        Py_XDECREF(value); value = NULL;
        if (kwds_is_tuple) {
            Py_ssize_t size;
#if CYTHON_ASSUME_SAFE_MACROS
            size = PyTuple_GET_SIZE(kwds);
#else
            size = PyTuple_Size(kwds);
            if (size < 0) goto bad;
#endif
            if (pos >= size) break;
#if CYTHON_AVOID_BORROWED_REFS
            key = __Pyx_PySequence_ITEM(kwds, pos);
            if (!key) goto bad;
#elif CYTHON_ASSUME_SAFE_MACROS
            key = PyTuple_GET_ITEM(kwds, pos);
#else
            key = PyTuple_GetItem(kwds, pos);
            if (!key) goto bad;
#endif
            value = kwvalues[pos];
            pos++;
        }
        else
        {
            if (!PyDict_Next(kwds, &pos, &key, &value)) break;
#if CYTHON_AVOID_BORROWED_REFS
            Py_INCREF(key);
#endif
        }
        name = first_kw_arg;
        while (*name && (**name != key)) name++;
        if (*name) {
            values[name-argnames] = value;
#if CYTHON_AVOID_BORROWED_REFS
            Py_INCREF(value);  
            Py_DECREF(key);
#endif
            key = NULL;
            value = NULL;
            continue;
        }
#if !CYTHON_AVOID_BORROWED_REFS
        Py_INCREF(key);
#endif
        Py_INCREF(value);
        name = first_kw_arg;
        #if PY_MAJOR_VERSION < 3
        if (likely(PyString_Check(key))) {
            while (*name) {
                if ((CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**name) == PyString_GET_SIZE(key))
                        && _PyString_Eq(**name, key)) {
                    values[name-argnames] = value;
#if CYTHON_AVOID_BORROWED_REFS
                    value = NULL;   
#endif
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
                int cmp = (
                #if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                    (__Pyx_PyUnicode_GET_LENGTH(**name) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
                #endif
                    PyUnicode_Compare(**name, key)
                );
                if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                if (cmp == 0) {
                    values[name-argnames] = value;
#if CYTHON_AVOID_BORROWED_REFS
                    value = NULL;  
#endif
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
    Py_XDECREF(key);
    Py_XDECREF(value);
    return 0;
arg_passed_twice:
    __Pyx_RaiseDoubleKeywordsError(function_name, key);
    goto bad;
invalid_keyword_type:
    PyErr_Format(PyExc_TypeError,
        "%.200s() keywords must be strings", function_name);
    goto bad;
invalid_keyword:
    #if PY_MAJOR_VERSION < 3
    PyErr_Format(PyExc_TypeError,
        "%.200s() got an unexpected keyword argument '%.200s'",
        function_name, PyString_AsString(key));
    #else
    PyErr_Format(PyExc_TypeError,
        "%s() got an unexpected keyword argument '%U'",
        function_name, key);
    #endif
bad:
    Py_XDECREF(key);
    Py_XDECREF(value);
    return -1;
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *args[2] = {NULL, arg};
    return __Pyx_PyObject_FastCall(func, args+1, 1 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

 
static void __Pyx_RaiseMappingExpectedError(PyObject* arg) {
    __Pyx_TypeName arg_type_name = __Pyx_PyType_GetName(Py_TYPE(arg));
    PyErr_Format(PyExc_TypeError,
        "'" __Pyx_FMT_TYPENAME "' object is not a mapping", arg_type_name);
    __Pyx_DECREF_TypeName(arg_type_name);
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

 
static int __Pyx__ArgTypeTest(PyObject *obj, PyTypeObject *type, const char *name, int exact)
{
    __Pyx_TypeName type_name;
    __Pyx_TypeName obj_type_name;
    if (unlikely(!type)) {
        PyErr_SetString(PyExc_SystemError, "Missing type object");
        return 0;
    }
    else if (exact) {
        #if PY_MAJOR_VERSION == 2
        if ((type == &PyBaseString_Type) && likely(__Pyx_PyBaseString_CheckExact(obj))) return 1;
        #endif
    }
    else {
        if (likely(__Pyx_TypeCheck(obj, type))) return 1;
    }
    type_name = __Pyx_PyType_GetName(type);
    obj_type_name = __Pyx_PyType_GetName(Py_TYPE(obj));
    PyErr_Format(PyExc_TypeError,
        "Argument '%.200s' has incorrect type (expected " __Pyx_FMT_TYPENAME
        ", got " __Pyx_FMT_TYPENAME ")", name, type_name, obj_type_name);
    __Pyx_DECREF_TypeName(type_name);
    __Pyx_DECREF_TypeName(obj_type_name);
    return 0;
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

 
#if PY_MAJOR_VERSION < 3
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause) {
    __Pyx_PyThreadState_declare
    CYTHON_UNUSED_VAR(cause);
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
      #if PY_VERSION_HEX >= 0x030C00A6
        PyException_SetTraceback(value, tb);
      #elif CYTHON_FAST_THREAD_STATE
        PyThreadState *tstate = __Pyx_PyThreadState_Current;
        PyObject* tmp_tb = tstate->curexc_traceback;
        if (tb != tmp_tb) {
            Py_INCREF(tb);
            tstate->curexc_traceback = tb;
            Py_XDECREF(tmp_tb);
        }
#else
        PyObject *tmp_type, *tmp_value, *tmp_tb;
        PyErr_Fetch(&tmp_type, &tmp_value, &tmp_tb);
        Py_INCREF(tb);
        PyErr_Restore(tmp_type, tmp_value, tb);
        Py_XDECREF(tmp_tb);
#endif
    }
bad:
    Py_XDECREF(owned_instance);
    return;
}
#endif

 
static PyObject *__Pyx_SelflessCall(PyObject *method, PyObject *args, PyObject *kwargs) {
    PyObject *selfless_args = PyTuple_GetSlice(args, 1, PyTuple_Size(args));
    if (unlikely(!selfless_args)) return NULL;
    PyObject *result = PyObject_Call(method, selfless_args, kwargs);
    Py_DECREF(selfless_args);
    return result;
}
static PyMethodDef __Pyx_UnboundCMethod_Def = {
     "CythonUnboundCMethod",
     __PYX_REINTERPRET_FUNCION(PyCFunction, __Pyx_SelflessCall),
     METH_VARARGS | METH_KEYWORDS,
     NULL
};
static int __Pyx_TryUnpackUnboundCMethod(__Pyx_CachedCFunction* target) {
    PyObject *method;
    method = __Pyx_PyObject_GetAttrStr(target->type, *target->method_name);
    if (unlikely(!method))
        return -1;
    target->method = method;
#if CYTHON_COMPILING_IN_CPYTHON
    #if PY_MAJOR_VERSION >= 3
    if (likely(__Pyx_TypeCheck(method, &PyMethodDescr_Type)))
    #else
    if (likely(!PyCFunction_Check(method)))
    #endif
    {
        PyMethodDescrObject *descr = (PyMethodDescrObject*) method;
        target->func = descr->d_method->ml_meth;
        target->flag = descr->d_method->ml_flags & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_STACKLESS);
    } else
#endif
#if defined(CYTHON_COMPILING_IN_PYPY)
#elif PY_VERSION_HEX >= 0x03090000
    if (PyCFunction_CheckExact(method))
#else
    if (PyCFunction_Check(method))
#endif
    {
        PyObject *self;
        int self_found;
#if CYTHON_COMPILING_IN_LIMITED_API || CYTHON_COMPILING_IN_PYPY
        self = PyObject_GetAttrString(method, "__self__");
        if (!self) {
            PyErr_Clear();
        }
#else
        self = PyCFunction_GET_SELF(method);
#endif
        self_found = (self && self != Py_None);
#if CYTHON_COMPILING_IN_LIMITED_API || CYTHON_COMPILING_IN_PYPY
        Py_XDECREF(self);
#endif
        if (self_found) {
            PyObject *unbound_method = PyCFunction_New(&__Pyx_UnboundCMethod_Def, method);
            if (unlikely(!unbound_method)) return -1;
            Py_DECREF(method);
            target->method = unbound_method;
        }
    }
    return 0;
}

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_CallUnboundCMethod1(__Pyx_CachedCFunction* cfunc, PyObject* self, PyObject* arg) {
    if (likely(cfunc->func)) {
        int flag = cfunc->flag;
        if (flag == METH_O) {
            return (*(cfunc->func))(self, arg);
        } else if ((PY_VERSION_HEX >= 0x030600B1) && flag == METH_FASTCALL) {
            #if PY_VERSION_HEX >= 0x030700A0
                return (*(__Pyx_PyCFunctionFast)(void*)(PyCFunction)cfunc->func)(self, &arg, 1);
            #else
                return (*(__Pyx_PyCFunctionFastWithKeywords)(void*)(PyCFunction)cfunc->func)(self, &arg, 1, NULL);
            #endif
        } else if ((PY_VERSION_HEX >= 0x030700A0) && flag == (METH_FASTCALL | METH_KEYWORDS)) {
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

 
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030600B1
static CYTHON_INLINE PyObject *__Pyx_CallUnboundCMethod2(__Pyx_CachedCFunction *cfunc, PyObject *self, PyObject *arg1, PyObject *arg2) {
    if (likely(cfunc->func)) {
        PyObject *args[2] = {arg1, arg2};
        if (cfunc->flag == METH_FASTCALL) {
            #if PY_VERSION_HEX >= 0x030700A0
            return (*(__Pyx_PyCFunctionFast)(void*)(PyCFunction)cfunc->func)(self, args, 2);
            #else
            return (*(__Pyx_PyCFunctionFastWithKeywords)(void*)(PyCFunction)cfunc->func)(self, args, 2, NULL);
            #endif
        }
        #if PY_VERSION_HEX >= 0x030700A0
        if (cfunc->flag == (METH_FASTCALL | METH_KEYWORDS))
            return (*(__Pyx_PyCFunctionFastWithKeywords)(void*)(PyCFunction)cfunc->func)(self, args, 2, NULL);
        #endif
    }
    return __Pyx__CallUnboundCMethod2(cfunc, self, arg1, arg2);
}
#endif
static PyObject* __Pyx__CallUnboundCMethod2(__Pyx_CachedCFunction* cfunc, PyObject* self, PyObject* arg1, PyObject* arg2){
    PyObject *args, *result = NULL;
    if (unlikely(!cfunc->func && !cfunc->method) && unlikely(__Pyx_TryUnpackUnboundCMethod(cfunc) < 0)) return NULL;
#if CYTHON_COMPILING_IN_CPYTHON
    if (cfunc->func && (cfunc->flag & METH_VARARGS)) {
        args = PyTuple_New(2);
        if (unlikely(!args)) goto bad;
        Py_INCREF(arg1);
        PyTuple_SET_ITEM(args, 0, arg1);
        Py_INCREF(arg2);
        PyTuple_SET_ITEM(args, 1, arg2);
        if (cfunc->flag & METH_KEYWORDS)
            result = (*(PyCFunctionWithKeywords)(void*)(PyCFunction)cfunc->func)(self, args, NULL);
        else
            result = (*cfunc->func)(self, args);
    } else {
        args = PyTuple_New(3);
        if (unlikely(!args)) goto bad;
        Py_INCREF(self);
        PyTuple_SET_ITEM(args, 0, self);
        Py_INCREF(arg1);
        PyTuple_SET_ITEM(args, 1, arg1);
        Py_INCREF(arg2);
        PyTuple_SET_ITEM(args, 2, arg2);
        result = __Pyx_PyObject_Call(cfunc->method, args, NULL);
    }
#else
    args = PyTuple_Pack(3, self, arg1, arg2);
    if (unlikely(!args)) goto bad;
    result = __Pyx_PyObject_Call(cfunc->method, args, NULL);
#endif
bad:
    Py_XDECREF(args);
    return result;
}

 
static PyObject* __Pyx_PyDict_GetItemDefault(PyObject* d, PyObject* key, PyObject* default_value) {
    PyObject* value;
#if PY_MAJOR_VERSION >= 3 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07020000)
    value = PyDict_GetItemWithError(d, key);
    if (unlikely(!value)) {
        if (unlikely(PyErr_Occurred()))
            return NULL;
        value = default_value;
    }
    Py_INCREF(value);
    if ((1));
#else
    if (PyString_CheckExact(key) || PyUnicode_CheckExact(key) || PyInt_CheckExact(key)) {
        value = PyDict_GetItem(d, key);
        if (unlikely(!value)) {
            value = default_value;
        }
        Py_INCREF(value);
    }
#endif
    else {
        if (default_value == Py_None)
            value = __Pyx_CallUnboundCMethod1(&__pyx_umethod_PyDict_Type_get, d, key);
        else
            value = __Pyx_CallUnboundCMethod2(&__pyx_umethod_PyDict_Type_get, d, key, default_value);
    }
    return value;
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

 
static int
__Pyx_RaiseUnexpectedTypeError(const char *expected, PyObject *obj)
{
    __Pyx_TypeName obj_type_name = __Pyx_PyType_GetName(Py_TYPE(obj));
    PyErr_Format(PyExc_TypeError, "Expected %s, got " __Pyx_FMT_TYPENAME,
                 expected, obj_type_name);
    __Pyx_DECREF_TypeName(obj_type_name);
    return 0;
}

 
static CYTHON_INLINE PyObject *__Pyx_PyDict_SetDefault(PyObject *d, PyObject *key, PyObject *default_value,
                                                       int is_safe_type) {
    PyObject* value;
    CYTHON_MAYBE_UNUSED_VAR(is_safe_type);
#if PY_VERSION_HEX >= 0x030400A0
    if ((1)) {
        value = PyDict_SetDefault(d, key, default_value);
        if (unlikely(!value)) return NULL;
        Py_INCREF(value);
#else
    if (is_safe_type == 1 || (is_safe_type == -1 &&
#if PY_MAJOR_VERSION >= 3 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07020000)
            (PyUnicode_CheckExact(key) || PyString_CheckExact(key) || PyLong_CheckExact(key)))) {
        value = PyDict_GetItemWithError(d, key);
        if (unlikely(!value)) {
            if (unlikely(PyErr_Occurred()))
                return NULL;
            if (unlikely(PyDict_SetItem(d, key, default_value) == -1))
                return NULL;
            value = default_value;
        }
        Py_INCREF(value);
#else
            (PyString_CheckExact(key) || PyUnicode_CheckExact(key) || PyInt_CheckExact(key) || PyLong_CheckExact(key)))) {
        value = PyDict_GetItem(d, key);
        if (unlikely(!value)) {
            if (unlikely(PyDict_SetItem(d, key, default_value) == -1))
                return NULL;
            value = default_value;
        }
        Py_INCREF(value);
#endif
#endif
    } else {
        value = __Pyx_CallUnboundCMethod2(&__pyx_umethod_PyDict_Type_setdefault, d, key, default_value);
    }
    return value;
}

 
    static CYTHON_INLINE int __Pyx_IterFinish(void) {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    PyObject* exc_type = __Pyx_PyErr_CurrentExceptionType();
    if (unlikely(exc_type)) {
        if (unlikely(!__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration)))
            return -1;
        __Pyx_PyErr_Clear();
        return 0;
    }
    return 0;
}

 
    static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
    PyObject *arg = NULL;
    return __Pyx_PyObject_FastCall(func, (&arg)+1, 0 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

 
    static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method) {
    PyObject *attr;
#if CYTHON_UNPACK_METHODS && CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_PYTYPE_LOOKUP
    __Pyx_TypeName type_name;
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
#if defined(Py_TPFLAGS_METHOD_DESCRIPTOR) && Py_TPFLAGS_METHOD_DESCRIPTOR
        if (__Pyx_PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_METHOD_DESCRIPTOR))
#elif PY_MAJOR_VERSION >= 3
        #ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || __Pyx_IS_TYPE(descr, &PyMethodDescr_Type) || __Pyx_CyFunction_Check(descr)))
        #else
        if (likely(PyFunction_Check(descr) || __Pyx_IS_TYPE(descr, &PyMethodDescr_Type)))
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
    if (likely(descr != NULL)) {
        *method = descr;
        return 0;
    }
    type_name = __Pyx_PyType_GetName(tp);
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%U'",
                 type_name, name);
#else
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%.400s'",
                 type_name, PyString_AS_STRING(name));
#endif
    __Pyx_DECREF_TypeName(type_name);
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
    iternext = __Pyx_PyObject_GetIterNextFunc(iter);
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

 
    static int __Pyx_MergeKeywords(PyObject *kwdict, PyObject *source_mapping) {
    PyObject *iter, *key = NULL, *value = NULL;
    int source_is_dict, result;
    Py_ssize_t orig_length, ppos = 0;
    iter = __Pyx_dict_iterator(source_mapping, 0, __pyx_n_s_items, &orig_length, &source_is_dict);
    if (unlikely(!iter)) {
        PyObject *args;
        if (unlikely(!PyErr_ExceptionMatches(PyExc_AttributeError))) goto bad;
        PyErr_Clear();
        args = PyTuple_Pack(1, source_mapping);
        if (likely(args)) {
            PyObject *fallback = PyObject_Call((PyObject*)&PyDict_Type, args, NULL);
            Py_DECREF(args);
            if (likely(fallback)) {
                iter = __Pyx_dict_iterator(fallback, 1, __pyx_n_s_items, &orig_length, &source_is_dict);
                Py_DECREF(fallback);
            }
        }
        if (unlikely(!iter)) goto bad;
    }
    while (1) {
        result = __Pyx_dict_iter_next(iter, orig_length, &ppos, &key, &value, NULL, source_is_dict);
        if (unlikely(result < 0)) goto bad;
        if (!result) break;
        if (unlikely(PyDict_Contains(kwdict, key))) {
            __Pyx_RaiseDoubleKeywordsError("function", key);
            result = -1;
        } else {
            result = PyDict_SetItem(kwdict, key, value);
        }
        Py_DECREF(key);
        Py_DECREF(value);
        if (unlikely(result < 0)) goto bad;
    }
    Py_XDECREF(iter);
    return 0;
bad:
    Py_XDECREF(iter);
    return -1;
}

 
    #if CYTHON_USE_EXC_INFO_STACK && CYTHON_FAST_THREAD_STATE
static _PyErr_StackItem *
__Pyx_PyErr_GetTopmostException(PyThreadState *tstate)
{
    _PyErr_StackItem *exc_info = tstate->exc_info;
    while ((exc_info->exc_value == NULL || exc_info->exc_value == Py_None) &&
           exc_info->previous_item != NULL)
    {
        exc_info = exc_info->previous_item;
    }
    return exc_info;
}
#endif

 
    #if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    PyObject *exc_value = exc_info->exc_value;
    if (exc_value == NULL || exc_value == Py_None) {
        *value = NULL;
        *type = NULL;
        *tb = NULL;
    } else {
        *value = exc_value;
        Py_INCREF(*value);
        *type = (PyObject*) Py_TYPE(exc_value);
        Py_INCREF(*type);
        *tb = PyException_GetTraceback(exc_value);
    }
  #elif CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    *type = exc_info->exc_type;
    *value = exc_info->exc_value;
    *tb = exc_info->exc_traceback;
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
  #else
    *type = tstate->exc_type;
    *value = tstate->exc_value;
    *tb = tstate->exc_traceback;
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
  #endif
}
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = tstate->exc_info;
    PyObject *tmp_value = exc_info->exc_value;
    exc_info->exc_value = value;
    Py_XDECREF(tmp_value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
  #else
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
  #endif
}
#endif

 
    #if CYTHON_FAST_THREAD_STATE
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb)
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb)
#endif
{
    PyObject *local_type = NULL, *local_value, *local_tb = NULL;
#if CYTHON_FAST_THREAD_STATE
    PyObject *tmp_type, *tmp_value, *tmp_tb;
  #if PY_VERSION_HEX >= 0x030C00A6
    local_value = tstate->current_exception;
    tstate->current_exception = 0;
    if (likely(local_value)) {
        local_type = (PyObject*) Py_TYPE(local_value);
        Py_INCREF(local_type);
        local_tb = PyException_GetTraceback(local_value);
    }
  #else
    local_type = tstate->curexc_type;
    local_value = tstate->curexc_value;
    local_tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
  #endif
#else
    PyErr_Fetch(&local_type, &local_value, &local_tb);
#endif
    PyErr_NormalizeException(&local_type, &local_value, &local_tb);
#if CYTHON_FAST_THREAD_STATE && PY_VERSION_HEX >= 0x030C00A6
    if (unlikely(tstate->current_exception))
#elif CYTHON_FAST_THREAD_STATE
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
      #if PY_VERSION_HEX >= 0x030B00a4
        tmp_value = exc_info->exc_value;
        exc_info->exc_value = local_value;
        tmp_type = NULL;
        tmp_tb = NULL;
        Py_XDECREF(local_type);
        Py_XDECREF(local_tb);
      #else
        tmp_type = exc_info->exc_type;
        tmp_value = exc_info->exc_value;
        tmp_tb = exc_info->exc_traceback;
        exc_info->exc_type = local_type;
        exc_info->exc_value = local_value;
        exc_info->exc_traceback = local_tb;
      #endif
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
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_value = exc_info->exc_value;
    exc_info->exc_value = *value;
    if (tmp_value == NULL || tmp_value == Py_None) {
        Py_XDECREF(tmp_value);
        tmp_value = NULL;
        tmp_type = NULL;
        tmp_tb = NULL;
    } else {
        tmp_type = (PyObject*) Py_TYPE(tmp_value);
        Py_INCREF(tmp_type);
        #if CYTHON_COMPILING_IN_CPYTHON
        tmp_tb = ((PyBaseExceptionObject*) tmp_value)->traceback;
        Py_XINCREF(tmp_tb);
        #else
        tmp_tb = PyException_GetTraceback(tmp_value);
        #endif
    }
  #elif CYTHON_USE_EXC_INFO_STACK
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

 
    static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname) {
    PyErr_Format(PyExc_UnboundLocalError, "local variable '%s' referenced before assignment", varname);
}

 
    static void __Pyx_Generator_Replace_StopIteration(int in_async_gen) {
    PyObject *exc, *val, *tb, *cur_exc;
    __Pyx_PyThreadState_declare
    #ifdef __Pyx_StopAsyncIteration_USED
    int is_async_stopiteration = 0;
    #endif
    CYTHON_MAYBE_UNUSED_VAR(in_async_gen);
    cur_exc = PyErr_Occurred();
    if (likely(!__Pyx_PyErr_GivenExceptionMatches(cur_exc, PyExc_StopIteration))) {
        #ifdef __Pyx_StopAsyncIteration_USED
        if (in_async_gen && unlikely(__Pyx_PyErr_GivenExceptionMatches(cur_exc, __Pyx_PyExc_StopAsyncIteration))) {
            is_async_stopiteration = 1;
        } else
        #endif
            return;
    }
    __Pyx_PyThreadState_assign
    __Pyx_GetException(&exc, &val, &tb);
    Py_XDECREF(exc);
    Py_XDECREF(val);
    Py_XDECREF(tb);
    PyErr_SetString(PyExc_RuntimeError,
        #ifdef __Pyx_StopAsyncIteration_USED
        is_async_stopiteration ? "async generator raised StopAsyncIteration" :
        in_async_gen ? "async generator raised StopIteration" :
        #endif
        "generator raised StopIteration");
}

 
    static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname) {
    PyErr_Format(PyExc_NameError, "free variable '%s' referenced before assignment in enclosing scope", varname);
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

 
    #if CYTHON_COMPILING_IN_CPYTHON || CYTHON_COMPILING_IN_LIMITED_API || CYTHON_USE_TYPE_SPECS
static int __Pyx_validate_bases_tuple(const char *type_name, Py_ssize_t dictoffset, PyObject *bases) {
    Py_ssize_t i, n;
#if CYTHON_ASSUME_SAFE_MACROS
    n = PyTuple_GET_SIZE(bases);
#else
    n = PyTuple_Size(bases);
    if (n < 0) return -1;
#endif
    for (i = 1; i < n; i++)
    {
#if CYTHON_AVOID_BORROWED_REFS
        PyObject *b0 = PySequence_GetItem(bases, i);
        if (!b0) return -1;
#elif CYTHON_ASSUME_SAFE_MACROS
        PyObject *b0 = PyTuple_GET_ITEM(bases, i);
#else
        PyObject *b0 = PyTuple_GetItem(bases, i);
        if (!b0) return -1;
#endif
        PyTypeObject *b;
#if PY_MAJOR_VERSION < 3
        if (PyClass_Check(b0))
        {
            PyErr_Format(PyExc_TypeError, "base class '%.200s' is an old-style class",
                         PyString_AS_STRING(((PyClassObject*)b0)->cl_name));
#if CYTHON_AVOID_BORROWED_REFS
            Py_DECREF(b0);
#endif
            return -1;
        }
#endif
        b = (PyTypeObject*) b0;
        if (!__Pyx_PyType_HasFeature(b, Py_TPFLAGS_HEAPTYPE))
        {
            __Pyx_TypeName b_name = __Pyx_PyType_GetName(b);
            PyErr_Format(PyExc_TypeError,
                "base class '" __Pyx_FMT_TYPENAME "' is not a heap type", b_name);
            __Pyx_DECREF_TypeName(b_name);
#if CYTHON_AVOID_BORROWED_REFS
            Py_DECREF(b0);
#endif
            return -1;
        }
#if !CYTHON_USE_TYPE_SLOTS
        if (dictoffset == 0) {
            PyErr_Format(PyExc_TypeError,
                "extension type '%s.200s': "
                "unable to validate whether bases have a __dict__ "
                "when CYTHON_USE_TYPE_SLOTS is off "
                "(likely because you are building in the limited API). "
                "Therefore, all extension types with multiple bases "
                "must add 'cdef dict __dict__' in this compilation mode",
                type_name);
#if CYTHON_AVOID_BORROWED_REFS
            Py_DECREF(b0);
#endif
            return -1;
        }
#else
        if (dictoffset == 0 && b->tp_dictoffset)
        {
            __Pyx_TypeName b_name = __Pyx_PyType_GetName(b);
            PyErr_Format(PyExc_TypeError,
                "extension type '%.200s' has no __dict__ slot, "
                "but base type '" __Pyx_FMT_TYPENAME "' has: "
                "either add 'cdef dict __dict__' to the extension type "
                "or add '__slots__ = [...]' to the base type",
                type_name, b_name);
            __Pyx_DECREF_TypeName(b_name);
#if CYTHON_AVOID_BORROWED_REFS
            Py_DECREF(b0);
#endif
            return -1;
        }
#endif
#if CYTHON_AVOID_BORROWED_REFS
        Py_DECREF(b0);
#endif
    }
    return 0;
}
#endif

 
    static int __Pyx_PyType_Ready(PyTypeObject *t) {
#if CYTHON_USE_TYPE_SPECS || !(CYTHON_COMPILING_IN_CPYTHON || CYTHON_COMPILING_IN_LIMITED_API) || defined(PYSTON_MAJOR_VERSION)
    (void)__Pyx_PyObject_CallMethod0;
#if CYTHON_USE_TYPE_SPECS
    (void)__Pyx_validate_bases_tuple;
#endif
    return PyType_Ready(t);
#else
    int r;
    PyObject *bases = __Pyx_PyType_GetSlot(t, tp_bases, PyObject*);
    if (bases && unlikely(__Pyx_validate_bases_tuple(t->tp_name, t->tp_dictoffset, bases) == -1))
        return -1;
#if PY_VERSION_HEX >= 0x03050000 && !defined(PYSTON_MAJOR_VERSION)
    {
        int gc_was_enabled;
    #if PY_VERSION_HEX >= 0x030A00b1
        gc_was_enabled = PyGC_Disable();
        (void)__Pyx_PyObject_CallMethod0;
    #else
        PyObject *ret, *py_status;
        PyObject *gc = NULL;
        #if PY_VERSION_HEX >= 0x030700a1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM+0 >= 0x07030400)
        gc = PyImport_GetModule(__pyx_kp_u_gc);
        #endif
        if (unlikely(!gc)) gc = PyImport_Import(__pyx_kp_u_gc);
        if (unlikely(!gc)) return -1;
        py_status = __Pyx_PyObject_CallMethod0(gc, __pyx_kp_u_isenabled);
        if (unlikely(!py_status)) {
            Py_DECREF(gc);
            return -1;
        }
        gc_was_enabled = __Pyx_PyObject_IsTrue(py_status);
        Py_DECREF(py_status);
        if (gc_was_enabled > 0) {
            ret = __Pyx_PyObject_CallMethod0(gc, __pyx_kp_u_disable);
            if (unlikely(!ret)) {
                Py_DECREF(gc);
                return -1;
            }
            Py_DECREF(ret);
        } else if (unlikely(gc_was_enabled == -1)) {
            Py_DECREF(gc);
            return -1;
        }
    #endif
        t->tp_flags |= Py_TPFLAGS_HEAPTYPE;
#if PY_VERSION_HEX >= 0x030A0000
        t->tp_flags |= Py_TPFLAGS_IMMUTABLETYPE;
#endif
#else
        (void)__Pyx_PyObject_CallMethod0;
#endif
    r = PyType_Ready(t);
#if PY_VERSION_HEX >= 0x03050000 && !defined(PYSTON_MAJOR_VERSION)
        t->tp_flags &= ~Py_TPFLAGS_HEAPTYPE;
    #if PY_VERSION_HEX >= 0x030A00b1
        if (gc_was_enabled)
            PyGC_Enable();
    #else
        if (gc_was_enabled) {
            PyObject *tp, *v, *tb;
            PyErr_Fetch(&tp, &v, &tb);
            ret = __Pyx_PyObject_CallMethod0(gc, __pyx_kp_u_enable);
            if (likely(ret || r == -1)) {
                Py_XDECREF(ret);
                PyErr_Restore(tp, v, tb);
            } else {
                Py_XDECREF(tp);
                Py_XDECREF(v);
                Py_XDECREF(tb);
                r = -1;
            }
        }
        Py_DECREF(gc);
    #endif
    }
#endif
    return r;
#endif
}

 
    #if CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP && PY_VERSION_HEX < 0x03070000
static PyObject *__Pyx_RaiseGenericGetAttributeError(PyTypeObject *tp, PyObject *attr_name) {
    __Pyx_TypeName type_name = __Pyx_PyType_GetName(tp);
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%U'",
                 type_name, attr_name);
#else
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%.400s'",
                 type_name, PyString_AS_STRING(attr_name));
#endif
    __Pyx_DECREF_TypeName(type_name);
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
    PyObject *module, *from_list, *star = __pyx_n_s__8;
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
        module_dot = PyUnicode_Concat(module_name, __pyx_kp_u__9);
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
        name = __Pyx_NewRef(__pyx_n_s__37);
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

 
    #include <frameobject.h>
#if PY_VERSION_HEX >= 0x030b00a6
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
#define __Pyx_Coroutine_Undelegate(gen) Py_CLEAR((gen)->yieldfrom)
static int __Pyx_PyGen__FetchStopIterationValue(PyThreadState *__pyx_tstate, PyObject **pvalue) {
    PyObject *et, *ev, *tb;
    PyObject *value = NULL;
    CYTHON_UNUSED_VAR(__pyx_tstate);
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
        else if (likely(__Pyx_IS_TYPE(ev, (PyTypeObject*)PyExc_StopIteration))) {
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
#if PY_VERSION_HEX >= 0x030B00a4
    Py_CLEAR(exc_state->exc_value);
#else
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
#endif
}
#define __Pyx_Coroutine_AlreadyRunningError(gen)  (__Pyx__Coroutine_AlreadyRunningError(gen), (PyObject*)NULL)
static void __Pyx__Coroutine_AlreadyRunningError(__pyx_CoroutineObject *gen) {
    const char *msg;
    CYTHON_MAYBE_UNUSED_VAR(gen);
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
static void __Pyx__Coroutine_NotStartedError(PyObject *gen) {
    const char *msg;
    CYTHON_MAYBE_UNUSED_VAR(gen);
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
static void __Pyx__Coroutine_AlreadyTerminatedError(PyObject *gen, PyObject *value, int closing) {
    CYTHON_MAYBE_UNUSED_VAR(gen);
    CYTHON_MAYBE_UNUSED_VAR(closing);
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
    if (exc_state->exc_value) {
        #if CYTHON_COMPILING_IN_PYPY
        #else
        PyObject *exc_tb;
        #if PY_VERSION_HEX >= 0x030B00a4 && !CYTHON_COMPILING_IN_CPYTHON
        exc_tb = PyException_GetTraceback(exc_state->exc_value);
        #elif PY_VERSION_HEX >= 0x030B00a4
        exc_tb = ((PyBaseExceptionObject*) exc_state->exc_value)->traceback;
        #else
        exc_tb = exc_state->exc_traceback;
        #endif
        if (exc_tb) {
            PyTracebackObject *tb = (PyTracebackObject *) exc_tb;
            PyFrameObject *f = tb->tb_frame;
            assert(f->f_back == NULL);
            #if PY_VERSION_HEX >= 0x030B00A1
            f->f_back = PyThreadState_GetFrame(tstate);
            #else
            Py_XINCREF(tstate->frame);
            f->f_back = tstate->frame;
            #endif
            #if PY_VERSION_HEX >= 0x030B00a4 && !CYTHON_COMPILING_IN_CPYTHON
            Py_DECREF(exc_tb);
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
    retval = self->body(self, tstate, value);
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
#if CYTHON_COMPILING_IN_PYPY
    CYTHON_UNUSED_VAR(exc_state);
#else
    PyObject *exc_tb;
    #if PY_VERSION_HEX >= 0x030B00a4
    if (!exc_state->exc_value) return;
    exc_tb = PyException_GetTraceback(exc_state->exc_value);
    #else
    exc_tb = exc_state->exc_traceback;
    #endif
    if (likely(exc_tb)) {
        PyTracebackObject *tb = (PyTracebackObject *) exc_tb;
        PyFrameObject *f = tb->tb_frame;
        Py_CLEAR(f->f_back);
        #if PY_VERSION_HEX >= 0x030B00a4
        Py_DECREF(exc_tb);
        #endif
    }
#endif
}
static CYTHON_INLINE
PyObject *__Pyx_Coroutine_MethodReturn(PyObject* gen, PyObject *retval) {
    CYTHON_MAYBE_UNUSED_VAR(gen);
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
                ret = __Pyx_PyObject_GetIterNextFunc(yf)(yf);
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
        meth = __Pyx_PyObject_GetAttrStrNoError(yf, __pyx_n_s_close);
        if (unlikely(!meth)) {
            if (unlikely(PyErr_Occurred())) {
                PyErr_WriteUnraisable(yf);
            }
        } else {
            retval = __Pyx_PyObject_CallNoArg(meth);
            Py_DECREF(meth);
            if (unlikely(!retval))
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
            ret = __Pyx_PyObject_GetIterNextFunc(yf)(yf);
        gen->is_running = 0;
        if (likely(ret)) {
            return ret;
        }
        return __Pyx_Coroutine_FinishDelegation(gen);
    }
    return __Pyx_Coroutine_SendEx(gen, Py_None, 0);
}
static PyObject *__Pyx_Coroutine_Close_Method(PyObject *self, PyObject *arg) {
    CYTHON_UNUSED_VAR(arg);
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
            PyObject *meth = __Pyx_PyObject_GetAttrStrNoError(yf, __pyx_n_s_throw);
            if (unlikely(!meth)) {
                Py_DECREF(yf);
                if (unlikely(PyErr_Occurred())) {
                    gen->is_running = 0;
                    return NULL;
                }
                __Pyx_Coroutine_Undelegate(gen);
                gen->is_running = 0;
                goto throw_here;
            }
            if (likely(args)) {
                ret = __Pyx_PyObject_Call(meth, args, NULL);
            } else {
                PyObject *cargs[4] = {NULL, typ, val, tb};
                ret = __Pyx_PyObject_FastCall(meth, cargs+1, 3 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
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
    if (unlikely(!PyArg_UnpackTuple(args, (char *)"throw", 1, 3, &typ, &val, &tb)))
        return NULL;
    return __Pyx__Coroutine_Throw(self, typ, val, tb, args, 1);
}
static CYTHON_INLINE int __Pyx_Coroutine_traverse_excstate(__Pyx_ExcInfoStruct *exc_state, visitproc visit, void *arg) {
#if PY_VERSION_HEX >= 0x030B00a4
    Py_VISIT(exc_state->exc_value);
#else
    Py_VISIT(exc_state->exc_type);
    Py_VISIT(exc_state->exc_value);
    Py_VISIT(exc_state->exc_traceback);
#endif
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
        if (unlikely(PyObject_CallFinalizerFromDealloc(self)))
#else
        Py_TYPE(gen)->tp_del(self);
        if (unlikely(Py_REFCNT(self) > 0))
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
    __Pyx_PyHeapTypeObject_GC_Del(gen);
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
    if (likely(--self->ob_refcnt == 0)) {
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
__Pyx_Coroutine_get_name(__pyx_CoroutineObject *self, void *context)
{
    PyObject *name = self->gi_name;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!name)) name = Py_None;
    Py_INCREF(name);
    return name;
}
static int
__Pyx_Coroutine_set_name(__pyx_CoroutineObject *self, PyObject *value, void *context)
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
    __Pyx_Py_XDECREF_SET(self->gi_name, value);
    return 0;
}
static PyObject *
__Pyx_Coroutine_get_qualname(__pyx_CoroutineObject *self, void *context)
{
    PyObject *name = self->gi_qualname;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!name)) name = Py_None;
    Py_INCREF(name);
    return name;
}
static int
__Pyx_Coroutine_set_qualname(__pyx_CoroutineObject *self, PyObject *value, void *context)
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
    __Pyx_Py_XDECREF_SET(self->gi_qualname, value);
    return 0;
}
static PyObject *
__Pyx_Coroutine_get_frame(__pyx_CoroutineObject *self, void *context)
{
    PyObject *frame = self->gi_frame;
    CYTHON_UNUSED_VAR(context);
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
    #if PY_VERSION_HEX >= 0x030B00a4
    gen->gi_exc_state.exc_value = NULL;
    #else
    gen->gi_exc_state.exc_type = NULL;
    gen->gi_exc_state.exc_value = NULL;
    gen->gi_exc_state.exc_traceback = NULL;
    #endif
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
        if (unlikely(!module)) {
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
    {(char *) "__module__", T_OBJECT, offsetof(__pyx_CoroutineObject, gi_modulename), 0, 0},
#if CYTHON_USE_TYPE_SPECS
    {(char *) "__weaklistoffset__", T_PYSSIZET, offsetof(__pyx_CoroutineObject, gi_weakreflist), READONLY, 0},
#endif
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
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_GeneratorType_slots[] = {
    {Py_tp_dealloc, (void *)__Pyx_Coroutine_dealloc},
    {Py_tp_traverse, (void *)__Pyx_Coroutine_traverse},
    {Py_tp_iter, (void *)PyObject_SelfIter},
    {Py_tp_iternext, (void *)__Pyx_Generator_Next},
    {Py_tp_methods, (void *)__pyx_Generator_methods},
    {Py_tp_members, (void *)__pyx_Generator_memberlist},
    {Py_tp_getset, (void *)__pyx_Generator_getsets},
    {Py_tp_getattro, (void *) __Pyx_PyObject_GenericGetAttrNoDict},
#if CYTHON_USE_TP_FINALIZE
    {Py_tp_finalize, (void *)__Pyx_Coroutine_del},
#endif
    {0, 0},
};
static PyType_Spec __pyx_GeneratorType_spec = {
    __PYX_TYPE_MODULE_PREFIX "generator",
    sizeof(__pyx_CoroutineObject),
    0,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_HAVE_FINALIZE,
    __pyx_GeneratorType_slots
};
#else
static PyTypeObject __pyx_GeneratorType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    __PYX_TYPE_MODULE_PREFIX "generator",
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
static int __pyx_Generator_init(PyObject *module) {
#if CYTHON_USE_TYPE_SPECS
    __pyx_GeneratorType = __Pyx_FetchCommonTypeFromSpec(module, &__pyx_GeneratorType_spec, NULL);
#else
    CYTHON_UNUSED_VAR(module);
    __pyx_GeneratorType_type.tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
    __pyx_GeneratorType_type.tp_iter = PyObject_SelfIter;
    __pyx_GeneratorType = __Pyx_FetchCommonType(&__pyx_GeneratorType_type);
#endif
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
