#include<iostream>
using namespace std;

int main(){
    int arr[6]={2,42,1,6,14,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}