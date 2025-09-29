///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> v;   
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
 
        if (find(v.begin(), v.end(), s) == v.end()) {
            cout << "OK" << endl;
            v.push_back(s);
        } else {
            int k = 1;
            string newName;
            while (true) {
                newName = s + to_string(k);
                if (find(v.begin(), v.end(), newName) == v.end()) {
                    cout << newName << endl;
                    v.push_back(newName);
                    break;
                }
                k++;
            }
        }
    }
    return 0;
}