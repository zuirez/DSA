/*

1 
2 3
3 4 5
4 5 6 7

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
}