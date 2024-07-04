#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<long long> v{1, 259494944, 549949494, 1, 1, 259494944, 4884, 259494944, 849, 259494944};

    map<long long, int> m;

    for(auto u:v) m[u]++;

    cout<<"Frequency of 259494944 : "<<m[259494944]<<endl;

    cout<<"Frequency of all element..."<<endl;

    for(auto u:m) cout<<u.first<<" "<<u.second<<endl;
}