#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s = "Rashedul Islam Shawon";

    s.erase(remove(s.begin(), s.end(), 'a'), s.end());

    cout<<s;
}