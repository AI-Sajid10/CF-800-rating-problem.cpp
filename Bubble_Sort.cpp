///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // Bubble Sort Algorithm
    for(int i = n-1; i>=0; i--) {
        for(int j = 0; j<i; j++) {
            if(v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
    for(auto x: v) {
        cout << x << " ";
    }
    return 0;
}