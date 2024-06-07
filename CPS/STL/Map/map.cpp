#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    map<string, int> a;

    a["Rashed"]= 75;
    a["Maruf"]=20;
    a["Anik"]=10;

    cout<<a["Rashed"]<<" "<<a["Maruf"]<<" "<<a["Anik"]<<" "<<endl;


    //default values are set, if no value is initialized
    map<string, int> b;

    cout<<a["rashed"]<<endl;
}