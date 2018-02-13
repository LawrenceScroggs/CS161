/********************************************************************
* wk4_watermelon_Lscroggs.cpp
*
* Summary: calculates the length of meters a watermelon has dropped
* per second.  Displays length in second increments.
*
*
*
* Author: Lawrence Scroggs
* Created: 2/3/18
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>

#include<cmath>
using namespace std;
int height;
int seconds;
float const grav = 9.8;
float fall;
float counter;

int main()
{
    cout << "\t\tWatermelon Drop!!\n\n";

    do{
    cout << "How tall was the bridge, in meters? ";
    cin >> height;
    if (height < 0)
        cout << "Invalid Input\n";
    }
    while (height < 0);
    do{
    cout << "How long was the drop, in seconds? ";
    cin >> seconds;
    cout << endl;
    if (seconds < 0)
        cout << "Invalid Input\n";
    }
    while (seconds < 0);

    counter = 0;

    cout << "Seconds Dropped\t  Meters Fallen\n"
            "_______________\t  _____________\n";
    do
    {
        fall = (.5 * grav * (counter * counter));

        cout << "   " << counter << "    \t      " << fall << endl;
        counter++;


    }
    while (counter <= seconds);

    if (fall > height)
        cout << endl << "Invalid input the distance fallen cannot be greater"
                "than height of bridge. Please try again.";
    else
        cout << endl << "Thank you for using.";

    cout << endl << endl;


    return 0;

}
