/*
1 2 3 
4 5 6
7 8 9

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            j+=1;
            count++;
        }
        
        i+=1;
        cout<<endl;

    }
    cout<<endl;
}