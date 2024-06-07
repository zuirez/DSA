#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    //lexicographically sorting of string

    vector<string> v;
    v.push_back("Rashed");
    v.push_back("Shawon");
    v.push_back("Riad");
    v.push_back("hasan");
    v.push_back("Nijhum");
    v.push_back("nahin");
    v.push_back("Imon");

    sort(v.begin(), v.end());

    for(auto u:v) cout<<u<<endl;
}