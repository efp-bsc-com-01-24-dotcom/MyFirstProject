# MY C++ LABS

This repository contains C++ programming lab assignments covering fundamental concepts from basic conditionals to object-oriented programming with inheritance and operator overloading.

## Table of Contents
- [Lab 6: Conditional Logic & Control Flow](#lab-6)
- [Lab 7: Introduction to Classes & OOP](#lab-7)
- [Lab 8: Constructors, Destructors & Operator Overloading](#lab-8)
- [Lab 9: Inheritance & Polymorphism](#lab-9)

---

## Lab 6: Conditional Logic & Control Flow

### Overview
Lab 6 focuses on understanding conditional statements (`if`, `else if`, `else`) and control flow logic in C++. Topics include random number generation, logical operators, and decision-making structures.

### Tasks & Projects

1. **Question 1 - Subscription Expiration Alert**
   - Generates a random number between 0-11
   - Displays different messages based on days until subscription expiration
   - Demonstrates `if-else if-else` logic

2. **Question 2 - Subscription Using Switch**
   - Similar to Question 1 but uses `switch` statement for better readability

3. **Question 3 - Iteration**
   - Implements loop structures (`for`, `while`)
   - Demonstrates iteration concepts

4. **Question 4 - Integer Value**
   - Conditional logic with integer variables
   - Type conversion and comparisons

5. **Question 5 - Area of a Shape**
   - Calculates area based on conditional shape selection
   - Uses mathematical formulas with conditionals

6. **Question 6 - General Programming Task**
   - Additional practice with control flow and conditionals

---

## Lab 7: Introduction to Classes & OOP

### Overview
Lab 7 introduces Object-Oriented Programming (OOP) fundamentals, including class definitions, member functions, constructors, and encapsulation.

### Tasks & Projects

1. **Question 1 - Rectangle Class**
   - Defines a `Rectangle` class with private data members (`length`, `width`)
   - Implements member functions: `getwidth()`, `getlength()`, `area()`
   - Uses default constructor
   - Demonstrates access specifiers and class encapsulation

2. **Question 2 & 3 - Additional OOP Concepts**
   - Further practice with class design
   - Multiple member functions and data members

### The Tasks Folder
- Contains additional programming tasks related to number swapping and basic algorithms

---

## Lab 8: Constructors, Destructors & Operator Overloading

### Overview
Lab 8 expands on OOP concepts by introducing multiple constructors, destructors, and operator overloading for custom objects.

### Tasks & Projects

1. **Folder 1 - Box Class with Operator Overloading**
   - Defines a `Box` class representing a 3D box with dimensions (length, breadth, height)
   - **Constructors:**
     - Default constructor: initializes all dimensions to 0
     - Parameterized constructor: initializes with provided values
   - **Member Functions:**
     - `GetVolume()`: calculates and returns volume
     - `setLength()`, `setBreadth()`, `setHeight()`: setter methods
   - **Operator Overloading:**
     - Overloads `+` operator to add two Box objects (combines dimensions)
   - **Main Program:** Demonstrates creating multiple Box objects, calculating volumes, and adding boxes

2. **Folder 2 - Person Class**
   - Additional practice with class design and member functions

3. **MyFirstProject - Reimplementation**
   - Contains copies of Lab 6 questions as additional practice

---

## Lab 9: Inheritance & Polymorphism

### Overview
Lab 9 introduces inheritance, where classes inherit properties and methods from a base class. This demonstrates the "is-a" relationship in OOP.

### Tasks & Projects

1. **Polygon Base Class**
   - Base class with protected members: `mWidth`, `mHeight`
   - Public method: `Setvalue(int width, int height)`
   - Demonstrates protected access for derived classes

2. **Rectangle Derived Class**
   - Inherits from `Polygon`
   - Implements `Area()` method
   - Formula: Area = width × height

3. **Triangle Derived Class**
   - Inherits from `Polygon`
   - Implements `Area()` method
   - Formula: Area = (width × height) / 2

4. **Main Program**
   - Creates instances of both `Rectangle` and `Triangle`
   - Sets dimensions for both shapes
   - Calculates and displays areas
   - Demonstrates polymorphic behavior through base class interface

### Output Example
```
Area of rectangle is: 20
Area of triangle is: 10
```
(When dimensions are set to width=4, height=5)

---

## Running the Programs

### Lab 9 Example (Latest)
```bash
cd lab9/folder1
./app.exe
```

### General Compilation (if needed)
```bash
g++ -o program main.cpp
./program
```

---

## Key Concepts Covered

| Lab | Core Concepts |
|-----|--------------|
| 6 | Conditionals, Random Numbers, Control Flow |
| 7 | Classes, Objects, Member Functions, Constructors |
| 8 | Multiple Constructors, Destructors, Operator Overloading |
| 9 | Inheritance, Derived Classes, Polymorphism |

---

## Author
**efp-bsc-com-01-24**  
Email: efp-bsc-com-01-24@unima.ac.mw

## Last Updated
April 22, 2026
