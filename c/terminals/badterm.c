#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setupterm("unlisted", fileno(stdout), (int *)0);
    printf("Done.\n");

    exit(EXIT_SUCCESS);
}
