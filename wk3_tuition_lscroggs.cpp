/********************************************************************
* week3_tuition_lscroggs.cpp
*
* Summary: This program asks user if they are in state or out of state
*   then prompts user if they need room and board
*   the program then calculates the total cost and displays
*
* Author: Lawrence Scroggs
* Created:
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
//#include <iomanip>
//#include <string>
#include<cmath>
using namespace std;

int main()
{
    cout << "\t\tUNIVERSITY OF TROUTDALE\n";
    cout << "\t\t Total Cost Calculator\n\n\n";

   /* int tuitionIn;
    int tuitionOut;
    int roomIn;
    int roomOut;*/
    char tuition;
    char room;

    cout << "Are you in-state\(I\) are out-of-state\(O\)? \n";
    cin >> tuition;
    cout << "Do you need room and board?(Y or N) \n";
    cin >> room;

    switch(tuition)
    {
        case 'i':
        case 'I': switch(room)
        {
            case 'y':
            case 'Y': cout << "\t\tUNIVERSITY OF TROUTDALE\n";
                      cout << "\t\t  Billing Statement\n\n";
                      cout << "\t        Tuition   Room\t  TOTAL\n";
                      cout << "\t         3000  \t  2500\t  5500";
                      break;

            case 'n':
            case 'N': cout << "\t\tUNIVERSITY OF TROUTDALE\n";
                      cout << "\t\t  Billing Statement\n\n";
                      cout << "\t        Tuition   Room\t  TOTAL\n";
                      cout << "\t         3000  \t    0\t  3000";
                      break;
            default: cout << "Improper Output.";
        }
        break;
        case 'o':
        case 'O': switch(room)
        {
            case 'y':
            case 'Y': cout << "\t\tUNIVERSITY OF TROUTDALE\n";
                      cout << "\t\t  Billing Statement\n\n";
                      cout << "\t        Tuition   Room\t  TOTAL\n";
                      cout << "\t         4500  \t  3500\t  8000";
                      break;
            case 'n':
            case 'N': cout << "\t\tUNIVERSITY OF TROUTDALE\n";
                      cout << "\t\t  Billing Statement\n\n";
                      cout << "\t        Tuition   Room\t  TOTAL\n";
                      cout << "\t         4500  \t    0\t  4500";
                      break;
            default: cout << "Improper Output.";
        }
        default: cout << "Improper Output.";
    }


    cout << endl << endl;


    return 0;
}
