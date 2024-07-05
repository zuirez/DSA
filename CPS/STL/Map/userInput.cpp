#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    map<string,int>m;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string s;
        int n;
        cin>>s>>n;

        m[s]=n;
    }

    for(auto u:m) cout<<u.first<<" "<<u.second<<endl;
}