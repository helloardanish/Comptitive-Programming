#include <iostream>

int main(){
	using namespace std;
	
	int bread = 5; // declaring variable
	int * p_b = &bread; // declare pointer to an int
	
	cout << "Price of bread : " << bread
	<< "; Address of bread : " << &bread << endl;
	
	cout << "value of *pt = " << *p_b
	<< "; Value of pt : " << p_b << endl;
	
	
	//here program initializes pt, not *pt
			
	return 0;
}

