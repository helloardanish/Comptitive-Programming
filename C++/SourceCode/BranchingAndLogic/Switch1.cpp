#include <iostream>

int main(){
	using namespace std;
	
	cout << "Lucky Draw Game:\n";
	cout << "Choose a lucky number between 1-10. You have only 3 chance.\n";
	int num;
	
	int count =0;

	 do {
		cin >> num;
		switch(num){
			case 1 : cout << "Wooow you got an Iphone.\n";
					  break;
			case 3 : cout << "Woow you got a laptop.";
					  break;
			case 4: cout << "Woow, you got a Macbook.\n";
					  break;
			case 8: cout << "Woow you got a windows phone, Nokia Lumia.\n";
					  break;
			default : cout << "Oops, you got nothing. Better luck next time.\n";
		}
		++count;
	} while(count < 3);
	
	
	return 0;
}


