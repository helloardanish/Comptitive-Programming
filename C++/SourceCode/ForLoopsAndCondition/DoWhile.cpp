#include <iostream>

int main() {
	using namespace std;
	
	int n;
	
	cout << "Enter numbers in the range 1- 10 to find ";
	cout << "my favorite number.\n";
	
	
	do{
		cin >> n; // execute body
	} while(n!=6); // then test
	
	cout << "Yes, "<< n << " is my favorite number." << endl;
	
	return 0;
}

