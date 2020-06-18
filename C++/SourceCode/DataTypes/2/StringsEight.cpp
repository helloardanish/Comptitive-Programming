#include <iostream>
#include <string>

int main(){
	using namespace std;
	
	string s1 = "A R Danish";
	string s2, s3;
	
	cout << "Assigning one string (s2) to another (s1): \n";
	s2 = s1;
	
	cout << "s1 = " << s1 << " , s2 = " << s2 << ".\n";
	
	cout << "You can assign a C-style string to a string object. \n";
	cout << "s2 = \"Nerd Guy\"\n";
	
	s2 = "Nerd Guy";
	cout << "s2 = " << s2 << ".\n";
	
	cout << "You can concatenate the string too.\n";
	
	s3 = s1+s2;
	
	cout << "s3 = s1 + s2. Now s3 string is " << s3 << ".\n";
	
	cout << "You can append strings too.\n";
	
	s1 += s2;
	
	cout << "s1 += s2, now s1 is " << s1 <<".\n";
	
	s2 += " is the best.\n";
	
	cout << "s2 += \" is the best.\", now s2 is " << s2 << endl;
	
	
	return 0;
}
