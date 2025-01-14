# Basic Calculator in C

This project is a basic calculator that performs simple arithmetic operations such as addition, subtraction, multiplication, and division. The user interacts through the console to enter numbers, select the desired operator, and decide whether to continue with more operations.

## Features

- Support for basic operations: `+`, `-`, `*`, `/`.
- Interactive user input.
- Option validation to continue or exit the program.
- Separation of operation functions in the `funciones.h` file.

## Project Structure

The program is divided into the following files:
- `main.c`: Contains the main logic of the program.
- `funciones.h`: Declarations and definitions of the addition, subtraction, multiplication, and division functions.

## How to Use

1. **Compilation**: 
   Use a compiler like `gcc` to compile the program.
   ```bash
   gcc main.c funciones.c -o calculator
2. **execution**
   ./calculator
