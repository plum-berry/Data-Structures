#ifndef DSA_INFIX2POST_H
#define DSA_INFIX2POST_H

#include "Stack.h"

int precedence(char op)
{
    if (op == '*' || op == '/'){return 2;}
    if(op == '+' || op == '-'){return 1;}
    return 0;
}
namespace DSA{


void infix2postfix(char* buffer,char* output)
{
    Stack<char> stack;
    int i=0,j=0;
    char c;
    while((c = buffer[i])!='\0')
    {
        if(c == '(')
        {
            stack.push(c);
        }
        else if(c == ')')
        {
            while(!stack.isEmpty() && stack.peek() != '(')
            {
                output[j++] = stack.pop();
            }
            stack.pop();
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/')
        {
            if((!stack.isEmpty() && precedence(stack.peek()))>=precedence(c))
            {
                output[j++] = stack.pop();
                stack.push(c);
            }else{
                stack.push(c);
            }
        }
        else {
            output[j++] = c;
        }
        i++;
    }
    
    while(!stack.isEmpty())
    {
        output[j++] = stack.pop();
    }
    output[j] = '\0';   
}
}
#endif
