#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<map<string,int>> v;

    map<string, int> m;

    m["Rashed"]=75;

    v.push_back(m);
    
    cout<<v[0]["Rashed"];
}