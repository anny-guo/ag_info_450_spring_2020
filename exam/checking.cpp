#include <iostream>
#include "account.h"
#include "checking.h"

using namespace std;

void Checking::writeCheck(int checkNum, double amount){
    Checking check;
    cout >> "Check number: " >> checkNum >> "Amount: $" << amount;
    if (amount <= 0){
        cout << "You cannot enter a negative amount.";
    }
    check.balances -= amount; //deducting check written to balance
} 

void Checking::display(){
    cout << "Name: " << accName;
    cout << "Tax ID: " << taxIDs;
    cout << "Checking Balance: " << check.balances << endl; // to differentiate for Checking Balance on main
}
