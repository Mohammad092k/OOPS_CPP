// Abstraction in Object-Oriented Programming (OOP) in C++ is the concept of hiding the complex implementation details of a system and exposing only the necessary parts in a simplified manner.

// Abstract are the base class from which other classes can be derived 
// They can not be instantiated(meaning that there objects cannot be made)

// #include <iostream>
// // Abstract class
// class Shape {
// public:
//     // Pure virtual function (a class whose value is assigned )
//     virtual void draw() = 0;
//     // Non-pure virtual function
//     void moveTo(int x, int y) {
//         std::cout << "Moving to (" << x << ", " << y << ")" << std::endl;
//     }
// };
// // Derived class: Circle
// class Circle : public Shape {
// public:
//     void draw() override {
//         std::cout << "Drawing a Circle" << std::endl;
//     }
// };
// // Derived class: Rectangle
// class Rectangle : public Shape {
// public:
//     void draw() override {
//         std::cout << "Drawing a Rectangle" << std::endl;
//     }
// };
// int main() {
//      Circle c1;
//      c1.draw();
//      Rectangle r1;
//      r1.draw();
//     return 0;
// }


// Shape is an abstract class that cannot be instantiated.
// It contains a pure virtual function draw(), making it mandatory for derived classes to implement this function.
// Circle and Rectangle classes inherit from the Shape class.


// The abstract class can also be implemented by acess modifiers (private , public , protected);


// Bonus <<<<<<<<<<<<<<<<<<<--------------->>>>>>>>>>>>>>>>>>>>

// Static Keyword 


// static keyword in C++ serves multiple purposes depending on where it is used


// 1. Static Variables
// Inside a Function
// When used inside a function, a static variable retains its value between function calls. It is initialized only once and persists throughout the program's lifetime.

// #include <iostream>
// void counter() {
//     int count = 0; // Initialized only once
//     count++;
//     std::cout << "Count: " << count << std::endl;
// }
// int main() {
//     counter(); // Output: Count: 1
//     counter(); // Output: Count: 1
//     counter(); // Output: Count: 1
//     return 0;
// }

// #include <iostream>
// void counter() {
//     static int count = 0; // Initialized only once
//     count++;
//     std::cout << "Count: " << count << std::endl;
// }
// int main() {
//     counter(); // Output: Count: 1
//     counter(); // Output: Count: 2
//     counter(); // Output: Count: 3
//     return 0;
// }

// Inside a Class
// When used inside a class, a static data member is shared by all objects of the class. It belongs to the class rather than any specific instance.

// #include <iostream>
// class Example {
// public:
//     // Static variable to count the number of objects created
//     static int count;
//     // Constructor increments the count each time an object is created
//     Example() {
//         count++;
//     }
// };
// // Initialize the static variable outside the class
// int Example::count = 0;
// int main() {
//     // Create two objects of the Example class
//     Example obj1;
//     Example obj2;
//     // Print the count of objects created
//     std::cout << "Number of objects created: " << Example::count << std::endl; // Output: 
//     return 0;
// }

