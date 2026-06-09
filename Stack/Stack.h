#pragma once
#include<iostream>

#define SIZE 3

template<typename T> class Stack{

    private:
        T array[SIZE];
        int TOS;
        int No_of_elements;

    public:
        
    Stack()
    {
       TOS = -1;
        No_of_elements = 0;
    }

    void push(T value)
    {
      if(TOS == SIZE - 1) 
        {
            std::cout<<"Stack Overflow!!"<<std::endl;
        }
      else{
            TOS++;
            No_of_elements++;
            array[TOS] = value;
        }
    }

    T pop()
    {
        if(TOS == -1)
        {
            std::cout <<"Stack Underflow!!"<<std::endl;
            return T{};
        }
        else{
            TOS--;
            return array[TOS+1];
        }
    }

    void display()
    {
        if(TOS == -1)
        {
            std::cerr << "Stack is empty.\n";
        }else{
            for(int i = TOS;i>=0;i--)
        {
                std::cout << array[i]<<std::endl;
            }
        }
    }

    int size(){return No_of_elements;}

    T peek()
    {
        if(TOS == -1)
        {
            std::cout<<"Stack underflow!!"<<std::endl;
            return T{};
        }
        else{
            return array[TOS];
        }
    }
    
    bool isFull(){return TOS == SIZE-1;}
    bool isEmpty(){return TOS == -1;}

};

