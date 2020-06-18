#include <iostream>

struct personType // structure declaration
{
	char name[20];
	int age;
	float income;
};

int main(){
	using namespace std;
	
	
	personType persons[2] = 
	{
		{"A R Danish", 19, 45000},
		{"Nerd Guy", 22, 85000},
	};
		
	cout << "First Person name is " << persons[0].name << "." << endl;
	cout << "First person income is " << persons[1].income << "." << endl;
	
	cout << "\n";
	// assigning one structure to another
	
	cout << "Second Person name is " << persons[0].name << "." << endl;
	cout << "Second person income is " << persons[1].income << "." << endl;
	
	// some implementations require static keyword
	// static personType person1
	// static personType person12
	
	
	return 0;
}

