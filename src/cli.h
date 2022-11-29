#include "help.h"

// @Path src\cli.h
// Contains the CLI function(s)

// Contains the commands
char commands[11][MAX_STRING];

void cli();
void help();
void version();
void command(char command[MAX_STRING]);
