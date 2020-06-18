#include <iostream>

int main(){
	using std::cout; // using declarations
	using std::cin;
	
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while(ch != '.'){ // quit at the end of sentence
		if (ch == ' '){ //check if ch is a space
			++spaces;
		}
		++total; //done every time
		cin.get(ch);
	}
	cout << "The sentence contain " << spaces << ".\n";
	cout << "The sentence has total " << total << " characters.";
	
	return 0;
}
