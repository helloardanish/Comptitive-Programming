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
	
	personType person2
	{
		"Nerd Guy", // name value
		21, // age value
		55000.00 // income value
	};
	
	// some implementations require static keyword
	// static personType person1
	// static personType person12
	
	cout << "Adding income of " << person1.name <<" : "<< person1.income << " and " 
	<<person2.name << " : "<< person2.income << " is " <<int (person1.income + person2.income) << ". Woow!";
	
	
	return 0;
}
