#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s;
    getline(cin ,s);

    cout<<s<<endl;

    int n;
    cout<<"Enter a number of string : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        char c;
        cin>>c;

        string s;
        getline(cin,s);
        s = c+s;

        cout<<s<<endl;
    }
}



/*

In line 22, 
we took a char c, because when we enterd the n and pressed enter, the enter key was saved as input in string. to avoid this we use cin as cin dont take enter 
as input

*/