#include <iostream>
#include <string>

int main(){
	using namespace std;
	
	char char1[10]; // create an emptry array
	char char2[10] = "India"; // create an initialized array
	
	string str1; // create an empty string object
	string str2 = "India"; // create an intialized string
	
	cout << "Enter a country.\n";
	cin >> char1;
	
	cout << "Enter another country.\n";
	cin >> str1;
	
	cout << "Here is the characters and strings.:\n";
	
	cout << char1 << " " << char2 << " " << str1 << " " << str2 << endl;
	
	cout << "The first letter in " << char1 <<" is " << char1[0] << " .\n";
	cout << "The first letter in " << str1 <<" is " << str1[0] << " .\n";
	
	
	cout << "The first letter in " << char2 <<" is " << char2[0] << " .\n";
	cout << "The first letter in " << str2 <<" is " << str2[0] << " .\n";
	
	
	
	
	return 0;
}
