// practice2.cpp
/* Write a program that continually accepts values from the user, 
determines if the value is a prime number and 
prints the result to the console. 
When the user enters a 0, then execution stops.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int user_input = 0;
    bool prime = 0;

    while (1){
    cout << "Please enter a number " << endl;
    cin >> user_input;
        if (user_input == 0){
            break;
        }
    for (int num = 0; num < user_input; num++){
        if (user_input % num == 0){
            prime = 0;
            }
        if (prime){
            cout << user_input << " is a prime number!" << endl;
            }
        else {
        cout << user_input << " is NOT a prime number!" << endl;
            }
        }
    }
    cout << "Exectution stopped because you entered 0." << endl;
    return 0;

}
