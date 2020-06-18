#include <iostream> 
const int ArrSize = 20;

int main() {
	using namespace std;
	
	long long factorials[ArrSize];
	
	factorials[1] = factorials[0] = 1LL;
	
	for (int i=2; i< ArrSize; i++){
		factorials[i] = i * factorials[i-1];
	}
	
	for (int i=0; i<ArrSize; i++){
		cout << i <<"! = " << factorials[i] << endl;
	}
	
	return 0;
}
