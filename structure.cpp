#include<iostream>
using namespace std;

struct Rectangle{
    int length=5;
    int breadth=8;
};

int main(){
    struct Rectangle r1;
    cout<<"Rectangle length is "<<r1.length<<endl;
    cout<<"Rectangle breadth is "<<r1.breadth<<endl;

    r1.length=6;
    cout<<"Rectangle new length is "<<r1.length<<endl;

}