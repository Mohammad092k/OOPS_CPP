// polymorphisms is the ability of objects to take on differnet forms or behave in different ways depending on the 
// context in which thet are used 

// polymorphism refers to the ability of different objects to respond to the same message (or method call) in different ways 
 
//  One of the example of polymorphism we alredy read about the constructor overloading 

// There are two main types of polymorphism supported by C++:

// 1.Compile-time (Static) Polymorphism: Achieved through function overloading and operator overloading.


// Function Overloading: This occurs when multiple functions in the same scope have the same name but different parameters. The compiler determines which function to call based on the number and types of arguments passed.

// Example of function overloading

// void display(int a) {
//     cout << "Integer: " << a << endl;
// }
// void display(double a) {
//     cout << "Double: " << a << endl;
// }
// // Usage
// display(5);      // Calls void display(int a)
// display(3.14);   // Calls void display(double a)


// Operator Overloading: Allows operators such as +, -, *, etc., to be overloaded so that they can perform different operations depending on the types of operands used.

// Example of operator overloading


// #include <iostream>
// class Box {
// private:
//     double length;
//     double width;
//     double height;
// public:
//     // Constructor
//     Box(double l = 0.0, double w = 0.0, double h = 0.0)
//         : length(l), width(w), height(h) {}
//     // Overload the + operator to add two Box objects
//     Box operator+(const Box& other) {
//         Box temp;
//         temp.length = this->length + other.length;
//         temp.width = this->width + other.width;
//         temp.height = this->height + other.height;
//         return temp;
//     }
//     // Method to display dimensions of a Box
//     void display() {
//         std::cout << "Dimensions: " << length << " x " << width << " x " << height << std::endl;
//     }
// };
// int main(){
//     Box box1(3.0, 4.0, 5.0);
//     Box box2(1.0, 2.0, 3.0);
//     // Add two Box objects using the overloaded + operator
//     Box box3 = box1 + box2;
//     // Display dimensions of the resulting Box
//     std::cout << "Box 1:" << std::endl;
//     box1.display();
//     std::cout << "Box 2:" << std::endl;
//     box2.display();
//     std::cout << "Box 3 (Box 1 + Box 2):" << std::endl;
//     box3.display();
//     return 0;
// }



// 2.Run-time (Dynamic) Polymorphism: Achieved through inheritance and virtual functions.

// Inheritance: Allows a derived class to inherit properties and behaviors from a base class. A pointer or reference to a base class can be used to refer to objects of its derived classes.

// Function Over Riding is one of the Example

// Function overriding in Object-Oriented Programming (OOP) in C++ is a feature that allows a derived class to provide a specific implementation of a function that is already defined in its base class. This is used to achieve runtime polymorphism.

// menaing that the base and derived lass may have same function name but different implementation 

// #include<bits/stdc++.h>
// using namespace std ;
// class Parent {
//   public:
//    void show(){
//     cout <<"I am parent" << endl;
//    }
// };
// class child {
//   public:
//     void show(){
//     cout <<"I am child" << endl;
//    }
// };
// int main(){
//   Parent p1;
//   p1.show();
//   child c1 ;
//   c1.show();
// }


// Virtual functions 

// it is a function which we expect that can be redefined in the derived class 


// #include<bits/stdc++.h>
// using namespace std ;
// class Parent {
//   public:
//   virtual void show(){
//     cout <<"I am parent" << endl;
//    }
// };
// class child {
//   public:
//     void show(){
//     cout <<"I am child" << endl;
//    }
// };
// int main(){
//   Parent p1;
//   p1.show();
//   child c1 ;
//   c1.show();
// }

// virtual functions are dynamic in nature which is defined by a keyword "virtual" inside the base class and are always declared with a base class and overridden ina a child class 
// virtual function is called during runtime 