#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	cout << "For loop" << endl;
	for (int i = 1; i<=10; i++)
	{
		cout << i << endl;
	}
	
	char aName[5][5] = {{'D', 'e', 'r', 'e', 'k'},{'B', 'a', 'n', 'a', 's'}};
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout << aName[i][j] << endl;
		}
	}
	
	cout << "While loop" << endl;
	int index = 0;
	while(index < 10){
		cout << index << endl;
		index++;
	}

	cout << "Do while loop" << endl;
	index = 0;
	do{
		cout << index << endl;
		index++;
	} while(index < 10);
	
	return 0;
}
