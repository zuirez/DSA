#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    //Initializing using make_pair
    pair<int, int> p;

    p=make_pair(2,3);
    
    cout<<p.first<<" "<<p.second<<endl;


    //increment
    p.first++;
    cout<<p.first<<" "<<p.second<<endl;


    //Initializing using second braces
    pair<int, int> q;

    q={5,10};
    cout<<q.first<<" "<<q.second<<endl;


    pair<string, vector<int>> r;

    r={"Rashed", {1,2,3,4,5}};

    cout<<r.first<<endl;
    for(auto u:r.second) cout<<u<<" ";
    cout<<endl;
}