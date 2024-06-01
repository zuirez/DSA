#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Finding minimum of 2 values

    int a=5, b=4;
    cout<<min(a,b)<<endl;


    //Finding minimum from an array 
    int arr[] = {10,7,19,2,45,50,90};

    int size = sizeof(arr)/sizeof(arr[0]);

    auto min = min_element(arr, arr+size);

    cout<<*min<<endl;


    //BEST WAY
    int arr2[]={10,7,1,19,2,45,50,90};
    int n = sizeof(arr2)/sizeof(arr2[0]);

    cout<<*min_element(arr2,arr2+n);
}