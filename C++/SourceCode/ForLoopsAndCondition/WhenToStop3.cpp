#include <iostream>

int main() {
	using namespace std;
	
	char ch;
	int count = 0; // use basic input
	
	cin.get(ch); // attempt to read a char
	while (cin.fail() == false){ // test for EOF
	// you can use (!cin.fail()) as well
	// or while (cin) , more general
	// or while (cin.get(ch))
		cout << ch; // echo the character
		++count; // count the character
		cin.get(ch);  // attempt to read another char
	}
	
	// use ctrl + z and Enter to run below code
	cout << "\n" << count << " character read." << endl;
	return 0;
}

