#include "periodic.h"

// @Path : src\periodic.c

char elements[118][MAX_STRING] = {
    "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon", "Sodium", "Magnesium", "Aluminum", "Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon", "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc", "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton", "Rubidium", "Strontium", "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium", "Indium", "Tin", "Antimony", "Tellurium", "Iodine", "Xenon", "Cesium", "Barium", "Lanthanum", "Cerium", "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium", "Dysprosium", "Holmium", "Erbium", "Thulium", "Ytterbium", "Lutetium", "Hafnium", "Tantalum", "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead", "Bismuth", "Polonium", "Astatine", "Radon", "Francium", "Radium", "Actinium", "Thorium", "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium", "Curium", "Berkelium", "Californium", "Einsteinium", "Fermium", "Mendelevium", "Nobelium", "Lawrencium", "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium",  "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Copernicium", "Nihonium", "Flerovium", "Moscovium", "Livermorium", "Tennessine", "Oganesson"
};

// @Usage : name("H");
// @Param : element - The elements initials.
// @Brief : Take initials as an input and returns the name of the element.
/*
    Takes initials as an input and returns the name of the element.
    For example, if the input is "H", the output will be "Hydrogen".
    This can be used for every element in the periodic table.
*/
void name(char element[MAX_STRING]) {
    if (strcmp(element, "H")==0) {
        printf("Hydrogen\n");
    }
    else if (strcmp(element,"He")==0) {
        printf("Helium\n");
    }
    else if (strcmp(element,"Li")==0) {
        printf("Lithium\n");
    }
    else if (strcmp(element,"Be")==0) {
        printf("Beryllium\n");
    }
    else if (strcmp(element,"B")==0) {
        printf("Boron\n");
    }
    else if (strcmp(element,"C")==0) {
        printf("Carbon\n");
    }
    else if (strcmp(element,"N")==0) {
        printf("Nitrogen\n");
    }
    else if (strcmp(element,"O")==0) {
        printf("Oxygen\n");
    }
    else if (strcmp(element,"F")==0) {
        printf("Flourine\n");
    }
    else if (strcmp(element,"Ne")==0) {
        printf("Neon\n");
    }
    else if (strcmp(element,"Na")==0) {
        printf("Sodium\n");
    }
    else if (strcmp(element,"Mg")==0) {
        printf("Magensium\n");
    }
    else if (strcmp(element,"Al")==0) {
        printf("Aluminum\n");
    }
    else if (strcmp(element,"Si")==0) {
        printf("Silicon\n");
    }
    else if (strcmp(element,"P")==0) {
        printf("Phosphorus\n");
    }
    else if (strcmp(element,"S")==0) {
        printf("Sulfur\n");
    }
    else if (strcmp(element,"Cl")==0) {
        printf("Chlorine\n");
    }
    else if (strcmp(element,"Ar")==0) {
        printf("Argon\n");
    }
    else if (strcmp(element,"K")==0) {
        printf("Potassium\n");
    }
    else if (strcmp(element,"Ca")==0) {
        printf("Calcium\n");
    }
    else if (strcmp(element,"Ti")==0) {
        printf("Titanium\n");
    }
    else if (strcmp(element,"V")==0) {
        printf("Vanadium\n");
    }
    else if (strcmp(element,"Cr")==0) {
        printf("Chromium\n");
    }
    else if (strcmp(element,"Mn")==0) {
        printf("Maganese\n");
    }
    else if (strcmp(element,"Fe")==0) {
        printf("Iron\n");
    }
    else if (strcmp(element,"Co")==0) {
        printf("Cobalt\n");
    }
    else if (strcmp(element,"Ni")==0) {
        printf("Nickel\n");
    }
    else if (strcmp(element,"Cu")==0) {
        printf("Copper\n");
    }
    else if (strcmp(element,"Zn")==0) {
        printf("Zinc\n");
    }
    else if (strcmp(element,"Ga")==0) {
        printf("Gallium\n");
    }
    else if (strcmp(element,"Ge")==0) {
        printf("Germanium\n");
    }
    else if (strcmp(element,"As")==0) {
        printf("Arsenic\n");
    }
    else if (strcmp(element,"Se")==0) {
        printf("Selenium\n");
    }
    else if (strcmp(element,"Br")==0) {
        printf("Bromine\n");
    }
    else if (strcmp(element,"Kr")==0) {
        printf("Krypton\n");
    }
    else if (strcmp(element,"Rb")==0) {
        printf("Rubidium\n");
    }
    else if (strcmp(element,"Sr")==0) {
        printf("Strontium\n");
    }
    else if (strcmp(element,"Y")==0) {
        printf("Yttrium\n");
    }
    else if (strcmp(element,"Zr")==0) {
        printf("Zirconium\n");
    }
    else if (strcmp(element,"Nb")==0) {
        printf("Niobium\n");
    }
    else if (strcmp(element,"Mo")==0) {
        printf("Molybdenum\n");
    }
    else if (strcmp(element,"Tc")==0) {
        printf("Technetium\n");
    }
    else if (strcmp(element,"Ru")==0) {
        printf("Ruthenium\n");
    }
    else if (strcmp(element,"Rh")==0) {
        printf("Rhodium\n");
    }
    else if (strcmp(element,"Pd")==0) {
        printf("Palladium\n");
    }
    else if (strcmp(element,"Ag")==0) {
        printf("Silver\n");
    }
    else if (strcmp(element,"Cd")==0) {
        printf("Cadmium\n");
    }
    else if (strcmp(element,"In")==0) {
        printf("Indium\n");
    }
    else if (strcmp(element,"Sn")==0) {
        printf("Tin\n");
    }
    else if (strcmp(element,"Sb")==0) {
        printf("Antimony\n");
    }
    else if (strcmp(element,"Te")==0) {
        printf("Tellurium\n");
    }
    else if (strcmp(element,"I")==0) {
        printf("Iodine\n");
    }
    else if (strcmp(element,"Xe")==0) {
        printf("Xenon\n");
    }
    else if (strcmp(element,"Cs")==0) {
        printf("Caesium\n");
    }
    else if (strcmp(element,"Ba")==0) {
        printf("Barium\n");
    }
    else if (strcmp(element,"La")==0) {
        printf("Lanthanum\n");
    }
    else if (strcmp(element,"Hf")==0) {
        printf("Hafnium\n");
    }
    else if (strcmp(element,"Ta")==0) {
        printf("Tantalum\n");
    }
    else if (strcmp(element,"W")==0) {
        printf("Tungsten\n");
    }
    else if (strcmp(element,"Re")==0) {
        printf("Rhenium\n");
    }
    else if (strcmp(element,"Os")==0) {
        printf("Osmium\n");
    }
    else if (strcmp(element,"Ir")==0) {
        printf("Iridium\n");
    }
    else if (strcmp(element,"Pt")==0) {
        printf("Platinum\n");
    }
    else if (strcmp(element,"Au")==0) {
        printf("Gold\n");
    }
    else if (strcmp(element,"Hg")==0) {
        printf("Mercury\n");
    }
    else if (strcmp(element,"Tl")==0) {
        printf("Thallium\n");
    }
    else if (strcmp(element,"Pb")==0) {
        printf("Lead\n");
    }
    else if (strcmp(element,"Bi")==0) {
        printf("Bismuth\n");
    }
    else if (strcmp(element,"Po")==0) {
        printf("Polonium\n");
    }
    else if (strcmp(element,"At")==0) {
        printf("Astatine\n");
    }
    else if (strcmp(element,"Rn")==0) {
        printf("Radon\n");
    }
    else if (strcmp(element,"Fr")==0) {
        printf("Francium\n");
    }
    else if (strcmp(element,"Ra")==0) {
        printf("Radium\n");
    }
    else if (strcmp(element,"Ac")==0) {
        printf("Actinium\n");
    }
    else if (strcmp(element,"Rf")==0) {
        printf("Rutherfordium\n");
    }
    else if (strcmp(element,"Db")==0) {
        printf("Dubnium\n");
    }
    else if (strcmp(element,"Sg")==0) {
        printf("Seaborgium\n");
    }
    else if (strcmp(element,"Bh")==0) {
        printf("Bohrium\n");
    }
    else if (strcmp(element,"Hs")==0) {
        printf("Hassium\n");
    }
    else if (strcmp(element,"Mt")==0) {
        printf("Meitnerium\n");
    }
    else if (strcmp(element,"Ds")==0) {
        printf("Darmstadtium\n");
    }
    else if (strcmp(element,"Rg")==0) {
        printf("Roentgenium\n");
    }
    else if (strcmp(element,"Cn")==0) {
        printf("Copernicium\n");
    }
    else if (strcmp(element,"Nh")==0) {
        printf("Nihonium\n");
    }
    else if (strcmp(element,"Fl")==0) {
        printf("Flerovium\n");
    }
    else if (strcmp(element,"Mc")==0) {
        printf("Moscovium\n");
    }
    else if (strcmp(element,"Lv")==0) {
        printf("Livermorium\n");
    }
    else if (strcmp(element,"Ts")==0) {
        printf("Tenessine\n");
    }
    else if (strcmp(element,"Og")==0) {
        printf("Oganesson\n");
    }
    else if (strcmp(element,"Ce")==0) {
        printf("Cerium\n");
    }
    else if (strcmp(element,"Pr")==0) {
        printf("Praseodymium\n");
    }
    else if (strcmp(element,"Nd")==0) {
        printf("Neodymium\n");
    }
    else if (strcmp(element,"Pm")==0) {
        printf("Promethium\n");
    }
    else if (strcmp(element,"Sm")==0) {
        printf("Samarium\n");
    }
    else if (strcmp(element,"Eu")==0) {
        printf("Europium\n");
    }
    else if (strcmp(element,"Gd")==0) {
        printf("Gadolinium\n");
    }
    else if (strcmp(element,"Tb")==0) {
        printf("Terbium\n");
    }
    else if (strcmp(element,"Dy")==0) {
        printf("Dysprosium\n");
    }
    else if (strcmp(element,"Ho")==0) {
        printf("Holmium\n");
    }
    else if (strcmp(element,"Er")==0) {
        printf("Erbium\n");
    }
    else if (strcmp(element,"Tm")==0) {
        printf("Thulium\n");
    }
    else if (strcmp(element,"Yb")==0) {
        printf("Ytterbium\n");
    }
    else if (strcmp(element,"Lu")==0) {
        printf("Lutetium\n");
    }
    else if (strcmp(element,"Th")==0) {
        printf("Thorium\n");
    }
    else if (strcmp(element,"Pa")==0) {
        printf("Protactinium\n");
    }
    else if (strcmp(element,"U")==0) {
        printf("Uranium\n");
    }
    else if (strcmp(element,"Np")==0) {
        printf("Neptunium\n");
    }
    else if (strcmp(element,"Pu")==0) {
        printf("Plutonium\n");
    }
    else if (strcmp(element,"Am")==0) {
        printf("Americium\n");
    }
    else if (strcmp(element,"Cm")==0) {
        printf("Curium\n");
    }
    else if (strcmp(element,"Bk")==0) {
        printf("Berkelium\n");
    }
    else if (strcmp(element,"Cf")==0) {
        printf("Californium\n");
    }
    else if (strcmp(element,"Es")==0) {
        printf("Einsteinium\n");
    }
    else if (strcmp(element,"Fm")==0) {
        printf("Fermium\n");
    }
    else if (strcmp(element,"Md")==0) {
        printf("Mendelevium\n");
    }
    else if (strcmp(element,"No")==0) {
        printf("Nobelium\n");
    }
    else if (strcmp(element,"Lr")==0) {
        printf("Lawrencium\n");
    }
    else {
        printf("Unknown element.\nPlease try the elements inicials. Example: H for Hydrogen.\n");
    }
}

// @Usage : initials("Hydrogen");
// @Param : element - The element name.
// @Brief : Takes an elements name and returns the initals.
/*
    Takes an elements name and returns the initials.
    For example, if the input is "Hydrogen", the output will be "H".
    This can be used for every element in the periodic table.
*/
void initials(char element[MAX_STRING]) {
    if (strcmp(element,"Hydrogen")==0) {
        printf("H\n");
    }
    else if (strcmp(element,"Helium")==0) {
        printf("He\n");
    }
    else if (strcmp(element,"Lithium")==0) {
        printf("Li\n");
    }
    else if (strcmp(element,"Beryllium")==0) {
        printf("Be\n");
    }
    else if (strcmp(element,"Boron")==0) {
        printf("B\n");
    }
    else if (strcmp(element,"Carbon")==0) {
        printf("C\n");
    }
    else if (strcmp(element,"Nitrogen")==0) {
        printf("N\n");
    }
    else if (strcmp(element,"Oxygen")==0) {
        printf("O\n");
    }
    else if (strcmp(element,"Fluorine")==0) {
        printf("F\n");
    }
    else if (strcmp(element,"Neon")==0) {
        printf("Ne\n");
    }
    else if (strcmp(element,"Sodium")==0) {
        printf("Na\n");
    }
    else if (strcmp(element,"Magnesium")==0) {
        printf("Mg\n");
    }
    else if (strcmp(element,"Aluminum")==0) {
        printf("Al\n");
    }
    else if (strcmp(element,"Silicon")==0) {
        printf("Si\n");
    }
    else if (strcmp(element,"Phosphorus")==0) {
        printf("P\n");
    }
    else if (strcmp(element,"Sulfur")==0) {
        printf("S\n");
    }
    else if (strcmp(element,"Chlorine")==0) {
        printf("Cl\n");
    }
    else if (strcmp(element,"Argon")==0) {
        printf("Ar\n");
    }
    else if (strcmp(element,"Potassium")==0) {
        printf("K\n");
    }
    else if (strcmp(element,"Calcium")==0) {
        printf("Ca\n");
    }
    else if (strcmp(element,"Scandium")==0) {
        printf("Sc\n");
    }
    else if (strcmp(element,"Titanium")==0) {
        printf("Ti\n");
    }
    else if (strcmp(element,"Vanadium")==0) {
        printf("V\n");
    }
    else if (strcmp(element,"Chromium")==0) {
        printf("Cr\n");
    }
    else if (strcmp(element,"Manganese")==0) {
        printf("Mn\n");
    }
    else if (strcmp(element,"Iron")==0) {
        printf("Fe\n");
    }
    else if (strcmp(element,"Cobalt")==0) {
        printf("Co\n");
    }
    else if (strcmp(element,"Nickel")==0) {
        printf("Ni\n");
    }
    else if (strcmp(element,"Copper")==0) {
        printf("Cu\n");
    }
    else if (strcmp(element,"Zinc")==0) {
        printf("Zn\n");
    }
    else if (strcmp(element,"Gallium")==0) {
        printf("Ga\n");
    }
    else if (strcmp(element,"Germanium")==0) {
        printf("Ge\n");
    }
    else if (strcmp(element,"Arsenic")==0) {
        printf("As\n");
    }
    else if (strcmp(element,"Selenium")==0) {
        printf("Se\n");
    }
    else if (strcmp(element,"Bromine")==0) {
        printf("Br\n");
    }
    else if (strcmp(element,"Krypton")==0) {
        printf("Kr\n");
    }
    else if (strcmp(element,"Rubidium")==0) {
        printf("Rb\n");
    }
    else if (strcmp(element,"Strontium")==0) {
        printf("Sr\n");
    }
    else if (strcmp(element,"Yttrium")==0) {
        printf("Y\n");
    }
    else if (strcmp(element,"Zirconium")==0) {
        printf("Zr\n");
    }
    else if (strcmp(element,"Niobium")==0) {
        printf("Nb\n");
    }
    else if (strcmp(element,"Molybdenum")==0) {
        printf("Mo\n");
    }
    else if (strcmp(element,"Technetium")==0) {
        printf("Tc\n");
    }
    else if (strcmp(element,"Ruthenium")==0) {
        printf("Ru\n");
    }
    else if (strcmp(element,"Rhodium")==0) {
        printf("Rh\n");
    }
    else if (strcmp(element,"Palladium")==0) {
        printf("Pd\n");
    }
    else if (strcmp(element,"Silver")==0) {
        printf("Ag\n");
    }
    else if (strcmp(element,"Cadmium")==0) {
        printf("Cd\n");
    }
    else if (strcmp(element,"Indium")==0) {
        printf("In\n");
    }
    else if (strcmp(element,"Tin")==0) {
        printf("Sn\n");
    }
    else if (strcmp(element,"Antimony")==0) {
        printf("Sb\n");
    }
    else if (strcmp(element,"Tellurium")==0) {
        printf("Te\n");
    }
    else if (strcmp(element,"Iodine")==0) {
        printf("I\n");
    }
    else if (strcmp(element,"Xenon")==0) {
        printf("Xe\n");
    }
    else if (strcmp(element,"Cesium")==0) {
        printf("Cs\n");
    }
    else if (strcmp(element,"Barium")==0) {
        printf("Ba\n");
    }
    else if (strcmp(element,"Lanthanum")==0) {
        printf("La\n");
    }
    else if (strcmp(element,"Cerium")==0) {
        printf("Ce\n");
    }
    else if (strcmp(element,"Praseodymium")==0) {
        printf("Pr\n");
    }
    else if (strcmp(element,"Neodymium")==0) {
        printf("Nd\n");
    }
    else if (strcmp(element,"Promethium")==0) {
        printf("Pm\n");
    }
    else if (strcmp(element,"Samarium")==0) {
        printf("Sm\n");
    }
    else if (strcmp(element,"Europium")==0) {
        printf("Eu\n");
    }
    else if (strcmp(element,"Gadolinium")==0) {
        printf("Gd\n");
    }
    else if (strcmp(element,"Terbium")==0) {
        printf("Tb\n");
    }
    else if (strcmp(element,"Dysprosium")==0) {
        printf("Dy\n");
    }
    else if (strcmp(element,"Holmium")==0) {
        printf("Ho\n");
    }
    else if (strcmp(element,"Erbium")==0) {
        printf("Er\n");
    }
    else if (strcmp(element,"Thulium")==0) {
        printf("Tm\n");
    }
    else if (strcmp(element,"Ytterbium")==0) {
        printf("Yb\n");
    }
    else if (strcmp(element,"Lutetium")==0) {
        printf("Lu\n");
    }
    else if (strcmp(element,"Hafnium")==0) {
        printf("Hf\n");
    }
    else if (strcmp(element,"Tantalum")==0) {
        printf("Ta\n");
    }
    else if (strcmp(element,"Tungsten")==0) {
        printf("W\n");
    }
    else if (strcmp(element,"Rhenium")==0) {
        printf("Re\n");
    }
    else if (strcmp(element,"Osmium")==0) {
        printf("Os\n");
    }
    else if (strcmp(element,"Iridium")==0) {
        printf("Ir\n");
    }
    else if (strcmp(element,"Platinum")==0) {
        printf("Pt\n");
    }
    else if (strcmp(element,"Gold")==0) {
        printf("Au\n");
    }
    else if (strcmp(element,"Mercury")==0) {
        printf("Hg\n");
    }
    else if (strcmp(element,"Thallium")==0) {
        printf("Tl\n");
    }
    else if (strcmp(element,"Lead")==0) {
        printf("Pb\n");
    }
    else if (strcmp(element,"Bismuth")==0) {
        printf("Bi\n");
    }
    else if (strcmp(element,"Polonium")==0) {
        printf("Po\n");
    }
    else if (strcmp(element,"Astatine")==0) {
        printf("At\n");
    }
    else if (strcmp(element,"Radon")==0) {
        printf("Rn\n");
    }
    else if (strcmp(element,"Francium")==0) {
        printf("Fr\n");
    }
    else if (strcmp(element,"Radium")==0) {
        printf("Ra\n");
    }
    else if (strcmp(element,"Actinium")==0) {
        printf("Ac\n");
    }
    else if (strcmp(element,"Thorium")==0) {
        printf("Th\n");
    }
    else if (strcmp(element,"Protactinium")==0) {
        printf("Pa\n");
    }
    else if (strcmp(element,"Uranium")==0) {
        printf("U\n");
    }
    else if (strcmp(element,"Neptunium")==0) {
        printf("Np\n");
    }
    else if (strcmp(element,"Plutonium")==0) {
        printf("Pu\n");
    }
    else if (strcmp(element,"Americium")==0) {
        printf("Am\n");
    }
    else if (strcmp(element,"Curium")==0) {
        printf("Cm\n");
    }
    else if (strcmp(element,"Berkelium")==0) {
        printf("Bk\n");
    }
    else if (strcmp(element,"Californium")==0) {
        printf("Cf\n");
    }
    else if (strcmp(element,"Einsteinium")==0) {
        printf("Es\n");
    }
    else if (strcmp(element,"Fermium")==0) {
        printf("Fm\n");
    }
    else if (strcmp(element,"Mendelevium")==0) {
        printf("Md\n");
    }
    else if (strcmp(element,"Nobelium")==0) {
        printf("No\n");
    }
    else if (strcmp(element,"Lawrencium")==0) {
        printf("Lr\n");
    }
    else if (strcmp(element,"Rutherfordium")==0) {
        printf("Rf\n");
    }
    else if (strcmp(element,"Dubnium")==0) {
        printf("Db\n");
    }
    else if (strcmp(element,"Seaborgium")==0) {
        printf("Sg\n");
    }
    else if (strcmp(element,"Bohrium")==0) {
        printf("Bh\n");
    }
    else if (strcmp(element,"Hassium")==0) {
        printf("Hs\n");
    }
    else if (strcmp(element,"Meitnerium")==0) {
        printf("Mt\n");
    }
    else if (strcmp(element,"Darmstadtium")==0) {
        printf("Ds\n");
    }
    else if (strcmp(element,"Roentgenium")==0) {
        printf("Rg\n");
    }
    else if (strcmp(element,"Copernicium")==0) {
        printf("Cn\n");
    }
    else if (strcmp(element,"Nihonium")==0) {
        printf("Nh\n");
    }
    else if (strcmp(element,"Flerovium")==0) {
        printf("Fl\n");
    }
    else if (strcmp(element,"Moscovium")==0) {
        printf("Mc\n");
    }
    else if (strcmp(element,"Livermorium")==0) {
        printf("Lv\n");
    }
    else if (strcmp(element,"Tennessine")==0) {
        printf("Ts\n");
    }
    else if (strcmp(element,"Oganesson")==0) {
        printf("Og\n");
    }
    else {
        printf("Unknown element.\nPlease try the elements inicials. Example: Hydrogen for H.\n");
    }
}

// @Usage : listAllElements();
// @Brief : Prints all the elements in the periodic table.
/*
    Prints all the elements in the periodic table. 
    There is no need to pass any arguments.
*/
void listAllElements() {
    for (int i = 0; i < 118; i++) {
        printf("%s\n",elements[i]);
    }
}

// @Usage : listSpecificElement(5);
// @Param : number - The number of the element in the periodic table.
// @Brief : Prints the element in the position of the number passed.
/*
    Prints the element in the position of the number passed.
    The number must be between 1 and 118.
*/
void listSpecificElement(int number) {
    if (number > 0 && number < 119) {
        printf("%s",elements[number-1]);
    }
    else {
        printf("Invalid number.\nType a number between 1 and 118.\n");
    }
}