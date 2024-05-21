/*

A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}