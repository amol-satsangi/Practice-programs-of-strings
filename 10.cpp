//To print the maximum occured character in the string 
#include <iostream>
using namespace std;

int main()
{
    int freq[26];
    char maxfeq = 'A';
    string str = "AMOL SATSANGI";
    for(int i = 0; i < 26; i++)
        freq[i] = 0;

    for(int i = 0; i < str.length(); i++)
    {   if(str[i] == ' ')
            continue;
        freq[str[i]-65]++;
        if(freq[str[i]-65] > freq[maxfeq-65])
        {
            maxfeq = str[i];
        }
    }
    
    
    cout<<"The character with maximum frequency is "<<maxfeq<<endl;
    return 0;
}