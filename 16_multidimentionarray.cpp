#include <iostream>

using namespace std;

int main() {
	// 1D array
	cout << "1D Array ============== " << endl;
	int intarr[3] = {3,5,6};
	cout << "intarr is a reference to memory location: " << intarr << "; &intarr: " << intarr << endl;
	cout << "*intarr dereference to the first element in the array: " << *intarr << endl;
	cout << "get the 2nd element in the array (intarr[1] ): " << intarr[1] << "; *(intarr+1):" << *(intarr+1) << endl;
	cout << "sizeof(intarr) -> 3x 4byte(int):" << sizeof(intarr) << endl;
	cout << endl;
	cout << "1D Array Pointer ============== " << endl;
	int *ptrintarr = intarr;
	cout << "ptrintarr is a pointer to memory location: " << ptrintarr << "; &intarr: " << intarr << endl;
	cout << "*ptrintarr dereference to the first element in the array: " << *ptrintarr << endl;
	cout << "get the 2nd element in the array *(ptrintarr+1):" << *(ptrintarr+1) << endl;
	cout << endl;
	
	
	// 2D array
	cout << "2D Array ============== " << endl;
	int int2darr[2][3] = {{3,5,6}, {7,8,9}};
	cout << "int2darr is a reference to memory location: " << int2darr << endl;
	cout << "*int2darr dereference to the first element in the array - a reference to the first array: " << *int2darr << endl;
	cout << "get the 2nd element in the array (int2darr[1] ): " << int2darr[1] << "; *(int2darr+1):" << *(int2darr+1) << endl;
	cout << "get the 2nd element in the 1st array (int2darr[0][1] ): " << int2darr[0][1] << "; (*int2darr)[1]:" << (*int2darr)[1] << endl;
	cout << "sizeof(int2darr) -> 2x (3x 4byte(int)):" << sizeof(int2darr) << endl;
	cout << endl;
	cout << "2D Array Pointer ============== " << endl;
	// unlike 1D array this is an invalid declaration, because an element in int2darr is not an int but an int array!
	// int *ptrint2darr = int2darr;
	int (*ptrint2darr)[3] = int2darr;
	cout << "ptrint2darr is a pointer to memory location: " << ptrint2darr << "; &int2darr: " << int2darr << endl;
	cout << "*ptrint2darr dereference to the first element in the array: " << *ptrint2darr << endl;
	cout << "get the 2nd element in the array *(ptrint2darr+1):" << *(ptrint2darr+1) << endl;
	cout << "get the 2nd element in the 2nd array (*(ptrint2darr+1))[1]:" << (*(ptrint2darr+1))[1] << endl;
	
	cout << endl;
}