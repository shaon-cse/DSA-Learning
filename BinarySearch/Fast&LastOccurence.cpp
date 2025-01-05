#include<iostream>

using namespace std;

int firstOccurence(int arr[], int key, int size){
        int first=0;
        int end=size-1;
        int ans=-1;
        while(first<=end){
            int mid=first+(end-first)/2;
            if(key==arr[mid]){
                ans=mid;
                end=mid-1;
            }
            else if(key<arr[mid]){
                end=mid-1;
            }
            else{
                first=mid+1;
            }

            
        }
        return ans;
}

int lastOccurence(int arr[], int key, int size){
    int first=0;
    int end=size-1;
    int ans=-1;
    while(first<=end){
        int mid=first+(end-first)/2;
        if(arr[mid]==key){
            ans=mid;
            first=mid+1;
        }
        else if(arr[mid]<key){
            first=mid+1;

        }
        else{
            end=mid-1;
        }
        
    }
    return ans;
}

int main(){
    int arr[12]={1,2,3,4,4,4,4,5,5,5,5,9};

    int key;
    cout<<"Enter the value which's first and last index you want  ";
    cin>>key;

    int firstIndex=firstOccurence(arr, key, 12);
    cout<<"First occurence of "<<key<<" is in index "<<firstIndex<<endl;
    int lastIndex=lastOccurence(arr, key, 12);
    cout<<"Last occurence of "<<key<<" is in index "<<lastIndex<<endl;
}