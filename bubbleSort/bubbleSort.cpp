#include<iostream>
using namespace std;

int main(){
    int arr[6]={3,7,5,1,11,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}