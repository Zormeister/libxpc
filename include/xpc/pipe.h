//
//  pipe.h
//  libxpc
//
//  Created by Zormeister on 7/9/2025.
//  Copyright © 2025 PureDarwin. All rights reserved.
//

#ifndef __XPC_PIPE_H__
#define __XPC_PIPE_H__

#include <xpc/xpc.h>

void xpc_pipe_invalidate(xpc_pipe_t pipe);
xpc_pipe_t xpc_pipe_create(int name, int arg2);
int xpc_pipe_routine_reply(xpc_object_t);
int xpc_pipe_try_receive(mach_port_t, xpc_object_t *, mach_port_t *,
	boolean_t (*)(mach_msg_header_t *, mach_msg_header_t *), mach_msg_size_t, int);

#endif /* __XPC_PIPE_H__ */
