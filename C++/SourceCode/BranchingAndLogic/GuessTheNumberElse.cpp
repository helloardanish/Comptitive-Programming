#include <iostream>
const int Fav = 8;

int main(){
	using namespace std;
	int num;
	
	cout << "Enter the number in the range 1-10 to guess my favorite number.\n";
	
	do{
		cin >> num;
		if (num < Fav){
			cout << "Too Low Guess Again.\n";
		} else if (num > Fav){
			cout << "Too High Guess Again.\n";
		} else {
			cout << "Yeahh " << num << " is my favorite. You guessed it right.\n";
		}
	} while (num != Fav);
	
	return 0;
}
