#include <iostream>
#include <vector> // STD C++98
#include <array> // C++11

int main(){
	using namespace std;
	
	//C, original C++
	double arr1[4] = {4.5, 5.6, 7.6, 9.8};
	
	// C++98 STL
	vector<double> arr2(4); // create vector with four elements
	
	// no simple way to initialize in C98
	arr2[0] = 1.0/3.0;
	arr2[1] = 1.0/5.0;
	arr2[2] = 1.0/7.0;
	arr2[3] = 1.0/9.0;
	
	// C++11 -- create and initialize array object
	array<double, 4> arr3 = {3.14, 5.68, 5.486, 8.65};
	array<double,4> arr4;
	
	arr4 = arr3; // valid for array objects of same size
	
	//use array notation
	cout << "arr1[3]: " << arr1[3] << " at " << &arr1[3] << endl;
	cout << "arr2[3]: " << arr2[3] << " at " << &arr2[3] << endl;
	cout << "arr3[3]: " << arr3[3] << " at " << &arr3[3] << endl;
	cout << "arr4[3]: " << arr4[3] << " at " << &arr4[3] << endl;
	
	//misdeed
	//arr[-1] = 15.8;
	//cout << "arr1[-1]: " << arr1[-1] << " at " << &arr1[-1] << endl;
	//cout << "arr3[3]: " << arr3[3] << " at " << &arr3[3] << endl;
	//cout << "arr4[3]: " << arr4[3] << " at " << &arr4[3] << endl;
	
	return 0;
}
