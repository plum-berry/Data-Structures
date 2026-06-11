#include<DataStructure.h>
#include<iostream>
using namespace std;

int main()
{
    char input[50];
    char output[50];
    cin.getline(input,50);
    DSA::infix2postfix(input,output);
    int result = DSA::evaluatePost(output);
    cout<<result<<endl;
    return 0;
}
