#include <iostream> 
const int ArrSize = 20;

int main() {
	using namespace std;
	
	int num;
	cout << "Enter a number: \n";
	cin >> num;
	cout << "\n\n\n";
	for (int i = num; i <= num*10; i += num){
		cout << i << endl;
	}
	
	return 0;
}
