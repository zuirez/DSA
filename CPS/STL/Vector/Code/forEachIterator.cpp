#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,4,6,8};

    cout<<"Vector : ";
    for (int u : v) 
    {
        cout<<u<<" ";
    }
    cout<<endl;
    
    cout<<"Changed : ";
    for (int u : v) 
    {
        u+=2;
        cout<<u<<" ";
    }
    cout<<endl;

    cout<<"Vector : ";
    //auto detection of data type
    for(auto u : v)
    {
        cout<<u<<" ";
    }
}