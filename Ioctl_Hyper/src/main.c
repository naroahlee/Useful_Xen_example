#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "privcmd.h"

#define XENVER_version 0
#define __HYPERVISOR_xen_version (17)

int main(int argc, char* argv[])
{
	int fd;
	long s64xenver;

	privcmd_hypercall_t call = {
		.op = __HYPERVISOR_xen_version,
		.arg = { XENVER_version, 0},
	};

	fd = open("/dev/xen/privcmd", O_RDWR|O_CLOEXEC);

	if(-1 == fd)
	{
		fprintf(stderr, "Open Error!\n");
	}

	s64xenver = ioctl(fd, IOCTL_PRIVCMD_HYPERCALL, &call);

	printf("Xen version %ld.%ld\n", s64xenver >> 16, s64xenver & 0xffff);
	close(fd);
	return 0;
}
