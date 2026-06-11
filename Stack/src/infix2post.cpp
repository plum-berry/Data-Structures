#include "../include/Stack.h" 
#include<cctype>

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
            if(!stack.isEmpty() && precedence(stack.peek())>=precedence(c))
            {
                output[j++] = stack.pop();
                stack.push(c);
            }else{
                stack.push(c);
            }
            output[j++] = ' ';
        }
        else {
            output[j++] = c;

            if(!std::isdigit(buffer[i+1]))
                output[j++] = ' ';
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
