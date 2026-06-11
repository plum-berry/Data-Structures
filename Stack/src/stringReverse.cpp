#include "../include/Stack.h"

namespace DSA{

    void strRev(char* str)
    {
        char c;
        int i = 0;
        Stack<char> stack;
        while((c = str[i++]) != '\0')
        {
            stack.push(c);
        }
        
        i = 0;
        while(str[i] != '\0') 
        {
            str[i] = stack.pop();
            i++;
        }
    }

}


