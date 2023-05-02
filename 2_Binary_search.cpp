#include<iostream>
using namespace std;


int Binary_search(int * arr,int n,int key);

int main()
{
    /* Think And write here */
    int n,key,ans;

    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key : ";
    cin>>key;
    
    ans = Binary_search(arr,n,key);
    switch(ans){
        case -1:
            cout<<"your element is not present in the array"<<endl;
            break;
        default:
            cout<<"your elemet at index "<<ans<<endl;
    }
    
    return 0;
} 

int Binary_search(int * arr,int n,int key){
    int s = 0;
    int e = n;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    
    return -1;
}