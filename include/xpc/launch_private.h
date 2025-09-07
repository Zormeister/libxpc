#ifndef _XPC_LAUNCH_PRIVATE_H_
#define _XPC_LAUNCH_PRIVATE_H_

#include <xpc/xpc.h>

#define EXNOERROR	0
#define EXNOMEM		1
#define EXINVAL		2
#define EXSRCH      3
#define EXMAX		EXSRCH

const char *xpc_strerror(int error);
xpc_object_t xpc_copy_entitlement_for_token(const char *, audit_token_t *);

kern_return_t xpc_call_wakeup(mach_port_t, int);
void xpc_dictionary_get_audit_token(xpc_object_t, audit_token_t *);
void xpc_dictionary_set_mach_recv(xpc_object_t, const char *, mach_port_t);
void xpc_dictionary_set_mach_send(xpc_object_t, const char *, mach_port_t);
mach_port_t xpc_dictionary_copy_mach_send(xpc_object_t, const char *);
xpc_object_t xpc_copy_entitlements_for_pid(pid_t);

OS_CLOSED_ENUM(xpc_domain_type, uint32_t,
			   XPC_DOMAIN_SYSTEM = 1,
			   XPC_DOMAIN_USER = 2,
			   XPC_DOMAIN_PID = 5,
			   XPC_DOMAIN_PORT = 7
);


#endif
