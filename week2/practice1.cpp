//practice1.cpp
/* (practice 1) Write a program that continually accepts positive values from the user, 
calculates the square of that value and outputs the results to the console. 
When the user enters '0', execution should stop.
*/

#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Please enter a value: " << abs(-10) << endl; //absolute function to make all value positive
    cin >> value;
    cout << "Your value squared is: " << pow(value, 2) << endl;
    return 0;
}
