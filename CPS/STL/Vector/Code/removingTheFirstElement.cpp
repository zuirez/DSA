#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={5,4,7,8,9,10};

    //reversing the vector
    reverse(v.begin(), v.end());
    
    //printing the reversed vector
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

    
    cout<<v.back()<<endl;; //printing the last element of the vector (the first element)

    v.pop_back(); //removing the last element of the vector (the first element)
    
    cout<<v.back()<<endl;;
    v.pop_back();

    cout<<v.back()<<endl;;
    v.pop_back();
}