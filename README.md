# MyZooProject

## Overview

`MyZooProject` is a comprehensive C++ project designed to demonstrate various Object-Oriented Programming (OOP) principles. The project models a zoo with different types of animals and showcases features like inheritance, polymorphism, encapsulation, and more.

## Features Demonstrated

- Pure Virtual Functions
- Virtual Functions
- Polymorphism
- Public/Private/Protected Access Specifiers
- Inheritance
- Friend Functions
- Constructors and Destructors
- Operator Overloading
- Early Binding (Static Binding)
- Macros
- Inline Functions
- `typedef` for creating type aliases
- `#ifndef` and `#define` for header guards
- `const` for constant values
- `static` for static member variables and functions
- `volatile` for volatile variables
- Call by reference in functions
- Smart Pointers (`std::unique_ptr`) for automatic memory management
- Robust error handling (null pointer checks)

### Use of `volatile`

The `volatile` keyword is used in the project to demonstrate how it can be used to indicate that a variable's value can be changed at any time without any action being taken by the code the compiler finds nearby. In the project, the `runZoo` variable is declared as `volatile` and could be changed externally, for instance, by another thread or a hardware interrupt.

### Use of `#pragma once`

**The `#pragma once` directive is used in the project as a modern alternative to traditional header guards (`#ifndef`, `#define`, `#endif`)**. It helps to prevent multiple inclusions of a header file within a single translation unit. When the compiler sees `#pragma once`, it ensures that the header file is included only once, thereby avoiding redefinition errors and reducing compilation time. Note that `#pragma once` is supported by most modern compilers but is not part of the C++ standard. In this project, it is used for its simplicity and effectiveness in preventing multiple inclusions.

The use of different methods in the example was intentional and could be confusing. In a real-world project, you would typically choose one method and stick with it throughout all header files for consistency.

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

- C++ Compiler (e.g., g++ with support for C++14 or higher)
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

## Considerations

While the project uses `std::unique_ptr` for automatic memory management, it's worth noting that smart pointers are not suitable for all scenarios. For performance-critical applications, interfacing with external libraries, or complex ownership semantics, raw pointers may be more appropriate.

## Contributing

Feel free to fork the project and submit your contributions via pull requests.

## License

This project is open-source and available under the MIT License.
