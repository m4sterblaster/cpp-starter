#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int add(int one, int two = 0)
{
	int retval = one + two;
	return retval;
}

// default value has to be at the end of the param list
int add(int one, int two, int three = 0)
{
	int retval = one + two + three;
	return retval;
}

// recursive function
int factorial(int number)
{	
	int retval;
	
	if (number == 1) 
		retval = 1;
	else 
		retval = factorial(number-1) * number;
	
	return retval;
}


int main()
{
	cout << add(1) << endl;
	// cout << add(1,1) << endl;
	cout << add(1,3,5) << endl;
	
	cout << factorial(3) << endl;
	
	return 0;
}
