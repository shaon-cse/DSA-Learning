#include<iostream>

using namespace std;

int main(){
    int a=50;
    int *p;
    p=&a;
    cout<<p<<endl;//this will print the address of a
    cout<<*p<<endl;//this will print the value of a. it is called dereferncing


    //array using pointer
    int arr[5]={5,6,7,8,9};
    int *q;
    q=arr;//we did not write &arr because arr itself give the address of the array. if we use arr[0] then we can write p=&arr[0]; . it will also give the address of the array

    for(int i=0;i<5;i++){
        cout<<q[i]<<" ";//arr[i] also give the same result
    }
    cout<<endl;

    //to declare array in heap
    int *r;
    r=new int[4];
    r[0]=1;
    r[1]=2;
    r[2]=3;
    r[3]=4;

    for(int i=0;i<4;i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    //after using the array we need to delete the var from the heap to free memory
    delete [] r;
}