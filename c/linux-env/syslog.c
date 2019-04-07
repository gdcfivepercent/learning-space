#include <syslog.h>
#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("not_here", "r");
    if (! fp) {
        syslog(LOG_ERR|LOG_USER, "ops - %m");
    }
    return 0;
}
