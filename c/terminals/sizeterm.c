#include <stdio.h>
#include <stdlib.h>
#include <term.h>

int main(void)
{
    int nrows, ncolumns;

    setupterm(NULL, fileno(stdout), (int *)0);
    nrows = tigetnum("lines");
    ncolumns = tigetnum("cols");
    printf("This terminal has %d rows, %d columns.\n", nrows, ncolumns);

    exit(EXIT_SUCCESS);
}
