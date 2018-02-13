/********************************************************************
* wk3_tshirts_Lscroggs.cpp
*
* Summary: this program takes input of the users for how many tshirts
*  they bought.  It then calculates how much of a discount the user gets.
*  displays price
*  displays discount
*  displays total amount saved
*
* Author: Lawrence Scroggs
* Created: 1/26/2018
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
#include <iomanip>
//#include <string>
#include<cmath>
using namespace std;

int main()
{
    cout << "\t\tWelcome to Saints T-Shirts.\n\n";
    int numShirt;
    float totalCost;
    float monSaved;
    cout << "How many shirts did you purchase? \n";
    cin >> numShirt;

    if ((numShirt >= 5) && (numShirt <= 10))
    {
        totalCost = (numShirt * 12) * .9;
        monSaved = (numShirt * 12) * .1;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout << "The total cost for " << numShirt << " shirts is $" << setprecision(2) << totalCost << endl;
        cout << "This includes the 10.0 % discount." << endl;
        cout << "You saved $" << setprecision(2) << monSaved << " dollars";
    }
    else if ((numShirt > 10) && (numShirt <= 20))
    {
        totalCost = (numShirt * 12) * .85;
        monSaved = (numShirt * 12) * .15;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout << "The total cost for " << numShirt << setprecision(2) << " shirts is $" << totalCost << endl;
        cout << "This includes the 15.0 % discount." << endl;
        cout << "You saved $" << setprecision(2) << monSaved << " dollars";
    }
    else if ((numShirt > 20) && (numShirt <= 30))
    {
        totalCost = (numShirt * 12) * .8;
        monSaved = (numShirt * 12) * .2;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout << "The total cost for " << numShirt << setprecision(2) << " shirts is $" << totalCost << endl;
        cout << "This includes the 20.0 % discount." << endl;
        cout << "You saved $" << setprecision(2) << monSaved << " dollars";
    }
    else if (numShirt > 30)
    {
        totalCost = (numShirt * 12) * .75;
        monSaved = (numShirt * 12) * .25;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout << "The total cost for " << numShirt << setprecision(2) << " shirts is $" << totalCost << endl;
        cout << "This includes the 25.0 % discount." << endl;
        cout << "You saved $" << setprecision(2) << monSaved << " dollars";
    }
    else if ((numShirt > 0) && (numShirt < 5))
    {
        totalCost = (numShirt * 12);
        monSaved = (numShirt * 12) * 0;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout << "The total cost for " << numShirt << setprecision(2) << " shirts is $" << totalCost << endl;
        cout << "There is no discount." << endl;
        cout << "You saved $" << setprecision(2) << monSaved << " dollars";
    }
    else
        cout << "Improper Input.";





    cout << endl << endl;


    return 0;

}
