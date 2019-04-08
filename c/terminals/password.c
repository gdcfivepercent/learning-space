#include <termios.h>
#include <stdio.h>
#include <stdlib.h>

#define PASSWORD_LEN 8

int main(void)
{
    struct termios initialsettings, newsettings;
    char password[PASSWORD_LEN + 1];

    tcgetattr(fileno(stdin), &initialsettings);
    newsettings = initialsettings;
    newsettings.c_lflag &= ~ECHO;

    printf("Enter password: ");
    if (tcsetattr(fileno(stdin), TCSAFLUSH, &newsettings) != 0) {
        fprintf(stderr, "Could not set attributes!\n");
        exit(EXIT_FAILURE);
    } else {
        fgets(password, PASSWORD_LEN, stdin);
        tcsetattr(fileno(stdin), TCSANOW, &initialsettings);
        fprintf(stdout, "\nYou entered: %s\n", password);
    }

    exit(EXIT_SUCCESS);
}
