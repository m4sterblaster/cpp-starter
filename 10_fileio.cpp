#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	string quote = "Software is never finished, it just ships.";
		
	// write to file
	ofstream writer("quote.txt");
	if (!writer){
		// file stream was not created
		cout << "Error opening file" << endl;
		return -1;
	} else {
		// write to file and close stream
		writer << quote << endl;
		writer.close();
	}
	
	// ios::app - append
	// ios::binary
	// ios::in 
	// ios::trunc	
	// ios::out	

	// append to file
	ofstream writer2("quote.txt", ios::app);
	if (!writer2){
		// file stream was not created
		cout << "Error opening file" << endl;
		return -1;
	} else {
		// write to file and close stream
		writer2 << quote << endl;
		writer2.close();
	}
	
	char letter;
	
	ifstream reader("quote.txt");
	if (!reader){
		// file stream was not created
		cout << "Error opening file" << endl;
		return -1;
	} else {
		for (int i = 0; !reader.eof(); i++){
			reader.get(letter);
			cout << letter;
		}
		cout << endl;
		reader.close();
	}
	
	return 0;
}
