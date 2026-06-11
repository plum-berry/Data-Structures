#ifndef DSA_PARENTHESIS_MATCH_H
#define DSA_PARENTHESIS_MATCH_H

#include "Stack.h"
namespace DSA{


bool parenthesisMatch(char* buffer)
{
    char c;
    int i =0;
    Stack<char> stack;
    bool status = true;
    while((c = buffer[i]) != '\0')
    {
        if(c == '(')
        {
            stack.push(c);
        }
        else if(!stack.isEmpty() && (c == ')'))
        {
            if(stack.peek() == '(')
                stack.pop();
        }

        else if(stack.isEmpty() && (c == ')'))
        {
            status = false;
        }
        i++;
    }

    return status; 
}

}
#endif
