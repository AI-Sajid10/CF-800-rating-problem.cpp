///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>> v[i];

    int max_score = v[0];
    int min_score = v[0];
    int amazing = 0;

    for(int i = 1; i < n; i++)
    {
        if(v[i] > max_score)
        {
            amazing++;
            max_score = v[i];
        }
        else if(v[i] < min_score)
        {
            amazing++;
            min_score = v[i];
        }
    }
    cout<< amazing << endl;
    return 0;
}