///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    
    bool all_upper = true;
    bool except_first_upper = true;

    for(int i = 0; i < s.size(); i++)
    {
        if(!isupper(s[i]))
        {
            all_upper = false;
        }
    }
    for(int i = 1; i < s.size(); i++)
    {
        if(!isupper(s[i]))
        {
            except_first_upper = false;
        }
    }

    if(all_upper || except_first_upper)
    {
        for(int i = 0; i < s.size(); i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            else{
                s[i] = toupper(s[i]);
            }
        }
    }

    cout << s << endl;

    return 0;
}