# pragma once
# include "netco.h"

BEGIN_EXTERN_C

# if !defined(__bool_true_false_are_defined) && defined(bool) && defined(false) && defined(true)
#   define __bool_true_false_are_defined 1
# endif

# if !defined(_STDBOOL) && defined(__bool_true_false_are_defined)
#   define _STDBOOL 1
# endif

# if !defined(_STDBOOL) && !defined(__cplusplus)
#   if defined NC_NOSTDLIB || defined NC_STDBOOL_IMPL
#     if defined NC_STDBOOL_INT_IMPL
#       // Just in case, idk if this is going to be useful.
#       // Maybe some device is stupid enough to not be capable of supporting
#       // the type _Bool
#       define bool  int
#     else
#       define bool  _Bool
#     endif
#     define false 0
#     define true  1
#   else
#     // Use standard library
#     include <stdbool.h>
#   endif
# endif

END_EXTERN_C
