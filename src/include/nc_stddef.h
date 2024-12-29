# pragma once
# include "netco.h"

BEGIN_EXTERN_C

# if !defined(_STDDEF_H) && defined(_INC_STDDEF)
#   define _STDDEF_H 1
# endif

# ifndef _STDDEF_H
#   if defined NC_NOSTDLIB || defined NC_STDDEF_IMPL
#     error "No implementation for stddef.h!"
#   else
#     // Use standard library
#     include <stddef.h>
#   endif
#   define _STDDEF_H 1
# endif

END_EXTERN_C
