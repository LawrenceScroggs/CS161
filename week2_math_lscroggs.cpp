/********************************************************************
* week2_math_lscroggs.cpp
*
* Summary: math demos
*
*
* Author: Lawrence Scroggs
* Created: 1/16/18
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
//#include <iomanip>
//#include <string>
#include <cmath>  // pow, sqrt, abs, fabs, ceil
using namespace std;

int main()
{
    int base, power;
    int negNumber;
    float squareRoot,
          ceilingNum;

    base = 2;
    power = 4;
    negNumber = -14;

    cout << base << " raised to the " << power << " power is "
         << pow(base, power) << endl;

    squareRoot = sqrt(123);
    cout << "The square root of " << 123 << " is " << squareRoot << endl;

    cout << "The absolut value of " << negNumber << " is "
         << abs(static_cast<float>(negNumber)) << endl;

    ceilingNum = 2.3456;
    cout << "Ceiling applied to " << ceilingNum << " is " << ceil(ceilingNum) << endl;
    cout << "Floor applied to " << ceilingNum << " is " << floor(ceilingNum) << endl;

    cout << endl << endl;


    return 0;

}
