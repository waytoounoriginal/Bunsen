#include "periodic.h"

// @Path : src\periodic.c
// Contains the periodic table data, functions, and different access methods.

// Contains the elements of the periodic table
const char elements[118][MAX_STRING] = {
    "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon", "Sodium", "Magnesium", "Aluminum", "Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon", "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc", "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton", "Rubidium", "Strontium", "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium", "Indium", "Tin", "Antimony", "Tellurium", "Iodine", "Xenon", "Cesium", "Barium", "Lanthanum", "Cerium", "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium", "Dysprosium", "Holmium", "Erbium", "Thulium", "Ytterbium", "Lutetium", "Hafnium", "Tantalum", "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead", "Bismuth", "Polonium", "Astatine", "Radon", "Francium", "Radium", "Actinium", "Thorium", "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium", "Curium", "Berkelium", "Californium", "Einsteinium", "Fermium", "Mendelevium", "Nobelium", "Lawrencium", "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium",  "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Copernicium", "Nihonium", "Flerovium", "Moscovium", "Livermorium", "Tennessine", "Oganesson"
};

// Contains the atomic symbols of the elements
const char elementSymbols[118][MAX_STRING] = {
    "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe", "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Nh", "Fl", "Mc", "Lv", "Ts", "Og"
};

// Contains the relative atomic mass of the elements
const double relativeAtomic[118] = {
    1.007, 4.0026, 6.941, 9.0122, 10.811, 12.011, 14.007, 15.999, 18.998, 20.180, 22.990, 24.305, 26.982, 28.086, 30.974, 32.066, 35.453, 39.948, 39.098, 40.078, 44.956, 47.867, 50.942, 51.996, 54.938, 55.845, 58.933, 58.693, 63.546, 65.390, 69.723, 72.630, 74.922, 78.971, 79.904, 83.798, 85.468, 87.620, 88.906, 91.224, 92.906, 95.940, 98.000, 101.070, 102.906, 106.420, 107.868, 112.411, 114.818, 118.710, 121.760, 127.600, 126.904, 131.293, 132.905, 137.327, 138.906, 140.116, 140.908, 144.242, 145.000, 150.360, 151.964, 157.250, 158.925, 162.500, 164.930, 167.259, 168.934, 173.054, 174.967, 178.490, 180.948, 183.840, 186.207, 190.230, 192.217, 195.078, 196.967, 200.590, 204.383, 207.200, 208.980, 209.000, 210.000, 222.000, 223.000, 226.000, 227.000, 232.038, 231.036, 238.029, 237.000, 244.000, 243.000, 247.000, 247.000, 251.000, 252.000, 257.000, 258
};

// Contains the atomic number of the elements
const int atomicNumbers[118] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118
};

const char allElementGroups[10][MAX_STRING] = {
    "Alkali Metal", "Metalloid", "Actinide", "Alkaline Earth Metal", "Reactive Nonmetal", "Uknown Properties", "Transition Metal", "Noble Gas", "Post-Transition Metal", "Lanthanide"
};

// Contains each elements group, from 1-10.
const int elementsSpecificGroup[118] = {
    5, 9, 1, 2, 3, 4, 5, 6, 7, 9, 1, 2, 3, 4, 5, 6, 7, 9, 1, 2, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, 4, 5, 6, 7, 9, 1, 2, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, 4, 5, 6, 7, 9, 1, 2, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, 4, 5, 6, 7, 9, 1, 2, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, 4, 5, 6, 7, 9, 1, 2, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, 4, 5, 6, 7, 9, 1, 2, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, 4, 5, 6, 7, 9
};

const int nobleGases[8] = {
    2, 10, 18, 36, 54, 86, 118, 118
};

// @Usage : api_getElementName("H");
// @Param : element - The elements symbol.
// @Brief : Take the elements symbol as an input and returns the name of the element.
/*
    Takes the elements symbol as an input and returns the name of the element.
    For example, if the input is "H", the output will be "Hydrogen".
    This can be used for every element in the periodic table.
*/
void api_getElementName(char element[MAX_STRING]) {
    int i;
    bool found = false;
    for (i = 0; i < 118; i++) {
        if (strcmp(element, elementSymbols[i]) == 0) {
            printf("%s", elements[i]);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Element not found.\nName are case sensitive.\n");
    }
}

// @Usage : api_getElementSymbol("Hydrogen");
// @Param : element - The elements name.
// @Brief : Takes an elements name and returns the symbol.
/*
    Takes an elements name and returns the symbol.
    For example, if the input is "Hydrogen", the output will be "H".
    This can be used for every element in the periodic table.
*/
void api_getElementSymbol(char element[MAX_STRING]) {
    int i;
    bool found = false;
    for (i = 0; i < 118; i++) {
        if (strcmp(element, elements[i]) == 0) {
            printf("%s", elementSymbols[i]);
            found = true;
            break;
        }
    }
}

// @Usage : api_listAllElements();
// @Brief : Prints all the elements in the periodic table.
/*
    Prints all the elements in the periodic table. 
    There is no need to pass any arguments.
*/
void api_listAllElements() {
    for (int i = 0; i < 118; i++) {
        printf("%s\n",elements[i]);
    }
}

// @Usage : api_getElement(5);
// @Param : number - The number of the element in the periodic table.
// @Brief : Prints the element in the position of the number passed.
/*
    Prints the element in the position of the number passed.
    The number must be between 1 and 118.
*/
void api_getElement(int number) {
    if (number > 0 && number < 119) {
        printf("%s",elements[number-1]);
    }
    else {
        printf("Invalid number.\nType a number between 1 and 118.\n");
    }
}

// @Usage : api_listAllElementGroups();
// @Brief : Prints all element groups in the periodic table.
/*
    Prints all element groups in the periodic table.
    There is no need to pass any arguments.
*/
void api_listAllElementGroups() {
    for (int i = 0; i < 10; i++) {
        printf("%s",allElementGroups[i]);
    }
}

// @Usage : api_getElementGroup();
// @Param : element - The element to be searched.
// @Brief : Prints the element group of the element passed.
/*
    Prints the element group of the element passed.
    The element must be a valid element.
*/
void api_getElementGroup(char element[MAX_STRING]) {
    int i;
    bool found = false;
    for (i = 0; i < 118; i++) {
        if (strcmp(element, elements[i]) == 0) {
            printf("%s", allElementGroups[elementsSpecificGroup[i]-1]);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Element not found.\nName are case sensitive.\n");
    }
}

// @Usage : api_getNGConfig("H");
// @Param : element - The element to get the configuration of.
// @Brief : Prints the noble gas configuration of the element.
/*
    Prints the noble gas configuration of the element provided.
    The element can be provided as the name or symbol.
*/


// @Usage : api_getAtomicNumber("Hydrogen");
// @Param : element - The name or initials of the element.
// @Brief : Prints the atomic number of the element.
/*
    Prints the atomic number of the element.
    Names and Initials are CasE SenSitIVE.
*/
void api_getAtomicNumber(char element[MAX_STRING]) {
    int i;
    bool found = false;
    for (i = 0; i < 118; i++) {
        if (strcmp(element, elements[i]) == 0) {
            printf("%s", elementSymbols[i]);
            found = true;
            break;
        }
    }
}

// @Usage : api_getMolarMass("1");
// @Param : element - The element to get the molar mass of. (int) atoms - The number of atoms. (int)
// @Brief : Returns the molar mass of the element.
void api_getMolarMass(int element, int atoms) {
    printf("%d",relativeAtomic[element]*atoms);
}

// @Usage : api_getElectronConfig("Hydrogen");
// @Param : element - The element to get the electron configuration of.
// @Brief : Returns the electron configuration of the element.
/*
    Returns the electrons configuration of the element.
    The electron configuration is returned as a string.
*/
void api_getElectronConfig(int elementLine) {
    // Go into the assets folder and open the file "electron.txt"
    FILE *electronConfig = fopen("assets/electron.txt", "r");
    // If the file is not found, print an error message.
    if (electronConfig == NULL) {
        printf("Error: File not found.\n");
    }
    // If the file is found, read the file and print the electron configuration.
    else {
        char line[MAX_STRING];
        int i = 0;
        while (fgets(line, sizeof(line), electronConfig)) {
            if (i == elementLine) {
                printf("%s", line);
                break;
            }
            i++;
        }
    }
}
