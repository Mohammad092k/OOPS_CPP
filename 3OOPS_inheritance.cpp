
// Inheritance is one of the fundamental concepts of Object-Oriented Programming (OOP). It allows a new class (called a subclass or derived class) to inherit properties and behaviors (methods) from an existing class (called a superclass or base class).


// #include<bits/stdc++.h>
// using namespace std ;
// class Person {
//     public:
//     string name ;
//     int age ;
//     //constructor
//     Person(string name ,int age){
//         this->name = name ;
//         this->age = age ;
//     }
// };
// // Inheritance
// class Student : public Person{
//   public:
//     int roll_no;
//    Student(string name , int age , int roll_no) : Person(name , age ){
//     this->roll_no = roll_no;
//    }
//     void displayInfo(){
//         cout << "name -" << name << endl;
//         cout << "age -" << age << endl;
//         cout << "roll_no-" << roll_no << endl;
//     }
// };
// int main(){
//     Person p1("Mk" , 21);
//     Student s1("John", 20, 29);
//     s1.displayInfo();
//     return 0 ;
// }


// Mode of Inheritance 

// Inheritance can be specified using different access specifiers: public, protected, and private

// Public members of the base class remain public in the derived class.
// Protected members of the base class remain protected in the derived class.
// Private members of the base class are not accessible directly in the derived class.

// public:

// #include <iostream>
// using namespace std;
// class Base {
// public:
//     int publicVar;
// protected:
//     int protectedVar;
// private:
//     int privateVar;
// };
// class Derived : public Base {
// public:
//     void display() {
//         cout << "Public Var: " << publicVar << endl; // Accessible
//         cout << "Protected Var: " << protectedVar << endl; // Accessible
//         // cout << "Private Var: " << privateVar << endl; // Not accessible
//     }
// };
// int main() {
//     Derived d;
//     d.publicVar = 10; // Accessible
//     // d.protectedVar = 20; // Not accessible
//     d.display();
//     return 0;
// }


// protected


// #include <iostream>
// using namespace std;
// class Base {
// public:
//     int publicVar;
// protected:
//     int protectedVar;
// private:
//     int privateVar;
// };
// class Derived : protected Base {
// public:
//     void display() {
//         cout << "Public Var: " << publicVar << endl; // Accessible as protected
//         cout << "Protected Var: " << protectedVar << endl; // Accessible
//         // cout << "Private Var: " << privateVar << endl; // Not accessible
//     }
// };
// int main() {
//     Derived d;
//     // d.publicVar = 10; // Not accessible
//     // d.protectedVar = 20; // Not accessible
//     d.display();
//     return 0;
// }


// private 

// #include <iostream>
// using namespace std;
// class Base {
// public:
//     int publicVar;
// protected:
//     int protectedVar;
// private:
//     int privateVar;
// };
// class Derived : private Base {
// public:
//     void display() {
//         cout << "Public Var: " << publicVar << endl; // Accessible as private
//         cout << "Protected Var: " << protectedVar << endl; // Accessible as private
//         // cout << "Private Var: " << privateVar << endl; // Not accessible
//     }
// };
// int main() {
//     Derived d;
//     // d.publicVar = 10; // Not accessible
//     // d.protectedVar = 20; // Not accessible
//     d.display();
//     return 0;
// }


// Types of Inheritance 

// 1. Single Inheritance
// In single inheritance, a derived class inherits from only one base class.

// #include <iostream>
// using namespace std;
// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };
// int main() {
//     Dog dog;
//     dog.speak();  // Output: Animal speaks
//     dog.bark();   // Output: Dog barks
//     return 0;
// }


// 2. Multiple Inheritance
// In multiple inheritance, a derived class inherits from multiple base classes.


// #include <iostream>
// using namespace std;
// class Father {
// public:
//     void skill1() {
//         cout << "Father's skill" << endl;
//     }
// };
// class Mother {
// public:
//     void skill2() {
//         cout << "Mother's skill" << endl;
//     }
// };
// class Child : public Father, public Mother {
// public:
//     void skill3() {
//         cout << "Child's skill" << endl;
//     }
// };
// int main() {
//     Child child;
//     child.skill1();  // Output: Father's skill
//     child.skill2();  // Output: Mother's skill
//     child.skill3();  // Output: Child's skill
//     return 0;
// }

// 3. Multilevel Inheritance
// In multilevel inheritance, a derived class serves as the base class for another class, forming a chain of inheritance.

// #include <iostream>
// using namespace std;
// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };
// class Mammal : public Animal {
// public:
//     void walk() {
//         cout << "Mammal walks" << endl;
//     }
// };
// class Dog : public Mammal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };
// int main() {
//     Dog dog;
//     dog.speak();  // Output: Animal speaks
//     dog.walk();   // Output: Mammal walks
//     dog.bark();   // Output: Dog barks
//     return 0;
// }


// 4. Hierarchical Inheritance
// In hierarchical inheritance, multiple derived classes inherit from a single base class.

// #include <iostream>
// using namespace std;
// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };
// class Cat : public Animal {
// public:
//     void meow() {
//         cout << "Cat meows" << endl;
//     }
// };
// int main() {
//     Dog dog;
//     Cat cat;
//     dog.speak();  // Output: Animal speaks
//     dog.bark();   // Output: Dog barks
//     cat.speak();  // Output: Animal speaks
//     cat.meow();   // Output: Cat meows
//     return 0;
// }

// 5. Hybrid Inheritance
// Hybrid inheritance is a combination of two or more types of inheritance (e.g., multiple, multilevel, or hierarchical).

#include <iostream>
using namespace std;
class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks" << endl;
    }
};
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};
class Bat : public Mammal, public Bird {
public:
    void hang() {
        cout << "Bat hangs" << endl;
    }
};
int main() {
    Bat bat;
    // bat.speak();  // Error: Ambiguity error due to multiple inheritance
    bat.walk();   // Output: Mammal walks
    bat.fly();    // Output: Bird flies
    bat.hang();   // Output: Bat hangs
    return 0;
}
