#include "include/DataStructure.h"
#include<iostream>
using namespace std;

int main()
{
    char input[50];
    //char output[50];
    cin.getline(input,50);
    
    //DSA::infix2postfix(input,output) ;
    DSA::strRev(input);
    cout << input << endl;

    return 0;


}
