//Check if the given string is palindrome or not in C++
#include <iostream>
using namespace std;

int main()
{
    string str = "amoloma";
    int i;
    for(i = 0; i < str.length()/2; i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            cout<<"the string is not palindrome";
            break;
        }       
    }
    if(i == str.length()/2)
        cout<<"the string is palindrome";
    return 0;
}