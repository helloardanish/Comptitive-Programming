#include <iostream>
#include <climits> // for checking the limits of data types in C++
int main(){
	using namespace std;
	char cValMin = CHAR_MIN;
	char cValMax = CHAR_MAX;
	int iValMin = INT_MIN;
	int iValMax = INT_MAX;
	long lValMin = LONG_MIN;
	long lValMax = LONG_MAX;
	long long llValMin = LLONG_MIN;
	long long llValMax = LLONG_MAX;
	
	unsigned long long ullMax = ULLONG_MAX;
	
	cout << "The maximum and minumum values of integers types:\n";
	
	cout << "Minmum value of a character is " << int (cValMin) << ".\n";
	cout << "Maximum value of a character is" << int (cValMax) << ".\n\n";
	
	cout << "Minmum value of an integer is " << iValMin << ".\n";
	cout << "Maximum value of an integer is" << iValMax << ".\n\n";
	
	cout << "Minmum value of a long is " << lValMin << ".\n";
	cout << "Maximum value of a long is" << lValMax << ".\n\n";
	
	cout << "Minmum value of a long long is " << llValMin << ".\n";
	cout << "Maximum value of a long long is" << llValMax << ".\n";
	
	cout << "Maximum unsigned value of long  long is" << ullMax <<".";
	
	return 0;
}
