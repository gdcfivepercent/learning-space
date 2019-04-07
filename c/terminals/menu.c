#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *choices[] = {
    "a - Add new record",
    "d - Display records",
    "q - Quit program",
    NULL
};

int getchoice(char *greet, char *choices[]);

int main(void)
{
    int choice = 0;

    if (!isatty(fileno(stdout))) {
        fprintf(stderr, "You are not a terminal!\n");
        exit(EXIT_FAILURE);
    }

    do {
        choice = getchoice("Choose one", choices);
        printf("You have chosen: %c\n", choice);
    } while (choice != 'q');
    exit(EXIT_SUCCESS);
}

int getchoice(char *greet, char *choices[])
{
    int chosen = 0;
    int selected;
    char **option;

    do {
        printf("Menu: %s\n", greet);
        option = choices;
        while (*option) {
            printf("%s\n", *option);
            option++;
        }
        do {
            selected = getchar();
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
            printf("Incorrect choice, select again!\n");
        }
    } while (!chosen);

    return selected;
}
