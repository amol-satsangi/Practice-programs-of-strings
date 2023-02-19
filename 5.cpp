//Print the frequency of A to Z in C++
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
    cout<<"The frequency of the characters is "<<endl;
    for(int i = 0; i < 26; i++)
        if(freq[i] != 0)
            cout<<char(i+65)<< " "<< freq[i]<<endl;

    return 0;
}