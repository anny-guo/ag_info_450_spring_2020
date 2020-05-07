#include <iostream>
#include <string>

using namespace std;

class Checking : public Account
{
    private:
      int last10checks[10];

    public:
    Checking();
    Checking(string name, long int taxID, double balance) {
        new Account(name, taxID, balance);
    void writeCheck(int checkNum, double amount)
    void display();
    }
}
