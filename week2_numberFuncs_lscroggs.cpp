/********************************************************************
* week2_numberFuncs_lscroggs.cpp
*
* Summary: program to showcase all the math functions
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
//#include <iomanip>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    cout << "Enter 2 integers one for the base number the second for the exponent:" << endl;
    float base, exponent;
    cin >> base;

    cin >> exponent;

    cout << "Enter 2 sides of a right triangle to find hypotenuse:" << endl;
    float sideA, sideB;
    cin >> sideA;

    cin >> sideB;


    cout << "Enter the number of square root you want to find:" << endl;
    float sqRoot;
    cin >> sqRoot;


    cout << "Enter a negative integer:" << endl;
    float negInt;
    cin >> negInt;


    cout << "Enter a floating negative integer:" << endl;
    float fltInt;
    cin >> fltInt;


    cout << "Enter a number to find the sine of:" << endl;
    float sine;
    cin >> sine;


    cout << "Enter a floating point number + or -:" << endl;
    float posnegNum;
    cin >> posnegNum;


    cout << "POW" << endl;
    cout << base << " to the power of " << exponent << " is " << pow(base,exponent) << endl;
    cout << "SQRT" << endl;
    cout << "The square root of " << sqRoot << " is " << sqrt(sqRoot) << endl;
    cout << "SIN" << endl;
    cout << "The sine of " << sine << " is " << sin(sine) << endl;
    cout << "ABS" << endl;
    cout << "The absolute value of " << negInt << " is " << abs(negInt) << endl;
    cout << "FABS" << endl;
    cout << "The absolute value of " << fltInt << " is " << fabs(fltInt) << endl;
    cout << "FLOOR" << endl;
    cout << "The floor of " << posnegNum << " is " << floor(posnegNum) << endl;
    cout << "CEIL" << endl;
    cout << "The ceiling of " << posnegNum << " is " << ceil(posnegNum) << endl;
    cout << "HYPOT" << endl;
    cout << "The hypotenuse of " << sideA << " and " << sideB << " is " << hypot(sideA,sideB);









    cout << endl << endl;


    return 0;

}
