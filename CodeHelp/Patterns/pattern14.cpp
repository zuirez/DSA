/*

A B C D E 
B C D E F
C D E F G
D E F G H
E F G H I

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        char ch = 'A'+i-1;
        for(int j=1; j<=n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}