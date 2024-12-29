# pragma once
# include "tydetect.h"
# include "intsizes.h"

// Base integer types
# ifdef NC_MSC_TYPES
	typedef signed __int8  int8_t;
	typedef signed __int16 int16_t;
	typedef signed __int32 int32_t;
	typedef signed __int64 int64_t;

	typedef unsigned __int8  uint8_t;
	typedef unsigned __int16 uint16_t;
	typedef unsigned __int32 uint32_t;
	typedef unsigned __int64 uint64_t;
	# ifdef _WIN64
		typedef unsigned __int64 uintptr_t;
	# else
		typedef unsigned __int32 uintptr_t;
	# endif

# elif defined NC_GCC_OLD_TYPES
	// GCC old types
	typedef __INT8_TYPE__  int8_t;
	typedef __INT16_TYPE__ int16_t;
	typedef __INT32_TYPE__ int32_t;
	typedef __INT64_TYPE__ int64_t;

	# ifdef __UINT8_TYPE__
		// Has unsigned types by default
		typedef __UINT8_TYPE__   uint8_t;
		typedef __UINT16_TYPE__  uint16_t;
		typedef __UINT32_TYPE__  uint32_t;
		typedef __UINT64_TYPE__  uint64_t;
		typedef __UINTPTR_TYPE__ uintptr_t;
	# else
		// CLang doesn't define the __UINT8_TYPE__
		// So we need to indicate the sign manually
		typedef unsigned __INT8_TYPE__   uint8_t;
		typedef unsigned __INT16_TYPE__  uint16_t;
		typedef unsigned __INT32_TYPE__  uint32_t;
		typedef unsigned __INT64_TYPE__  uint64_t;
		typedef unsigned __INTPTR_TYPE__ uintptr_t;
	# endif

# else
	typedef signed char        int8_t;
	typedef signed short       int16_t;
	typedef signed int         int32_t;
	typedef signed long long   int64_t;

	typedef unsigned char      uint8_t;
	typedef unsigned short     uint16_t;
	typedef unsigned int       uint32_t;
	typedef unsigned long long uint64_t;

	// Long can change size depending on the architecture
	typedef unsigned long      uintptr_t;

#endif

/// Additional types
// Least-width integer types
typedef int8_t  int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t  uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

// Fast-width integer types
# ifdef NC_MSC_TYPES
	// MSVC typically uses `int` for fast types.
	typedef int8_t  int_fast8_t;
	typedef int16_t int_fast16_t;
	typedef int32_t int_fast32_t;
	typedef int64_t int_fast64_t;

	typedef uint8_t  uint_fast8_t;
	typedef uint16_t uint_fast16_t;
	typedef uint32_t uint_fast32_t;
	typedef uint64_t uint_fast64_t;
# elif defined NC_GCC_OLD_TYPES
	// GCC prefers types that match register size for fast types.
	typedef int32_t int_fast8_t;
	typedef int32_t int_fast16_t;
	typedef int32_t int_fast32_t;
	typedef int64_t int_fast64_t;

	typedef uint32_t uint_fast8_t;
	typedef uint32_t uint_fast16_t;
	typedef uint32_t uint_fast32_t;
	typedef uint64_t uint_fast64_t;
# else
	// Default case for other compilers.
	typedef int  int_fast8_t;
	typedef int  int_fast16_t;
	typedef int  int_fast32_t;
	typedef int64_t int_fast64_t;

	typedef unsigned int uint_fast8_t;
	typedef unsigned int uint_fast16_t;
	typedef unsigned int uint_fast32_t;
	typedef uint64_t uint_fast64_t;
#endif
