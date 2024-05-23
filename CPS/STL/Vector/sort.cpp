#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={7,2,5,1,3,9};

    cout<<"Before sorting : ";
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
    
    //sorting in increasing order
    sort( v.begin(), v.end());

    cout<<"After sorting Increasing order : ";
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

    //sorting in decreasing order
    sort( v.begin(), v.end(), greater<int>());

    cout<<"After sorting Decreasing order : ";
    for(auto u:v) cout<<u<<" ";
}