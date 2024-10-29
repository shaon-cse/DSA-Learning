/*
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of pattern: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j+=1;
        }
        
        i+=1;
        cout<<endl;

    }
    cout<<endl;
}