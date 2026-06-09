#include "Linked.h"
#include <iostream>
#include<cctype>
using namespace std;

int main()
{
    char buffer[20];
    char output[20];
    Stack<char> stack;
    cin.getline(buffer,20);
    int i,j=0;
    for( i = 0;buffer[i]!= '\0';i++)
        if(isdigit(buffer[i]))
        {
           output[j] = buffer[i];
            j++;
            output[j] = ' ';
            j++;
        }
        else{
            stack.push(buffer[i]);
        }
    while(!stack.isEmpty())
    {
        output[j++] = stack.pop();
        output[j++] = ' ';
    }
    output[j] = '\0';
    cout << output<<endl;
    return 0;
}
