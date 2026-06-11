#ifndef DSA_INFIX2PREFIX_H
#define DSA_INFIX2PREFIX_H

#include "infix2post.h"
#include "stringReverse.h"
inline void swapbrackets(char* input)
{
    char c;
    int i = 0;
while((c = input[i]) != '\0')
    {
        if(c == '(')
        {
            input[i] = ')';
        }

        else if(c == ')')
        {
            input[i] = '(';
        }
        i++;

    }
}
namespace DSA{


inline void infix2prefix(char* input,char* output)
{
    strRev(input);
    swapbrackets(input);
    infix2postfix(input,output);
    strRev(output);
}

}
    
#endif
