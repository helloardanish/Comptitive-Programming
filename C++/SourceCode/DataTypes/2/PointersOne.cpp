#include <iostream>

int main(){
	using namespace std;
	
	int pizza = 230;
	float burger = 50.50;
	
	cout << "The price of pizza is " << pizza << ". \n";
	cout << "Pizza stored at the memory address : " << &pizza << ".\n\n";
	
	
	cout << "The price of burger is " << burger << ". \n";
	cout << "Burger stored at the memory address : " << &burger << ".\n\n";
	
	
	// you may need to use unsigned (&pizza) or unsigned (&burger)
	
	return 0;
}

