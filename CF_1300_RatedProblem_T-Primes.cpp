///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<ll> v(t);
    for(int i = 0; i < t; i++)
    {
        cin >> v[i];
    }

    int n = 1000000;
    vector<int> prime(n + 1, 1);
    prime[0] = 0;
    prime[1] = 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(prime[i] == 1)
        {
            for(int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    vector<ll> tprime;
    for(int i = 2; i <= n; i++)
    {
        if(prime[i] == 1)
        {
            tprime.pb(1LL * i * i);
        }
    }

    for(int i = 0; i < t; i++)
    {
        if(binary_search(tprime.begin(), tprime.end(), v[i]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
