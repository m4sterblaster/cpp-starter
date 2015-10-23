#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	// arithmetic
	cout << "5+2 = " << 5+2 << endl;
	cout << "5-2 = " << 5-2 << endl;
	cout << "5*2 = " << 5*2 << endl;
	cout << "5/2 = " << 5/2 << endl;
	cout << "5%2 = " << 5%2 << endl;

	// casting to float
	cout << "5/2 = " << (float)5/2 << endl;
	
	//incrememt after operation 
	int five = 5;
	cout << "5++ = " << five++ << endl;
	cout << "five = " << five << endl; 
	//decrement after operation
	five = 5;
	cout << "5-- = " << five-- << endl;
	cout << "five = " << five << endl; 
	//incrememt before operation 
	five = 5;
	cout << "++5 = " << ++five << endl;
	cout << "five = " << five << endl; 
	//decrement before operation 
	five = 5;
	cout << "--5 = " << --five << endl;
	cout << "five = " << five << endl; 
	
	return 0;
}
