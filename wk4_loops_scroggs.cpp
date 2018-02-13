/********************************************************************
* wk4_loops_scroggs.cpp
*
* Summary: going through the loops
* while, do while, counter, sentinel, flag, control, data validation
*
*
* Author: Lawrence Scroggs
* Created: 1/30/18
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
//#include <iomanip>
//#include <string>
//#include<cmath>
using namespace std;

int main()
{
    int age;

    age = -5;

    while (age < 0 || age > 130)
    {
        cout << "How old are you?  ";
        cin >> age;
        if (age < 0 || age > 130)
            cout << "Bad INput.  Try again.\n\n";
    }
    cout << "Okie Dokie\n\n";




    // Flag controlled loop ---- bool
/*    bool isDone = false;

    while (isDone == false)
    {
        cout << "Go Blazers!\n";
        cout << "Are you done?  (1 for yes, 0 for no)"
        cin >> isDone;
    }
/*  int counter;
    int timesToRepeat;
    int miles, gallons;
    int mPG;
    int const sentinel = -1;

    cout << "Compute miles per gallon\n";
    while (miles != sentinel)
    {
        cout << "Enter Miles: ";
        cin >> miles;
        cout << "Enter Gallons: ";
        cin >> gallons;

        mPG = miles / gallons;

        cout << "That is " << mPG << " miles per gallon.\n\n";
    }


    cout << "How many times shall I show the message? ";
    cin >> timesToRepeat;

    counter = 0;
    while (counter < timesToRepeat)
    {
        cout << "Go Saints!!!\n";
        counter++; // counter += 1; counter = counter + 1; ++ counter
    }
    counter = 10;
    while (counter < 10)
    {
        cout << counter << endl;
        counter--;
    }
    cout << "Blast Off" << endl;

    int startValue, stopValue;

    cout << "Where do you start? " << endl;
    cin >> startValue;
    cout << "Where do you end? " << endl;
    cin >> stopValue;

    if (startValue > stopValue)
    {
        while (startValue >= stopValue)
        {
            cout << startValue << endl;
            startValue--;
        }
    }
    else if (startValue < stopValue)
    {
        while (startValue <= stopValue)
            startValue++;
    }
    else
        cout << "Start and end are the same.";



/*    int num = 6;
    cout << "num = " << num << endl;
    cout << "num++ " << num++ << endl;
    cout << "num = " << num << endl;
    num = 6;
    cout << "++num = " << ++num << endl;
    cout << "num = " << num << endl;

*/
    cout << endl << endl;



    return 0;

}
