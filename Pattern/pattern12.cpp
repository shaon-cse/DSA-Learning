#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=n-space){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}