## Classes in C++


```c++
#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 1; 
  myObj.myString = "A R";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
```

    1
    A R


```c++
#include <iostream>
#include <string>
using namespace std;

class MyClass {
    public:
    void printARName(){
        cout << "Hello, A R! Hope you're doing good!";
    }
};

MyClass arObj;
arObj.printARName();
```

    Hello, A R! Hope you're doing good!

## Object method outside the class


```c++
class MyClass2 {        // The class
  public:              // Access specifier
    void callAR();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass2::callAR() {
  cout << "Hello A R!";
}

MyClass2 myObj;     // Create an object of MyClass
myObj.callAR();  // Call the method
```

    input_line_19:7:26: error: function definition is not allowed here
     void MyClass2::callAR() {
                             ^



    Interpreter Error: 


# Constructors


```c++
class MyClass3 {
  public:
    MyClass3() {
      cout << "Hello World!";
      cout << "\nMust print when class object created!";
    }
};

MyClass3 myObj;
```

    Hello World!
    Must print when class object created!


```c++
class Car {
  public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z) {
      brand = x;
      model = y;
      year = z;
    }
};


Car carObj1("BMW", "X1", 2021);
Car carObj2("Ford", "Mustang", 2020);

cout << "Cars List:\n";
cout << "Car 1:\nBrand : "+carObj1.brand << "\nModel: " << carObj1.model << "\nYear " << carObj1.year << "\n";
cout << "Car 2:\nBrand : "+carObj2.brand << "\nModel: " << carObj2.model << "\nYear " << carObj2.year << "\n";
```

    Cars List:
    Car 1:
    Brand : BMW
    Model: X1
    Year 2021
    Car 2:
    Brand : Ford
    Model: Mustang
    Year 2020


## Access identifiers


```c++
class MyClassIdentifier {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

MyClassIdentifier myObj;
myObj.x = 25;  // Allowed (public)
myObj.y = 50;  // Not allowed (private)
```

    input_line_26:10:7: error: 'y' is a private member of '__cling_N517::MyClassIdentifier'
    myObj.y = 50;  // Not allowed (private)
          ^
    input_line_26:5:9: note: declared private here
        int y;   // Private attribute
            ^



    Interpreter Error: 


# Encapsulation - Control your data


```c++
class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};
Employee myObj;
myObj.setSalary(10000000);
cout << "My Salary : " << myObj.getSalary();
```

    My Salary : 10000000

## Inheritance


```c++
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};
Car myCar;
myCar.honk();
cout << "Brand : " << myCar.brand << "\nModel : " + myCar.model;
```

    Tuut, tuut! 
    Brand : Ford
    Model : Mustang

## Multilevel Inheritance


```c++
// Base class (parent)
class BaseClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public BaseClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

MyGrandChild myObj;
myObj.myFunction();
```

    Some content in parent class.

## Multiple Inheritance


```c++
// Base class
class BaseClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public BaseClass, public MyOtherClass {
};

MyChildClass myObj;
myObj.myFunction();
myObj.myOtherFunction();

```

    Some content in parent class.
    Some content in another class.


```c++
// Base class
class Employee1 {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee1 {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

Programmer myObj;
myObj.setSalary(50000);
myObj.bonus = 15000;
cout << "Salary: " << myObj.getSalary() << "\n";
cout << "Bonus: " << myObj.bonus << "\n";
```

    Salary: 50000
    Bonus: 15000


## Polymorphism


```c++
// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Cat : public Animal {
  public:
    void animalSound() {
    cout << "The Cat says: Meeow Meeow \n" ;
  }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: Bow Wow \n" ;
  }
};
Animal animalObj;
Cat myCatObj;
Dog myDogObj;
animalObj.animalSound();
myCatObj.animalSound();
myDogObj.animalSound();
```

    The animal makes a sound 
    The Cat says: Meeow Meeow 
    The dog says: Bow Wow 


## File Handling


```c++
#include <iostream>
#include <fstream>
using namespace std;

// Create and open a text file
ofstream MyFile("filename.txt");

// Write to the file
MyFile << "Files can be tricky, but it is fun enough!";

// Close the file
MyFile.close();
```

### Check the files in repo :)

#### Read a file


```c++
string myText;

// Read from the text file
ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
```

    Files can be tricky, but it is fun enough!

## Exceptions


```c++
try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
} catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  

}
```

    Access denied - You must be at least 18 years old.
    Age is: 15


```c++
// Catch any exception
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Access denied - You must be at least 18 years old.\n";
}
```

    Access denied - You must be at least 18 years old.


## That's It!
## Everything for Classes and Objects discussed.
## Happy Coding,
# A R
