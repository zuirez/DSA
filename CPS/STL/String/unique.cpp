#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    //finding unique values (GIVES GARBAGE)
    string s="BdaeCcAbA";
    sort(s.begin(), s.end());
    unique(s.begin(), s.end());
    cout<<s<<endl;


    //finding the unique values (No Garbage)
    string s1="BdaeCcAbA";
    sort(s1.begin(), s1.end());
    int size = unique(s1.begin(), s1.end()) - s1.begin();
    
    for(int i=0; i<size; i++) cout<<s1[i];
    cout<<endl;
}