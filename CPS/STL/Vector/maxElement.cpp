#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,5,1,7,1,6,4,4,2,9,3,3};

    //max_element function returns an iterator.
    vector<int>:: iterator i= max_element(v.begin(), v.end());

    //to print the element of the address the max_elements return we have to use a *
    cout<<*i;
}