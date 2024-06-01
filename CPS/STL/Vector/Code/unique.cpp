#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,5,1,7,1,6,4,4,2,9,3,3};

    //sorting
    sort(v.begin(), v.end());

    //function to find unique elements
    unique(v.begin(), v.end());

    //printing the vector
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}