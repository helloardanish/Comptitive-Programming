#include <iostream>
#include <cstring> //program uses strcpy(), strlen()


int main(){
	using namespace std;
	
	char animal[20] = "Lion"; //animal holds Lion
	const char *bird = "Peacock"; // bird holds address of the string
	
	char * ps; // uninitalized
	
	cout << animal << " and "; // display Lion
	cout << bird << "\n"; // display Peacock
	
	// cout << ps << "\n"; // may display garbage, may cause a crash
	
	cout << "Enter any kind of animal: ";
	cin >> animal;  // ok if input less than 20 characters
	
	// cin >> ps;  Too horrible a blunder to try; ps doesn't
	// 				point to allocated space
	
	ps = animal; // set ps to point to string
	
	cout << ps << "!\n"; //ok, same as using animal
	
	cout << "Before using strcpy() : \n";
	cout << animal << " at " << (int *) animal << ".\n";
	cout << ps << " at " << (int *) ps << "." << endl;
	
	ps = new char[strlen(animal) + 1]; // get new storage
	strcpy(ps, animal); // copy string to new storage
	
	cout << "After using strcpy() : \n";
	cout << animal << " at " << (int *) animal << ".\n";
	cout << ps << " at " << (int *) ps << "." << endl;
	
	delete [] ps;
	
	return 0;
}

