#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter the amount to split: ";
    cin>>amount;
    int noOf100, noOf50, noOf20, noOf10;

    switch(1){
        case 1: noOf100=amount/100;
                amount=amount%100;
                cout<<"The number of 100 notes are: "<<noOf100<<endl;
                if(amount==0){
                        break;
                }
        case 2: noOf50=amount/50;
                amount= amount%50;
                cout<<"The number of 50 notes are: "<<noOf50<<endl;
                if(amount==0){
                        break;
                }
        case 3: noOf20=amount/20;
                amount= amount%20;
                cout<<"The number of 20 notes are: "<<noOf20<<endl;
                if(amount==0){
                        break;
                }
        case4: noOf10=amount/10;
                amount= amount%10;
                cout<<"The number of 10 notes are: "<<noOf10<<endl;
                break;
                if(amount==0){
                        break;
                }
        

        
    }

    return 0;
}