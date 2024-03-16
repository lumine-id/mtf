 

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
#define CYTHON_ABI "3_0_7" __PYX_EXTRA_ABI_MODULE_NAME
#define __PYX_ABI_MODULE_NAME "_cython_" CYTHON_ABI
#define __PYX_TYPE_MODULE_PREFIX __PYX_ABI_MODULE_NAME "."
#define CYTHON_HEX_VERSION 0x030007F0
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
#if PY_VERSION_HEX >= 0x030d00A1
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

#define __PYX_HAVE__controllers__ig__check_result
#define __PYX_HAVE_API__controllers__ig__check_result
 
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
  "mtf/app/controllers/ig/check_result.py",
};
 
 
#ifndef __PYX_FORCE_INIT_THREADS
  #define __PYX_FORCE_INIT_THREADS 0
#endif

 
 
 

 
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok;
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr;
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp;
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr;

 
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok {
  PyObject_HEAD
  PyObject *__pyx_v_rich;
};


 
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr {
  PyObject_HEAD
  PyObject *__pyx_genexpr_arg_0;
  PyObject *__pyx_v_f;
  PyObject *__pyx_v_v;
};


 
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp {
  PyObject_HEAD
  PyObject *__pyx_v_rich;
};


 
struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr {
  PyObject_HEAD
  PyObject *__pyx_genexpr_arg_0;
  PyObject *__pyx_v_f;
  PyObject *__pyx_v_v;
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

 
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);

 
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject *const *kwvalues,
    PyObject **argnames[],
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,
    const char* function_name);

 
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);

 
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

 
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
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
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);
#endif

 
#define __Pyx_PyObject_FastCall(func, args, nargs)  __Pyx_PyObject_FastCallDict(func, args, (size_t)(nargs), NULL)
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs);

 
static CYTHON_INLINE int __Pyx_PyInt_BoolEqObjC(PyObject *op1, PyObject *op2, long intval, long inplace);

 
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key);
#define __Pyx_PyObject_Dict_GetItem(obj, name)\
    (likely(PyDict_CheckExact(obj)) ?\
     __Pyx_PyDict_GetItem(obj, name) : PyObject_GetItem(obj, name))
#else
#define __Pyx_PyDict_GetItem(d, key) PyObject_GetItem(d, key)
#define __Pyx_PyObject_Dict_GetItem(obj, name)  PyObject_GetItem(obj, name)
#endif

 
#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX < 0x02070600 && !defined(Py_OptimizeFlag)
  #define __Pyx_init_assertions_enabled()  (0)
  #define __pyx_assertions_enabled()  (1)
#elif CYTHON_COMPILING_IN_LIMITED_API  ||  (CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030C0000)
  static int __pyx_assertions_enabled_flag;
  #define __pyx_assertions_enabled() (__pyx_assertions_enabled_flag)
  static int __Pyx_init_assertions_enabled(void) {
    PyObject *builtins, *debug, *debug_str;
    int flag;
    builtins = PyEval_GetBuiltins();
    if (!builtins) goto bad;
    debug_str = PyUnicode_FromStringAndSize("__debug__", 9);
    if (!debug_str) goto bad;
    debug = PyObject_GetItem(builtins, debug_str);
    Py_DECREF(debug_str);
    if (!debug) goto bad;
    flag = PyObject_IsTrue(debug);
    Py_DECREF(debug);
    if (flag == -1) goto bad;
    __pyx_assertions_enabled_flag = flag;
    return 0;
  bad:
    __pyx_assertions_enabled_flag = 1;
    return -1;
  }
#else
  #define __Pyx_init_assertions_enabled()  (0)
  #define __pyx_assertions_enabled()  (!Py_OptimizeFlag)
#endif

 
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

 
static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

 
static PyObject* __Pyx_PyObject_CallMethod0(PyObject* obj, PyObject* method_name);

 
static CYTHON_INLINE PyObject* __Pyx__PyObject_Pop(PyObject* L);
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE PyObject* __Pyx_PyList_Pop(PyObject* L);
#define __Pyx_PyObject_Pop(L) (likely(PyList_CheckExact(L)) ?\
    __Pyx_PyList_Pop(L) : __Pyx__PyObject_Pop(L))
#else
#define __Pyx_PyList_Pop(L)  __Pyx__PyObject_Pop(L)
#define __Pyx_PyObject_Pop(L)  __Pyx__PyObject_Pop(L)
#endif

 
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

 
static CYTHON_INLINE void __Pyx_RaiseClosureNameError(const char *varname);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatSimpleAndDecref(PyObject* s, PyObject* f);
static CYTHON_INLINE PyObject* __Pyx_PyObject_FormatAndDecref(PyObject* s, PyObject* f);

 
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
                                      Py_UCS4 max_char);

 
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
        likely(PyLong_CheckExact(s)) ? PyLong_Type.tp_repr(s) :\
        likely(PyFloat_CheckExact(s)) ? PyFloat_Type.tp_repr(s) :\
        PyObject_Format(s, f))
#else
    #define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        PyObject_Format(s, f))
#endif

 
#define __Pyx_PyObject_Str(obj)\
    (likely(PyString_CheckExact(obj)) ? __Pyx_NewRef(obj) : PyObject_Str(obj))

 
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_PyList_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len) & likely(len > (L->allocated >> 1))) {
        Py_INCREF(x);
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
        L->ob_item[len] = x;
        #else
        PyList_SET_ITEM(list, len, x);
        #endif
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_PyList_Append(L,x) PyList_Append(L,x)
#endif

 
static CYTHON_INLINE int __Pyx_IterFinish(void);

 
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

 
static CYTHON_INLINE void __Pyx_RaiseUnboundLocalError(const char *varname);

 
static void __Pyx_Generator_Replace_StopIteration(int in_async_gen);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(
        PyObject* obj, Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
        int has_cstart, int has_cstop, int wraparound);

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

 
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg);

 
static CYTHON_INLINE int __Pyx_PyObject_Append(PyObject* L, PyObject* x);

 
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

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_AddObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceAdd(op1, op2) : PyNumber_Add(op1, op2))
#endif

 
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

 
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_ListComp_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len)) {
        Py_INCREF(x);
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
        L->ob_item[len] = x;
        #else
        PyList_SET_ITEM(list, len, x);
        #endif
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_ListComp_Append(L,x) PyList_Append(L,x)
#endif

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_SubtractObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_SubtractObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceSubtract(op1, op2) : PyNumber_Subtract(op1, op2))
#endif

 
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject *key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
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

 
static PyObject* __Pyx_PEP560_update_bases(PyObject *bases);

 
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases);

 
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && PY_VERSION_HEX < 0x030d0000
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? _PyDict_SetItem_KnownHash(ns, name, value, ((PyASCIIObject *) name)->hash) : PyObject_SetItem(ns, name, value))
#elif CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? PyDict_SetItem(ns, name, value) : PyObject_SetItem(ns, name, value))
#else
#define __Pyx_SetNameInClass(ns, name, value)  PyObject_SetItem(ns, name, value)
#endif

 
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
#define __Pyx_ExceptionSwap(type, value, tb)  __Pyx__ExceptionSwap(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb);
#endif

 
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

 
static unsigned long __Pyx_get_runtime_version(void);
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer);

 
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);

 

 
 
 
#define __Pyx_MODULE_NAME "controllers.ig.check_result"
extern int __pyx_module_is_main_controllers__ig__check_result;
int __pyx_module_is_main_controllers__ig__check_result = 0;

 
 
static PyObject *__pyx_builtin_super;
static PyObject *__pyx_builtin_AssertionError;
static PyObject *__pyx_builtin_open;
static PyObject *__pyx_builtin_enumerate;
static PyObject *__pyx_builtin_range;
 
static const char __pyx_k_0[] = "0";
static const char __pyx_k_1[] = "1";
static const char __pyx_k_2[] = "2";
static const char __pyx_k_i[] = "i";
static const char __pyx_k_r[] = "r";
static const char __pyx_k_No[] = "No";
static const char __pyx_k__7[] = "";
static const char __pyx_k__8[] = "/";
static const char __pyx_k__9[] = "|";
static const char __pyx_k_cp[] = "cp";
static const char __pyx_k_gc[] = "gc";
static const char __pyx_k_ig[] = "ig";
static const char __pyx_k_ok[] = "ok";
static const char __pyx_k_os[] = "os";
static const char __pyx_k__17[] = "*";
static const char __pyx_k__18[] = ".";
static const char __pyx_k__30[] = "?";
static const char __pyx_k_acc[] = "acc";
static const char __pyx_k_add[] = "add";
static const char __pyx_k_all[] = "all";
static const char __pyx_k_ask[] = "ask";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_pop[] = "pop";
static const char __pyx_k_Base[] = "Base";
static const char __pyx_k_Nama[] = "Nama";
static const char __pyx_k_Path[] = "Path";
static const char __pyx_k_W_OK[] = "W_OK";
static const char __pyx_k_args[] = "args";
static const char __pyx_k_copy[] = "copy";
static const char __pyx_k_data[] = "data";
static const char __pyx_k_dict[] = "__dict__";
static const char __pyx_k_file[] = "file";
static const char __pyx_k_glob[] = "glob";
static const char __pyx_k_init[] = "__init__";
static const char __pyx_k_item[] = "item";
static const char __pyx_k_join[] = "join";
static const char __pyx_k_json[] = "json";
static const char __pyx_k_line[] = "line";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_move[] = "move";
static const char __pyx_k_name[] = "name";
static const char __pyx_k_node[] = "node";
static const char __pyx_k_open[] = "open";
static const char __pyx_k_path[] = "path";
static const char __pyx_k_read[] = "read";
static const char __pyx_k_rich[] = "rich";
static const char __pyx_k_root[] = "root";
static const char __pyx_k_self[] = "self";
static const char __pyx_k_send[] = "send";
static const char __pyx_k_show[] = "show";
static const char __pyx_k_spec[] = "__spec__";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_tree[] = "tree";
static const char __pyx_k_close[] = "close";
static const char __pyx_k_email[] = "email";
static const char __pyx_k_files[] = "files";
static const char __pyx_k_index[] = "index";
static const char __pyx_k_isdir[] = "isdir";
static const char __pyx_k_items[] = "items";
static const char __pyx_k_loads[] = "loads";
static const char __pyx_k_media[] = "media";
static const char __pyx_k_mkdir[] = "mkdir";
static const char __pyx_k_panel[] = "panel";
static const char __pyx_k_phone[] = "phone";
static const char __pyx_k_print[] = "print";
static const char __pyx_k_range[] = "range";
static const char __pyx_k_reset[] = "[reset]";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_style[] = "style";
static const char __pyx_k_super[] = "super";
static const char __pyx_k_table[] = "table";
static const char __pyx_k_theme[] = "[theme]";
static const char __pyx_k_throw[] = "throw";
static const char __pyx_k_title[] = "title";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_access[] = "access";
static const char __pyx_k_append[] = "append";
static const char __pyx_k_center[] = "center";
static const char __pyx_k_choice[] = "choice";
static const char __pyx_k_cookie[] = "cookie";
static const char __pyx_k_detail[] = "detail";
static const char __pyx_k_enable[] = "enable";
static const char __pyx_k_escape[] = "escape";
static const char __pyx_k_expand[] = "expand";
static const char __pyx_k_handle[] = "handle";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_kwargs[] = "kwargs";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_name_2[] = "__name__";
static const char __pyx_k_output[] = "output";
static const char __pyx_k_prompt[] = "prompt";
static const char __pyx_k_shutil[] = "shutil";
static const char __pyx_k_userid[] = "userid";
static const char __pyx_k_Pilihan[] = "Pilihan";
static const char __pyx_k_account[] = "account";
static const char __pyx_k_add_row[] = "add_row";
static const char __pyx_k_caption[] = "caption";
static const char __pyx_k_choices[] = "choices";
static const char __pyx_k_confirm[] = "confirm";
static const char __pyx_k_disable[] = "disable";
static const char __pyx_k_environ[] = "environ";
static const char __pyx_k_genexpr[] = "genexpr";
static const char __pyx_k_ig_back[] = "_ig_back";
static const char __pyx_k_justify[] = "justify";
static const char __pyx_k_parents[] = "parents";
static const char __pyx_k_pathlib[] = "pathlib";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_profile[] = "profile";
static const char __pyx_k_splited[] = "splited";
static const char __pyx_k_theme_1[] = "[theme]1";
static const char __pyx_k_theme_2[] = "[theme]2";
static const char __pyx_k_Hasil_CP[] = "Hasil CP";
static const char __pyx_k_Hasil_OK[] = "Hasil OK";
static const char __pyx_k_birthday[] = "birthday";
static const char __pyx_k_bold_red[] = "bold red";
static const char __pyx_k_copy_dir[] = "copy_dir";
static const char __pyx_k_copyfile[] = "copyfile";
static const char __pyx_k_encoding[] = "encoding";
static const char __pyx_k_exist_ok[] = "exist_ok";
static const char __pyx_k_move_dir[] = "move_dir";
static const char __pyx_k_password[] = "password";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_set_name[] = "__set_name__";
static const char __pyx_k_subtitle[] = "subtitle";
static const char __pyx_k_MTF_cp_ig[] = "MTF/cp/ig";
static const char __pyx_k_MTF_ok_ig[] = "MTF/ok/ig";
static const char __pyx_k_Nama_File[] = "Nama File";
static const char __pyx_k_enumerate[] = "enumerate";
static const char __pyx_k_followers[] = "followers";
static const char __pyx_k_following[] = "following";
static const char __pyx_k_ig_back_2[] = "ig_back";
static const char __pyx_k_isenabled[] = "isenabled";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_show_info[] = "show_info";
static const char __pyx_k_Controller[] = "Controller";
static const char __pyx_k_add_column[] = "add_column";
static const char __pyx_k_bold_green[] = "[bold green]";
static const char __pyx_k_bold_red_0[] = "[bold red]0";
static const char __pyx_k_created_at[] = "created_at";
static const char __pyx_k_short_name[] = "short_name";
static const char __pyx_k_splitlines[] = "splitlines";
static const char __pyx_k_Jumlah_Akun[] = "Jumlah Akun";
static const char __pyx_k_bold_yellow[] = "[bold yellow]";
static const char __pyx_k_mro_entries[] = "__mro_entries__";
static const char __pyx_k_File_theme_s[] = "File [theme]%s";
static const char __pyx_k_bold_green_2[] = "bold green";
static const char __pyx_k_bold_green_s[] = "[bold green]%s";
static const char __pyx_k_initializing[] = "_initializing";
static const char __pyx_k_is_coroutine[] = "_is_coroutine";
static const char __pyx_k_Controller_cp[] = "Controller.cp";
static const char __pyx_k_Controller_ok[] = "Controller.ok";
static const char __pyx_k_bold_yellow_2[] = "bold yellow";
static const char __pyx_k_bold_yellow_s[] = "[bold yellow]%s";
static const char __pyx_k_class_getitem[] = "__class_getitem__";
static const char __pyx_k_init_subclass[] = "__init_subclass__";
static const char __pyx_k_AssertionError[] = "AssertionError";
static const char __pyx_k_Cek_hasil_Crack[] = "Cek hasil Crack";
static const char __pyx_k_Controller_copy[] = "Controller.copy";
static const char __pyx_k_Controller_move[] = "Controller.move";
static const char __pyx_k_EXTERNAL_STORAGE[] = "EXTERNAL_STORAGE";
static const char __pyx_k_Permission_Error[] = "Permission Error";
static const char __pyx_k_bold_red_Kembali[] = "[bold red]Kembali";
static const char __pyx_k_copy_to_filename[] = "copy_to_filename";
static const char __pyx_k_external_storage[] = "external_storage";
static const char __pyx_k_move_to_filename[] = "move_to_filename";
static const char __pyx_k_reset_Nama_theme[] = "[reset]Nama [theme]";
static const char __pyx_k_reset_bold_green[] = "[reset]|[bold green]";
static const char __pyx_k_result_ig_CP_txt[] = "result/ig/CP-*-*-*.txt";
static const char __pyx_k_result_ig_OK_txt[] = "result/ig/OK-*-*-*.txt";
static const char __pyx_k_Controller___init[] = "Controller.__init__";
static const char __pyx_k_Controller_handle[] = "Controller.handle";
static const char __pyx_k_reset_Email_theme[] = "[reset]Email [theme]";
static const char __pyx_k_reset_bold_yellow[] = "[reset]|[bold yellow]";
static const char __pyx_k_asyncio_coroutines[] = "asyncio.coroutines";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_reset_Cookie_theme[] = "[reset]Cookie [theme]";
static const char __pyx_k_mtf_app_controllers[] = "mtf.app.controllers";
static const char __pyx_k_reset_Pengikut_theme[] = "[reset]Pengikut [theme]";
static const char __pyx_k_reset_Mengikuti_theme[] = "[reset]Mengikuti [theme]";
static const char __pyx_k_reset_Postingan_theme[] = "[reset]Postingan [theme]";
static const char __pyx_k_reset_Tgl_Lahir_theme[] = "[reset]Tgl Lahir [theme]";
static const char __pyx_k_reset_Nama_bold_yellow[] = "[reset]Nama [bold yellow]";
static const char __pyx_k_Controller_cp_locals_show[] = "Controller.cp.<locals>.show";
static const char __pyx_k_Controller_ok_locals_show[] = "Controller.ok.<locals>.show";
static const char __pyx_k_reset_Nomor_Telepon_theme[] = "[reset]Nomor Telepon [theme]";
static const char __pyx_k_reset_Pengikut_bold_yellow[] = "[reset]Pengikut [bold yellow]";
static const char __pyx_k_controllers_ig_check_result[] = "controllers.ig.check_result";
static const char __pyx_k_reset_Mengikuti_bold_yellow[] = "[reset]Mengikuti [bold yellow]";
static const char __pyx_k_reset_Postingan_bold_yellow[] = "[reset]Postingan [bold yellow]";
static const char __pyx_k_Controller_cp_locals_genexpr[] = "Controller.cp.<locals>.genexpr";
static const char __pyx_k_Controller_ok_locals_genexpr[] = "Controller.ok.<locals>.genexpr";
static const char __pyx_k_bold_red_Gagal_memindah_File[] = "[bold red]Gagal memindah File";
static const char __pyx_k_bold_red_Gagal_menyalin_File[] = "[bold red]Gagal menyalin File";
static const char __pyx_k_bold_green_Berhasil_disalin_Ke[] = "[bold green]Berhasil disalin Ke [theme]%s";
static const char __pyx_k_reset_Tgl_Pembuatan_Akun_theme[] = "[reset]Tgl Pembuatan Akun [theme]";
static const char __pyx_k_bold_green_Berhasil_dipindah_Ke[] = "[bold green]Berhasil dipindah Ke [theme]%s";
static const char __pyx_k_pensive_face_Belum_ada_hasil_sa[] = ":pensive_face: Belum ada hasil saat ini";
static const char __pyx_k_theme_Catatan_jika_file_sudah_a[] = "[ [theme]Catatan jika file sudah ada maka akan digantikan dengan File baru. Tekan Enter[/] ]";
static const char __pyx_k_thinking_face_Mau_Cek_hasil_yan[] = ":thinking_face: Mau Cek hasil yang Mana :thinking_face:";
static const char __pyx_k_thinking_face_Mau_Cek_yang_Mana[] = ":thinking_face: Mau Cek yang Mana :thinking_face:";
static const char __pyx_k_tools_instagram_cek_hasil_crack[] = "tools instagram - cek hasil crack";
static const char __pyx_k_Ketikan_theme_all_untuk_menampil[] = "Ketikan [theme]all[/] untuk menampilan semua hasil atau  [theme]copy[/] untuk menyalin semua hasil atau  [theme]move[/] untuk meindahkan semua hasil ke penyimpanan external!";
static const char __pyx_k_Tampilkan_Informasi_theme_nama_t[] = "Tampilkan Informasi ([theme]nama, tggl lahir, dll[/])";
static const char __pyx_k_Tidak_mempunyai_akses_ke_direkto[] = "Tidak mempunyai akses ke direktori [theme]%s[/]. izinkan aplikasi untuk mengakses external storage lalu coba lagi";
static const char __pyx_k_mtf_app_controllers_ig_check_res[] = "mtf/app/controllers/ig/check_result.py";
static const char __pyx_k_Ketikan_theme_all_untuk_menampil_2[] = "Ketikan [theme]all[/] untuk menampilan semua hasil atau [theme]copy[/] untuk menyalin semua hasil atau [theme]move[/] untuk meindahkan semua hasil ke penyimpanan external!";
 
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_kwargs);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2handle(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_4move(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_files, PyObject *__pyx_v_move_dir);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_6copy(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_files, PyObject *__pyx_v_copy_dir);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_show(PyObject *__pyx_self, PyObject *__pyx_v_account, PyObject *__pyx_v_show_info);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_2genexpr(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_8ok(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_show(PyObject *__pyx_self, PyObject *__pyx_v_account, PyObject *__pyx_v_show_info);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_2genexpr(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0);  
static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_10cp(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self);  
static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct__ok(PyTypeObject *t, PyObject *a, PyObject *k);  
static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr(PyTypeObject *t, PyObject *a, PyObject *k);  
static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_2_cp(PyTypeObject *t, PyObject *a, PyObject *k);  
static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr(PyTypeObject *t, PyObject *a, PyObject *k);  
static __Pyx_CachedCFunction __pyx_umethod_PyList_Type_pop = {0, 0, 0, 0, 0};
 
 
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
  PyObject *__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok;
  PyObject *__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr;
  PyObject *__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp;
  PyObject *__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr;
  #endif
  PyTypeObject *__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok;
  PyTypeObject *__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr;
  PyTypeObject *__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp;
  PyTypeObject *__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr;
  PyObject *__pyx_kp_u_0;
  PyObject *__pyx_kp_u_1;
  PyObject *__pyx_kp_u_2;
  PyObject *__pyx_n_s_AssertionError;
  PyObject *__pyx_n_s_Base;
  PyObject *__pyx_kp_u_Cek_hasil_Crack;
  PyObject *__pyx_n_s_Controller;
  PyObject *__pyx_n_s_Controller___init;
  PyObject *__pyx_n_s_Controller_copy;
  PyObject *__pyx_n_s_Controller_cp;
  PyObject *__pyx_n_s_Controller_cp_locals_genexpr;
  PyObject *__pyx_n_s_Controller_cp_locals_show;
  PyObject *__pyx_n_s_Controller_handle;
  PyObject *__pyx_n_s_Controller_move;
  PyObject *__pyx_n_s_Controller_ok;
  PyObject *__pyx_n_s_Controller_ok_locals_genexpr;
  PyObject *__pyx_n_s_Controller_ok_locals_show;
  PyObject *__pyx_n_u_EXTERNAL_STORAGE;
  PyObject *__pyx_kp_u_File_theme_s;
  PyObject *__pyx_kp_u_Hasil_CP;
  PyObject *__pyx_kp_u_Hasil_OK;
  PyObject *__pyx_kp_u_Jumlah_Akun;
  PyObject *__pyx_kp_u_Ketikan_theme_all_untuk_menampil;
  PyObject *__pyx_kp_u_Ketikan_theme_all_untuk_menampil_2;
  PyObject *__pyx_kp_u_MTF_cp_ig;
  PyObject *__pyx_kp_u_MTF_ok_ig;
  PyObject *__pyx_n_u_Nama;
  PyObject *__pyx_kp_u_Nama_File;
  PyObject *__pyx_n_u_No;
  PyObject *__pyx_n_s_Path;
  PyObject *__pyx_kp_u_Permission_Error;
  PyObject *__pyx_n_u_Pilihan;
  PyObject *__pyx_kp_u_Tampilkan_Informasi_theme_nama_t;
  PyObject *__pyx_kp_u_Tidak_mempunyai_akses_ke_direkto;
  PyObject *__pyx_n_s_W_OK;
  PyObject *__pyx_n_s__17;
  PyObject *__pyx_kp_u__18;
  PyObject *__pyx_n_s__30;
  PyObject *__pyx_kp_u__7;
  PyObject *__pyx_kp_u__8;
  PyObject *__pyx_kp_u__9;
  PyObject *__pyx_n_s_acc;
  PyObject *__pyx_n_s_access;
  PyObject *__pyx_n_s_account;
  PyObject *__pyx_n_s_add;
  PyObject *__pyx_n_s_add_column;
  PyObject *__pyx_n_s_add_row;
  PyObject *__pyx_n_u_all;
  PyObject *__pyx_n_s_append;
  PyObject *__pyx_n_s_args;
  PyObject *__pyx_n_s_ask;
  PyObject *__pyx_n_s_asyncio_coroutines;
  PyObject *__pyx_n_u_birthday;
  PyObject *__pyx_kp_u_bold_green;
  PyObject *__pyx_kp_u_bold_green_2;
  PyObject *__pyx_kp_u_bold_green_Berhasil_dipindah_Ke;
  PyObject *__pyx_kp_u_bold_green_Berhasil_disalin_Ke;
  PyObject *__pyx_kp_u_bold_green_s;
  PyObject *__pyx_kp_u_bold_red;
  PyObject *__pyx_kp_u_bold_red_0;
  PyObject *__pyx_kp_u_bold_red_Gagal_memindah_File;
  PyObject *__pyx_kp_u_bold_red_Gagal_menyalin_File;
  PyObject *__pyx_kp_u_bold_red_Kembali;
  PyObject *__pyx_kp_u_bold_yellow;
  PyObject *__pyx_kp_u_bold_yellow_2;
  PyObject *__pyx_kp_u_bold_yellow_s;
  PyObject *__pyx_n_s_caption;
  PyObject *__pyx_n_u_center;
  PyObject *__pyx_n_s_choice;
  PyObject *__pyx_n_s_choices;
  PyObject *__pyx_n_s_class_getitem;
  PyObject *__pyx_n_s_cline_in_traceback;
  PyObject *__pyx_n_s_close;
  PyObject *__pyx_n_s_confirm;
  PyObject *__pyx_n_s_controllers_ig_check_result;
  PyObject *__pyx_n_u_cookie;
  PyObject *__pyx_n_s_copy;
  PyObject *__pyx_n_u_copy;
  PyObject *__pyx_n_s_copy_dir;
  PyObject *__pyx_n_s_copy_to_filename;
  PyObject *__pyx_n_s_copyfile;
  PyObject *__pyx_n_s_cp;
  PyObject *__pyx_n_u_created_at;
  PyObject *__pyx_n_s_data;
  PyObject *__pyx_n_u_data;
  PyObject *__pyx_n_s_detail;
  PyObject *__pyx_n_u_detail;
  PyObject *__pyx_n_s_dict;
  PyObject *__pyx_kp_u_disable;
  PyObject *__pyx_n_s_doc;
  PyObject *__pyx_n_u_email;
  PyObject *__pyx_kp_u_enable;
  PyObject *__pyx_n_s_encoding;
  PyObject *__pyx_n_s_enumerate;
  PyObject *__pyx_n_s_environ;
  PyObject *__pyx_n_s_escape;
  PyObject *__pyx_n_s_exist_ok;
  PyObject *__pyx_n_s_expand;
  PyObject *__pyx_n_s_external_storage;
  PyObject *__pyx_n_s_file;
  PyObject *__pyx_n_u_file;
  PyObject *__pyx_n_s_files;
  PyObject *__pyx_n_u_followers;
  PyObject *__pyx_n_u_following;
  PyObject *__pyx_kp_u_gc;
  PyObject *__pyx_n_s_genexpr;
  PyObject *__pyx_n_s_get;
  PyObject *__pyx_n_s_glob;
  PyObject *__pyx_n_s_handle;
  PyObject *__pyx_n_s_i;
  PyObject *__pyx_n_s_ig;
  PyObject *__pyx_n_s_ig_back;
  PyObject *__pyx_n_s_ig_back_2;
  PyObject *__pyx_n_s_import;
  PyObject *__pyx_n_s_index;
  PyObject *__pyx_n_s_init;
  PyObject *__pyx_n_s_init_subclass;
  PyObject *__pyx_n_s_initializing;
  PyObject *__pyx_n_s_is_coroutine;
  PyObject *__pyx_n_s_isdir;
  PyObject *__pyx_kp_u_isenabled;
  PyObject *__pyx_n_s_item;
  PyObject *__pyx_n_s_items;
  PyObject *__pyx_n_s_join;
  PyObject *__pyx_n_s_json;
  PyObject *__pyx_n_s_justify;
  PyObject *__pyx_n_s_kwargs;
  PyObject *__pyx_n_s_line;
  PyObject *__pyx_n_s_loads;
  PyObject *__pyx_n_s_main;
  PyObject *__pyx_n_u_media;
  PyObject *__pyx_n_s_metaclass;
  PyObject *__pyx_n_s_mkdir;
  PyObject *__pyx_n_s_module;
  PyObject *__pyx_n_s_move;
  PyObject *__pyx_n_u_move;
  PyObject *__pyx_n_s_move_dir;
  PyObject *__pyx_n_s_move_to_filename;
  PyObject *__pyx_n_s_mro_entries;
  PyObject *__pyx_n_s_mtf_app_controllers;
  PyObject *__pyx_kp_s_mtf_app_controllers_ig_check_res;
  PyObject *__pyx_n_u_name;
  PyObject *__pyx_n_s_name_2;
  PyObject *__pyx_n_s_node;
  PyObject *__pyx_n_s_ok;
  PyObject *__pyx_n_s_open;
  PyObject *__pyx_n_s_os;
  PyObject *__pyx_n_s_output;
  PyObject *__pyx_n_s_panel;
  PyObject *__pyx_n_s_parents;
  PyObject *__pyx_n_s_password;
  PyObject *__pyx_n_u_password;
  PyObject *__pyx_n_s_path;
  PyObject *__pyx_n_s_pathlib;
  PyObject *__pyx_kp_u_pensive_face_Belum_ada_hasil_sa;
  PyObject *__pyx_n_u_phone;
  PyObject *__pyx_n_s_pop;
  PyObject *__pyx_n_s_prepare;
  PyObject *__pyx_n_s_print;
  PyObject *__pyx_n_s_profile;
  PyObject *__pyx_n_u_profile;
  PyObject *__pyx_n_s_prompt;
  PyObject *__pyx_n_s_qualname;
  PyObject *__pyx_n_u_r;
  PyObject *__pyx_n_s_range;
  PyObject *__pyx_n_s_read;
  PyObject *__pyx_kp_u_reset;
  PyObject *__pyx_kp_u_reset_Cookie_theme;
  PyObject *__pyx_kp_u_reset_Email_theme;
  PyObject *__pyx_kp_u_reset_Mengikuti_bold_yellow;
  PyObject *__pyx_kp_u_reset_Mengikuti_theme;
  PyObject *__pyx_kp_u_reset_Nama_bold_yellow;
  PyObject *__pyx_kp_u_reset_Nama_theme;
  PyObject *__pyx_kp_u_reset_Nomor_Telepon_theme;
  PyObject *__pyx_kp_u_reset_Pengikut_bold_yellow;
  PyObject *__pyx_kp_u_reset_Pengikut_theme;
  PyObject *__pyx_kp_u_reset_Postingan_bold_yellow;
  PyObject *__pyx_kp_u_reset_Postingan_theme;
  PyObject *__pyx_kp_u_reset_Tgl_Lahir_theme;
  PyObject *__pyx_kp_u_reset_Tgl_Pembuatan_Akun_theme;
  PyObject *__pyx_kp_u_reset_bold_green;
  PyObject *__pyx_kp_u_reset_bold_yellow;
  PyObject *__pyx_kp_u_result_ig_CP_txt;
  PyObject *__pyx_kp_u_result_ig_OK_txt;
  PyObject *__pyx_n_s_rich;
  PyObject *__pyx_n_s_root;
  PyObject *__pyx_n_s_self;
  PyObject *__pyx_n_s_send;
  PyObject *__pyx_n_s_set_name;
  PyObject *__pyx_n_s_short_name;
  PyObject *__pyx_n_s_show;
  PyObject *__pyx_n_s_show_info;
  PyObject *__pyx_n_s_shutil;
  PyObject *__pyx_n_s_spec;
  PyObject *__pyx_n_s_split;
  PyObject *__pyx_n_s_splited;
  PyObject *__pyx_n_s_splitlines;
  PyObject *__pyx_n_s_style;
  PyObject *__pyx_n_s_subtitle;
  PyObject *__pyx_n_s_super;
  PyObject *__pyx_n_s_table;
  PyObject *__pyx_n_s_test;
  PyObject *__pyx_kp_u_theme;
  PyObject *__pyx_kp_u_theme_1;
  PyObject *__pyx_kp_u_theme_2;
  PyObject *__pyx_kp_u_theme_Catatan_jika_file_sudah_a;
  PyObject *__pyx_kp_u_thinking_face_Mau_Cek_hasil_yan;
  PyObject *__pyx_kp_u_thinking_face_Mau_Cek_yang_Mana;
  PyObject *__pyx_n_s_throw;
  PyObject *__pyx_n_s_title;
  PyObject *__pyx_kp_u_tools_instagram_cek_hasil_crack;
  PyObject *__pyx_n_s_tree;
  PyObject *__pyx_n_s_userid;
  PyObject *__pyx_n_u_userid;
  PyObject *__pyx_kp_u_utf_8;
  PyObject *__pyx_int_0;
  PyObject *__pyx_int_1;
  PyObject *__pyx_int_2;
  PyObject *__pyx_tuple_;
  PyObject *__pyx_tuple__2;
  PyObject *__pyx_tuple__3;
  PyObject *__pyx_tuple__4;
  PyObject *__pyx_tuple__5;
  PyObject *__pyx_tuple__6;
  PyObject *__pyx_slice__10;
  PyObject *__pyx_tuple__11;
  PyObject *__pyx_tuple__12;
  PyObject *__pyx_tuple__13;
  PyObject *__pyx_tuple__14;
  PyObject *__pyx_tuple__19;
  PyObject *__pyx_tuple__21;
  PyObject *__pyx_tuple__23;
  PyObject *__pyx_tuple__25;
  PyObject *__pyx_tuple__27;
  PyObject *__pyx_codeobj__15;
  PyObject *__pyx_codeobj__16;
  PyObject *__pyx_codeobj__20;
  PyObject *__pyx_codeobj__22;
  PyObject *__pyx_codeobj__24;
  PyObject *__pyx_codeobj__26;
  PyObject *__pyx_codeobj__28;
  PyObject *__pyx_codeobj__29;
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
  Py_CLEAR(clear_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok);
  Py_CLEAR(clear_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok);
  Py_CLEAR(clear_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr);
  Py_CLEAR(clear_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr);
  Py_CLEAR(clear_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp);
  Py_CLEAR(clear_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp);
  Py_CLEAR(clear_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr);
  Py_CLEAR(clear_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr);
  Py_CLEAR(clear_module_state->__pyx_kp_u_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_AssertionError);
  Py_CLEAR(clear_module_state->__pyx_n_s_Base);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Cek_hasil_Crack);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller___init);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_copy);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_cp);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_cp_locals_genexpr);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_cp_locals_show);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_handle);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_move);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_ok);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_ok_locals_genexpr);
  Py_CLEAR(clear_module_state->__pyx_n_s_Controller_ok_locals_show);
  Py_CLEAR(clear_module_state->__pyx_n_u_EXTERNAL_STORAGE);
  Py_CLEAR(clear_module_state->__pyx_kp_u_File_theme_s);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Hasil_CP);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Hasil_OK);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Jumlah_Akun);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Ketikan_theme_all_untuk_menampil);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Ketikan_theme_all_untuk_menampil_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_MTF_cp_ig);
  Py_CLEAR(clear_module_state->__pyx_kp_u_MTF_ok_ig);
  Py_CLEAR(clear_module_state->__pyx_n_u_Nama);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Nama_File);
  Py_CLEAR(clear_module_state->__pyx_n_u_No);
  Py_CLEAR(clear_module_state->__pyx_n_s_Path);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Permission_Error);
  Py_CLEAR(clear_module_state->__pyx_n_u_Pilihan);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Tampilkan_Informasi_theme_nama_t);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Tidak_mempunyai_akses_ke_direkto);
  Py_CLEAR(clear_module_state->__pyx_n_s_W_OK);
  Py_CLEAR(clear_module_state->__pyx_n_s__17);
  Py_CLEAR(clear_module_state->__pyx_kp_u__18);
  Py_CLEAR(clear_module_state->__pyx_n_s__30);
  Py_CLEAR(clear_module_state->__pyx_kp_u__7);
  Py_CLEAR(clear_module_state->__pyx_kp_u__8);
  Py_CLEAR(clear_module_state->__pyx_kp_u__9);
  Py_CLEAR(clear_module_state->__pyx_n_s_acc);
  Py_CLEAR(clear_module_state->__pyx_n_s_access);
  Py_CLEAR(clear_module_state->__pyx_n_s_account);
  Py_CLEAR(clear_module_state->__pyx_n_s_add);
  Py_CLEAR(clear_module_state->__pyx_n_s_add_column);
  Py_CLEAR(clear_module_state->__pyx_n_s_add_row);
  Py_CLEAR(clear_module_state->__pyx_n_u_all);
  Py_CLEAR(clear_module_state->__pyx_n_s_append);
  Py_CLEAR(clear_module_state->__pyx_n_s_args);
  Py_CLEAR(clear_module_state->__pyx_n_s_ask);
  Py_CLEAR(clear_module_state->__pyx_n_s_asyncio_coroutines);
  Py_CLEAR(clear_module_state->__pyx_n_u_birthday);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_green);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_green_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_green_Berhasil_dipindah_Ke);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_green_Berhasil_disalin_Ke);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_green_s);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_red);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_red_0);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_red_Gagal_memindah_File);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_red_Gagal_menyalin_File);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_red_Kembali);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_yellow);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_yellow_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_bold_yellow_s);
  Py_CLEAR(clear_module_state->__pyx_n_s_caption);
  Py_CLEAR(clear_module_state->__pyx_n_u_center);
  Py_CLEAR(clear_module_state->__pyx_n_s_choice);
  Py_CLEAR(clear_module_state->__pyx_n_s_choices);
  Py_CLEAR(clear_module_state->__pyx_n_s_class_getitem);
  Py_CLEAR(clear_module_state->__pyx_n_s_cline_in_traceback);
  Py_CLEAR(clear_module_state->__pyx_n_s_close);
  Py_CLEAR(clear_module_state->__pyx_n_s_confirm);
  Py_CLEAR(clear_module_state->__pyx_n_s_controllers_ig_check_result);
  Py_CLEAR(clear_module_state->__pyx_n_u_cookie);
  Py_CLEAR(clear_module_state->__pyx_n_s_copy);
  Py_CLEAR(clear_module_state->__pyx_n_u_copy);
  Py_CLEAR(clear_module_state->__pyx_n_s_copy_dir);
  Py_CLEAR(clear_module_state->__pyx_n_s_copy_to_filename);
  Py_CLEAR(clear_module_state->__pyx_n_s_copyfile);
  Py_CLEAR(clear_module_state->__pyx_n_s_cp);
  Py_CLEAR(clear_module_state->__pyx_n_u_created_at);
  Py_CLEAR(clear_module_state->__pyx_n_s_data);
  Py_CLEAR(clear_module_state->__pyx_n_u_data);
  Py_CLEAR(clear_module_state->__pyx_n_s_detail);
  Py_CLEAR(clear_module_state->__pyx_n_u_detail);
  Py_CLEAR(clear_module_state->__pyx_n_s_dict);
  Py_CLEAR(clear_module_state->__pyx_kp_u_disable);
  Py_CLEAR(clear_module_state->__pyx_n_s_doc);
  Py_CLEAR(clear_module_state->__pyx_n_u_email);
  Py_CLEAR(clear_module_state->__pyx_kp_u_enable);
  Py_CLEAR(clear_module_state->__pyx_n_s_encoding);
  Py_CLEAR(clear_module_state->__pyx_n_s_enumerate);
  Py_CLEAR(clear_module_state->__pyx_n_s_environ);
  Py_CLEAR(clear_module_state->__pyx_n_s_escape);
  Py_CLEAR(clear_module_state->__pyx_n_s_exist_ok);
  Py_CLEAR(clear_module_state->__pyx_n_s_expand);
  Py_CLEAR(clear_module_state->__pyx_n_s_external_storage);
  Py_CLEAR(clear_module_state->__pyx_n_s_file);
  Py_CLEAR(clear_module_state->__pyx_n_u_file);
  Py_CLEAR(clear_module_state->__pyx_n_s_files);
  Py_CLEAR(clear_module_state->__pyx_n_u_followers);
  Py_CLEAR(clear_module_state->__pyx_n_u_following);
  Py_CLEAR(clear_module_state->__pyx_kp_u_gc);
  Py_CLEAR(clear_module_state->__pyx_n_s_genexpr);
  Py_CLEAR(clear_module_state->__pyx_n_s_get);
  Py_CLEAR(clear_module_state->__pyx_n_s_glob);
  Py_CLEAR(clear_module_state->__pyx_n_s_handle);
  Py_CLEAR(clear_module_state->__pyx_n_s_i);
  Py_CLEAR(clear_module_state->__pyx_n_s_ig);
  Py_CLEAR(clear_module_state->__pyx_n_s_ig_back);
  Py_CLEAR(clear_module_state->__pyx_n_s_ig_back_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_import);
  Py_CLEAR(clear_module_state->__pyx_n_s_index);
  Py_CLEAR(clear_module_state->__pyx_n_s_init);
  Py_CLEAR(clear_module_state->__pyx_n_s_init_subclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_initializing);
  Py_CLEAR(clear_module_state->__pyx_n_s_is_coroutine);
  Py_CLEAR(clear_module_state->__pyx_n_s_isdir);
  Py_CLEAR(clear_module_state->__pyx_kp_u_isenabled);
  Py_CLEAR(clear_module_state->__pyx_n_s_item);
  Py_CLEAR(clear_module_state->__pyx_n_s_items);
  Py_CLEAR(clear_module_state->__pyx_n_s_join);
  Py_CLEAR(clear_module_state->__pyx_n_s_json);
  Py_CLEAR(clear_module_state->__pyx_n_s_justify);
  Py_CLEAR(clear_module_state->__pyx_n_s_kwargs);
  Py_CLEAR(clear_module_state->__pyx_n_s_line);
  Py_CLEAR(clear_module_state->__pyx_n_s_loads);
  Py_CLEAR(clear_module_state->__pyx_n_s_main);
  Py_CLEAR(clear_module_state->__pyx_n_u_media);
  Py_CLEAR(clear_module_state->__pyx_n_s_metaclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_mkdir);
  Py_CLEAR(clear_module_state->__pyx_n_s_module);
  Py_CLEAR(clear_module_state->__pyx_n_s_move);
  Py_CLEAR(clear_module_state->__pyx_n_u_move);
  Py_CLEAR(clear_module_state->__pyx_n_s_move_dir);
  Py_CLEAR(clear_module_state->__pyx_n_s_move_to_filename);
  Py_CLEAR(clear_module_state->__pyx_n_s_mro_entries);
  Py_CLEAR(clear_module_state->__pyx_n_s_mtf_app_controllers);
  Py_CLEAR(clear_module_state->__pyx_kp_s_mtf_app_controllers_ig_check_res);
  Py_CLEAR(clear_module_state->__pyx_n_u_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_name_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_node);
  Py_CLEAR(clear_module_state->__pyx_n_s_ok);
  Py_CLEAR(clear_module_state->__pyx_n_s_open);
  Py_CLEAR(clear_module_state->__pyx_n_s_os);
  Py_CLEAR(clear_module_state->__pyx_n_s_output);
  Py_CLEAR(clear_module_state->__pyx_n_s_panel);
  Py_CLEAR(clear_module_state->__pyx_n_s_parents);
  Py_CLEAR(clear_module_state->__pyx_n_s_password);
  Py_CLEAR(clear_module_state->__pyx_n_u_password);
  Py_CLEAR(clear_module_state->__pyx_n_s_path);
  Py_CLEAR(clear_module_state->__pyx_n_s_pathlib);
  Py_CLEAR(clear_module_state->__pyx_kp_u_pensive_face_Belum_ada_hasil_sa);
  Py_CLEAR(clear_module_state->__pyx_n_u_phone);
  Py_CLEAR(clear_module_state->__pyx_n_s_pop);
  Py_CLEAR(clear_module_state->__pyx_n_s_prepare);
  Py_CLEAR(clear_module_state->__pyx_n_s_print);
  Py_CLEAR(clear_module_state->__pyx_n_s_profile);
  Py_CLEAR(clear_module_state->__pyx_n_u_profile);
  Py_CLEAR(clear_module_state->__pyx_n_s_prompt);
  Py_CLEAR(clear_module_state->__pyx_n_s_qualname);
  Py_CLEAR(clear_module_state->__pyx_n_u_r);
  Py_CLEAR(clear_module_state->__pyx_n_s_range);
  Py_CLEAR(clear_module_state->__pyx_n_s_read);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Cookie_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Email_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Mengikuti_bold_yellow);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Mengikuti_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Nama_bold_yellow);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Nama_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Nomor_Telepon_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Pengikut_bold_yellow);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Pengikut_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Postingan_bold_yellow);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Postingan_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Tgl_Lahir_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_Tgl_Pembuatan_Akun_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_bold_green);
  Py_CLEAR(clear_module_state->__pyx_kp_u_reset_bold_yellow);
  Py_CLEAR(clear_module_state->__pyx_kp_u_result_ig_CP_txt);
  Py_CLEAR(clear_module_state->__pyx_kp_u_result_ig_OK_txt);
  Py_CLEAR(clear_module_state->__pyx_n_s_rich);
  Py_CLEAR(clear_module_state->__pyx_n_s_root);
  Py_CLEAR(clear_module_state->__pyx_n_s_self);
  Py_CLEAR(clear_module_state->__pyx_n_s_send);
  Py_CLEAR(clear_module_state->__pyx_n_s_set_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_short_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_show);
  Py_CLEAR(clear_module_state->__pyx_n_s_show_info);
  Py_CLEAR(clear_module_state->__pyx_n_s_shutil);
  Py_CLEAR(clear_module_state->__pyx_n_s_spec);
  Py_CLEAR(clear_module_state->__pyx_n_s_split);
  Py_CLEAR(clear_module_state->__pyx_n_s_splited);
  Py_CLEAR(clear_module_state->__pyx_n_s_splitlines);
  Py_CLEAR(clear_module_state->__pyx_n_s_style);
  Py_CLEAR(clear_module_state->__pyx_n_s_subtitle);
  Py_CLEAR(clear_module_state->__pyx_n_s_super);
  Py_CLEAR(clear_module_state->__pyx_n_s_table);
  Py_CLEAR(clear_module_state->__pyx_n_s_test);
  Py_CLEAR(clear_module_state->__pyx_kp_u_theme);
  Py_CLEAR(clear_module_state->__pyx_kp_u_theme_1);
  Py_CLEAR(clear_module_state->__pyx_kp_u_theme_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_theme_Catatan_jika_file_sudah_a);
  Py_CLEAR(clear_module_state->__pyx_kp_u_thinking_face_Mau_Cek_hasil_yan);
  Py_CLEAR(clear_module_state->__pyx_kp_u_thinking_face_Mau_Cek_yang_Mana);
  Py_CLEAR(clear_module_state->__pyx_n_s_throw);
  Py_CLEAR(clear_module_state->__pyx_n_s_title);
  Py_CLEAR(clear_module_state->__pyx_kp_u_tools_instagram_cek_hasil_crack);
  Py_CLEAR(clear_module_state->__pyx_n_s_tree);
  Py_CLEAR(clear_module_state->__pyx_n_s_userid);
  Py_CLEAR(clear_module_state->__pyx_n_u_userid);
  Py_CLEAR(clear_module_state->__pyx_kp_u_utf_8);
  Py_CLEAR(clear_module_state->__pyx_int_0);
  Py_CLEAR(clear_module_state->__pyx_int_1);
  Py_CLEAR(clear_module_state->__pyx_int_2);
  Py_CLEAR(clear_module_state->__pyx_tuple_);
  Py_CLEAR(clear_module_state->__pyx_tuple__2);
  Py_CLEAR(clear_module_state->__pyx_tuple__3);
  Py_CLEAR(clear_module_state->__pyx_tuple__4);
  Py_CLEAR(clear_module_state->__pyx_tuple__5);
  Py_CLEAR(clear_module_state->__pyx_tuple__6);
  Py_CLEAR(clear_module_state->__pyx_slice__10);
  Py_CLEAR(clear_module_state->__pyx_tuple__11);
  Py_CLEAR(clear_module_state->__pyx_tuple__12);
  Py_CLEAR(clear_module_state->__pyx_tuple__13);
  Py_CLEAR(clear_module_state->__pyx_tuple__14);
  Py_CLEAR(clear_module_state->__pyx_tuple__19);
  Py_CLEAR(clear_module_state->__pyx_tuple__21);
  Py_CLEAR(clear_module_state->__pyx_tuple__23);
  Py_CLEAR(clear_module_state->__pyx_tuple__25);
  Py_CLEAR(clear_module_state->__pyx_tuple__27);
  Py_CLEAR(clear_module_state->__pyx_codeobj__15);
  Py_CLEAR(clear_module_state->__pyx_codeobj__16);
  Py_CLEAR(clear_module_state->__pyx_codeobj__20);
  Py_CLEAR(clear_module_state->__pyx_codeobj__22);
  Py_CLEAR(clear_module_state->__pyx_codeobj__24);
  Py_CLEAR(clear_module_state->__pyx_codeobj__26);
  Py_CLEAR(clear_module_state->__pyx_codeobj__28);
  Py_CLEAR(clear_module_state->__pyx_codeobj__29);
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
  Py_VISIT(traverse_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok);
  Py_VISIT(traverse_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok);
  Py_VISIT(traverse_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr);
  Py_VISIT(traverse_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr);
  Py_VISIT(traverse_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp);
  Py_VISIT(traverse_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp);
  Py_VISIT(traverse_module_state->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr);
  Py_VISIT(traverse_module_state->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr);
  Py_VISIT(traverse_module_state->__pyx_kp_u_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_AssertionError);
  Py_VISIT(traverse_module_state->__pyx_n_s_Base);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Cek_hasil_Crack);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller___init);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_copy);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_cp);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_cp_locals_genexpr);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_cp_locals_show);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_handle);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_move);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_ok);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_ok_locals_genexpr);
  Py_VISIT(traverse_module_state->__pyx_n_s_Controller_ok_locals_show);
  Py_VISIT(traverse_module_state->__pyx_n_u_EXTERNAL_STORAGE);
  Py_VISIT(traverse_module_state->__pyx_kp_u_File_theme_s);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Hasil_CP);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Hasil_OK);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Jumlah_Akun);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Ketikan_theme_all_untuk_menampil);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Ketikan_theme_all_untuk_menampil_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_MTF_cp_ig);
  Py_VISIT(traverse_module_state->__pyx_kp_u_MTF_ok_ig);
  Py_VISIT(traverse_module_state->__pyx_n_u_Nama);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Nama_File);
  Py_VISIT(traverse_module_state->__pyx_n_u_No);
  Py_VISIT(traverse_module_state->__pyx_n_s_Path);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Permission_Error);
  Py_VISIT(traverse_module_state->__pyx_n_u_Pilihan);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Tampilkan_Informasi_theme_nama_t);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Tidak_mempunyai_akses_ke_direkto);
  Py_VISIT(traverse_module_state->__pyx_n_s_W_OK);
  Py_VISIT(traverse_module_state->__pyx_n_s__17);
  Py_VISIT(traverse_module_state->__pyx_kp_u__18);
  Py_VISIT(traverse_module_state->__pyx_n_s__30);
  Py_VISIT(traverse_module_state->__pyx_kp_u__7);
  Py_VISIT(traverse_module_state->__pyx_kp_u__8);
  Py_VISIT(traverse_module_state->__pyx_kp_u__9);
  Py_VISIT(traverse_module_state->__pyx_n_s_acc);
  Py_VISIT(traverse_module_state->__pyx_n_s_access);
  Py_VISIT(traverse_module_state->__pyx_n_s_account);
  Py_VISIT(traverse_module_state->__pyx_n_s_add);
  Py_VISIT(traverse_module_state->__pyx_n_s_add_column);
  Py_VISIT(traverse_module_state->__pyx_n_s_add_row);
  Py_VISIT(traverse_module_state->__pyx_n_u_all);
  Py_VISIT(traverse_module_state->__pyx_n_s_append);
  Py_VISIT(traverse_module_state->__pyx_n_s_args);
  Py_VISIT(traverse_module_state->__pyx_n_s_ask);
  Py_VISIT(traverse_module_state->__pyx_n_s_asyncio_coroutines);
  Py_VISIT(traverse_module_state->__pyx_n_u_birthday);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_green);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_green_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_green_Berhasil_dipindah_Ke);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_green_Berhasil_disalin_Ke);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_green_s);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_red);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_red_0);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_red_Gagal_memindah_File);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_red_Gagal_menyalin_File);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_red_Kembali);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_yellow);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_yellow_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_bold_yellow_s);
  Py_VISIT(traverse_module_state->__pyx_n_s_caption);
  Py_VISIT(traverse_module_state->__pyx_n_u_center);
  Py_VISIT(traverse_module_state->__pyx_n_s_choice);
  Py_VISIT(traverse_module_state->__pyx_n_s_choices);
  Py_VISIT(traverse_module_state->__pyx_n_s_class_getitem);
  Py_VISIT(traverse_module_state->__pyx_n_s_cline_in_traceback);
  Py_VISIT(traverse_module_state->__pyx_n_s_close);
  Py_VISIT(traverse_module_state->__pyx_n_s_confirm);
  Py_VISIT(traverse_module_state->__pyx_n_s_controllers_ig_check_result);
  Py_VISIT(traverse_module_state->__pyx_n_u_cookie);
  Py_VISIT(traverse_module_state->__pyx_n_s_copy);
  Py_VISIT(traverse_module_state->__pyx_n_u_copy);
  Py_VISIT(traverse_module_state->__pyx_n_s_copy_dir);
  Py_VISIT(traverse_module_state->__pyx_n_s_copy_to_filename);
  Py_VISIT(traverse_module_state->__pyx_n_s_copyfile);
  Py_VISIT(traverse_module_state->__pyx_n_s_cp);
  Py_VISIT(traverse_module_state->__pyx_n_u_created_at);
  Py_VISIT(traverse_module_state->__pyx_n_s_data);
  Py_VISIT(traverse_module_state->__pyx_n_u_data);
  Py_VISIT(traverse_module_state->__pyx_n_s_detail);
  Py_VISIT(traverse_module_state->__pyx_n_u_detail);
  Py_VISIT(traverse_module_state->__pyx_n_s_dict);
  Py_VISIT(traverse_module_state->__pyx_kp_u_disable);
  Py_VISIT(traverse_module_state->__pyx_n_s_doc);
  Py_VISIT(traverse_module_state->__pyx_n_u_email);
  Py_VISIT(traverse_module_state->__pyx_kp_u_enable);
  Py_VISIT(traverse_module_state->__pyx_n_s_encoding);
  Py_VISIT(traverse_module_state->__pyx_n_s_enumerate);
  Py_VISIT(traverse_module_state->__pyx_n_s_environ);
  Py_VISIT(traverse_module_state->__pyx_n_s_escape);
  Py_VISIT(traverse_module_state->__pyx_n_s_exist_ok);
  Py_VISIT(traverse_module_state->__pyx_n_s_expand);
  Py_VISIT(traverse_module_state->__pyx_n_s_external_storage);
  Py_VISIT(traverse_module_state->__pyx_n_s_file);
  Py_VISIT(traverse_module_state->__pyx_n_u_file);
  Py_VISIT(traverse_module_state->__pyx_n_s_files);
  Py_VISIT(traverse_module_state->__pyx_n_u_followers);
  Py_VISIT(traverse_module_state->__pyx_n_u_following);
  Py_VISIT(traverse_module_state->__pyx_kp_u_gc);
  Py_VISIT(traverse_module_state->__pyx_n_s_genexpr);
  Py_VISIT(traverse_module_state->__pyx_n_s_get);
  Py_VISIT(traverse_module_state->__pyx_n_s_glob);
  Py_VISIT(traverse_module_state->__pyx_n_s_handle);
  Py_VISIT(traverse_module_state->__pyx_n_s_i);
  Py_VISIT(traverse_module_state->__pyx_n_s_ig);
  Py_VISIT(traverse_module_state->__pyx_n_s_ig_back);
  Py_VISIT(traverse_module_state->__pyx_n_s_ig_back_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_import);
  Py_VISIT(traverse_module_state->__pyx_n_s_index);
  Py_VISIT(traverse_module_state->__pyx_n_s_init);
  Py_VISIT(traverse_module_state->__pyx_n_s_init_subclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_initializing);
  Py_VISIT(traverse_module_state->__pyx_n_s_is_coroutine);
  Py_VISIT(traverse_module_state->__pyx_n_s_isdir);
  Py_VISIT(traverse_module_state->__pyx_kp_u_isenabled);
  Py_VISIT(traverse_module_state->__pyx_n_s_item);
  Py_VISIT(traverse_module_state->__pyx_n_s_items);
  Py_VISIT(traverse_module_state->__pyx_n_s_join);
  Py_VISIT(traverse_module_state->__pyx_n_s_json);
  Py_VISIT(traverse_module_state->__pyx_n_s_justify);
  Py_VISIT(traverse_module_state->__pyx_n_s_kwargs);
  Py_VISIT(traverse_module_state->__pyx_n_s_line);
  Py_VISIT(traverse_module_state->__pyx_n_s_loads);
  Py_VISIT(traverse_module_state->__pyx_n_s_main);
  Py_VISIT(traverse_module_state->__pyx_n_u_media);
  Py_VISIT(traverse_module_state->__pyx_n_s_metaclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_mkdir);
  Py_VISIT(traverse_module_state->__pyx_n_s_module);
  Py_VISIT(traverse_module_state->__pyx_n_s_move);
  Py_VISIT(traverse_module_state->__pyx_n_u_move);
  Py_VISIT(traverse_module_state->__pyx_n_s_move_dir);
  Py_VISIT(traverse_module_state->__pyx_n_s_move_to_filename);
  Py_VISIT(traverse_module_state->__pyx_n_s_mro_entries);
  Py_VISIT(traverse_module_state->__pyx_n_s_mtf_app_controllers);
  Py_VISIT(traverse_module_state->__pyx_kp_s_mtf_app_controllers_ig_check_res);
  Py_VISIT(traverse_module_state->__pyx_n_u_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_name_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_node);
  Py_VISIT(traverse_module_state->__pyx_n_s_ok);
  Py_VISIT(traverse_module_state->__pyx_n_s_open);
  Py_VISIT(traverse_module_state->__pyx_n_s_os);
  Py_VISIT(traverse_module_state->__pyx_n_s_output);
  Py_VISIT(traverse_module_state->__pyx_n_s_panel);
  Py_VISIT(traverse_module_state->__pyx_n_s_parents);
  Py_VISIT(traverse_module_state->__pyx_n_s_password);
  Py_VISIT(traverse_module_state->__pyx_n_u_password);
  Py_VISIT(traverse_module_state->__pyx_n_s_path);
  Py_VISIT(traverse_module_state->__pyx_n_s_pathlib);
  Py_VISIT(traverse_module_state->__pyx_kp_u_pensive_face_Belum_ada_hasil_sa);
  Py_VISIT(traverse_module_state->__pyx_n_u_phone);
  Py_VISIT(traverse_module_state->__pyx_n_s_pop);
  Py_VISIT(traverse_module_state->__pyx_n_s_prepare);
  Py_VISIT(traverse_module_state->__pyx_n_s_print);
  Py_VISIT(traverse_module_state->__pyx_n_s_profile);
  Py_VISIT(traverse_module_state->__pyx_n_u_profile);
  Py_VISIT(traverse_module_state->__pyx_n_s_prompt);
  Py_VISIT(traverse_module_state->__pyx_n_s_qualname);
  Py_VISIT(traverse_module_state->__pyx_n_u_r);
  Py_VISIT(traverse_module_state->__pyx_n_s_range);
  Py_VISIT(traverse_module_state->__pyx_n_s_read);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Cookie_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Email_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Mengikuti_bold_yellow);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Mengikuti_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Nama_bold_yellow);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Nama_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Nomor_Telepon_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Pengikut_bold_yellow);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Pengikut_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Postingan_bold_yellow);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Postingan_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Tgl_Lahir_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_Tgl_Pembuatan_Akun_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_bold_green);
  Py_VISIT(traverse_module_state->__pyx_kp_u_reset_bold_yellow);
  Py_VISIT(traverse_module_state->__pyx_kp_u_result_ig_CP_txt);
  Py_VISIT(traverse_module_state->__pyx_kp_u_result_ig_OK_txt);
  Py_VISIT(traverse_module_state->__pyx_n_s_rich);
  Py_VISIT(traverse_module_state->__pyx_n_s_root);
  Py_VISIT(traverse_module_state->__pyx_n_s_self);
  Py_VISIT(traverse_module_state->__pyx_n_s_send);
  Py_VISIT(traverse_module_state->__pyx_n_s_set_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_short_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_show);
  Py_VISIT(traverse_module_state->__pyx_n_s_show_info);
  Py_VISIT(traverse_module_state->__pyx_n_s_shutil);
  Py_VISIT(traverse_module_state->__pyx_n_s_spec);
  Py_VISIT(traverse_module_state->__pyx_n_s_split);
  Py_VISIT(traverse_module_state->__pyx_n_s_splited);
  Py_VISIT(traverse_module_state->__pyx_n_s_splitlines);
  Py_VISIT(traverse_module_state->__pyx_n_s_style);
  Py_VISIT(traverse_module_state->__pyx_n_s_subtitle);
  Py_VISIT(traverse_module_state->__pyx_n_s_super);
  Py_VISIT(traverse_module_state->__pyx_n_s_table);
  Py_VISIT(traverse_module_state->__pyx_n_s_test);
  Py_VISIT(traverse_module_state->__pyx_kp_u_theme);
  Py_VISIT(traverse_module_state->__pyx_kp_u_theme_1);
  Py_VISIT(traverse_module_state->__pyx_kp_u_theme_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_theme_Catatan_jika_file_sudah_a);
  Py_VISIT(traverse_module_state->__pyx_kp_u_thinking_face_Mau_Cek_hasil_yan);
  Py_VISIT(traverse_module_state->__pyx_kp_u_thinking_face_Mau_Cek_yang_Mana);
  Py_VISIT(traverse_module_state->__pyx_n_s_throw);
  Py_VISIT(traverse_module_state->__pyx_n_s_title);
  Py_VISIT(traverse_module_state->__pyx_kp_u_tools_instagram_cek_hasil_crack);
  Py_VISIT(traverse_module_state->__pyx_n_s_tree);
  Py_VISIT(traverse_module_state->__pyx_n_s_userid);
  Py_VISIT(traverse_module_state->__pyx_n_u_userid);
  Py_VISIT(traverse_module_state->__pyx_kp_u_utf_8);
  Py_VISIT(traverse_module_state->__pyx_int_0);
  Py_VISIT(traverse_module_state->__pyx_int_1);
  Py_VISIT(traverse_module_state->__pyx_int_2);
  Py_VISIT(traverse_module_state->__pyx_tuple_);
  Py_VISIT(traverse_module_state->__pyx_tuple__2);
  Py_VISIT(traverse_module_state->__pyx_tuple__3);
  Py_VISIT(traverse_module_state->__pyx_tuple__4);
  Py_VISIT(traverse_module_state->__pyx_tuple__5);
  Py_VISIT(traverse_module_state->__pyx_tuple__6);
  Py_VISIT(traverse_module_state->__pyx_slice__10);
  Py_VISIT(traverse_module_state->__pyx_tuple__11);
  Py_VISIT(traverse_module_state->__pyx_tuple__12);
  Py_VISIT(traverse_module_state->__pyx_tuple__13);
  Py_VISIT(traverse_module_state->__pyx_tuple__14);
  Py_VISIT(traverse_module_state->__pyx_tuple__19);
  Py_VISIT(traverse_module_state->__pyx_tuple__21);
  Py_VISIT(traverse_module_state->__pyx_tuple__23);
  Py_VISIT(traverse_module_state->__pyx_tuple__25);
  Py_VISIT(traverse_module_state->__pyx_tuple__27);
  Py_VISIT(traverse_module_state->__pyx_codeobj__15);
  Py_VISIT(traverse_module_state->__pyx_codeobj__16);
  Py_VISIT(traverse_module_state->__pyx_codeobj__20);
  Py_VISIT(traverse_module_state->__pyx_codeobj__22);
  Py_VISIT(traverse_module_state->__pyx_codeobj__24);
  Py_VISIT(traverse_module_state->__pyx_codeobj__26);
  Py_VISIT(traverse_module_state->__pyx_codeobj__28);
  Py_VISIT(traverse_module_state->__pyx_codeobj__29);
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
#define __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok __pyx_mstate_global->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok
#define __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr __pyx_mstate_global->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr
#define __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp __pyx_mstate_global->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp
#define __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr __pyx_mstate_global->__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr
#endif
#define __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok __pyx_mstate_global->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok
#define __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr __pyx_mstate_global->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr
#define __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp __pyx_mstate_global->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp
#define __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr __pyx_mstate_global->__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr
#define __pyx_kp_u_0 __pyx_mstate_global->__pyx_kp_u_0
#define __pyx_kp_u_1 __pyx_mstate_global->__pyx_kp_u_1
#define __pyx_kp_u_2 __pyx_mstate_global->__pyx_kp_u_2
#define __pyx_n_s_AssertionError __pyx_mstate_global->__pyx_n_s_AssertionError
#define __pyx_n_s_Base __pyx_mstate_global->__pyx_n_s_Base
#define __pyx_kp_u_Cek_hasil_Crack __pyx_mstate_global->__pyx_kp_u_Cek_hasil_Crack
#define __pyx_n_s_Controller __pyx_mstate_global->__pyx_n_s_Controller
#define __pyx_n_s_Controller___init __pyx_mstate_global->__pyx_n_s_Controller___init
#define __pyx_n_s_Controller_copy __pyx_mstate_global->__pyx_n_s_Controller_copy
#define __pyx_n_s_Controller_cp __pyx_mstate_global->__pyx_n_s_Controller_cp
#define __pyx_n_s_Controller_cp_locals_genexpr __pyx_mstate_global->__pyx_n_s_Controller_cp_locals_genexpr
#define __pyx_n_s_Controller_cp_locals_show __pyx_mstate_global->__pyx_n_s_Controller_cp_locals_show
#define __pyx_n_s_Controller_handle __pyx_mstate_global->__pyx_n_s_Controller_handle
#define __pyx_n_s_Controller_move __pyx_mstate_global->__pyx_n_s_Controller_move
#define __pyx_n_s_Controller_ok __pyx_mstate_global->__pyx_n_s_Controller_ok
#define __pyx_n_s_Controller_ok_locals_genexpr __pyx_mstate_global->__pyx_n_s_Controller_ok_locals_genexpr
#define __pyx_n_s_Controller_ok_locals_show __pyx_mstate_global->__pyx_n_s_Controller_ok_locals_show
#define __pyx_n_u_EXTERNAL_STORAGE __pyx_mstate_global->__pyx_n_u_EXTERNAL_STORAGE
#define __pyx_kp_u_File_theme_s __pyx_mstate_global->__pyx_kp_u_File_theme_s
#define __pyx_kp_u_Hasil_CP __pyx_mstate_global->__pyx_kp_u_Hasil_CP
#define __pyx_kp_u_Hasil_OK __pyx_mstate_global->__pyx_kp_u_Hasil_OK
#define __pyx_kp_u_Jumlah_Akun __pyx_mstate_global->__pyx_kp_u_Jumlah_Akun
#define __pyx_kp_u_Ketikan_theme_all_untuk_menampil __pyx_mstate_global->__pyx_kp_u_Ketikan_theme_all_untuk_menampil
#define __pyx_kp_u_Ketikan_theme_all_untuk_menampil_2 __pyx_mstate_global->__pyx_kp_u_Ketikan_theme_all_untuk_menampil_2
#define __pyx_kp_u_MTF_cp_ig __pyx_mstate_global->__pyx_kp_u_MTF_cp_ig
#define __pyx_kp_u_MTF_ok_ig __pyx_mstate_global->__pyx_kp_u_MTF_ok_ig
#define __pyx_n_u_Nama __pyx_mstate_global->__pyx_n_u_Nama
#define __pyx_kp_u_Nama_File __pyx_mstate_global->__pyx_kp_u_Nama_File
#define __pyx_n_u_No __pyx_mstate_global->__pyx_n_u_No
#define __pyx_n_s_Path __pyx_mstate_global->__pyx_n_s_Path
#define __pyx_kp_u_Permission_Error __pyx_mstate_global->__pyx_kp_u_Permission_Error
#define __pyx_n_u_Pilihan __pyx_mstate_global->__pyx_n_u_Pilihan
#define __pyx_kp_u_Tampilkan_Informasi_theme_nama_t __pyx_mstate_global->__pyx_kp_u_Tampilkan_Informasi_theme_nama_t
#define __pyx_kp_u_Tidak_mempunyai_akses_ke_direkto __pyx_mstate_global->__pyx_kp_u_Tidak_mempunyai_akses_ke_direkto
#define __pyx_n_s_W_OK __pyx_mstate_global->__pyx_n_s_W_OK
#define __pyx_n_s__17 __pyx_mstate_global->__pyx_n_s__17
#define __pyx_kp_u__18 __pyx_mstate_global->__pyx_kp_u__18
#define __pyx_n_s__30 __pyx_mstate_global->__pyx_n_s__30
#define __pyx_kp_u__7 __pyx_mstate_global->__pyx_kp_u__7
#define __pyx_kp_u__8 __pyx_mstate_global->__pyx_kp_u__8
#define __pyx_kp_u__9 __pyx_mstate_global->__pyx_kp_u__9
#define __pyx_n_s_acc __pyx_mstate_global->__pyx_n_s_acc
#define __pyx_n_s_access __pyx_mstate_global->__pyx_n_s_access
#define __pyx_n_s_account __pyx_mstate_global->__pyx_n_s_account
#define __pyx_n_s_add __pyx_mstate_global->__pyx_n_s_add
#define __pyx_n_s_add_column __pyx_mstate_global->__pyx_n_s_add_column
#define __pyx_n_s_add_row __pyx_mstate_global->__pyx_n_s_add_row
#define __pyx_n_u_all __pyx_mstate_global->__pyx_n_u_all
#define __pyx_n_s_append __pyx_mstate_global->__pyx_n_s_append
#define __pyx_n_s_args __pyx_mstate_global->__pyx_n_s_args
#define __pyx_n_s_ask __pyx_mstate_global->__pyx_n_s_ask
#define __pyx_n_s_asyncio_coroutines __pyx_mstate_global->__pyx_n_s_asyncio_coroutines
#define __pyx_n_u_birthday __pyx_mstate_global->__pyx_n_u_birthday
#define __pyx_kp_u_bold_green __pyx_mstate_global->__pyx_kp_u_bold_green
#define __pyx_kp_u_bold_green_2 __pyx_mstate_global->__pyx_kp_u_bold_green_2
#define __pyx_kp_u_bold_green_Berhasil_dipindah_Ke __pyx_mstate_global->__pyx_kp_u_bold_green_Berhasil_dipindah_Ke
#define __pyx_kp_u_bold_green_Berhasil_disalin_Ke __pyx_mstate_global->__pyx_kp_u_bold_green_Berhasil_disalin_Ke
#define __pyx_kp_u_bold_green_s __pyx_mstate_global->__pyx_kp_u_bold_green_s
#define __pyx_kp_u_bold_red __pyx_mstate_global->__pyx_kp_u_bold_red
#define __pyx_kp_u_bold_red_0 __pyx_mstate_global->__pyx_kp_u_bold_red_0
#define __pyx_kp_u_bold_red_Gagal_memindah_File __pyx_mstate_global->__pyx_kp_u_bold_red_Gagal_memindah_File
#define __pyx_kp_u_bold_red_Gagal_menyalin_File __pyx_mstate_global->__pyx_kp_u_bold_red_Gagal_menyalin_File
#define __pyx_kp_u_bold_red_Kembali __pyx_mstate_global->__pyx_kp_u_bold_red_Kembali
#define __pyx_kp_u_bold_yellow __pyx_mstate_global->__pyx_kp_u_bold_yellow
#define __pyx_kp_u_bold_yellow_2 __pyx_mstate_global->__pyx_kp_u_bold_yellow_2
#define __pyx_kp_u_bold_yellow_s __pyx_mstate_global->__pyx_kp_u_bold_yellow_s
#define __pyx_n_s_caption __pyx_mstate_global->__pyx_n_s_caption
#define __pyx_n_u_center __pyx_mstate_global->__pyx_n_u_center
#define __pyx_n_s_choice __pyx_mstate_global->__pyx_n_s_choice
#define __pyx_n_s_choices __pyx_mstate_global->__pyx_n_s_choices
#define __pyx_n_s_class_getitem __pyx_mstate_global->__pyx_n_s_class_getitem
#define __pyx_n_s_cline_in_traceback __pyx_mstate_global->__pyx_n_s_cline_in_traceback
#define __pyx_n_s_close __pyx_mstate_global->__pyx_n_s_close
#define __pyx_n_s_confirm __pyx_mstate_global->__pyx_n_s_confirm
#define __pyx_n_s_controllers_ig_check_result __pyx_mstate_global->__pyx_n_s_controllers_ig_check_result
#define __pyx_n_u_cookie __pyx_mstate_global->__pyx_n_u_cookie
#define __pyx_n_s_copy __pyx_mstate_global->__pyx_n_s_copy
#define __pyx_n_u_copy __pyx_mstate_global->__pyx_n_u_copy
#define __pyx_n_s_copy_dir __pyx_mstate_global->__pyx_n_s_copy_dir
#define __pyx_n_s_copy_to_filename __pyx_mstate_global->__pyx_n_s_copy_to_filename
#define __pyx_n_s_copyfile __pyx_mstate_global->__pyx_n_s_copyfile
#define __pyx_n_s_cp __pyx_mstate_global->__pyx_n_s_cp
#define __pyx_n_u_created_at __pyx_mstate_global->__pyx_n_u_created_at
#define __pyx_n_s_data __pyx_mstate_global->__pyx_n_s_data
#define __pyx_n_u_data __pyx_mstate_global->__pyx_n_u_data
#define __pyx_n_s_detail __pyx_mstate_global->__pyx_n_s_detail
#define __pyx_n_u_detail __pyx_mstate_global->__pyx_n_u_detail
#define __pyx_n_s_dict __pyx_mstate_global->__pyx_n_s_dict
#define __pyx_kp_u_disable __pyx_mstate_global->__pyx_kp_u_disable
#define __pyx_n_s_doc __pyx_mstate_global->__pyx_n_s_doc
#define __pyx_n_u_email __pyx_mstate_global->__pyx_n_u_email
#define __pyx_kp_u_enable __pyx_mstate_global->__pyx_kp_u_enable
#define __pyx_n_s_encoding __pyx_mstate_global->__pyx_n_s_encoding
#define __pyx_n_s_enumerate __pyx_mstate_global->__pyx_n_s_enumerate
#define __pyx_n_s_environ __pyx_mstate_global->__pyx_n_s_environ
#define __pyx_n_s_escape __pyx_mstate_global->__pyx_n_s_escape
#define __pyx_n_s_exist_ok __pyx_mstate_global->__pyx_n_s_exist_ok
#define __pyx_n_s_expand __pyx_mstate_global->__pyx_n_s_expand
#define __pyx_n_s_external_storage __pyx_mstate_global->__pyx_n_s_external_storage
#define __pyx_n_s_file __pyx_mstate_global->__pyx_n_s_file
#define __pyx_n_u_file __pyx_mstate_global->__pyx_n_u_file
#define __pyx_n_s_files __pyx_mstate_global->__pyx_n_s_files
#define __pyx_n_u_followers __pyx_mstate_global->__pyx_n_u_followers
#define __pyx_n_u_following __pyx_mstate_global->__pyx_n_u_following
#define __pyx_kp_u_gc __pyx_mstate_global->__pyx_kp_u_gc
#define __pyx_n_s_genexpr __pyx_mstate_global->__pyx_n_s_genexpr
#define __pyx_n_s_get __pyx_mstate_global->__pyx_n_s_get
#define __pyx_n_s_glob __pyx_mstate_global->__pyx_n_s_glob
#define __pyx_n_s_handle __pyx_mstate_global->__pyx_n_s_handle
#define __pyx_n_s_i __pyx_mstate_global->__pyx_n_s_i
#define __pyx_n_s_ig __pyx_mstate_global->__pyx_n_s_ig
#define __pyx_n_s_ig_back __pyx_mstate_global->__pyx_n_s_ig_back
#define __pyx_n_s_ig_back_2 __pyx_mstate_global->__pyx_n_s_ig_back_2
#define __pyx_n_s_import __pyx_mstate_global->__pyx_n_s_import
#define __pyx_n_s_index __pyx_mstate_global->__pyx_n_s_index
#define __pyx_n_s_init __pyx_mstate_global->__pyx_n_s_init
#define __pyx_n_s_init_subclass __pyx_mstate_global->__pyx_n_s_init_subclass
#define __pyx_n_s_initializing __pyx_mstate_global->__pyx_n_s_initializing
#define __pyx_n_s_is_coroutine __pyx_mstate_global->__pyx_n_s_is_coroutine
#define __pyx_n_s_isdir __pyx_mstate_global->__pyx_n_s_isdir
#define __pyx_kp_u_isenabled __pyx_mstate_global->__pyx_kp_u_isenabled
#define __pyx_n_s_item __pyx_mstate_global->__pyx_n_s_item
#define __pyx_n_s_items __pyx_mstate_global->__pyx_n_s_items
#define __pyx_n_s_join __pyx_mstate_global->__pyx_n_s_join
#define __pyx_n_s_json __pyx_mstate_global->__pyx_n_s_json
#define __pyx_n_s_justify __pyx_mstate_global->__pyx_n_s_justify
#define __pyx_n_s_kwargs __pyx_mstate_global->__pyx_n_s_kwargs
#define __pyx_n_s_line __pyx_mstate_global->__pyx_n_s_line
#define __pyx_n_s_loads __pyx_mstate_global->__pyx_n_s_loads
#define __pyx_n_s_main __pyx_mstate_global->__pyx_n_s_main
#define __pyx_n_u_media __pyx_mstate_global->__pyx_n_u_media
#define __pyx_n_s_metaclass __pyx_mstate_global->__pyx_n_s_metaclass
#define __pyx_n_s_mkdir __pyx_mstate_global->__pyx_n_s_mkdir
#define __pyx_n_s_module __pyx_mstate_global->__pyx_n_s_module
#define __pyx_n_s_move __pyx_mstate_global->__pyx_n_s_move
#define __pyx_n_u_move __pyx_mstate_global->__pyx_n_u_move
#define __pyx_n_s_move_dir __pyx_mstate_global->__pyx_n_s_move_dir
#define __pyx_n_s_move_to_filename __pyx_mstate_global->__pyx_n_s_move_to_filename
#define __pyx_n_s_mro_entries __pyx_mstate_global->__pyx_n_s_mro_entries
#define __pyx_n_s_mtf_app_controllers __pyx_mstate_global->__pyx_n_s_mtf_app_controllers
#define __pyx_kp_s_mtf_app_controllers_ig_check_res __pyx_mstate_global->__pyx_kp_s_mtf_app_controllers_ig_check_res
#define __pyx_n_u_name __pyx_mstate_global->__pyx_n_u_name
#define __pyx_n_s_name_2 __pyx_mstate_global->__pyx_n_s_name_2
#define __pyx_n_s_node __pyx_mstate_global->__pyx_n_s_node
#define __pyx_n_s_ok __pyx_mstate_global->__pyx_n_s_ok
#define __pyx_n_s_open __pyx_mstate_global->__pyx_n_s_open
#define __pyx_n_s_os __pyx_mstate_global->__pyx_n_s_os
#define __pyx_n_s_output __pyx_mstate_global->__pyx_n_s_output
#define __pyx_n_s_panel __pyx_mstate_global->__pyx_n_s_panel
#define __pyx_n_s_parents __pyx_mstate_global->__pyx_n_s_parents
#define __pyx_n_s_password __pyx_mstate_global->__pyx_n_s_password
#define __pyx_n_u_password __pyx_mstate_global->__pyx_n_u_password
#define __pyx_n_s_path __pyx_mstate_global->__pyx_n_s_path
#define __pyx_n_s_pathlib __pyx_mstate_global->__pyx_n_s_pathlib
#define __pyx_kp_u_pensive_face_Belum_ada_hasil_sa __pyx_mstate_global->__pyx_kp_u_pensive_face_Belum_ada_hasil_sa
#define __pyx_n_u_phone __pyx_mstate_global->__pyx_n_u_phone
#define __pyx_n_s_pop __pyx_mstate_global->__pyx_n_s_pop
#define __pyx_n_s_prepare __pyx_mstate_global->__pyx_n_s_prepare
#define __pyx_n_s_print __pyx_mstate_global->__pyx_n_s_print
#define __pyx_n_s_profile __pyx_mstate_global->__pyx_n_s_profile
#define __pyx_n_u_profile __pyx_mstate_global->__pyx_n_u_profile
#define __pyx_n_s_prompt __pyx_mstate_global->__pyx_n_s_prompt
#define __pyx_n_s_qualname __pyx_mstate_global->__pyx_n_s_qualname
#define __pyx_n_u_r __pyx_mstate_global->__pyx_n_u_r
#define __pyx_n_s_range __pyx_mstate_global->__pyx_n_s_range
#define __pyx_n_s_read __pyx_mstate_global->__pyx_n_s_read
#define __pyx_kp_u_reset __pyx_mstate_global->__pyx_kp_u_reset
#define __pyx_kp_u_reset_Cookie_theme __pyx_mstate_global->__pyx_kp_u_reset_Cookie_theme
#define __pyx_kp_u_reset_Email_theme __pyx_mstate_global->__pyx_kp_u_reset_Email_theme
#define __pyx_kp_u_reset_Mengikuti_bold_yellow __pyx_mstate_global->__pyx_kp_u_reset_Mengikuti_bold_yellow
#define __pyx_kp_u_reset_Mengikuti_theme __pyx_mstate_global->__pyx_kp_u_reset_Mengikuti_theme
#define __pyx_kp_u_reset_Nama_bold_yellow __pyx_mstate_global->__pyx_kp_u_reset_Nama_bold_yellow
#define __pyx_kp_u_reset_Nama_theme __pyx_mstate_global->__pyx_kp_u_reset_Nama_theme
#define __pyx_kp_u_reset_Nomor_Telepon_theme __pyx_mstate_global->__pyx_kp_u_reset_Nomor_Telepon_theme
#define __pyx_kp_u_reset_Pengikut_bold_yellow __pyx_mstate_global->__pyx_kp_u_reset_Pengikut_bold_yellow
#define __pyx_kp_u_reset_Pengikut_theme __pyx_mstate_global->__pyx_kp_u_reset_Pengikut_theme
#define __pyx_kp_u_reset_Postingan_bold_yellow __pyx_mstate_global->__pyx_kp_u_reset_Postingan_bold_yellow
#define __pyx_kp_u_reset_Postingan_theme __pyx_mstate_global->__pyx_kp_u_reset_Postingan_theme
#define __pyx_kp_u_reset_Tgl_Lahir_theme __pyx_mstate_global->__pyx_kp_u_reset_Tgl_Lahir_theme
#define __pyx_kp_u_reset_Tgl_Pembuatan_Akun_theme __pyx_mstate_global->__pyx_kp_u_reset_Tgl_Pembuatan_Akun_theme
#define __pyx_kp_u_reset_bold_green __pyx_mstate_global->__pyx_kp_u_reset_bold_green
#define __pyx_kp_u_reset_bold_yellow __pyx_mstate_global->__pyx_kp_u_reset_bold_yellow
#define __pyx_kp_u_result_ig_CP_txt __pyx_mstate_global->__pyx_kp_u_result_ig_CP_txt
#define __pyx_kp_u_result_ig_OK_txt __pyx_mstate_global->__pyx_kp_u_result_ig_OK_txt
#define __pyx_n_s_rich __pyx_mstate_global->__pyx_n_s_rich
#define __pyx_n_s_root __pyx_mstate_global->__pyx_n_s_root
#define __pyx_n_s_self __pyx_mstate_global->__pyx_n_s_self
#define __pyx_n_s_send __pyx_mstate_global->__pyx_n_s_send
#define __pyx_n_s_set_name __pyx_mstate_global->__pyx_n_s_set_name
#define __pyx_n_s_short_name __pyx_mstate_global->__pyx_n_s_short_name
#define __pyx_n_s_show __pyx_mstate_global->__pyx_n_s_show
#define __pyx_n_s_show_info __pyx_mstate_global->__pyx_n_s_show_info
#define __pyx_n_s_shutil __pyx_mstate_global->__pyx_n_s_shutil
#define __pyx_n_s_spec __pyx_mstate_global->__pyx_n_s_spec
#define __pyx_n_s_split __pyx_mstate_global->__pyx_n_s_split
#define __pyx_n_s_splited __pyx_mstate_global->__pyx_n_s_splited
#define __pyx_n_s_splitlines __pyx_mstate_global->__pyx_n_s_splitlines
#define __pyx_n_s_style __pyx_mstate_global->__pyx_n_s_style
#define __pyx_n_s_subtitle __pyx_mstate_global->__pyx_n_s_subtitle
#define __pyx_n_s_super __pyx_mstate_global->__pyx_n_s_super
#define __pyx_n_s_table __pyx_mstate_global->__pyx_n_s_table
#define __pyx_n_s_test __pyx_mstate_global->__pyx_n_s_test
#define __pyx_kp_u_theme __pyx_mstate_global->__pyx_kp_u_theme
#define __pyx_kp_u_theme_1 __pyx_mstate_global->__pyx_kp_u_theme_1
#define __pyx_kp_u_theme_2 __pyx_mstate_global->__pyx_kp_u_theme_2
#define __pyx_kp_u_theme_Catatan_jika_file_sudah_a __pyx_mstate_global->__pyx_kp_u_theme_Catatan_jika_file_sudah_a
#define __pyx_kp_u_thinking_face_Mau_Cek_hasil_yan __pyx_mstate_global->__pyx_kp_u_thinking_face_Mau_Cek_hasil_yan
#define __pyx_kp_u_thinking_face_Mau_Cek_yang_Mana __pyx_mstate_global->__pyx_kp_u_thinking_face_Mau_Cek_yang_Mana
#define __pyx_n_s_throw __pyx_mstate_global->__pyx_n_s_throw
#define __pyx_n_s_title __pyx_mstate_global->__pyx_n_s_title
#define __pyx_kp_u_tools_instagram_cek_hasil_crack __pyx_mstate_global->__pyx_kp_u_tools_instagram_cek_hasil_crack
#define __pyx_n_s_tree __pyx_mstate_global->__pyx_n_s_tree
#define __pyx_n_s_userid __pyx_mstate_global->__pyx_n_s_userid
#define __pyx_n_u_userid __pyx_mstate_global->__pyx_n_u_userid
#define __pyx_kp_u_utf_8 __pyx_mstate_global->__pyx_kp_u_utf_8
#define __pyx_int_0 __pyx_mstate_global->__pyx_int_0
#define __pyx_int_1 __pyx_mstate_global->__pyx_int_1
#define __pyx_int_2 __pyx_mstate_global->__pyx_int_2
#define __pyx_tuple_ __pyx_mstate_global->__pyx_tuple_
#define __pyx_tuple__2 __pyx_mstate_global->__pyx_tuple__2
#define __pyx_tuple__3 __pyx_mstate_global->__pyx_tuple__3
#define __pyx_tuple__4 __pyx_mstate_global->__pyx_tuple__4
#define __pyx_tuple__5 __pyx_mstate_global->__pyx_tuple__5
#define __pyx_tuple__6 __pyx_mstate_global->__pyx_tuple__6
#define __pyx_slice__10 __pyx_mstate_global->__pyx_slice__10
#define __pyx_tuple__11 __pyx_mstate_global->__pyx_tuple__11
#define __pyx_tuple__12 __pyx_mstate_global->__pyx_tuple__12
#define __pyx_tuple__13 __pyx_mstate_global->__pyx_tuple__13
#define __pyx_tuple__14 __pyx_mstate_global->__pyx_tuple__14
#define __pyx_tuple__19 __pyx_mstate_global->__pyx_tuple__19
#define __pyx_tuple__21 __pyx_mstate_global->__pyx_tuple__21
#define __pyx_tuple__23 __pyx_mstate_global->__pyx_tuple__23
#define __pyx_tuple__25 __pyx_mstate_global->__pyx_tuple__25
#define __pyx_tuple__27 __pyx_mstate_global->__pyx_tuple__27
#define __pyx_codeobj__15 __pyx_mstate_global->__pyx_codeobj__15
#define __pyx_codeobj__16 __pyx_mstate_global->__pyx_codeobj__16
#define __pyx_codeobj__20 __pyx_mstate_global->__pyx_codeobj__20
#define __pyx_codeobj__22 __pyx_mstate_global->__pyx_codeobj__22
#define __pyx_codeobj__24 __pyx_mstate_global->__pyx_codeobj__24
#define __pyx_codeobj__26 __pyx_mstate_global->__pyx_codeobj__26
#define __pyx_codeobj__28 __pyx_mstate_global->__pyx_codeobj__28
#define __pyx_codeobj__29 __pyx_mstate_global->__pyx_codeobj__29
 

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_1__init__ = {"__init__", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_1__init__, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_kwargs = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
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
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
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
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 12, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, __pyx_v_kwargs, values + 0, kwd_pos_args, "__init__") < 0)) __PYX_ERR(0, 12, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 12, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller___init__(__pyx_self, __pyx_v_self, __pyx_v_kwargs);

   
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

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 1);

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Controller); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_1);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1)) __PYX_ERR(0, 13, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_self);
  __Pyx_GIVEREF(__pyx_v_self);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_v_self)) __PYX_ERR(0, 13, __pyx_L1_error);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_super, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_init); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyDict_Copy(__pyx_v_kwargs); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_3handle(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_3handle = {"handle", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_3handle, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_3handle(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("handle (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
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
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 15, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "handle") < 0)) __PYX_ERR(0, 15, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("handle", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 15, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.handle", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller_2handle(__pyx_self, __pyx_v_self);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2handle(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_v_rich = NULL;
  PyObject *__pyx_v_table = NULL;
  PyObject *__pyx_v_choice = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("handle", 1);

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_rich); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 16, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_rich = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_table); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_expand, Py_True) < 0) __PYX_ERR(0, 17, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_title, __pyx_kp_u_thinking_face_Mau_Cek_yang_Mana) < 0) __PYX_ERR(0, 17, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_table = __pyx_t_3;
  __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 18, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 18, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 18, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple_, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 18, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 19, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__2, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_row); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__3, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_row); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 21, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 21, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_row); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__5, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
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
    PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_v_table};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_prompt); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ask); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = PyList_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_INCREF(__pyx_kp_u_0);
  __Pyx_GIVEREF(__pyx_kp_u_0);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 0, __pyx_kp_u_0)) __PYX_ERR(0, 24, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_1);
  __Pyx_GIVEREF(__pyx_kp_u_1);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 1, __pyx_kp_u_1)) __PYX_ERR(0, 24, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_2);
  __Pyx_GIVEREF(__pyx_kp_u_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 2, __pyx_kp_u_2)) __PYX_ERR(0, 24, __pyx_L1_error);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_choices, __pyx_t_1) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__6, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_choice = __pyx_t_2;
  __pyx_t_2 = 0;

   
  __pyx_t_5 = (__Pyx_PyInt_BoolEqObjC(__pyx_v_choice, __pyx_int_1, 1, 0)); if (unlikely((__pyx_t_5 < 0))) __PYX_ERR(0, 25, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ok); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
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
      PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 26, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    goto __pyx_L3;
  }

   
  __pyx_t_5 = (__Pyx_PyInt_BoolEqObjC(__pyx_v_choice, __pyx_int_2, 2, 0)); if (unlikely((__pyx_t_5 < 0))) __PYX_ERR(0, 27, __pyx_L1_error)
  if (__pyx_t_5) {

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_cp); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 28, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
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
      PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 28, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    goto __pyx_L3;
  }

   
    {
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ig_back); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 30, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
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
      PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 30, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_L3:;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.handle", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_rich);
  __Pyx_XDECREF(__pyx_v_table);
  __Pyx_XDECREF(__pyx_v_choice);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_5move(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_5move = {"move", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_5move, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_5move(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_files = 0;
  PyObject *__pyx_v_move_dir = 0;
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
  __Pyx_RefNannySetupContext("move (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_files,&__pyx_n_s_move_dir,0};
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
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 32, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_files)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 32, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("move", 1, 3, 3, 1); __PYX_ERR(0, 32, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_move_dir)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 32, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("move", 1, 3, 3, 2); __PYX_ERR(0, 32, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "move") < 0)) __PYX_ERR(0, 32, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 3)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_files = values[1];
    __pyx_v_move_dir = values[2];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("move", 1, 3, 3, __pyx_nargs); __PYX_ERR(0, 32, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.move", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller_4move(__pyx_self, __pyx_v_self, __pyx_v_files, __pyx_v_move_dir);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_4move(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_files, PyObject *__pyx_v_move_dir) {
  PyObject *__pyx_v_rich = NULL;
  PyObject *__pyx_v_external_storage = NULL;
  PyObject *__pyx_v_root = NULL;
  PyObject *__pyx_v_file = NULL;
  PyObject *__pyx_v_move_to_filename = NULL;
  PyObject *__pyx_v_node = NULL;
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
  int __pyx_t_9;
  int __pyx_t_10;
  Py_ssize_t __pyx_t_11;
  PyObject *(*__pyx_t_12)(PyObject *);
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  PyObject *__pyx_t_19 = NULL;
  PyObject *__pyx_t_20 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("move", 0);
  __Pyx_INCREF(__pyx_v_move_dir);

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_rich); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 33, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_rich = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_environ); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_EXTERNAL_STORAGE); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 34, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_external_storage = __pyx_t_1;
  __pyx_t_1 = 0;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_4, &__pyx_t_5);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_5);
      {

       
      #ifndef CYTHON_WITHOUT_ASSERTIONS
      if (unlikely(__pyx_assertions_enabled())) {
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_os); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 36, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_access); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 36, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_os); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 36, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_W_OK); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 36, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_2, __pyx_v_external_storage, __pyx_t_7};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 36, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        }
        __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_9 < 0))) __PYX_ERR(0, 36, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_9)) {
          __Pyx_Raise(__pyx_builtin_AssertionError, 0, 0, 0);
          __PYX_ERR(0, 36, __pyx_L3_error)
        }
      }
      #else
      if ((1)); else __PYX_ERR(0, 36, __pyx_L3_error)
      #endif

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_os); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 37, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_path); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 37, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_join); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 37, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[3] = {__pyx_t_7, __pyx_v_external_storage, __pyx_v_move_dir};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 37, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __Pyx_DECREF_SET(__pyx_v_move_dir, __pyx_t_1);
      __pyx_t_1 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_os); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 38, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_path); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 38, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_isdir); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 38, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_v_move_dir};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 38, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_9 < 0))) __PYX_ERR(0, 38, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_10 = (!__pyx_t_9);
      if (__pyx_t_10) {

         
        __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_pathlib); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 39, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_Path); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 39, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_7))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_v_move_dir};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        }
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_mkdir); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 39, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_parents, Py_True) < 0) __PYX_ERR(0, 39, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_exist_ok, Py_True) < 0) __PYX_ERR(0, 39, __pyx_L3_error)
        __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 39, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

         
      }

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 41, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, NULL};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 41, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_prompt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_ask); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 42, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_kp_u_theme_Catatan_jika_file_sudah_a};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 42, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 43, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_1 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_kp_u__7};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 43, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __pyx_v_root = __pyx_t_6;
      __pyx_t_6 = 0;

       
      if (likely(PyList_CheckExact(__pyx_v_files)) || PyTuple_CheckExact(__pyx_v_files)) {
        __pyx_t_6 = __pyx_v_files; __Pyx_INCREF(__pyx_t_6);
        __pyx_t_11 = 0;
        __pyx_t_12 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_6 = PyObject_GetIter(__pyx_v_files); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 44, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_12 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_6); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 44, __pyx_L3_error)
      }
      for (;;) {
        if (likely(!__pyx_t_12)) {
          if (likely(PyList_CheckExact(__pyx_t_6))) {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_6);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 44, __pyx_L3_error)
              #endif
              if (__pyx_t_11 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyList_GET_ITEM(__pyx_t_6, __pyx_t_11); __Pyx_INCREF(__pyx_t_7); __pyx_t_11++; if (unlikely((0 < 0))) __PYX_ERR(0, 44, __pyx_L3_error)
            #else
            __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 44, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          } else {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_6);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 44, __pyx_L3_error)
              #endif
              if (__pyx_t_11 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyTuple_GET_ITEM(__pyx_t_6, __pyx_t_11); __Pyx_INCREF(__pyx_t_7); __pyx_t_11++; if (unlikely((0 < 0))) __PYX_ERR(0, 44, __pyx_L3_error)
            #else
            __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 44, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          }
        } else {
          __pyx_t_7 = __pyx_t_12(__pyx_t_6);
          if (unlikely(!__pyx_t_7)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 44, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_7);
        }
        __Pyx_XDECREF_SET(__pyx_v_file, __pyx_t_7);
        __pyx_t_7 = 0;

         
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 45, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_path); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_join); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 45, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_file, __pyx_n_s_split); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 45, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_13);
        __pyx_t_14 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_13))) {
          __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_13);
          if (likely(__pyx_t_14)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
            __Pyx_INCREF(__pyx_t_14);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_13, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_14, __pyx_kp_u__8};
          __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_13, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        }
        __pyx_t_13 = __Pyx_PyObject_Pop(__pyx_t_2); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 45, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_2, __pyx_v_move_dir, __pyx_t_13};
          __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 45, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __Pyx_XDECREF_SET(__pyx_v_move_to_filename, __pyx_t_7);
        __pyx_t_7 = 0;

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 46, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_File_theme_s, __pyx_v_file); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 46, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_13);
        __pyx_t_2 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_13};
          __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 46, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __Pyx_XDECREF_SET(__pyx_v_node, __pyx_t_7);
        __pyx_t_7 = 0;

         
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __Pyx_ExceptionSave(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17);
          __Pyx_XGOTREF(__pyx_t_15);
          __Pyx_XGOTREF(__pyx_t_16);
          __Pyx_XGOTREF(__pyx_t_17);
            {

             
            __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_shutil); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 48, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_move); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 48, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_13);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = NULL;
            __pyx_t_8 = 0;
            #if CYTHON_UNPACK_METHODS
            if (unlikely(PyMethod_Check(__pyx_t_13))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_13);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_13, function);
                __pyx_t_8 = 1;
              }
            }
            #endif
            {
              PyObject *__pyx_callargs[3] = {__pyx_t_1, __pyx_v_file, __pyx_v_move_to_filename};
              __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_13, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
              __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
              if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 48, __pyx_L12_error)
              __Pyx_GOTREF(__pyx_t_7);
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            }
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

             
          }

           
            {
            __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 52, __pyx_L14_except_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_1 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_bold_green_Berhasil_dipindah_Ke, __pyx_v_move_to_filename); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 52, __pyx_L14_except_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_2 = NULL;
            __pyx_t_8 = 0;
            #if CYTHON_UNPACK_METHODS
            if (likely(PyMethod_Check(__pyx_t_13))) {
              __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_13);
              if (likely(__pyx_t_2)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
                __Pyx_INCREF(__pyx_t_2);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_13, function);
                __pyx_t_8 = 1;
              }
            }
            #endif
            {
              PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_1};
              __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_13, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
              __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
              if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 52, __pyx_L14_except_error)
              __Pyx_GOTREF(__pyx_t_7);
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            }
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          }
          __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
          goto __pyx_L19_try_end;
          __pyx_L12_error:;
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

           
            {
            __Pyx_AddTraceback("controllers.ig.check_result.Controller.move", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_13, &__pyx_t_1) < 0) __PYX_ERR(0, 49, __pyx_L14_except_error)
            __Pyx_XGOTREF(__pyx_t_7);
            __Pyx_XGOTREF(__pyx_t_13);
            __Pyx_XGOTREF(__pyx_t_1);

             
            __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 50, __pyx_L14_except_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_18 = NULL;
            __pyx_t_8 = 0;
            #if CYTHON_UNPACK_METHODS
            if (likely(PyMethod_Check(__pyx_t_14))) {
              __pyx_t_18 = PyMethod_GET_SELF(__pyx_t_14);
              if (likely(__pyx_t_18)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_14);
                __Pyx_INCREF(__pyx_t_18);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_14, function);
                __pyx_t_8 = 1;
              }
            }
            #endif
            {
              PyObject *__pyx_callargs[2] = {__pyx_t_18, __pyx_kp_u_bold_red_Gagal_memindah_File};
              __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_14, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
              __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
              if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 50, __pyx_L14_except_error)
              __Pyx_GOTREF(__pyx_t_2);
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            }
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            goto __pyx_L13_exception_handled;
          }

           
          __pyx_L14_except_error:;
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_XGIVEREF(__pyx_t_16);
          __Pyx_XGIVEREF(__pyx_t_17);
          __Pyx_ExceptionReset(__pyx_t_15, __pyx_t_16, __pyx_t_17);
          goto __pyx_L3_error;
          __pyx_L13_exception_handled:;
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_XGIVEREF(__pyx_t_16);
          __Pyx_XGIVEREF(__pyx_t_17);
          __Pyx_ExceptionReset(__pyx_t_15, __pyx_t_16, __pyx_t_17);
          __pyx_L19_try_end:;
        }

         
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 53, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_13 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_13, NULL};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 53, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 54, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_13 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_13, __pyx_v_root};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 54, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 55, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_13 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_13, NULL};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 55, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
    __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
    __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_AssertionError);
    if (__pyx_t_8) {
      __Pyx_AddTraceback("controllers.ig.check_result.Controller.move", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_1, &__pyx_t_13) < 0) __PYX_ERR(0, 56, __pyx_L5_except_error)
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_1);
      __Pyx_XGOTREF(__pyx_t_13);

       
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 57, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 57, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_14);
      __pyx_t_18 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Tidak_mempunyai_akses_ke_direkto, __pyx_v_external_storage); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 57, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_18);
      __pyx_t_19 = PyTuple_New(1); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 57, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_19);
      __Pyx_GIVEREF(__pyx_t_18);
      if (__Pyx_PyTuple_SET_ITEM(__pyx_t_19, 0, __pyx_t_18)) __PYX_ERR(0, 57, __pyx_L5_except_error);
      __pyx_t_18 = 0;
      __pyx_t_18 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 57, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_18);
      if (PyDict_SetItem(__pyx_t_18, __pyx_n_s_title, __pyx_kp_u_Permission_Error) < 0) __PYX_ERR(0, 57, __pyx_L5_except_error)
      if (PyDict_SetItem(__pyx_t_18, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 57, __pyx_L5_except_error)
      __pyx_t_20 = __Pyx_PyObject_Call(__pyx_t_14, __pyx_t_19, __pyx_t_18); if (unlikely(!__pyx_t_20)) __PYX_ERR(0, 57, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_20);
      __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
      __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
      __Pyx_DECREF(__pyx_t_18); __pyx_t_18 = 0;
      __pyx_t_18 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_18 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_18)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_18);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[4] = {__pyx_t_18, __pyx_kp_u__7, __pyx_t_20, __pyx_kp_u__7};
        __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_8, 3+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
        __Pyx_DECREF(__pyx_t_20); __pyx_t_20 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 57, __pyx_L5_except_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      }
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;

     
    __pyx_L5_except_error:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    __pyx_L8_try_end:;
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_XDECREF(__pyx_t_18);
  __Pyx_XDECREF(__pyx_t_19);
  __Pyx_XDECREF(__pyx_t_20);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.move", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_rich);
  __Pyx_XDECREF(__pyx_v_external_storage);
  __Pyx_XDECREF(__pyx_v_root);
  __Pyx_XDECREF(__pyx_v_file);
  __Pyx_XDECREF(__pyx_v_move_to_filename);
  __Pyx_XDECREF(__pyx_v_node);
  __Pyx_XDECREF(__pyx_v_move_dir);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_7copy(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_7copy = {"copy", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_7copy, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_7copy(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_files = 0;
  PyObject *__pyx_v_copy_dir = 0;
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
  __Pyx_RefNannySetupContext("copy (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_files,&__pyx_n_s_copy_dir,0};
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
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 59, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_files)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 59, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("copy", 1, 3, 3, 1); __PYX_ERR(0, 59, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_copy_dir)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[2]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 59, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("copy", 1, 3, 3, 2); __PYX_ERR(0, 59, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "copy") < 0)) __PYX_ERR(0, 59, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 3)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
      values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
    }
    __pyx_v_self = values[0];
    __pyx_v_files = values[1];
    __pyx_v_copy_dir = values[2];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("copy", 1, 3, 3, __pyx_nargs); __PYX_ERR(0, 59, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.copy", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller_6copy(__pyx_self, __pyx_v_self, __pyx_v_files, __pyx_v_copy_dir);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_6copy(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_files, PyObject *__pyx_v_copy_dir) {
  PyObject *__pyx_v_rich = NULL;
  PyObject *__pyx_v_external_storage = NULL;
  PyObject *__pyx_v_root = NULL;
  PyObject *__pyx_v_file = NULL;
  PyObject *__pyx_v_copy_to_filename = NULL;
  PyObject *__pyx_v_node = NULL;
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
  int __pyx_t_9;
  int __pyx_t_10;
  Py_ssize_t __pyx_t_11;
  PyObject *(*__pyx_t_12)(PyObject *);
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  PyObject *__pyx_t_17 = NULL;
  PyObject *__pyx_t_18 = NULL;
  PyObject *__pyx_t_19 = NULL;
  PyObject *__pyx_t_20 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("copy", 0);
  __Pyx_INCREF(__pyx_v_copy_dir);

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_rich); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_rich = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_environ); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_t_2, __pyx_n_u_EXTERNAL_STORAGE); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_external_storage = __pyx_t_1;
  __pyx_t_1 = 0;

   
  {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_4, &__pyx_t_5);
    __Pyx_XGOTREF(__pyx_t_3);
    __Pyx_XGOTREF(__pyx_t_4);
    __Pyx_XGOTREF(__pyx_t_5);
      {

       
      #ifndef CYTHON_WITHOUT_ASSERTIONS
      if (unlikely(__pyx_assertions_enabled())) {
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_os); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_access); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 63, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_os); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_W_OK); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 63, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_6))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_6);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_2, __pyx_v_external_storage, __pyx_t_7};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 63, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        }
        __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_9 < 0))) __PYX_ERR(0, 63, __pyx_L3_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_9)) {
          __Pyx_Raise(__pyx_builtin_AssertionError, 0, 0, 0);
          __PYX_ERR(0, 63, __pyx_L3_error)
        }
      }
      #else
      if ((1)); else __PYX_ERR(0, 63, __pyx_L3_error)
      #endif

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_os); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 64, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_path); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 64, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_join); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 64, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[3] = {__pyx_t_7, __pyx_v_external_storage, __pyx_v_copy_dir};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 64, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __Pyx_DECREF_SET(__pyx_v_copy_dir, __pyx_t_1);
      __pyx_t_1 = 0;

       
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_os); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 65, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_path); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 65, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_isdir); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 65, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_v_copy_dir};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 65, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_9 < 0))) __PYX_ERR(0, 65, __pyx_L3_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_10 = (!__pyx_t_9);
      if (__pyx_t_10) {

         
        __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_pathlib); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 66, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_Path); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 66, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (unlikely(PyMethod_Check(__pyx_t_7))) {
          __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_7);
          if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_6, __pyx_v_copy_dir};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 66, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        }
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_mkdir); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 66, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 66, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_parents, Py_True) < 0) __PYX_ERR(0, 66, __pyx_L3_error)
        if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_exist_ok, Py_True) < 0) __PYX_ERR(0, 66, __pyx_L3_error)
        __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 66, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

         
      }

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 68, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, NULL};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 68, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_prompt); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 69, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_ask); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 69, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_kp_u_theme_Catatan_jika_file_sudah_a};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 69, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 70, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_1 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_7, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_kp_u__7};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 70, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __pyx_v_root = __pyx_t_6;
      __pyx_t_6 = 0;

       
      if (likely(PyList_CheckExact(__pyx_v_files)) || PyTuple_CheckExact(__pyx_v_files)) {
        __pyx_t_6 = __pyx_v_files; __Pyx_INCREF(__pyx_t_6);
        __pyx_t_11 = 0;
        __pyx_t_12 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_6 = PyObject_GetIter(__pyx_v_files); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 71, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_12 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_6); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 71, __pyx_L3_error)
      }
      for (;;) {
        if (likely(!__pyx_t_12)) {
          if (likely(PyList_CheckExact(__pyx_t_6))) {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_6);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 71, __pyx_L3_error)
              #endif
              if (__pyx_t_11 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyList_GET_ITEM(__pyx_t_6, __pyx_t_11); __Pyx_INCREF(__pyx_t_7); __pyx_t_11++; if (unlikely((0 < 0))) __PYX_ERR(0, 71, __pyx_L3_error)
            #else
            __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 71, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          } else {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_6);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 71, __pyx_L3_error)
              #endif
              if (__pyx_t_11 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_7 = PyTuple_GET_ITEM(__pyx_t_6, __pyx_t_11); __Pyx_INCREF(__pyx_t_7); __pyx_t_11++; if (unlikely((0 < 0))) __PYX_ERR(0, 71, __pyx_L3_error)
            #else
            __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 71, __pyx_L3_error)
            __Pyx_GOTREF(__pyx_t_7);
            #endif
          }
        } else {
          __pyx_t_7 = __pyx_t_12(__pyx_t_6);
          if (unlikely(!__pyx_t_7)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 71, __pyx_L3_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_7);
        }
        __Pyx_XDECREF_SET(__pyx_v_file, __pyx_t_7);
        __pyx_t_7 = 0;

         
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_os); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 72, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_path); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 72, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_join); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 72, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_file, __pyx_n_s_split); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 72, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_13);
        __pyx_t_14 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_13))) {
          __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_13);
          if (likely(__pyx_t_14)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
            __Pyx_INCREF(__pyx_t_14);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_13, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_14, __pyx_kp_u__8};
          __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_13, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 72, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        }
        __pyx_t_13 = __Pyx_PyObject_Pop(__pyx_t_2); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 72, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_13);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_2, __pyx_v_copy_dir, __pyx_t_13};
          __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 72, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __Pyx_XDECREF_SET(__pyx_v_copy_to_filename, __pyx_t_7);
        __pyx_t_7 = 0;

         
        __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 73, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_13 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_File_theme_s, __pyx_v_file); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 73, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_13);
        __pyx_t_2 = NULL;
        __pyx_t_8 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_1))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_1, function);
            __pyx_t_8 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_13};
          __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
          if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 73, __pyx_L3_error)
          __Pyx_GOTREF(__pyx_t_7);
          __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        }
        __Pyx_XDECREF_SET(__pyx_v_node, __pyx_t_7);
        __pyx_t_7 = 0;

         
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __Pyx_ExceptionSave(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17);
          __Pyx_XGOTREF(__pyx_t_15);
          __Pyx_XGOTREF(__pyx_t_16);
          __Pyx_XGOTREF(__pyx_t_17);
            {

             
            __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_shutil); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 75, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_copyfile); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 75, __pyx_L12_error)
            __Pyx_GOTREF(__pyx_t_13);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = NULL;
            __pyx_t_8 = 0;
            #if CYTHON_UNPACK_METHODS
            if (unlikely(PyMethod_Check(__pyx_t_13))) {
              __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_13);
              if (likely(__pyx_t_1)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
                __Pyx_INCREF(__pyx_t_1);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_13, function);
                __pyx_t_8 = 1;
              }
            }
            #endif
            {
              PyObject *__pyx_callargs[3] = {__pyx_t_1, __pyx_v_file, __pyx_v_copy_to_filename};
              __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_13, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
              __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
              if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 75, __pyx_L12_error)
              __Pyx_GOTREF(__pyx_t_7);
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            }
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;

             
          }

           
            {
            __pyx_t_13 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 79, __pyx_L14_except_error)
            __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_1 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_bold_green_Berhasil_disalin_Ke, __pyx_v_copy_to_filename); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 79, __pyx_L14_except_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_2 = NULL;
            __pyx_t_8 = 0;
            #if CYTHON_UNPACK_METHODS
            if (likely(PyMethod_Check(__pyx_t_13))) {
              __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_13);
              if (likely(__pyx_t_2)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_13);
                __Pyx_INCREF(__pyx_t_2);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_13, function);
                __pyx_t_8 = 1;
              }
            }
            #endif
            {
              PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_t_1};
              __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_13, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
              __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
              if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 79, __pyx_L14_except_error)
              __Pyx_GOTREF(__pyx_t_7);
              __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
            }
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
          }
          __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
          goto __pyx_L19_try_end;
          __pyx_L12_error:;
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

           
            {
            __Pyx_AddTraceback("controllers.ig.check_result.Controller.copy", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_13, &__pyx_t_1) < 0) __PYX_ERR(0, 76, __pyx_L14_except_error)
            __Pyx_XGOTREF(__pyx_t_7);
            __Pyx_XGOTREF(__pyx_t_13);
            __Pyx_XGOTREF(__pyx_t_1);

             
            __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 77, __pyx_L14_except_error)
            __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_18 = NULL;
            __pyx_t_8 = 0;
            #if CYTHON_UNPACK_METHODS
            if (likely(PyMethod_Check(__pyx_t_14))) {
              __pyx_t_18 = PyMethod_GET_SELF(__pyx_t_14);
              if (likely(__pyx_t_18)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_14);
                __Pyx_INCREF(__pyx_t_18);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_14, function);
                __pyx_t_8 = 1;
              }
            }
            #endif
            {
              PyObject *__pyx_callargs[2] = {__pyx_t_18, __pyx_kp_u_bold_red_Gagal_menyalin_File};
              __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_14, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
              __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
              if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 77, __pyx_L14_except_error)
              __Pyx_GOTREF(__pyx_t_2);
              __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
            }
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            goto __pyx_L13_exception_handled;
          }

           
          __pyx_L14_except_error:;
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_XGIVEREF(__pyx_t_16);
          __Pyx_XGIVEREF(__pyx_t_17);
          __Pyx_ExceptionReset(__pyx_t_15, __pyx_t_16, __pyx_t_17);
          goto __pyx_L3_error;
          __pyx_L13_exception_handled:;
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_XGIVEREF(__pyx_t_16);
          __Pyx_XGIVEREF(__pyx_t_17);
          __Pyx_ExceptionReset(__pyx_t_15, __pyx_t_16, __pyx_t_17);
          __pyx_L19_try_end:;
        }

         
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 80, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_13 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_13, NULL};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 80, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 81, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_13 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_13, __pyx_v_root};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 81, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
      __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 82, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_13 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_13)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_13);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_13, NULL};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 82, __pyx_L3_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

       
    }
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    goto __pyx_L8_try_end;
    __pyx_L3_error:;
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
    __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
    __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;

     
    __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_AssertionError);
    if (__pyx_t_8) {
      __Pyx_AddTraceback("controllers.ig.check_result.Controller.copy", __pyx_clineno, __pyx_lineno, __pyx_filename);
      if (__Pyx_GetException(&__pyx_t_6, &__pyx_t_1, &__pyx_t_13) < 0) __PYX_ERR(0, 83, __pyx_L5_except_error)
      __Pyx_XGOTREF(__pyx_t_6);
      __Pyx_XGOTREF(__pyx_t_1);
      __Pyx_XGOTREF(__pyx_t_13);

       
      __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 84, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_14 = __Pyx_PyObject_GetAttrStr(__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 84, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_14);
      __pyx_t_18 = __Pyx_PyUnicode_FormatSafe(__pyx_kp_u_Tidak_mempunyai_akses_ke_direkto, __pyx_v_external_storage); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 84, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_18);
      __pyx_t_19 = PyTuple_New(1); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 84, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_19);
      __Pyx_GIVEREF(__pyx_t_18);
      if (__Pyx_PyTuple_SET_ITEM(__pyx_t_19, 0, __pyx_t_18)) __PYX_ERR(0, 84, __pyx_L5_except_error);
      __pyx_t_18 = 0;
      __pyx_t_18 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 84, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_18);
      if (PyDict_SetItem(__pyx_t_18, __pyx_n_s_title, __pyx_kp_u_Permission_Error) < 0) __PYX_ERR(0, 84, __pyx_L5_except_error)
      if (PyDict_SetItem(__pyx_t_18, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 84, __pyx_L5_except_error)
      __pyx_t_20 = __Pyx_PyObject_Call(__pyx_t_14, __pyx_t_19, __pyx_t_18); if (unlikely(!__pyx_t_20)) __PYX_ERR(0, 84, __pyx_L5_except_error)
      __Pyx_GOTREF(__pyx_t_20);
      __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
      __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
      __Pyx_DECREF(__pyx_t_18); __pyx_t_18 = 0;
      __pyx_t_18 = NULL;
      __pyx_t_8 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_18 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_18)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
          __Pyx_INCREF(__pyx_t_18);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_2, function);
          __pyx_t_8 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[4] = {__pyx_t_18, __pyx_kp_u__7, __pyx_t_20, __pyx_kp_u__7};
        __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_8, 3+__pyx_t_8);
        __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
        __Pyx_DECREF(__pyx_t_20); __pyx_t_20 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 84, __pyx_L5_except_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      }
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
      goto __pyx_L4_exception_handled;
    }
    goto __pyx_L5_except_error;

     
    __pyx_L5_except_error:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
    __Pyx_XGIVEREF(__pyx_t_3);
    __Pyx_XGIVEREF(__pyx_t_4);
    __Pyx_XGIVEREF(__pyx_t_5);
    __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
    __pyx_L8_try_end:;
  }

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_XDECREF(__pyx_t_18);
  __Pyx_XDECREF(__pyx_t_19);
  __Pyx_XDECREF(__pyx_t_20);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.copy", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_rich);
  __Pyx_XDECREF(__pyx_v_external_storage);
  __Pyx_XDECREF(__pyx_v_root);
  __Pyx_XDECREF(__pyx_v_file);
  __Pyx_XDECREF(__pyx_v_copy_to_filename);
  __Pyx_XDECREF(__pyx_v_node);
  __Pyx_XDECREF(__pyx_v_copy_dir);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_9ok(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_9ok = {"ok", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_9ok, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_9ok(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("ok (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
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
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 86, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "ok") < 0)) __PYX_ERR(0, 86, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("ok", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 86, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.ok", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller_8ok(__pyx_self, __pyx_v_self);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_2ok_1show(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_2ok_1show = {"show", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_2ok_1show, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_2ok_1show(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_account = 0;
  PyObject *__pyx_v_show_info = 0;
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
  __Pyx_RefNannySetupContext("show (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_account,&__pyx_n_s_show_info,0};
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
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_account)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 118, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_show_info)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 118, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("show", 1, 2, 2, 1); __PYX_ERR(0, 118, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "show") < 0)) __PYX_ERR(0, 118, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_account = values[0];
    __pyx_v_show_info = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("show", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 118, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.ok.show", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_show(__pyx_self, __pyx_v_account, __pyx_v_show_info);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_show(PyObject *__pyx_self, PyObject *__pyx_v_account, PyObject *__pyx_v_show_info) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *__pyx_cur_scope;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *__pyx_outer_scope;
  PyObject *__pyx_v_root = NULL;
  PyObject *__pyx_v_acc = NULL;
  PyObject *__pyx_v_detail = NULL;
  PyObject *__pyx_v_profile = NULL;
  PyObject *__pyx_v_node = NULL;
  PyObject *__pyx_v_output = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  Py_ssize_t __pyx_t_5;
  PyObject *(*__pyx_t_6)(PyObject *);
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  Py_ssize_t __pyx_t_9;
  Py_UCS4 __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("show", 1);
  __pyx_outer_scope = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 119, __pyx_L1_error) }
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 119, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
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
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 119, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 120, __pyx_L1_error) }
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 120, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
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
    PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_kp_u__7};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_v_root = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_account, __pyx_n_u_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 121, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2);
    __pyx_t_5 = 0;
    __pyx_t_6 = NULL;
  } else {
    __pyx_t_5 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 121, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 121, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_6)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 121, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_5); __Pyx_INCREF(__pyx_t_1); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 121, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 121, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 121, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_5); __Pyx_INCREF(__pyx_t_1); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 121, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 121, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_6(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 121, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_acc, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_detail); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 122, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_XDECREF_SET(__pyx_v_detail, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_detail, __pyx_n_u_profile); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 123, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_XDECREF_SET(__pyx_v_profile, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_v_show_info); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 124, __pyx_L1_error)
    if (__pyx_t_7) {

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_8 = PyTuple_New(4); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_9 = 0;
      __pyx_t_10 = 127;
      __Pyx_INCREF(__pyx_kp_u_bold_green);
      __pyx_t_9 += 12;
      __Pyx_GIVEREF(__pyx_kp_u_bold_green);
      PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_kp_u_bold_green);
      __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_userid); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_11), __pyx_empty_unicode); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_12) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_12) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_12);
      __Pyx_GIVEREF(__pyx_t_12);
      PyTuple_SET_ITEM(__pyx_t_8, 1, __pyx_t_12);
      __pyx_t_12 = 0;
      __Pyx_INCREF(__pyx_kp_u__9);
      __pyx_t_9 += 1;
      __Pyx_GIVEREF(__pyx_kp_u__9);
      PyTuple_SET_ITEM(__pyx_t_8, 2, __pyx_kp_u__9);
      if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 125, __pyx_L1_error) }
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_password); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_13);
      __pyx_t_14 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_14)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_14);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_14, __pyx_t_13};
        __pyx_t_12 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 125, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __pyx_t_11 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_12), __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_11);
      __Pyx_GIVEREF(__pyx_t_11);
      PyTuple_SET_ITEM(__pyx_t_8, 3, __pyx_t_11);
      __pyx_t_11 = 0;
      __pyx_t_11 = __Pyx_PyUnicode_Join(__pyx_t_8, 4, __pyx_t_9, __pyx_t_10); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 125, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 125, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __Pyx_XDECREF_SET(__pyx_v_node, __pyx_t_1);
      __pyx_t_1 = 0;

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_name};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 126, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 126, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 126, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 126, __pyx_L1_error) }
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 126, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_name); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 126, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_12);
        __pyx_t_13 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_8))) {
          __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_8);
          if (likely(__pyx_t_13)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
            __Pyx_INCREF(__pyx_t_13);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_8, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_13, __pyx_t_12};
          __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 126, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_t_11, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 126, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyUnicode_Concat(__pyx_kp_u_reset_Nama_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 126, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 126, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 127, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_email};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 127, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 127, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 127, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 127, __pyx_L1_error) }
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 127, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_email); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 127, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_12);
        __pyx_t_13 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_8))) {
          __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_8);
          if (likely(__pyx_t_13)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
            __Pyx_INCREF(__pyx_t_13);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_8, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_13, __pyx_t_12};
          __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 127, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_t_11, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 127, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyUnicode_Concat(__pyx_kp_u_reset_Email_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 127, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 127, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 128, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_phone};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 128, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 128, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 128, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 128, __pyx_L1_error) }
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 128, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_phone); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 128, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_12);
        __pyx_t_13 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_8))) {
          __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_8);
          if (likely(__pyx_t_13)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
            __Pyx_INCREF(__pyx_t_13);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_8, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_13, __pyx_t_12};
          __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 128, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_t_11, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 128, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyUnicode_Concat(__pyx_kp_u_reset_Nomor_Telepon_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 128, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 128, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 129, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_followers};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 129, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 129, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 129, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_followers); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 129, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 129, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = PyNumber_Add(__pyx_kp_u_reset_Pengikut_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 129, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 129, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 130, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_following};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 130, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 130, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 130, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_following); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 130, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 130, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = PyNumber_Add(__pyx_kp_u_reset_Mengikuti_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 130, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 130, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 131, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_media};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 131, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 131, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 131, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_media); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 131, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 131, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = PyNumber_Add(__pyx_kp_u_reset_Postingan_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 131, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 131, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 132, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_birthday};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 132, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 132, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 132, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_birthday); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 132, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_t_11, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 132, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyUnicode_Concat(__pyx_kp_u_reset_Tgl_Lahir_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 132, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 132, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 133, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_created_at};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 133, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 133, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 133, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_created_at); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 133, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_t_11, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 133, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyUnicode_Concat(__pyx_kp_u_reset_Tgl_Pembuatan_Akun_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 133, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 133, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_detail, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 134, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_cookie};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 134, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 134, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 134, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_detail, __pyx_n_u_cookie); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 134, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_t_11, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 134, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyUnicode_Concat(__pyx_kp_u_reset_Cookie_theme, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 134, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 134, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      goto __pyx_L5;
    }

     
      {
      __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_userid); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 136, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 136, __pyx_L1_error) }
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 136, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_password); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 136, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_12 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_12, __pyx_t_8};
        __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 136, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __pyx_t_11 = PyList_New(2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 136, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_GIVEREF(__pyx_t_1);
      if (__Pyx_PyList_SET_ITEM(__pyx_t_11, 0, __pyx_t_1)) __PYX_ERR(0, 136, __pyx_L1_error);
      __Pyx_GIVEREF(__pyx_t_3);
      if (__Pyx_PyList_SET_ITEM(__pyx_t_11, 1, __pyx_t_3)) __PYX_ERR(0, 136, __pyx_L1_error);
      __pyx_t_1 = 0;
      __pyx_t_3 = 0;
      __Pyx_XDECREF_SET(__pyx_v_output, ((PyObject*)__pyx_t_11));
      __pyx_t_11 = 0;

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_detail, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
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
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_n_u_cookie};
        __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 137, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_11); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 137, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (__pyx_t_7) {
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_detail, __pyx_n_u_cookie); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 137, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_3 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_15 = __Pyx_PyList_Append(__pyx_v_output, __pyx_t_3); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 137, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }

       
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 138, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_1 = PyUnicode_Join(__pyx_kp_u_reset_bold_green, __pyx_v_output); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 138, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_8 = PyUnicode_Format(__pyx_kp_u_bold_green_s, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 138, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_t_8};
        __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 138, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_L5:;

     
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 140, __pyx_L1_error) }
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 140, __pyx_L1_error) }
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_8 = PyTuple_New(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_INCREF(__pyx_v_root);
  __Pyx_GIVEREF(__pyx_v_root);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_v_root)) __PYX_ERR(0, 140, __pyx_L1_error);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_account, __pyx_n_u_file); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_12);
  __pyx_t_13 = PyNumber_Add(__pyx_kp_u_reset, __pyx_t_12); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_title, __pyx_t_13) < 0) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_style, __pyx_kp_u_bold_green_2) < 0) __PYX_ERR(0, 140, __pyx_L1_error)
  __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_account, __pyx_n_u_data); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __pyx_t_5 = PyObject_Length(__pyx_t_13); if (unlikely(__pyx_t_5 == ((Py_ssize_t)-1))) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = PyInt_FromSsize_t(__pyx_t_5); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __pyx_t_12 = __Pyx_PyObject_Str(__pyx_t_13); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_12);
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = PyNumber_Add(__pyx_kp_u_reset, __pyx_t_12); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_subtitle, __pyx_t_13) < 0) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_8, __pyx_t_1); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
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
    PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_t_13};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 140, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.ok.show", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_root);
  __Pyx_XDECREF(__pyx_v_acc);
  __Pyx_XDECREF(__pyx_v_detail);
  __Pyx_XDECREF(__pyx_v_profile);
  __Pyx_XDECREF(__pyx_v_node);
  __Pyx_XDECREF(__pyx_v_output);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
static PyObject *__pyx_gb_11controllers_2ig_12check_result_10Controller_2ok_4generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value);  

 

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_2genexpr(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 102, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  __pyx_cur_scope->__pyx_genexpr_arg_0 = __pyx_genexpr_arg_0;
  __Pyx_INCREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  __Pyx_GIVEREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_11controllers_2ig_12check_result_10Controller_2ok_4generator, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_Controller_ok_locals_genexpr, __pyx_n_s_controllers_ig_check_result); if (unlikely(!gen)) __PYX_ERR(0, 102, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.ok.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_11controllers_2ig_12check_result_10Controller_2ok_4generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value)  
{
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *__pyx_cur_scope = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  Py_ssize_t __pyx_t_3;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  Py_ssize_t __pyx_t_8;
  int __pyx_t_9;
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
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 102, __pyx_L1_error)
  __pyx_r = PyDict_New(); if (unlikely(!__pyx_r)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_r);
  __pyx_t_2 = 0;
  if (unlikely(!__pyx_cur_scope->__pyx_genexpr_arg_0)) { __Pyx_RaiseUnboundLocalError(".0"); __PYX_ERR(0, 102, __pyx_L1_error) }
  __pyx_t_5 = __Pyx_dict_iterator(__pyx_cur_scope->__pyx_genexpr_arg_0, 1, __pyx_n_s_items, (&__pyx_t_3), (&__pyx_t_4)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_1);
  __pyx_t_1 = __pyx_t_5;
  __pyx_t_5 = 0;
  while (1) {
    __pyx_t_7 = __Pyx_dict_iter_next(__pyx_t_1, __pyx_t_3, &__pyx_t_2, &__pyx_t_5, &__pyx_t_6, NULL, __pyx_t_4);
    if (unlikely(__pyx_t_7 == 0)) break;
    if (unlikely(__pyx_t_7 == -1)) __PYX_ERR(0, 102, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_XGOTREF(__pyx_cur_scope->__pyx_v_f);
    __Pyx_XDECREF_SET(__pyx_cur_scope->__pyx_v_f, __pyx_t_5);
    __Pyx_GIVEREF(__pyx_t_5);
    __pyx_t_5 = 0;
    __Pyx_XGOTREF(__pyx_cur_scope->__pyx_v_v);
    __Pyx_XDECREF_SET(__pyx_cur_scope->__pyx_v_v, __pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    __pyx_t_6 = 0;
    __pyx_t_8 = PyObject_Length(__pyx_cur_scope->__pyx_v_v); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 102, __pyx_L1_error)
    __pyx_t_9 = (__pyx_t_8 > 0);
    if (__pyx_t_9) {
      if (unlikely(PyDict_SetItem(__pyx_r, (PyObject*)__pyx_cur_scope->__pyx_v_f, (PyObject*)__pyx_cur_scope->__pyx_v_v))) __PYX_ERR(0, 102, __pyx_L1_error)
    }
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_r); __pyx_r = 0;
  __Pyx_Generator_Replace_StopIteration(0);
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
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

 

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_8ok(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *__pyx_cur_scope;
  PyObject *__pyx_v_files = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_file = NULL;
  PyObject *__pyx_v_splitlines = NULL;
  PyObject *__pyx_v_line = NULL;
  PyObject *__pyx_v_splited = NULL;
  PyObject *__pyx_v_detail = NULL;
  PyObject *__pyx_v_table = NULL;
  PyObject *__pyx_v_account = NULL;
  PyObject *__pyx_v_index = NULL;
  PyObject *__pyx_v_item = NULL;
  PyObject *__pyx_v_show = 0;
  PyObject *__pyx_v_choices = NULL;
  PyObject *__pyx_v_choice = NULL;
  PyObject *__pyx_v_show_info = NULL;
  PyObject *__pyx_gb_11controllers_2ig_12check_result_10Controller_2ok_4generator = 0;
  Py_ssize_t __pyx_8genexpr1__pyx_v_i;
  PyObject *__pyx_8genexpr2__pyx_v_item = NULL;
  PyObject *__pyx_8genexpr3__pyx_v_item = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  Py_ssize_t __pyx_t_5;
  PyObject *(*__pyx_t_6)(PyObject *);
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  Py_ssize_t __pyx_t_10;
  PyObject *(*__pyx_t_11)(PyObject *);
  Py_ssize_t __pyx_t_12;
  int __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  int __pyx_t_17;
  int __pyx_t_18;
  PyObject *__pyx_t_19 = NULL;
  int __pyx_t_20;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("ok", 0);
  __pyx_cur_scope = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct__ok(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 86, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_rich); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 87, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_rich = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_glob); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 88, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_2))) {
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
    PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_kp_u_result_ig_OK_txt};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 88, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_v_files = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 89, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_data = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  if (likely(PyList_CheckExact(__pyx_v_files)) || PyTuple_CheckExact(__pyx_v_files)) {
    __pyx_t_1 = __pyx_v_files; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_5 = 0;
    __pyx_t_6 = NULL;
  } else {
    __pyx_t_5 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_files); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 90, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_6)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 90, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_5); __Pyx_INCREF(__pyx_t_2); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 90, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 90, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_5); __Pyx_INCREF(__pyx_t_2); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 90, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      }
    } else {
      __pyx_t_2 = __pyx_t_6(__pyx_t_1);
      if (unlikely(!__pyx_t_2)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 90, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_2);
    }
    __Pyx_XDECREF_SET(__pyx_v_file, __pyx_t_2);
    __pyx_t_2 = 0;

     
    __pyx_t_7 = PyTuple_New(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_INCREF(__pyx_v_file);
    __Pyx_GIVEREF(__pyx_v_file);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_v_file)) __PYX_ERR(0, 91, __pyx_L1_error);
    __Pyx_INCREF(__pyx_n_u_r);
    __Pyx_GIVEREF(__pyx_n_u_r);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_7, 1, __pyx_n_u_r)) __PYX_ERR(0, 91, __pyx_L1_error);
    __pyx_t_8 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_encoding, __pyx_kp_u_utf_8) < 0) __PYX_ERR(0, 91, __pyx_L1_error)
    __pyx_t_9 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 91, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_read); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 91, __pyx_L1_error)
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
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 91, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_splitlines); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 91, __pyx_L1_error)
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
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 91, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __Pyx_XDECREF_SET(__pyx_v_splitlines, __pyx_t_2);
    __pyx_t_2 = 0;

     
    __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (unlikely((PyDict_SetItem(__pyx_v_data, __pyx_v_file, __pyx_t_2) < 0))) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    if (likely(PyList_CheckExact(__pyx_v_splitlines)) || PyTuple_CheckExact(__pyx_v_splitlines)) {
      __pyx_t_2 = __pyx_v_splitlines; __Pyx_INCREF(__pyx_t_2);
      __pyx_t_10 = 0;
      __pyx_t_11 = NULL;
    } else {
      __pyx_t_10 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_v_splitlines); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 93, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_11 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 93, __pyx_L1_error)
    }
    for (;;) {
      if (likely(!__pyx_t_11)) {
        if (likely(PyList_CheckExact(__pyx_t_2))) {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 93, __pyx_L1_error)
            #endif
            if (__pyx_t_10 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_8 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_10); __Pyx_INCREF(__pyx_t_8); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 93, __pyx_L1_error)
          #else
          __pyx_t_8 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 93, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          #endif
        } else {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 93, __pyx_L1_error)
            #endif
            if (__pyx_t_10 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_8 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_10); __Pyx_INCREF(__pyx_t_8); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 93, __pyx_L1_error)
          #else
          __pyx_t_8 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 93, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          #endif
        }
      } else {
        __pyx_t_8 = __pyx_t_11(__pyx_t_2);
        if (unlikely(!__pyx_t_8)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 93, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_8);
      }
      __Pyx_XDECREF_SET(__pyx_v_line, __pyx_t_8);
      __pyx_t_8 = 0;

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_line, __pyx_n_s_split); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 94, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_9 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_kp_u__9};
        __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 94, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __Pyx_XDECREF_SET(__pyx_v_splited, __pyx_t_8);
      __pyx_t_8 = 0;

       
      __pyx_t_12 = PyObject_Length(__pyx_v_splited); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 95, __pyx_L1_error)
      __pyx_t_13 = (__pyx_t_12 >= 3);
      if (__pyx_t_13) {

         
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __Pyx_ExceptionSave(&__pyx_t_14, &__pyx_t_15, &__pyx_t_16);
          __Pyx_XGOTREF(__pyx_t_14);
          __Pyx_XGOTREF(__pyx_t_15);
          __Pyx_XGOTREF(__pyx_t_16);
            {

             
            __pyx_t_8 = __Pyx_PyObject_GetSlice(__pyx_v_splited, 2, 0, NULL, NULL, &__pyx_slice__10, 1, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 97, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_3 = PyUnicode_Join(__pyx_kp_u__9, __pyx_t_8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 97, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_XDECREF_SET(__pyx_v_detail, __pyx_t_3);
            __pyx_t_3 = 0;

             
            __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_json); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 98, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_loads); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 98, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_9);
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
              PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_v_detail};
              __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
              __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
              if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 98, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            }
            __Pyx_DECREF_SET(__pyx_v_detail, __pyx_t_3);
            __pyx_t_3 = 0;

             
            __pyx_t_3 = __Pyx_PyDict_GetItem(__pyx_v_data, __pyx_v_file); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 99, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_9 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 99, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_9);
            __pyx_t_8 = __Pyx_GetItemInt(__pyx_v_splited, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 99, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_userid, __pyx_t_8) < 0) __PYX_ERR(0, 99, __pyx_L8_error)
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = __Pyx_GetItemInt(__pyx_v_splited, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 99, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_password, __pyx_t_8) < 0) __PYX_ERR(0, 99, __pyx_L8_error)
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_detail, __pyx_v_detail) < 0) __PYX_ERR(0, 99, __pyx_L8_error)
            __pyx_t_17 = __Pyx_PyObject_Append(__pyx_t_3, __pyx_t_9); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 99, __pyx_L8_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

             
          }
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          goto __pyx_L15_try_end;
          __pyx_L8_error:;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

           
            {
            __Pyx_ErrRestore(0,0,0);
            goto __pyx_L9_exception_handled;
          }
          __pyx_L9_exception_handled:;
          __Pyx_XGIVEREF(__pyx_t_14);
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_XGIVEREF(__pyx_t_16);
          __Pyx_ExceptionReset(__pyx_t_14, __pyx_t_15, __pyx_t_16);
          __pyx_L15_try_end:;
        }

         
      }

       
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_2genexpr(NULL, __pyx_v_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_Generator_Next(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 102, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF_SET(__pyx_v_data, ((PyObject*)__pyx_t_2));
  __pyx_t_2 = 0;

   
  if (unlikely(__pyx_v_data == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "object of type 'NoneType' has no len()");
    __PYX_ERR(0, 103, __pyx_L1_error)
  }
  __pyx_t_5 = PyDict_Size(__pyx_v_data); if (unlikely(__pyx_t_5 == ((Py_ssize_t)-1))) __PYX_ERR(0, 103, __pyx_L1_error)
  __pyx_t_13 = (__pyx_t_5 == 0);
  if (__pyx_t_13) {

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 104, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 104, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 104, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 104, __pyx_L1_error)
    __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_9, __pyx_tuple__11, __pyx_t_3); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 104, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
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
      PyObject *__pyx_callargs[4] = {__pyx_t_3, __pyx_kp_u__7, __pyx_t_8, __pyx_kp_u__7};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 3+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 104, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ig_back_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 105, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
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
      PyObject *__pyx_callargs[2] = {__pyx_t_8, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 105, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;

     
  }

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 107, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
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
    PyObject *__pyx_callargs[2] = {__pyx_t_8, NULL};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_table); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 108, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 108, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_expand, Py_True) < 0) __PYX_ERR(0, 108, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_title, __pyx_kp_u_thinking_face_Mau_Cek_hasil_yan) < 0) __PYX_ERR(0, 108, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_caption, __pyx_kp_u_Ketikan_theme_all_untuk_menampil) < 0) __PYX_ERR(0, 108, __pyx_L1_error)
  __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 108, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_table = __pyx_t_8;
  __pyx_t_8 = 0;

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 109, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 109, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 109, __pyx_L1_error)
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_tuple_, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 109, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 110, __pyx_L1_error)
  __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__12, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 111, __pyx_L1_error)
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_tuple__13, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 112, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_account = ((PyObject*)__pyx_t_2);
  __pyx_t_2 = 0;

   
  __Pyx_INCREF(__pyx_int_0);
  __pyx_t_2 = __pyx_int_0;
  __pyx_t_5 = 0;
  if (unlikely(__pyx_v_data == Py_None)) {
    PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "items");
    __PYX_ERR(0, 113, __pyx_L1_error)
  }
  __pyx_t_8 = __Pyx_dict_iterator(__pyx_v_data, 1, __pyx_n_s_items, (&__pyx_t_10), (&__pyx_t_4)); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 113, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_1);
  __pyx_t_1 = __pyx_t_8;
  __pyx_t_8 = 0;
  while (1) {
    __pyx_t_18 = __Pyx_dict_iter_next(__pyx_t_1, __pyx_t_10, &__pyx_t_5, &__pyx_t_8, &__pyx_t_3, NULL, __pyx_t_4);
    if (unlikely(__pyx_t_18 == 0)) break;
    if (unlikely(__pyx_t_18 == -1)) __PYX_ERR(0, 113, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_XDECREF_SET(__pyx_v_file, __pyx_t_8);
    __pyx_t_8 = 0;
    __Pyx_XDECREF_SET(__pyx_v_item, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_t_2);
    __Pyx_XDECREF_SET(__pyx_v_index, __pyx_t_2);
    __pyx_t_3 = __Pyx_PyInt_AddObjC(__pyx_t_2, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 113, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2);
    __pyx_t_2 = __pyx_t_3;
    __pyx_t_3 = 0;

     
    __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_file, __pyx_v_file) < 0) __PYX_ERR(0, 114, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_data, __pyx_v_item) < 0) __PYX_ERR(0, 114, __pyx_L1_error)
    __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_account, __pyx_t_3); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_row); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_9 = __Pyx_PyInt_AddObjC(__pyx_v_index, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_7 = __Pyx_PyObject_Str(__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = PyNumber_Add(__pyx_kp_u_theme, __pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_12 = PyObject_Length(__pyx_v_item); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 115, __pyx_L1_error)
    __pyx_t_7 = PyInt_FromSsize_t(__pyx_t_12); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_19 = __Pyx_PyObject_Str(__pyx_t_7); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_19);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = PyNumber_Add(__pyx_kp_u_theme, __pyx_t_19); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
    __pyx_t_19 = NULL;
    __pyx_t_18 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_19 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_19)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_19);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_18 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[4] = {__pyx_t_19, __pyx_t_9, __pyx_v_file, __pyx_t_7};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_18, 3+__pyx_t_18);
      __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 115, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 116, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
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
    PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_v_table};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 116, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_2ok_1show, 0, __pyx_n_s_Controller_ok_locals_show, ((PyObject*)__pyx_cur_scope), __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__15)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 118, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_show = __pyx_t_2;
  __pyx_t_2 = 0;

   
  {  
    __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 142, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_10 = __Pyx_PyList_GET_SIZE(__pyx_v_account); if (unlikely(__pyx_t_10 == ((Py_ssize_t)-1))) __PYX_ERR(0, 142, __pyx_L1_error)
    __pyx_t_5 = (__pyx_t_10 + 1);
    __pyx_t_10 = __pyx_t_5;
    for (__pyx_t_12 = 1; __pyx_t_12 < __pyx_t_10; __pyx_t_12+=1) {
      __pyx_8genexpr1__pyx_v_i = __pyx_t_12;
      __pyx_t_1 = PyInt_FromSsize_t(__pyx_8genexpr1__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 142, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = __Pyx_PyObject_Str(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 142, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_t_3))) __PYX_ERR(0, 142, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
  }  
  __pyx_v_choices = ((PyObject*)__pyx_t_2);
  __pyx_t_2 = 0;

   
  __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_choices, __pyx_n_u_all); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 143, __pyx_L1_error)

   
  __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_choices, __pyx_n_u_copy); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 144, __pyx_L1_error)

   
  __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_choices, __pyx_n_u_move); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 145, __pyx_L1_error)

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 146, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
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
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 146, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_prompt); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 147, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ask); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 147, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 147, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_choices, __pyx_v_choices) < 0) __PYX_ERR(0, 147, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__6, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 147, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_choice = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_INCREF(__pyx_v_choice);
  __pyx_t_1 = __pyx_v_choice;
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_copy, Py_NE)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 148, __pyx_L1_error)
  if (__pyx_t_20) {
  } else {
    __pyx_t_13 = __pyx_t_20;
    goto __pyx_L24_bool_binop_done;
  }
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_move, Py_NE)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 148, __pyx_L1_error)
  __pyx_t_13 = __pyx_t_20;
  __pyx_L24_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_20 = __pyx_t_13;
  if (__pyx_t_20) {

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 149, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
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
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 149, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_confirm); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 150, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ask); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 150, __pyx_L1_error)
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
      PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_kp_u_Tampilkan_Informasi_theme_nama_t};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 150, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_v_show_info = __pyx_t_1;
    __pyx_t_1 = 0;

     
  }

   
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_v_choice, __pyx_n_u_all, Py_EQ)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 151, __pyx_L1_error)
  if (__pyx_t_20) {

     
    __pyx_t_1 = __pyx_v_account; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_5 = 0;
    for (;;) {
      {
        Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
        #if !CYTHON_ASSUME_SAFE_MACROS
        if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 152, __pyx_L1_error)
        #endif
        if (__pyx_t_5 >= __pyx_temp) break;
      }
      #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
      __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_5); __Pyx_INCREF(__pyx_t_3); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 152, __pyx_L1_error)
      #else
      __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 152, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      #endif
      __Pyx_XDECREF_SET(__pyx_v_item, __pyx_t_3);
      __pyx_t_3 = 0;

       
      if (unlikely(!__pyx_v_show_info)) { __Pyx_RaiseUnboundLocalError("show_info"); __PYX_ERR(0, 153, __pyx_L1_error) }
      __pyx_t_3 = __pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_show(__pyx_v_show, __pyx_v_item, __pyx_v_show_info); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 153, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

       
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    goto __pyx_L26;
  }

   
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_v_choice, __pyx_n_u_copy, Py_EQ)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 154, __pyx_L1_error)
  if (__pyx_t_20) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_copy); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 155, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    {  
      __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 155, __pyx_L32_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_8 = __pyx_v_account; __Pyx_INCREF(__pyx_t_8);
      __pyx_t_5 = 0;
      for (;;) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_8);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 155, __pyx_L32_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_7 = PyList_GET_ITEM(__pyx_t_8, __pyx_t_5); __Pyx_INCREF(__pyx_t_7); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 155, __pyx_L32_error)
        #else
        __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_8, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 155, __pyx_L32_error)
        __Pyx_GOTREF(__pyx_t_7);
        #endif
        __Pyx_XDECREF_SET(__pyx_8genexpr2__pyx_v_item, __pyx_t_7);
        __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_8genexpr2__pyx_v_item, __pyx_n_u_file); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 155, __pyx_L32_error)
        __Pyx_GOTREF(__pyx_t_7);
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_t_7))) __PYX_ERR(0, 155, __pyx_L32_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_8genexpr2__pyx_v_item); __pyx_8genexpr2__pyx_v_item = 0;
      goto __pyx_L36_exit_scope;
      __pyx_L32_error:;
      __Pyx_XDECREF(__pyx_8genexpr2__pyx_v_item); __pyx_8genexpr2__pyx_v_item = 0;
      goto __pyx_L1_error;
      __pyx_L36_exit_scope:;
    }  
    __pyx_t_8 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_8, __pyx_t_2, __pyx_kp_u_MTF_ok_ig};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 155, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    goto __pyx_L26;
  }

   
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_v_choice, __pyx_n_u_move, Py_EQ)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 156, __pyx_L1_error)
  if (__pyx_t_20) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_move); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 157, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    {  
      __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 157, __pyx_L39_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_8 = __pyx_v_account; __Pyx_INCREF(__pyx_t_8);
      __pyx_t_5 = 0;
      for (;;) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_8);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 157, __pyx_L39_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_7 = PyList_GET_ITEM(__pyx_t_8, __pyx_t_5); __Pyx_INCREF(__pyx_t_7); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 157, __pyx_L39_error)
        #else
        __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_8, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 157, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_7);
        #endif
        __Pyx_XDECREF_SET(__pyx_8genexpr3__pyx_v_item, __pyx_t_7);
        __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_8genexpr3__pyx_v_item, __pyx_n_u_file); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 157, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_7);
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_t_7))) __PYX_ERR(0, 157, __pyx_L39_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_8genexpr3__pyx_v_item); __pyx_8genexpr3__pyx_v_item = 0;
      goto __pyx_L43_exit_scope;
      __pyx_L39_error:;
      __Pyx_XDECREF(__pyx_8genexpr3__pyx_v_item); __pyx_8genexpr3__pyx_v_item = 0;
      goto __pyx_L1_error;
      __pyx_L43_exit_scope:;
    }  
    __pyx_t_8 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_8, __pyx_t_2, __pyx_kp_u_MTF_ok_ig};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 157, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    goto __pyx_L26;
  }

   
    {
    __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_v_choice); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 159, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyInt_SubtractObjC(__pyx_t_1, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 159, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_v_account, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 159, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_v_show_info)) { __Pyx_RaiseUnboundLocalError("show_info"); __PYX_ERR(0, 159, __pyx_L1_error) }
    __pyx_t_3 = __pyx_pf_11controllers_2ig_12check_result_10Controller_2ok_show(__pyx_v_show, __pyx_t_1, __pyx_v_show_info); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 159, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_L26:;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ig_back_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 161, __pyx_L1_error)
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
    PyObject *__pyx_callargs[2] = {__pyx_t_2, NULL};
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 161, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_19);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.ok", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_files);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_file);
  __Pyx_XDECREF(__pyx_v_splitlines);
  __Pyx_XDECREF(__pyx_v_line);
  __Pyx_XDECREF(__pyx_v_splited);
  __Pyx_XDECREF(__pyx_v_detail);
  __Pyx_XDECREF(__pyx_v_table);
  __Pyx_XDECREF(__pyx_v_account);
  __Pyx_XDECREF(__pyx_v_index);
  __Pyx_XDECREF(__pyx_v_item);
  __Pyx_XDECREF(__pyx_v_show);
  __Pyx_XDECREF(__pyx_v_choices);
  __Pyx_XDECREF(__pyx_v_choice);
  __Pyx_XDECREF(__pyx_v_show_info);
  __Pyx_XDECREF(__pyx_gb_11controllers_2ig_12check_result_10Controller_2ok_4generator);
  __Pyx_XDECREF(__pyx_8genexpr2__pyx_v_item);
  __Pyx_XDECREF(__pyx_8genexpr3__pyx_v_item);
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_11cp(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_11cp = {"cp", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_11cp, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_11cp(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("cp (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
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
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 163, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "cp") < 0)) __PYX_ERR(0, 163, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("cp", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 163, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.cp", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller_10cp(__pyx_self, __pyx_v_self);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

 

 
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_2cp_1show(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
);  
static PyMethodDef __pyx_mdef_11controllers_2ig_12check_result_10Controller_2cp_1show = {"show", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_11controllers_2ig_12check_result_10Controller_2cp_1show, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_11controllers_2ig_12check_result_10Controller_2cp_1show(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_account = 0;
  PyObject *__pyx_v_show_info = 0;
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
  __Pyx_RefNannySetupContext("show (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_account,&__pyx_n_s_show_info,0};
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
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_account)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 195, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_show_info)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 195, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("show", 1, 2, 2, 1); __PYX_ERR(0, 195, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "show") < 0)) __PYX_ERR(0, 195, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_account = values[0];
    __pyx_v_show_info = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("show", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 195, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.cp.show", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_show(__pyx_self, __pyx_v_account, __pyx_v_show_info);

   
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_show(PyObject *__pyx_self, PyObject *__pyx_v_account, PyObject *__pyx_v_show_info) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *__pyx_cur_scope;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *__pyx_outer_scope;
  PyObject *__pyx_v_root = NULL;
  PyObject *__pyx_v_acc = NULL;
  PyObject *__pyx_v_detail = NULL;
  PyObject *__pyx_v_profile = NULL;
  PyObject *__pyx_v_node = NULL;
  PyObject *__pyx_v_output = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  Py_ssize_t __pyx_t_5;
  PyObject *(*__pyx_t_6)(PyObject *);
  int __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  Py_ssize_t __pyx_t_9;
  Py_UCS4 __pyx_t_10;
  PyObject *__pyx_t_11 = NULL;
  PyObject *__pyx_t_12 = NULL;
  PyObject *__pyx_t_13 = NULL;
  PyObject *__pyx_t_14 = NULL;
  int __pyx_t_15;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("show", 1);
  __pyx_outer_scope = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *) __Pyx_CyFunction_GetClosure(__pyx_self);
  __pyx_cur_scope = __pyx_outer_scope;

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 196, __pyx_L1_error) }
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 196, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
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
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 196, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 197, __pyx_L1_error) }
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_tree); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 197, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
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
    PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_kp_u__7};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 197, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_v_root = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_account, __pyx_n_u_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 198, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2);
    __pyx_t_5 = 0;
    __pyx_t_6 = NULL;
  } else {
    __pyx_t_5 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 198, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 198, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_6)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 198, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_5); __Pyx_INCREF(__pyx_t_1); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 198, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 198, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 198, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_5); __Pyx_INCREF(__pyx_t_1); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 198, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 198, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_6(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 198, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_acc, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_detail); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 199, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_XDECREF_SET(__pyx_v_detail, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_detail, __pyx_n_u_profile); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 200, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_XDECREF_SET(__pyx_v_profile, __pyx_t_1);
    __pyx_t_1 = 0;

     
    __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_v_show_info); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 201, __pyx_L1_error)
    if (__pyx_t_7) {

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_8 = PyTuple_New(4); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_9 = 0;
      __pyx_t_10 = 127;
      __Pyx_INCREF(__pyx_kp_u_bold_yellow);
      __pyx_t_9 += 13;
      __Pyx_GIVEREF(__pyx_kp_u_bold_yellow);
      PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_kp_u_bold_yellow);
      __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_userid); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_12 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_11), __pyx_empty_unicode); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_12);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_12) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_12) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_12);
      __Pyx_GIVEREF(__pyx_t_12);
      PyTuple_SET_ITEM(__pyx_t_8, 1, __pyx_t_12);
      __pyx_t_12 = 0;
      __Pyx_INCREF(__pyx_kp_u__9);
      __pyx_t_9 += 1;
      __Pyx_GIVEREF(__pyx_kp_u__9);
      PyTuple_SET_ITEM(__pyx_t_8, 2, __pyx_kp_u__9);
      if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 202, __pyx_L1_error) }
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_password); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_13);
      __pyx_t_14 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_14)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_14);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_14, __pyx_t_13};
        __pyx_t_12 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
        if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 202, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_12);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __pyx_t_11 = __Pyx_PyObject_FormatSimpleAndDecref(PyObject_Unicode(__pyx_t_12), __pyx_empty_unicode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
      __pyx_t_10 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) > __pyx_t_10) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_11) : __pyx_t_10;
      __pyx_t_9 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_11);
      __Pyx_GIVEREF(__pyx_t_11);
      PyTuple_SET_ITEM(__pyx_t_8, 3, __pyx_t_11);
      __pyx_t_11 = 0;
      __pyx_t_11 = __Pyx_PyUnicode_Join(__pyx_t_8, 4, __pyx_t_9, __pyx_t_10); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 202, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 202, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __Pyx_XDECREF_SET(__pyx_v_node, __pyx_t_1);
      __pyx_t_1 = 0;

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 203, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_name};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 203, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 203, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 203, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 203, __pyx_L1_error) }
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 203, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_name); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 203, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_12);
        __pyx_t_13 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_8))) {
          __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_8);
          if (likely(__pyx_t_13)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
            __Pyx_INCREF(__pyx_t_13);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_8, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_13, __pyx_t_12};
          __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 203, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_11);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        __pyx_t_8 = __Pyx_PyObject_FormatSimple(__pyx_t_11, __pyx_empty_unicode); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 203, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyUnicode_Concat(__pyx_kp_u_reset_Nama_bold_yellow, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 203, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 203, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 204, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_followers};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 204, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 204, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 204, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_followers); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 204, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 204, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = PyNumber_Add(__pyx_kp_u_reset_Pengikut_bold_yellow, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 204, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 204, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 205, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_following};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 205, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 205, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 205, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_following); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 205, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 205, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = PyNumber_Add(__pyx_kp_u_reset_Mengikuti_bold_yellow, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 205, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 205, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_profile, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 206, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_11 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_n_u_media};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 206, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 206, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (__pyx_t_7) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_node, __pyx_n_s_add); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 206, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_profile, __pyx_n_u_media); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 206, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_8 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 206, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = PyNumber_Add(__pyx_kp_u_reset_Postingan_bold_yellow, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 206, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_3))) {
          __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
          if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_11};
          __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
          if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 206, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }

       
      goto __pyx_L5;
    }

     
      {
      __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_userid); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 208, __pyx_L1_error) }
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_escape); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_8 = __Pyx_PyObject_Dict_GetItem(__pyx_v_acc, __pyx_n_u_password); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_12 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_12)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_12);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_12, __pyx_t_8};
        __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 208, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __pyx_t_11 = PyList_New(2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 208, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_GIVEREF(__pyx_t_1);
      if (__Pyx_PyList_SET_ITEM(__pyx_t_11, 0, __pyx_t_1)) __PYX_ERR(0, 208, __pyx_L1_error);
      __Pyx_GIVEREF(__pyx_t_3);
      if (__Pyx_PyList_SET_ITEM(__pyx_t_11, 1, __pyx_t_3)) __PYX_ERR(0, 208, __pyx_L1_error);
      __pyx_t_1 = 0;
      __pyx_t_3 = 0;
      __Pyx_XDECREF_SET(__pyx_v_output, ((PyObject*)__pyx_t_11));
      __pyx_t_11 = 0;

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_detail, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 209, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
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
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_n_u_cookie};
        __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 209, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __pyx_t_7 = __Pyx_PyObject_IsTrue(__pyx_t_11); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 209, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      if (__pyx_t_7) {
        __pyx_t_11 = __Pyx_PyObject_Dict_GetItem(__pyx_v_detail, __pyx_n_u_cookie); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 209, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_3 = __Pyx_PyObject_Str(__pyx_t_11); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 209, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_15 = __Pyx_PyList_Append(__pyx_v_output, __pyx_t_3); if (unlikely(__pyx_t_15 == ((int)-1))) __PYX_ERR(0, 209, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }

       
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_root, __pyx_n_s_add); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 210, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_1 = PyUnicode_Join(__pyx_kp_u_reset_bold_yellow, __pyx_v_output); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 210, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_8 = PyUnicode_Format(__pyx_kp_u_bold_yellow_s, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 210, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_1)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_1);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_t_8};
        __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 210, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_L5:;

     
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 211, __pyx_L1_error) }
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (unlikely(!__pyx_cur_scope->__pyx_v_rich)) { __Pyx_RaiseClosureNameError("rich"); __PYX_ERR(0, 211, __pyx_L1_error) }
  __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_11);
  __pyx_t_8 = PyTuple_New(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_INCREF(__pyx_v_root);
  __Pyx_GIVEREF(__pyx_v_root);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_v_root)) __PYX_ERR(0, 211, __pyx_L1_error);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_12 = __Pyx_PyObject_Dict_GetItem(__pyx_v_account, __pyx_n_u_file); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_12);
  __pyx_t_13 = PyNumber_Add(__pyx_kp_u_reset, __pyx_t_12); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_title, __pyx_t_13) < 0) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_style, __pyx_kp_u_bold_yellow_2) < 0) __PYX_ERR(0, 211, __pyx_L1_error)
  __pyx_t_13 = __Pyx_PyObject_Dict_GetItem(__pyx_v_account, __pyx_n_u_data); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __pyx_t_5 = PyObject_Length(__pyx_t_13); if (unlikely(__pyx_t_5 == ((Py_ssize_t)-1))) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = PyInt_FromSsize_t(__pyx_t_5); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __pyx_t_12 = __Pyx_PyObject_Str(__pyx_t_13); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_12);
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = PyNumber_Add(__pyx_kp_u_reset, __pyx_t_12); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_subtitle, __pyx_t_13) < 0) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
  __pyx_t_13 = __Pyx_PyObject_Call(__pyx_t_11, __pyx_t_8, __pyx_t_1); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 211, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_13);
  __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
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
    PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_t_13};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 211, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_XDECREF(__pyx_t_12);
  __Pyx_XDECREF(__pyx_t_13);
  __Pyx_XDECREF(__pyx_t_14);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.cp.show", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_root);
  __Pyx_XDECREF(__pyx_v_acc);
  __Pyx_XDECREF(__pyx_v_detail);
  __Pyx_XDECREF(__pyx_v_profile);
  __Pyx_XDECREF(__pyx_v_node);
  __Pyx_XDECREF(__pyx_v_output);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
static PyObject *__pyx_gb_11controllers_2ig_12check_result_10Controller_2cp_4generator1(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value);  

 

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_2genexpr(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_genexpr_arg_0) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 179, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  __pyx_cur_scope->__pyx_genexpr_arg_0 = __pyx_genexpr_arg_0;
  __Pyx_INCREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  __Pyx_GIVEREF(__pyx_cur_scope->__pyx_genexpr_arg_0);
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_11controllers_2ig_12check_result_10Controller_2cp_4generator1, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_Controller_cp_locals_genexpr, __pyx_n_s_controllers_ig_check_result); if (unlikely(!gen)) __PYX_ERR(0, 179, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

   
  __pyx_L1_error:;
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.cp.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_11controllers_2ig_12check_result_10Controller_2cp_4generator1(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value)  
{
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *__pyx_cur_scope = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  PyObject *__pyx_t_1 = NULL;
  Py_ssize_t __pyx_t_2;
  Py_ssize_t __pyx_t_3;
  int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  Py_ssize_t __pyx_t_8;
  int __pyx_t_9;
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
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 179, __pyx_L1_error)
  __pyx_r = PyDict_New(); if (unlikely(!__pyx_r)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_r);
  __pyx_t_2 = 0;
  if (unlikely(!__pyx_cur_scope->__pyx_genexpr_arg_0)) { __Pyx_RaiseUnboundLocalError(".0"); __PYX_ERR(0, 179, __pyx_L1_error) }
  __pyx_t_5 = __Pyx_dict_iterator(__pyx_cur_scope->__pyx_genexpr_arg_0, 1, __pyx_n_s_items, (&__pyx_t_3), (&__pyx_t_4)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_1);
  __pyx_t_1 = __pyx_t_5;
  __pyx_t_5 = 0;
  while (1) {
    __pyx_t_7 = __Pyx_dict_iter_next(__pyx_t_1, __pyx_t_3, &__pyx_t_2, &__pyx_t_5, &__pyx_t_6, NULL, __pyx_t_4);
    if (unlikely(__pyx_t_7 == 0)) break;
    if (unlikely(__pyx_t_7 == -1)) __PYX_ERR(0, 179, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_XGOTREF(__pyx_cur_scope->__pyx_v_f);
    __Pyx_XDECREF_SET(__pyx_cur_scope->__pyx_v_f, __pyx_t_5);
    __Pyx_GIVEREF(__pyx_t_5);
    __pyx_t_5 = 0;
    __Pyx_XGOTREF(__pyx_cur_scope->__pyx_v_v);
    __Pyx_XDECREF_SET(__pyx_cur_scope->__pyx_v_v, __pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_6);
    __pyx_t_6 = 0;
    __pyx_t_8 = PyObject_Length(__pyx_cur_scope->__pyx_v_v); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 179, __pyx_L1_error)
    __pyx_t_9 = (__pyx_t_8 > 0);
    if (__pyx_t_9) {
      if (unlikely(PyDict_SetItem(__pyx_r, (PyObject*)__pyx_cur_scope->__pyx_v_f, (PyObject*)__pyx_cur_scope->__pyx_v_v))) __PYX_ERR(0, 179, __pyx_L1_error)
    }
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

   
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_r); __pyx_r = 0;
  __Pyx_Generator_Replace_StopIteration(0);
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
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

 

static PyObject *__pyx_pf_11controllers_2ig_12check_result_10Controller_10cp(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *__pyx_cur_scope;
  PyObject *__pyx_v_files = NULL;
  PyObject *__pyx_v_data = NULL;
  PyObject *__pyx_v_file = NULL;
  PyObject *__pyx_v_splitlines = NULL;
  PyObject *__pyx_v_line = NULL;
  PyObject *__pyx_v_splited = NULL;
  PyObject *__pyx_v_detail = NULL;
  PyObject *__pyx_v_table = NULL;
  PyObject *__pyx_v_account = NULL;
  PyObject *__pyx_v_index = NULL;
  PyObject *__pyx_v_item = NULL;
  PyObject *__pyx_v_show = 0;
  PyObject *__pyx_v_choices = NULL;
  PyObject *__pyx_v_choice = NULL;
  PyObject *__pyx_v_show_info = NULL;
  PyObject *__pyx_gb_11controllers_2ig_12check_result_10Controller_2cp_4generator1 = 0;
  Py_ssize_t __pyx_8genexpr5__pyx_v_i;
  PyObject *__pyx_8genexpr6__pyx_v_item = NULL;
  PyObject *__pyx_8genexpr7__pyx_v_item = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_t_4;
  Py_ssize_t __pyx_t_5;
  PyObject *(*__pyx_t_6)(PyObject *);
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  Py_ssize_t __pyx_t_10;
  PyObject *(*__pyx_t_11)(PyObject *);
  Py_ssize_t __pyx_t_12;
  int __pyx_t_13;
  PyObject *__pyx_t_14 = NULL;
  PyObject *__pyx_t_15 = NULL;
  PyObject *__pyx_t_16 = NULL;
  int __pyx_t_17;
  int __pyx_t_18;
  PyObject *__pyx_t_19 = NULL;
  int __pyx_t_20;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("cp", 0);
  __pyx_cur_scope = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_2_cp(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 163, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_rich); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 164, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_1);
  __pyx_cur_scope->__pyx_v_rich = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_glob); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 165, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_2))) {
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
    PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_kp_u_result_ig_CP_txt};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 165, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __pyx_v_files = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 166, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_data = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

   
  if (likely(PyList_CheckExact(__pyx_v_files)) || PyTuple_CheckExact(__pyx_v_files)) {
    __pyx_t_1 = __pyx_v_files; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_5 = 0;
    __pyx_t_6 = NULL;
  } else {
    __pyx_t_5 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_files); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 167, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_6 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 167, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_6)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 167, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_5); __Pyx_INCREF(__pyx_t_2); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 167, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 167, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 167, __pyx_L1_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_5); __Pyx_INCREF(__pyx_t_2); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 167, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 167, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      }
    } else {
      __pyx_t_2 = __pyx_t_6(__pyx_t_1);
      if (unlikely(!__pyx_t_2)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 167, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_2);
    }
    __Pyx_XDECREF_SET(__pyx_v_file, __pyx_t_2);
    __pyx_t_2 = 0;

     
    __pyx_t_7 = PyTuple_New(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 168, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_INCREF(__pyx_v_file);
    __Pyx_GIVEREF(__pyx_v_file);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_v_file)) __PYX_ERR(0, 168, __pyx_L1_error);
    __Pyx_INCREF(__pyx_n_u_r);
    __Pyx_GIVEREF(__pyx_n_u_r);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_7, 1, __pyx_n_u_r)) __PYX_ERR(0, 168, __pyx_L1_error);
    __pyx_t_8 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 168, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    if (PyDict_SetItem(__pyx_t_8, __pyx_n_s_encoding, __pyx_kp_u_utf_8) < 0) __PYX_ERR(0, 168, __pyx_L1_error)
    __pyx_t_9 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 168, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_read); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 168, __pyx_L1_error)
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
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 168, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_splitlines); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 168, __pyx_L1_error)
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
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 168, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __Pyx_XDECREF_SET(__pyx_v_splitlines, __pyx_t_2);
    __pyx_t_2 = 0;

     
    __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 169, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (unlikely((PyDict_SetItem(__pyx_v_data, __pyx_v_file, __pyx_t_2) < 0))) __PYX_ERR(0, 169, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    if (likely(PyList_CheckExact(__pyx_v_splitlines)) || PyTuple_CheckExact(__pyx_v_splitlines)) {
      __pyx_t_2 = __pyx_v_splitlines; __Pyx_INCREF(__pyx_t_2);
      __pyx_t_10 = 0;
      __pyx_t_11 = NULL;
    } else {
      __pyx_t_10 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_v_splitlines); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 170, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_11 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 170, __pyx_L1_error)
    }
    for (;;) {
      if (likely(!__pyx_t_11)) {
        if (likely(PyList_CheckExact(__pyx_t_2))) {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 170, __pyx_L1_error)
            #endif
            if (__pyx_t_10 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_8 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_10); __Pyx_INCREF(__pyx_t_8); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 170, __pyx_L1_error)
          #else
          __pyx_t_8 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 170, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          #endif
        } else {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 170, __pyx_L1_error)
            #endif
            if (__pyx_t_10 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_8 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_10); __Pyx_INCREF(__pyx_t_8); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 170, __pyx_L1_error)
          #else
          __pyx_t_8 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 170, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          #endif
        }
      } else {
        __pyx_t_8 = __pyx_t_11(__pyx_t_2);
        if (unlikely(!__pyx_t_8)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 170, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_8);
      }
      __Pyx_XDECREF_SET(__pyx_v_line, __pyx_t_8);
      __pyx_t_8 = 0;

       
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_line, __pyx_n_s_split); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 171, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_9 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_9)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
          __Pyx_INCREF(__pyx_t_9);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_3, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_kp_u__9};
        __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 171, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __Pyx_XDECREF_SET(__pyx_v_splited, __pyx_t_8);
      __pyx_t_8 = 0;

       
      __pyx_t_12 = PyObject_Length(__pyx_v_splited); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 172, __pyx_L1_error)
      __pyx_t_13 = (__pyx_t_12 >= 2);
      if (__pyx_t_13) {

         
        {
          __Pyx_PyThreadState_declare
          __Pyx_PyThreadState_assign
          __Pyx_ExceptionSave(&__pyx_t_14, &__pyx_t_15, &__pyx_t_16);
          __Pyx_XGOTREF(__pyx_t_14);
          __Pyx_XGOTREF(__pyx_t_15);
          __Pyx_XGOTREF(__pyx_t_16);
            {

             
            __pyx_t_8 = __Pyx_PyObject_GetSlice(__pyx_v_splited, 2, 0, NULL, NULL, &__pyx_slice__10, 1, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 174, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_3 = PyUnicode_Join(__pyx_kp_u__9, __pyx_t_8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 174, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_XDECREF_SET(__pyx_v_detail, __pyx_t_3);
            __pyx_t_3 = 0;

             
            __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_json); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 175, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_loads); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 175, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_9);
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
              PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_v_detail};
              __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
              __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
              if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 175, __pyx_L8_error)
              __Pyx_GOTREF(__pyx_t_3);
              __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            }
            __Pyx_DECREF_SET(__pyx_v_detail, __pyx_t_3);
            __pyx_t_3 = 0;

             
            __pyx_t_3 = __Pyx_PyDict_GetItem(__pyx_v_data, __pyx_v_file); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 176, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_9 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 176, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_9);
            __pyx_t_8 = __Pyx_GetItemInt(__pyx_v_splited, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 176, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_userid, __pyx_t_8) < 0) __PYX_ERR(0, 176, __pyx_L8_error)
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = __Pyx_GetItemInt(__pyx_v_splited, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 176, __pyx_L8_error)
            __Pyx_GOTREF(__pyx_t_8);
            if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_password, __pyx_t_8) < 0) __PYX_ERR(0, 176, __pyx_L8_error)
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_detail, __pyx_v_detail) < 0) __PYX_ERR(0, 176, __pyx_L8_error)
            __pyx_t_17 = __Pyx_PyObject_Append(__pyx_t_3, __pyx_t_9); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 176, __pyx_L8_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

             
          }
          __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
          __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
          __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
          goto __pyx_L15_try_end;
          __pyx_L8_error:;
          __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
          __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;

           
            {
            __Pyx_ErrRestore(0,0,0);
            goto __pyx_L9_exception_handled;
          }
          __pyx_L9_exception_handled:;
          __Pyx_XGIVEREF(__pyx_t_14);
          __Pyx_XGIVEREF(__pyx_t_15);
          __Pyx_XGIVEREF(__pyx_t_16);
          __Pyx_ExceptionReset(__pyx_t_14, __pyx_t_15, __pyx_t_16);
          __pyx_L15_try_end:;
        }

         
      }

       
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

   
  __pyx_t_1 = __pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_2genexpr(NULL, __pyx_v_data); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_Generator_Next(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF_SET(__pyx_v_data, ((PyObject*)__pyx_t_2));
  __pyx_t_2 = 0;

   
  if (unlikely(__pyx_v_data == Py_None)) {
    PyErr_SetString(PyExc_TypeError, "object of type 'NoneType' has no len()");
    __PYX_ERR(0, 180, __pyx_L1_error)
  }
  __pyx_t_5 = PyDict_Size(__pyx_v_data); if (unlikely(__pyx_t_5 == ((Py_ssize_t)-1))) __PYX_ERR(0, 180, __pyx_L1_error)
  __pyx_t_13 = (__pyx_t_5 == 0);
  if (__pyx_t_13) {

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 181, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_panel); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 181, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_3 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 181, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_style, __pyx_kp_u_bold_red) < 0) __PYX_ERR(0, 181, __pyx_L1_error)
    __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_9, __pyx_tuple__11, __pyx_t_3); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 181, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
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
      PyObject *__pyx_callargs[4] = {__pyx_t_3, __pyx_kp_u__7, __pyx_t_8, __pyx_kp_u__7};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 3+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 181, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ig_back_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 182, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
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
      PyObject *__pyx_callargs[2] = {__pyx_t_8, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 182, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

     
    __Pyx_XDECREF(__pyx_r);
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;

     
  }

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 184, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
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
    PyObject *__pyx_callargs[2] = {__pyx_t_8, NULL};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 184, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_table); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_expand, Py_True) < 0) __PYX_ERR(0, 185, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_title, __pyx_kp_u_thinking_face_Mau_Cek_hasil_yan) < 0) __PYX_ERR(0, 185, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_caption, __pyx_kp_u_Ketikan_theme_all_untuk_menampil_2) < 0) __PYX_ERR(0, 185, __pyx_L1_error)
  __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_table = __pyx_t_8;
  __pyx_t_8 = 0;

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 186, __pyx_L1_error)
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_tuple_, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 187, __pyx_L1_error)
  __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__12, __pyx_t_1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

   
  __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_column); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_justify, __pyx_n_u_center) < 0) __PYX_ERR(0, 188, __pyx_L1_error)
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_tuple__13, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 189, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_account = ((PyObject*)__pyx_t_2);
  __pyx_t_2 = 0;

   
  __Pyx_INCREF(__pyx_int_0);
  __pyx_t_2 = __pyx_int_0;
  __pyx_t_5 = 0;
  if (unlikely(__pyx_v_data == Py_None)) {
    PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "items");
    __PYX_ERR(0, 190, __pyx_L1_error)
  }
  __pyx_t_8 = __Pyx_dict_iterator(__pyx_v_data, 1, __pyx_n_s_items, (&__pyx_t_10), (&__pyx_t_4)); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 190, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_1);
  __pyx_t_1 = __pyx_t_8;
  __pyx_t_8 = 0;
  while (1) {
    __pyx_t_18 = __Pyx_dict_iter_next(__pyx_t_1, __pyx_t_10, &__pyx_t_5, &__pyx_t_8, &__pyx_t_3, NULL, __pyx_t_4);
    if (unlikely(__pyx_t_18 == 0)) break;
    if (unlikely(__pyx_t_18 == -1)) __PYX_ERR(0, 190, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_XDECREF_SET(__pyx_v_file, __pyx_t_8);
    __pyx_t_8 = 0;
    __Pyx_XDECREF_SET(__pyx_v_item, __pyx_t_3);
    __pyx_t_3 = 0;
    __Pyx_INCREF(__pyx_t_2);
    __Pyx_XDECREF_SET(__pyx_v_index, __pyx_t_2);
    __pyx_t_3 = __Pyx_PyInt_AddObjC(__pyx_t_2, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 190, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2);
    __pyx_t_2 = __pyx_t_3;
    __pyx_t_3 = 0;

     
    __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 191, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_file, __pyx_v_file) < 0) __PYX_ERR(0, 191, __pyx_L1_error)
    if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_data, __pyx_v_item) < 0) __PYX_ERR(0, 191, __pyx_L1_error)
    __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_account, __pyx_t_3); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 191, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

     
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_table, __pyx_n_s_add_row); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 192, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_9 = __Pyx_PyInt_AddObjC(__pyx_v_index, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 192, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_7 = __Pyx_PyObject_Str(__pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 192, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = PyNumber_Add(__pyx_kp_u_theme, __pyx_t_7); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 192, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_12 = PyObject_Length(__pyx_v_item); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 192, __pyx_L1_error)
    __pyx_t_7 = PyInt_FromSsize_t(__pyx_t_12); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 192, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_19 = __Pyx_PyObject_Str(__pyx_t_7); if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 192, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_19);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = PyNumber_Add(__pyx_kp_u_theme, __pyx_t_19); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 192, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
    __pyx_t_19 = NULL;
    __pyx_t_18 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_19 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_19)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_19);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_18 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[4] = {__pyx_t_19, __pyx_t_9, __pyx_v_file, __pyx_t_7};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_18, 3+__pyx_t_18);
      __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 192, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 193, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
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
    PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_v_table};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 193, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_2cp_1show, 0, __pyx_n_s_Controller_cp_locals_show, ((PyObject*)__pyx_cur_scope), __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__16)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 195, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_show = __pyx_t_2;
  __pyx_t_2 = 0;

   
  {  
    __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 213, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_10 = __Pyx_PyList_GET_SIZE(__pyx_v_account); if (unlikely(__pyx_t_10 == ((Py_ssize_t)-1))) __PYX_ERR(0, 213, __pyx_L1_error)
    __pyx_t_5 = (__pyx_t_10 + 1);
    __pyx_t_10 = __pyx_t_5;
    for (__pyx_t_12 = 1; __pyx_t_12 < __pyx_t_10; __pyx_t_12+=1) {
      __pyx_8genexpr5__pyx_v_i = __pyx_t_12;
      __pyx_t_1 = PyInt_FromSsize_t(__pyx_8genexpr5__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 213, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_3 = __Pyx_PyObject_Str(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 213, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_t_3))) __PYX_ERR(0, 213, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
  }  
  __pyx_v_choices = ((PyObject*)__pyx_t_2);
  __pyx_t_2 = 0;

   
  __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_choices, __pyx_n_u_all); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 214, __pyx_L1_error)

   
  __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_choices, __pyx_n_u_copy); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 215, __pyx_L1_error)

   
  __pyx_t_17 = __Pyx_PyList_Append(__pyx_v_choices, __pyx_n_u_move); if (unlikely(__pyx_t_17 == ((int)-1))) __PYX_ERR(0, 216, __pyx_L1_error)

   
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 217, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
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
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 217, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_prompt); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ask); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_choices, __pyx_v_choices) < 0) __PYX_ERR(0, 218, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__6, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 218, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_choice = __pyx_t_1;
  __pyx_t_1 = 0;

   
  __Pyx_INCREF(__pyx_v_choice);
  __pyx_t_1 = __pyx_v_choice;
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_move, Py_NE)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 219, __pyx_L1_error)
  if (__pyx_t_20) {
  } else {
    __pyx_t_13 = __pyx_t_20;
    goto __pyx_L24_bool_binop_done;
  }
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_copy, Py_NE)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 219, __pyx_L1_error)
  __pyx_t_13 = __pyx_t_20;
  __pyx_L24_bool_binop_done:;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_20 = __pyx_t_13;
  if (__pyx_t_20) {

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_print); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 220, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
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
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 220, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_cur_scope->__pyx_v_rich, __pyx_n_s_confirm); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 221, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_ask); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 221, __pyx_L1_error)
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
      PyObject *__pyx_callargs[2] = {__pyx_t_2, __pyx_kp_u_Tampilkan_Informasi_theme_nama_t};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 221, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_v_show_info = __pyx_t_1;
    __pyx_t_1 = 0;

     
  }

   
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_v_choice, __pyx_n_u_all, Py_EQ)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 222, __pyx_L1_error)
  if (__pyx_t_20) {

     
    __pyx_t_1 = __pyx_v_account; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_5 = 0;
    for (;;) {
      {
        Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
        #if !CYTHON_ASSUME_SAFE_MACROS
        if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 223, __pyx_L1_error)
        #endif
        if (__pyx_t_5 >= __pyx_temp) break;
      }
      #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
      __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_5); __Pyx_INCREF(__pyx_t_3); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 223, __pyx_L1_error)
      #else
      __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 223, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      #endif
      __Pyx_XDECREF_SET(__pyx_v_item, __pyx_t_3);
      __pyx_t_3 = 0;

       
      if (unlikely(!__pyx_v_show_info)) { __Pyx_RaiseUnboundLocalError("show_info"); __PYX_ERR(0, 224, __pyx_L1_error) }
      __pyx_t_3 = __pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_show(__pyx_v_show, __pyx_v_item, __pyx_v_show_info); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 224, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

       
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    goto __pyx_L26;
  }

   
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_v_choice, __pyx_n_u_copy, Py_EQ)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 225, __pyx_L1_error)
  if (__pyx_t_20) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_copy); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 226, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    {  
      __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 226, __pyx_L32_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_8 = __pyx_v_account; __Pyx_INCREF(__pyx_t_8);
      __pyx_t_5 = 0;
      for (;;) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_8);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 226, __pyx_L32_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_7 = PyList_GET_ITEM(__pyx_t_8, __pyx_t_5); __Pyx_INCREF(__pyx_t_7); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 226, __pyx_L32_error)
        #else
        __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_8, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 226, __pyx_L32_error)
        __Pyx_GOTREF(__pyx_t_7);
        #endif
        __Pyx_XDECREF_SET(__pyx_8genexpr6__pyx_v_item, __pyx_t_7);
        __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_8genexpr6__pyx_v_item, __pyx_n_u_file); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 226, __pyx_L32_error)
        __Pyx_GOTREF(__pyx_t_7);
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_t_7))) __PYX_ERR(0, 226, __pyx_L32_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_8genexpr6__pyx_v_item); __pyx_8genexpr6__pyx_v_item = 0;
      goto __pyx_L36_exit_scope;
      __pyx_L32_error:;
      __Pyx_XDECREF(__pyx_8genexpr6__pyx_v_item); __pyx_8genexpr6__pyx_v_item = 0;
      goto __pyx_L1_error;
      __pyx_L36_exit_scope:;
    }  
    __pyx_t_8 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_8, __pyx_t_2, __pyx_kp_u_MTF_cp_ig};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 226, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    goto __pyx_L26;
  }

   
  __pyx_t_20 = (__Pyx_PyUnicode_Equals(__pyx_v_choice, __pyx_n_u_move, Py_EQ)); if (unlikely((__pyx_t_20 < 0))) __PYX_ERR(0, 227, __pyx_L1_error)
  if (__pyx_t_20) {

     
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_move); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 228, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    {  
      __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 228, __pyx_L39_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_8 = __pyx_v_account; __Pyx_INCREF(__pyx_t_8);
      __pyx_t_5 = 0;
      for (;;) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_8);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 228, __pyx_L39_error)
          #endif
          if (__pyx_t_5 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_7 = PyList_GET_ITEM(__pyx_t_8, __pyx_t_5); __Pyx_INCREF(__pyx_t_7); __pyx_t_5++; if (unlikely((0 < 0))) __PYX_ERR(0, 228, __pyx_L39_error)
        #else
        __pyx_t_7 = __Pyx_PySequence_ITEM(__pyx_t_8, __pyx_t_5); __pyx_t_5++; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 228, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_7);
        #endif
        __Pyx_XDECREF_SET(__pyx_8genexpr7__pyx_v_item, __pyx_t_7);
        __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyObject_Dict_GetItem(__pyx_8genexpr7__pyx_v_item, __pyx_n_u_file); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 228, __pyx_L39_error)
        __Pyx_GOTREF(__pyx_t_7);
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_t_7))) __PYX_ERR(0, 228, __pyx_L39_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      }
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_XDECREF(__pyx_8genexpr7__pyx_v_item); __pyx_8genexpr7__pyx_v_item = 0;
      goto __pyx_L43_exit_scope;
      __pyx_L39_error:;
      __Pyx_XDECREF(__pyx_8genexpr7__pyx_v_item); __pyx_8genexpr7__pyx_v_item = 0;
      goto __pyx_L1_error;
      __pyx_L43_exit_scope:;
    }  
    __pyx_t_8 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_8, __pyx_t_2, __pyx_kp_u_MTF_cp_ig};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 228, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

     
    goto __pyx_L26;
  }

   
    {
    if (unlikely(!__pyx_v_index)) { __Pyx_RaiseUnboundLocalError("index"); __PYX_ERR(0, 230, __pyx_L1_error) }
    __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_v_index); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 230, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_3 = __Pyx_PyInt_SubtractObjC(__pyx_t_1, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 230, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_v_account, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 230, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_v_show_info)) { __Pyx_RaiseUnboundLocalError("show_info"); __PYX_ERR(0, 230, __pyx_L1_error) }
    __pyx_t_3 = __pyx_pf_11controllers_2ig_12check_result_10Controller_2cp_show(__pyx_v_show, __pyx_t_1, __pyx_v_show_info); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 230, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_L26:;

   
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_ig_back_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 232, __pyx_L1_error)
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
    PyObject *__pyx_callargs[2] = {__pyx_t_2, NULL};
    __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 232, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   

   
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_19);
  __Pyx_AddTraceback("controllers.ig.check_result.Controller.cp", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_files);
  __Pyx_XDECREF(__pyx_v_data);
  __Pyx_XDECREF(__pyx_v_file);
  __Pyx_XDECREF(__pyx_v_splitlines);
  __Pyx_XDECREF(__pyx_v_line);
  __Pyx_XDECREF(__pyx_v_splited);
  __Pyx_XDECREF(__pyx_v_detail);
  __Pyx_XDECREF(__pyx_v_table);
  __Pyx_XDECREF(__pyx_v_account);
  __Pyx_XDECREF(__pyx_v_index);
  __Pyx_XDECREF(__pyx_v_item);
  __Pyx_XDECREF(__pyx_v_show);
  __Pyx_XDECREF(__pyx_v_choices);
  __Pyx_XDECREF(__pyx_v_choice);
  __Pyx_XDECREF(__pyx_v_show_info);
  __Pyx_XDECREF(__pyx_gb_11controllers_2ig_12check_result_10Controller_2cp_4generator1);
  __Pyx_XDECREF(__pyx_8genexpr6__pyx_v_item);
  __Pyx_XDECREF(__pyx_8genexpr7__pyx_v_item);
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct__ok[8];
static int __pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct__ok = 0;

static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct__ok(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_COMPILING_IN_CPYTHON
  if (likely((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct__ok > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok)))) {
    o = (PyObject*)__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct__ok[--__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct__ok];
    memset(o, 0, sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok));
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

static void __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct__ok(PyObject *o) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *)o;
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && !__Pyx_PyObject_GC_IsFinalized(o)) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct__ok) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_v_rich);
  #if CYTHON_COMPILING_IN_CPYTHON
  if (((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct__ok < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok)))) {
    __pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct__ok[__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct__ok++] = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *)o);
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

static int __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct__ok(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *)o;
  if (p->__pyx_v_rich) {
    e = (*v)(p->__pyx_v_rich, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_11controllers_2ig_12check_result___pyx_scope_struct__ok(PyObject *o) {
  PyObject* tmp;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok *)o;
  tmp = ((PyObject*)p->__pyx_v_rich);
  p->__pyx_v_rich = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  return 0;
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct__ok},
  {Py_tp_traverse, (void *)__pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct__ok},
  {Py_tp_clear, (void *)__pyx_tp_clear_11controllers_2ig_12check_result___pyx_scope_struct__ok},
  {Py_tp_new, (void *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct__ok},
  {0, 0},
};
static PyType_Spec __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok_spec = {
  "controllers.ig.check_result.__pyx_scope_struct__ok",
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok_slots,
};
#else

static PyTypeObject __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok = {
  PyVarObject_HEAD_INIT(0, 0)
  "controllers.ig.check_result.""__pyx_scope_struct__ok",  
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct__ok),  
  0,  
  __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct__ok,  
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
  __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct__ok,  
  __pyx_tp_clear_11controllers_2ig_12check_result___pyx_scope_struct__ok,  
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
  __pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct__ok,  
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

static struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr[8];
static int __pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr = 0;

static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_COMPILING_IN_CPYTHON
  if (likely((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr)))) {
    o = (PyObject*)__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr[--__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr];
    memset(o, 0, sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr));
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

static void __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr(PyObject *o) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *)o;
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && !__Pyx_PyObject_GC_IsFinalized(o)) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_genexpr_arg_0);
  Py_CLEAR(p->__pyx_v_f);
  Py_CLEAR(p->__pyx_v_v);
  #if CYTHON_COMPILING_IN_CPYTHON
  if (((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr)))) {
    __pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr[__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr++] = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *)o);
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

static int __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr *)o;
  if (p->__pyx_genexpr_arg_0) {
    e = (*v)(p->__pyx_genexpr_arg_0, a); if (e) return e;
  }
  if (p->__pyx_v_f) {
    e = (*v)(p->__pyx_v_f, a); if (e) return e;
  }
  if (p->__pyx_v_v) {
    e = (*v)(p->__pyx_v_v, a); if (e) return e;
  }
  return 0;
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr},
  {Py_tp_traverse, (void *)__pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr},
  {Py_tp_new, (void *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr},
  {0, 0},
};
static PyType_Spec __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr_spec = {
  "controllers.ig.check_result.__pyx_scope_struct_1_genexpr",
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr_slots,
};
#else

static PyTypeObject __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr = {
  PyVarObject_HEAD_INIT(0, 0)
  "controllers.ig.check_result.""__pyx_scope_struct_1_genexpr",  
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr),  
  0,  
  __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr,  
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
  __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr,  
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
  __pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr,  
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

static struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_2_cp[8];
static int __pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_2_cp = 0;

static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_2_cp(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_COMPILING_IN_CPYTHON
  if (likely((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_2_cp > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp)))) {
    o = (PyObject*)__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_2_cp[--__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_2_cp];
    memset(o, 0, sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp));
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

static void __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_2_cp(PyObject *o) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *)o;
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && !__Pyx_PyObject_GC_IsFinalized(o)) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_2_cp) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_v_rich);
  #if CYTHON_COMPILING_IN_CPYTHON
  if (((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_2_cp < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp)))) {
    __pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_2_cp[__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_2_cp++] = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *)o);
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

static int __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_2_cp(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *)o;
  if (p->__pyx_v_rich) {
    e = (*v)(p->__pyx_v_rich, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_11controllers_2ig_12check_result___pyx_scope_struct_2_cp(PyObject *o) {
  PyObject* tmp;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp *)o;
  tmp = ((PyObject*)p->__pyx_v_rich);
  p->__pyx_v_rich = Py_None; Py_INCREF(Py_None);
  Py_XDECREF(tmp);
  return 0;
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_2_cp},
  {Py_tp_traverse, (void *)__pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_2_cp},
  {Py_tp_clear, (void *)__pyx_tp_clear_11controllers_2ig_12check_result___pyx_scope_struct_2_cp},
  {Py_tp_new, (void *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_2_cp},
  {0, 0},
};
static PyType_Spec __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp_spec = {
  "controllers.ig.check_result.__pyx_scope_struct_2_cp",
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp_slots,
};
#else

static PyTypeObject __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp = {
  PyVarObject_HEAD_INIT(0, 0)
  "controllers.ig.check_result.""__pyx_scope_struct_2_cp",  
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_2_cp),  
  0,  
  __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_2_cp,  
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
  __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_2_cp,  
  __pyx_tp_clear_11controllers_2ig_12check_result___pyx_scope_struct_2_cp,  
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
  __pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_2_cp,  
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

static struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr[8];
static int __pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr = 0;

static PyObject *__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_COMPILING_IN_CPYTHON
  if (likely((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr)))) {
    o = (PyObject*)__pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr[--__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr];
    memset(o, 0, sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr));
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

static void __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr(PyObject *o) {
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *)o;
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && !__Pyx_PyObject_GC_IsFinalized(o)) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  PyObject_GC_UnTrack(o);
  Py_CLEAR(p->__pyx_genexpr_arg_0);
  Py_CLEAR(p->__pyx_v_f);
  Py_CLEAR(p->__pyx_v_v);
  #if CYTHON_COMPILING_IN_CPYTHON
  if (((int)(__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr)))) {
    __pyx_freelist_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr[__pyx_freecount_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr++] = ((struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *)o);
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

static int __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *p = (struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr *)o;
  if (p->__pyx_genexpr_arg_0) {
    e = (*v)(p->__pyx_genexpr_arg_0, a); if (e) return e;
  }
  if (p->__pyx_v_f) {
    e = (*v)(p->__pyx_v_f, a); if (e) return e;
  }
  if (p->__pyx_v_v) {
    e = (*v)(p->__pyx_v_v, a); if (e) return e;
  }
  return 0;
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr},
  {Py_tp_traverse, (void *)__pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr},
  {Py_tp_new, (void *)__pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr},
  {0, 0},
};
static PyType_Spec __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr_spec = {
  "controllers.ig.check_result.__pyx_scope_struct_3_genexpr",
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr_slots,
};
#else

static PyTypeObject __pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr = {
  PyVarObject_HEAD_INIT(0, 0)
  "controllers.ig.check_result.""__pyx_scope_struct_3_genexpr",  
  sizeof(struct __pyx_obj_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr),  
  0,  
  __pyx_tp_dealloc_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr,  
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
  __pyx_tp_traverse_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr,  
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
  __pyx_tp_new_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr,  
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
    {&__pyx_kp_u_0, __pyx_k_0, sizeof(__pyx_k_0), 0, 1, 0, 0},
    {&__pyx_kp_u_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 1, 0, 0},
    {&__pyx_kp_u_2, __pyx_k_2, sizeof(__pyx_k_2), 0, 1, 0, 0},
    {&__pyx_n_s_AssertionError, __pyx_k_AssertionError, sizeof(__pyx_k_AssertionError), 0, 0, 1, 1},
    {&__pyx_n_s_Base, __pyx_k_Base, sizeof(__pyx_k_Base), 0, 0, 1, 1},
    {&__pyx_kp_u_Cek_hasil_Crack, __pyx_k_Cek_hasil_Crack, sizeof(__pyx_k_Cek_hasil_Crack), 0, 1, 0, 0},
    {&__pyx_n_s_Controller, __pyx_k_Controller, sizeof(__pyx_k_Controller), 0, 0, 1, 1},
    {&__pyx_n_s_Controller___init, __pyx_k_Controller___init, sizeof(__pyx_k_Controller___init), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_copy, __pyx_k_Controller_copy, sizeof(__pyx_k_Controller_copy), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_cp, __pyx_k_Controller_cp, sizeof(__pyx_k_Controller_cp), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_cp_locals_genexpr, __pyx_k_Controller_cp_locals_genexpr, sizeof(__pyx_k_Controller_cp_locals_genexpr), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_cp_locals_show, __pyx_k_Controller_cp_locals_show, sizeof(__pyx_k_Controller_cp_locals_show), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_handle, __pyx_k_Controller_handle, sizeof(__pyx_k_Controller_handle), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_move, __pyx_k_Controller_move, sizeof(__pyx_k_Controller_move), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_ok, __pyx_k_Controller_ok, sizeof(__pyx_k_Controller_ok), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_ok_locals_genexpr, __pyx_k_Controller_ok_locals_genexpr, sizeof(__pyx_k_Controller_ok_locals_genexpr), 0, 0, 1, 1},
    {&__pyx_n_s_Controller_ok_locals_show, __pyx_k_Controller_ok_locals_show, sizeof(__pyx_k_Controller_ok_locals_show), 0, 0, 1, 1},
    {&__pyx_n_u_EXTERNAL_STORAGE, __pyx_k_EXTERNAL_STORAGE, sizeof(__pyx_k_EXTERNAL_STORAGE), 0, 1, 0, 1},
    {&__pyx_kp_u_File_theme_s, __pyx_k_File_theme_s, sizeof(__pyx_k_File_theme_s), 0, 1, 0, 0},
    {&__pyx_kp_u_Hasil_CP, __pyx_k_Hasil_CP, sizeof(__pyx_k_Hasil_CP), 0, 1, 0, 0},
    {&__pyx_kp_u_Hasil_OK, __pyx_k_Hasil_OK, sizeof(__pyx_k_Hasil_OK), 0, 1, 0, 0},
    {&__pyx_kp_u_Jumlah_Akun, __pyx_k_Jumlah_Akun, sizeof(__pyx_k_Jumlah_Akun), 0, 1, 0, 0},
    {&__pyx_kp_u_Ketikan_theme_all_untuk_menampil, __pyx_k_Ketikan_theme_all_untuk_menampil, sizeof(__pyx_k_Ketikan_theme_all_untuk_menampil), 0, 1, 0, 0},
    {&__pyx_kp_u_Ketikan_theme_all_untuk_menampil_2, __pyx_k_Ketikan_theme_all_untuk_menampil_2, sizeof(__pyx_k_Ketikan_theme_all_untuk_menampil_2), 0, 1, 0, 0},
    {&__pyx_kp_u_MTF_cp_ig, __pyx_k_MTF_cp_ig, sizeof(__pyx_k_MTF_cp_ig), 0, 1, 0, 0},
    {&__pyx_kp_u_MTF_ok_ig, __pyx_k_MTF_ok_ig, sizeof(__pyx_k_MTF_ok_ig), 0, 1, 0, 0},
    {&__pyx_n_u_Nama, __pyx_k_Nama, sizeof(__pyx_k_Nama), 0, 1, 0, 1},
    {&__pyx_kp_u_Nama_File, __pyx_k_Nama_File, sizeof(__pyx_k_Nama_File), 0, 1, 0, 0},
    {&__pyx_n_u_No, __pyx_k_No, sizeof(__pyx_k_No), 0, 1, 0, 1},
    {&__pyx_n_s_Path, __pyx_k_Path, sizeof(__pyx_k_Path), 0, 0, 1, 1},
    {&__pyx_kp_u_Permission_Error, __pyx_k_Permission_Error, sizeof(__pyx_k_Permission_Error), 0, 1, 0, 0},
    {&__pyx_n_u_Pilihan, __pyx_k_Pilihan, sizeof(__pyx_k_Pilihan), 0, 1, 0, 1},
    {&__pyx_kp_u_Tampilkan_Informasi_theme_nama_t, __pyx_k_Tampilkan_Informasi_theme_nama_t, sizeof(__pyx_k_Tampilkan_Informasi_theme_nama_t), 0, 1, 0, 0},
    {&__pyx_kp_u_Tidak_mempunyai_akses_ke_direkto, __pyx_k_Tidak_mempunyai_akses_ke_direkto, sizeof(__pyx_k_Tidak_mempunyai_akses_ke_direkto), 0, 1, 0, 0},
    {&__pyx_n_s_W_OK, __pyx_k_W_OK, sizeof(__pyx_k_W_OK), 0, 0, 1, 1},
    {&__pyx_n_s__17, __pyx_k__17, sizeof(__pyx_k__17), 0, 0, 1, 1},
    {&__pyx_kp_u__18, __pyx_k__18, sizeof(__pyx_k__18), 0, 1, 0, 0},
    {&__pyx_n_s__30, __pyx_k__30, sizeof(__pyx_k__30), 0, 0, 1, 1},
    {&__pyx_kp_u__7, __pyx_k__7, sizeof(__pyx_k__7), 0, 1, 0, 0},
    {&__pyx_kp_u__8, __pyx_k__8, sizeof(__pyx_k__8), 0, 1, 0, 0},
    {&__pyx_kp_u__9, __pyx_k__9, sizeof(__pyx_k__9), 0, 1, 0, 0},
    {&__pyx_n_s_acc, __pyx_k_acc, sizeof(__pyx_k_acc), 0, 0, 1, 1},
    {&__pyx_n_s_access, __pyx_k_access, sizeof(__pyx_k_access), 0, 0, 1, 1},
    {&__pyx_n_s_account, __pyx_k_account, sizeof(__pyx_k_account), 0, 0, 1, 1},
    {&__pyx_n_s_add, __pyx_k_add, sizeof(__pyx_k_add), 0, 0, 1, 1},
    {&__pyx_n_s_add_column, __pyx_k_add_column, sizeof(__pyx_k_add_column), 0, 0, 1, 1},
    {&__pyx_n_s_add_row, __pyx_k_add_row, sizeof(__pyx_k_add_row), 0, 0, 1, 1},
    {&__pyx_n_u_all, __pyx_k_all, sizeof(__pyx_k_all), 0, 1, 0, 1},
    {&__pyx_n_s_append, __pyx_k_append, sizeof(__pyx_k_append), 0, 0, 1, 1},
    {&__pyx_n_s_args, __pyx_k_args, sizeof(__pyx_k_args), 0, 0, 1, 1},
    {&__pyx_n_s_ask, __pyx_k_ask, sizeof(__pyx_k_ask), 0, 0, 1, 1},
    {&__pyx_n_s_asyncio_coroutines, __pyx_k_asyncio_coroutines, sizeof(__pyx_k_asyncio_coroutines), 0, 0, 1, 1},
    {&__pyx_n_u_birthday, __pyx_k_birthday, sizeof(__pyx_k_birthday), 0, 1, 0, 1},
    {&__pyx_kp_u_bold_green, __pyx_k_bold_green, sizeof(__pyx_k_bold_green), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_green_2, __pyx_k_bold_green_2, sizeof(__pyx_k_bold_green_2), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_green_Berhasil_dipindah_Ke, __pyx_k_bold_green_Berhasil_dipindah_Ke, sizeof(__pyx_k_bold_green_Berhasil_dipindah_Ke), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_green_Berhasil_disalin_Ke, __pyx_k_bold_green_Berhasil_disalin_Ke, sizeof(__pyx_k_bold_green_Berhasil_disalin_Ke), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_green_s, __pyx_k_bold_green_s, sizeof(__pyx_k_bold_green_s), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_red, __pyx_k_bold_red, sizeof(__pyx_k_bold_red), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_red_0, __pyx_k_bold_red_0, sizeof(__pyx_k_bold_red_0), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_red_Gagal_memindah_File, __pyx_k_bold_red_Gagal_memindah_File, sizeof(__pyx_k_bold_red_Gagal_memindah_File), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_red_Gagal_menyalin_File, __pyx_k_bold_red_Gagal_menyalin_File, sizeof(__pyx_k_bold_red_Gagal_menyalin_File), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_red_Kembali, __pyx_k_bold_red_Kembali, sizeof(__pyx_k_bold_red_Kembali), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_yellow, __pyx_k_bold_yellow, sizeof(__pyx_k_bold_yellow), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_yellow_2, __pyx_k_bold_yellow_2, sizeof(__pyx_k_bold_yellow_2), 0, 1, 0, 0},
    {&__pyx_kp_u_bold_yellow_s, __pyx_k_bold_yellow_s, sizeof(__pyx_k_bold_yellow_s), 0, 1, 0, 0},
    {&__pyx_n_s_caption, __pyx_k_caption, sizeof(__pyx_k_caption), 0, 0, 1, 1},
    {&__pyx_n_u_center, __pyx_k_center, sizeof(__pyx_k_center), 0, 1, 0, 1},
    {&__pyx_n_s_choice, __pyx_k_choice, sizeof(__pyx_k_choice), 0, 0, 1, 1},
    {&__pyx_n_s_choices, __pyx_k_choices, sizeof(__pyx_k_choices), 0, 0, 1, 1},
    {&__pyx_n_s_class_getitem, __pyx_k_class_getitem, sizeof(__pyx_k_class_getitem), 0, 0, 1, 1},
    {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
    {&__pyx_n_s_close, __pyx_k_close, sizeof(__pyx_k_close), 0, 0, 1, 1},
    {&__pyx_n_s_confirm, __pyx_k_confirm, sizeof(__pyx_k_confirm), 0, 0, 1, 1},
    {&__pyx_n_s_controllers_ig_check_result, __pyx_k_controllers_ig_check_result, sizeof(__pyx_k_controllers_ig_check_result), 0, 0, 1, 1},
    {&__pyx_n_u_cookie, __pyx_k_cookie, sizeof(__pyx_k_cookie), 0, 1, 0, 1},
    {&__pyx_n_s_copy, __pyx_k_copy, sizeof(__pyx_k_copy), 0, 0, 1, 1},
    {&__pyx_n_u_copy, __pyx_k_copy, sizeof(__pyx_k_copy), 0, 1, 0, 1},
    {&__pyx_n_s_copy_dir, __pyx_k_copy_dir, sizeof(__pyx_k_copy_dir), 0, 0, 1, 1},
    {&__pyx_n_s_copy_to_filename, __pyx_k_copy_to_filename, sizeof(__pyx_k_copy_to_filename), 0, 0, 1, 1},
    {&__pyx_n_s_copyfile, __pyx_k_copyfile, sizeof(__pyx_k_copyfile), 0, 0, 1, 1},
    {&__pyx_n_s_cp, __pyx_k_cp, sizeof(__pyx_k_cp), 0, 0, 1, 1},
    {&__pyx_n_u_created_at, __pyx_k_created_at, sizeof(__pyx_k_created_at), 0, 1, 0, 1},
    {&__pyx_n_s_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 0, 1, 1},
    {&__pyx_n_u_data, __pyx_k_data, sizeof(__pyx_k_data), 0, 1, 0, 1},
    {&__pyx_n_s_detail, __pyx_k_detail, sizeof(__pyx_k_detail), 0, 0, 1, 1},
    {&__pyx_n_u_detail, __pyx_k_detail, sizeof(__pyx_k_detail), 0, 1, 0, 1},
    {&__pyx_n_s_dict, __pyx_k_dict, sizeof(__pyx_k_dict), 0, 0, 1, 1},
    {&__pyx_kp_u_disable, __pyx_k_disable, sizeof(__pyx_k_disable), 0, 1, 0, 0},
    {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
    {&__pyx_n_u_email, __pyx_k_email, sizeof(__pyx_k_email), 0, 1, 0, 1},
    {&__pyx_kp_u_enable, __pyx_k_enable, sizeof(__pyx_k_enable), 0, 1, 0, 0},
    {&__pyx_n_s_encoding, __pyx_k_encoding, sizeof(__pyx_k_encoding), 0, 0, 1, 1},
    {&__pyx_n_s_enumerate, __pyx_k_enumerate, sizeof(__pyx_k_enumerate), 0, 0, 1, 1},
    {&__pyx_n_s_environ, __pyx_k_environ, sizeof(__pyx_k_environ), 0, 0, 1, 1},
    {&__pyx_n_s_escape, __pyx_k_escape, sizeof(__pyx_k_escape), 0, 0, 1, 1},
    {&__pyx_n_s_exist_ok, __pyx_k_exist_ok, sizeof(__pyx_k_exist_ok), 0, 0, 1, 1},
    {&__pyx_n_s_expand, __pyx_k_expand, sizeof(__pyx_k_expand), 0, 0, 1, 1},
    {&__pyx_n_s_external_storage, __pyx_k_external_storage, sizeof(__pyx_k_external_storage), 0, 0, 1, 1},
    {&__pyx_n_s_file, __pyx_k_file, sizeof(__pyx_k_file), 0, 0, 1, 1},
    {&__pyx_n_u_file, __pyx_k_file, sizeof(__pyx_k_file), 0, 1, 0, 1},
    {&__pyx_n_s_files, __pyx_k_files, sizeof(__pyx_k_files), 0, 0, 1, 1},
    {&__pyx_n_u_followers, __pyx_k_followers, sizeof(__pyx_k_followers), 0, 1, 0, 1},
    {&__pyx_n_u_following, __pyx_k_following, sizeof(__pyx_k_following), 0, 1, 0, 1},
    {&__pyx_kp_u_gc, __pyx_k_gc, sizeof(__pyx_k_gc), 0, 1, 0, 0},
    {&__pyx_n_s_genexpr, __pyx_k_genexpr, sizeof(__pyx_k_genexpr), 0, 0, 1, 1},
    {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
    {&__pyx_n_s_glob, __pyx_k_glob, sizeof(__pyx_k_glob), 0, 0, 1, 1},
    {&__pyx_n_s_handle, __pyx_k_handle, sizeof(__pyx_k_handle), 0, 0, 1, 1},
    {&__pyx_n_s_i, __pyx_k_i, sizeof(__pyx_k_i), 0, 0, 1, 1},
    {&__pyx_n_s_ig, __pyx_k_ig, sizeof(__pyx_k_ig), 0, 0, 1, 1},
    {&__pyx_n_s_ig_back, __pyx_k_ig_back, sizeof(__pyx_k_ig_back), 0, 0, 1, 1},
    {&__pyx_n_s_ig_back_2, __pyx_k_ig_back_2, sizeof(__pyx_k_ig_back_2), 0, 0, 1, 1},
    {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
    {&__pyx_n_s_index, __pyx_k_index, sizeof(__pyx_k_index), 0, 0, 1, 1},
    {&__pyx_n_s_init, __pyx_k_init, sizeof(__pyx_k_init), 0, 0, 1, 1},
    {&__pyx_n_s_init_subclass, __pyx_k_init_subclass, sizeof(__pyx_k_init_subclass), 0, 0, 1, 1},
    {&__pyx_n_s_initializing, __pyx_k_initializing, sizeof(__pyx_k_initializing), 0, 0, 1, 1},
    {&__pyx_n_s_is_coroutine, __pyx_k_is_coroutine, sizeof(__pyx_k_is_coroutine), 0, 0, 1, 1},
    {&__pyx_n_s_isdir, __pyx_k_isdir, sizeof(__pyx_k_isdir), 0, 0, 1, 1},
    {&__pyx_kp_u_isenabled, __pyx_k_isenabled, sizeof(__pyx_k_isenabled), 0, 1, 0, 0},
    {&__pyx_n_s_item, __pyx_k_item, sizeof(__pyx_k_item), 0, 0, 1, 1},
    {&__pyx_n_s_items, __pyx_k_items, sizeof(__pyx_k_items), 0, 0, 1, 1},
    {&__pyx_n_s_join, __pyx_k_join, sizeof(__pyx_k_join), 0, 0, 1, 1},
    {&__pyx_n_s_json, __pyx_k_json, sizeof(__pyx_k_json), 0, 0, 1, 1},
    {&__pyx_n_s_justify, __pyx_k_justify, sizeof(__pyx_k_justify), 0, 0, 1, 1},
    {&__pyx_n_s_kwargs, __pyx_k_kwargs, sizeof(__pyx_k_kwargs), 0, 0, 1, 1},
    {&__pyx_n_s_line, __pyx_k_line, sizeof(__pyx_k_line), 0, 0, 1, 1},
    {&__pyx_n_s_loads, __pyx_k_loads, sizeof(__pyx_k_loads), 0, 0, 1, 1},
    {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
    {&__pyx_n_u_media, __pyx_k_media, sizeof(__pyx_k_media), 0, 1, 0, 1},
    {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
    {&__pyx_n_s_mkdir, __pyx_k_mkdir, sizeof(__pyx_k_mkdir), 0, 0, 1, 1},
    {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
    {&__pyx_n_s_move, __pyx_k_move, sizeof(__pyx_k_move), 0, 0, 1, 1},
    {&__pyx_n_u_move, __pyx_k_move, sizeof(__pyx_k_move), 0, 1, 0, 1},
    {&__pyx_n_s_move_dir, __pyx_k_move_dir, sizeof(__pyx_k_move_dir), 0, 0, 1, 1},
    {&__pyx_n_s_move_to_filename, __pyx_k_move_to_filename, sizeof(__pyx_k_move_to_filename), 0, 0, 1, 1},
    {&__pyx_n_s_mro_entries, __pyx_k_mro_entries, sizeof(__pyx_k_mro_entries), 0, 0, 1, 1},
    {&__pyx_n_s_mtf_app_controllers, __pyx_k_mtf_app_controllers, sizeof(__pyx_k_mtf_app_controllers), 0, 0, 1, 1},
    {&__pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_k_mtf_app_controllers_ig_check_res, sizeof(__pyx_k_mtf_app_controllers_ig_check_res), 0, 0, 1, 0},
    {&__pyx_n_u_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 1, 0, 1},
    {&__pyx_n_s_name_2, __pyx_k_name_2, sizeof(__pyx_k_name_2), 0, 0, 1, 1},
    {&__pyx_n_s_node, __pyx_k_node, sizeof(__pyx_k_node), 0, 0, 1, 1},
    {&__pyx_n_s_ok, __pyx_k_ok, sizeof(__pyx_k_ok), 0, 0, 1, 1},
    {&__pyx_n_s_open, __pyx_k_open, sizeof(__pyx_k_open), 0, 0, 1, 1},
    {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
    {&__pyx_n_s_output, __pyx_k_output, sizeof(__pyx_k_output), 0, 0, 1, 1},
    {&__pyx_n_s_panel, __pyx_k_panel, sizeof(__pyx_k_panel), 0, 0, 1, 1},
    {&__pyx_n_s_parents, __pyx_k_parents, sizeof(__pyx_k_parents), 0, 0, 1, 1},
    {&__pyx_n_s_password, __pyx_k_password, sizeof(__pyx_k_password), 0, 0, 1, 1},
    {&__pyx_n_u_password, __pyx_k_password, sizeof(__pyx_k_password), 0, 1, 0, 1},
    {&__pyx_n_s_path, __pyx_k_path, sizeof(__pyx_k_path), 0, 0, 1, 1},
    {&__pyx_n_s_pathlib, __pyx_k_pathlib, sizeof(__pyx_k_pathlib), 0, 0, 1, 1},
    {&__pyx_kp_u_pensive_face_Belum_ada_hasil_sa, __pyx_k_pensive_face_Belum_ada_hasil_sa, sizeof(__pyx_k_pensive_face_Belum_ada_hasil_sa), 0, 1, 0, 0},
    {&__pyx_n_u_phone, __pyx_k_phone, sizeof(__pyx_k_phone), 0, 1, 0, 1},
    {&__pyx_n_s_pop, __pyx_k_pop, sizeof(__pyx_k_pop), 0, 0, 1, 1},
    {&__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
    {&__pyx_n_s_print, __pyx_k_print, sizeof(__pyx_k_print), 0, 0, 1, 1},
    {&__pyx_n_s_profile, __pyx_k_profile, sizeof(__pyx_k_profile), 0, 0, 1, 1},
    {&__pyx_n_u_profile, __pyx_k_profile, sizeof(__pyx_k_profile), 0, 1, 0, 1},
    {&__pyx_n_s_prompt, __pyx_k_prompt, sizeof(__pyx_k_prompt), 0, 0, 1, 1},
    {&__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
    {&__pyx_n_u_r, __pyx_k_r, sizeof(__pyx_k_r), 0, 1, 0, 1},
    {&__pyx_n_s_range, __pyx_k_range, sizeof(__pyx_k_range), 0, 0, 1, 1},
    {&__pyx_n_s_read, __pyx_k_read, sizeof(__pyx_k_read), 0, 0, 1, 1},
    {&__pyx_kp_u_reset, __pyx_k_reset, sizeof(__pyx_k_reset), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Cookie_theme, __pyx_k_reset_Cookie_theme, sizeof(__pyx_k_reset_Cookie_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Email_theme, __pyx_k_reset_Email_theme, sizeof(__pyx_k_reset_Email_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Mengikuti_bold_yellow, __pyx_k_reset_Mengikuti_bold_yellow, sizeof(__pyx_k_reset_Mengikuti_bold_yellow), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Mengikuti_theme, __pyx_k_reset_Mengikuti_theme, sizeof(__pyx_k_reset_Mengikuti_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Nama_bold_yellow, __pyx_k_reset_Nama_bold_yellow, sizeof(__pyx_k_reset_Nama_bold_yellow), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Nama_theme, __pyx_k_reset_Nama_theme, sizeof(__pyx_k_reset_Nama_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Nomor_Telepon_theme, __pyx_k_reset_Nomor_Telepon_theme, sizeof(__pyx_k_reset_Nomor_Telepon_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Pengikut_bold_yellow, __pyx_k_reset_Pengikut_bold_yellow, sizeof(__pyx_k_reset_Pengikut_bold_yellow), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Pengikut_theme, __pyx_k_reset_Pengikut_theme, sizeof(__pyx_k_reset_Pengikut_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Postingan_bold_yellow, __pyx_k_reset_Postingan_bold_yellow, sizeof(__pyx_k_reset_Postingan_bold_yellow), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Postingan_theme, __pyx_k_reset_Postingan_theme, sizeof(__pyx_k_reset_Postingan_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Tgl_Lahir_theme, __pyx_k_reset_Tgl_Lahir_theme, sizeof(__pyx_k_reset_Tgl_Lahir_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_Tgl_Pembuatan_Akun_theme, __pyx_k_reset_Tgl_Pembuatan_Akun_theme, sizeof(__pyx_k_reset_Tgl_Pembuatan_Akun_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_bold_green, __pyx_k_reset_bold_green, sizeof(__pyx_k_reset_bold_green), 0, 1, 0, 0},
    {&__pyx_kp_u_reset_bold_yellow, __pyx_k_reset_bold_yellow, sizeof(__pyx_k_reset_bold_yellow), 0, 1, 0, 0},
    {&__pyx_kp_u_result_ig_CP_txt, __pyx_k_result_ig_CP_txt, sizeof(__pyx_k_result_ig_CP_txt), 0, 1, 0, 0},
    {&__pyx_kp_u_result_ig_OK_txt, __pyx_k_result_ig_OK_txt, sizeof(__pyx_k_result_ig_OK_txt), 0, 1, 0, 0},
    {&__pyx_n_s_rich, __pyx_k_rich, sizeof(__pyx_k_rich), 0, 0, 1, 1},
    {&__pyx_n_s_root, __pyx_k_root, sizeof(__pyx_k_root), 0, 0, 1, 1},
    {&__pyx_n_s_self, __pyx_k_self, sizeof(__pyx_k_self), 0, 0, 1, 1},
    {&__pyx_n_s_send, __pyx_k_send, sizeof(__pyx_k_send), 0, 0, 1, 1},
    {&__pyx_n_s_set_name, __pyx_k_set_name, sizeof(__pyx_k_set_name), 0, 0, 1, 1},
    {&__pyx_n_s_short_name, __pyx_k_short_name, sizeof(__pyx_k_short_name), 0, 0, 1, 1},
    {&__pyx_n_s_show, __pyx_k_show, sizeof(__pyx_k_show), 0, 0, 1, 1},
    {&__pyx_n_s_show_info, __pyx_k_show_info, sizeof(__pyx_k_show_info), 0, 0, 1, 1},
    {&__pyx_n_s_shutil, __pyx_k_shutil, sizeof(__pyx_k_shutil), 0, 0, 1, 1},
    {&__pyx_n_s_spec, __pyx_k_spec, sizeof(__pyx_k_spec), 0, 0, 1, 1},
    {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
    {&__pyx_n_s_splited, __pyx_k_splited, sizeof(__pyx_k_splited), 0, 0, 1, 1},
    {&__pyx_n_s_splitlines, __pyx_k_splitlines, sizeof(__pyx_k_splitlines), 0, 0, 1, 1},
    {&__pyx_n_s_style, __pyx_k_style, sizeof(__pyx_k_style), 0, 0, 1, 1},
    {&__pyx_n_s_subtitle, __pyx_k_subtitle, sizeof(__pyx_k_subtitle), 0, 0, 1, 1},
    {&__pyx_n_s_super, __pyx_k_super, sizeof(__pyx_k_super), 0, 0, 1, 1},
    {&__pyx_n_s_table, __pyx_k_table, sizeof(__pyx_k_table), 0, 0, 1, 1},
    {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
    {&__pyx_kp_u_theme, __pyx_k_theme, sizeof(__pyx_k_theme), 0, 1, 0, 0},
    {&__pyx_kp_u_theme_1, __pyx_k_theme_1, sizeof(__pyx_k_theme_1), 0, 1, 0, 0},
    {&__pyx_kp_u_theme_2, __pyx_k_theme_2, sizeof(__pyx_k_theme_2), 0, 1, 0, 0},
    {&__pyx_kp_u_theme_Catatan_jika_file_sudah_a, __pyx_k_theme_Catatan_jika_file_sudah_a, sizeof(__pyx_k_theme_Catatan_jika_file_sudah_a), 0, 1, 0, 0},
    {&__pyx_kp_u_thinking_face_Mau_Cek_hasil_yan, __pyx_k_thinking_face_Mau_Cek_hasil_yan, sizeof(__pyx_k_thinking_face_Mau_Cek_hasil_yan), 0, 1, 0, 0},
    {&__pyx_kp_u_thinking_face_Mau_Cek_yang_Mana, __pyx_k_thinking_face_Mau_Cek_yang_Mana, sizeof(__pyx_k_thinking_face_Mau_Cek_yang_Mana), 0, 1, 0, 0},
    {&__pyx_n_s_throw, __pyx_k_throw, sizeof(__pyx_k_throw), 0, 0, 1, 1},
    {&__pyx_n_s_title, __pyx_k_title, sizeof(__pyx_k_title), 0, 0, 1, 1},
    {&__pyx_kp_u_tools_instagram_cek_hasil_crack, __pyx_k_tools_instagram_cek_hasil_crack, sizeof(__pyx_k_tools_instagram_cek_hasil_crack), 0, 1, 0, 0},
    {&__pyx_n_s_tree, __pyx_k_tree, sizeof(__pyx_k_tree), 0, 0, 1, 1},
    {&__pyx_n_s_userid, __pyx_k_userid, sizeof(__pyx_k_userid), 0, 0, 1, 1},
    {&__pyx_n_u_userid, __pyx_k_userid, sizeof(__pyx_k_userid), 0, 1, 0, 1},
    {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}
  };
  return __Pyx_InitStrings(__pyx_string_tab);
}
 
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_super = __Pyx_GetBuiltinName(__pyx_n_s_super); if (!__pyx_builtin_super) __PYX_ERR(0, 13, __pyx_L1_error)
  __pyx_builtin_AssertionError = __Pyx_GetBuiltinName(__pyx_n_s_AssertionError); if (!__pyx_builtin_AssertionError) __PYX_ERR(0, 36, __pyx_L1_error)
  __pyx_builtin_open = __Pyx_GetBuiltinName(__pyx_n_s_open); if (!__pyx_builtin_open) __PYX_ERR(0, 91, __pyx_L1_error)
  __pyx_builtin_enumerate = __Pyx_GetBuiltinName(__pyx_n_s_enumerate); if (!__pyx_builtin_enumerate) __PYX_ERR(0, 113, __pyx_L1_error)
  __pyx_builtin_range = __Pyx_GetBuiltinName(__pyx_n_s_range); if (!__pyx_builtin_range) __PYX_ERR(0, 142, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

   
  __pyx_tuple_ = PyTuple_Pack(1, __pyx_n_u_No); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 18, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple_);
  __Pyx_GIVEREF(__pyx_tuple_);

   
  __pyx_tuple__2 = PyTuple_Pack(1, __pyx_n_u_Nama); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

   
  __pyx_tuple__3 = PyTuple_Pack(2, __pyx_kp_u_theme_1, __pyx_kp_u_Hasil_OK); if (unlikely(!__pyx_tuple__3)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__3);
  __Pyx_GIVEREF(__pyx_tuple__3);

   
  __pyx_tuple__4 = PyTuple_Pack(2, __pyx_kp_u_theme_2, __pyx_kp_u_Hasil_CP); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 21, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);

   
  __pyx_tuple__5 = PyTuple_Pack(2, __pyx_kp_u_bold_red_0, __pyx_kp_u_bold_red_Kembali); if (unlikely(!__pyx_tuple__5)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__5);
  __Pyx_GIVEREF(__pyx_tuple__5);

   
  __pyx_tuple__6 = PyTuple_Pack(1, __pyx_n_u_Pilihan); if (unlikely(!__pyx_tuple__6)) __PYX_ERR(0, 24, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__6);
  __Pyx_GIVEREF(__pyx_tuple__6);

   
  __pyx_slice__10 = PySlice_New(__pyx_int_2, Py_None, Py_None); if (unlikely(!__pyx_slice__10)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice__10);
  __Pyx_GIVEREF(__pyx_slice__10);

   
  __pyx_tuple__11 = PyTuple_Pack(1, __pyx_kp_u_pensive_face_Belum_ada_hasil_sa); if (unlikely(!__pyx_tuple__11)) __PYX_ERR(0, 104, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__11);
  __Pyx_GIVEREF(__pyx_tuple__11);

   
  __pyx_tuple__12 = PyTuple_Pack(1, __pyx_kp_u_Nama_File); if (unlikely(!__pyx_tuple__12)) __PYX_ERR(0, 110, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__12);
  __Pyx_GIVEREF(__pyx_tuple__12);

   
  __pyx_tuple__13 = PyTuple_Pack(1, __pyx_kp_u_Jumlah_Akun); if (unlikely(!__pyx_tuple__13)) __PYX_ERR(0, 111, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__13);
  __Pyx_GIVEREF(__pyx_tuple__13);

   
  __pyx_tuple__14 = PyTuple_Pack(8, __pyx_n_s_account, __pyx_n_s_show_info, __pyx_n_s_root, __pyx_n_s_acc, __pyx_n_s_detail, __pyx_n_s_profile, __pyx_n_s_node, __pyx_n_s_output); if (unlikely(!__pyx_tuple__14)) __PYX_ERR(0, 118, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__14);
  __Pyx_GIVEREF(__pyx_tuple__14);
  __pyx_codeobj__15 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__14, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_show, 118, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__15)) __PYX_ERR(0, 118, __pyx_L1_error)

   
  __pyx_codeobj__16 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__14, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_show, 195, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__16)) __PYX_ERR(0, 195, __pyx_L1_error)

   
  __pyx_tuple__19 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_kwargs); if (unlikely(!__pyx_tuple__19)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_tuple__19);
  __pyx_codeobj__20 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__19, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_init, 12, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__20)) __PYX_ERR(0, 12, __pyx_L1_error)

   
  __pyx_tuple__21 = PyTuple_Pack(4, __pyx_n_s_self, __pyx_n_s_rich, __pyx_n_s_table, __pyx_n_s_choice); if (unlikely(!__pyx_tuple__21)) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__21);
  __Pyx_GIVEREF(__pyx_tuple__21);
  __pyx_codeobj__22 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 4, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__21, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_handle, 15, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__22)) __PYX_ERR(0, 15, __pyx_L1_error)

   
  __pyx_tuple__23 = PyTuple_Pack(9, __pyx_n_s_self, __pyx_n_s_files, __pyx_n_s_move_dir, __pyx_n_s_rich, __pyx_n_s_external_storage, __pyx_n_s_root, __pyx_n_s_file, __pyx_n_s_move_to_filename, __pyx_n_s_node); if (unlikely(!__pyx_tuple__23)) __PYX_ERR(0, 32, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__23);
  __Pyx_GIVEREF(__pyx_tuple__23);
  __pyx_codeobj__24 = (PyObject*)__Pyx_PyCode_New(3, 0, 0, 9, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__23, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_move, 32, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__24)) __PYX_ERR(0, 32, __pyx_L1_error)

   
  __pyx_tuple__25 = PyTuple_Pack(9, __pyx_n_s_self, __pyx_n_s_files, __pyx_n_s_copy_dir, __pyx_n_s_rich, __pyx_n_s_external_storage, __pyx_n_s_root, __pyx_n_s_file, __pyx_n_s_copy_to_filename, __pyx_n_s_node); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);
  __pyx_codeobj__26 = (PyObject*)__Pyx_PyCode_New(3, 0, 0, 9, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__25, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_copy, 59, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__26)) __PYX_ERR(0, 59, __pyx_L1_error)

   
  __pyx_tuple__27 = PyTuple_Pack(23, __pyx_n_s_self, __pyx_n_s_rich, __pyx_n_s_files, __pyx_n_s_data, __pyx_n_s_file, __pyx_n_s_splitlines, __pyx_n_s_line, __pyx_n_s_splited, __pyx_n_s_detail, __pyx_n_s_table, __pyx_n_s_account, __pyx_n_s_index, __pyx_n_s_item, __pyx_n_s_show, __pyx_n_s_show, __pyx_n_s_choices, __pyx_n_s_choice, __pyx_n_s_show_info, __pyx_n_s_genexpr, __pyx_n_s_genexpr, __pyx_n_s_i, __pyx_n_s_item, __pyx_n_s_item); if (unlikely(!__pyx_tuple__27)) __PYX_ERR(0, 86, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__27);
  __Pyx_GIVEREF(__pyx_tuple__27);
  __pyx_codeobj__28 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 23, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__27, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_ok, 86, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__28)) __PYX_ERR(0, 86, __pyx_L1_error)

   
  __pyx_codeobj__29 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 23, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__27, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_mtf_app_controllers_ig_check_res, __pyx_n_s_cp, 163, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__29)) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitConstants(void) {
  __pyx_umethod_PyList_Type_pop.type = (PyObject*)&PyList_Type;
  __pyx_umethod_PyList_Type_pop.method_name = &__pyx_n_s_pop;
  if (__Pyx_CreateStringTabAndInitStrings() < 0) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_2 = PyInt_FromLong(2); if (unlikely(!__pyx_int_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
 

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
   
  if (likely(__Pyx_init_assertions_enabled() == 0)); else

if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 1, __pyx_L1_error)

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
   
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok_spec, NULL); if (unlikely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok)) __PYX_ERR(0, 86, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok_spec, __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok) < 0) __PYX_ERR(0, 86, __pyx_L1_error)
  #else
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok = &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct__ok;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok) < 0) __PYX_ERR(0, 86, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok->tp_dictoffset && __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct__ok->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr_spec, NULL); if (unlikely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr)) __PYX_ERR(0, 102, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr_spec, __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr) < 0) __PYX_ERR(0, 102, __pyx_L1_error)
  #else
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr = &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr) < 0) __PYX_ERR(0, 102, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr->tp_dictoffset && __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_1_genexpr->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp_spec, NULL); if (unlikely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp)) __PYX_ERR(0, 163, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp_spec, __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp) < 0) __PYX_ERR(0, 163, __pyx_L1_error)
  #else
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp = &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_2_cp;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp) < 0) __PYX_ERR(0, 163, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp->tp_dictoffset && __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_2_cp->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr_spec, NULL); if (unlikely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr)) __PYX_ERR(0, 179, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr_spec, __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
  #else
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr = &__pyx_type_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr->tp_dictoffset && __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_11controllers_2ig_12check_result___pyx_scope_struct_3_genexpr->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
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
static int __pyx_pymod_exec_check_result(PyObject* module);  
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_check_result},
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
      "check_result",
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
__Pyx_PyMODINIT_FUNC initcheck_result(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC initcheck_result(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_check_result(void) CYTHON_SMALL_CODE;  
__Pyx_PyMODINIT_FUNC PyInit_check_result(void)
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


static CYTHON_SMALL_CODE int __pyx_pymod_exec_check_result(PyObject *__pyx_pyinit_module)
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
    PyErr_SetString(PyExc_RuntimeError, "Module 'check_result' has already been imported. Re-initialisation is not supported.");
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
  __pyx_m = Py_InitModule4("check_result", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
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
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_check_result(void)", 0);
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
  if (__pyx_module_is_main_controllers__ig__check_result) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name_2, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "controllers.ig.check_result")) {
      if (unlikely((PyDict_SetItemString(modules, "controllers.ig.check_result", __pyx_m) < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
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

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_os, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_os, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_json, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_json, __pyx_t_2) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_shutil, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_shutil, __pyx_t_2) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_pathlib, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_pathlib, __pyx_t_2) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_ig);
  __Pyx_GIVEREF(__pyx_n_s_ig);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_ig)) __PYX_ERR(0, 6, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_mtf_app_controllers, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_ig); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_ig, __pyx_t_2) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_glob);
  __Pyx_GIVEREF(__pyx_n_s_glob);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_glob)) __PYX_ERR(0, 7, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_glob, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_glob); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_glob, __pyx_t_3) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ig); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_Base); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_3);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_3)) __PYX_ERR(0, 9, __pyx_L1_error);
  __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_PEP560_update_bases(__pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_CalculateMetaclass(NULL, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_Py3MetaclassPrepare(__pyx_t_4, __pyx_t_3, __pyx_n_s_Controller, __pyx_n_s_Controller, (PyObject *) NULL, __pyx_n_s_controllers_ig_check_result, (PyObject *) NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (__pyx_t_3 != __pyx_t_2) {
    if (unlikely((PyDict_SetItemString(__pyx_t_5, "__orig_bases__", __pyx_t_2) < 0))) __PYX_ERR(0, 9, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_short_name, __pyx_kp_u_Cek_hasil_Crack) < 0) __PYX_ERR(0, 10, __pyx_L1_error)

   
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_title, __pyx_kp_u_tools_instagram_cek_hasil_crack) < 0) __PYX_ERR(0, 11, __pyx_L1_error)

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_1__init__, 0, __pyx_n_s_Controller___init, NULL, __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__20)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_init, __pyx_t_2) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_3handle, 0, __pyx_n_s_Controller_handle, NULL, __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__22)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_handle, __pyx_t_2) < 0) __PYX_ERR(0, 15, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_5move, 0, __pyx_n_s_Controller_move, NULL, __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__24)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 32, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_move, __pyx_t_2) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_7copy, 0, __pyx_n_s_Controller_copy, NULL, __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__26)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_copy, __pyx_t_2) < 0) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_9ok, 0, __pyx_n_s_Controller_ok, NULL, __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__28)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 86, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_ok, __pyx_t_2) < 0) __PYX_ERR(0, 86, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_11controllers_2ig_12check_result_10Controller_11cp, 0, __pyx_n_s_Controller_cp, NULL, __pyx_n_s_controllers_ig_check_result, __pyx_d, ((PyObject *)__pyx_codeobj__29)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_cp, __pyx_t_2) < 0) __PYX_ERR(0, 163, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

   
  __pyx_t_2 = __Pyx_Py3ClassCreate(__pyx_t_4, __pyx_n_s_Controller, __pyx_t_3, __pyx_t_5, NULL, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_Controller, __pyx_t_2) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   
  __pyx_t_3 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_3) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

   

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  if (__pyx_m) {
    if (__pyx_d && stringtab_initialized) {
      __Pyx_AddTraceback("init controllers.ig.check_result", __pyx_clineno, __pyx_lineno, __pyx_filename);
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
    PyErr_SetString(PyExc_ImportError, "init controllers.ig.check_result");
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

 
static CYTHON_INLINE int __Pyx_PyInt_BoolEqObjC(PyObject *op1, PyObject *op2, long intval, long inplace) {
    CYTHON_MAYBE_UNUSED_VAR(intval);
    CYTHON_UNUSED_VAR(inplace);
    if (op1 == op2) {
        return 1;
    }
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long a = PyInt_AS_LONG(op1);
        return (a == b);
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        int unequal;
        unsigned long uintval;
        Py_ssize_t size = __Pyx_PyLong_DigitCount(op1);
        const digit* digits = __Pyx_PyLong_Digits(op1);
        if (intval == 0) {
            return (__Pyx_PyLong_IsZero(op1) == 1);
        } else if (intval < 0) {
            if (__Pyx_PyLong_IsNonNeg(op1))
                return 0;
            intval = -intval;
        } else {
            if (__Pyx_PyLong_IsNeg(op1))
                return 0;
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
        return (unequal == 0);
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
#if CYTHON_COMPILING_IN_LIMITED_API
        double a = __pyx_PyFloat_AsDouble(op1);
#else
        double a = PyFloat_AS_DOUBLE(op1);
#endif
        return ((double)a == (double)b);
    }
    return __Pyx_PyObject_IsTrueAndDecref(
        PyObject_RichCompare(op1, op2, Py_EQ));
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
    PyObject *arg[2] = {NULL, NULL};
    return __Pyx_PyObject_FastCall(func, arg + 1, 0 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *args[2] = {NULL, arg};
    return __Pyx_PyObject_FastCall(func, args+1, 1 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
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

 
static CYTHON_INLINE PyObject* __Pyx__PyObject_Pop(PyObject* L) {
    if (__Pyx_IS_TYPE(L, &PySet_Type)) {
        return PySet_Pop(L);
    }
    return __Pyx_PyObject_CallMethod0(L, __pyx_n_s_pop);
}
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE PyObject* __Pyx_PyList_Pop(PyObject* L) {
    if (likely(PyList_GET_SIZE(L) > (((PyListObject*)L)->allocated >> 1))) {
        __Pyx_SET_SIZE(L, Py_SIZE(L) - 1);
        return PyList_GET_ITEM(L, PyList_GET_SIZE(L));
    }
    return __Pyx_CallUnboundCMethod0(&__pyx_umethod_PyList_Type_pop, L);
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

 
#if CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
#include <string.h>
#endif
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

 
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject *args[3] = {NULL, arg1, arg2};
    return __Pyx_PyObject_FastCall(function, args+1, 2 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

 
#if !(CYTHON_VECTORCALL && __PYX_LIMITED_VERSION_HEX >= 0x030C00A2)
static PyObject* __Pyx__PyObject_CallMethod1(PyObject* method, PyObject* arg) {
    PyObject *result = __Pyx_PyObject_CallOneArg(method, arg);
    Py_DECREF(method);
    return result;
}
#endif
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg) {
#if CYTHON_VECTORCALL && __PYX_LIMITED_VERSION_HEX >= 0x030C00A2
    PyObject *args[2] = {obj, arg};
    (void) __Pyx_PyObject_GetMethod;
    (void) __Pyx_PyObject_CallOneArg;
    (void) __Pyx_PyObject_Call2Args;
    return PyObject_VectorcallMethod(method_name, args, 2 | PY_VECTORCALL_ARGUMENTS_OFFSET, NULL);
#else
    PyObject *method = NULL, *result;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (likely(is_method)) {
        result = __Pyx_PyObject_Call2Args(method, obj, arg);
        Py_DECREF(method);
        return result;
    }
    if (unlikely(!method)) return NULL;
    return __Pyx__PyObject_CallMethod1(method, arg);
#endif
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

 
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check) {
    CYTHON_MAYBE_UNUSED_VAR(intval);
    CYTHON_MAYBE_UNUSED_VAR(inplace);
    CYTHON_UNUSED_VAR(zerodivision_check);
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long x;
        long a = PyInt_AS_LONG(op1);
        
            x = (long)((unsigned long)a + (unsigned long)b);
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
        if (unlikely(__Pyx_PyLong_IsZero(op1))) {
            return __Pyx_NewRef(op2);
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
#if CYTHON_COMPILING_IN_LIMITED_API
        double a = __pyx_PyFloat_AsDouble(op1);
#else
        double a = PyFloat_AS_DOUBLE(op1);
#endif
            double result;
            
            PyFPE_START_PROTECT("add", return NULL)
            result = ((double)a) + (double)b;
            PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceAdd : PyNumber_Add)(op1, op2);
}
#endif

 
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
        if (dictoffset == 0)
        {
            Py_ssize_t b_dictoffset = 0;
#if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
            b_dictoffset = b->tp_dictoffset;
#else
            PyObject *py_b_dictoffset = PyObject_GetAttrString((PyObject*)b, "__dictoffset__");
            if (!py_b_dictoffset) goto dictoffset_return;
            b_dictoffset = PyLong_AsSsize_t(py_b_dictoffset);
            Py_DECREF(py_b_dictoffset);
            if (b_dictoffset == -1 && PyErr_Occurred()) goto dictoffset_return;
#endif
            if (b_dictoffset) {
                {
                    __Pyx_TypeName b_name = __Pyx_PyType_GetName(b);
                    PyErr_Format(PyExc_TypeError,
                        "extension type '%.200s' has no __dict__ slot, "
                        "but base type '" __Pyx_FMT_TYPENAME "' has: "
                        "either add 'cdef dict __dict__' to the extension type "
                        "or add '__slots__ = [...]' to the base type",
                        type_name, b_name);
                    __Pyx_DECREF_TypeName(b_name);
                }
#if !(CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY)
              dictoffset_return:
#endif
#if CYTHON_AVOID_BORROWED_REFS
                Py_DECREF(b0);
#endif
                return -1;
            }
        }
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
    PyObject *module, *from_list, *star = __pyx_n_s__17;
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
        module_dot = PyUnicode_Concat(module_name, __pyx_kp_u__18);
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

 
static PyObject*
__Pyx_PEP560_update_bases(PyObject *bases)
{
    Py_ssize_t i, j, size_bases;
    PyObject *base, *meth, *new_base, *result, *new_bases = NULL;
    size_bases = PyTuple_GET_SIZE(bases);
    for (i = 0; i < size_bases; i++) {
        base  = PyTuple_GET_ITEM(bases, i);
        if (PyType_Check(base)) {
            if (new_bases) {
                if (PyList_Append(new_bases, base) < 0) {
                    goto error;
                }
            }
            continue;
        }
        meth = __Pyx_PyObject_GetAttrStrNoError(base, __pyx_n_s_mro_entries);
        if (!meth && PyErr_Occurred()) {
            goto error;
        }
        if (!meth) {
            if (new_bases) {
                if (PyList_Append(new_bases, base) < 0) {
                    goto error;
                }
            }
            continue;
        }
        new_base = __Pyx_PyObject_CallOneArg(meth, bases);
        Py_DECREF(meth);
        if (!new_base) {
            goto error;
        }
        if (!PyTuple_Check(new_base)) {
            PyErr_SetString(PyExc_TypeError,
                            "__mro_entries__ must return a tuple");
            Py_DECREF(new_base);
            goto error;
        }
        if (!new_bases) {
            if (!(new_bases = PyList_New(i))) {
                goto error;
            }
            for (j = 0; j < i; j++) {
                base = PyTuple_GET_ITEM(bases, j);
                PyList_SET_ITEM(new_bases, j, base);
                Py_INCREF(base);
            }
        }
        j = PyList_GET_SIZE(new_bases);
        if (PyList_SetSlice(new_bases, j, j, new_base) < 0) {
            goto error;
        }
        Py_DECREF(new_base);
    }
    if (!new_bases) {
        Py_INCREF(bases);
        return bases;
    }
    result = PyList_AsTuple(new_bases);
    Py_DECREF(new_bases);
    return result;
error:
    Py_XDECREF(new_bases);
    return NULL;
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
                                               __pyx_n_s_name_2);
    if (unlikely(name == NULL) || unlikely(!PyUnicode_Check(name))) {
        PyErr_Clear();
        Py_XDECREF(name);
        name = __Pyx_NewRef(__pyx_n_s__30);
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
#if PY_VERSION_HEX < 0x030d00A1
            _PyGen_SetStopIterationValue(result);
#else
            if (!PyTuple_Check(result) && !PyExceptionInstance_Check(result)) {
                PyErr_SetObject(PyExc_StopIteration, result);
            } else {
                PyObject *exc = __Pyx_PyObject_CallOneArg(PyExc_StopIteration, result);
                if (likely(exc != NULL)) {
                    PyErr_SetObject(PyExc_StopIteration, exc);
                    Py_DECREF(exc);
                }
            }
#endif
        }
        Py_DECREF(result);
        result = NULL;
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
