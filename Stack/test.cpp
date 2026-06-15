#include<DataStructure.h>
#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int main()
{
    ifstream file("main.cpp")  ;

    if(!file.is_open())
    {
        cerr << "Error Opening File";
        return 1;
    }
    string s;
    bool status;
    while(getline(file,s))
        cout << s <<endl;


    file.close();
    return 0;
    /*
    char input[20];
    char output[20];
    cin.getline(input,20);
    DSA::infix2postfix(input,output);
    cout<< output <<endl;
    */
}
