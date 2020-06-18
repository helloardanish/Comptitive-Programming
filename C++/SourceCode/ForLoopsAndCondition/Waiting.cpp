#include <iostream>
#include <ctime> // describes clock() function, clock_t type

int main() {
	using namespace std;
	
	cout << "Enter the delay time, in seconds. ";
	float sec;
	cin >> sec;
	
	
	clock_t delay = sec * CLOCKS_PER_SEC; // convert to clock ticks
	
	cout << "Staring\a\n";
	
	clock_t start = clock();
	
	while(clock() - start < delay) // wait untill time elapses
	; // note the  semicolon
	cout << "Done!\a\n" << endl;
	
	return 0;
}

