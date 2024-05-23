#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);

    cout<<"Size of vector : "<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;    

    v[1]=100;
    cout<<"Changing index 1 : ";
    cout<<v[1];
}