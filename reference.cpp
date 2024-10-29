//reference is nickname of a variable
#include<iostream>

using namespace std;

int main(){
    int a=10;
    int &b=a; //& means it is a reference. so b is the nickname of var a. and the value of a and b is same. that is 10

    cout<<a<<endl<<b<<endl;

    //if i change the value of a. the value of b will also change
    a=11;
    cout<<b<<endl;//b will also 11
}