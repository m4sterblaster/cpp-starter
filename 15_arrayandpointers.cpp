#include <iostream>

using namespace std;

void refSwap(int &num1, int &num2) {
	cout << "&num1: " << &num1 << " has value: " << num1 << endl;
	cout << "&num2: " << &num2 << " has value: " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "&num1: " << &num1 << " has value: " << num1 << endl;
	cout << "&num2: " << &num2 << " has value: " << num2 << endl;
}

void ptrSwap(int *pnum1, int *pnum2) {
	cout << "*pnum1: " << pnum1 << " has value: " << *pnum1 << endl;
	cout << "*pnum2: " << pnum2 << " has value: " << *pnum2 << endl;
	int temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
	cout << "*pnum1: " << pnum1 << " has value: " << *pnum1 << endl;
	cout << "*pnum2: " << pnum2 << " has value: " << *pnum2 << endl;
}

int main() {
	
	const int size = 3;
	int numbers[size] = {22,5,8};
	int *ptrnum = &numbers[0];
	
	cout << "Ptrnum is reference to the memory address that holds the array's first value: " << ptrnum  << endl;
	cout << "dereferenced ptrnum will give you the value: " << *ptrnum  << endl;
	cout << endl;
	
	cout << "&numbers[0] - reference of the first element is: " << &numbers[0] << endl;
	cout << "&numbers - reference of the array is the same as the first element: " << &numbers << endl;
	cout << endl;
	
	cout << "Arrays are contiguous address in memory:" << endl;
	for (int i = 0; i< size; ++i)
		cout << "dereferenced pointer (ptrnum+" << i << ") points at address: " << (ptrnum+i) << " has value: " << *(ptrnum+i) << endl;
	cout << endl;
	
	int num1 = 89;
	int num2 = 71;
	cout << ".. refSwap(num1, num2) .." << endl;
	refSwap(num1, num2);
	cout << endl;
	
	cout << ".. ptrSwap(num1, num2) .." << endl;
	ptrSwap(&num1, &num2);
	cout << endl;

	return 0;
}