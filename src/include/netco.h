# pragma once

# ifndef BEGIN_EXTERN_C
#   if __cplusplus
#     define BEGIN_EXTERN_C extern "C" {
#     define END_EXTERN_C   }
#   else
#     define BEGIN_EXTERN_C
#     define END_EXTERN_C
#   endif
# endif

BEGIN_EXTERN_C

#ifndef NETCO_H
#  define NETCO_H 1

// Idea from C3:
// This is used when defining functions
// Not really necessary, just for convenience
# define fn

// For declaring private functions or variables
# define priv static

// The os detection
#  include "ncintern/osdetect.h"

// The typedef detection
#  include "ncintern/tydetect.h"

// "OOP" features ;)
# define ObjectPointer(type) (type *) malloc(sizeof(type))
# define Array(type, len) malloc(sizeof(type) * len)

/// Error managment

// Try catch :D

# if NC_WINDOWS
    // Windows Error Fetching
    # define _ignore(x) x = GetLastError()
# else
    // TODO: Errno?
    # define _ignore(x) x = 0
# endif

# define _multicatch(T, x) if (x == T)
# define _catch(T, x) _ignore(x); _multicatch(T, x)
# define _tryscope

// Try with resources: Checks if the object is not NULL or its a positive number
// So for convenience we always make functions that return 1 if it succeded
# define _try(x, obj) if ((x = obj))

#endif

END_EXTERN_C