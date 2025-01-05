/*
A B C D 
B C D E
C D E F
D E F G

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the pattern size: ";
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        char ch='A'+i-1;
        while(j<=n){
            
            cout<<ch<<" ";
            j++;
            ch+=1;
            
        }
        cout<<endl;
        i++;
    }
}