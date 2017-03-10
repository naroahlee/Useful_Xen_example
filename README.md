# Useful_Xen_example
Very small hypercall examples

xc_Hypercall: 
An example of how to leverage libxenctrl to invoke a hypercall.
libxenctrl is a hypercall wrapper.
- Only availiable in Dom0... Maybe available in DomU, but libxenctrl is needed.
+ Yes, we are able to leverage libxenctrl even in DomU.

Ioctl_Hypercall:
An example of how to use IOCTL to pass hypercall to a kernel module (driver)
/dev/xen/privatecmd
Avaliable in both Dom0 and DomU.
The interface is somewhat more complicated.

TBD:
I haven't figure out how to invoke a Hypercall_domctl()

