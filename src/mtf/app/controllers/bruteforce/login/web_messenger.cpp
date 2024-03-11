 

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
#if defined(CYTHON_LIMITED_API) && CYTHON_LIMITED_API
#define __PYX_EXTRA_ABI_MODULE_NAME "limited"
#else
#define __PYX_EXTRA_ABI_MODULE_NAME ""
#endif
#define CYTHON_ABI "3_0_9" __PYX_EXTRA_ABI_MODULE_NAME
#define __PYX_ABI_MODULE_NAME "_cython_" CYTHON_ABI
#define __PYX_TYPE_MODULE_PREFIX __PYX_ABI_MODULE_NAME "."
#define CYTHON_HEX_VERSION 0x030009F0
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
#elif defined(Py_GIL_DISABLED) || defined(Py_NOGIL)
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
        #if __PYX_LIMITED_VERSION_HEX < 0x030B0000
        PyObject *version_info;
        PyObject *py_minor_version = NULL;
        #endif
        long minor_version = 0;
        PyObject *type, *value, *traceback;
        PyErr_Fetch(&type, &value, &traceback);
        #if __PYX_LIMITED_VERSION_HEX >= 0x030B0000
        minor_version = 11;
        #else
        if (!(version_info = PySys_GetObject("version_info"))) goto end;
        if (!(py_minor_version = PySequence_GetItem(version_info, 1))) goto end;
        minor_version = PyLong_AsLong(py_minor_version);
        Py_DECREF(py_minor_version);
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
  #if PY_VERSION_HEX >= 0x030d00A4
  #  define __Pyx_PyCFunctionFast PyCFunctionFast
  #  define __Pyx_PyCFunctionFastWithKeywords PyCFunctionFastWithKeywords
  #else
  #  define __Pyx_PyCFunctionFast _PyCFunctionFast
  #  define __Pyx_PyCFunctionFastWithKeywords _PyCFunctionFastWithKeywords
  #endif
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
#if PY_MAJOR_VERSION >= 0x030900B1
#define __Pyx_PyCFunction_CheckExact(func)  PyCFunction_CheckExact(func)
#else
#define __Pyx_PyCFunction_CheckExact(func)  PyCFunction_Check(func)
#endif
#define __Pyx_CyOrPyCFunction_Check(func)  PyCFunction_Check(func)
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_CyOrPyCFunction_GET_FUNCTION(func)  (((PyCFunctionObject*)(func))->m_ml->ml_meth)
#elif !CYTHON_COMPILING_IN_LIMITED_API
#define __Pyx_CyOrPyCFunction_GET_FUNCTION(func)  PyCFunction_GET_FUNCTION(func)
#endif
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_CyOrPyCFunction_GET_FLAGS(func)  (((PyCFunctionObject*)(func))->m_ml->ml_flags)
static CYTHON_INLINE PyObject* __Pyx_CyOrPyCFunction_GET_SELF(PyObject *func) {
    return (__Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_STATIC) ? NULL : ((PyCFunctionObject*)func)->m_self;
}
#endif
static CYTHON_INLINE int __Pyx__IsSameCFunction(PyObject *func, void *cfunc) {
#if CYTHON_COMPILING_IN_LIMITED_API
    return PyCFunction_Check(func) && PyCFunction_GetFunction(func) == (PyCFunction) cfunc;
#else
    return PyCFunction_Check(func) && PyCFunction_GET_FUNCTION(func) == (PyCFunction) cfunc;
#endif
}
#define __Pyx_IsSameCFunction(func, cfunc)   __Pyx__IsSameCFunction(func, cfunc)
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
#elif PY_VERSION_HEX >= 0x030d00A1
  #define __Pyx_PyThreadState_Current PyThreadState_GetUnchecked()
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
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030d0000 || defined(_PyDict_NewPresized)
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
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX > 0x030600B4 && PY_VERSION_HEX < 0x030d0000 && CYTHON_USE_UNICODE_INTERNALS
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
    PyTypeObject *type = Py_TYPE((PyObject*)obj);\
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
#if __PYX_LIMITED_VERSION_HEX >= 0x030d00A1
  #define __Pyx_PyImport_AddModuleRef(name) PyImport_AddModuleRef(name)
#else
  static CYTHON_INLINE PyObject *__Pyx_PyImport_AddModuleRef(const char *name) {
      PyObject *module = PyImport_AddModule(name);
      Py_XINCREF(module);
      return module;
  }
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
    { __pyx_filename = __pyx_f[f_index]; (void)__pyx_filename; __pyx_lineno = lineno; (void)__pyx_lineno; __pyx_clineno = __LINE__;  (void)__pyx_clineno; }
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

#define __PYX_HAVE__controllers__bruteforce__login__web_messenger
#define __PYX_HAVE_API__controllers__bruteforce__login__web_messenger
 
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
static CYTHON_INLINE Py_ssize_t __Pyx_ssize_strlen(const char *s);
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject*);
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject*, Py_ssize_t* length);
static CYTHON_INLINE PyObject* __Pyx_PyByteArray_FromString(const char*);
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
#define __Pyx_PyUnicode_FromOrdinal(o)       PyUnicode_FromOrdinal((int)o)
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
#include <string.h>
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
#include <string.h>
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
  "mtf/app/controllers/bruteforce/login/web_messenger.py",
};
 
 
#ifndef __PYX_FORCE_INIT_THREADS
  #define __PYX_FORCE_INIT_THREADS 0
#endif

 
 
 

 
struct __pyx_defaults;
typedef struct __pyx_defaults __pyx_defaults;
struct __pyx_defaults {
  PyObject *__pyx_arg_retries;
  PyObject *__pyx_arg_user_agent;
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
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
    CYTHON_UNUSED static PyObject *__Pyx_KwargsAsDict_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues);
  #else
    #define __Pyx_KwargsAsDict_FASTCALL(kw, kwvalues) _PyStack_AsDict(kwvalues, kw)
  #endif
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

 
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);

 
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);

 
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject *const *kwvalues,
    PyObject **argnames[],
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,
    const char* function_name);

 
#define __Pyx_ArgTypeTest(obj, type, none_allowed, name, exact)\
    ((likely(__Pyx_IS_TYPE(obj, type) | (none_allowed && (obj == Py_None)))) ? 1 :\
        __Pyx__ArgTypeTest(obj, type, name, exact))
static int __Pyx__ArgTypeTest(PyObject *obj, PyTypeObject *type, const char *name, int exact);

 
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

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key);
#define __Pyx_PyObject_Dict_GetItem(obj, name)\
    (likely(PyDict_CheckExact(obj)) ?\
     __Pyx_PyDict_GetItem(obj, name) : PyObject_GetItem(obj, name))
#else
#define __Pyx_PyDict_GetItem(d, key) PyObject_GetItem(d, key)
#define __Pyx_PyObject_Dict_GetItem(obj, name)  PyObject_GetItem(obj, name)
#endif

 
static void __Pyx_RaiseMappingExpectedError(PyObject* arg);

 
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);

 
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatSimpleAndDecref(PyObject* s, PyObject* f);
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatAndDecref(PyObject* s, PyObject* f);

 
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      Py_UCS4 max_char);

 
#define __Pyx_PyObject_Str(obj)\
    (likely(PyString_CheckExact(obj)) ? __Pyx_NewRef(obj) : PyObject_Str(obj))

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_SubtractObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_SubtractObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceSubtract(op1, op2) : PyNumber_Subtract(op1, op2))
#endif

 
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

 
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
#endif

 
static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname);

 
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}

 
static int __Pyx_RaiseUnexpectedTypeError(const char *expected, PyObject *obj);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject *key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
#endif

 
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

 
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple);
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple);
#endif

 
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);

 
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
#undef __Pyx_CyOrPyCFunction_Check
#define __Pyx_CyFunction_Check(obj)  __Pyx_TypeCheck(obj, __pyx_CyFunctionType)
#define __Pyx_CyOrPyCFunction_Check(obj)  __Pyx_TypeCheck2(obj, __pyx_CyFunctionType, &PyCFunction_Type)
#define __Pyx_CyFunction_CheckExact(obj)  __Pyx_IS_TYPE(obj, __pyx_CyFunctionType)
static CYTHON_INLINE int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc);
#undef __Pyx_IsSameCFunction
#define __Pyx_IsSameCFunction(func, cfunc)   __Pyx__IsSameCyOrCFunction(func, cfunc)
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

 
#if !defined(__INTEL_COMPILER) && defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif

 
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);

 
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

 
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);

 
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);

 
static unsigned long __Pyx_get_runtime_version(void);
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer);

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);

 

 
 
 
#define __Pyx_MODULE_NAME "controllers.bruteforce.login.web_messenger"
extern int __pyx_module_is_main_controllers__bruteforce__login__web_messenger;
int __pyx_module_is_main_controllers__bruteforce__login__web_messenger = 0;

 
 
 
static const char __pyx_k_0[] = "0";
static const char __pyx_k_1[] = "1";
static const char __pyx_k_h[] = ",\"h\":";
static const char __pyx_k_u[] = "u";
static const char __pyx_k_w[] = "{\"w\":";
static const char __pyx_k_x[] = "x";
static const char __pyx_k__4[] = ",";
static const char __pyx_k__5[] = "-";
static const char __pyx_k__6[] = "_";
static const char __pyx_k__8[] = "";
static const char __pyx_k_ah[] = ",\"ah\":";
static const char __pyx_k_aw[] = ",\"aw\":";
static const char __pyx_k_id[] = "id";
static const char __pyx_k_re[] = "re";
static const char __pyx_k_ua[] = "ua";
static const char __pyx_k_wd[] = "wd";
static const char __pyx_k_1_2[] = "?1";
static const char __pyx_k_420[] = "-420";
static const char __pyx_k_BS4[] = "BS4";
static const char __pyx_k__10[] = "*";
static const char __pyx_k__11[] = ".";
static const char __pyx_k__14[] = "?";
static const char __pyx_k_app[] = "app";
static const char __pyx_k_dpr[] = "dpr";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_h_2[] = "h";
static const char __pyx_k_int[] = "int";
static const char __pyx_k_str[] = "str";
static const char __pyx_k_1_25[] = "1.25";
static const char __pyx_k_Http[] = "Http";
static const char __pyx_k_NAME[] = "NAME";
static const char __pyx_k_bool[] = "bool";
static const char __pyx_k_c_24[] = ",\"c\":24}";
static const char __pyx_k_copy[] = "copy";
static const char __pyx_k_data[] = "data";
static const char __pyx_k_datr[] = "datr";
static const char __pyx_k_form[] = "form";
static const char __pyx_k_http[] = "http";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_pass[] = "pass";
static const char __pyx_k_post[] = "post";
static const char __pyx_k_spec[] = "__spec__";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_text[] = "text";
static const char __pyx_k_email[] = "email";
static const char __pyx_k_group[] = "group";
static const char __pyx_k_loads[] = "loads";
static const char __pyx_k_login[] = "/login";
static const char __pyx_k_other[] = "other";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_utils[] = "utils";
static const char __pyx_k_RESULT[] = "RESULT";
static const char __pyx_k_action[] = "action";
static const char __pyx_k_base64[] = "base64";
static const char __pyx_k_c_user[] = "c_user";
static const char __pyx_k_cookie[] = "&cookie=(.*?)&";
static const char __pyx_k_decode[] = "decode";
static const char __pyx_k_domain[] = "domain";
static const char __pyx_k_encode[] = "encode";
static const char __pyx_k_format[] = "format";
static const char __pyx_k_hidden[] = "hidden";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_lgndim[] = "lgndim";
static const char __pyx_k_locale[] = "locale";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_search[] = "search";
static const char __pyx_k_status[] = "status";
static const char __pyx_k_update[] = "update";
static const char __pyx_k_userid[] = "userid";
static const char __pyx_k_OK_CODE[] = "OK_CODE";
static const char __pyx_k_Timeout[] = "Timeout";
static const char __pyx_k_attempt[] = "attempt";
static const char __pyx_k_cookies[] = "cookies";
static const char __pyx_k_desktop[] = "desktop";
static const char __pyx_k_headers[] = "headers";
static const char __pyx_k_js_datr[] = "\"_js_datr\",\"(.*?)\"";
static const char __pyx_k_login_2[] = "login";
static const char __pyx_k_payload[] = "payload";
static const char __pyx_k_referer[] = "referer";
static const char __pyx_k_replace[] = "replace";
static const char __pyx_k_results[] = "results";
static const char __pyx_k_retries[] = "retries";
static const char __pyx_k_session[] = "session";
static const char __pyx_k_uniform[] = "uniform";
static const char __pyx_k_unquote[] = "unquote";
static const char __pyx_k_Location[] = "Location";
static const char __pyx_k_cookie_2[] = "cookie";
static const char __pyx_k_get_dict[] = "get_dict";
static const char __pyx_k_get_form[] = "get_form";
static const char __pyx_k_password[] = "password";
static const char __pyx_k_response[] = "response";
static const char __pyx_k_timezone[] = "timezone";
static const char __pyx_k_Variables[] = "Variables";
static const char __pyx_k_b64encode[] = "b64encode";
static const char __pyx_k_js_datr_2[] = "js_datr";
static const char __pyx_k_urlencode[] = "urlencode";
static const char __pyx_k_checkpoint[] = "checkpoint";
static const char __pyx_k_login_form[] = "login_form";
static const char __pyx_k_login_name[] = "login_name";
static const char __pyx_k_mtf_config[] = "mtf.config";
static const char __pyx_k_mtf_module[] = "mtf.module";
static const char __pyx_k_persistent[] = "persistent";
static const char __pyx_k_user_agent[] = "user_agent";
static const char __pyx_k_html_parser[] = "html.parser";
static const char __pyx_k_content_type[] = "content-type";
static const char __pyx_k_initializing[] = "_initializing";
static const char __pyx_k_is_coroutine[] = "_is_coroutine";
static const char __pyx_k_redirect_url[] = "redirect_url";
static const char __pyx_k_save_session[] = "save_session";
static const char __pyx_k_screen_sizes[] = "screen_sizes";
static const char __pyx_k_urllib_parse[] = "urllib.parse";
static const char __pyx_k_user_agent_2[] = "user-agent";
static const char __pyx_k_SESSION_LOGIN[] = "SESSION_LOGIN";
static const char __pyx_k_class_getitem[] = "__class_getitem__";
static const char __pyx_k_m_pixel_ratio[] = "m_pixel_ratio";
static const char __pyx_k_web_messenger[] = "web_messenger";
static const char __pyx_k_content_length[] = "content-length";
static const char __pyx_k_login_password[] = "/login/password/";
static const char __pyx_k_sec_fetch_user[] = "sec-fetch-user";
static const char __pyx_k_ACCEPT_LANGUAGE[] = "ACCEPT_LANGUAGE";
static const char __pyx_k_ConnectionError[] = "ConnectionError";
static const char __pyx_k_RandomUserAgent[] = "RandomUserAgent";
static const char __pyx_k_accept_language[] = "accept-language";
static const char __pyx_k_allow_redirects[] = "allow_redirects";
static const char __pyx_k_MUST_VERIFY_CODE[] = "MUST_VERIFY_CODE";
static const char __pyx_k_InvalidChunkLength[] = "InvalidChunkLength";
static const char __pyx_k_asyncio_coroutines[] = "asyncio.coroutines";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_default_persistent[] = "default_persistent";
static const char __pyx_k_urllib3_exceptions[] = "urllib3.exceptions";
static const char __pyx_k_mtf_module_http_bs4[] = "mtf.module.http_bs4";
static const char __pyx_k_requests_exceptions[] = "requests.exceptions";
static const char __pyx_k_ChunkedEncodingError[] = "ChunkedEncodingError";
static const char __pyx_k_DESKTOP_REQUEST_HEADERS[] = "DESKTOP_REQUEST_HEADERS";
static const char __pyx_k_checkpoint_interstitial[] = "checkpoint_interstitial";
static const char __pyx_k_INVALID_CREDENTIALS_CODE[] = "INVALID_CREDENTIALS_CODE";
static const char __pyx_k_upgrade_insecure_requests[] = "upgrade-insecure-requests";
static const char __pyx_k_https_www_alpha_messenger_com_0[] = "https://www.alpha.messenger.com{0}";
static const char __pyx_k_application_x_www_form_urlencode[] = "application/x-www-form-urlencoded";
static const char __pyx_k_controllers_bruteforce_login_web[] = "controllers.bruteforce.login.web_messenger";
static const char __pyx_k_get_platform_header_from_userage[] = "get_platform_header_from_useragent";
static const char __pyx_k_mtf_app_controllers_bruteforce_l[] = "mtf/app/controllers/bruteforce/login/web_messenger.py";
 
static PyObject *__pyx_pf_11controllers_10bruteforce_5login_13web_messenger_2__defaults__(CYTHON_UNUSED PyObject *__pyx_self);  
static PyObject *__pyx_pf_11controllers_10bruteforce_5login_13web_messenger_attempt(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_userid, PyObject *__pyx_v_password, PyObject *__pyx_v_retries, PyObject *__pyx_v_user_agent, PyObject *__pyx_v_save_session);  
static __Pyx_CachedCFunction __pyx_umethod_PyUnicode_Type_format = {0, 0, 0, 0, 0};
 
 
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
  PyObject *__pyx_kp_u_0;
  PyObject *__pyx_kp_u_1;
  PyObject *__pyx_kp_u_1_2;
  PyObject *__pyx_kp_u_1_25;
  PyObject *__pyx_kp_u_420;
  PyObject *__pyx_n_s_ACCEPT_LANGUAGE;
  PyObject *__pyx_n_s_BS4;
  PyObject *__pyx_n_s_ChunkedEncodingError;
  PyObject *__pyx_n_s_ConnectionError;
  PyObject *__pyx_n_s_DESKTOP_REQUEST_HEADERS;
  PyObject *__pyx_n_s_Http;
  PyObject *__pyx_n_s_INVALID_CREDENTIALS_CODE;
  PyObject *__pyx_n_s_InvalidChunkLength;
  PyObject *__pyx_n_u_Location;
  PyObject *__pyx_n_s_MUST_VERIFY_CODE;
  PyObject *__pyx_n_s_NAME;
  PyObject *__pyx_n_s_OK_CODE;
  PyObject *__pyx_n_s_RESULT;
  PyObject *__pyx_n_s_RandomUserAgent;
  PyObject *__pyx_n_s_SESSION_LOGIN;
  PyObject *__pyx_n_s_Timeout;
  PyObject *__pyx_n_s_Variables;
  PyObject *__pyx_n_s__10;
  PyObject *__pyx_kp_u__11;
  PyObject *__pyx_n_s__14;
  PyObject *__pyx_kp_u__4;
  PyObject *__pyx_kp_u__5;
  PyObject *__pyx_n_u__6;
  PyObject *__pyx_n_s__8;
  PyObject *__pyx_kp_u__8;
  PyObject *__pyx_kp_u_accept_language;
  PyObject *__pyx_n_u_action;
  PyObject *__pyx_kp_u_ah;
  PyObject *__pyx_n_s_allow_redirects;
  PyObject *__pyx_n_s_app;
  PyObject *__pyx_kp_u_application_x_www_form_urlencode;
  PyObject *__pyx_n_s_asyncio_coroutines;
  PyObject *__pyx_n_s_attempt;
  PyObject *__pyx_kp_u_aw;
  PyObject *__pyx_n_s_b64encode;
  PyObject *__pyx_n_s_base64;
  PyObject *__pyx_n_s_bool;
  PyObject *__pyx_kp_u_c_24;
  PyObject *__pyx_n_u_c_user;
  PyObject *__pyx_n_s_checkpoint;
  PyObject *__pyx_n_u_checkpoint_interstitial;
  PyObject *__pyx_n_s_class_getitem;
  PyObject *__pyx_n_s_cline_in_traceback;
  PyObject *__pyx_kp_u_content_length;
  PyObject *__pyx_kp_u_content_type;
  PyObject *__pyx_n_s_controllers_bruteforce_login_web;
  PyObject *__pyx_kp_u_cookie;
  PyObject *__pyx_n_s_cookie_2;
  PyObject *__pyx_n_s_cookies;
  PyObject *__pyx_n_u_cookies;
  PyObject *__pyx_n_s_copy;
  PyObject *__pyx_n_s_data;
  PyObject *__pyx_n_u_datr;
  PyObject *__pyx_n_s_decode;
  PyObject *__pyx_n_u_default_persistent;
  PyObject *__pyx_n_s_desktop;
  PyObject *__pyx_n_s_domain;
  PyObject *__pyx_n_u_dpr;
  PyObject *__pyx_n_u_email;
  PyObject *__pyx_n_s_encode;
  PyObject *__pyx_n_s_form;
  PyObject *__pyx_n_s_format;
  PyObject *__pyx_n_s_get;
  PyObject *__pyx_n_s_get_dict;
  PyObject *__pyx_n_s_get_form;
  PyObject *__pyx_n_s_get_platform_header_from_userage;
  PyObject *__pyx_n_s_group;
  PyObject *__pyx_kp_u_h;
  PyObject *__pyx_n_s_h_2;
  PyObject *__pyx_n_s_headers;
  PyObject *__pyx_n_u_headers;
  PyObject *__pyx_n_u_hidden;
  PyObject *__pyx_kp_u_html_parser;
  PyObject *__pyx_n_s_http;
  PyObject *__pyx_kp_u_https_www_alpha_messenger_com_0;
  PyObject *__pyx_n_s_id;
  PyObject *__pyx_n_s_import;
  PyObject *__pyx_n_s_initializing;
  PyObject *__pyx_n_s_int;
  PyObject *__pyx_n_s_is_coroutine;
  PyObject *__pyx_kp_u_js_datr;
  PyObject *__pyx_n_s_js_datr_2;
  PyObject *__pyx_n_s_json;
  PyObject *__pyx_n_u_lgndim;
  PyObject *__pyx_n_s_loads;
  PyObject *__pyx_n_s_locale;
  PyObject *__pyx_n_u_locale;
  PyObject *__pyx_kp_u_login;
  PyObject *__pyx_n_u_login_2;
  PyObject *__pyx_n_u_login_form;
  PyObject *__pyx_n_s_login_name;
  PyObject *__pyx_kp_u_login_password;
  PyObject *__pyx_n_u_m_pixel_ratio;
  PyObject *__pyx_n_s_main;
  PyObject *__pyx_kp_s_mtf_app_controllers_bruteforce_l;
  PyObject *__pyx_n_s_mtf_config;
  PyObject *__pyx_n_s_mtf_module;
  PyObject *__pyx_n_s_mtf_module_http_bs4;
  PyObject *__pyx_n_s_name;
  PyObject *__pyx_n_u_other;
  PyObject *__pyx_n_u_pass;
  PyObject *__pyx_n_s_password;
  PyObject *__pyx_n_s_payload;
  PyObject *__pyx_n_u_payload;
  PyObject *__pyx_n_u_persistent;
  PyObject *__pyx_n_s_post;
  PyObject *__pyx_n_s_random;
  PyObject *__pyx_n_s_re;
  PyObject *__pyx_n_s_redirect_url;
  PyObject *__pyx_n_u_referer;
  PyObject *__pyx_n_s_replace;
  PyObject *__pyx_n_s_requests_exceptions;
  PyObject *__pyx_n_s_response;
  PyObject *__pyx_n_s_results;
  PyObject *__pyx_n_s_retries;
  PyObject *__pyx_n_s_save_session;
  PyObject *__pyx_n_s_screen_sizes;
  PyObject *__pyx_n_u_screen_sizes;
  PyObject *__pyx_n_s_search;
  PyObject *__pyx_kp_u_sec_fetch_user;
  PyObject *__pyx_n_s_session;
  PyObject *__pyx_n_s_spec;
  PyObject *__pyx_n_s_split;
  PyObject *__pyx_n_u_status;
  PyObject *__pyx_n_s_str;
  PyObject *__pyx_n_s_test;
  PyObject *__pyx_n_s_text;
  PyObject *__pyx_n_u_timezone;
  PyObject *__pyx_n_u_u;
  PyObject *__pyx_n_u_ua;
  PyObject *__pyx_n_s_uniform;
  PyObject *__pyx_n_s_unquote;
  PyObject *__pyx_n_s_update;
  PyObject *__pyx_kp_u_upgrade_insecure_requests;
  PyObject *__pyx_n_s_urlencode;
  PyObject *__pyx_n_s_urllib3_exceptions;
  PyObject *__pyx_n_s_urllib_parse;
  PyObject *__pyx_n_s_user_agent;
  PyObject *__pyx_kp_u_user_agent_2;
  PyObject *__pyx_n_s_userid;
  PyObject *__pyx_n_u_userid;
  PyObject *__pyx_n_s_utils;
  PyObject *__pyx_kp_u_w;
  PyObject *__pyx_n_s_wd;
  PyObject *__pyx_n_u_wd;
  PyObject *__pyx_n_u_web_messenger;
  PyObject *__pyx_n_u_x;
  PyObject *__pyx_int_1;
  PyObject *__pyx_int_2;
  PyObject *__pyx_int_48;
  PyObject *__pyx_int_860;
  PyObject *__pyx_int_1000;
  PyObject *__pyx_int_1900;
  PyObject *__pyx_int_2200;
  PyObject *__pyx_tuple_;
  PyObject *__pyx_tuple__2;
  PyObject *__pyx_tuple__3;
  PyObject *__pyx_tuple__7;
  PyObject *__pyx_tuple__9;
  PyObject *__pyx_tuple__12;
  PyObject *__pyx_codeobj__13;
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
  Py_CLEAR(clear_module_state->__pyx_kp_u_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_1_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_1_25);
  Py_CLEAR(clear_module_state->__pyx_kp_u_420);
  Py_CLEAR(clear_module_state->__pyx_n_s_ACCEPT_LANGUAGE);
  Py_CLEAR(clear_module_state->__pyx_n_s_BS4);
  Py_CLEAR(clear_module_state->__pyx_n_s_ChunkedEncodingError);
  Py_CLEAR(clear_module_state->__pyx_n_s_ConnectionError);
  Py_CLEAR(clear_module_state->__pyx_n_s_DESKTOP_REQUEST_HEADERS);
  Py_CLEAR(clear_module_state->__pyx_n_s_Http);
  Py_CLEAR(clear_module_state->__pyx_n_s_INVALID_CREDENTIALS_CODE);
  Py_CLEAR(clear_module_state->__pyx_n_s_InvalidChunkLength);
  Py_CLEAR(clear_module_state->__pyx_n_u_Location);
  Py_CLEAR(clear_module_state->__pyx_n_s_MUST_VERIFY_CODE);
  Py_CLEAR(clear_module_state->__pyx_n_s_NAME);
  Py_CLEAR(clear_module_state->__pyx_n_s_OK_CODE);
  Py_CLEAR(clear_module_state->__pyx_n_s_RESULT);
  Py_CLEAR(clear_module_state->__pyx_n_s_RandomUserAgent);
  Py_CLEAR(clear_module_state->__pyx_n_s_SESSION_LOGIN);
  Py_CLEAR(clear_module_state->__pyx_n_s_Timeout);
  Py_CLEAR(clear_module_state->__pyx_n_s_Variables);
  Py_CLEAR(clear_module_state->__pyx_n_s__10);
  Py_CLEAR(clear_module_state->__pyx_kp_u__11);
  Py_CLEAR(clear_module_state->__pyx_n_s__14);
  Py_CLEAR(clear_module_state->__pyx_kp_u__4);
  Py_CLEAR(clear_module_state->__pyx_kp_u__5);
  Py_CLEAR(clear_module_state->__pyx_n_u__6);
  Py_CLEAR(clear_module_state->__pyx_n_s__8);
  Py_CLEAR(clear_module_state->__pyx_kp_u__8);
  Py_CLEAR(clear_module_state->__pyx_kp_u_accept_language);
  Py_CLEAR(clear_module_state->__pyx_n_u_action);
  Py_CLEAR(clear_module_state->__pyx_kp_u_ah);
  Py_CLEAR(clear_module_state->__pyx_n_s_allow_redirects);
  Py_CLEAR(clear_module_state->__pyx_n_s_app);
  Py_CLEAR(clear_module_state->__pyx_kp_u_application_x_www_form_urlencode);
  Py_CLEAR(clear_module_state->__pyx_n_s_asyncio_coroutines);
  Py_CLEAR(clear_module_state->__pyx_n_s_attempt);
  Py_CLEAR(clear_module_state->__pyx_kp_u_aw);
  Py_CLEAR(clear_module_state->__pyx_n_s_b64encode);
  Py_CLEAR(clear_module_state->__pyx_n_s_base64);
  Py_CLEAR(clear_module_state->__pyx_n_s_bool);
  Py_CLEAR(clear_module_state->__pyx_kp_u_c_24);
  Py_CLEAR(clear_module_state->__pyx_n_u_c_user);
  Py_CLEAR(clear_module_state->__pyx_n_s_checkpoint);
  Py_CLEAR(clear_module_state->__pyx_n_u_checkpoint_interstitial);
  Py_CLEAR(clear_module_state->__pyx_n_s_class_getitem);
  Py_CLEAR(clear_module_state->__pyx_n_s_cline_in_traceback);
  Py_CLEAR(clear_module_state->__pyx_kp_u_content_length);
  Py_CLEAR(clear_module_state->__pyx_kp_u_content_type);
  Py_CLEAR(clear_module_state->__pyx_n_s_controllers_bruteforce_login_web);
  Py_CLEAR(clear_module_state->__pyx_kp_u_cookie);
  Py_CLEAR(clear_module_state->__pyx_n_s_cookie_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_cookies);
  Py_CLEAR(clear_module_state->__pyx_n_u_cookies);
  Py_CLEAR(clear_module_state->__pyx_n_s_copy);
  Py_CLEAR(clear_module_state->__pyx_n_s_data);
  Py_CLEAR(clear_module_state->__pyx_n_u_datr);
  Py_CLEAR(clear_module_state->__pyx_n_s_decode);
  Py_CLEAR(clear_module_state->__pyx_n_u_default_persistent);
  Py_CLEAR(clear_module_state->__pyx_n_s_desktop);
  Py_CLEAR(clear_module_state->__pyx_n_s_domain);
  Py_CLEAR(clear_module_state->__pyx_n_u_dpr);
  Py_CLEAR(clear_module_state->__pyx_n_u_email);
  Py_CLEAR(clear_module_state->__pyx_n_s_encode);
  Py_CLEAR(clear_module_state->__pyx_n_s_form);
  Py_CLEAR(clear_module_state->__pyx_n_s_format);
  Py_CLEAR(clear_module_state->__pyx_n_s_get);
  Py_CLEAR(clear_module_state->__pyx_n_s_get_dict);
  Py_CLEAR(clear_module_state->__pyx_n_s_get_form);
  Py_CLEAR(clear_module_state->__pyx_n_s_get_platform_header_from_userage);
  Py_CLEAR(clear_module_state->__pyx_n_s_group);
  Py_CLEAR(clear_module_state->__pyx_kp_u_h);
  Py_CLEAR(clear_module_state->__pyx_n_s_h_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_headers);
  Py_CLEAR(clear_module_state->__pyx_n_u_headers);
  Py_CLEAR(clear_module_state->__pyx_n_u_hidden);
  Py_CLEAR(clear_module_state->__pyx_kp_u_html_parser);
  Py_CLEAR(clear_module_state->__pyx_n_s_http);
  Py_CLEAR(clear_module_state->__pyx_kp_u_https_www_alpha_messenger_com_0);
  Py_CLEAR(clear_module_state->__pyx_n_s_id);
  Py_CLEAR(clear_module_state->__pyx_n_s_import);
  Py_CLEAR(clear_module_state->__pyx_n_s_initializing);
  Py_CLEAR(clear_module_state->__pyx_n_s_int);
  Py_CLEAR(clear_module_state->__pyx_n_s_is_coroutine);
  Py_CLEAR(clear_module_state->__pyx_kp_u_js_datr);
  Py_CLEAR(clear_module_state->__pyx_n_s_js_datr_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_json);
  Py_CLEAR(clear_module_state->__pyx_n_u_lgndim);
  Py_CLEAR(clear_module_state->__pyx_n_s_loads);
  Py_CLEAR(clear_module_state->__pyx_n_s_locale);
  Py_CLEAR(clear_module_state->__pyx_n_u_locale);
  Py_CLEAR(clear_module_state->__pyx_kp_u_login);
  Py_CLEAR(clear_module_state->__pyx_n_u_login_2);
  Py_CLEAR(clear_module_state->__pyx_n_u_login_form);
  Py_CLEAR(clear_module_state->__pyx_n_s_login_name);
  Py_CLEAR(clear_module_state->__pyx_kp_u_login_password);
  Py_CLEAR(clear_module_state->__pyx_n_u_m_pixel_ratio);
  Py_CLEAR(clear_module_state->__pyx_n_s_main);
  Py_CLEAR(clear_module_state->__pyx_kp_s_mtf_app_controllers_bruteforce_l);
  Py_CLEAR(clear_module_state->__pyx_n_s_mtf_config);
  Py_CLEAR(clear_module_state->__pyx_n_s_mtf_module);
  Py_CLEAR(clear_module_state->__pyx_n_s_mtf_module_http_bs4);
  Py_CLEAR(clear_module_state->__pyx_n_s_name);
  Py_CLEAR(clear_module_state->__pyx_n_u_other);
  Py_CLEAR(clear_module_state->__pyx_n_u_pass);
  Py_CLEAR(clear_module_state->__pyx_n_s_password);
  Py_CLEAR(clear_module_state->__pyx_n_s_payload);
  Py_CLEAR(clear_module_state->__pyx_n_u_payload);
  Py_CLEAR(clear_module_state->__pyx_n_u_persistent);
  Py_CLEAR(clear_module_state->__pyx_n_s_post);
  Py_CLEAR(clear_module_state->__pyx_n_s_random);
  Py_CLEAR(clear_module_state->__pyx_n_s_re);
  Py_CLEAR(clear_module_state->__pyx_n_s_redirect_url);
  Py_CLEAR(clear_module_state->__pyx_n_u_referer);
  Py_CLEAR(clear_module_state->__pyx_n_s_replace);
  Py_CLEAR(clear_module_state->__pyx_n_s_requests_exceptions);
  Py_CLEAR(clear_module_state->__pyx_n_s_response);
  Py_CLEAR(clear_module_state->__pyx_n_s_results);
  Py_CLEAR(clear_module_state->__pyx_n_s_retries);
  Py_CLEAR(clear_module_state->__pyx_n_s_save_session);
  Py_CLEAR(clear_module_state->__pyx_n_s_screen_sizes);
  Py_CLEAR(clear_module_state->__pyx_n_u_screen_sizes);
  Py_CLEAR(clear_module_state->__pyx_n_s_search);
  Py_CLEAR(clear_module_state->__pyx_kp_u_sec_fetch_user);
  Py_CLEAR(clear_module_state->__pyx_n_s_session);
  Py_CLEAR(clear_module_state->__pyx_n_s_spec);
  Py_CLEAR(clear_module_state->__pyx_n_s_split);
  Py_CLEAR(clear_module_state->__pyx_n_u_status);
  Py_CLEAR(clear_module_state->__pyx_n_s_str);
  Py_CLEAR(clear_module_state->__pyx_n_s_test);
  Py_CLEAR(clear_module_state->__pyx_n_s_text);
  Py_CLEAR(clear_module_state->__pyx_n_u_timezone);
  Py_CLEAR(clear_module_state->__pyx_n_u_u);
  Py_CLEAR(clear_module_state->__pyx_n_u_ua);
  Py_CLEAR(clear_module_state->__pyx_n_s_uniform);
  Py_CLEAR(clear_module_state->__pyx_n_s_unquote);
  Py_CLEAR(clear_module_state->__pyx_n_s_update);
  Py_CLEAR(clear_module_state->__pyx_kp_u_upgrade_insecure_requests);
  Py_CLEAR(clear_module_state->__pyx_n_s_urlencode);
  Py_CLEAR(clear_module_state->__pyx_n_s_urllib3_exceptions);
  Py_CLEAR(clear_module_state->__pyx_n_s_urllib_parse);
  Py_CLEAR(clear_module_state->__pyx_n_s_user_agent);
  Py_CLEAR(clear_module_state->__pyx_kp_u_user_agent_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_userid);
  Py_CLEAR(clear_module_state->__pyx_n_u_userid);
  Py_CLEAR(clear_module_state->__pyx_n_s_utils);
  Py_CLEAR(clear_module_state->__pyx_kp_u_w);
  Py_CLEAR(clear_module_state->__pyx_n_s_wd);
  Py_CLEAR(clear_module_state->__pyx_n_u_wd);
  Py_CLEAR(clear_module_state->__pyx_n_u_web_messenger);
  Py_CLEAR(clear_module_state->__pyx_n_u_x);
  Py_CLEAR(clear_module_state->__pyx_int_1);
  Py_CLEAR(clear_module_state->__pyx_int_2);
  Py_CLEAR(clear_module_state->__pyx_int_48);
  Py_CLEAR(clear_module_state->__pyx_int_860);
  Py_CLEAR(clear_module_state->__pyx_int_1000);
  Py_CLEAR(clear_module_state->__pyx_int_1900);
  Py_CLEAR(clear_module_state->__pyx_int_2200);
  Py_CLEAR(clear_module_state->__pyx_tuple_);
  Py_CLEAR(clear_module_state->__pyx_tuple__2);
  Py_CLEAR(clear_module_state->__pyx_tuple__3);
  Py_CLEAR(clear_module_state->__pyx_tuple__7);
  Py_CLEAR(clear_module_state->__pyx_tuple__9);
  Py_CLEAR(clear_module_state->__pyx_tuple__12);
  Py_CLEAR(clear_module_state->__pyx_codeobj__13);
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
  Py_VISIT(traverse_module_state->__pyx_kp_u_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_1_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_1_25);
  Py_VISIT(traverse_module_state->__pyx_kp_u_420);
  Py_VISIT(traverse_module_state->__pyx_n_s_ACCEPT_LANGUAGE);
  Py_VISIT(traverse_module_state->__pyx_n_s_BS4);
  Py_VISIT(traverse_module_state->__pyx_n_s_ChunkedEncodingError);
  Py_VISIT(traverse_module_state->__pyx_n_s_ConnectionError);
  Py_VISIT(traverse_module_state->__pyx_n_s_DESKTOP_REQUEST_HEADERS);
  Py_VISIT(traverse_module_state->__pyx_n_s_Http);
  Py_VISIT(traverse_module_state->__pyx_n_s_INVALID_CREDENTIALS_CODE);
  Py_VISIT(traverse_module_state->__pyx_n_s_InvalidChunkLength);
  Py_VISIT(traverse_module_state->__pyx_n_u_Location);
  Py_VISIT(traverse_module_state->__pyx_n_s_MUST_VERIFY_CODE);
  Py_VISIT(traverse_module_state->__pyx_n_s_NAME);
  Py_VISIT(traverse_module_state->__pyx_n_s_OK_CODE);
  Py_VISIT(traverse_module_state->__pyx_n_s_RESULT);
  Py_VISIT(traverse_module_state->__pyx_n_s_RandomUserAgent);
  Py_VISIT(traverse_module_state->__pyx_n_s_SESSION_LOGIN);
  Py_VISIT(traverse_module_state->__pyx_n_s_Timeout);
  Py_VISIT(traverse_module_state->__pyx_n_s_Variables);
  Py_VISIT(traverse_module_state->__pyx_n_s__10);
  Py_VISIT(traverse_module_state->__pyx_kp_u__11);
  Py_VISIT(traverse_module_state->__pyx_n_s__14);
  Py_VISIT(traverse_module_state->__pyx_kp_u__4);
  Py_VISIT(traverse_module_state->__pyx_kp_u__5);
  Py_VISIT(traverse_module_state->__pyx_n_u__6);
  Py_VISIT(traverse_module_state->__pyx_n_s__8);
  Py_VISIT(traverse_module_state->__pyx_kp_u__8);
  Py_VISIT(traverse_module_state->__pyx_kp_u_accept_language);
  Py_VISIT(traverse_module_state->__pyx_n_u_action);
  Py_VISIT(traverse_module_state->__pyx_kp_u_ah);
  Py_VISIT(traverse_module_state->__pyx_n_s_allow_redirects);
  Py_VISIT(traverse_module_state->__pyx_n_s_app);
  Py_VISIT(traverse_module_state->__pyx_kp_u_application_x_www_form_urlencode);
  Py_VISIT(traverse_module_state->__pyx_n_s_asyncio_coroutines);
  Py_VISIT(traverse_module_state->__pyx_n_s_attempt);
  Py_VISIT(traverse_module_state->__pyx_kp_u_aw);
  Py_VISIT(traverse_module_state->__pyx_n_s_b64encode);
  Py_VISIT(traverse_module_state->__pyx_n_s_base64);
  Py_VISIT(traverse_module_state->__pyx_n_s_bool);
  Py_VISIT(traverse_module_state->__pyx_kp_u_c_24);
  Py_VISIT(traverse_module_state->__pyx_n_u_c_user);
  Py_VISIT(traverse_module_state->__pyx_n_s_checkpoint);
  Py_VISIT(traverse_module_state->__pyx_n_u_checkpoint_interstitial);
  Py_VISIT(traverse_module_state->__pyx_n_s_class_getitem);
  Py_VISIT(traverse_module_state->__pyx_n_s_cline_in_traceback);
  Py_VISIT(traverse_module_state->__pyx_kp_u_content_length);
  Py_VISIT(traverse_module_state->__pyx_kp_u_content_type);
  Py_VISIT(traverse_module_state->__pyx_n_s_controllers_bruteforce_login_web);
  Py_VISIT(traverse_module_state->__pyx_kp_u_cookie);
  Py_VISIT(traverse_module_state->__pyx_n_s_cookie_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_cookies);
  Py_VISIT(traverse_module_state->__pyx_n_u_cookies);
  Py_VISIT(traverse_module_state->__pyx_n_s_copy);
  Py_VISIT(traverse_module_state->__pyx_n_s_data);
  Py_VISIT(traverse_module_state->__pyx_n_u_datr);
  Py_VISIT(traverse_module_state->__pyx_n_s_decode);
  Py_VISIT(traverse_module_state->__pyx_n_u_default_persistent);
  Py_VISIT(traverse_module_state->__pyx_n_s_desktop);
  Py_VISIT(traverse_module_state->__pyx_n_s_domain);
  Py_VISIT(traverse_module_state->__pyx_n_u_dpr);
  Py_VISIT(traverse_module_state->__pyx_n_u_email);
  Py_VISIT(traverse_module_state->__pyx_n_s_encode);
  Py_VISIT(traverse_module_state->__pyx_n_s_form);
  Py_VISIT(traverse_module_state->__pyx_n_s_format);
  Py_VISIT(traverse_module_state->__pyx_n_s_get);
  Py_VISIT(traverse_module_state->__pyx_n_s_get_dict);
  Py_VISIT(traverse_module_state->__pyx_n_s_get_form);
  Py_VISIT(traverse_module_state->__pyx_n_s_get_platform_header_from_userage);
  Py_VISIT(traverse_module_state->__pyx_n_s_group);
  Py_VISIT(traverse_module_state->__pyx_kp_u_h);
  Py_VISIT(traverse_module_state->__pyx_n_s_h_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_headers);
  Py_VISIT(traverse_module_state->__pyx_n_u_headers);
  Py_VISIT(traverse_module_state->__pyx_n_u_hidden);
  Py_VISIT(traverse_module_state->__pyx_kp_u_html_parser);
  Py_VISIT(traverse_module_state->__pyx_n_s_http);
  Py_VISIT(traverse_module_state->__pyx_kp_u_https_www_alpha_messenger_com_0);
  Py_VISIT(traverse_module_state->__pyx_n_s_id);
  Py_VISIT(traverse_module_state->__pyx_n_s_import);
  Py_VISIT(traverse_module_state->__pyx_n_s_initializing);
  Py_VISIT(traverse_module_state->__pyx_n_s_int);
  Py_VISIT(traverse_module_state->__pyx_n_s_is_coroutine);
  Py_VISIT(traverse_module_state->__pyx_kp_u_js_datr);
  Py_VISIT(traverse_module_state->__pyx_n_s_js_datr_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_json);
  Py_VISIT(traverse_module_state->__pyx_n_u_lgndim);
  Py_VISIT(traverse_module_state->__pyx_n_s_loads);
  Py_VISIT(traverse_module_state->__pyx_n_s_locale);
  Py_VISIT(traverse_module_state->__pyx_n_u_locale);
  Py_VISIT(traverse_module_state->__pyx_kp_u_login);
  Py_VISIT(traverse_module_state->__pyx_n_u_login_2);
  Py_VISIT(traverse_module_state->__pyx_n_u_login_form);
  Py_VISIT(traverse_module_state->__pyx_n_s_login_name);
  Py_VISIT(traverse_module_state->__pyx_kp_u_login_password);
  Py_VISIT(traverse_module_state->__pyx_n_u_m_pixel_ratio);
  Py_VISIT(traverse_module_state->__pyx_n_s_main);
  Py_VISIT(traverse_module_state->__pyx_kp_s_mtf_app_controllers_bruteforce_l);
  Py_VISIT(traverse_module_state->__pyx_n_s_mtf_config);
  Py_VISIT(traverse_module_state->__pyx_n_s_mtf_module);
  Py_VISIT(traverse_module_state->__pyx_n_s_mtf_module_http_bs4);
  Py_VISIT(traverse_module_state->__pyx_n_s_name);
  Py_VISIT(traverse_module_state->__pyx_n_u_other);
  Py_VISIT(traverse_module_state->__pyx_n_u_pass);
  Py_VISIT(traverse_module_state->__pyx_n_s_password);
  Py_VISIT(traverse_module_state->__pyx_n_s_payload);
  Py_VISIT(traverse_module_state->__pyx_n_u_payload);
  Py_VISIT(traverse_module_state->__pyx_n_u_persistent);
  Py_VISIT(traverse_module_state->__pyx_n_s_post);
  Py_VISIT(traverse_module_state->__pyx_n_s_random);
  Py_VISIT(traverse_module_state->__pyx_n_s_re);
  Py_VISIT(traverse_module_state->__pyx_n_s_redirect_url);
  Py_VISIT(traverse_module_state->__pyx_n_u_referer);
  Py_VISIT(traverse_module_state->__pyx_n_s_replace);
  Py_VISIT(traverse_module_state->__pyx_n_s_requests_exceptions);
  Py_VISIT(traverse_module_state->__pyx_n_s_response);
  Py_VISIT(traverse_module_state->__pyx_n_s_results);
  Py_VISIT(traverse_module_state->__pyx_n_s_retries);
  Py_VISIT(traverse_module_state->__pyx_n_s_save_session);
  Py_VISIT(traverse_module_state->__pyx_n_s_screen_sizes);
  Py_VISIT(traverse_module_state->__pyx_n_u_screen_sizes);
  Py_VISIT(traverse_module_state->__pyx_n_s_search);
  Py_VISIT(traverse_module_state->__pyx_kp_u_sec_fetch_user);
  Py_VISIT(traverse_module_state->__pyx_n_s_session);
  Py_VISIT(traverse_module_state->__pyx_n_s_spec);
  Py_VISIT(traverse_module_state->__pyx_n_s_split);
  Py_VISIT(traverse_module_state->__pyx_n_u_status);
  Py_VISIT(traverse_module_state->__pyx_n_s_str);
  Py_VISIT(traverse_module_state->__pyx_n_s_test);
  Py_VISIT(traverse_module_state->__pyx_n_s_text);
  Py_VISIT(traverse_module_state->__pyx_n_u_timezone);
  Py_VISIT(traverse_module_state->__pyx_n_u_u);
  Py_VISIT(traverse_module_state->__pyx_n_u_ua);
  Py_VISIT(traverse_module_state->__pyx_n_s_uniform);
  Py_VISIT(traverse_module_state->__pyx_n_s_unquote);
  Py_VISIT(traverse_module_state->__pyx_n_s_update);
  Py_VISIT(traverse_module_state->__pyx_kp_u_upgrade_insecure_requests);
  Py_VISIT(traverse_module_state->__pyx_n_s_urlencode);
  Py_VISIT(traverse_module_state->__pyx_n_s_urllib3_exceptions);
  Py_VISIT(traverse_module_state->__pyx_n_s_urllib_parse);
  Py_VISIT(traverse_module_state->__pyx_n_s_user_agent);
  Py_VISIT(traverse_module_state->__pyx_kp_u_user_agent_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_userid);
  Py_VISIT(traverse_module_state->__pyx_n_u_userid);
  Py_VISIT(traverse_module_state->__pyx_n_s_utils);
  Py_VISIT(traverse_module_state->__pyx_kp_u_w);
  Py_VISIT(traverse_module_state->__pyx_n_s_wd);
  Py_VISIT(traverse_module_state->__pyx_n_u_wd);
  Py_VISIT(traverse_module_state->__pyx_n_u_web_messenger);
  Py_VISIT(traverse_module_state->__pyx_n_u_x);
  Py_VISIT(traverse_module_state->__pyx_int_1);
  Py_VISIT(traverse_module_state->__pyx_int_2);
  Py_VISIT(traverse_module_state->__pyx_int_48);
  Py_VISIT(traverse_module_state->__pyx_int_860);
  Py_VISIT(traverse_module_state->__pyx_int_1000);
  Py_VISIT(traverse_module_state->__pyx_int_1900);
  Py_VISIT(traverse_module_state->__pyx_int_2200);
  Py_VISIT(traverse_module_state->__pyx_tuple_);
  Py_VISIT(traverse_module_state->__pyx_tuple__2);
  Py_VISIT(traverse_module_state->__pyx_tuple__3);
  Py_VISIT(traverse_module_state->__pyx_tuple__7);
  Py_VISIT(traverse_module_state->__pyx_tuple__9);
  Py_VISIT(traverse_module_state->__pyx_tuple__12);
  Py_VISIT(traverse_module_state->__pyx_codeobj__13);
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
#define __pyx_kp_u_0 __pyx_mstate_global->__pyx_kp_u_0
#define __pyx_kp_u_1 __pyx_mstate_global->__pyx_kp_u_1
#define __pyx_kp_u_1_2 __pyx_mstate_global->__pyx_kp_u_1_2
#define __pyx_kp_u_1_25 __pyx_mstate_global->__pyx_kp_u_1_25
#define __pyx_kp_u_420 __pyx_mstate_global->__pyx_kp_u_420
#define __pyx_n_s_ACCEPT_LANGUAGE __pyx_mstate_global->__pyx_n_s_ACCEPT_LANGUAGE
#define __pyx_n_s_BS4 __pyx_mstate_global->__pyx_n_s_BS4
#define __pyx_n_s_ChunkedEncodingError __pyx_mstate_global->__pyx_n_s_ChunkedEncodingError
#define __pyx_n_s_ConnectionError __pyx_mstate_global->__pyx_n_s_ConnectionError
#define __pyx_n_s_DESKTOP_REQUEST_HEADERS __pyx_mstate_global->__pyx_n_s_DESKTOP_REQUEST_HEADERS
#define __pyx_n_s_Http __pyx_mstate_global->__pyx_n_s_Http
#define __pyx_n_s_INVALID_CREDENTIALS_CODE __pyx_mstate_global->__pyx_n_s_INVALID_CREDENTIALS_CODE
#define __pyx_n_s_InvalidChunkLength __pyx_mstate_global->__pyx_n_s_InvalidChunkLength
#define __pyx_n_u_Location __pyx_mstate_global->__pyx_n_u_Location
#define __pyx_n_s_MUST_VERIFY_CODE __pyx_mstate_global->__pyx_n_s_MUST_VERIFY_CODE
#define __pyx_n_s_NAME __pyx_mstate_global->__pyx_n_s_NAME
#define __pyx_n_s_OK_CODE __pyx_mstate_global->__pyx_n_s_OK_CODE
#define __pyx_n_s_RESULT __pyx_mstate_global->__pyx_n_s_RESULT
#define __pyx_n_s_RandomUserAgent __pyx_mstate_global->__pyx_n_s_RandomUserAgent
#define __pyx_n_s_SESSION_LOGIN __pyx_mstate_global->__pyx_n_s_SESSION_LOGIN
#define __pyx_n_s_Timeout __pyx_mstate_global->__pyx_n_s_Timeout
#define __pyx_n_s_Variables __pyx_mstate_global->__pyx_n_s_Variables
#define __pyx_n_s__10 __pyx_mstate_global->__pyx_n_s__10
#define __pyx_kp_u__11 __pyx_mstate_global->__pyx_kp_u__11
#define __pyx_n_s__14 __pyx_mstate_global->__pyx_n_s__14
#define __pyx_kp_u__4 __pyx_mstate_global->__pyx_kp_u__4
#define __pyx_kp_u__5 __pyx_mstate_global->__pyx_kp_u__5
#define __pyx_n_u__6 __pyx_mstate_global->__pyx_n_u__6
#define __pyx_n_s__8 __pyx_mstate_global->__pyx_n_s__8
#define __pyx_kp_u__8 __pyx_mstate_global->__pyx_kp_u__8
#define __pyx_kp_u_accept_language __pyx_mstate_global->__pyx_kp_u_accept_language
#define __pyx_n_u_action __pyx_mstate_global->__pyx_n_u_action
#define __pyx_kp_u_ah __pyx_mstate_global->__pyx_kp_u_ah
#define __pyx_n_s_allow_redirects __pyx_mstate_global->__pyx_n_s_allow_redirects
#define __pyx_n_s_app __pyx_mstate_global->__pyx_n_s_app
#define __pyx_kp_u_application_x_www_form_urlencode __pyx_mstate_global->__pyx_kp_u_application_x_www_form_urlencode
#define __pyx_n_s_asyncio_coroutines __pyx_mstate_global->__pyx_n_s_asyncio_coroutines
#define __pyx_n_s_attempt __pyx_mstate_global->__pyx_n_s_attempt
#define __pyx_kp_u_aw __pyx_mstate_global->__pyx_kp_u_aw
#define __pyx_n_s_b64encode __pyx_mstate_global->__pyx_n_s_b64encode
#define __pyx_n_s_base64 __pyx_mstate_global->__pyx_n_s_base64
#define __pyx_n_s_bool __pyx_mstate_global->__pyx_n_s_bool
#define __pyx_kp_u_c_24 __pyx_mstate_global->__pyx_kp_u_c_24
#define __pyx_n_u_c_user __pyx_mstate_global->__pyx_n_u_c_user
#define __pyx_n_s_checkpoint __pyx_mstate_global->__pyx_n_s_checkpoint
#define __pyx_n_u_checkpoint_interstitial __pyx_mstate_global->__pyx_n_u_checkpoint_interstitial
#define __pyx_n_s_class_getitem __pyx_mstate_global->__pyx_n_s_class_getitem
#define __pyx_n_s_cline_in_traceback __pyx_mstate_global->__pyx_n_s_cline_in_traceback
#define __pyx_kp_u_content_length __pyx_mstate_global->__pyx_kp_u_content_length
#define __pyx_kp_u_content_type __pyx_mstate_global->__pyx_kp_u_content_type
#define __pyx_n_s_controllers_bruteforce_login_web __pyx_mstate_global->__pyx_n_s_controllers_bruteforce_login_web
#define __pyx_kp_u_cookie __pyx_mstate_global->__pyx_kp_u_cookie
#define __pyx_n_s_cookie_2 __pyx_mstate_global->__pyx_n_s_cookie_2
#define __pyx_n_s_cookies __pyx_mstate_global->__pyx_n_s_cookies
#define __pyx_n_u_cookies __pyx_mstate_global->__pyx_n_u_cookies
#define __pyx_n_s_copy __pyx_mstate_global->__pyx_n_s_copy
#define __pyx_n_s_data __pyx_mstate_global->__pyx_n_s_data
#define __pyx_n_u_datr __pyx_mstate_global->__pyx_n_u_datr
#define __pyx_n_s_decode __pyx_mstate_global->__pyx_n_s_decode
#define __pyx_n_u_default_persistent __pyx_mstate_global->__pyx_n_u_default_persistent
#define __pyx_n_s_desktop __pyx_mstate_global->__pyx_n_s_desktop
#define __pyx_n_s_domain __pyx_mstate_global->__pyx_n_s_domain
#define __pyx_n_u_dpr __pyx_mstate_global->__pyx_n_u_dpr
#define __pyx_n_u_email __pyx_mstate_global->__pyx_n_u_email
#define __pyx_n_s_encode __pyx_mstate_global->__pyx_n_s_encode
#define __pyx_n_s_form __pyx_mstate_global->__pyx_n_s_form
#define __pyx_n_s_format __pyx_mstate_global->__pyx_n_s_format
#define __pyx_n_s_get __pyx_mstate_global->__pyx_n_s_get
#define __pyx_n_s_get_dict __pyx_mstate_global->__pyx_n_s_get_dict
#define __pyx_n_s_get_form __pyx_mstate_global->__pyx_n_s_get_form
#define __pyx_n_s_get_platform_header_from_userage __pyx_mstate_global->__pyx_n_s_get_platform_header_from_userage
#define __pyx_n_s_group __pyx_mstate_global->__pyx_n_s_group
#define __pyx_kp_u_h __pyx_mstate_global->__pyx_kp_u_h
#define __pyx_n_s_h_2 __pyx_mstate_global->__pyx_n_s_h_2
#define __pyx_n_s_headers __pyx_mstate_global->__pyx_n_s_headers
#define __pyx_n_u_headers __pyx_mstate_global->__pyx_n_u_headers
#define __pyx_n_u_hidden __pyx_mstate_global->__pyx_n_u_hidden
#define __pyx_kp_u_html_parser __pyx_mstate_global->__pyx_kp_u_html_parser
#define __pyx_n_s_http __pyx_mstate_global->__pyx_n_s_http
#define __pyx_kp_u_https_www_alpha_messenger_com_0 __pyx_mstate_global->__pyx_kp_u_https_www_alpha_messenger_com_0
#define __pyx_n_s_id __pyx_mstate_global->__pyx_n_s_id
#define __pyx_n_s_import __pyx_mstate_global->__pyx_n_s_import
#define __pyx_n_s_initializing __pyx_mstate_global->__pyx_n_s_initializing
#define __pyx_n_s_int __pyx_mstate_global->__pyx_n_s_int
#define __pyx_n_s_is_coroutine __pyx_mstate_global->__pyx_n_s_is_coroutine
#define __pyx_kp_u_js_datr __pyx_mstate_global->__pyx_kp_u_js_datr
#define __pyx_n_s_js_datr_2 __pyx_mstate_global->__pyx_n_s_js_datr_2
#define __pyx_n_s_json __pyx_mstate_global->__pyx_n_s_json
#define __pyx_n_u_lgndim __pyx_mstate_global->__pyx_n_u_lgndim
#define __pyx_n_s_loads __pyx_mstate_global->__pyx_n_s_loads
#define __pyx_n_s_locale __pyx_mstate_global->__pyx_n_s_locale
#define __pyx_n_u_locale __pyx_mstate_global->__pyx_n_u_locale
#define __pyx_kp_u_login __pyx_mstate_global->__pyx_kp_u_login
#define __pyx_n_u_login_2 __pyx_mstate_global->__pyx_n_u_login_2
#define __pyx_n_u_login_form __pyx_mstate_global->__pyx_n_u_login_form
#define __pyx_n_s_login_name __pyx_mstate_global->__pyx_n_s_login_name
#define __pyx_kp_u_login_password __pyx_mstate_global->__pyx_kp_u_login_password
#define __pyx_n_u_m_pixel_ratio __pyx_mstate_global->__pyx_n_u_m_pixel_ratio
#define __pyx_n_s_main __pyx_mstate_global->__pyx_n_s_main
#define __pyx_kp_s_mtf_app_controllers_bruteforce_l __pyx_mstate_global->__pyx_kp_s_mtf_app_controllers_bruteforce_l
#define __pyx_n_s_mtf_config __pyx_mstate_global->__pyx_n_s_mtf_config
#define __pyx_n_s_mtf_module __pyx_mstate_global->__pyx_n_s_mtf_module
#define __pyx_n_s_mtf_module_http_bs4 __pyx_mstate_global->__pyx_n_s_mtf_module_http_bs4
#define __pyx_n_s_name __pyx_mstate_global->__pyx_n_s_name
#define __pyx_n_u_other __pyx_mstate_global->__pyx_n_u_other
#define __pyx_n_u_pass __pyx_mstate_global->__pyx_n_u_pass
#define __pyx_n_s_password __pyx_mstate_global->__pyx_n_s_password
#define __pyx_n_s_payload __pyx_mstate_global->__pyx_n_s_payload
#define __pyx_n_u_payload __pyx_mstate_global->__pyx_n_u_payload
#define __pyx_n_u_persistent __pyx_mstate_global->__pyx_n_u_persistent
#define __pyx_n_s_post __pyx_mstate_global->__pyx_n_s_post
#define __pyx_n_s_random __pyx_mstate_global->__pyx_n_s_random
#define __pyx_n_s_re __pyx_mstate_global->__pyx_n_s_re
#define __pyx_n_s_redirect_url __pyx_mstate_global->__pyx_n_s_redirect_url
#define __pyx_n_u_referer __pyx_mstate_global->__pyx_n_u_referer
#define __pyx_n_s_replace __pyx_mstate_global->__pyx_n_s_replace
#define __pyx_n_s_requests_exceptions __pyx_mstate_global->__pyx_n_s_requests_exceptions
#define __pyx_n_s_response __pyx_mstate_global->__pyx_n_s_response
#define __pyx_n_s_results __pyx_mstate_global->__pyx_n_s_results
#define __pyx_n_s_retries __pyx_mstate_global->__pyx_n_s_retries
#define __pyx_n_s_save_session __pyx_mstate_global->__pyx_n_s_save_session
#define __pyx_n_s_screen_sizes __pyx_mstate_global->__pyx_n_s_screen_sizes
#define __pyx_n_u_screen_sizes __pyx_mstate_global->__pyx_n_u_screen_sizes
#define __pyx_n_s_search __pyx_mstate_global->__pyx_n_s_search
#define __pyx_kp_u_sec_fetch_user __pyx_mstate_global->__pyx_kp_u_sec_fetch_user
#define __pyx_n_s_session __pyx_mstate_global->__pyx_n_s_session
#define __pyx_n_s_spec __pyx_mstate_global->__pyx_n_s_spec
#define __pyx_n_s_split __pyx_mstate_global->__pyx_n_s_split
#define __pyx_n_u_status __pyx_mstate_global->__pyx_n_u_status
#define __pyx_n_s_str __pyx_mstate_global->__pyx_n_s_str
#define __pyx_n_s_test __pyx_mstate_global->__pyx_n_s_test
#define __pyx_n_s_text __pyx_mstate_global->__pyx_n_s_text
#define __pyx_n_u_timezone __pyx_mstate_global->__pyx_n_u_timezone
#define __pyx_n_u_u __pyx_mstate_global->__pyx_n_u_u
#define __pyx_n_u_ua __pyx_mstate_global->__pyx_n_u_ua
#define __pyx_n_s_uniform __pyx_mstate_global->__pyx_n_s_uniform
#define __pyx_n_s_unquote __pyx_mstate_global->__pyx_n_s_unquote
#define __pyx_n_s_update __pyx_mstate_global->__pyx_n_s_update
#define __pyx_kp_u_upgrade_insecure_requests __pyx_mstate_global->__pyx_kp_u_upgrade_insecure_requests
#define __pyx_n_s_urlencode __pyx_mstate_global->__pyx_n_s_urlencode
#define __pyx_n_s_urllib3_exceptions __pyx_mstate_global->__pyx_n_s_urllib3_exceptions
#define __pyx_n_s_urllib_parse __pyx_mstate_global->__pyx_n_s_urllib_parse
#define __pyx_n_s_user_agent __pyx_mstate_global->__pyx_n_s_user_agent
#define __pyx_kp_u_user_agent_2 __pyx_mstate_global->__pyx_kp_u_user_agent_2
#define __pyx_n_s_userid __pyx_mstate_global->__pyx_n_s_userid
#define __pyx_n_u_userid __pyx_mstate_global->__pyx_n_u_userid
#define __pyx_n_s_utils __pyx_mstate_global->__pyx_n_s_utils
#define __pyx_kp_u_w __pyx_mstate_global->__pyx_kp_u_w
#define __pyx_n_s_wd __pyx_mstate_global->__pyx_n_s_wd
#define __pyx_n_u_wd __pyx_mstate_global->__pyx_n_u_wd
#define __pyx_n_u_web_messenger __pyx_mstate_global->__pyx_n_u_web_messenger
#define __pyx_n_u_x __pyx_mstate_global->__pyx_n_u_x
#define __pyx_int_1 __pyx_mstate_global->__pyx_int_1
#define __pyx_int_2 __pyx_mstate_global->__pyx_int_2
#define __pyx_int_48 __pyx_mstate_global->__pyx_int_48
#define __pyx_int_860 __pyx_mstate_global->__pyx_int_860
#define __pyx_int_1000 __pyx_mstate_global->__pyx_int_1000
#define __pyx_int_1900 __pyx_mstate_global->__pyx_int_1900
#define __pyx_int_2200 __pyx_mstate_global->__pyx_int_2200
#define __pyx_tuple_ __pyx_mstate_global->__pyx_tuple_
#define __pyx_tuple__2 __pyx_mstate_global->__pyx_tuple__2
#define __pyx_tuple__3 __pyx_mstate_global->__pyx_tuple__3
#define __pyx_tuple__7 __pyx_mstate_global->__pyx_tuple__7
#define __pyx_tuple__9 __pyx_mstate_global->__pyx_tuple__9
#define __pyx_tuple__12 __pyx_mstate_global->__pyx_tuple__12
#define __pyx_codeobj__13 __pyx_mstate_global->__pyx_codeobj__13
 

 

static PyObject *__pyx_pf_11controllers_10bruteforce_5login_13web_messenger_2__defaults__(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__defaults__", 1);
  __Pyx_XDECREF(__pyx_r);

   
  __pyx_t_1 = PyTuple_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_retries);
  __Pyx_GIVEREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_retries);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_1, 0, __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_retries)) __PYX_ERR(0, 16, __pyx_L1_error);
  __Pyx_INCREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_user_agent);
  __Pyx_GIVEREF(__Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_user_agent);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_1, 1, __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self)->__pyx_arg_user_agent)) __PYX_ERR(0, 16, __pyx_L1_error);
  __Pyx_INCREF(((PyObject *)Py_False));
  __Pyx_GIVEREF(((PyObject *)Py_False));
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_1, 2, ((PyObject *)Py_False))) __PYX_ERR(0, 16, __pyx_L1_error);

   
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_1);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1)) __PYX_ERR(0, 16, __pyx_L1_error);
  __Pyx_INCREF(Py_None);
  __Pyx_GIVEREF(Py_None);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, Py_None)) __PYX_ERR(0, 16, __pyx_L1_error);
  __pyx_t_1 = 0;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("controllers.bruteforce.login.web_messenger.__defaults__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 
static PyObject *__pyx_pw_11controllers_10bruteforce_5login_13web_messenger_1attempt(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_10bruteforce_5login_13web_messenger_1attempt = {"attempt", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_10bruteforce_5login_13web_messenger_1attempt, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_10bruteforce_5login_13web_messenger_1attempt(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_userid = 0;
  PyObject *__pyx_v_password = 0;
  PyObject *__pyx_v_retries = 0;
  PyObject *__pyx_v_user_agent = 0;
  PyObject *__pyx_v_save_session = 0;
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
  __Pyx_RefNannySetupContext("attempt (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_userid,&__pyx_n_s_password,&__pyx_n_s_retries,&__pyx_n_s_user_agent,&__pyx_n_s_save_session,0};
    __pyx_defaults *__pyx_dynamic_args = __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_self);
    values[2] = __Pyx_Arg_NewRef_FASTCALL(__pyx_dynamic_args->__pyx_arg_retries);
    values[3] = __Pyx_Arg_NewRef_FASTCALL(__pyx_dynamic_args->__pyx_arg_user_agent);
    values[4] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)((PyObject *)Py_False)));
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
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_userid)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 16, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_password)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 16, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("attempt", 0, 2, 5, 1); __PYX_ERR(0, 16, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_retries);
          if (value) { values[2] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 16, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_user_agent);
          if (value) { values[3] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 16, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_save_session);
          if (value) { values[4] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 16, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "attempt") < 0)) __PYX_ERR(0, 16, __pyx_L3_error)
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
    __pyx_v_userid = ((PyObject*)values[0]);
    __pyx_v_password = ((PyObject*)values[1]);
    __pyx_v_retries = ((PyObject*)values[2]);
    __pyx_v_user_agent = ((PyObject*)values[3]);
    __pyx_v_save_session = values[4];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("attempt", 0, 2, 5, __pyx_nargs); __PYX_ERR(0, 16, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.bruteforce.login.web_messenger.attempt", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_userid), (&PyUnicode_Type), 0, "userid", 1))) __PYX_ERR(0, 17, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_password), (&PyUnicode_Type), 0, "password", 1))) __PYX_ERR(0, 18, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_retries), (&PyInt_Type), 0, "retries", 1))) __PYX_ERR(0, 19, __pyx_L1_error)
  if (unlikely(!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_user_agent), (&PyUnicode_Type), 0, "user_agent", 1))) __PYX_ERR(0, 20, __pyx_L1_error)
  __pyx_r = __pyx_pf_11controllers_10bruteforce_5login_13web_messenger_attempt(__pyx_self, __pyx_v_userid, __pyx_v_password, __pyx_v_retries, __pyx_v_user_agent, __pyx_v_save_session);

   
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

static PyObject *__pyx_pf_11controllers_10bruteforce_5login_13web_messenger_attempt(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_userid, PyObject *__pyx_v_password, PyObject *__pyx_v_retries, PyObject *__pyx_v_user_agent, PyObject *__pyx_v_save_session) {
  PyObject *__pyx_v_results = NULL;
  PyObject *__pyx_v_domain = NULL;
  PyObject *__pyx_v_payload = NULL;
  PyObject *__pyx_v_http = NULL;
  PyObject *__pyx_v_screen_sizes = NULL;
  PyObject *__pyx_v_session = NULL;
  PyObject *__pyx_v_h = NULL;
  PyObject *__pyx_v_locale = NULL;
  PyObject *__pyx_v_response = NULL;
  PyObject *__pyx_v_form = NULL;
  PyObject *__pyx_v_js_datr = NULL;
  PyObject *__pyx_v_wd = NULL;
  PyObject *__pyx_v_cookie = NULL;
  PyObject *__pyx_v_redirect_url = NULL;
  PyObject *__pyx_v_checkpoint = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  int __pyx_t_6;
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  Py_ssize_t __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  Py_UCS4 __pyx_t_14;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("attempt", 0);
  __Pyx_INCREF(__pyx_v_userid);

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Variables); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_RESULT); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_copy); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_v_results = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_results, __pyx_n_s_update); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_userid, __pyx_v_userid) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_password, __pyx_v_password) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_NAME); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_login_name, __pyx_t_5) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 24, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = PyObject_RichCompare(__pyx_v_retries, __pyx_int_2, Py_GT); __Pyx_XGOTREF(__pyx_t_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 25, __pyx_L1_error)
  __pyx_t_6 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_6 < 0))) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_6) {

     
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(__pyx_v_results);
    __pyx_r = __pyx_v_results;
    goto __pyx_L0;

     
  }

   
  __Pyx_INCREF(__pyx_kp_u_https_www_alpha_messenger_com_0);
  __pyx_v_domain = __pyx_kp_u_https_www_alpha_messenger_com_0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Variables); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_SESSION_LOGIN); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_t_3, __pyx_n_u_web_messenger); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_v_userid};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 29, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_t_6 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_6 < 0))) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_7 = (!__pyx_t_6);
  if (__pyx_t_7) {

     
    __Pyx_INCREF(Py_None);
    __pyx_v_payload = Py_None;

     
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Http); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_DESKTOP_REQUEST_HEADERS); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_headers, __pyx_t_5) < 0) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_v_http = __pyx_t_5;
    __pyx_t_5 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_random); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_uniform); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple_, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_random); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_uniform); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__2, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = PyList_New(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GIVEREF(__pyx_t_3);
    if (__Pyx_PyList_SET_ITEM(__pyx_t_5, 0, __pyx_t_3)) __PYX_ERR(0, 32, __pyx_L1_error);
    __Pyx_GIVEREF(__pyx_t_1);
    if (__Pyx_PyList_SET_ITEM(__pyx_t_5, 1, __pyx_t_1)) __PYX_ERR(0, 32, __pyx_L1_error);
    __pyx_t_3 = 0;
    __pyx_t_1 = 0;
    __pyx_v_screen_sizes = __pyx_t_5;
    __pyx_t_5 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_headers); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_update); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 33, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    __pyx_t_2 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 34, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_upgrade_insecure_requests, __pyx_kp_u_1) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_sec_fetch_user, __pyx_kp_u_1_2) < 0) __PYX_ERR(0, 34, __pyx_L1_error)

     
    if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_user_agent_2, __pyx_v_user_agent) < 0) __PYX_ERR(0, 34, __pyx_L1_error)

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_app); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_ACCEPT_LANGUAGE); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_t_9, __pyx_n_u_other); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (PyDict_SetItem(__pyx_t_2, __pyx_kp_u_accept_language, __pyx_t_8) < 0) __PYX_ERR(0, 34, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_1 = __pyx_t_2;
    __pyx_t_2 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_get_platform_header_from_userage); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_9 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_9)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_9);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_v_user_agent};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 38, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    if (unlikely(__pyx_t_2 == Py_None)) {
      PyErr_SetString(PyExc_TypeError, "argument after ** must be a mapping, not NoneType");
      __PYX_ERR(0, 38, __pyx_L1_error)
    }
    if (unlikely(PyDict_Update(__pyx_t_1, __pyx_t_2) < 0)) {
      if (PyErr_ExceptionMatches(PyExc_AttributeError)) __Pyx_RaiseMappingExpectedError(__pyx_t_2);
      __PYX_ERR(0, 38, __pyx_L1_error)
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_1};
      __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 33, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

     
    goto __pyx_L4;
  }

   
    {
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Variables); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_SESSION_LOGIN); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_t_3, __pyx_n_u_web_messenger); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_t_5, __pyx_v_userid); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_v_session = __pyx_t_3;
    __pyx_t_3 = 0;

     
    __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_session, __pyx_n_u_payload); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_v_payload = __pyx_t_3;
    __pyx_t_3 = 0;

     
    __pyx_t_3 = __Pyx_PyObject_Dict_GetItem(__pyx_v_session, __pyx_n_u_screen_sizes); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_v_screen_sizes = __pyx_t_3;
    __pyx_t_3 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Http); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_5 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_session, __pyx_n_u_headers); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_headers, __pyx_t_1) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_session, __pyx_n_u_cookies); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_cookies, __pyx_t_1) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_empty_tuple, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_v_http = __pyx_t_1;
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __pyx_tuple__3; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_10 = 0;
    for (;;) {
      if (__pyx_t_10 >= 2) break;
      #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
      __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_10); __Pyx_INCREF(__pyx_t_5); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 45, __pyx_L1_error)
      #else
      __pyx_t_5 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 45, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      #endif
      __Pyx_XDECREF_SET(__pyx_v_h, ((PyObject*)__pyx_t_5));
      __pyx_t_5 = 0;

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_headers); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 46, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 46, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_t_3 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_3)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_3);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_v_h};
        __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 46, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_5); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 46, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (__pyx_t_7) {

         
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_headers); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 47, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        if (unlikely((PyObject_DelItem(__pyx_t_5, __pyx_v_h) < 0))) __PYX_ERR(0, 47, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

         
      }

       
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __pyx_L4:;

   
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_app); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_ACCEPT_LANGUAGE); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_other); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_split); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_kp_u__4};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 49, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_t_2 = __Pyx_GetItemInt(__pyx_t_1, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_replace); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__7, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_locale = __pyx_t_2;
  __pyx_t_2 = 0;

   
  while (1) {
    __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_v_payload); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 51, __pyx_L1_error)
    __pyx_t_6 = (!__pyx_t_7);
    if (!__pyx_t_6) break;

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_11, &__pyx_t_12, &__pyx_t_13);
      __Pyx_XGOTREF(__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_12);
      __Pyx_XGOTREF(__pyx_t_13);
        {

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 53, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_CallUnboundCMethod1(&__pyx_umethod_PyUnicode_Type_format, __pyx_v_domain, __pyx_kp_u_login); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 53, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_3 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_5};
          __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 53, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_text); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 53, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF_SET(__pyx_v_response, __pyx_t_1);
        __pyx_t_1 = 0;

         
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_BS4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 54, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_5 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_5, __pyx_v_response, __pyx_kp_u_html_parser};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 54, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        }
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_get_form); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 54, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 54, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_1);
        if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_id, __pyx_n_u_login_form) < 0) __PYX_ERR(0, 54, __pyx_L11_error)
        __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 54, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF_SET(__pyx_v_form, __pyx_t_5);
        __pyx_t_5 = 0;

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_form, __pyx_n_s_get); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 56, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_n_u_action};
          __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 56, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __pyx_t_6 = __Pyx_PyObject_IsTrue(__pyx_t_5); if (unlikely((__pyx_t_6 < 0))) __PYX_ERR(0, 56, __pyx_L11_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_7 = (!__pyx_t_6);
        if (unlikely(__pyx_t_7)) {

           
          __pyx_t_5 = __Pyx_PyObject_CallNoArg(((PyObject *)(&((PyTypeObject*)PyExc_Exception)[0]))); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 57, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_Raise(__pyx_t_5, 0, 0, 0);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          __PYX_ERR(0, 57, __pyx_L11_error)

           
        }

         
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_re); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 59, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_search); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 59, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_2, __pyx_kp_u_js_datr, __pyx_v_response};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 59, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_group); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 59, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_int_1};
          __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 59, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_XDECREF_SET(__pyx_v_js_datr, __pyx_t_5);
        __pyx_t_5 = 0;

         
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_cookies); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 60, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_update); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

         
        __pyx_t_3 = __Pyx_PyDict_NewPresized(5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 61, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_3);
        if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_m_pixel_ratio, __pyx_kp_u_1_25) < 0) __PYX_ERR(0, 61, __pyx_L11_error)
        if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_dpr, __pyx_kp_u_1_25) < 0) __PYX_ERR(0, 61, __pyx_L11_error)

         
        __pyx_t_2 = PyTuple_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_10 = 0;
        __pyx_t_14 = 127;
        __pyx_t_8 = __Pyx_GetItemInt(__pyx_v_screen_sizes, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 63, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_9 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_8), __pyx_empty_unicode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 63, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_14 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_9) > __pyx_t_14) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_9) : __pyx_t_14;
        __pyx_t_10 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_9);
        __Pyx_GIVEREF(__pyx_t_9);
        PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_9);
        __pyx_t_9 = 0;
        __Pyx_INCREF(__pyx_n_u_x);
        __pyx_t_10 += 1;
        __Pyx_GIVEREF(__pyx_n_u_x);
        PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_n_u_x);
        __pyx_t_9 = __Pyx_GetItemInt(__pyx_v_screen_sizes, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 63, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_8 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_9), __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 63, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_14 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) > __pyx_t_14) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_8) : __pyx_t_14;
        __pyx_t_10 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_8);
        __Pyx_GIVEREF(__pyx_t_8);
        PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_t_8);
        __pyx_t_8 = 0;
        __pyx_t_8 = __Pyx_PyUnicode_Join(__pyx_t_2, 3, __pyx_t_10, __pyx_t_14); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 63, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_wd, __pyx_t_8) < 0) __PYX_ERR(0, 61, __pyx_L11_error)
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

         
        if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_datr, __pyx_v_js_datr) < 0) __PYX_ERR(0, 61, __pyx_L11_error)

         
        if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_locale, __pyx_v_locale) < 0) __PYX_ERR(0, 61, __pyx_L11_error)
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_3};
          __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 60, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

         
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_cookies); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 67, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_get_dict); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 67, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_8))) {
          __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_8);
          if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_8, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 67, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_t_1, __pyx_n_u_wd); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 67, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_split); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 67, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_n_u_x};
          __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 67, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __Pyx_XDECREF_SET(__pyx_v_wd, __pyx_t_5);
        __pyx_t_5 = 0;

         
        __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_form, __pyx_n_u_hidden); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 68, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF_SET(__pyx_v_payload, __pyx_t_5);
        __pyx_t_5 = 0;

         
        if (unlikely((PyObject_SetItem(__pyx_v_payload, __pyx_n_u_timezone, __pyx_kp_u_420) < 0))) __PYX_ERR(0, 69, __pyx_L11_error)

         
        __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_base64); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_b64encode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_2 = __Pyx_GetItemInt(__pyx_v_wd, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_9 = PyNumber_Add(__pyx_kp_u_w, __pyx_t_2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyNumber_Add(__pyx_t_9, __pyx_kp_u_h); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = __Pyx_GetItemInt(__pyx_v_wd, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_15 = PyNumber_Add(__pyx_t_2, __pyx_t_9); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = PyNumber_Add(__pyx_t_15, __pyx_kp_u_aw); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __pyx_t_15 = __Pyx_GetItemInt(__pyx_v_wd, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_15);
        __pyx_t_2 = PyNumber_Add(__pyx_t_9, __pyx_t_15); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __pyx_t_15 = PyNumber_Add(__pyx_t_2, __pyx_kp_u_ah); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_15);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_GetItemInt(__pyx_v_wd, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_9 = __Pyx_PyNumber_Int(__pyx_t_2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyInt_SubtractObjC(__pyx_t_9, __pyx_int_48, 48, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = __Pyx_PyObject_Str(__pyx_t_2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyNumber_Add(__pyx_t_15, __pyx_t_9); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = PyNumber_Add(__pyx_t_2, __pyx_kp_u_c_24); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_encode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_9)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_9);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_9, NULL};
          __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 70, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        }
        __pyx_t_2 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_8};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 70, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_decode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_1, NULL};
          __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 70, __pyx_L11_error)
          __Pyx_GOTREF(__pyx_t_5);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        if (unlikely((PyObject_SetItem(__pyx_v_payload, __pyx_n_u_lgndim, __pyx_t_5) < 0))) __PYX_ERR(0, 70, __pyx_L11_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

         
        goto __pyx_L16_try_break;

         
      }
      __pyx_L11_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_3, &__pyx_t_1);
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 72, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 72, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_InvalidChunkLength); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 72, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 72, __pyx_L13_except_error)
      __Pyx_GOTREF(__pyx_t_15);
      __pyx_t_4 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_8) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_2) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_9) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_15);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_ErrRestore(__pyx_t_5, __pyx_t_3, __pyx_t_1);
      __pyx_t_5 = 0; __pyx_t_3 = 0; __pyx_t_1 = 0;
      if (__pyx_t_4) {
        __Pyx_AddTraceback("controllers.bruteforce.login.web_messenger.attempt", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_3, &__pyx_t_5) < 0) __PYX_ERR(0, 72, __pyx_L13_except_error)
        __Pyx_XGOTREF(__pyx_t_1);
        __Pyx_XGOTREF(__pyx_t_3);
        __Pyx_XGOTREF(__pyx_t_5);

         
        goto __pyx_L20_except_continue;
        __pyx_L20_except_continue:;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        goto __pyx_L17_try_continue;
      }

       
        {
        __Pyx_AddTraceback("controllers.bruteforce.login.web_messenger.attempt", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_3, &__pyx_t_1) < 0) __PYX_ERR(0, 74, __pyx_L13_except_error)
        __Pyx_XGOTREF(__pyx_t_5);
        __Pyx_XGOTREF(__pyx_t_3);
        __Pyx_XGOTREF(__pyx_t_1);

         
        __Pyx_XDECREF(__pyx_r);
        __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_attempt); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 75, __pyx_L13_except_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_2 = PyNumber_Add(__pyx_v_retries, __pyx_int_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 75, __pyx_L13_except_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[6] = {__pyx_t_8, __pyx_v_userid, __pyx_v_password, __pyx_t_2, __pyx_v_user_agent, __pyx_v_save_session};
          __pyx_t_15 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 5+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 75, __pyx_L13_except_error)
          __Pyx_GOTREF(__pyx_t_15);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
        __pyx_r = __pyx_t_15;
        __pyx_t_15 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        goto __pyx_L14_except_return;
      }

       
      __pyx_L13_except_error:;
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_12, __pyx_t_13);
      goto __pyx_L1_error;
      __pyx_L16_try_break:;
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_12, __pyx_t_13);
      goto __pyx_L10_break;
      __pyx_L17_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_12, __pyx_t_13);
      goto __pyx_L9_continue;
      __pyx_L14_except_return:;
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_12, __pyx_t_13);
      goto __pyx_L0;
    }
    __pyx_L9_continue:;
  }
  __pyx_L10_break:;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_payload, __pyx_n_s_update); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 77, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);

   
  __pyx_t_5 = __Pyx_PyDict_NewPresized(5); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 79, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_u_email, __pyx_v_userid) < 0) __PYX_ERR(0, 79, __pyx_L1_error)

   
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_u_pass, __pyx_v_password) < 0) __PYX_ERR(0, 79, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_u_login_2, __pyx_kp_u_1) < 0) __PYX_ERR(0, 79, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_u_persistent, __pyx_kp_u_1) < 0) __PYX_ERR(0, 79, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_5, __pyx_n_u_default_persistent, __pyx_kp_u_0) < 0) __PYX_ERR(0, 79, __pyx_L1_error)
  __pyx_t_15 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_15)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_15);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_15, __pyx_t_5};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 77, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_headers); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 86, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_update); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 86, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_content_type, __pyx_kp_u_application_x_www_form_urlencode) < 0) __PYX_ERR(0, 88, __pyx_L1_error)

   
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_urlencode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 89, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_2 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_v_payload};
    __pyx_t_15 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 89, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_15);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  }
  __pyx_t_10 = PyObject_Length(__pyx_t_15); if (unlikely(__pyx_t_10 == ((Py_ssize_t)-1))) __PYX_ERR(0, 89, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
  __pyx_t_15 = PyInt_FromSsize_t(__pyx_t_10); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 89, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_15);
  __pyx_t_9 = __Pyx_PyObject_Str(__pyx_t_15); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 89, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
  if (PyDict_SetItem(__pyx_t_3, __pyx_kp_u_content_length, __pyx_t_9) < 0) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

   
  __pyx_t_9 = __Pyx_CallUnboundCMethod1(&__pyx_umethod_PyUnicode_Type_format, __pyx_v_domain, __pyx_kp_u_login); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 90, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_u_referer, __pyx_t_9) < 0) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_9)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_9);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_t_3};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 86, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  while (1) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_13, &__pyx_t_12, &__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_13);
      __Pyx_XGOTREF(__pyx_t_12);
      __Pyx_XGOTREF(__pyx_t_11);
        {

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_post); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 95, __pyx_L26_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_CallUnboundCMethod1(&__pyx_umethod_PyUnicode_Type_format, __pyx_v_domain, __pyx_kp_u_login_password); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 95, __pyx_L26_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_3 = PyTuple_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 95, __pyx_L26_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GIVEREF(__pyx_t_5);
        if (__Pyx_PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_5)) __PYX_ERR(0, 95, __pyx_L26_error);
        __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 95, __pyx_L26_error)
        __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_data, __pyx_v_payload) < 0) __PYX_ERR(0, 95, __pyx_L26_error)
        if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_allow_redirects, Py_False) < 0) __PYX_ERR(0, 95, __pyx_L26_error)
        __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_3, __pyx_t_5); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 95, __pyx_L26_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF_SET(__pyx_v_response, __pyx_t_9);
        __pyx_t_9 = 0;

         
        goto __pyx_L31_try_break;

         
      }
      __pyx_L26_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      __Pyx_ErrFetch(&__pyx_t_9, &__pyx_t_5, &__pyx_t_3);
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 97, __pyx_L28_except_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_GetModuleGlobalName(__pyx_t_15, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 97, __pyx_L28_except_error)
      __Pyx_GOTREF(__pyx_t_15);
      __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_InvalidChunkLength); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 97, __pyx_L28_except_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 97, __pyx_L28_except_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_4 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_9, __pyx_t_1) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_9, __pyx_t_15) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_9, __pyx_t_2) || __Pyx_PyErr_GivenExceptionMatches(__pyx_t_9, __pyx_t_8);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_ErrRestore(__pyx_t_9, __pyx_t_5, __pyx_t_3);
      __pyx_t_9 = 0; __pyx_t_5 = 0; __pyx_t_3 = 0;
      if (__pyx_t_4) {
        __Pyx_AddTraceback("controllers.bruteforce.login.web_messenger.attempt", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_5, &__pyx_t_9) < 0) __PYX_ERR(0, 97, __pyx_L28_except_error)
        __Pyx_XGOTREF(__pyx_t_3);
        __Pyx_XGOTREF(__pyx_t_5);
        __Pyx_XGOTREF(__pyx_t_9);

         
        goto __pyx_L34_except_continue;
        __pyx_L34_except_continue:;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        goto __pyx_L32_try_continue;
      }

       
        {
        __Pyx_AddTraceback("controllers.bruteforce.login.web_messenger.attempt", __pyx_clineno, __pyx_lineno, __pyx_filename);
        if (__Pyx_GetException(&__pyx_t_9, &__pyx_t_5, &__pyx_t_3) < 0) __PYX_ERR(0, 99, __pyx_L28_except_error)
        __Pyx_XGOTREF(__pyx_t_9);
        __Pyx_XGOTREF(__pyx_t_5);
        __Pyx_XGOTREF(__pyx_t_3);

         
        __Pyx_XDECREF(__pyx_r);
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_attempt); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 100, __pyx_L28_except_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_15 = PyNumber_Add(__pyx_v_retries, __pyx_int_1); if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 100, __pyx_L28_except_error)
        __Pyx_GOTREF(__pyx_t_15);
        __pyx_t_1 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_2))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[6] = {__pyx_t_1, __pyx_v_userid, __pyx_v_password, __pyx_t_15, __pyx_v_user_agent, __pyx_v_save_session};
          __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 5+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 100, __pyx_L28_except_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        }
        __pyx_r = __pyx_t_8;
        __pyx_t_8 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        goto __pyx_L29_except_return;
      }

       
      __pyx_L28_except_error:;
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_13, __pyx_t_12, __pyx_t_11);
      goto __pyx_L1_error;
      __pyx_L31_try_break:;
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_13, __pyx_t_12, __pyx_t_11);
      goto __pyx_L25_break;
      __pyx_L32_try_continue:;
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_13, __pyx_t_12, __pyx_t_11);
      goto __pyx_L24_continue;
      __pyx_L29_except_return:;
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_ExceptionReset(__pyx_t_13, __pyx_t_12, __pyx_t_11);
      goto __pyx_L0;
    }
    __pyx_L24_continue:;
  }
  __pyx_L25_break:;

   
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_cookies); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_get_dict); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 102, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  }
  __pyx_v_cookie = __pyx_t_3;
  __pyx_t_3 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_unquote); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  if (unlikely(!__pyx_v_response)) { __Pyx_RaiseUnboundLocalError("response"); __PYX_ERR(0, 103, __pyx_L1_error) }
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_response, __pyx_n_s_headers); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_get); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_tuple__9, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __pyx_t_8 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_8)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_8);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_5};
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 103, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  }
  __pyx_v_redirect_url = __pyx_t_3;
  __pyx_t_3 = 0;

   
  __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_cookie, __pyx_n_s_get); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_5 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_9))) {
    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_9);
    if (likely(__pyx_t_5)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
      __Pyx_INCREF(__pyx_t_5);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_9, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_n_u_c_user};
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 105, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  }
  __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 105, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__pyx_t_7) {

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_base64); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_b64encode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = PyUnicode_AsEncodedString(__pyx_v_user_agent, NULL, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_2 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_5};
      __pyx_t_9 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 106, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_decode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_9)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_9);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_9, NULL};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 106, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    if (unlikely((PyObject_SetItem(__pyx_v_cookie, __pyx_n_u_ua, __pyx_t_3) < 0))) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_results, __pyx_n_s_update); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);

     
    __pyx_t_9 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_cookie, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_15 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_15)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_15);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_15, __pyx_n_u_c_user, __pyx_v_userid};
      __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 109, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = __Pyx_PyObject_Str(__pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_9, __pyx_n_u_userid, __pyx_t_2) < 0) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    if (PyDict_SetItem(__pyx_t_9, __pyx_n_u_cookies, __pyx_v_cookie) < 0) __PYX_ERR(0, 109, __pyx_L1_error)

     
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Variables); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_OK_CODE); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (PyDict_SetItem(__pyx_t_9, __pyx_n_u_status, __pyx_t_5) < 0) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_t_9};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 107, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    goto __pyx_L38;
  }

   
  __pyx_t_7 = (__Pyx_PySequence_ContainsTF(__pyx_n_u_checkpoint_interstitial, __pyx_v_redirect_url, Py_EQ)); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 114, __pyx_L1_error)
  if (__pyx_t_7) {

     
    {
      __Pyx_PyThreadState_declare
      __Pyx_PyThreadState_assign
      __Pyx_ExceptionSave(&__pyx_t_11, &__pyx_t_12, &__pyx_t_13);
      __Pyx_XGOTREF(__pyx_t_11);
      __Pyx_XGOTREF(__pyx_t_12);
      __Pyx_XGOTREF(__pyx_t_13);
        {

         
        __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_json); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 116, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_loads); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 116, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_unquote); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 116, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_re); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 116, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_16 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_search); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 116, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_16);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_16))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_16);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_16);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_16, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_1, __pyx_kp_u_cookie, __pyx_v_redirect_url};
          __pyx_t_15 = __Pyx_PyObject_FastCall(__pyx_t_16, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 116, __pyx_L39_error)
          __Pyx_GOTREF(__pyx_t_15);
          __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
        }
        __pyx_t_16 = __Pyx_PyObject_GetAttrStr(__pyx_t_15, __pyx_n_s_group); if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 116, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_16);
        __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
        __pyx_t_15 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_16))) {
          __pyx_t_15 = PyMethod_GET_SELF(__pyx_t_16);
          if (likely(__pyx_t_15)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_16);
            __Pyx_INCREF(__pyx_t_15);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_16, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_15, __pyx_int_1};
          __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_16, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 116, __pyx_L39_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
        }
        __pyx_t_16 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_16 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_16)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_16);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_16, __pyx_t_2};
          __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 116, __pyx_L39_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        }
        __pyx_t_5 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_t_8};
          __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 116, __pyx_L39_error)
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
        __pyx_v_checkpoint = __pyx_t_3;
        __pyx_t_3 = 0;

         
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_checkpoint, __pyx_n_s_get); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 117, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_8, __pyx_n_u_u, __pyx_v_userid};
          __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 117, __pyx_L39_error)
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
        if (!(likely(PyUnicode_CheckExact(__pyx_t_3))||((__pyx_t_3) == Py_None) || __Pyx_RaiseUnexpectedTypeError("unicode", __pyx_t_3))) __PYX_ERR(0, 117, __pyx_L39_error)
        __Pyx_DECREF_SET(__pyx_v_userid, ((PyObject*)__pyx_t_3));
        __pyx_t_3 = 0;

         
      }
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      goto __pyx_L44_try_end;
      __pyx_L39_error:;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
      __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

       
        {
        __Pyx_ErrRestore(0,0,0);
        goto __pyx_L40_exception_handled;
      }
      __pyx_L40_exception_handled:;
      __Pyx_XGIVEREF(__pyx_t_11);
      __Pyx_XGIVEREF(__pyx_t_12);
      __Pyx_XGIVEREF(__pyx_t_13);
      __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_12, __pyx_t_13);
      __pyx_L44_try_end:;
    }

     
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_results, __pyx_n_s_update); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 119, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);

     
    __pyx_t_8 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 121, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_5 = __Pyx_PyObject_Str(__pyx_v_userid); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 121, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (PyDict_SetItem(__pyx_t_8, __pyx_n_u_userid, __pyx_t_5) < 0) __PYX_ERR(0, 121, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

     
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Variables); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_MUST_VERIFY_CODE); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_t_8, __pyx_n_u_status, __pyx_t_2) < 0) __PYX_ERR(0, 121, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_9))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_9);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_9, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_8};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 119, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    goto __pyx_L38;
  }

   
    {
    __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_v_save_session); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 126, __pyx_L1_error)
    if (__pyx_t_7) {

       
      __pyx_t_3 = __Pyx_PyDict_NewPresized(4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 127, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_http, __pyx_n_s_headers); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 127, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_headers, __pyx_t_9) < 0) __PYX_ERR(0, 127, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

       
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_cookies, __pyx_v_cookie) < 0) __PYX_ERR(0, 127, __pyx_L1_error)

       
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_payload, __pyx_v_payload) < 0) __PYX_ERR(0, 127, __pyx_L1_error)

       
      if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_screen_sizes, __pyx_v_screen_sizes) < 0) __PYX_ERR(0, 127, __pyx_L1_error)

       
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_Variables); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_SESSION_LOGIN); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_NAME); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_t_8, __pyx_t_9); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      if (unlikely((PyObject_SetItem(__pyx_t_2, __pyx_v_userid, __pyx_t_3) < 0))) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }

     
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_Variables); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 132, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_INVALID_CREDENTIALS_CODE); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 132, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely((PyObject_SetItem(__pyx_v_results, __pyx_n_u_status, __pyx_t_2) < 0))) __PYX_ERR(0, 132, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_L38:;

   
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_results);
  __pyx_r = __pyx_v_results;
  goto __pyx_L0;

   

   
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_15);
  __Pyx_XDECREF(__pyx_t_16);
  __Pyx_AddTraceback("controllers.bruteforce.login.web_messenger.attempt", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_results);
  __Pyx_XDECREF(__pyx_v_domain);
  __Pyx_XDECREF(__pyx_v_payload);
  __Pyx_XDECREF(__pyx_v_http);
  __Pyx_XDECREF(__pyx_v_screen_sizes);
  __Pyx_XDECREF(__pyx_v_session);
  __Pyx_XDECREF(__pyx_v_h);
  __Pyx_XDECREF(__pyx_v_locale);
  __Pyx_XDECREF(__pyx_v_response);
  __Pyx_XDECREF(__pyx_v_form);
  __Pyx_XDECREF(__pyx_v_js_datr);
  __Pyx_XDECREF(__pyx_v_wd);
  __Pyx_XDECREF(__pyx_v_cookie);
  __Pyx_XDECREF(__pyx_v_redirect_url);
  __Pyx_XDECREF(__pyx_v_checkpoint);
  __Pyx_XDECREF(__pyx_v_userid);
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
    {&__pyx_kp_u_0, __pyx_k_0, sizeof(__pyx_k_0), 0, 1, 0, 0},
    {&__pyx_kp_u_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 1, 0, 0},
    {&__pyx_kp_u_1_2, __pyx_k_1_2, sizeof(__pyx_k_1_2), 0, 1, 0, 0},
    {&__pyx_kp_u_1_25, __pyx_k_1_25, sizeof(__pyx_k_1_25), 0, 1, 0, 0},
    {&__pyx_kp_u_420, __pyx_k_420, sizeof(__pyx_k_420), 0, 1, 0, 0},
    {&__pyx_n_s_ACCEPT_LANGUAGE, __pyx_k_ACCEPT_LANGUAGE, sizeof(__pyx_k_ACCEPT_LANGUAGE), 0, 0, 1, 1},
    {&__pyx_n_s_BS4, __pyx_k_BS4, sizeof(__pyx_k_BS4), 0, 0, 1, 1},
    {&__pyx_n_s_ChunkedEncodingError, __pyx_k_ChunkedEncodingError, sizeof(__pyx_k_ChunkedEncodingError), 0, 0, 1, 1},
    {&__pyx_n_s_ConnectionError, __pyx_k_ConnectionError, sizeof(__pyx_k_ConnectionError), 0, 0, 1, 1},
    {&__pyx_n_s_DESKTOP_REQUEST_HEADERS, __pyx_k_DESKTOP_REQUEST_HEADERS, sizeof(__pyx_k_DESKTOP_REQUEST_HEADERS), 0, 0, 1, 1},
    {&__pyx_n_s_Http, __pyx_k_Http, sizeof(__pyx_k_Http), 0, 0, 1, 1},
    {&__pyx_n_s_INVALID_CREDENTIALS_CODE, __pyx_k_INVALID_CREDENTIALS_CODE, sizeof(__pyx_k_INVALID_CREDENTIALS_CODE), 0, 0, 1, 1},
    {&__pyx_n_s_InvalidChunkLength, __pyx_k_InvalidChunkLength, sizeof(__pyx_k_InvalidChunkLength), 0, 0, 1, 1},
    {&__pyx_n_u_Location, __pyx_k_Location, sizeof(__pyx_k_Location), 0, 1, 0, 1},
    {&__pyx_n_s_MUST_VERIFY_CODE, __pyx_k_MUST_VERIFY_CODE, sizeof(__pyx_k_MUST_VERIFY_CODE), 0, 0, 1, 1},
    {&__pyx_n_s_NAME, __pyx_k_NAME, sizeof(__pyx_k_NAME), 0, 0, 1, 1},
    {&__pyx_n_s_OK_CODE, __pyx_k_OK_CODE, sizeof(__pyx_k_OK_CODE), 0, 0, 1, 1},
    {&__pyx_n_s_RESULT, __pyx_k_RESULT, sizeof(__pyx_k_RESULT), 0, 0, 1, 1},
    {&__pyx_n_s_RandomUserAgent, __pyx_k_RandomUserAgent, sizeof(__pyx_k_RandomUserAgent), 0, 0, 1, 1},
    {&__pyx_n_s_SESSION_LOGIN, __pyx_k_SESSION_LOGIN, sizeof(__pyx_k_SESSION_LOGIN), 0, 0, 1, 1},
    {&__pyx_n_s_Timeout, __pyx_k_Timeout, sizeof(__pyx_k_Timeout), 0, 0, 1, 1},
    {&__pyx_n_s_Variables, __pyx_k_Variables, sizeof(__pyx_k_Variables), 0, 0, 1, 1},
    {&__pyx_n_s__10, __pyx_k__10, sizeof(__pyx_k__10), 0, 0, 1, 1},
    {&__pyx_kp_u__11, __pyx_k__11, sizeof(__pyx_k__11), 0, 1, 0, 0},
    {&__pyx_n_s__14, __pyx_k__14, sizeof(__pyx_k__14), 0, 0, 1, 1},
    {&__pyx_kp_u__4, __pyx_k__4, sizeof(__pyx_k__4), 0, 1, 0, 0},
    {&__pyx_kp_u__5, __pyx_k__5, sizeof(__pyx_k__5), 0, 1, 0, 0},
    {&__pyx_n_u__6, __pyx_k__6, sizeof(__pyx_k__6), 0, 1, 0, 1},
    {&__pyx_n_s__8, __pyx_k__8, sizeof(__pyx_k__8), 0, 0, 1, 1},
    {&__pyx_kp_u__8, __pyx_k__8, sizeof(__pyx_k__8), 0, 1, 0, 0},
    {&__pyx_kp_u_accept_language, __pyx_k_accept_language, sizeof(__pyx_k_accept_language), 0, 1, 0, 0},
    {&__pyx_n_u_action, __pyx_k_action, sizeof(__pyx_k_action), 0, 1, 0, 1},
    {&__pyx_kp_u_ah, __pyx_k_ah, sizeof(__pyx_k_ah), 0, 1, 0, 0},
    {&__pyx_n_s_allow_redirects, __pyx_k_allow_redirects, sizeof(__pyx_k_allow_redirects), 0, 0, 1, 1},
    {&__pyx_n_s_app, __pyx_k_app, sizeof(__pyx_k_app), 0, 0, 1, 1},
    {&__pyx_kp_u_application_x_www_form_urlencode, __pyx_k_application_x_www_form_urlencode, sizeof(__pyx_k_application_x_www_form_urlencode), 0, 1, 0, 0},
    {&__pyx_n_s_asyncio_coroutines, __pyx_k_asyncio_coroutines, sizeof(__pyx_k_asyncio_coroutines), 0, 0, 1, 1},
    {&__pyx_n_s_attempt, __pyx_k_attempt, sizeof(__pyx_k_attempt), 0, 0, 1, 1},
    {&__pyx_kp_u_aw, __pyx_k_aw, sizeof(__pyx_k_aw), 0, 1, 0, 0},
    {&__pyx_n_s_b64encode, __pyx_k_b64encode, sizeof(__pyx_k_b64encode), 0, 0, 1, 1},
    {&__pyx_n_s_base64, __pyx_k_base64, sizeof(__pyx_k_base64), 0, 0, 1, 1},
    {&__pyx_n_s_bool, __pyx_k_bool, sizeof(__pyx_k_bool), 0, 0, 1, 1},
    {&__pyx_kp_u_c_24, __pyx_k_c_24, sizeof(__pyx_k_c_24), 0, 1, 0, 0},
    {&__pyx_n_u_c_user, __pyx_k_c_user, sizeof(__pyx_k_c_user), 0, 1, 0, 1},
    {&__pyx_n_s_checkpoint, __pyx_k_checkpoint, sizeof(__pyx_k_checkpoint), 0, 0, 1, 1},
    {&__pyx_n_u_checkpoint_interstitial, __pyx_k_checkpoint_interstitial, sizeof(__pyx_k_checkpoint_interstitial), 0, 1, 0, 1},
    {&__pyx_n_s_class_getitem, __pyx_k_class_getitem, sizeof(__pyx_k_class_getitem), 0, 0, 1, 1},
    {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
    {&__pyx_kp_u_content_length, __pyx_k_content_length, sizeof(__pyx_k_content_length), 0, 1, 0, 0},
    {&__pyx_kp_u_content_type, __pyx_k_content_type, sizeof(__pyx_k_content_type), 0, 1, 0, 0},
    {&__pyx_n_s_controllers_bruteforce_login_web, __pyx_k_controllers_bruteforce_login_web, sizeof(__pyx_k_controllers_bruteforce_login_web), 0, 0, 1, 1},
    {&__pyx_kp_u_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 1, 0, 0},
    {&__pyx_n_s_cookie_2, __pyx_k_cookie_2, sizeof(__pyx_k_cookie_2), 0, 0, 1, 1},
    {&__pyx_n_s_cookies, __pyx_k_cookies, sizeof(__pyx_k_cookies), 0, 0, 1, 1},
    {&__pyx_n_u_cookies, __pyx_k_cookies, sizeof(__pyx_k_cookies), 0, 1, 0, 1},
    {&__pyx_n_s_copy, __pyx_k_copy, sizeof(__pyx_k_copy), 0, 0, 1, 1},
    {&__pyx_n_s_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 0, 1, 1},
    {&__pyx_n_u_datr, __pyx_k_datr, sizeof(__pyx_k_datr), 0, 1, 0, 1},
    {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
    {&__pyx_n_u_default_persistent, __pyx_k_default_persistent, sizeof(__pyx_k_default_persistent), 0, 1, 0, 1},
    {&__pyx_n_s_desktop, __pyx_k_desktop, sizeof(__pyx_k_desktop), 0, 0, 1, 1},
    {&__pyx_n_s_domain, __pyx_k_domain, sizeof(__pyx_k_domain), 0, 0, 1, 1},
    {&__pyx_n_u_dpr, __pyx_k_dpr, sizeof(__pyx_k_dpr), 0, 1, 0, 1},
    {&__pyx_n_u_email, __pyx_k_email, sizeof(__pyx_k_email), 0, 1, 0, 1},
    {&__pyx_n_s_encode, __pyx_k_encode, sizeof(__pyx_k_encode), 0, 0, 1, 1},
    {&__pyx_n_s_form, __pyx_k_form, sizeof(__pyx_k_form), 0, 0, 1, 1},
    {&__pyx_n_s_format, __pyx_k_format, sizeof(__pyx_k_format), 0, 0, 1, 1},
    {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
    {&__pyx_n_s_get_dict, __pyx_k_get_dict, sizeof(__pyx_k_get_dict), 0, 0, 1, 1},
    {&__pyx_n_s_get_form, __pyx_k_get_form, sizeof(__pyx_k_get_form), 0, 0, 1, 1},
    {&__pyx_n_s_get_platform_header_from_userage, __pyx_k_get_platform_header_from_userage, sizeof(__pyx_k_get_platform_header_from_userage), 0, 0, 1, 1},
    {&__pyx_n_s_group, __pyx_k_group, sizeof(__pyx_k_group), 0, 0, 1, 1},
    {&__pyx_kp_u_h, __pyx_k_h, sizeof(__pyx_k_h), 0, 1, 0, 0},
    {&__pyx_n_s_h_2, __pyx_k_h_2, sizeof(__pyx_k_h_2), 0, 0, 1, 1},
    {&__pyx_n_s_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 0, 1, 1},
    {&__pyx_n_u_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 1, 0, 1},
    {&__pyx_n_u_hidden, __pyx_k_hidden, sizeof(__pyx_k_hidden), 0, 1, 0, 1},
    {&__pyx_kp_u_html_parser, __pyx_k_html_parser, sizeof(__pyx_k_html_parser), 0, 1, 0, 0},
    {&__pyx_n_s_http, __pyx_k_http, sizeof(__pyx_k_http), 0, 0, 1, 1},
    {&__pyx_kp_u_https_www_alpha_messenger_com_0, __pyx_k_https_www_alpha_messenger_com_0, sizeof(__pyx_k_https_www_alpha_messenger_com_0), 0, 1, 0, 0},
    {&__pyx_n_s_id, __pyx_k_id, sizeof(__pyx_k_id), 0, 0, 1, 1},
    {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
    {&__pyx_n_s_initializing, __pyx_k_initializing, sizeof(__pyx_k_initializing), 0, 0, 1, 1},
    {&__pyx_n_s_int, __pyx_k_int, sizeof(__pyx_k_int), 0, 0, 1, 1},
    {&__pyx_n_s_is_coroutine, __pyx_k_is_coroutine, sizeof(__pyx_k_is_coroutine), 0, 0, 1, 1},
    {&__pyx_kp_u_js_datr, __pyx_k_js_datr, sizeof(__pyx_k_js_datr), 0, 1, 0, 0},
    {&__pyx_n_s_js_datr_2, __pyx_k_js_datr_2, sizeof(__pyx_k_js_datr_2), 0, 0, 1, 1},
    {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
    {&__pyx_n_u_lgndim, __pyx_k_lgndim, sizeof(__pyx_k_lgndim), 0, 1, 0, 1},
    {&__pyx_n_s_loads, __pyx_k_loads, sizeof(__pyx_k_loads), 0, 0, 1, 1},
    {&__pyx_n_s_locale, __pyx_k_locale, sizeof(__pyx_k_locale), 0, 0, 1, 1},
    {&__pyx_n_u_locale, __pyx_k_locale, sizeof(__pyx_k_locale), 0, 1, 0, 1},
    {&__pyx_kp_u_login, __pyx_k_login, sizeof(__pyx_k_login), 0, 1, 0, 0},
    {&__pyx_n_u_login_2, __pyx_k_login_2, sizeof(__pyx_k_login_2), 0, 1, 0, 1},
    {&__pyx_n_u_login_form, __pyx_k_login_form, sizeof(__pyx_k_login_form), 0, 1, 0, 1},
    {&__pyx_n_s_login_name, __pyx_k_login_name, sizeof(__pyx_k_login_name), 0, 0, 1, 1},
    {&__pyx_kp_u_login_password, __pyx_k_login_password, sizeof(__pyx_k_login_password), 0, 1, 0, 0},
    {&__pyx_n_u_m_pixel_ratio, __pyx_k_m_pixel_ratio, sizeof(__pyx_k_m_pixel_ratio), 0, 1, 0, 1},
    {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
    {&__pyx_kp_s_mtf_app_controllers_bruteforce_l, __pyx_k_mtf_app_controllers_bruteforce_l, sizeof(__pyx_k_mtf_app_controllers_bruteforce_l), 0, 0, 1, 0},
    {&__pyx_n_s_mtf_config, __pyx_k_mtf_config, sizeof(__pyx_k_mtf_config), 0, 0, 1, 1},
    {&__pyx_n_s_mtf_module, __pyx_k_mtf_module, sizeof(__pyx_k_mtf_module), 0, 0, 1, 1},
    {&__pyx_n_s_mtf_module_http_bs4, __pyx_k_mtf_module_http_bs4, sizeof(__pyx_k_mtf_module_http_bs4), 0, 0, 1, 1},
    {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
    {&__pyx_n_u_other, __pyx_k_other, sizeof(__pyx_k_other), 0, 1, 0, 1},
    {&__pyx_n_u_pass, __pyx_k_pass, sizeof(__pyx_k_pass), 0, 1, 0, 1},
    {&__pyx_n_s_password, __pyx_k_password, sizeof(__pyx_k_password), 0, 0, 1, 1},
    {&__pyx_n_s_payload, __pyx_k_payload, sizeof(__pyx_k_payload), 0, 0, 1, 1},
    {&__pyx_n_u_payload, __pyx_k_payload, sizeof(__pyx_k_payload), 0, 1, 0, 1},
    {&__pyx_n_u_persistent, __pyx_k_persistent, sizeof(__pyx_k_persistent), 0, 1, 0, 1},
    {&__pyx_n_s_post, __pyx_k_post, sizeof(__pyx_k_post), 0, 0, 1, 1},
    {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
    {&__pyx_n_s_re, __pyx_k_re, sizeof(__pyx_k_re), 0, 0, 1, 1},
    {&__pyx_n_s_redirect_url, __pyx_k_redirect_url, sizeof(__pyx_k_redirect_url), 0, 0, 1, 1},
    {&__pyx_n_u_referer, __pyx_k_referer, sizeof(__pyx_k_referer), 0, 1, 0, 1},
    {&__pyx_n_s_replace, __pyx_k_replace, sizeof(__pyx_k_replace), 0, 0, 1, 1},
    {&__pyx_n_s_requests_exceptions, __pyx_k_requests_exceptions, sizeof(__pyx_k_requests_exceptions), 0, 0, 1, 1},
    {&__pyx_n_s_response, __pyx_k_response, sizeof(__pyx_k_response), 0, 0, 1, 1},
    {&__pyx_n_s_results, __pyx_k_results, sizeof(__pyx_k_results), 0, 0, 1, 1},
    {&__pyx_n_s_retries, __pyx_k_retries, sizeof(__pyx_k_retries), 0, 0, 1, 1},
    {&__pyx_n_s_save_session, __pyx_k_save_session, sizeof(__pyx_k_save_session), 0, 0, 1, 1},
    {&__pyx_n_s_screen_sizes, __pyx_k_screen_sizes, sizeof(__pyx_k_screen_sizes), 0, 0, 1, 1},
    {&__pyx_n_u_screen_sizes, __pyx_k_screen_sizes, sizeof(__pyx_k_screen_sizes), 0, 1, 0, 1},
    {&__pyx_n_s_search, __pyx_k_search, sizeof(__pyx_k_search), 0, 0, 1, 1},
    {&__pyx_kp_u_sec_fetch_user, __pyx_k_sec_fetch_user, sizeof(__pyx_k_sec_fetch_user), 0, 1, 0, 0},
    {&__pyx_n_s_session, __pyx_k_session, sizeof(__pyx_k_session), 0, 0, 1, 1},
    {&__pyx_n_s_spec, __pyx_k_spec, sizeof(__pyx_k_spec), 0, 0, 1, 1},
    {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
    {&__pyx_n_u_status, __pyx_k_status, sizeof(__pyx_k_status), 0, 1, 0, 1},
    {&__pyx_n_s_str, __pyx_k_str, sizeof(__pyx_k_str), 0, 0, 1, 1},
    {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
    {&__pyx_n_s_text, __pyx_k_text, sizeof(__pyx_k_text), 0, 0, 1, 1},
    {&__pyx_n_u_timezone, __pyx_k_timezone, sizeof(__pyx_k_timezone), 0, 1, 0, 1},
    {&__pyx_n_u_u, __pyx_k_u, sizeof(__pyx_k_u), 0, 1, 0, 1},
    {&__pyx_n_u_ua, __pyx_k_ua, sizeof(__pyx_k_ua), 0, 1, 0, 1},
    {&__pyx_n_s_uniform, __pyx_k_uniform, sizeof(__pyx_k_uniform), 0, 0, 1, 1},
    {&__pyx_n_s_unquote, __pyx_k_unquote, sizeof(__pyx_k_unquote), 0, 0, 1, 1},
    {&__pyx_n_s_update, __pyx_k_update, sizeof(__pyx_k_update), 0, 0, 1, 1},
    {&__pyx_kp_u_upgrade_insecure_requests, __pyx_k_upgrade_insecure_requests, sizeof(__pyx_k_upgrade_insecure_requests), 0, 1, 0, 0},
    {&__pyx_n_s_urlencode, __pyx_k_urlencode, sizeof(__pyx_k_urlencode), 0, 0, 1, 1},
    {&__pyx_n_s_urllib3_exceptions, __pyx_k_urllib3_exceptions, sizeof(__pyx_k_urllib3_exceptions), 0, 0, 1, 1},
    {&__pyx_n_s_urllib_parse, __pyx_k_urllib_parse, sizeof(__pyx_k_urllib_parse), 0, 0, 1, 1},
    {&__pyx_n_s_user_agent, __pyx_k_user_agent, sizeof(__pyx_k_user_agent), 0, 0, 1, 1},
    {&__pyx_kp_u_user_agent_2, __pyx_k_user_agent_2, sizeof(__pyx_k_user_agent_2), 0, 1, 0, 0},
    {&__pyx_n_s_userid, __pyx_k_userid, sizeof(__pyx_k_userid), 0, 0, 1, 1},
    {&__pyx_n_u_userid, __pyx_k_userid, sizeof(__pyx_k_userid), 0, 1, 0, 1},
    {&__pyx_n_s_utils, __pyx_k_utils, sizeof(__pyx_k_utils), 0, 0, 1, 1},
    {&__pyx_kp_u_w, __pyx_k_w, sizeof(__pyx_k_w), 0, 1, 0, 0},
    {&__pyx_n_s_wd, __pyx_k_wd, sizeof(__pyx_k_wd), 0, 0, 1, 1},
    {&__pyx_n_u_wd, __pyx_k_wd, sizeof(__pyx_k_wd), 0, 1, 0, 1},
    {&__pyx_n_u_web_messenger, __pyx_k_web_messenger, sizeof(__pyx_k_web_messenger), 0, 1, 0, 1},
    {&__pyx_n_u_x, __pyx_k_x, sizeof(__pyx_k_x), 0, 1, 0, 1},
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

   
  __pyx_tuple_ = PyTuple_Pack(2, __pyx_int_1900, __pyx_int_2200); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 32, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple_);
  __Pyx_GIVEREF(__pyx_tuple_);
  __pyx_tuple__2 = PyTuple_Pack(2, __pyx_int_860, __pyx_int_1000); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 32, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

   
  __pyx_tuple__3 = PyTuple_Pack(2, __pyx_kp_u_content_type, __pyx_kp_u_content_length); if (unlikely(!__pyx_tuple__3)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__3);
  __Pyx_GIVEREF(__pyx_tuple__3);

   
  __pyx_tuple__7 = PyTuple_Pack(2, __pyx_kp_u__5, __pyx_n_u__6); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);

   
  __pyx_tuple__9 = PyTuple_Pack(2, __pyx_n_u_Location, __pyx_kp_u__8); if (unlikely(!__pyx_tuple__9)) __PYX_ERR(0, 103, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__9);
  __Pyx_GIVEREF(__pyx_tuple__9);

   
  __pyx_tuple__12 = PyTuple_Pack(20, __pyx_n_s_userid, __pyx_n_s_password, __pyx_n_s_retries, __pyx_n_s_user_agent, __pyx_n_s_save_session, __pyx_n_s_results, __pyx_n_s_domain, __pyx_n_s_payload, __pyx_n_s_http, __pyx_n_s_screen_sizes, __pyx_n_s_session, __pyx_n_s_h_2, __pyx_n_s_locale, __pyx_n_s_response, __pyx_n_s_form, __pyx_n_s_js_datr_2, __pyx_n_s_wd, __pyx_n_s_cookie_2, __pyx_n_s_redirect_url, __pyx_n_s_checkpoint); if (unlikely(!__pyx_tuple__12)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__12);
  __Pyx_GIVEREF(__pyx_tuple__12);
  __pyx_codeobj__13 = (PyObject*)__Pyx_PyCode_New(5, 0, 0, 20, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__12, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_bruteforce_l, __pyx_n_s_attempt, 16, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__13)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitConstants(void) {
  __pyx_umethod_PyUnicode_Type_format.type = (PyObject*)&PyUnicode_Type;
  __pyx_umethod_PyUnicode_Type_format.method_name = &__pyx_n_s_format;
  if (__Pyx_CreateStringTabAndInitStrings() < 0) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_2 = PyInt_FromLong(2); if (unlikely(!__pyx_int_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_48 = PyInt_FromLong(48); if (unlikely(!__pyx_int_48)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_860 = PyInt_FromLong(860); if (unlikely(!__pyx_int_860)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1000 = PyInt_FromLong(1000); if (unlikely(!__pyx_int_1000)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1900 = PyInt_FromLong(1900); if (unlikely(!__pyx_int_1900)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_2200 = PyInt_FromLong(2200); if (unlikely(!__pyx_int_2200)) __PYX_ERR(0, 1, __pyx_L1_error)
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
static int __pyx_pymod_exec_web_messenger(PyObject* module);  
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_web_messenger},
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
      "web_messenger",
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
__Pyx_PyMODINIT_FUNC initweb_messenger(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC initweb_messenger(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_web_messenger(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC PyInit_web_messenger(void)
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


static CYTHON_SMALL_CODE int __pyx_pymod_exec_web_messenger(PyObject *__pyx_pyinit_module)
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
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'web_messenger' has already been imported. Re-initialisation is not supported.");
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
  __pyx_m = Py_InitModule4("web_messenger", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
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
  __pyx_b = __Pyx_PyImport_AddModuleRef(__Pyx_BUILTIN_MODULE_NAME); if (unlikely(!__pyx_b)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_cython_runtime = __Pyx_PyImport_AddModuleRef((const char *) "cython_runtime"); if (unlikely(!__pyx_cython_runtime)) __PYX_ERR(0, 1, __pyx_L1_error)
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
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_web_messenger(void)", 0);
  if (__Pyx_check_binary_version(__PYX_LIMITED_VERSION_HEX, __Pyx_get_runtime_version(), CYTHON_COMPILING_IN_LIMITED_API) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
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
  if (__pyx_module_is_main_controllers__bruteforce__login__web_messenger) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "controllers.bruteforce.login.web_messenger")) {
      if (unlikely((PyDict_SetItemString(modules, "controllers.bruteforce.login.web_messenger", __pyx_m) < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
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

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_re, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_re, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_json, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_json, __pyx_t_2) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_random, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_2) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_base64, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_base64, __pyx_t_2) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_Variables);
  __Pyx_GIVEREF(__pyx_n_s_Variables);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Variables)) __PYX_ERR(0, 6, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_get_platform_header_from_userage);
  __Pyx_GIVEREF(__pyx_n_s_get_platform_header_from_userage);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_get_platform_header_from_userage)) __PYX_ERR(0, 6, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s__8, __pyx_t_2, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Variables); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Variables, __pyx_t_2) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_get_platform_header_from_userage); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_platform_header_from_userage, __pyx_t_2) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_app);
  __Pyx_GIVEREF(__pyx_n_s_app);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_app)) __PYX_ERR(0, 7, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_mtf_config, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_app); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_app, __pyx_t_3) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_utils);
  __Pyx_GIVEREF(__pyx_n_s_utils);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_utils)) __PYX_ERR(0, 8, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_mtf_module, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_utils); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_utils, __pyx_t_2) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_InvalidChunkLength);
  __Pyx_GIVEREF(__pyx_n_s_InvalidChunkLength);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_InvalidChunkLength)) __PYX_ERR(0, 9, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_urllib3_exceptions, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_InvalidChunkLength); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_InvalidChunkLength, __pyx_t_3) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_Http);
  __Pyx_GIVEREF(__pyx_n_s_Http);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_Http)) __PYX_ERR(0, 10, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_BS4);
  __Pyx_GIVEREF(__pyx_n_s_BS4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_BS4)) __PYX_ERR(0, 10, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_mtf_module_http_bs4, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Http); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Http, __pyx_t_2) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_BS4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_BS4, __pyx_t_2) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_unquote);
  __Pyx_GIVEREF(__pyx_n_s_unquote);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_unquote)) __PYX_ERR(0, 11, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_urlencode);
  __Pyx_GIVEREF(__pyx_n_s_urlencode);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 1, __pyx_n_s_urlencode)) __PYX_ERR(0, 11, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_urllib_parse, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_unquote); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_unquote, __pyx_t_3) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_urlencode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_urlencode, __pyx_t_3) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_ConnectionError);
  __Pyx_GIVEREF(__pyx_n_s_ConnectionError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_ConnectionError)) __PYX_ERR(0, 12, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_Timeout);
  __Pyx_GIVEREF(__pyx_n_s_Timeout);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 1, __pyx_n_s_Timeout)) __PYX_ERR(0, 12, __pyx_L1_error);
  __Pyx_INCREF(__pyx_n_s_ChunkedEncodingError);
  __Pyx_GIVEREF(__pyx_n_s_ChunkedEncodingError);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 2, __pyx_n_s_ChunkedEncodingError)) __PYX_ERR(0, 12, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_requests_exceptions, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_ConnectionError); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ConnectionError, __pyx_t_2) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Timeout); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Timeout, __pyx_t_2) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_ChunkedEncodingError); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ChunkedEncodingError, __pyx_t_2) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_NAME, __pyx_n_u_web_messenger) < 0) __PYX_ERR(0, 14, __pyx_L1_error)

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_userid, __pyx_n_s_str) < 0) __PYX_ERR(0, 16, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_password, __pyx_n_s_str) < 0) __PYX_ERR(0, 16, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_retries, __pyx_n_s_int) < 0) __PYX_ERR(0, 16, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_user_agent, __pyx_n_s_str) < 0) __PYX_ERR(0, 16, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_save_session, __pyx_n_s_bool) < 0) __PYX_ERR(0, 16, __pyx_L1_error)
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_10bruteforce_5login_13web_messenger_1attempt, 0, __pyx_n_s_attempt, NULL, __pyx_n_s_controllers_bruteforce_login_web, __pyx_d, ((PyObject *)__pyx_codeobj__13)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (!__Pyx_CyFunction_InitDefaults(__pyx_t_2, sizeof(__pyx_defaults), 2)) __PYX_ERR(0, 16, __pyx_L1_error)

   
  if (!(likely(__Pyx_Py3Int_CheckExact(__pyx_int_1)) || __Pyx_RaiseUnexpectedTypeError("int", __pyx_int_1))) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_INCREF(__pyx_int_1);
  __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_t_2)->__pyx_arg_retries = ((PyObject*)__pyx_int_1);
  __Pyx_GIVEREF(__pyx_int_1);

   
  __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_utils); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_RandomUserAgent); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_desktop); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_CallNoArg(__pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (!(likely(PyUnicode_CheckExact(__pyx_t_5))||((__pyx_t_5) == Py_None) || __Pyx_RaiseUnexpectedTypeError("unicode", __pyx_t_5))) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_CyFunction_Defaults(__pyx_defaults, __pyx_t_2)->__pyx_arg_user_agent = ((PyObject*)__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_5);
  __pyx_t_5 = 0;
  __Pyx_CyFunction_SetDefaultsGetter(__pyx_t_2, __pyx_pf_11controllers_10bruteforce_5login_13web_messenger_2__defaults__);
  __Pyx_CyFunction_SetAnnotationsDict(__pyx_t_2, __pyx_t_3);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_attempt, __pyx_t_2) < 0) __PYX_ERR(0, 16, __pyx_L1_error)
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
  if (__pyx_m) {
    if (__pyx_d && stringtab_initialized) {
      __Pyx_AddTraceback("init controllers.bruteforce.login.web_messenger", __pyx_clineno, __pyx_lineno, __pyx_filename);
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
    PyErr_SetString(PyExc_ImportError, "init controllers.bruteforce.login.web_messenger");
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
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
CYTHON_UNUSED static PyObject *__Pyx_KwargsAsDict_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues) {
    Py_ssize_t i, nkwargs = PyTuple_GET_SIZE(kwnames);
    PyObject *dict;
    dict = PyDict_New();
    if (unlikely(!dict))
        return NULL;
    for (i=0; i<nkwargs; i++) {
        PyObject *key = PyTuple_GET_ITEM(kwnames, i);
        if (unlikely(PyDict_SetItem(dict, key, kwvalues[i]) < 0))
            goto bad;
    }
    return dict;
bad:
    Py_DECREF(dict);
    return NULL;
}
#endif
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
    Py_XDECREF(type);
    Py_XDECREF(tb);
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

 
#if __PYX_LIMITED_VERSION_HEX < 0x030d00A1
static void __Pyx_PyObject_GetAttrStr_ClearAttributeError(void) {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    if (likely(__Pyx_PyErr_ExceptionMatches(PyExc_AttributeError)))
        __Pyx_PyErr_Clear();
}
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name) {
    PyObject *result;
#if __PYX_LIMITED_VERSION_HEX >= 0x030d00A1
    (void) PyObject_GetOptionalAttr(obj, attr_name, &result);
    return result;
#else
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
#endif
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
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && PY_VERSION_HEX < 0x030d0000
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
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object"))) {
        return NULL;
    }
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object"))) {
        return NULL;
    }
    #endif
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
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object")))
        return NULL;
    #endif
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
    cfunc = __Pyx_CyOrPyCFunction_GET_FUNCTION(func);
    self = __Pyx_CyOrPyCFunction_GET_SELF(func);
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object")))
        return NULL;
    #endif
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

 
#if PY_VERSION_HEX < 0x03090000 || CYTHON_COMPILING_IN_LIMITED_API
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
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t _nargs, PyObject *kwargs) {
    Py_ssize_t nargs = __Pyx_PyVectorcall_NARGS(_nargs);
#if CYTHON_COMPILING_IN_CPYTHON
    if (nargs == 0 && kwargs == NULL) {
        if (__Pyx_CyOrPyCFunction_Check(func) && likely( __Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_NOARGS))
            return __Pyx_PyObject_CallMethO(func, NULL);
    }
    else if (nargs == 1 && kwargs == NULL) {
        if (__Pyx_CyOrPyCFunction_Check(func) && likely( __Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_O))
            return __Pyx_PyObject_CallMethO(func, args[0]);
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
    if (kwargs == NULL) {
        #if CYTHON_VECTORCALL
        #if PY_VERSION_HEX < 0x03090000
        vectorcallfunc f = _PyVectorcall_Function(func);
        #else
        vectorcallfunc f = PyVectorcall_Function(func);
        #endif
        if (f) {
            return f(func, args, (size_t)nargs, NULL);
        }
        #elif defined(__Pyx_CyFunction_USED) && CYTHON_BACKPORT_VECTORCALL
        if (__Pyx_CyFunction_CheckExact(func)) {
            __pyx_vectorcallfunc f = __Pyx_CyFunction_func_vectorcall(func);
            if (f) return f(func, args, (size_t)nargs, NULL);
        }
        #endif
    }
    if (nargs == 0) {
        return __Pyx_PyObject_Call(func, __pyx_empty_tuple, kwargs);
    }
    #if PY_VERSION_HEX >= 0x03090000 && !CYTHON_COMPILING_IN_LIMITED_API
    return PyObject_VectorcallDict(func, args, (size_t)nargs, kwargs);
    #else
    return __Pyx_PyObject_FastCall_fallback(func, args, (size_t)nargs, kwargs);
    #endif
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

 
static void __Pyx_RaiseMappingExpectedError(PyObject* arg) {
    __Pyx_TypeName arg_type_name = __Pyx_PyType_GetName(Py_TYPE(arg));
    PyErr_Format(PyExc_TypeError,
        "'" __Pyx_FMT_TYPENAME "' object is not a mapping", arg_type_name);
    __Pyx_DECREF_TypeName(arg_type_name);
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
    if (is_list || !PyMapping_Check(o)) {
        return PySequence_GetItem(o, i);
    }
#endif
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}

 
static PyObject *__Pyx_SelflessCall(PyObject *method, PyObject *args, PyObject *kwargs) {
    PyObject *result;
    PyObject *selfless_args = PyTuple_GetSlice(args, 1, PyTuple_Size(args));
    if (unlikely(!selfless_args)) return NULL;
    result = PyObject_Call(method, selfless_args, kwargs);
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
    if (likely(!__Pyx_CyOrPyCFunction_Check(method)))
    #endif
    {
        PyMethodDescrObject *descr = (PyMethodDescrObject*) method;
        target->func = descr->d_method->ml_meth;
        target->flag = descr->d_method->ml_flags & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_STACKLESS);
    } else
#endif
#if CYTHON_COMPILING_IN_PYPY
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
    PyObject *arg[2] = {NULL, NULL};
    return __Pyx_PyObject_FastCall(func, arg + 1, 0 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
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
    PyObject *result;
    if (unlikely(!s)) return NULL;
    result = PyObject_Format(s, f);
    Py_DECREF(s);
    return result;
}

 
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      Py_UCS4 max_char) {
#if CYTHON_USE_UNICODE_INTERNALS && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    PyObject *result_uval;
    int result_ukind, kind_shift;
    Py_ssize_t i, char_pos;
    void *result_udata;
    CYTHON_MAYBE_UNUSED_VAR(max_char);
#if CYTHON_PEP393_ENABLED
    result_uval = PyUnicode_New(result_ulength, max_char);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = (max_char <= 255) ? PyUnicode_1BYTE_KIND : (max_char <= 65535) ? PyUnicode_2BYTE_KIND : PyUnicode_4BYTE_KIND;
    kind_shift = (result_ukind == PyUnicode_4BYTE_KIND) ? 2 : result_ukind - 1;
    result_udata = PyUnicode_DATA(result_uval);
#else
    result_uval = PyUnicode_FromUnicode(NULL, result_ulength);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = sizeof(Py_UNICODE);
    kind_shift = (result_ukind == 4) ? 2 : result_ukind - 1;
    result_udata = PyUnicode_AS_UNICODE(result_uval);
#endif
    assert(kind_shift == 2 || kind_shift == 1 || kind_shift == 0);
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
        if (unlikely((PY_SSIZE_T_MAX >> kind_shift) - ulength < char_pos))
            goto overflow;
        ukind = __Pyx_PyUnicode_KIND(uval);
        udata = __Pyx_PyUnicode_DATA(uval);
        if (!CYTHON_PEP393_ENABLED || ukind == result_ukind) {
            memcpy((char *)result_udata + (char_pos << kind_shift), udata, (size_t) (ulength << kind_shift));
        } else {
            #if PY_VERSION_HEX >= 0x030d0000
            if (unlikely(PyUnicode_CopyCharacters(result_uval, char_pos, uval, 0, ulength) < 0)) goto bad;
            #elif CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030300F0 || defined(_PyUnicode_FastCopyCharacters)
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
    CYTHON_UNUSED_VAR(max_char);
    CYTHON_UNUSED_VAR(result_ulength);
    CYTHON_UNUSED_VAR(value_count);
    return PyUnicode_Join(__pyx_empty_unicode, value_tuple);
#endif
}

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_SubtractObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check) {
    CYTHON_MAYBE_UNUSED_VAR(intval);
    CYTHON_MAYBE_UNUSED_VAR(inplace);
    CYTHON_UNUSED_VAR(zerodivision_check);
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long x;
        long a = PyInt_AS_LONG(op1);
        
            x = (long)((unsigned long)a - (unsigned long)b);
            if (likely((x^a) >= 0 || (x^~b) >= 0))
                return PyInt_FromLong(x);
            return PyLong_Type.tp_as_number->nb_subtract(op1, op2);
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
        if (unlikely(__Pyx_PyLong_IsZero(op1))) {
            return PyLong_FromLong(-intval);
        }
        if (likely(__Pyx_PyLong_IsCompact(op1))) {
            a = __Pyx_PyLong_CompactValue(op1);
        } else {
            const digit* digits = __Pyx_PyLong_Digits(op1);
            const Py_ssize_t size = __Pyx_PyLong_SignedDigitCount(op1);
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
                default: return PyLong_Type.tp_as_number->nb_subtract(op1, op2);
            }
        }
                x = a - b;
            return PyLong_FromLong(x);
#ifdef HAVE_LONG_LONG
        long_long:
                llx = lla - llb;
            return PyLong_FromLongLong(llx);
#endif
        
        
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
#if CYTHON_COMPILING_IN_LIMITED_API
        double a = __pyx_PyFloat_AsDouble(op1);
#else
        double a = PyFloat_AS_DOUBLE(op1);
#endif
            double result;
            
            PyFPE_START_PROTECT("subtract", return NULL)
            result = ((double)a) - (double)b;
            PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceSubtract : PyNumber_Subtract)(op1, op2);
}
#endif

 
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

 
static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname) {
    PyErr_Format(PyExc_UnboundLocalError, "local variable '%s' referenced before assignment", varname);
}

 
static int
__Pyx_RaiseUnexpectedTypeError(const char *expected, PyObject *obj)
{
    __Pyx_TypeName obj_type_name = __Pyx_PyType_GetName(Py_TYPE(obj));
    PyErr_Format(PyExc_TypeError, "Expected %s, got " __Pyx_FMT_TYPENAME,
                 expected, obj_type_name);
    __Pyx_DECREF_TypeName(obj_type_name);
    return 0;
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
        if (!meth) {
            PyErr_Clear();
        } else {
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
            if (strchr(__Pyx_MODULE_NAME, '.') != NULL) {
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
    PyObject *module, *from_list, *star = __pyx_n_s__10;
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
        module_dot = PyUnicode_Concat(module_name, __pyx_kp_u__11);
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
    return __Pyx_PyImport_AddModuleRef((char*) __PYX_ABI_MODULE_NAME);
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

 
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_INLINE int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc) {
    if (__Pyx_CyFunction_Check(func)) {
        return PyCFunction_GetFunction(((__pyx_CyFunctionObject*)func)->func) == (PyCFunction) cfunc;
    } else if (PyCFunction_Check(func)) {
        return PyCFunction_GetFunction(func) == (PyCFunction) cfunc;
    }
    return 0;
}
#else
static CYTHON_INLINE int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc) {
    return __Pyx_CyOrPyCFunction_Check(func) && __Pyx_CyOrPyCFunction_GET_FUNCTION(func) == (PyCFunction) cfunc;
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
    return ((__Pyx_PyCFunctionFastWithKeywords)(void(*)(void))def->ml_meth)(self, args, nargs, kwnames);
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
    PyErr_Clear();
    #if __PYX_LIMITED_VERSION_HEX < 0x030780000
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
    #else
    return NULL;
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
#if !CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030d0000
        return _PyLong_FromByteArray(bytes, sizeof(long),
                                     little, !is_unsigned);
#else
        PyObject *from_bytes, *result = NULL;
        PyObject *py_bytes = NULL, *arg_tuple = NULL, *kwds = NULL, *order_str = NULL;
        from_bytes = PyObject_GetAttrString((PyObject*)&PyLong_Type, "from_bytes");
        if (!from_bytes) return NULL;
        py_bytes = PyBytes_FromStringAndSize((char*)bytes, sizeof(long));
        if (!py_bytes) goto limited_bad;
        order_str = PyUnicode_FromString(little ? "little" : "big");
        if (!order_str) goto limited_bad;
        arg_tuple = PyTuple_Pack(2, py_bytes, order_str);
        if (!arg_tuple) goto limited_bad;
        if (!is_unsigned) {
            kwds = PyDict_New();
            if (!kwds) goto limited_bad;
            if (PyDict_SetItemString(kwds, "signed", __Pyx_NewRef(Py_True))) goto limited_bad;
        }
        result = PyObject_Call(from_bytes, arg_tuple, kwds);
        limited_bad:
        Py_XDECREF(kwds);
        Py_XDECREF(arg_tuple);
        Py_XDECREF(order_str);
        Py_XDECREF(py_bytes);
        Py_XDECREF(from_bytes);
        return result;
#endif
    }
}

 
#if CYTHON_COMPILING_IN_LIMITED_API
static __Pyx_TypeName
__Pyx_PyType_GetName(PyTypeObject* tp)
{
    PyObject *name = __Pyx_PyObject_GetAttrStr((PyObject *)tp,
                                               __pyx_n_s_name);
    if (unlikely(name == NULL) || unlikely(!PyUnicode_Check(name))) {
        PyErr_Clear();
        Py_XDECREF(name);
        name = __Pyx_NewRef(__pyx_n_s__14);
    }
    return name;
}
#endif

 
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
#if PY_VERSION_HEX < 0x030d0000 && !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
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
#if PY_VERSION_HEX < 0x030d0000 && !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
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

 
static unsigned long __Pyx_get_runtime_version(void) {
#if __PYX_LIMITED_VERSION_HEX >= 0x030B00A4
    return Py_Version & ~0xFFUL;
#else
    const char* rt_version = Py_GetVersion();
    unsigned long version = 0;
    unsigned long factor = 0x01000000UL;
    unsigned int digit = 0;
    int i = 0;
    while (factor) {
        while ('0' <= rt_version[i] && rt_version[i] <= '9') {
            digit = digit * 10 + (unsigned int) (rt_version[i] - '0');
            ++i;
        }
        version += factor * digit;
        if (rt_version[i] != '.')
            break;
        digit = 0;
        factor >>= 8;
        ++i;
    }
    return version;
#endif
}
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer) {
    const unsigned long MAJOR_MINOR = 0xFFFF0000UL;
    if ((rt_version & MAJOR_MINOR) == (ct_version & MAJOR_MINOR))
        return 0;
    if (likely(allow_newer && (rt_version & MAJOR_MINOR) > (ct_version & MAJOR_MINOR)))
        return 1;
    {
        char message[200];
        PyOS_snprintf(message, sizeof(message),
                      "compile time Python version %d.%d "
                      "of module '%.100s' "
                      "%s "
                      "runtime version %d.%d",
                       (int) (ct_version >> 24), (int) ((ct_version >> 16) & 0xFF),
                       __Pyx_MODULE_NAME,
                       (allow_newer) ? "was newer than" : "does not match",
                       (int) (rt_version >> 24), (int) ((rt_version >> 16) & 0xFF)
       );
        return PyErr_WarnEx(NULL, message, 1);
    }
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

#include <string.h>
static CYTHON_INLINE Py_ssize_t __Pyx_ssize_strlen(const char *s) {
    size_t len = strlen(s);
    if (unlikely(len > (size_t) PY_SSIZE_T_MAX)) {
        PyErr_SetString(PyExc_OverflowError, "byte string is too long");
        return -1;
    }
    return (Py_ssize_t) len;
}
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (unlikely(len < 0)) return NULL;
    return __Pyx_PyUnicode_FromStringAndSize(c_str, len);
}
static CYTHON_INLINE PyObject* __Pyx_PyByteArray_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (unlikely(len < 0)) return NULL;
    return PyByteArray_FromStringAndSize(c_str, len);
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
