#include<iostream>
using namespace std;

void bubble_Sort(int * arr,int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    /* Think And write here */
    int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;

    int  arr[n];

    cout<<"enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_Sort(arr,n);

    cout<<"your sorted elements are : ";
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}