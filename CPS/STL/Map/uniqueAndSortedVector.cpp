// Unique and sorted vector using map

#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<int> v{2,3,4,5,1,2,5,4,1,9,6,2,7,3,8};

    map<int, bool> m;

    for(auto u:v) m[u]=1;

    for(auto u:m) cout<<u.first<<" "<<u.second<<endl;
}