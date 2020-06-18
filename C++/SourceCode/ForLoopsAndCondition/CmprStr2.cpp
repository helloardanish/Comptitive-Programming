#include <iostream>
#include <string> // string class

int main() {
	using namespace std;
	
	string str = "?oon";
	
	for (char ch = 'a'; str != "moon"; ch++){
		cout << str << endl;
		str[0] = ch;
	}
	
	cout << "After loop ends, word is " << str << "!" << endl;

	return 0;
}

