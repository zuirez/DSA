#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,5,1,7,1,6,4,4,2,9,3,3};

    //sorting
    sort(v.begin(), v.end());

    //Only number of unique elements (excluding the garbage value)
    int size = unique(v.begin(), v.end()) - v.begin();

    //number of unique elements
    cout<<size<<endl;

    //printing the unique elements
    for(int i=0; i<size; i++) cout<<v[i]<<" ";
}