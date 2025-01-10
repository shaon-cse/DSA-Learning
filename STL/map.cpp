#include<iostream>
#include<map>
using namespace std;

//in map value is assigned with a key. One key only have one value just. but multiple key may have same value
int main(){
    map<int ,string> m;

    m.insert({6, "shaon"});//1 is key..shaon is value
    m.insert({6, "sajeeb"});//not possible because one key can't have multiple value
    m.insert({9,"shaon"});//possible..because multiple key may have same value in this case both key 6 and 9 have value shaon
    m.insert({1,"Dhruba"});


    map<int, string>:: iterator it;
    it=m.begin();

    //value stored in ascending order of key. in this case
    // 1 Dhruba
    // 6 shaon
    // 9 shaon
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

}