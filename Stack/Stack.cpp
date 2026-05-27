#include<iostream>
#include "Stack.h"

void drawMenu()
{
    std::cout<<"-----------------------"<<std::endl;
    std::cout<<"MAIN MENU"<<std::endl;
    std::cout<<"-----------------------"<<std::endl;
    std::cout<<"1. PUSH TO STACK"<<std::endl;
    std::cout<<"2. POP FROM STACK"<<std::endl;
    std::cout<<"3. DISPLAY STACK"<<std::endl;
    std::cout<<"4. CHECK IF EMPTY"<<std::endl;
    std::cout<<"5. CHECK IF FULL"<<std::endl;
    std::cout<<"6. PEEK TOP OF STACK"<<std::endl;
    std::cout<<"7. EXIT"<<std::endl;
    std::cout<<"-----------------------"<<std::endl;
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
                std::cout<<"Enter the element to push: ";std::cin>>temp;
                numbers.push(temp);
                break;

            case 2:
                numbers.pop() ;
                break;
            case 3:
                numbers.display() ;
                break;
            case 4:
                if(numbers.isEmpty())
                    std::cout<<"Stack is empty"<<std::endl;
                break;
            case 5:
                if(numbers.isFull())
                    std::cout<<"Stack is full"<<std::endl;
                break;
            case 6:
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
