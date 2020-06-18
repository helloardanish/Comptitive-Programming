#include <iostream>
const int Cities = 5;
const int Years = 4;

int main(void) {
	using namespace std;
	
	const char * cities [Cities] = { // array of strings
		"Bihar",
		"Delhi",
		"Bombay",
		"Banglore",
		"Goa"
	};
	
	int maxTemps [Years][Cities] = {
		{96, 104, 89, 103, 96}, // value for maxTemps[0]
		{58, 94, 74, 102, 95}, // value for maxTemps[1]
		{64, 71, 83, 91, 74}, // value for maxTemps[2]
		{89, 101, 69, 105, 102} // value for maxTemps[3]
	};
	
	cout << "Maximum temperature for 2017 - 2020\n\n";
	for (int city = 0; city < Cities; ++city){
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year){
			cout << maxTemps[year][city] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}

