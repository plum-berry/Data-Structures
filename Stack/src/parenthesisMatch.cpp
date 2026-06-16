#include "../include/Stack.h"

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
    if(!stack.isEmpty())
        status = false;

    return status; 
}

}
