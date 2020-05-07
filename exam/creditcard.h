#include <iostream>
#include <string>

using namespace std;

class CreditCard : public Account
{
    public:
    long int cardnumber;
    string last10charges[10];

    CreditCard();
    CreditCard(string name, long int taxID, double balance) {
        new Account(name, taxID, balance);
        void doCharge(string name, double amount);
        double makePayment(double amount);
        void display();
    }
}
