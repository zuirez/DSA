/*

A 
B B
C C C
D D D D
E E E E E

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch='A';
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}