#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++) 
    {
        int a; 
        cin>>a; 
        v.push_back(a);
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}