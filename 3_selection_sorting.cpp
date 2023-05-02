#include<iostream>
using namespace std;

void selection_Sort(int * arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
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

    selection_Sort(arr,n);

    cout<<"your sorted elements are : ";
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}