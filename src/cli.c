#include "cli.h"

// @Path src\cli.c
// Contains the CLI function(s)

// Contains the commands
char commands[16][MAX_STRING] = {
    "getName",
    "getSymbol",
    "getElement",
    "getAtomicNumber",
    "getElementGroup",
    "getNGConfig",
    "getMolarMass",
    "getElectronConfig",

    "listAllElements",
    "listAllElementGroups",

    "help",
    "version",
    "credits",
    "repo",
    ":)",
    "exit"
};

// @Usage : credits();
// @Brief : Prints the credits.
void credits() {
    printf("Periodic Bunsen CLI V%d.%d. (c) Jack Spencer %d.\n", VERSION_MAJOR, VERSION_MINOR, VERSION_YEAR);
    printf("Repository : %s\n", REPOSITORY);
    printf("License : %s\n", LICENSE);
}

// @Usage : repo();
// @Brief : Prints the repository link.
void repo() {
    printf("Repository : %s\n", REPOSITORY);
}

// @Usage : help();
// @Brief : Prints the help message.
void help() {
    printf(" -- GET Commands --\n");
    printf("getName : Get the name of an element from its symbol.\n");
    printf("getSymbol : Get the symbol of an element from its name.\n");
    printf("getElement : Get the element from its atomic number.\n");
    printf("getAtomicNumber : Get the atomic number of an element from its name or symbol.\n");
    printf("getElementGroup : Get the element group of an element from its name or symbol.\n");
    printf("getNGConfig : Get the noble gas configuration of an element from its name or symbol.\n");
    printf("getMolarMass : Get the molar mass from an element and the number of atoms.\n");
    printf("getElectronConfig : Get the electron configuration of an element from its name or symbol.\n\n\n");

    printf(" -- LIST Commands --\n");
    printf("listAllElements : List all elements.\n");
    printf("listAllElementGroups : List all element groups.\n\n\n");

    printf(" -- CLI Commands --\n");
    printf("help : Prints the help message.\n");
    printf("version : Prints the version of the program.\n");
    printf("credits : Prints the credits of the program.\n");
    printf("repo : Prints the repository of the program.\n");
    printf("exit : Exits the program.\n");
}

// @Usage : version();
// @Brief : Show version of program
void version() {
    printf("Periodic Bunsen CLI v%d.%d (c) Jack Spencer %d\n", VERSION_MAJOR, VERSION_MINOR, VERSION_YEAR);
}

// @Usage : command("help");
// @Param : command - The name of the command.
// @Brief : Takes a command as an input, and executes a function based off of the command name.
/*
    Takes a command as an input, and executes a function based off of the command name.
    The list of commands is in the commands array.
*/
void command(char command[MAX_STRING]) {
    printf("\n");

    if (strcmp(command,"getName")==0) {
        char element[MAX_STRING];
        printf("Enter the symbol of the element: ");
        scanf("%s", element);
        api_getElementName(element);
    }
    else if (strcmp(command,"getSymbol")==0) {
        char element[MAX_STRING];
        printf("Enter the name of the element: ");
        scanf("%s", element);
        api_getElementSymbol(element);
    } 
    else if (strcmp(command,"getElement")==0) {
        int element;
        printf("Enter the atomic number of the element: ");
        scanf("%d", &element);
        api_getElement(element);
    }
    else if (strcmp(command,"getAtomicNumber")==0) {
        char element[MAX_STRING];
        printf("Enter the name or symbol of the element: ");
        scanf("%s", element);
        api_getAtomicNumber(element);
    } 
    else if (strcmp(command,"getElementGroup")==0) {
        char element[MAX_STRING];
        printf("Enter the name or symbol of the element: ");
        scanf("%s", element);
        api_getElementGroup(element);
    } 
    else if (strcmp(command,"getNGConfig")==0) {
        char element[MAX_STRING];
        printf("Enter the name or symbol of the element: ");
        scanf("%s", element);
        api_getNGConfig(element);
    } 
    else if (strcmp(command,"getMolarMass")==0) {
        int element;
        int atom;
        printf("Enter the atomic number of the element: ");
        scanf("%d", &element);
        printf("Enter the number of atoms: ");
        scanf("%d", &atom);
        api_getMolarMass(element, atom);
    } 
    else if (strcmp(command,"getElectronConfig")==0) {
        char element[MAX_STRING];
        printf("Enter the name or symbol of the element: ");
        scanf("%s", element);
        api_getElectronConfig(element);
    } 
    else if (strcmp(command,"listAllElements")==0) {
        api_listAllElements();
    } 
    else if (strcmp(command,"listAllElementGroups")==0) {
        api_listAllElementGroups();
    } 
    else if (strcmp(command,"help")==0) {
        help();
    } 
    else if (strcmp(command,"credits")==0) {
        credits();
    }
    else if (strcmp(command,"repo")==0) {
        repo();
    }
    else if (strcmp(command,"version")==0) {
        version();
    } 
    else if (strcmp(command,":)")==0) {
        printf("Thank you, I'll say goodbye soon\n");
        printf("Though its the end of the world\n");
        printf("Don't blame yourself\n");
        printf("And if its true\n");
        printf("I will surround you and give life to a world\n");
        printf("That's our own\n");
        printf(":)\n");
    }
    else if (strcmp(command,"exit")==0) {
        exit(0);
    } 
    else {
        printf("Command not found.\nType 'help' to see a list of commands.\n");
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

    printf(STARTING_MESSAGE,VERSION_MAJOR,VERSION_MINOR,VERSION_YEAR);

    while (true) { 
        printf("\nbunsen> ");
        scanf("%s",input);

        command(input);
    }
}