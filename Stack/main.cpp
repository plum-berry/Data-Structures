#include<DataStructure.h>
#include<iostream>
using namespace std;

int main()
{
    char input[50];
    char output[50];
    cin.getline(input,50);
    int result = DSA::evaluateInfix(input);
    cout<<result<<endl;
    return 0;
}
