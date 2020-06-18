#include <iostream>

struct woodType{
	char name[20];
	float volume;
	double price;
};

int main(){
	using namespace std;
	
	woodType * ps = new woodType; // allot memory for structure
	
	cout << " Enter name of woodType item: ";
	cin.get(ps -> name, 20); // method 1 for member access
	cout << "Enter volumme in cubic feet: ";
	cin >> (*ps).volume; // method 2 for member access
	cout << "Enter price: $";
	cin >> ps -> price;
	
	cout << "Name: " << (*ps).name << endl; // method 2
	cout << "Volume: " << ps -> volume << " cubic feet." << endl; // method 1
	cout << "Price: $" << ps -> price << endl; // method 1
	
	delete ps;
	
	return 0;
	
	
}
