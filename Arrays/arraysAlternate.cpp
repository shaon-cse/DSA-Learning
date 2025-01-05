#include<iostream>
using namespace std;



void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void alternateArr(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
        
    }

}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};

    alternateArr(even, 6);
    printArr(even,6);
    alternateArr(odd,5);
    printArr(odd,5);
}