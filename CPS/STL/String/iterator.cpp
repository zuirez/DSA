#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Rashedul Islam Shawon";

    string::iterator it;

    for(it=s.begin(); it!=s.end(); it++) cout<<*it;
    cout<<endl;

    //for each loop
    for(auto u:s) cout<<u;
}