#include <iostream>
#include <string> // make string class avaialbe
#include <cstring> // C-style string library

int main(){
	using namespace std;
	
	char char1[20];
	string str1;
	
	cout << "Length of string in char1 before input : " << strlen(char1) << endl;
	
	cout << "Length of string in str1 before input : " << str1.size() << endl;
	
	cout << "Enter a text.\n";
	cin.getline(char1, 20); // Indicate maximum length
	
	cout << "You entered : " << char1 << endl;
	
	cout << "Enter another text.\n";
	getline(cin, str1); // cin now an argument no length specifier
	
	cout << "You entered : " << str1 << endl;
	
	cout << "Length of string in char1 after input : " << strlen(char1) << endl;
	
	cout << "Length of string in str1 after input : " << str1.size() << endl;
	
	
	
	return 0;
}
