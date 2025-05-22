
# 📘 C Programming Language - Theory & Concepts

Welcome to the **C Programming Language** theory documentation. This README provides an in-depth overview of **C**, from basics to advanced concepts. Ideal for beginners, intermediate programmers, and those preparing for systems programming or embedded development.

---

## 📚 Table of Contents

1. [Introduction](#introduction)
2. [History of C](#history-of-c)
3. [Basic Syntax](#basic-syntax)
4. [Data Types & Variables](#data-types--variables)
5. [Operators](#operators)
6. [Control Structures](#control-structures)
7. [Functions](#functions)
8. [Arrays and Strings](#arrays-and-strings)
9. [Pointers](#pointers)
10. [Structures & Unions](#structures--unions)
11. [Dynamic Memory Allocation](#dynamic-memory-allocation)
12. [File Handling](#file-handling)
13. [Preprocessor Directives](#preprocessor-directives)
14. [Advanced Concepts](#advanced-concepts)

    * Function Pointers
    * Bit Manipulation
    * Memory Management
    * Recursion
    * Variable Argument Functions (`stdarg.h`)
    * Inline Assembly
15. [C and Operating Systems](#c-and-operating-systems)
16. [Compiling & Linking](#compiling--linking)
17. [Debugging & Tools](#debugging--tools)
18. [Best Practices](#best-practices)
19. [Resources](#resources)

---

## 🧾 Introduction

C is a general-purpose, procedural programming language that provides low-level access to memory and is widely used in system/software development, embedded systems, and operating system kernels.

---

## 🕰 History of C

* Developed in the early 1970s by **Dennis Ritchie** at Bell Labs.
* Initially created to implement the Unix operating system.
* Influenced many modern languages like C++, Java, and Rust.

---

## 🔤 Basic Syntax

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

* Every C program starts from `main()`.
* `#include` is a preprocessor directive to include standard libraries.
* Semicolon `;` marks the end of a statement.

---

## 📦 Data Types & Variables

### Basic Data Types:

* `int`, `char`, `float`, `double`
* Modifiers: `short`, `long`, `unsigned`, `signed`

### Example:

```c
int age = 25;
char grade = 'A';
float pi = 3.14;
```

---

## ➕ Operators

Arithmetic, Logical, Relational, Bitwise, Assignment, Increment/Decrement, etc.

```c
a + b;   // Arithmetic
a && b;  // Logical
a >> 1;  // Bitwise Right Shift
```

---

## 🔁 Control Structures

* Conditional: `if`, `else`, `switch`
* Loops: `for`, `while`, `do-while`
* Jump: `break`, `continue`, `goto`

---

## 🧩 Functions

Functions help modularize code and support reuse.

```c
int add(int a, int b) {
    return a + b;
}
```

---

## 📊 Arrays and Strings

```c
int nums[5] = {1, 2, 3, 4, 5};
char name[] = "Alice";
```

* Arrays are collections of same-type elements.
* Strings are character arrays ending with `'\0'`.

---

## 🧭 Pointers

Pointers store memory addresses.

```c
int x = 10;
int *ptr = &x;
```

* `*` dereferences a pointer.
* `&` gives the address of a variable.

---

## 🏗 Structures & Unions

```c
struct Person {
    char name[50];
    int age;
};

union Data {
    int i;
    float f;
};
```

* Structures hold multiple data types.
* Unions share memory among fields.

---

## 🧠 Dynamic Memory Allocation

Uses `<stdlib.h>` functions: `malloc()`, `calloc()`, `realloc()`, `free()`

```c
int *arr = malloc(10 * sizeof(int));
```

* Always free memory to avoid leaks.

---

## 📁 File Handling

```c
FILE *fp = fopen("file.txt", "r");
fprintf(fp, "Hello");
fclose(fp);
```

* Functions: `fopen`, `fclose`, `fprintf`, `fscanf`, `fread`, `fwrite`

---

## ⚙️ Preprocessor Directives

* `#define`, `#include`, `#ifdef`, `#ifndef`

```c
#define PI 3.14
```

---

## 🧬 Advanced Concepts

### Function Pointers

```c
void greet() { printf("Hello"); }
void (*funcPtr)() = greet;
funcPtr();
```

### Bit Manipulation

```c
int x = 5; // 0101
x = x << 1; // 1010
```

### Memory Management

* Understanding stack vs. heap
* Memory leaks, dangling pointers

### Recursion

```c
int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n - 1);
}
```

### `stdarg.h` (Variable Argument Lists)

```c
#include <stdarg.h>
int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for(int i = 0; i < count; i++) total += va_arg(args, int);
    va_end(args);
    return total;
}
```

### Inline Assembly

Used for hardware-level programming and optimization.

---

## 🖥 C and Operating Systems

C is the primary language for:

* OS Kernels (e.g., Linux, Windows NT)
* Drivers and Embedded Systems
* Low-level system interfaces (syscalls)

---

## 🛠 Compiling & Linking

```bash
gcc main.c -o main
```

* Compilation process: Preprocessing → Compilation → Assembling → Linking

---

## 🐛 Debugging & Tools

* **GDB** – GNU Debugger
* **Valgrind** – Memory leak detector
* **Make** – Build automation tool
* **clang-format** – Code formatter

---

## 🧼 Best Practices

* Always initialize variables
* Use `const` and `static` appropriately
* Avoid `goto` (unless truly needed)
* Comment your code
* Modularize functions

---

## 📚 Resources

* [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
* [C Standard Library Reference](https://en.cppreference.com/w/c)
* [Learn-C.org](https://www.learn-c.org/)
* [GDB Tutorial](https://www.cs.cmu.edu/~gilpin/tutorial/)

---

> Feel free to fork this repo and add your own notes or practice code examples. Happy Coding! 🚀

---

Let me know if you'd like this in a `.md` file or want to add practice problems or project ideas to the repository too.
