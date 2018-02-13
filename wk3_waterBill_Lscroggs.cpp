/********************************************************************
* wk3_waterBill_Lscroggs.cpp
*
* Summary: Program takes 4 inputs for quarterly water bill
* Displays average monthly bill
*
*
* Author: Lawrence Scroggs
* Created: 1/26/18
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
	float qOne;
	float qTwo;
	float qThree;
	float qFour;
	float average;


	cout << "This program will tell you how you are doing"
		  " with your water usage." << endl << endl;
	cout << "Please enter your Quarter 1 water bill: ";
	cin >>  qOne;
	cout << "Please enter your Quarter 2 water bill: ";
	cin >>  qTwo;
	cout << "Please enter your Quarter 3 water bill: ";
	cin >>  qThree;
	cout << "Please enter your Quarter 4 water bill: ";
	cin >>  qFour;

	if (qOne < 0)
		cout << "Invalid Input Quarter 1.";
	else if (qTwo < 0)
		cout << "Invalid Input Quarter 2.";
	else if (qThree < 0)
		cout << "Invalid Input Quarter 3.";
	else if (qFour < 0)
		cout << "Invalid Input Quarter 4.";

	average = (qOne + qTwo + qThree + qFour) / 12;

	if (average > 75.0)
	{
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
		cout << "Your average monthly water bill is $"
		     << setprecision(2) << average << endl;
		cout << "Water usage is high please conserve.";
	}
	else if ((average >= 25.0) && (average <= 75.0))
	{
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
		cout << "Your average monthly water bill is $"
		     << setprecision(2) << average << endl;
		cout << "Water usage average, keep up the good work";
	}

	else if (average < 25.0)
	{
        	cout.setf(ios::fixed);
        	cout.setf(ios::showpoint);
		cout << "Your average monthly water bill is $"
		     << setprecision(2) << average << endl;
		cout << "Water usage low, great job!!!";
	}













	cout << endl << endl;


    return 0;

}
