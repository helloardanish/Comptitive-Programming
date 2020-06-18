#include <iostream>

int main(){
	using namespace std;
	
	int value = 22;
	int * pt = new int;				//allocate space for an int
	*pt = 22;					//store a value there
	
	cout << "Value = " << value;
	cout << " Location of " << value
	<< " is " << &value << endl;
	
	cout << "int ";
	cout << "value = " << *pt << " and location is " << pt << "." << endl;
	
	double * pd = new double;		// allocate space for a double
	*pd = 45000000.0;			// store a double there
	
	cout << "Double value = " << *pd <<" and location is " << pd << "." << endl;
	
	cout << "Size of pt is " << sizeof(pt) << ".\n";
	cout << "Size of *pt is " << sizeof(*pt) << endl;
	
	cout << "Size of pd is " << sizeof(pd) << ".\n";
	cout << "Size of *pd is " << sizeof(*pd) << endl;
	
			
	return 0;
}

