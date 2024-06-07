#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<pair<int, int>> v;

    v={{4,145},{3,400},{4,550},{1,68}};
    
    for(int i=0; i<v.size(); i++)
    {
        v[i].first = v[i].first*-1;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
    {
        v[i].first = v[i].first*-1;
    }

    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
}