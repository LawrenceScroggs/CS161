/********************************************************************
* wk4_beverages_Lscroggs.cpp
*
* Summary: takes user input for survey.  Tracks user input for each
* for each menu choice. Displays results
*
*
* Author: Lawrence Scroggs
* Created: 02/03/18
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>

#include<cmath>
using namespace std;

int main()
{
    int menuChoice;
    int counter;
    int bevOne;
    int bevTwo;
    int bevThree;
    int bevFour;
    bevOne = 0;
    bevTwo = 0;
    bevThree = 0;
    bevFour = 0;
    counter = 0;
    cout << "\t\tBeverage Survey\n\n";
    cout << "Please enter your selection.\n"
            "1 for Pepsi\n2 for Dr. Pepper\n3 for Rockstar\n"
            "4 for Monster\nType 0 to quit\n\n";

    do
    {
        counter++;
        cout << "Enter the choice of beverage for person " << counter << ": ";
        cin >> menuChoice;
        if (menuChoice == 1)
            bevOne++;
        else if (menuChoice == 2)
            bevTwo++;
        else if (menuChoice == 3)
            bevThree++;
        else if (menuChoice == 4)
            bevFour++;
        else if (menuChoice == 0)
            cout << " ";
        else
            {cout << "Invalid Input.\n";
            counter--;}
        // Left this switch menu in because I couldnt get it to work
        // it wouldnt read the increments. Any ideas?
       /* switch (menuChoice)
        {
            case 'a': if (menuChoice == 'a')
                    {
                        bevOne++;
                        counter++;
                    }
            case 'b': bevTwo++;
                      counter++;
            case 'c': bevThree++;
                      counter++;
            case 'd': bevFour++;
                      counter++;

        }*/

    }
    while (menuChoice != 0);
    cout << "\tResults\nBeverage\t   # of votes\n\n";
    cout << "Pepsi\t\t\t " << bevOne << endl;
    cout << "Dr. Pepper\t\t " << bevTwo << endl;
    cout << "Rockstar\t\t " << bevThree << endl;
    cout << "Monster\t\t\t " << bevFour << endl;


    cout << endl << endl;


    return 0;

}
