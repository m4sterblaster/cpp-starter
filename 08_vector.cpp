#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	vector<int> fibVect(10);
	int fibArray[5] = {1,1,2,3,5};
	
	// insert array into beginning of vector up to the 3rd number in the array
	fibVect.insert(fibVect.begin(), fibArray, fibArray+3);
	cout << fibVect.at(2) << endl;
	cout << fibVect.at(9) << endl;
	
	// add value to the 6th index
	fibVect.insert(fibVect.begin()+6, 8);
	cout << fibVect.at(5) << endl;
	
	// add value at the end
	fibVect.push_back(64);
	cout << "Final value: " << fibVect.back() << endl;

	// other vector function
	cout << "Vector size: " << fibVect.size() << endl;
	cout << fibVect.empty() << endl;
	cout << fibVect.front() << endl;
	
	fibVect.pop_back();
	cout << "Final value: " << fibVect.back() << endl;
	cout << "Vector size: " << fibVect.size() << endl;
	
	return 0;
}
