#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("shaon");
    q.push("dhruba");
    q.push("sajeeb");

    cout<<q.size()<<endl;//3

    cout<<q.front()<<endl;//shaon

    q.pop();
    cout<<q.front()<<endl;//dhruba
    cout<<q.size()<<endl;//2
}