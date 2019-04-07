#include <syslog.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    openlog("logmask", LOG_PID|LOG_CONS, LOG_USER);
    syslog(LOG_INFO, "informative message, pid = %d", getpid());
    syslog(LOG_DEBUG, "debug message, should appear");
    setlogmask(LOG_UPTO(LOG_WARNING));
    syslog(LOG_INFO, "info not show");
    syslog(LOG_ERR, "here it is");
    syslog(LOG_DEBUG, "debug not show");
    return 0;
}
