#include "includes.h"

// @Path src\periodic.h
// Contains the periodic table data, functions, and different access methods.

// Element groups enumeration
typedef enum elementGroups {
    ALKALI_METALS,
    ALKALINE_EARTH_METALS,
    LANTHANIDES,
    REACTIVE_NONMETALS,
    ACTINIDES,
    TRANSITION_METALS,
    POST_TRANSITION_METALS,
    METALLOIDS,
    HALOGENS,
    NOBLE_GASES,
    UNKNOWN
} element_group; 

//  The Element type
/**
 * @brief The Element type
 * @author Mike4544
 * 
 * @param _atomicNumber The atomic number of the element
 * @param _symbol The symbol of the element
 * @param _name The name of the element
 * @param _relativeAtomicMass The relative atomic mass of the element
 * @param _group The group of the element
 * 
 * 
 */
typedef struct Element {
    int _atomicNumber;
    char _symbol[10];
    char _name[30];
    double _relativeAtomic;
    unsigned char _group;
} Element;

extern Element elements[118];

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