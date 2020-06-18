#include <iostream>
#include <cstring> // prototype for strcmp()

int main() {
	using namespace std;
	
	char word[5] = "?oon";
	
	for (char ch = 'a'; strcmp (word, "moon"); ch++){
		cout << word << endl;
		word[0] = ch;
	}
	
	cout << "After loop ends, word is " << word << "!" << endl;

	return 0;
}

