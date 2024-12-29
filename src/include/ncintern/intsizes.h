#pragma once

#ifndef NETCO_INTERNAL_INTSIZES_H
#  define NETCO_INTERNAL_INTSIZES_H 1

    // Signed integers (MIN)
#  define INT8_MIN    (-128)
#  define INT16_MIN   (-32768)
#  define INT32_MIN   (-2147483647 - 1)
#  define INT64_MIN   (-9223372036854775807LL - 1)

    // Signed integers (MAX)
#  define INT8_MAX    127
#  define INT16_MAX   32767
#  define INT32_MAX   2147483647
#  define INT64_MAX   9223372036854775807LL

    // Unsigned integers (MAX)
#  define UINT8_MAX   255
#  define UINT16_MAX  65535
#  define UINT32_MAX  4294967295U
#  define UINT64_MAX  18446744073709551615ULL

    // Least signed integers (MIN)
#  define INT_LEAST8_MIN    INT8_MIN
#  define INT_LEAST16_MIN   INT16_MIN
#  define INT_LEAST32_MIN   INT32_MIN
#  define INT_LEAST64_MIN   INT64_MIN

    // Least signed integers (MAX)
#  define INT_LEAST8_MAX    INT8_MAX
#  define INT_LEAST16_MAX   INT16_MAX
#  define INT_LEAST32_MAX   INT32_MAX
#  define INT_LEAST64_MAX   INT64_MAX

    // Least unsigned integers (MAX)
#  define UINT_LEAST8_MAX   UINT8_MAX
#  define UINT_LEAST16_MAX  UINT16_MAX
#  define UINT_LEAST32_MAX  UINT32_MAX
#  define UINT_LEAST64_MAX  UINT64_MAX

    // Fast signed integers (MIN)
#  define INT_FAST8_MIN     INT32_MIN
#  define INT_FAST16_MIN    INT32_MIN
#  define INT_FAST32_MIN    INT32_MIN
#  define INT_FAST64_MIN    INT64_MIN

    // Fast signed integers (MAX)
#  define INT_FAST8_MAX     INT32_MAX
#  define INT_FAST16_MAX    INT32_MAX
#  define INT_FAST32_MAX    INT32_MAX
#  define INT_FAST64_MAX    INT64_MAX

    // Fast unsigned integers (MAX)
#  define UINT_FAST8_MAX    UINT32_MAX
#  define UINT_FAST16_MAX   UINT32_MAX
#  define UINT_FAST32_MAX   UINT32_MAX
#  define UINT_FAST64_MAX   UINT64_MAX

/// Specific macros for pointer sizes
# ifdef _WIN64
    # define INTPTR_MIN    INT64_MIN
    # define INTPTR_MAX    INT64_MAX
    # define UINTPTR_MAX   UINT64_MAX
# else
    # define INTPTR_MIN    INT32_MIN
    # define INTPTR_MAX    INT32_MAX
    # define UINTPTR_MAX   UINT32_MAX
# endif

/// Other macros that could be useful
#  define PTRDIFF_MIN    INTPTR_MIN
#  define PTRDIFF_MAX    INTPTR_MAX

#  define SIZE_MAX       UINTPTR_MAX

#  define WCHAR_MIN      0
#  define WCHAR_MAX      0xFFFF

#  define WINT_MIN       INT32_MIN
#  define WINT_MAX       INT32_MAX

#endif
