/********************************************************************
* week4_tellers_lscroggs.cpp
*
* Summary: Get input for number of tellers in bank
* prompt user for number of sick days in years 1-3
* for each tellers.  Sum of total sick days displayed.
*
*
* Author: Lawrence Scroggs
* Created: 2/3/2018
* Modifications:
* Got it to work mostly.  Could not figure out how to restart loop
* for invalid input.  Maybe Im missing something?
*
*
*******************************************************************/

#include <iostream>

#include<cmath>
using namespace std;

int main()
{
    int teller;
    int total;
    int employee;
    int yearOne;
    int yearTwo;
    int yearThree;

    cout << "\t\tWelcome to the First Bank of Troutdale.\n\n" << endl;
    cout << "Please enter the number of employees:  ";
    cin >> employee;
    teller = 0;
    total = 0;
    if (employee > 0 && employee < 1000)
    {
        do{
        teller++;
        cout << "How many days was Teller " << teller << " sick in Year One? ";
        cin >> yearOne;
        if (yearOne < 0 || yearOne > 365)
            cout << "Invalid";
        cout << "How many days was Teller " << teller << " sick in Year Two? ";
        cin >> yearTwo;
        if (yearTwo < 0 || yearTwo > 365)
            cout << "Invalid\n";
        cout << "How many days was Teller " << teller << " sick in Year Three? ";
        cin >> yearThree;
        if (yearThree < 0)
            cout << "Invalid\n";

        total += (yearOne + yearTwo + yearThree);
        }
        while (teller <= employee - 1);
    }
    else
        cout << "Invalid Input\n";

    if (teller >= 2)
        cout << "The " << teller << " tellers missed " << total << " days.";
    else
        cout << "The " << teller << " teller missed " << total << " days.";

    cout << endl << endl;


    return 0;

}
