//Print the longest word in the string in C++
#include <iostream>
using namespace std;

int main()
{
    string str = "my name is amol satsangi and i am a good boy";
    int stid = 0, endid = 0, wrdleg = 0, lngwrd = 0, lngid = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {  
            endid = i-1;
            wrdleg = 1+ endid - stid;
            if(lngwrd < wrdleg)
            {
                lngid = stid;
                lngwrd = wrdleg;
            }

            stid = i+1;
        }

    }
    cout<<"length of the longest word is "<<lngwrd<<endl;
    cout<<str.substr(lngid, lngwrd);


    return 0;
}