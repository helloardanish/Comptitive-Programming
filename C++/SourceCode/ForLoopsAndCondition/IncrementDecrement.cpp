#include <iostream> 
#include <string>

int main() {
	using namespace std;
	
	int a=10;
	int b=100;
	
	cout << "a = " << a << ", b = " << b << endl;
	
	cout << "Using a++ and b++:\n";
	
	cout << "a++ = " << a++ <<", b++ = " << b++ << endl;
	
	cout << "a = " << a << ", b = " << b << endl;
	
	
	cout << "\n\nAgain reset the value and trying ++a and ++b \n";
	
	a = 10; b = 100;
	
	cout << "a = " << a << ", b = " << b << endl;
	
	cout << "++a = " << ++a <<", ++b = " << ++b << endl;
	
	cout << "a = " << a << ", b = " << b << endl;
	
	
	return 0;
}
