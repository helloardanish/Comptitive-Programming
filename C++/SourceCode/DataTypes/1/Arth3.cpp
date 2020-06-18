#include <iostream> 
int main() {
	using namespace std;
	
	float num1, num2;
	
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	
	float pen = 3; // int converted to float
	int potato(5.7845); // double converted to int
	int accBal = 5.4E13; // result not defined in C++
	
	cout << "pen = " << pen << endl;
	cout << "potato = " << potato << endl;
	cout << "accBal = " << accBal << endl;	
	
	return 0;
}

