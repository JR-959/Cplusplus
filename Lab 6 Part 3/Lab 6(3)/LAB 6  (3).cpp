/**
* @author Jakhongir Rikhsiboev
* @file  fileMerge.cpp
*
* This program merges 2 input files (each already sorted in ascending order)
*   into 1 output file sorted in ascending order.  The numbers in the 2 files
*   are decimal numbers*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	// declare variables
	ifstream input1;
	ifstream input2;
	ofstream output;

	double num, num1;
	// open 2 input files and 1 output file and check for successful open
	input1.open("c:\\Users\\Ali\\Desktop\\fileMerge04.txt");

	if(input1.fail () )
	{
		cerr << " could not open input file fileMerge01.txt" << endl;
		exit (1);
	}

	input2.open("c:\\Users\\Ali\\Desktop\\fileMerge05.txt");

	if(input2.fail () )
	{
		cerr << " could not open input file fileMErge02.txt" << endl;
		exit (1);
	}

	output.open("c:\\Users\\Ali\\Desktop\\fileMerge06.txt");

	if(output.fail () )
	{
		cerr << " could not open output file fileMErge03.txt" << endl;
		exit (1);
	}
	// read a number from the 1st file
		input1 >> num; 
	// read a number from the 2nd file
		input2 >> num1;

	//loop while not eof on the 1st file and not eof on the 2nd file
		while ( (!input1.eof()) && (!input2.eof()))
		{
		// if the 1st number is less than the 2nd number
				// write the 1st number to the output file
				// read another number from the 1st file
			if(num < num1)
			{
				output << num << "\n";
				input1>> num;
			}
			else
			{
				output << num1 << "\n";
				input2 >> num1;
				
			}
		}// end of loop

		if (input1.eof())
		{
			while ( !input2.eof())
			{
				output << num1 << "\n";
				input2 >> num1;
			}
		}
		else
		{
			while ( !input1.eof())
			{
				output << num << "\n";
				input1 >> num;
			}
		}

		input1.close () ;
		input2.close ();

		output.close();

		
		return 0 ;
}

/*
 results of fileMerge01 & fileMerge02
 123.45
223.73
323.78
415.87
563.12
623.4
734.12
825.33
912.53
985.29
993.73


results for fileMerge04 & fileMerge05
134.63
269.23
329.28
423.65
525.3
632.94
725.85
856.89
923.89
967.32
994.63

*/