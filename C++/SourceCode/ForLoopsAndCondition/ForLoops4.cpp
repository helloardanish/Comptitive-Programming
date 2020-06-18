#include <iostream>
#include <string>

int main() {
	using namespace std;
	
	cout << "Enter a word \n";
	string word;
	getline(cin, word); // get whole line as a string
	
	// Physically modify string object
	
	char temp;
	int i,j;
	for (j=0, i = word.size() -1; j<i; --i, ++j){
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	
	cout << word << "\n";
	cout << "Ok, Done!" << endl;
	return 0;
}

