# Bunsen
Periodic Bunsen is a free & open-source CLI tool used to work with chemistry and its different fields. It is designed to be very simple, user-friendly, and readily-available for all developers. It is written in C and is currently only available for Windows.

## Features
A CLI tool, with commands for:

- Grabbing the name of a element from its initials
- Grabbing the initials of an element from its name
- Periodic table

### Planned features
Periodic Bunsen is still in development, and is not yet complete. Planned features include:

- Grabbing the atomic number of an element from its name or initials
- Calculating the molar mass of a element
- Giving the Noble gas configuration of an element
- Giving the electron configuration of an element
- Calculating the weight of an isotope

## Installation

### Releases

#### Windows
Download the latest release from the [releases page](https://github.com/Colack/Bunsen/releases). Extract the zip file, and run the executable.

#### Linux
As of now, there are no releases for Linux. However, you can build the source code yourself.

#### macOS
As of now, there are no releases for macOS. However, you can build the source code yourself.

### Building from source
Periodic Bunsen is written in C, and is compiled using GCC. If you want to test other compilers, you can do so, but it is not guaranteed to work. If you find an error, and it is caused by a compiler, please report it. You can install GCC from [here](https://gcc.gnu.org/).

The build command is ```gcc main.c cli.c periodic.c -o bunsen```. 

## Usage
Periodic Bunsen is a CLI tool, and is designed to be used in the terminal. The commands are:

- help
- list
- name
- initials
- version
- exit
  
## Contributing
Periodic Bunsen is open-source, and is available here on GitHub. If you want to contribute, you can do so by forking the repository, making your changes, and then making a pull request. If you find any bugs, please report them by making an issue.