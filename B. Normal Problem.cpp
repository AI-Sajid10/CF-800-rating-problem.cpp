#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int t;
    cin>> t;
    while(t--)
    {
        cin>> s;
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(s[i]=='p')
            {
                cout<< 'q';
            }
            else if(s[i]=='q')
            {
                cout<< 'p';
            }
            else
            {
                cout<< 'w';
            }
        }
        cout<< endl;
    }
 
    return 0;
 
}
