/********************************************************************
* week3_catering_Lscroggs.cpp
*
* Summary: This program will take the number of patrons for the catering
* service.  Patron will then select from menu.
* Program should then display menu selection, price per person, servings
* and total cost.
*
*
* Author: Lawrence Scroggs
* Created: 1/20/18
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
    int patrons;
    int menuChoice;
    float const dataBytes = 11.50;
    float const torvaldDuck = 15.95;
    float const gatesSalad = 12.85;
    float const steakMusk = 25.95;

    cout << "\t\tWelcome to Le' Ordinateur.\n\n\n";
    cout << "Please tell us how many people will be joining you " << endl;
    cin >> patrons;
    cout << "Please select from the menu below.\n";
    cout << "1. Data Bytes            11.50\n"
            "2. Le Duck of Torvalds   15.95\n"
            "3. Gates Billion $ Salad 12.85\n"
            "4. Musky Steak           25.95\n"
            "Enter menu choice.  ";
    cin >> menuChoice;
    cout << endl << endl;
    cout << left << setw(40) << setfill('_') << " " << endl << endl;
    cout << "\t\tLe' Ordinateur\n"
            "\t\t  est. 2018\n"
            "\t\t Gresham, OR\n";
    cout << left << setw(40) << setfill('_') << " " << endl << endl;
    switch(menuChoice)
    {
        case 1: cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout << "Menu Choice   Individual Price    Servings    Total Cost\n"
                        "Data Bytes\t     " << setprecision(2) << dataBytes << "\t\t" << patrons << "\t"
                        << setprecision(2) << patrons * dataBytes << endl;
                cout << "Thank You for Your Business.";
                break;
        case 2: cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout << "Menu Choice   Individual Price    Servings    Total Cost\n"
                        "Data Bytes\t     " << setprecision(2) << torvaldDuck << "\t\t" << patrons << "\t"
                        << setprecision(2) << patrons * torvaldDuck << endl;
                cout << "Thank You for Your Business.";
                break;
        case 3: cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout << "Menu Choice   Individual Price    Servings    Total Cost\n"
                        "Data Bytes\t     " << setprecision(2) << gatesSalad << "\t\t" << patrons << "\t"
                        << setprecision(2) << patrons * gatesSalad << endl;
                cout << "Thank You for Your Business.";
                break;
        case 4: cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout << "Menu Choice   Individual Price    Servings    Total Cost\n"
                        "Data Bytes\t     " << setprecision(2) << steakMusk << "\t\t" << patrons << "\t"
                        << setprecision(2) << patrons * steakMusk << endl;
                cout << "Thank You for Your Business.";
                break;
        default: cout << "Improper Selection.";

    }
    cout << endl << endl;


    return 0;

}
