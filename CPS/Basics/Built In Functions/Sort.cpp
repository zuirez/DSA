#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    //Taking user input
    for(int i=0; i<n; i++) cin>>arr[i];


    //Sorting in increasing order 
    sort(arr,arr+n);

    //Printing
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    //Sorting in decreasing order
    sort(arr,arr+n, greater<int>());

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}