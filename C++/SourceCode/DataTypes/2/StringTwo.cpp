#include <iostream>

int main(){
	using namespace std;
	
	const int arrSize = 20;
	
	char name[arrSize];
	char favFood[arrSize];
	
	cout << "Enter your name\n";
	cin >> name;
	cout << "Enter your favorite food\n";
	cin >> favFood;
	
	cout << "Hey, " << name << ", I've made " << favFood << " for you. Come at home quickly" << endl;
	
	
	return 0;
}
