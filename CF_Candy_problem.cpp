///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        int n,r;
        cin>> n;
        if(n % 2 != 0){
            r = n / 2;
            cout<< r << endl;
        }else{
            r = (n / 2) - 1;
            cout<< r << endl;
        }
    }
    return 0;
}