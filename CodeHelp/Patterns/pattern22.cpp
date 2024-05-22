/*

*****
 ****
  ***
   **
    *

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=i-1; j>0; j--)
        {
            cout<<" ";
        }
        for(int k=n-i+1; k>0; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}