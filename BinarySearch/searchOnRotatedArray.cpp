/*You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



Now the array is rotated at some pivot point unknown to you.



For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].



Now, your task is to find the index at which ‘k’ is present in 'arr'.



Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'. 
3. 'arr' can be rotated only in the right direction.


Example:
Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2

Output: 3

Explanation:
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).*/

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

int binarySearch(int arr[], int key, int start, int end){
    int first=start;
    while(first<=end){
        int mid=first+(end-first)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            first=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}

int main(){
    int arr[]={12, 15, 18, 2, 4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    int pivotIndex=findPivotElement(arr, size);
    if(arr[pivotIndex]<=key<=arr[size-1]){
        int keyIndex=binarySearch(arr, key, pivotIndex, size-1);
        cout<<"Key found at index "<<keyIndex<<endl;
        
    }
    else{
        int keyIndex=binarySearch(arr, key, 0, pivotIndex-1);
        cout<<"Key found at index "<<keyIndex<<endl;

    }

}