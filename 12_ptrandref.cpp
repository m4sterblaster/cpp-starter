// g++ filename 
// a.exe
// more info on pointers: http://www.codingunit.com/cplusplus-tutorial-pointers-reference-and-dereference-operators

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// pass by pointer
void makeMeYoung(int* age){
	cout << "I was " << *age << endl; 
	*age = 21;
}

// pass by reference
void actYourAge(int& age){
	cout << "I was " << age << endl; 
	age = 26;
}

int main()
{
	int myAge = 39;
	
	// pointers
	int* myAgePtr = &myAge;
	
	cout << "value of myAge " << myAge << endl; // value of myAge 39
	cout << "address of myAgePtr " << myAgePtr << endl; // address of myAgePtr 0x28ff00
	cout << "data at memory address (myAgePtr) " << *myAgePtr << endl; // data at memory address (myAgePtr) 39

	int fib[5] = {1,1,2,3,5};
	
	int* fibPtr = fib;
	cout << "address of fibPtr " << fibPtr << ", data at memory address (fibPtr) " << *fibPtr << endl; // address of fibPtr 0x28feec, data at memory address (fibPtr) 1
	fibPtr+=2;
	cout << "address of fibPtr " << fibPtr << ", data at memory address (fibPtr) " << *fibPtr << endl; // address of fibPtr 0x28fef4, data at memory address (fibPtr) 2
		
	// array is just a pointer to the first element of the array
	cout << "address of fib " << fib << ", data at memory address (fib) " << *fib << endl; // address of fib 0x28feec, data at memory address (fib) 1
	
	// Passing pointer as pointer
	cout << "Passing pointer as pointer: " << endl;
	makeMeYoung(myAgePtr);  // I was 39
	cout << "I'm " << *myAgePtr << endl; // I'm 21
	
	
	// reference, use more than pointers; 
	// reference initials with value; pointers, initialise with reference.
	// if you dont need to change what you are pointing at, use reference
	int& ageRef = myAge;
	cout << "myAge " << ageRef << endl; // myAge 21
	ageRef++;
	cout << "myAge " << ageRef << endl;	// myAge 22
	
	
	// Passing pointer as reference
	cout << "Passing pointer as reference: " << endl; 
	actYourAge(ageRef); // I was 22
	cout << "I'm " << ageRef << endl; // I'm 26
	
	return 0;
}
