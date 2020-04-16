#include <iostream>
#include <fstream>

using namespace std;

int main()
{
ofstream randoms("randoms.txt");
    if (!randoms){
        cout << "Cannot open file." << endl;
        return 1;
    }

    randoms << "This is a random text file." << endl; 
    
    randoms.close();

    return 0;
};
