/**
* @author Jakhongir Rikhsiboev
* @file  characterStats.cpp          
*
* Program reads text from a text file named "characterStats.txt"
* and writes out the number of characters in the file, along with the
* number of letters and the number of non-whitespace characters. */

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main( )
{
    // Declare input stream
    ifstream fin;
    char val;
    int count = 0;
    int nws = 0;
    int letters = 0;
	
	// Open the file
    fin.open("c:\\Users\\Ali\\Desktop\\characterStats.txt");

	// Check for successful file open
	if (fin.fail ())
	{
		cerr << " could not open an input file characterStats.txt" << endl;
		exit (1);
	}

	// Loop to read from file
	// Count the number of characters along with
	//   the number of letters and non-whitespace characters

	while (!fin.eof ())
	{
		
		fin.get(val);
		count ++;

		if (!isspace(val))
			nws++;

		if (isalpha(val))
			letters++;
		
	}

	// Close the file
    fin.close();

    cout << "The file contains:\n";
    cout << "    " << count << " characters\n";
    cout << "    " << nws << " non-whitespace characters\n";
    cout << "    " << letters << " letters\n";

	system ( "pause");
	return 0; // successful completion
}

/*
The file contains:
    69 characters
    52 non-whitespace characters
    45 letters
Press any key to continue . . .
*/