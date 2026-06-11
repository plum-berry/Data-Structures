#include<DataStructure.h>
#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char input[20];
    char output[20];
    cin.getline(input,20);
    DSA::infix2postfix(input,output);
    cout<< output <<endl;
    return 0;
}
