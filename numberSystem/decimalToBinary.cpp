#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    int digit;
    int ans=0;
    int i=0;
    while(n!=0){
        digit=n & 1;
        ans= digit*pow(10,i)+ans;
        
        n=n>>1;
        i++;
        

    }
    cout<<ans<<endl;
}