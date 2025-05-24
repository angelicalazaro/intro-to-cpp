# Intro to C++ Learning Journey

Welcome to my **Intro to C++** repository! This project documents my step-by-step learning process as I dive into C++ programming, from setup to compiling and troubleshooting.

---

## About this Repository

This repo contains my notes, code samples, and solutions related to:

- Installing and configuring C++ compilers on macOS (Clang, GCC)
- Setting up Visual Studio Code for C++ development
- Managing include paths and IntelliSense configurations
- Understanding and fixing common compiler errors (e.g., missing `<iostream>`)
- Writing and compiling basic C++ programs with best practices

---

## Getting Started

If you want to follow along or try the examples:

1. Make sure you have **Xcode Command Line Tools** installed on macOS:

    ```bash
    xcode-select --install
    ```

2. Use **clang++** as the compiler (recommended on macOS):

    ```bash
    clang++ -std=c++20 main.cpp -o main
    ```

3. Open the project in VS Code and configure the C/C++ extension `includePath` and `compilerPath` for proper IntelliSense.

---

## Challenges Faced

- Initial difficulty with missing standard library headers (`iostream` not found)
- Understanding macOS SDK include paths and how Clang uses them
- Switching from GCC to Clang due to better native support on macOS
- Configuring VS Code tasks and `c_cpp_properties.json` correctly for error-free compilation and IntelliSense

---

## Useful Commands

```bash
# Compile with Clang++
clang++ -std=c++20 main.cpp -o main

# Run the compiled program
./main
or F6 with C/C++ Compile Run extension in CS Code

## Data Types

    Bool (Boolean):
    Logical value
    Can be True or False
    Size: 4 bytes

    Int (Integer):
    Whole numbers
    Size: 4 bytes

    Float:
    Decimal numbers (floating point)
    Size: 4 bytes

    Double:
    Double-precision floating point numbers
    Size: 8 bytes (4 + 4 = double float)

    Char (Character):
    Character (ASCII)
    Displays the character or its ASCII number
    Size: 4 bytes

We also have:

    Short Int

    Unsigned Int

    Long Double