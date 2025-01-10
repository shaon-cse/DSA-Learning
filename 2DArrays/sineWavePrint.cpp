#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(int arr[][3], int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int i=0;i<mCols;i++){
        if(i&1){
            for(int j=nRows-1;j>=0;j--){
                ans.push_back(arr[j][i]);
            }
        }
        else{
            for(int j=0;j<nRows;j++){
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=wavePrint(arr, 3, 3);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}