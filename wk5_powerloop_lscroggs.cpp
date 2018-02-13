/********************************************************************
* wk5_powerloop_lscroggs.cpp
*
* Summary: This program prompts user to enter a number that they want
* It then prompts them to ask what exponent they want to raise that
* number to(0-10)
* Program then displays number and prompts user if they want to run
* program again.
*
*
* Author: Lawrence Scroggs
* Created: 02/09/18
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
#include<cmath>
using namespace std;
int getNumber()
{
    int number;
    cout << "Please enter the number you want to find the power of  ";
    cin >> number;
    return number;
}
int getPower()
{
    int exponent = 0;
    cout << "What power would you like to raise to 0-10  ";
    cin >> exponent;
        if (exponent < 0 || exponent > 10)
        {
            cout << "Invalid Input. Please try again.\n";
            return getPower();
        }
    return exponent;
}


int main()
{
    int userNum, userExp;
    char goAgain;
    cout << "\t\tExponents" << endl << endl;
    do
    {
        goAgain = 'a';
        userNum = getNumber();
        userExp = getPower();
        cout << "The number " << userNum << " raised to the power of "
             << userExp << " is " << pow(userNum, userExp) << endl;
        cout << "Press any key to continue.\n"
                "Press Q to quit. ";
        cin >> goAgain;
        cout << endl << endl;
    }
    while(goAgain != 'q' && goAgain != 'Q');
    return 0;

}

