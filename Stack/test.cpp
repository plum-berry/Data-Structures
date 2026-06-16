#include<DataStructure.h>
#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

void move(int disks,char source,char destination,char auxillary)
{
    if(disks == 1)
        cout << "Move from " << source << " to "<<destination<<endl;
    else{
        move(disks-1,source,auxillary,destination);
        move(1,source,destination,auxillary);
        move(disks-1,auxillary,destination,source);
    }
    return;
}
int main()
{
    move(5,'A','C','B');
    return 0;
}
