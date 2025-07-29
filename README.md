# Lab 6 – Fundamentals of the C Language: Pointers

This folder contains solved problems from Lab 6 of the "Programming Fundamentals" course.

## Topics Covered

- Declaring and using pointers (`int*`, `double*`, `char*`)
- Referencing and dereferencing using `&` and `*`
- Pointers and basic data types
- Using pointers in arithmetic expressions
- Pointer interaction with arrays
- Pointer-based function arguments
- Swapping values via address
- Pointer-style implementations of array functions

## Problems

### Part 1 – Basic Pointer Usage

#### Problem 1.1 – Displaying Addresses and Values
- Read a `char`, an `int`, and a `double`
- Display values and addresses using pointers
- Use both reference and dereference operators

#### Problem 1.2 – Sum via Pointers
- Read two integers and sum them using dereferenced pointers

#### Problem 1.3 – Maximum via Pointers
- Read two integers and compute the maximum using pointers

### Part 2 – Pointers and Arrays

#### Problem 2.1 & 2.2 – Pointer Initialization with Arrays
- Observe address equivalence between array names and first element pointers

#### Problem 2.3 – Pointer Arithmetic
- Use pointer offsets to access elements
- Work with `sizeof` to understand memory steps
- Calculate values at pointer locations

#### Problem 2.4 – Invalid Operations
- Attempt to increment array names and analyze compiler errors

#### Problem 2.5 – Dereferencing Pointer Expressions
- Access elements using pointer indexing and pointer arithmetic

### Part 3 – Pointers and Functions

#### Problem 3.1 – Swap via Pointers
- Write a function to swap two integers using pointers
- Call it from `main` and observe changes

### Part 4 – Pointers, Arrays, and Functions Combined

#### Problem 4.1 – Treasure Map
- Given the number of treasures and trap positions, compute total coins collected
- Use arrays for values and trap locations
- Implement functions for reading, displaying, and computing coin total

#### Problem 4.2 – Bubble Sort Using Swap Function
- Reuse swap function from Problem 3.1
- Implement bubble sort using that swap
- Integrate with the header and function files from Problem 4.1

## Build Instructions

To compile and link programs using pointer-based logic:

```bash
clang -Wall -c pointerUtils.c     # Compile your utility functions
clang -Wall -c main.c             # Compile your main file
clang pointerUtils.o main.o -o output
```
## Build with Makefile

- You can also compile the project using the provided 'makefile'.

- To build the project:
```bash
make
```
- To clean up the build files:
```bash
make clean
```
