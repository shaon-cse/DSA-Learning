/*
if vector size is 4. and there is no space left and we try to add one more element then the vector will double its size. in this case its 8. 
after that it will copy all the element from previous vector to the new one. and will delete the previous vector.
*/

#include<iostream>
using namespace std;
#include<vector>


int main(){
    vector<int> a;

    a.push_back(5);//it will push the element 5 at the last of the vector. now the size of vector is 1. capacity also 1
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;

    a.push_back(6);
    cout<<"capacity "<<a.capacity()<<endl;//capacity will be 2
    cout<<"size "<<a.size()<<endl;//size will also be 2

    //but if we push again one element then the capacity will be 4. because previously it was 2. and if we try to add one element 
    //then the vector will create another vector with the double size of previous one. but as there are 3 elements the size will be 3
    a.push_back(9);
    cout<<"capacity "<<a.capacity()<<endl;//4
    cout<<"size "<<a.size()<<endl;//3


    
    cout<<a.front()<<endl;

    cout<<a.back()<<endl;

    cout<<a.at(0)<<endl;

    //to remove one element from the last we use pop_back
    a.pop_back();//it will remove the last element from the vector..9 in this case


}