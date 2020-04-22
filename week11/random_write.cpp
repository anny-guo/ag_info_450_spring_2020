#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n = 0;
    int min = -10000;
    int max = 10000;
    int n1 = 0;
    srand(time(NULL));

    ofstream out("randoms.txt");
    if (!out)
    {
        cout << "Cannot open file." << endl;
        return 1;
    }

    for (int n1 = 0; n1 < 1000; n1++)   
    {
        int n = rand() % 19999 - 9999;
        if (n >= 10000 || n <= -10000)
        {
            cout << "ERROR WHILE GENERATING NUMBER: " << n << endl;
            break;
        }

    if (n < min) min = n;
    if (n > max) max = n;
    if (n1 >= 1000) continue;
    out << n << endl;
    }
    out.close();
    return 0;
    
};
