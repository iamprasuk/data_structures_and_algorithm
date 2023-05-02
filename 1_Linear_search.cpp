#include<iostream>
using namespace std;

int Linear_search(int * arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}

int main()
{
    /* Think And write here */
    int n,key,ans;

    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key : ";
    cin>>key;

    ans = Linear_search(arr,n,key);
    switch(ans){
        case 0:
            cout<<"your element is not present in the array"<<endl;
            break;
        default:
            cout<<"your elemet at index "<<ans<<endl;
    }
    return 0;
}