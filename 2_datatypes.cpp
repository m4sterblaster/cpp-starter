#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	const double PI = 3.1415926535;
	char myGrade = 'A';
	bool isHappy = true;
	float favNum = 3.14159;
	double otherFavNum = 1.32452356456456;

	cout << "Favourite Number: " << favNum << endl;
	
	// Other typs include:
	// short int 
	// long int 
	// long long int 
	// unsigned int 
	// long double
	
	// To find the size of the datatype, in bytes:
	cout << "Size of otherFavNum: " << sizeof(otherFavNum) << endl;
	
	return 0;
}
