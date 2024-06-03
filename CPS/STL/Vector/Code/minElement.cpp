#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={10,7,19,2,45,50,90};

    auto min = min_element(v.begin(),v.end());

    cout<<*min<<endl;


    //BEST WAY TO FIND MIN
    vector<int> v3 = {88,57,1,5,99,48,4,18};
    cout<<*min_element(v3.begin(),v3.end());
}