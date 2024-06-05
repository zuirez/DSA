#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    
    string s,r;
    cin>>s;
    r=s;
    
    reverse(r.begin(), r.end());

    if(s==r) cout<<"Palindrom";
    else cout<<"Not Palindrom";
}