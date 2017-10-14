/**
* @author Jakhongir Rikhsiboev
* @file  maxMin.cpp          
*
* Program reads integer values from a text file named "maxMin01.txt"
*  and writes out the largest and smallest values found.  Numbers in the
* file may be separated by blanks or line breaks.
* Run the program a 2nd time reading from "maxMin02.txt".
* Run the program a 3rd time reading from "maxMin03.txt". */

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Declare input stream
    ifstream fin;
    int min = 0, max = 0, val;
    bool isFirst = true;

	// Open the file
    fin.open("c:\\Users\\Ali\\Desktop\\maxMin02.txt");

	// Check for successful file open
	if ( fin.fail() )
	{
		cerr << "could not open an input file maxMin02" << endl;
		exit(1);
	}
	
	// Loop to read numbers from the file into val and check for max and min
	// Use isFirst to know whether this is the first value read or not
	while ( fin >> val)
	{
		if(val > max)
			max = val;
		else 
			min = val;
	}

	// Close the file
    fin.close();

	// Print the largest and smallest values
    cout << "Largest value is " << max << ", smallest value is " << min << "\n";

	system ("pause");
	return 0;  // successful completion
}

/*
1st run with maxMin01.txt
Largest value is 100, smallest value is -101
Press any key to continue . . .

2nd run with maxMin02.txt
Largest value is 2000, smallest value is 1010
Press any key to continue . . .

3rd run with maxMin03.txt
Largest value is 0, smallest value is -1100
Press any key to continue . . .

*/