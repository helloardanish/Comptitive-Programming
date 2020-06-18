#include <iostream>
#include <string> // make string class avaialbe
#include <cstring> // C-style string library

int main(){
	using namespace std;
	
	char char1[50]; // create an emptry array
	char char2[10] = "India"; // create an initialized array
	
	string str1; // create an empty string object
	string str2 = "Paris"; // create an intialized string
	
	//assignment for string objects and character arrays
	str1 = str2; // copy str2 to str1
	strcpy(char1, char2); // copy char 2 to char 1
	
	//appending for string objects and character arrays
	str1 += " is an amazing place."; // add the string at the end of str1;
	strcat(char1, " is the best place to live.");
	
	//finding the length of a string object and a C-style String
	
	int len1 = str1.size(); // obtain length of str1
	int len2 = strlen(char1); // obtain length of char1
	
	cout << "The string " << str1 << " contains " 
	<< len1 << " characters.\n";
	
	cout << "The string (character array) " << char1 << " contains "
	<< len2 << " characters." << endl;
	
	
	return 0;
}
