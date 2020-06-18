#include <iostream> 
int main() {
	using namespace std;
	
	int x;
	
	cout << "The expression x=100 has the value ";
	cout << (x=10) << endl;
	cout << "Now x = " << x << endl;
	
	cout << "The expression x < 5 has the value ";
	cout << (x < 5) << endl;
	cout << "The expression x > 5 has the value ";
	cout << (x > 5) << endl;
	
	cout.setf(ios_base::boolalfa); // a newer C++ feature
	
	cout << "The expression x < 5 has the value ";
	cout << (x < 5) << endl;
	cout << "The expression x > 5 has the value ";
	cout << (x > 5) << endl;
	
	return 0;
}

