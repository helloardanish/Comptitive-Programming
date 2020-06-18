#include <iostream> 
int main() {
	using namespace std;
	
	float num1, num2;
	
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point 
	cout << "Enter a number: ";
	cin >> num1;
	
	cout << "Enter another number: ";
	cin >> num2;
	
	cout << "num1 = " << num1 << ", num2 = " << num2 << "\n";
	
	
	cout << "num1 + num2 = " << num1 + num2 << "\n";	
	cout << "num1 - num2 = " << num1 - num2 << "\n";	
	cout << "num1 * num2 = " << num1 * num2 << "\n";	
	cout << "num1 / num2 = " << num1 / num2 << "\n";
	
	
	return 0;
}

