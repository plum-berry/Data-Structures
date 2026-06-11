#include "include/DataStructure.h"
#include<iostream>
using namespace std;

int main()
{
    char input[50];
    //char output[50];
    cin.getline(input,50);
    if(DSA::parenthesisMatch(input))
        cout<<"valid"<<endl;
    else
        cout<<"invalid"<<endl;

    return 0;


}
