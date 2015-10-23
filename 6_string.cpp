#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	string numberGuessed;
	int intNumberGuessed;
	
	do {
		cout << "Guess between 1 - 10: ";
		// store the value user entered into numberGuessed
		getline(cin, numberGuessed);
		// stoi: string to integer
		intNumberGuessed = stoi(numberGuessed);
		cout <<  intNumberGuessed << endl;
	} while (intNumberGuessed != 4);
	
	cout <<  "You got it!" << endl;
	
	return 0;
}
