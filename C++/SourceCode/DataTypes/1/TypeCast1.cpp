#include <iostream> 
int main() {
	using namespace std;
	
	int auks, bats, coots;
	
	// the following statement adds the value as double
	// then convert the result to int
	
	auks = 29.99 + 21.99;
	
	// these statements add values as int
	bats = (int) 29.99 + (int) 21.99; // old C syntax
	coots = int (29.99) + int (21.99); // new C++ syntax
	
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;
	
	
	char ch = 'R';
	
	cout << "The code for " << ch << " is "; // print as char
	cout << int (ch) << endl;
	
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl; // using static cast
	
	
	return 0;
}

