# pragma once
# include "netco.h"

BEGIN_EXTERN_C

# if !defined(_STDLIB_H) && defined(_INC_STDLIB)
#   define _STDLIB_H 1
# endif

#ifndef _STDLIB_H

# if defined NC_NOSTDLIB || defined NC_STDLIB_IMPL
	// NULL value definition
	# ifndef NULL
	#   if __cplusplus
	#     define NULL 0
	#   else
	#     define NULL ((void*)0)
	#   endif
	# endif

	// EXIT_SUCCESS definition
	# ifndef EXIT_SUCCESS
	#   define EXIT_FAILURE 1
	#   define EXIT_SUCCESS 0
	# endif
# else
#   // Use standard library
#   include <stdlib.h>
# endif

# define _STDLIB_H 1
#endif

END_EXTERN_C