#include <iostream>

int main(){
	using namespace std;
	
	int value = 22; // declaring variable
	int *p_value; // declare pointer to an int
	
	p_value = &value; // assign address of int to pinter
	
	
	//printing values in two ways
	cout << "Values :\nvalue " << value;
	cout << ", *p_value = " << *p_value << endl;
	
	//printing address in two ways
	
	cout << "Address :\n&value = " << &value;
	cout <<", p_value = " << p_value << endl;
	
	//using pointer to change the value
	
	*p_value = *p_value + 1;
	cout << "Upadted value of value is " << value << "." << endl;
	
		
	return 0;
}

