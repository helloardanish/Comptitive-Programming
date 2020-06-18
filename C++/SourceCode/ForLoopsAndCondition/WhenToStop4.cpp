#include <iostream>

int main(void) {
	using namespace std;
	
	int ch; // should be int, not char
	int count = 0;
	
	while ((ch = cin.get()) !=  EOF){ // test for EOF
		
		cout.put(char(ch));
		++count; // count the character
	}
	
	// use ctrl + z and Enter to run below code
	cout << "\n" << count << " character read." << endl;
	return 0;
}

