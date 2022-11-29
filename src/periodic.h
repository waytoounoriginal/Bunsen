#include "includes.h"

// @Path src\periodic.h
// Contains the periodic table data, functions, and different access methods.

// Contains the elements of the periodic table
char elements[118][MAX_STRING];

void name(char element[MAX_STRING]);
void initials(char element[MAX_STRING]);
void listAllElements();
void listSpecificElement(int number);
void elementGroups();
void specificElementGroup(char element[MAX_STRING]);
void nobleGasConfig(char element[MAX_STRING]);