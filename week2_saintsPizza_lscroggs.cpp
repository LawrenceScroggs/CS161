/********************************************************************
* week2_saintsPizza_lscroggs.cpp
*
* Summary: take the user entry for number of pizzas in each available size
* combine together and show amount
* show percentages of each pizza sold
*
* Author: Lawrence Scroggs
* Created: 01/20/18
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    cout << "\t\tSAINTS PIZZA SALES" << endl << endl;
    cout << "Enter the numbers of pizzas sold this month per size." << endl;

    float smallPizza;
    float medPizza;
    float largePizza;
    float famPizza;

    cout << "Small: ";
    cin >> smallPizza;
    cout << "Medium: ";
    cin >> medPizza;
    cout << "Large: ";
    cin >> largePizza;
    cout << "Family: ";
    cin >> famPizza;
    cout << endl << endl << endl;

    float numPizza;
    numPizza = smallPizza + medPizza + largePizza + famPizza;
    cout << "Total number of pizzas sold: " << numPizza << endl << endl;
    cout << "Percentage of total for each pizza: " << endl << endl;
    cout << "Small: " << right << setw(11) << setprecision(2)
         << (smallPizza / numPizza) * 100 << endl;
    cout << "Medium: " << right << setw(10) << setprecision(2)
         << (medPizza / numPizza) * 100 << endl;
    cout << "Large: " << right << setw(11) << setprecision(2)
         << (largePizza / numPizza) * 100 << endl;
    cout << "Family: " << right << setw(10) << setprecision(2)
         << (famPizza / numPizza) * 100 << endl;




    cout << endl << endl;


    return 0;

}
