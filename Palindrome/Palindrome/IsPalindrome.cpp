/**
* @author Jakhongir Rikhsiboev
* @file inClass16.cpp
* Program determines whether a word or phrase is a palindrome */

#include <iostream>
using namespace std;

bool isPalindrome(const char *);

int main()
{
	char x[100];
	cout << "Enter a word or phrase: ";
	cin.getline(x, 100);

	if (isPalindrome(x))
		cout << "This is a palindrome.\n";
	else
		cout << "This is NOT a palindrome.\n";

	system("pause");

	return 0;
}

bool isPalindrome(const char * xPtr)
{
	bool result = true;
	const char * endPtr = xPtr;

	// loop to move endPtr to the NULL character in the string
	for (; *endPtr != NULL; endPtr++)
	{
	}

	// move endPtr to the character before the NULL
	endPtr--;

	// loop to check for not a palindrome
	// each time in the loop, increment xPtr and decrement endPtr
	for (; xPtr < endPtr; xPtr++, endPtr--)
	{
		if (*xPtr != *endPtr)
		{
			result = false;
			break;
		}
	}

	return result;
}
