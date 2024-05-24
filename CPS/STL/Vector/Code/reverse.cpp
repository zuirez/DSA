#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,8,5,7};

    cout<<"Vector : ";
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
    
    cout<<"Vector in reverse : ";
    reverse(v.begin(), v.end());
    for(auto u:v) cout<<u<<" ";
}