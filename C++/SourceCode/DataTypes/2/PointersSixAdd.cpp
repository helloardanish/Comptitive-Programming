#include <iostream>

int main(){
	using namespace std;
	
	double LargeArr[3] = {10000.0, 20000.0, 30000};
	
	short smallArr[3] = {3, 2, 1};
	
	// Two ways to get the address of the array
	double * ptrL = LargeArr; // name of the array = address
	short * ptrS = &smallArr[0]; // use address operator
	
	// with array element
	
	cout << "ptrL is " << ptrL <<", *ptrL is " << *ptrL << endl;
	
	ptrL = ptrL + 1; // add 1 to the pointer
	
	cout << "ptrL is " << ptrL <<", *ptrL is " << *ptrL << endl;
	
	//with another pointer-to-int ptrS
	cout << "ptrS is " << ptrS <<", *ptrS is " << *ptrS << endl;
	
	ptrS = ptrS + 1; // add 1 to the pointer
	
	cout << "ptrS is " << ptrS <<", *ptrS is " << *ptrS << endl;
	
	cout << "\n\n";
	
	//Access two elements with array notation
	
	cout << "smallArr[0] = " << smallArr[0] << ", smallArr[1] = " << smallArr[1] << endl;
	
	//Access two elements with pointer notation
	
	cout << "*smallArr = " << *smallArr << ", *(smallArr+1) = " << *(smallArr+1) << endl;
	
	// size of each array
	
	cout << "Size of LargeArr array is " << sizeof(LargeArr) << ".\n";
	cout << "Size of ptrL pointer is " << sizeof(ptrL) << "." << endl;
	
	return 0;
}

