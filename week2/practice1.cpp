//practice1.cpp
/* (practice 1) Write a program that continually accepts positive values from the user, 
calculates the square of that value and outputs the results to the console. 
When the user enters '0', execution should stop.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int user_input = 0;
    while (user_input > 0){
        cout << "Please enter a positive value: " << endl;
        cin >> user_input;
        cout << user_input << "squared is " << pow (user_input, 2) << endl;
            if (user_input == 0){
                break;
                cout << "Execution stopped because you entered 0." << endl;
                }
        }
    return 0;
};
