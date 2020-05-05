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
#include <cmath>

using namespace std;

int main(){
    int user_input = 0;

    while (1){
        cout << "Please enter a year: " << endl;
        cin >> user_input;
        if (user_input == 0){
            break;
        }
    
    cout << (user_input % 4 == 0) << endl;
    cout << (user_input % 100 == 0) << endl;
    cout << (user_input % 400 == 0) << endl;
     
    if (user_input % 4 == 0){
        cout << "This is a leap year." << endl;
    } else if (user_input % 100 == 0){

    }
    return 0;
    }
}
