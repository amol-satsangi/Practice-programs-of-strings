//How to check if string contain only digit in C++
#include <iostream>
using namespace std;

int main()
{
    string str = "amol satsangi";
int i;
    for(i = 0; i < str.length(); i++)
    {
        if(isalpha(str[i]))
        {
            cout<<"The string contain some alphabate too";
            break;
        }
    }
    if(i == str.length())
        cout<<"The string contain only digit";

}