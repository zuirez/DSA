#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,5,1,6,4,4,2,9,3,3};

    //index of the maximum number
    int i= max_element(v.begin(), v.end()) - v.begin();

    cout<<i;
}