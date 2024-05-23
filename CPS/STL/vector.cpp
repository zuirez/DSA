#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2={3,5,7,9};

    //Adding 5,10,15,20 in vectors index
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);

    //The size of a vector
    cout<<"Size of vector : "<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;    

    //Changing an existing index of vector v
    v[1]=100;
    cout<<"Changing index 1 : ";
    cout<<v[1];

    //Printing vector v2
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<endl;
    }
}