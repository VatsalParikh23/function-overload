# function-overload

# Function Overloading in C++

Welcome to the Function Overloading repository! This README provides an overview of function overloading in C++.

## Table of Contents
- [Introduction](#introduction)
- [What is Function Overloading?](#what-is-function-overloading)
- [Function Overloading Rules](#function-overloading-rules)
- [How to Use Function Overloading](#how-to-use-function-overloading)
- [Benefits of Function Overloading](#benefits-of-function-overloading)
- [Common Pitfalls](#common-pitfalls)
- [Resources](#resources)

## Introduction

Function overloading is a powerful feature in C++ that allows you to define multiple functions with the same name but different parameter lists. The compiler determines which function to call based on the number and types of arguments provided.

## What is Function Overloading?

Function overloading refers to defining multiple functions within the same scope, all sharing the same name. These functions have different parameter lists, allowing them to perform similar operations on different types or numbers of input data.

### Function Overloading Rules

When overloading functions in C++, consider the following rules:

1. Functions must have the same name.
2. Functions must differ in their parameter lists, including the number or types of parameters.
3. The return type alone is not sufficient to distinguish overloaded functions.
4. The order of overloaded functions and their argument types should be unique.

### How to Use Function Overloading

To use function overloading, you can define multiple functions with the same name but different parameter lists. The C++ compiler will select the appropriate function based on the arguments provided in the function call.

Example:

```
#include <iostream>

void print(int num) {
    std::cout << "Printing an integer: " << num << std::endl;
}

void print(double num) {
    std::cout << "Printing a double: " << num << std::endl;
}

int main() {
    int a = 42;
    double b = 3.14;

    print(a);  // Calls the first function
    print(b);  // Calls the second function

    return 0;
}
```
