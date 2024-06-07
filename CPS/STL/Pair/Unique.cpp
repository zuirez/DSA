#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<pair<string, int>> v;

    v.push_back({"Rashed", 75});
    v.push_back({"Riad", 20});
    v.push_back({"Maruf", 15});
    v.push_back({"Anik", 10});
    v.push_back({"Rashed", 90});
    v.push_back({"Riad", 25});
    v.push_back({"Maruf", 15});
    v.push_back({"Anik", 10});

    sort(v.begin(), v.end());

    cout<<"Sorted elements : "<<endl;
    cout<<endl;

    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
     cout<<endl;

    int size = unique(v.begin(), v.end()) - v.begin();

    cout<<"Unique elements : "<<endl;
    cout<<endl;
    for(int i=0; i<size; i++) cout<<v[i].first<<" "<<v[i].second<<endl;
}