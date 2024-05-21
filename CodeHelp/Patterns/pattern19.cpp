/*

E 
D E
C D E
B C D E
A B C D E

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n; i>0; i--)
    {
        char ch='A'+i-1;
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

/*

SIMULATION :

Lets assume n=4

n=4
    i=4; ch=D; j=1; j<=1 is true "Prints D" endl

    i=3; ch=C; j=1; j<=2 is true "Prints C"; ch=D
                    j<=1 is true "prints D"; ch=E endl

    i=2; ch=B; j=1; j<=3 is true "Prints B"; ch=C
                    j<=2 is true "Prints C"; ch=D
                    j<=1 is true "prints D"; ch=E endl

    i=1; ch=A; j=1; j<=4 is true "Prints A"; ch=B
                    j<=3 is true "Prints B"; ch=C
                    j<=2 is true "Prints C"; ch=D
                    j<=1 is true "prints D"; ch=E endl

*/