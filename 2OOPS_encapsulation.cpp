
// Encapsulation is the wrapping of the data and member functions in a single unit called class 

// Encapsulation is the process of creating a class and defining the data and member functions 


// Key Aspects of Encapsulation

// 1. Data Hiding:

// Encapsulation helps in hiding the internal state of the object from the outside world. Only the object's methods are allowed to access and modify its attributes, which protects the integrity of the data. by using private the modifier 

// 2. Improved Maintainability:

// 3. Enhanced Security:

// Encapsulation example 

// #include <iostream>
// using namespace std;
// class BankAccount {
// private:
//     double balance;  // Private data member, not accessible from outside the class
// public:
//     // Constructor to initialize balance
//     BankAccount(double initialBalance) {
//         if (initialBalance >= 0) {
//             balance = initialBalance;
//         } else {
//             balance = 0;
//             cout << "Initial balance invalid. Setting to 0." << endl;
//         }
//     }
//     // Public method to deposit money
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//         } else {
//             cout << "Invalid deposit amount." << endl;
//         }
//     }
//     // Public method to withdraw money
//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//         } else {
//             cout << "Invalid withdraw amount or insufficient balance." << endl;
//         }
//     }
//     // Public method to get the current balance
//     double getBalance() const {
//         return balance;
//     }
// };
// int main() {
//     BankAccount account(100.0);  // Create a BankAccount object with an initial balance of 100
//     account.deposit(50.0);       // Deposit 50
//     account.withdraw(20.0);      // Withdraw 20
//     cout << "Current balance: " << account.getBalance() << endl;  // Get the current balance
//     return 0;
// }



// Constructor 

// It is special method that invoke automatically at the time of object creation 

// Constructors are used to initialize the object's properties and set up any initial state the object needs.

// 1.It has same name as class
// 2.Constructor does not have return type 
// 3.Only called once at the time of object creation 
// 4.Memory allocation happens when constructor is called 

// #include <iostream>
// using namespace std;
// class MyClass {
// public:
//     int value;
//     MyClass() {
//         value = 0;
//         cout << "This is constructor called. Value is set to 0." << endl;
//     }
// };
// int main() {
//     MyClass obj; 
//     cout << "Value: " << obj.value << endl;
//     return 0;
// }

// we can also initialze some values using Constructor 

// for ex . at the time of Creation of an object as Teacher t1;
// int this Teacher is the class name and we want to initializa the depatrment of all the teachers initially to ECE we can done it by constructor .

// should ve same name as the Class name 
// Teacher(){
//    department = "ECE"
// }

// another ex 
// value to set to 100 initially

// #include <iostream>
// using namespace std;
// class MyClass {
// public:
//     int value;
//  // Default constructor
//     MyClass() {
//         value = 100 ;
//         cout << "Default constructor called. Value is set to 0." << endl;
//     }
// };
// int main() {
//     MyClass obj;  // Default constructor is called
//     cout << "Value: " << obj.value << endl;
//     return 0;
// }


// Types of Constructors 

// 1.Default or non-Parameterized  Constructor: A constructor that takes no arguments.
// 2.Parameterized Constructor: A constructor that takes one or more arguments.
// 3.Copy Constructor: A constructor that initializes an object using another object of the same class.


// Ex of Parameterized Constructor

// #include <iostream>
// using namespace std;
// class MyClass {
// public:
//     int value;
//     // Parameterized constructor
//     MyClass(int val) {
//         value = val;
//         cout << "Parameterized constructor called which takes one or more arguments. Value is set to " << val << "." << endl;
//     }
// };
// int main() {
//     // crated an object named as obj
//     MyClass obj(42);  // Parameterized constructor is called
//     cout << "Value: " << obj.value << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class MyClass {
// public:
//     int value;
//     string name ;
//     int roll_no ;
//     // Parameterized constructor
//     MyClass(string n , int r , int val) {
//         value = val;
//         name = n;
//         roll_no = r;
//         cout << "Parameterized constructor called which takes one or more arguments." << endl;
//         cout << "Name - " <<name << endl;
//         cout << "roll_no - " <<roll_no << endl;
//         cout << "Value - " <<value << endl;
//     }
// };
// int main() {
//     // crated an object named as obj
//     MyClass obj("Mk" , 76 , 100);  // Parameterized constructor is called
//     cout << "Value: " << obj.value << endl;
//     return 0;
// }
 

//  Note in a single class there can be number of different constructors but the number of parameters should be different ----->>>>>>>>> This is an example of constructor Overloading 
        //   (Can be an example of Polymorphism )

// this pointer

// It is a special pointer that points to a current object 

// ` The this pointer is an implicit pointer that points to the object for which the member function is called. `

// When a member function is called, the this pointer is automatically passed to it, allowing the function to know which object's data members it should operate on.

// now understand 

// below constrictor is not easy or good looking to understand so instead of paasing just letters or other variables we can also pass same varibale and this pointer ensures that this variableis the varialbe of this object

// MyClass(string name , int roll_no , int value) {
//         this->value = value;
//         this->name = name;
//         this->roll_no = roll_no;
//         cout << "Parameterized constructor called which takes one or more arguments." << endl;
//         cout << "Name - " <<name << endl;
//         cout << "roll_no - " <<roll_no << endl;
//         cout << "Value - " <<value << endl;
//     }

// Copy Constructor 

// A constructor that initializes an object using another object of the same class.

// #include <iostream>
// using namespace std;
// class MyClass {
// public:
//     int value;
//     // Parameterized constructor
//     MyClass(int val) {
//         value = val;
//         cout << "Parameterized constructor called. Value is set to " << val << "." << endl;
//     }
//     // Copy constructor
//     MyClass(const MyClass &obj) { // pass by reference 
//         value = obj.value;
//         cout << "Copy constructor called. Value is copied from another object." << endl;
//     }
// };
// int main() {
//     MyClass obj1(42);        // Parameterized constructor is called
//     // below both statements are corrct 
//     MyClass obj2 = obj1;     // Copy constructor is called
//     MyClass obj3(obj1);
//     cout << "Value of obj1: " << obj1.value << endl;
//     cout << "Value of obj2: " << obj2.value << endl;
//     cout << "Value of obj3: " << obj3.value << endl;
//     return 0;
// }


// Shallow and Deep Copy 

// Shallow Copy 

// a shallow copy of the object copies all the member values from one object to another 
 //Shallow creates problem when we want to change the values dynamically because both th original and copied pointer points to the same addres


// Both the original and the copied object refer to the same instances of dynamically allocated objects.

// Faster: Shallow copying is generally faster because it only copies memory addresses, not the actual data

// #include <bits/stdc++.h>
// using namespace std ;
// class Myclass {
//     public :
//     string name ;
//     double *cgpa ;
//     // constructor 
//      Myclass(string name , double cgpa_val){
//         this->name = name ;
//         this->cgpa = new double ;
//          *cgpa = cgpa_val;
//      }
//      // Copy constructor 
//      Myclass(const Myclass &obj){
//         this->name = obj.name ;
//         this->cgpa = obj.cgpa ;
//      }
//      void displayInfo(){
//         cout << "Name- "<< name << endl;
//         cout << "CGPA- "<< *cgpa << endl;
//      }
// };
// int main(){
//     // the problem arises when we play with pointers i.e when we want to change the state dynamiclly
//    Myclass obj1("Mk" , 8.26);
//    Myclass obj2(obj1);
//    obj1.displayInfo(); 
//    *(obj2.cgpa) = 8.38 ; // hence here we pnly change the cgpa of obj2 but the cgpa of obj1 is also changed becuase both are pointing to same addres 
//    obj1.displayInfo();
//    obj2.displayInfo();
//     return 0;
// }



// Deep Copy: Duplicates the actual data, creating completely independent objects.

// Slower: Deep copying is slower and requires more memory because it duplicates the actual data.
// Safe: Modifying the copied object does not affect the original object, avoiding shared state issues.

// deep copy is preferable for dynamically memory allocation 


// #include <bits/stdc++.h>
// using namespace std ;
// class Myclass {
//     public :
//     string name ;
//     double *cgpa ;
//     // constructor 
//      Myclass(string name , double cgpa_val){
//         this->name = name ;
//         cgpa = new double ;
//          *cgpa = cgpa_val;
//      }
//     // Copy Constructor (Deep Copy)
//     Myclass(const Myclass &obj) {
//         this->name = obj.name;
//         //this->cgpa = new double(*(obj.cgpa));  // Deep copy
//         //  or
//         cgpa = new double ;
//         *cgpa = *obj.cgpa; // Copy the value
//     }
//      void displayInfo(){
//         cout << "Name- "<< name << endl;
//         cout << "CGPA- "<< *cgpa << endl;
//      }
// };
// int main(){
//     // the problem arises when we play with pointers i.e when we want to change the state dynamiclly
//    Myclass obj1("Mk" , 8.26);
//    Myclass obj2(obj1);
//    obj1.displayInfo(); 
//    *(obj2.cgpa) = 8.38 ; // hence here we pnly change the cgpa of obj2 but the cgpa of obj1 is also changed becuase both are pointing to same addres 
//    obj1.displayInfo();
//    obj2.displayInfo();
//     return 0;
// }

//Destructor 

// class MyClass {
// public:
//     ~MyClass() {
//         // Destructor code
//     }
// };


// #include <iostream>
// using namespace std;
// class MyClass {
// public:
//     int *data;
//     // Constructor
//     MyClass(int size) {
//         data = new int[size];  // Allocate memory
//         cout << "Memory allocated." << endl;
//     }
//     // Destructor
//     ~MyClass() {
//         delete[] data;  // Release memory
//    delete cgpa 
//         cout << "Memory released." << endl;
//     }
// };
// int main() {
//     {
//         MyClass obj(10);  // Memory is allocated
//     }  // obj goes out of scope, destructor is called, memory is released
//     return 0;
// }


