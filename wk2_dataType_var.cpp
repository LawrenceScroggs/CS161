/********************************************************************
* wk2_dataType_var.cpp
*
* Summary: Working with variables
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
#include <iomanip>  //setprecision, fixed, showpoint, setw
using namespace std;

int main(){


    short myShort;
    unsigned short myUnsignedShort;
    int myInt;
    long long myLong;
    float myFloat;
    double myDouble;

    const float PI = 3.14159;

    //assignments
 /*   myShort = 32766;
    cout << "myShort: " << myShort << endl;
    myUnsignedShort = 65535;
    cout << "myUnsignedShort: " << myUnsignedShort << endl;
    myInt = 22345678987;
    cout << "myInt: " << myInt << endl;
    myLong = 2234567897;
    cout << "myLong: " << myLong << endl;

    myFloat = 12.2564156136;
    cout << "myFloat: " << myFloat << endl;

    cout << showpoint << fixed;
    cout << setprecision(3) << myFloat << endl;
*/

    cout << PI << endl;
    //PI = 4.567;

    bool myBool;
    myBool = true;
    cout << "myBool: " << myBool << endl;  //shows 1 and 0
    cout << boolalpha << myBool << endl;  // shows true or flase

    int intA{5};
    int intB = 7;  //both work for declaration intB works more universally
    int intC{4},
        intD{19},
        intE{23};

    float answer;
    answer = intA / static_cast<float>(intB);
    cout << fixed << showpoint << setprecision(3);
    cout << "answer: " << answer << endl;
    cout << "intB: " << intB << endl;

    cout << endl << endl;


    return 0;

}
