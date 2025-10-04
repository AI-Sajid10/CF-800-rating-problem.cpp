///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,q;
    cin>> a >> b>> q;
    long long ans;
    
    if(q % 3 == 1) ans = a;
    else if(q % 3 == 2) ans = b;
    else ans = a ^ b;

    cout << ans << endl;
    return 0;
}