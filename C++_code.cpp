//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ofstream fout;
    fout.open("WhoAreYou.txt");
    while(1){
        getline(cin,s);
        if(s == "-1") break;
        fout<< s<< endl;
    }
    return 0;
}