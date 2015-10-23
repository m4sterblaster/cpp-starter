#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string numberGuessed;
	int intNumberGuessed;
	
	// get string from input and quit loop if the user enter 4
	do {
		cout << "Guess between 1 - 10: ";
		// store the value user entered into numberGuessed
		getline(cin, numberGuessed);
		// stoi: string to integer, but this does not work on minGW
		// intNumberGuessed = stoi(numberGuessed);
		cout <<  numberGuessed << endl;
	// } while (intNumberGuessed != 4);
	} while (numberGuessed != "4");
	cout <<  "You got it!" << endl;
	
	
	// comparison
	string catString = "cat";
	string dogString = "dog";
	
	cout << "cat compare to cat: " << catString.compare(catString) << endl;
	cout << "cat compare to dog: " << catString.compare(dogString) << endl;
	cout << "dog compare to cat: " << dogString.compare(catString) << endl;	
	
	string aName = "Berek Danas";
	
	// assign copies to value 
	string fullName = aName.assign(aName);
	cout << fullName << endl;
	
	string firstName = fullName.assign(fullName, 0, 5);
	cout << firstName << endl;
	
	int lastNameIndex = aName.find("Danas", 0);
	cout << lastNameIndex << endl;
	
	// insert at index 
	aName.insert(5, " Justin");
	cout << aName << endl;
	
	// erase 6 letters from index 7
	aName.erase(6, 7);
	cout << aName << endl;
	
	// replace 5 characters starting at index 5
	aName.replace(6, 5, "Maximus");
	cout << aName << endl;
	
	return 0;
}
