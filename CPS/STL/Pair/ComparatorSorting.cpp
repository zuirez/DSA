#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

bool cmp (const pair<int, int> &p1, const pair<int, int> &p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return 0;
}

int main()
{
    optimize();

    vector<pair<int, int>> v;

    v={{4,145},{3,400},{4,550},{1,68}};

    sort(v.begin(), v.end(), cmp);

    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
}