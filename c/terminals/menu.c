#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

char *choices[] = {
    "a - Add new record",
    "d - Display records",
    "q - Quit program",
    NULL
};

int getchoice(char *greet, char *choices[], FILE *in, FILE *out);

int main(void)
{
    int choice = 0;
    FILE *input;
    FILE *output;
    struct termios initial_settings, new_settings;

    if (!isatty(fileno(stdout))) {
        fprintf(stderr, "You are not a terminal!\n");
    }

    input = fopen("/dev/tty", "r");
    output = fopen("/dev/tty", "w");
    if (!input || !output) {
        fprintf(stderr, "Unable to open /dev/tty\n");
        exit(EXIT_FAILURE);
    }

    tcgetattr(fileno(stdin), &initial_settings);
    new_settings = initial_settings;
    new_settings.c_lflag &= ~ICANON;
    new_settings.c_lflag &= ~ECHO;
    new_settings.c_cc[VMIN] = 1;
    new_settings.c_cc[VTIME] = 0;
    new_settings.c_lflag &= ~ISIG;
    if (tcsetattr(fileno(stdin), TCSANOW, &new_settings) != 0) {
        fprintf(stderr, "Could not set attributes!\n");
        exit(EXIT_FAILURE);
    }

    do {
        choice = getchoice("Choose one", choices, input, output);
        printf("You have chosen: %c\n", choice);
    } while (choice != 'q');
    tcsetattr(fileno(stdin), TCSANOW, &initial_settings);

    exit(EXIT_SUCCESS);
}

int getchoice(char *greet, char *choices[], FILE *in, FILE *out)
{
    int chosen = 0;
    int selected;
    char **option;

    do {
        fprintf(out, "Menu: %s\n", greet);
        option = choices;
        while (*option) {
            fprintf(out, "%s\n", *option);
            option++;
        }
        do {
            selected = fgetc(in);
        } while (selected == '\n' || selected == '\r');
        option = choices;
        while (*option) {
            if (selected == *option[0]) {
                chosen = 1;
                break;
            }
            option++;
        }
        if (!chosen) {
            fprintf(out, "Incorrect choice, select again!\n");
        }
    } while (!chosen);

    return selected;
}
