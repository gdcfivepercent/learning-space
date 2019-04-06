#define _GNU_SOURCE

#include <sys/utsname.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char hostname[256];
    struct utsname uts;

    if (gethostname(hostname, 255) != 0 || uname(&uts) < 0) {
        fprintf(stderr, "Could not get host information\n");
        return 1;
    }

    printf("Computer host name is %s\n", hostname);
    printf("System is %s on %s hardware\n", uts.sysname, uts.machine);
    printf("Nodename is %s\n", uts.nodename);
    printf("Release is %s, %s\n", uts.release, uts.version);
    printf("Domain name is %s\n", uts.domainname);

    return 0;
}
