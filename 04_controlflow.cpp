#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	// control flow: if and operators
	// to decide if driving is allowed
	int age = 20;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;
	
	if ((age>=1) && (age<16)) {
		cout << "You are too young to drive" << endl;
	} else if (!isNotIntoxicated) {
		cout << "You can't drink drive" << endl;
	} else if ( age>=100 || (age-ageAtLastExam) > 5) {
		cout << "You are too old to drive or have not been tested in the last 5 years" << endl;
	} else {
		cout << "You can drive" << endl;
	}
	
	// short hand if
	bool isTwenty = (age == 20)? true : false;
	cout << "Is Twenty? " << isTwenty << endl;

	// control flow: switch
	int greetingOptions = 2;
	switch(greetingOptions)
	{ 
		case 1: 
		cout << "Arrr" << endl;
		break;	
		
		case 2: 
		cout << "Hola" << endl;
		break;
		
		default:
		cout << "Hello" << endl;
	}
	
	return 0;
}
