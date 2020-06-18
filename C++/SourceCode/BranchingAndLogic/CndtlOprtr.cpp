#include <iostream>

int main(){
	using namespace std;
	
	int a, b;
	cout << "Enter two integers: ";
	
	cin >> a >> b; // take two input a and b
	cout << "The larger of " << a << " and " << b;
	
	int c = a > b ? a : b; // if a>b then c=a otherwise c=b
	
	cout << " is " << c << endl;
	
	return 0;
}


