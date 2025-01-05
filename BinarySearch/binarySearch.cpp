#include<iostream>

using namespace std;

int binarySearch(int arr[], int key, int size){
    int first=0;
    int end=size-1;
    while(first<=end){
        int mid=(first+end)/2;
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
    int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};

    int key;
    cout<<"Enter the value you want to search: ";
    cin>>key;
    int index=binarySearch(arr, key, 12);
    if (index != -1) {
        cout<<"The "<<key<<" found at index "<<index<<"."<<endl;
    } else {
        cout<<"The "<<key<<" not found in the array."<<endl;
    }



}