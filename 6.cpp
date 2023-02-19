//to print the first non repeated character in the string in C++ 
#include <iostream>
using namespace std;

int main()
{
    int freq[26];
    string str = "AMOL SATSANGI";
    for(int i = 0; i < 26; i++)
        freq[i] = 0;

    for(int i = 0; i < str.length(); i++)
        freq[str[i]-65]++;
    cout<<"The first non repeated character in the string is:  "<<endl;
    for(int i = 0; i < str.length(); i++)
    {
        if(freq[str[i]-65] == 1)
            {
                cout<<str[i];
                break;
            }
    }
    return 0;
}