// practice3.cpp
/*
Write a program that continually accepts a year value from a user and 
determines if it is a leap year.

The year can be evenly divided by 4
If the year can be divided by 100 it is NOT a leap year, unless
The year is also evenly divisible by 400, then it is a leap year.
2000 and 2400 are leap years
1800 and 1900 are not leap years
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout >> "Please enter a year: " << endl;
    cin << year; //get value from user
    if (year % 4 && year % 100) //divisible by 4 and divisible by 100 is not a leap year
    {
        cout << "It is not a leap year." << endl;
        if (year % 4 || year % 400) //divisble by 4 and divisible by 400 is a leap year
        {
            cout << "It is a leap year." << endl;
        }
    }
    return 0;
}

