#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,4,7,9,11,19,25};
    bool check=binary_search(v.begin(), v.end(), 25);//if 25 found it will return true, otherwise false
    if(check){
        cout<<"Present in the vector"<<endl;
    }
    else{
        cout<<"Not present in the vector"<<endl;
    }
}