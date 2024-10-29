/*
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    int i=n;
    while(i>0){
        int j=n;
        while(j>0){
            cout<<j<<" ";
            j-=1;
        }
        
        i-=1;
        cout<<endl;

    }
    cout<<endl;
}