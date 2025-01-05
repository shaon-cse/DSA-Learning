#include<iostream>
using namespace std;

int FindPeak(int arr[], int size){
    int first=0;
    int end=size-1;
    while(first<end){
        int mid=first+(end-first)/2;
        if(arr[mid]<arr[mid+1]){
            first=mid+1;
        }
        else{
            end=mid;
        }
    }
    return first;
}

int main(){
    int arr[7]={0,1,2,7,2,1,0};
    int peakIndex=FindPeak(arr, 6);
    cout<<"Peak Index is "<<peakIndex<<endl;
}