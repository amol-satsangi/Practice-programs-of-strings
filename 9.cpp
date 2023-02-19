//Remove the duplicate character of the string in C++
#include <iostream>
using namespace std;

int main()
{
    int freq[26];
    string str = "AMOL SATSANGI";
    for(int i = 0; i < 26; i++)
        freq[i] = 0;

    for(int i = 0; i < str.length(); i++)
        {   if(str[i] == ' ')
                continue;
            else if(freq[str[i]-65] == 0) 
                freq[str[i]-65]++;
            else 
                {
                    str.erase(i, 1);
                    i = i-1;
                }
        }
    cout<<str;
    return 0;
}