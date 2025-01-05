#include<iostream>

using namespace std;    

int findPivotElement(int arr[], int size){
    int first=0;
    int end=size-1;
    while(first<end){
        int mid=first+(end-first)/2;
        if(arr[mid]>arr[0]){
            first=mid+1;
        }
        else{
            end=mid;
        }
    }
    return first;
}

int main(){
    int arr[] = {5,6,7,8,9,10,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int pivotIndex=findPivotElement(arr, size);
    cout<<"Pivot Element Index: "<<pivotIndex<<endl;
    cout<<"Pivot Element: "<<arr[pivotIndex]<<endl;
}