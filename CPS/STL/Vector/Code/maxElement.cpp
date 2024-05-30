#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={3,5,1,7,1,6,4,4,2,9,3,3};

    //Max_element function returns an iterator.
    vector<int>:: iterator i= max_element(v.begin(), v.end());

    //To print the element of the address the max_elements return we have to use a *
    cout<<*i<<endl;


    //Another way to find max
    vector<int> v2={3,5,1,7,1,6,4,4,2,9,3,3};

    auto max = max_element(v2.begin(),v2.end());
    cout<<*max<<endl;


    //BEST WAY TO FIND MAX
    vector<int> v3 = {88,57,1,5,99,48,4,18};
    cout<<*max_element(v3.begin(),v3.end());
}