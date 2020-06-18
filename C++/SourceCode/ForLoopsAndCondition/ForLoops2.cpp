#include <iostream> 
int main() {
	using namespace std;
	
	cout << "Enter the countdown value: ";
	
	int countDown;
	cin >> countDown;
	
	int i;
	
	for(i=countDown; i; i--) // quit when i = 0
		cout << "i = " << i <<"\n";
	cout << "\nNow the value of i is " << i << "\n";
	
	return 0;
}

