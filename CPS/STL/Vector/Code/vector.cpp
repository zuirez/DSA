#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Creating vectors
    vector<int> v;
    vector<int> v2={3,5,7,9};
    vector<int> v3(10);

    //Adding 5,10,15,20 in vectors index
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);

    //The size of a vector
    cout<<"Size of vector 1 : "<<v.size()<<endl;
    cout<<"Vector 1 : ";
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<endl;    

    //Changing an existing index of vector v
    v[1]=100;
    cout<<"Changing index 1 : ";
    cout<<v[1]<<endl;

    //Printing vector v2
    cout<<"Size of vector 2 : "<<v2.size()<<endl;
    cout<<"Vector 2 : ";
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    //Printing vector v3
    cout<<"Size of vector 3 : "<<v3.size()<<endl;
    cout<<"Vector 3 : ";
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
}