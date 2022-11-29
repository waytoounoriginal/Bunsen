#include "cli.h"

char commands[6][MAX_STRING] = {
    "help",
    "list",
    "name",
    "initials",
    "version",
    "exit"
};

// @Usage : help();
// @Brief : Prints the help message.
void help() {
    printf("help - show this help\n");
    printf("list - list all elements\n");
    printf("name - show name of element\n");
    printf("initials - show initials of element\n");
    printf("version - show version of program\n");
    printf("exit - exit program\n");
}

// @Usage : version();
// @Brief : Show version of program
void version() {
    printf("Periodic Bunsen CLI v%d.%d (c) Colack %d\n", VERSION_MAJOR, VERSION_MINOR, VERSION_YEAR);
}

void command(char command[MAX_STRING]) {
    printf("\n");
    if (strcmp(command, "name") == 0) {
        char element[MAX_STRING];
        printf("Enter element name: ");
        scanf("%s", element);
        name(element);
    } else if (strcmp(command, "initials") == 0) {
        char element[MAX_STRING];
        printf("Enter element initials: ");
        scanf("%s", element);
        initials(element);
    } else if (strcmp(command, "list") == 0) {
        listAllElements();
    } else if (strcmp(command, "help") == 0) {
        help();
    } else if (strcmp(command, "version") == 0) {
        version();
    } else if (strcmp(command, "exit") == 0) {
        exit(0);
    } else {
        printf("Invalid command. Type 'help' for a list of commands.\n");
    }
}

// @Usage : cli();
// @Brief : Command line interface for Periodic Bunsen
/*
    Command line interface for Periodic Bunsen.
    This function is called from main() in src\main.c
*/
void cli() {
    char input[MAX_STRING];

    printf("Periodic Bunsen CLI V%d.%d. (c) Colack %d.\nType 'help' for a list of commands.\n",VERSION_MAJOR,VERSION_MINOR,VERSION_YEAR);

    while (true) { 
        printf("\nbunsen> ");
        scanf("%s",input);

        command(input);
    }
}