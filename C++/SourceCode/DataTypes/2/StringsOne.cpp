#include <iostream>

#include <cstring> // for the strlen() function

int main(){
	using namespace std;
	const int size = 20;
	
	char name1[size]; // emptry array
	char name2[size] = "A R Danish";
	// some implementation may require static keyword
	
	cout << "Hi, I am " << name2;
	cout << "\nWhat's your name ?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and stored in \n";
	cout << "an array of " << sizeof (name1) << " bytes.\n";
	cout << "Your first letter in the name is " << name1[0] <<".\n";
	
	name2[3] = '\0'; // set to null character
	
	//you can use this technique to short the string
	
	cout << "Here are the first three characters of my name ";
	cout << name2 << endl;
	
	return 0;
	
}
