#include<iostream>
#include "Linked.h"

void drawMenu()
{
    std::cout<<"1. PUSH TO STACK"<<std::endl;
    std::cout<<"2. POP FROM STACK"<<std::endl;
    std::cout<<"3. PEEK TOP OF STACK"<<std::endl;
    std::cout<<"4. DISPLAY STACK"<<std::endl;
    std::cout<<"5. CHECK EMPTY"<<std::endl;
    std::cout<<"6. CHECK FULL"<<std::endl;
    std::cout<<"7. EXIT"<<std::endl;
}
int main()
{
    Stack<int> numbers;
    int option;
    int isRunning = true;
    int temp;
    while(isRunning)

    {
        drawMenu();
        std::cout<<"Enter option: ";std::cin>>option;
        switch(option)
        {
            case 1:
                std::cout<<"Enter the element: ";std::cin>>temp;
                numbers.push(temp);
                break;

            case 2:
                std::cout<<numbers.pop() <<std::endl;
                break;
            case 4:
                numbers.display() ;
                break;
            case 5:
                if(numbers.isEmpty())
                    std::cout<<"Stack is empty"<<std::endl;
                else
                    std::cout<<"Stack is not empty"<<std::endl;
                break;
            case 6:
                if(numbers.isFull())
                    std::cout<<"Stack is full"<<std::endl;
                else
                    std::cout<<"Stack is not full"<<std::endl;
                break;
            case 3:
                std::cout<<"Top of the stack: " << numbers.peek()<<std::endl;
                break;
            case 7:
                isRunning = false;             
                break;
            default:
                std::cout<<"INVALID. Try another number"<<std::endl;

        }
    }

    return 0;
}
