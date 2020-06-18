#include <iostream>

int main() {
	using namespace std;
	
	char ch;
	int count = 0; // use basic input
	
	cout << "Enter characters; enter # to quit:\n";
	
	cin.get(ch);
	while (ch != '#'){ // test the character
		cout << ch; // echo the character
		++count; // count the character
		cin.get(ch); 
	}
	
	cout << "\n" << count << " character read." << endl;
	return 0;
}

