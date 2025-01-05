//in set element has to be unique. if I put 5 5 5 only one 5 will be stored
//The values are stored in a specific sorted order i.e. either ascending or descending.

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s={3,1,2,4,9,8};

    //by default set sorted in ascending order
    //so if we print the set s it will show 1 2 3 4 8 9
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;


    // to store element in descending order 
    set<int, greater<int> > s2={3,1,2,4,9,8};

    //print 9 8 4 3 2 1
    for(int i:s2){
        cout<<i<<" ";
    }
    cout<<endl;


    // insert elements in random order
    s.insert(40);
    s.insert(30);
    s.insert(60);
    s.insert(20);
    s.insert(50);

    // only one 50 will be added to the set
    s.insert(50);
    s.insert(10);


    //erase value 30
    s.erase(30);

    cout<<s.count(50)<<endl;//check wheater 5 is in the set or not
}