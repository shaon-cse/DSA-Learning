#include<iostream>

using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the value of array of index "<<i<<" :";
        cin>>arr[i];
    }
    cout<<"Your entered array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

