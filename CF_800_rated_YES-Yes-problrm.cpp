///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s=="YES" || s=="Yes" || s=="yes" || s=="YEs" || s=="yES" || s=="yEs" || s=="YeS" || s=="yeS")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}