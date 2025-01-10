#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,5,6,4,7,6,3,1};

    int startingRow=0;
    int endingCol=4-1;
    int endingRow=4-1;
    int startingCol=0;

    int count=0;
    int total=4*4;
    

    while(count<total){
        for(int i=startingCol;i<=endingCol && count<total; i++){
            cout<<arr[startingRow][i]<<" ";
            count++;
        }
        startingRow++;
        for(int i=startingRow;i<=endingRow && count<total; i++){
            cout<<arr[i][endingCol]<<" ";
            count++;
        }
        endingCol--;

        for(int i=endingCol;i>=startingCol && count<total; i--){
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;

        for(int i=endingRow;i>=startingRow && count<total; i--){
            cout<<arr[i][startingCol]<<" ";
            count++;
        }
        startingCol++;


    }

}