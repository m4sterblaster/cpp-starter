#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	int myFavNums[5];
	int primeNums[5] = {1,2,3,5,7};
	
	cout << "Prime Number 1: " << primeNums[0] << endl;
	cout << "Prime Number 2: " << primeNums[1] << endl;
	cout << "Prime Number 5: " << primeNums[4] << endl;	
	
	char aName[5][5] = {{'D', 'e', 'r', 'e', 'k'},{'B', 'a', 'n', 'a', 's'}};
	cout << "2nd array, 3rd char at aName: " << aName[1][2] << endl;	
	
	// set array element:
	aName[1][2] = 'm';
	cout << "Updated 2nd array, 3rd char at aName: " << aName[1][2] << endl;	
	
	return 0;
}
