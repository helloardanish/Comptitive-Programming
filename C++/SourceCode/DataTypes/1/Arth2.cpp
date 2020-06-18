#include <iostream> 
int main() {
	using namespace std;
	
	float num1, num2;
	
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point 
	
	cout << "Integer divison : 9/5 = " << 9/5 << "\n";
	cout << "Floating-point divison : 9.0/5.0 = ";
	cout << 9.0/5.0 << "\n";
	cout << "Mixed divison : 9.0/5 = " << 9.0/5 << "\n";
	cout << "Double constants : 1e7/9.0 = ";
	cout << 1e7 / 9.0 << "\n";
	cout << "Float constants : 1e7f/9.0f = ";
	cout << 1e7f / 9.0f << endl;
	
	return 0;
}

