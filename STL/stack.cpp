#include<iostream>
#include<stack>
using namespace std;



int main(){
    stack<int> s;
    s.push(50);
    s.push(30);

    cout<<s.size()<<endl;


    cout<<s.top()<<endl;//30

    s.pop();//30 popped out

    cout<<s.top()<<endl;//only 50 is there. so 50


    stack<int> s2;
    s2.push(1000);
    s2.push(2000);

    s.swap(s2);//s2 stack will be stored in s1 stack. and s1 in s2

    cout<<s.top()<<endl;//1000
    cout<<s2.top()<<endl;//50



}