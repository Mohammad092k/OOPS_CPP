//  Object-Oriented Programming (OOP) in C++ is a programming paradigm that uses objects and classes to design and develop software

/*
1. Classes and Objects
Class: A blueprint for creating objects. It defines the properties (attributes) and behaviors (methods) that the objects created from the class will have.

Object: An instance of a class. It is created based on the class definition and can access the class's methods and attributes.

*/

// Access Modifier

//1. Public Access Modifier
// Members declared as public are accessible from outside the class. This means that any code can access and modify the public members of the class.


//    class MyClass {
// public:
//     int publicVar;
//     void publicMethod() {
//         cout << "This is a public method." << endl;
//     }
// };
// int main() {
//     MyClass obj;
//     obj.publicVar = 10; // Accessible
//     obj.publicMethod(); // Accessible
//     return 0;
// }

//2. Private Access Modifier
// Members declared as private are accessible only within the same class. They cannot be accessed directly from outside the class. This is useful for hiding the internal details and protecting the integrity of the data.

// class MyClass {
// private:
//     int privateVar;
//     void privateMethod() {
//         cout << "This is a private method." << endl;
//     }
// public:
//     void setPrivateVar(int val) {
//         privateVar = val;
//     }
//     int getPrivateVar() {
//         return privateVar;
//     }
// };
// int main() {
//     MyClass obj;
//     // obj.privateVar = 10; // Error: privateVar is private
//     // obj.privateMethod(); // Error: privateMethod is private
//     obj.setPrivateVar(10); // Accessible through public method
//     cout << obj.getPrivateVar() << endl; // Accessible through public method
//     return 0;
// }


// 3. Protected Access Modifier
// Members declared as protected are accessible within the same class and its derived classes. They cannot be accessed directly from outside the class, but they can be accessed in derived classes.

// class Base {
// protected:
//     int protectedVar;
//     void protectedMethod() {
//         cout << "This is a protected method." << endl;
//     }
// };
// class Derived : public Base {
// public:
//     void accessProtectedMembers() {
//         protectedVar = 10; // Accessible within derived class
//         protectedMethod(); // Accessible within derived class
//     }
// };
// int main() {
//     Derived obj;
//     // obj.protectedVar = 10; // Error: protectedVar is protected
//     // obj.protectedMethod(); // Error: protectedMethod is protected
//     obj.accessProtectedMembers(); // Accessible through a public method in derived class
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std ;

 class Car
{
  private:
     int price ;

public:
   string brand;
   string model;
   int year ;

  // setter 
   void setPrice(int p){
     price = p ;
   }
   // getter
   int getPice(){
     return price ;
   }

   void displayCarInfo(){
       cout << "Brand" << "-" <<brand << endl;
       cout << "Model" << "-" <<model << endl;
       cout << "Year" << "-" <<year<< endl;
       cout << "Price" << "-" <<price<< endl;
   }

};

int main(){
  Car car1;
  car1.brand = "Fortuner";
  car1.model = "6th_Gen" ;
  car1.year = 2020;
  // car1.price = 25 ; // this in accessbile bacause price is the pricate 
   car1.setPrice(1000);
  //  car1.getPice();
  car1.displayCarInfo();
  return 0;
}