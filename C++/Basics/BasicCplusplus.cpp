//Hello World

#include<iostream>

using namespace std;

int main()
{
	cout<<"Hello World";
	return 0;
}

// without namespace
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}


// use \n for new lines similar to C language

// This is a comment

/* This is
multiline comments */


// Variables << int, double, char, string, bool

//Declaring variables <<<<<<<<< type variableName = value;

int myNum = 1;
cout << myNum;

//or this
int myNum;
myNum = 1;
cout << myNum;

//or this

int myNum = 1;  // myNum is 1
myNum = 2;  // Now myNum is 2
cout << myNum;  // Outputs 2


//Other types

int myNum = 1;               // Integer (whole number without decimals)
double myFloatNum = 1.22;    // Floating point number (with decimals)
char myLetter = 'A';         // Character
string myText = "10 Days";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

// use cout with variable and your custom string value too

int myAge = 99;
cout << "I am " << myAge << " years old.";

// Declare multiple variables
int x = 1, y = 2, z = 3;
cout << x + y + z;

// C++ Identifiers

/*
All C++ variables must be identified with unique names.
These unique names are called identifiers.
Identifiers can be short names (like x and y) or more descriptive names (myNum, value, yourAge).
Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
*/

// use name for variables like this, it is good way and anyone can easily understand
int myAge = 90;

// Work fine, but not someone can easiliy understand what is m,
int m = 90;

// const int myNum = 1;  // myNum will always be 1

myNum = 10; // will show error you can't change value of const variable which is read-only

//You should always declare the variable as constant when you have values that should never changed in program

const float PI = 3.14;


//User Input - use cin >> to get the value from input

int x; 
cout << "Type a number: ";
cin >> x; 
cout << "The number you entered is: " << x; 

// Scientific Numbers

float f1 = 35e3;
double d1 = 12E4;
cout << f1;
cout << d1;

// Ternary >>>>>>>>>>>>>>>   (x ? "true" : "false")


// Character 
char a = 65, b = 66, c = 67;
cout << a;
cout << b;
cout << c;
// Print ASCII value of given number

// String

#include <string>

string greeting = "Hello";
cout << greeting;


// Operator

// Arithmetic operators
int sum1 = 1 + 2;        // 3 (1 + 2)
int sum2 = sum1 + 3;      // 6 (3 + 3)
int sum3 = sum2 + sum2;     // 12 (6 + 6)


// Assignment operators
int x = 10;
x += 5;

// |= / ^= / >>= / <<=

// Comparison operators

// == / != / > / < / / >= / <=

// Logical Operators
// && / || / !

// String Concatenation
string firstName = "A R";
string lastName = "Danish";
string fullName = firstName + " "+lastName;
cout << fullName;

// Append
string fullName = firstName.append(lastName); // this will work too, either use append or + yours choice

// Numbers and strings
// + operator add in numbers and concatenate in string
int x = 10;
int y = 20;
int z = x + y; // Z is 30

string x = "10";
string y = "20";
string z = x + y; // Z is 1020

string x = "10";
int y = 20;
string z = x + y; // Errors. You can't add numbers to string. For this you have to change type first.

// String length >>>>>>> str.length() , str.size() also returns the length of a string

// Accessing String
string myString = "Hello";
cout << myString[0]; // output H

string myString = "Hello";
myString[0] = 'J';
cout << myString; // output Jello

string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;

// Type your full name: A R Danish
// Your name is: A
// why ?
// use getline() function to read the line. It is most often used when working with Strings

getline (cin, fullName);
//now output will be A R Danish

// C++ Math

cout << max(1, 2);
cout << min(1, 2);

// <cmath> header

#include <cmath>

cout << sqrt(64);
cout << round(2.6);
cout << log(2);
count << abs(-5.6);
// check other math functions

// Boolean expression

int x = 1;
int y = 2;
cout << (x > y); // output 1(true)

int x = 10;
cout << (x == 10); // output 1(true)


// if condition

int x = 2;
int y = 1;
if (x > y) {
  cout << "x is greater than y";
}


// Else condition
int age = 18;
if (age < 18) {
  cout << "Eligible to vote.";
} else {
  cout << "Not eligible to vote.";
}

// If else condition syntax

if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}


// Short hand if else (Ternary Operator)
// Syntax
variable = (condition) ? expressionTrue : expressionFalse;


// Switch Statement
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

int day = 5;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}


int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}





// While Loop
while (condition) {
  // code block to be executed
}


// Do while loop
do {
  // code block to be executed
}
while (condition);

int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 7);



// For loop

for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

for (int i = 0; i < 7; i++) {
  cout << i << "\n";
}

// Break and continue

for (int i = 0; i < 7; i++) {
  if (i == 5) {
    break;
  }
  cout << i << "\n";
}

// Continue 

int i = 0;
while (i < 7) {
  if (i == 3) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
}


// Arrays 
string foods[3];
string foods[3] = {"Pizza", "Biryani", "Noodles"};

int myNum[3] = {10, 20, 30};

string foods[3] = {"Pizza", "Biryani", "Noodles"};
cout << foods[0];

// change an array element
foods[0] = "Opel";


// Arrays and Loops

string foods[3] = {"Pizza", "Biryani", "Noodles"};
for(int i = 0; i < 3; i++) {
  cout << foods[i] << "\n";
}

// Omit array size

string foods[] = {"Pizza", "Biryani", "Noodles"};;
string foods[] = {"Pizza", "Biryani"};
string foods[] = {"Pizza"};

string food = "Pizza"; // food variable
string &meal = food;    // reference to food


string food = "Pizza";

cout << &food; // Outputs the memory address of food (0x6dfed4)


string *mystring;
string * mystring;

// All the basics done
