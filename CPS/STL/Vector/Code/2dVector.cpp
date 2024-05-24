#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;

    vector<int> a1={2,4,6,8,10};
    vector<int> a2={1,3,5,7,9};

    v.push_back(a1);
    v.push_back(a2);

    for(auto u:v)
    {
        for(auto g:u) cout<<g<<" ";
        cout<<endl;
    }
}