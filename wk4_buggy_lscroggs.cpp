/**************************************************
* File:         wk4_buggy_lscroggs.cpp
* Description: Displays the number of positive integers
* and the number of negative integers entered by the user
*
* Lawrence Scroggs
* 1/30/18
*
* Modifications: Included namespace std; line 20
* cin >> variable was not correct n in number was capitalized line 29
* change not to !=. line 31
* changed =+ to ++; line 35 and 37
* changed to " " instead of ' ' on cout statement line 40
* changed positive to negative variable and negative to pos variable line 44 & 45
* added 0 to return line 48
*
*
**************************************************/

#include <iostream>

using namespace std;

int main()
{
	int number;
	int positive = 0;
	int negative = 0;

	cout << "Enter a positive or negative integer (enter 0 to end): ";
	cin >> number; // changed N to n

	while (number != 0)
	{
		if (number > 0)
			positive++; // change =+ to ++
		else
			negative++; // change =+ to ++

		cout << "Enter another positive or negative integer (enter 0 to end): "; // changed to double quotes
		cin >> number;
	}
	cout << endl;
	cout << "Total positive integers: " << positive << endl;  // changed from neg to pos.  added a <
	cout << "Total negative integers: " << negative << endl; // changed from pos to neg.  added a <
	cout << endl;

	return 0; // added 0
}
