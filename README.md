# MyZooProject

## Overview

`MyZooProject` is a simple C++ project designed to demonstrate various Object-Oriented Programming (OOP) principles in C++. The project models a zoo with different types of animals and showcases features like inheritance, polymorphism, encapsulation, and more.

## Features Demonstrated

- Pure Virtual Functions
- Virtual Functions
- Polymorphism
- Public/Private/Protected Access Specifiers
- Inheritance
- Friend Functions
- Constructors and Destructors
- File Organization (Separate `.cpp` and `.h` files)

## Directory Structure

The project has the following directory structure:

```text
MyZooProject/
├── src/
│   ├── Animal.cpp
│   ├── Mammal.cpp
│   ├── Bird.cpp
│   ├── Zoo.cpp
│   └── main.cpp
├── include/
│   ├── Animal.h
│   ├── Mammal.h
│   ├── Bird.h
│   └── Zoo.h
└── Makefile
```

- **src/**: Contains the `.cpp` source files.
- **include/**: Contains the `.h` header files.
- **Makefile**: Contains build instructions for the project.

## Prerequisites

- C++ Compiler (e.g., g++)
- Make (for using the Makefile)

## Building the Project

1. Navigate to the `MyZooProject/` directory.
2. Run `make` to compile the project.

    ```bash
    make
    ```

This will produce an executable named `MyZooApp.out`.

## Running the Project

After building the project, you can run it using:

```bash
./MyZooApp.out
```

## Cleaning Up

To remove the compiled files and clean the directory, run:

```bash
make clean
```

## Contributing

Feel free to fork the project and submit your contributions via pull requests.

## License

This project is open-source and available under the MIT License.
