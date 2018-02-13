/********************************************************************
* wk5_testScores_lscroggs.cpp
*
* Summary: This program finds the average of test scores.  It will
* first prompt user for how many students there are. Then will prompt
* user for how many tests taken. Will then ask for scores on test for
* each student.  Program then displays average for each student.
*
*
* Author: Lawrence Scroggs
* Created:
* Modifications:
*
*
*
*******************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

int students, tests, total, counter, countTest, totalScore;
float average;
int getStudents()
{
    cout << "How many students are there scores for?  ";
    cin >> students;
        if (students <= 0)
        {
            cout << "Invalid Input.";

        }
    return students;
}

int getTests()
{
    cout << "How many test scores does each student have?  ";
    cin >> tests;
        if (students <= 0)
            cout << "Invalid Input.";


    return tests;
}

int getScores()
{


    cout << "What was the score of test " << countTest << " for student "
        << counter << " ";
    cin >> total;
    if (total < 0 || total > 100)
    {
        cout << "Invalid score please try again.\n";
        return getScores();
    }


}


int main()
{
    cout << "\tThis program will get the average of tests.\n\n";
    countTest = 1;
    counter = 1;
    total = 1;
    students = getStudents();
    tests = getTests();

    for(counter = 1; counter <= students; counter++)
    {
        for (countTest = 1; countTest <= tests; countTest++)
    {
            getScores();
            totalScore = (totalScore + total);

            if (countTest == tests)
            {
                average = (totalScore / tests);
                cout << "The average score for student " << counter << " is "
                << average << endl;
                totalScore = 0;
            }

    }

    }

    cout << endl << endl;


    return 0;

}
