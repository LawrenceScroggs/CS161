/********************************************************************
* wk2_columns_lscroggs.cpp
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
using namespace std;

int main()
{
    int x = 15;
    int y = 7654;
    int z = 123;
    int q = 23456;

    cout << "12345678901234567890" << endl;

    cout << setw(5) << right << x << setfill('*') << setw(8) << y << endl; //setw sets column width
    cout << setw(5) << left << z << setfill(' ') << setw(8) << q << endl;






    return 0;

}
