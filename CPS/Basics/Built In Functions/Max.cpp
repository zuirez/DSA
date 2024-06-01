#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Finding maximum of 2 values

    int a=10,b=5;
    cout<<max(a,b)<<endl;


    //Finding maximum value from an array methode 1
    int arr[] = {1,2,5,9,14,28,75};

    //size of arr[]
    int size = sizeof(arr)/sizeof(int); // Sizeof(arr) - it gives the total size of the array in bytes, not the number of elements. 
 
    int *max = max_element(arr,arr+size); //Max_element function returns a pointer to the maximum element.

    cout<<*max<<endl;
    

    //Methode 1 optimized
    int arr2[] = {88,57,1,5,99,48,4,18};

    int size2 = sizeof(arr2)/sizeof(arr[0]);

    auto max2 = max_element(arr2,arr2+size2);

    cout<<*max2<<endl;  



    //BEST WAY
    int arr3[]={50,125,1,110,35,7,40,3};  
    int n = sizeof(arr3)/sizeof(arr3[0]);

    cout<<*max_element(arr3,arr3+n);

}