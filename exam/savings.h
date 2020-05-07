#include <iostream>
#include <string>

using namespace std;

class Savings : public Account
{
    Savings();
    Savings(string name, long int taxID, double balance) {
        new Account(name, taxID, balance);
        double doWithdraw(double amount);
        void display();
    }
}
