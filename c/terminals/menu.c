#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

    if (!isatty(fileno(stdout))) {
        fprintf(stderr, "You are not a terminal!\n");
    }

    input = fopen("/dev/tty", "r");
    output = fopen("/dev/tty", "w");
    if (!input || !output) {
        fprintf(stderr, "Unable to open /dev/tty\n");
        exit(EXIT_FAILURE);
    }

    do {
        choice = getchoice("Choose one", choices, input, output);
        printf("You have chosen: %c\n", choice);
    } while (choice != 'q');
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
        } while (selected == '\n');
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
