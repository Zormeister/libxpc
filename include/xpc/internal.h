//
//  internal.h
//  libxpc
//
//  Created by Zormeister on 7/9/2025.
//  Copyright © 2025 PureDarwin. All rights reserved.
//

#ifndef __XPC_INTERNAL_H__
#define __XPC_INTERNAL_H__

#include <xpc/private.h>
#include <os/object_private.h>

/* type */
#define XPC_OBJECT_HEADER xpc_type_t type

struct _xpc_type_s {
	/* I'd rather not take the risk. */
	uint32_t typeId;
	size_t typeSize;
	
};

#endif /* __XPC_INTERNAL_H__ */
