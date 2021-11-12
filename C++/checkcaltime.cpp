#include <iostream>
#include <time.h>
using namespace std;

int main() {
	// your code goes here
	int a = 1000000000, find=999689997;
  int count=0;
	clock_t start = clock();

	for (int i=0; i<a; i++) {
    count++; 
    if(i==find){
			break;
		}
    }
    cout.precision(10);
    cout << "Time taken:  " << fixed  <<  float(clock() - start)/CLOCKS_PER_SEC << " sec"  << endl;
    return 0;
}







#include <iostream>
#include <time.h>
using namespace std;

int main() {
	// your code goes here
	int a = 1000000000, find=999689996;

	clock_t start = clock();

	bool isEven;
	if(find%2){
		isEven = true;
	}

	if (isEven){
		for (int i=0; i<a; i+=2) {

        if(i==find){
			break;
		}
		}

	}else{

		for (int i=1; i<a; i+=2) {

        if(i==find){
			break;
		}

	}
	}

    cout.precision(10);
    cout << "Time taken:  " << fixed  <<  float(clock() - start)/CLOCKS_PER_SEC << " sec"  << endl;
    return 0;
}





// we can use mid logic and first only check below or after mid alongwith iseven condition too.

// These are few ways to improve the program and minimize running time of a program.

// By using multiple technique we can achieve better results also one algorithms can be better but  never best. 
// As someone in upcoming days may come up with new algorithms. So always use the best technique you can use.
// Any algorithm can be best for today but never for tomorrow just keep this in mind.
