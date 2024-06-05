#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    //sorting a string
    string s="daecb";
    sort(s.begin(), s.end());
    cout<<s<<endl;

    //sorting with upper case letters
    string s1="BdaeCcbA";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;

    //sorting in decreasing order
    string s2="daecb";
    sort(s2.rbegin(), s2.rend());
    cout<<s2<<endl;

    //checks if a string is sorted or not
    cout<<is_sorted(s2.begin(), s2.end());
}