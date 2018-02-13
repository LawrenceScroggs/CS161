/********************************************************************
* wk2_cin_lscroggs.cpp
*
* Summary: demonstration of using setw
*          to set up columns in output
*
* Author: Lawrence Scroggs
* Created: 1/16/18
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    float num;
    char symbol;
    string name;

    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered " << num << endl;
    cout << "Enter a character: ";
    //cin >> symbol;
    cin.sync();
    cin.get(symbol); // grabs one character
    cout << "You entered " << symbol << endl;
    cout << "What is your name? ";
    //cin >> name;  doesnt allow spaces use getline
    cin.sync();  // empties out the buffer
    getline(cin, name);
    cout << "Hello," << name << endl;
    cout << "Enter a number & your name ";
    cin >> num >> name;
    cout << num << ' ' << name << ends;

    return 0;
}
