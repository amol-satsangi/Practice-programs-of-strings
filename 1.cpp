// How to reverse a string in C++
#include <iostream>
using namespace std;

int main()
{
    string str = "amol satsangi\n";
    // string str;
    cout<< str;
    for(int i = 0; i < str.length()/2; i++)
    {
        char temp = str[i];
        str[i] = str[str.length()-1-i];
        str[str.length()-1-i] = temp;
    }

    cout<< str;

    return 0;
}