#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    //declearation of a pair
    pair<int, int> p;

    //Initializing values into pair
    p.first = 5;
    p.second = 10;

    //printing pair
    cout<<p.first<<endl;
    cout<<p.second<<endl;


    //we can take any data type in pair
    pair<string, vector<int>> q;

    q.first = "Rashed";
    q.second = {1,2,3,4,5};

    cout<<q.first<<endl;
    
    for(auto u:q.second) cout<<u<<" ";
    cout<<endl;
}