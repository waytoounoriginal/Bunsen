#include "help.h"

// @Usage : helps("help");
// @Brief : Prints the help message for a specific command.
void helps(char command[MAX_STRING]) {
    if (strcmp(command,"list")==0) {
        printf("-- list --\n");
        printf("Prints all elements of the periodic table.\n");
        printf("Usage - 'list'.\n");
    } else if (strcmp(command,"name")==0) {
        printf("-- name --\n");
        printf("Finds the name of a element.\n");
        printf("Usage - 'name', initials of the element.\n");
    } else if (strcmp(command,"initials")==0) {
        printf("-- initials --\n");
        printf("Finds the initials of a element.\n");
        printf("Usage - 'initials', name of the element.\n");
    } else if (strcmp(command,"groups")==0) {
        printf("-- groups --\n");
        printf("Lists all of the element groups.\n");
        printf("Usage - 'groups'\n");
    } else if (strcmp(command,"grouping")==0) {
        printf("-- grouping --\n");
        printf("Finds the specific group of a element.\n");
        printf("Usage - 'grouping', name or initials of the element.\n");
    } else if (strcmp(command,"nbconfig")==0) {
        printf("-- nbconfig --\n");
        printf("Returns the noble gas configuration for a element.\n");
        printf("Usage - 'nbconfig', name or intials of the element.\n");
    } else if (strcmp(command,"find")==0) {
        printf("-- find --\n");
        printf("Returns the name and initials of a element from its atomic number.\n");
        printf("Usage - 'find', atomic number. (Integer)\n");
    } else if (strcmp(command,"help")==0) {
        printf("-- help --\n");
        printf("Prints the help menu for this program.\n");
        printf("Usage - 'help'\n");
    } else if (strcmp(command,"helps")==0) {
        printf("-- helps --\n");
        printf("Advanced Help is a menu for finding information and usage on commands.\n");
        printf("Usage - 'helps', name of the command.\n");
    } else if (strcmp(command,"version")==0) {
        printf("-- version --\n");
        printf("Prints the current version of Periodic Bunsen CLI.\n");
        printf("Usage - 'version'\n");
    } else if (strcmp(command,"exit")==0) {
        printf("-- exit --\n");
        printf("The exit command... Not much to explain here.\n");
        printf("Usage - 'exit'\n");
    } else {
        printf("Unknown command '%s'\nType 'help' for a list of commands.\n", command);
    }
}