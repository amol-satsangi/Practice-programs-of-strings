//To remove a given character from a string in C++
#include <iostream>
using namespace std;

int main()
{
    char a; 
    cout<<"Enter the character you want to remove from the string";
    cin>>a;
    string str = "my naaaaame is amol satsangi and i am a good boy";
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == a)
        {
            str.erase(i, 1);
            i--;
        }
    }
    cout<<str;


    return 0;
}