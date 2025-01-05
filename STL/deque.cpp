#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    cout<<d.size()<<endl;

    d.push_back(10);
    d.push_front(20);
    d.push_back(40);
    d.push_front(50);

    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;

    d.pop_back();
    d.pop_front();
    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }
    cout<<endl;

    cout<<d.max_size()<<endl;//Returns the maximum number of elements that a deque container can hold.

}