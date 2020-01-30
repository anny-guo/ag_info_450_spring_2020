// practice2.cpp
/* Write a program that continually accepts values from the user, 
determines if the value is a prime number and 
prints the result to the console. 
When the user enters a 0, then execution stops.
*/

#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Please enter a value: " << endl;
    cin >> value; //accepts values from user
    if (value % 1 && value % value ==0 ) //determine if value is prime
    {
        cout << "Your value: " << endl; //print result
    }
    return 0;
}