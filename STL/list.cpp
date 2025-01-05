#include<iostream>
#include<list>

using namespace std;

void showlist(list<int> li){
    for(int i:li){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> l;
    

    list<int> gqlist2;

    for (int i = 0; i < 10; ++i) {
        l.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 is : ";
    showlist(l);

    cout << "\nList 2 is : ";
    showlist(gqlist2);

    cout << "\nlist1.front() : " << l.front();
    cout << "\nlist1.back() : " << l.back();

    cout << "\nlist1.pop_front() : ";
    l.pop_front();
    showlist(l);

    cout << "\nlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\nlist1.reverse() : ";
    l.reverse();
    showlist(l);

    cout << "\nlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);

    return 0;

}