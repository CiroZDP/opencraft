# pragma once
#  include "netco.h"

BEGIN_EXTERN_C

// Check if it was already imported
#  if !defined _STDINT_H && (defined(_STDINT) || defined(INT8_MAX))
#    define _STDINT_H 1
#  endif

#ifndef _STDINT_H
#  ifndef __cplusplus
#    if defined NC_NOSTDLIB || defined NC_STDINT_IMPL
#      include "ncintern/inttypes.h"
#    else
#      include <stdint.h>
#    endif
#  endif

// Extra typedefs
typedef union _pointer_nc {

	uintptr_t address;
	void* obj;

} pointer_nc;

typedef int result_nc;

#   define _STDINT_H 1
# endif

END_EXTERN_C
