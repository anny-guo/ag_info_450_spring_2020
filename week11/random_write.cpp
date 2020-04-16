#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int numbers = rand() % 1000 + 1;

    srand(time(0));

    for (int n = 0; -1000 < n < 1000; n++)   
    {
        numbers = rand() % 1000 + 1;

    }
    return 0;
    
};
