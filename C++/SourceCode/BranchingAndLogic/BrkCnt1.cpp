#include <iostream>
const int ArrSize = 80;

int main(){
	using namespace std;
	
	char line[ArrSize];
	int spaces = 0;
	
	cout << "Enter a line of text.\n";
	cin.get(line, ArrSize);
	cout << "Complete Line: \n" << line << endl;
	
	cout << "Line through first period:\n";
	for (int i=0; line[i] != '\0'; i++){
		cout << line[i]; // display character
		if (line[i] == '.') // quit if its a period
			break;
		if (line[i] != ' ') // skip rest of loop
			continue;
		spaces++;
	}
	
	cout << "Total Spaces = " << spaces << ". Ok Done!" << endl;
	
	return 0;
}


