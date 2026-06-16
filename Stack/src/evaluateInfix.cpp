#include "../include/evaluateInfix.h"
#include "../include/Stack.h"
#include<cctype>

int precedence(char op)
{
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

int solve(int temp1,int temp2,char op)
{
    int result;
    switch(op)
    {
        case '+':
            result = temp2 + temp1;
            break;
        case '-':
            result = temp2 - temp1;
            break;
        case '*':
            result = temp2 * temp1;
            break;
        case '/':
            result = temp2 / temp1;
            break;
    }
    return result;
}

namespace DSA{
   int evaluateInfix(char* buffer) 
    {
        Stack<int> operand;
        Stack<char> optor;
        char c;
        int temp1,temp2,result;
        int i = 0;
        while((c = buffer[i]) != '\0')
        {
            if(std::isdigit(c))
            {
                int temp = c - '0';
               while(std::isdigit(buffer[i + 1])) 
                {
                    i++;
                    temp = temp*10 + (buffer[i]-'0');
                }
                operand.push(temp);
            }
            else if(c == '(')
            {
                optor.push(c);
            }
            else if( c == ')')
            {
                while(!operand.isEmpty() && optor.peek() != '(' )
                {
                    temp1 = operand.pop();
                     temp2 = operand.pop();
                    char op = optor.pop();
                    operand.push(solve(temp1,temp2,op));
                }
                optor.pop();
            }
            else if(c == '+' || c == '-' || c == '*' || c == '/') 
            {
                if(!optor.isEmpty() && precedence(optor.peek()) >= precedence(c))
                {
                     temp1 = operand.pop();
                     temp2 = operand.pop();
                    char op = optor.pop();
                    operand.push(solve(temp1,temp2,op));
                }
                optor.push(c);
            }
            i++;
        }
        while(operand.size()>1 && !optor.isEmpty())   
        {
                temp1 = operand.pop();
                     temp2 = operand.pop();
                    char op = optor.pop();
                    operand.push(solve(temp1,temp2,op));
        }
         
        return operand.pop();
    }
}
