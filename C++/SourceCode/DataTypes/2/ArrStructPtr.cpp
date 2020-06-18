#include <iostream>
#include <cstring> // or string.h

struct years_end{
	int year;
	// other data if you want to
};

int main(){
	using namespace std;
	
	years_end d1, d2, d3;
	
	d1.year = 1998;
	
	years_end * ptr = &d2;
	ptr -> year = 2003;
	
	years_end trio[3]; // array fo 3 structures
	trio[0].year = 2005;
	
	cout << trio -> year << endl;
	
	const years_end * arp[3] = {&d1, &d2, &d3};
	
	cout << arp[1] -> year << endl;
	
	const years_end ** ppa = arp;
	
	//auto ppb = arp; // C++ 11 automatic type deduction
	// or else use 
	const years_end ** ppb = arp;
	
	cout << (*ppa) -> year << endl;
	cout << (*(ppb+1)) -> year << endl;
	
	return 0;
}
