#include <iostream>

int main(){
	using namespace std;
	
	cout << "In which year you were born ?\n";
	int yyyy;
	(cin >> yyyy).get();
	
	cout << "Where do you live ?\n";
	char place[20];
	cin.getline(place, 20);
	
	cout << "You born in "<<yyyy<<" and you live in " << place << ". WOOOOOOOW\n";
	
	
	return 0;
}	
