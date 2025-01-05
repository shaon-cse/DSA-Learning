#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> maxHeap;//syntax for greatest element will be at the top of the queue

    maxHeap.push(4);
    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(2);

    //4 3 2 1
    while(maxHeap.size()!=0){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }
    cout<<endl;



    //syntax for smallest element will be at the top of the queue
    priority_queue<int, vector<int>, greater<int> > minHeap; 


    minHeap.push(4);
    minHeap.push(1);
    minHeap.push(3);
    minHeap.push(2);

    //1 2 3 4
    while(minHeap.size()!=0){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;


}