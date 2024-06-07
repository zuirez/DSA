#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<pair<int, int>> v;

    v.push_back({6,5});
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({6,1});
    v.push_back({1,9});

    sort(v.begin(), v.end());

    cout<<"Sorting in increasing order : "<<endl;
    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;

    sort(v.rbegin(), v.rend());
    cout<<"Sorting in decreasing order : "<<endl;
    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;

    cout<<"Sorting using array : "<<endl;
    pair<int, int> p[] = {{1,5},{2,3},{1,3},{5,1},{2,9}};

    sort(p, p+5);

    for(auto u:p) cout<<u.first<<" "<<u.second<<endl;
}