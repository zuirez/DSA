#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int> temp;

    cout<<"Size of temp : "<<temp.size()<<endl;
    temp=v;

    cout<<"Size of temp after copying : "<<temp.size()<<endl;
    cout<<"temp : ";
    
    for(int i=0; i<temp.size(); i++)
    {
        cout<<temp[i]<<" ";
    }
}