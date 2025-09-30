///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> v(n);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin>> v[i];
        sum += v[i];
    }
    int r;
    if(n % 2 != 0 || sum % 2 != 0){
        r = (sum / 4.0);
        cout<< r + 1 << endl;
    } 
    else{
        cout<< ceil(sum / 4.0) << endl;
    }
    return 0;

}