#include<iostream>
#include<algorithm>
using namespace std;
string decTOBin(int n){
    string bin = "";
    while(n > 0){
        int bit = n%2;
        bin.push_back('0' + bit);
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
int main()
{
    int n = 10;
    cout<< decTOBin(n);
    return 0;
}
