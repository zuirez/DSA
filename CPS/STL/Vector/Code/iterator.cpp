#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,4,6,8,10};

    vector<int>::iterator a;

    cout<<"Vector : ";
    for(a=v.begin(); a!=v.end(); a++)
    {
        cout<<*a<<" ";
    }
}