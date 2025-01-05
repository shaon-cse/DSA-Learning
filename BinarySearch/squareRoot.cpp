#include<iostream>
using namespace std;

int findSquareRoot(int n){
    int first =1;
    int end= n;
    long long int ans=-1;
    while(first<=end){
        long long int mid=first+(end-first)/2;
        long long int square= mid*mid;
        if(square==n){
            return mid;
        }
        else if(square>n){
            end=mid-1;
        }
        else{
            ans=mid;
            first=mid+1;
        }
    }
    return ans;

}

double preciseSquareRoot(int n, int squareRootINT, int precision ){
    double factor=1;
    double ans=squareRootINT;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans; j*j<n ; j= j+factor){
            ans=j;
        }

    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the value which's you want to find square root: ";
    cin>>n;
    int squareRootINT= findSquareRoot(n);
    cout<<"Integer Square root of "<<n<<" is "<<squareRootINT<<endl;
    double squareRoot=preciseSquareRoot(n, squareRootINT, 3);
    cout<<"Square root of "<<n<<" is "<<squareRoot<<endl;
}