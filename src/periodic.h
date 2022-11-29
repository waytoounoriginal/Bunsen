#include "includes.h"

// periodic.h and periodic.c contain the periodic table data, functions, and different access methods.

char elements[118][MAX_STRING];

void name(char element[MAX_STRING]);
void initials(char element[MAX_STRING]);
void listAllElements();
void listSpecificElement(int number);
void elementGroups();
void specificElementGroup(char element[MAX_STRING]);
void nobleGasConfig(char element[MAX_STRING]);