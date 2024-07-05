# OOP Notes

Welcome to the OOP (Object-Oriented Programming) Notes repository! This repository contains comprehensive notes and examples for understanding the concepts of OOP using C++.

## Table of Contents

1. [Introduction to OOP General](#introduction-to-oop)
2. [Classes and Objects](#classes-and-objects)
3. [Encapsulation](#encapsulation)
4. [Inheritance](#inheritance)
5. [Polymorphism](#polymorphism)
6. [Abstraction](#abstraction)
7. [Static Keyword](#static-keyword)
8. [Function Overriding](#function-overriding)
9. [Examples](#examples)
10. [Contributing](#contributing)
11. [License](#license)

## Introduction to OOP

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects", which can contain data and code: data in the form of fields (often known as attributes or properties), and code in the form of procedures (often known as methods).

## Classes and Objects

### Class Definition
A class is a blueprint for creating objects (a particular data structure), providing initial values for state (member variables or properties), and implementations of behavior (member functions or methods).

### Object Creation
An object is an instance of a class. When a class is defined, no memory is allocated until an object of that class is created.

```cpp
class Example {
public:
    int data;
    void display() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    Example obj;
    obj.data = 5;
    obj.display(); // Output: Data: 5
    return 0;
}
```

# 🔮 Encapsulation

Encapsulation is the mechanism of restricting access to some of the object's components and protecting the object's internal state. This is achieved using access specifiers: public, private, and protected.

# 🌍 Inheritance

Inheritance is a feature that represents the "is a" relationship between a base class and a derived class. It allows a class to inherit properties and behavior from another class.


```
class Base {
public:
    void show() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.show(); // Output: Derived class
    return 0;
}

```

# 💻 Polymorphism
Polymorphism allows methods to do different things based on the object it is acting upon. It can be compile-time (overloading) or runtime (overriding).

# 🤝 Abstraction
Abstraction hides complex implementation details and shows only the necessary features of an object.

# ⏱️ Static Keyword
The static keyword defines class-level variables and methods.

Function Overriding
Function overriding allows a derived class to provide a specific implementation of a method that is already defined in its base class.

## 🌟 Support Me

If you find this helpful or valuable, please consider 🌟 starring the repository. It helps us gain visibility and encourages further development. We appreciate your support!