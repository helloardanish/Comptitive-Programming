#include <iostream>

int main(){
	using namespace std;
	
	double * ptr = new double[3]; // spce for 3 double
	ptr[0] = 0.1;
	ptr[1] = 0.4;
	ptr[2] = 0.8;
	
	cout << "ptr[1] is " << ptr[1] << ".\n";
	
	ptr = ptr + 1; // increment the operator
	
	cout << "Now ptr[0] is " << ptr[0] 
	<<" and ptr[1] is " << ptr[1] << ".\n";
	
	ptr = ptr - 1; // point back to the beginning
	
	cout << "Now ptr[0] is " << ptr[0] 
	<<" and ptr[1] is " << ptr[1] << ".\n";
	
	delete [] ptr; // free the memory
	
	return 0;
}

