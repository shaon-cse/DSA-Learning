#include<iostream>
using namespace std;
#include<array>

int main(){
    int arr[3]={1,3,2};//normal declaration of array

    array<int, 4> a={1,2,3,4};//STL

    int size=a.size();//return the size of the array

    cout<<a[0]<<endl;

    cout<<a.at(3)<<endl;//we can print usig this also

    cout<<a.empty()<<endl;//It will print the array is empty or not. if empty it will return true(1)..if not empty then false(0).


    cout<<a.front()<<endl;//print the first element

    cout<<a.back()<<endl;//print the last element 


}