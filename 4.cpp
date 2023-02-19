//How to count the vowels and consonants in a string
#include <iostream>
using namespace std;

int main()
{
    string str = "Amol Satsangi";
    int c = 0, v = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U')
            v++;
        else
            c++;
    }
    cout<<"Consonants "<< c << endl << "Vowels "<< v;
    return 0;
}