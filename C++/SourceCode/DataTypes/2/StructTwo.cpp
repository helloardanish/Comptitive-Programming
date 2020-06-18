#include <iostream>

struct personType // structure declaration
{
	char name[20];
	int age;
	float income;
};

int main(){
	using namespace std;
	
	personType person1
	{
		"A R Danish", // name value
		20, // age value
		45000.00 // income value
	};
	
	personType person2;
	
	cout << "First Person name is " << person1.name << "." << endl;
	cout << "First person income is " << person1.income << "." << endl;
	
	// assigning one structure to another
	person2 = person1;
	
	cout << "Second Person name is " << person2.name << "." << endl;
	cout << "Second person income is " << person2.income << "." << endl;
	
	// some implementations require static keyword
	// static personType person1
	// static personType person12
	
	
	return 0;
}

