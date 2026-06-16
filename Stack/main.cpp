#include<DataStructure.h>
#include<iostream>
#include <ostream>
using namespace std;

int main()
{
    char buffer[50];
    cin.getline(buffer,50);
    DSA::strRev(buffer);
    cout << buffer << endl;
    return 0;
}
