#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5};
    
    cout<<"Size of vector before resize : "<<v.size()<<endl;

    v.resize(10);

    cout<<"Size of vector after resize : "<<v.size();
}