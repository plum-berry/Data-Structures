#include "../include/evaluatePost.h"
#include "../include/Stack.h"
#include <cctype>

namespace DSA{
    int evaluatePost(char *buffer)
    {
        int temp1,temp2,i = 0,result; 
        char c;
        Stack<int> stack; 
        while((c = buffer[i]) != '\0')
        {
           if(c == '+' || c == '-' || c == '/' || c == '*') 
            {
                switch(c)
                {
                    case '+':
                        temp1 = stack.pop();
                        temp2 = stack.pop();
                        temp2 += temp1;
                        stack.push(temp2);
                        break;
                    case '-':
                        temp1 = stack.pop();
                        temp2 = stack.pop();
                        temp2 -= temp1;
                        stack.push(temp2);
                        break;
                    case '/':
                        temp1 = stack.pop();
                        temp2 = stack.pop();
                        temp2 /= temp1;
                        stack.push(temp2);
                        break;
                    case '*':
                        temp1 = stack.pop();
                        temp2 = stack.pop();
                        temp2 *= temp1;
                        stack.push(temp2);
                        break;                        
                }
            }else if(std::isdigit(c))
            {
                temp1 = c - '0';
                while(std::isdigit(buffer[i+1]))
                {
                    i++;
                   temp1 =  temp1*10 + (buffer[i] - '0');
                }
                stack.push(temp1);

            }
            i++;
        }
        
        result = stack.pop();

        return result;
    }
}
