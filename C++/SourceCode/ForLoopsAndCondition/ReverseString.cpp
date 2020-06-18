#include <iostream> 
#include <string>

int main() {
	using namespace std;
	
	cout << "Enter any string I'll reverse it.\n";
	string str;
	getline(cin, str);
	
	// Reverse the string using for loop
	for (int i=str.size()-1; i>=0; i--){
		cout << str[i];	
	}
	
	cout << "\nOk Done!" << endl;
	
	return 0;
}
