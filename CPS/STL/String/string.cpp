#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Initialization of string
    string str;
    str = "Rashed";

    string str2 = "Islam";
    string str3("Shawon.");


    //Character concatenation
    str += 'u';
    str += 'l';
    str += ' ';

    str2 += " ";

    //Printing
    cout<<str+str2+str3<<endl;
    cout<<str.size()<<endl;

    //Printing like an array 
    cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<" "<<str[3]<<endl;

    //Assign a string
    str = str3;
    
    cout<<str;
}