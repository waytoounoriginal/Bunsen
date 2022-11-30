#include "includes.h"

// @Path src\periodic.h
// Contains the periodic table data, functions, and different access methods.

// Contains the elements of the periodic table
const char elements[118][MAX_STRING];
const char elementSymbols[118][MAX_STRING];
const double relativeAtomic[118];
const int atomicNumbers[118];
const char allElementGroups[118][MAX_STRING];
const int elementsSpecificGroup[118];
const int nobleGases[8];

// GET functions
void api_getElementName(char element[MAX_STRING]);
void api_getElementSymbol(char element[MAX_STRING]);
void api_getElement(int number);
void api_getElementGroup(char element[MAX_STRING]);
void api_getNGConfig(char element[MAX_STRING]);
void api_getAtomicNumber(char element[MAX_STRING]);
void api_getMolarMass(int element, int atom);
void api_getElectronConfig(int elementLine);

// LIST functions
void api_listAllElements();
void api_listAllElementGroups();
