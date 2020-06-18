#include <iostream>

int main(){
	using namespace std;
	
	//first ways
	
	int students[5];
	students[0] = 10;
	students[1] = 99;
	students[2] = 76;
	students[3] = 56;
	students[4] = 34;
	
	//second ways
	
	int students2[3] = {99,98,99};
	
	cout << "Total marks obtained by first class students " << students[0] + students[1] + students[2] + students[3] + students[4] << ".\n";
	cout << "Total marks obtained by second class students " << students2[0] + students2[1] + students2[2] << ".\n";
	
	//checking size of array
	
	cout << "The size of array students is " << sizeof students << " bytes.\n";
	cout << "Size of second array is " << sizeof students2 << " bytes.\n";
	cout << "Size of one element in first class students " << sizeof students[0] << " bytes.\n";	
	cout << "Size of one element in second class students " << sizeof students2[0] << " bytes.\n";	
	
	return 0;
}
