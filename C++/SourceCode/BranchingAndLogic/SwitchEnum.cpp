#include <iostream>
enum { red, orange, yellow, green, blue, voilet, indigo
};
// create named constants for 0-6

int main(){
	using namespace std;
	
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	
	while (code >= red && code <= indigo){
		switch(code){
			case red: cout << "Her lips were red.\n"; break;
			case orange: cout << "Her hair was orange.\n"; break;
			case yellow: cout << "Her shoes were yeallow.\n"; break;
			case green: cout << "Her nails were green.\n"; break;
			case blue: cout << "Her sweatsuit was blue.\n"; break;
			case voilet: cout << "Her eyes were voilet.\n"; break;
			case indigo: cout << "Her mood was indigo.\n"; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	
	cout << "Ok Bye" << endl;
	
	return 0;
}


