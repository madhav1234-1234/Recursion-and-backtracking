// N queens

#include<bits/stdc++.h>
using namespace std;
bool safe(vector<vector<int>>v,int row,int col){
    for(int i=row-1,j=col;i>=0;i--){
        if(v[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(v[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col+1;i>=0 && j<v[0].size();i--,j++){
        if(v[i][j]==1){
            return false;
        }
    }
    return true;
}
void printqueens(vector<vector<int>>v,string ans,int row){
    if(row==v.size()){
       cout<<ans<<" ";
       return;
    }

    for(int col=0;col<=100;col++){
        if(safe(v,row,col)){
            v[row][col]=1;
            printqueens(v,ans+to_string(row)+"-"+to_string(col)+",",row+1);
            v[row][col]=0;
        }
    }
}
int main(){
    vector<vector<int>> v;
    printqueens(v,"",0);
    return 0;
}