// FLOOD FILL
#include<bits/stdc++.h>
using namespace std;
void printpath(int maze[][100],int sr,int sc,string ans,bool visited[][100],int m,int n){
       if(sr<0 || sc<0 || sr==m || sr==n ||maze[sr][sc]==1 || visited[sr][sc]==true){
           return;
       }
       if(sr==m-1 && sc==n-1){
           cout<<ans<<" ";
           return;
       }

       visited[sr][sc]=true;
       printpath(maze,sr-1,sc,ans+'t',visited ,m,n);
       printpath(maze,sr,sc-1,ans+'l',visited ,m,n);
       printpath(maze,sr+1,sc,ans+'d',visited ,m,n);
       printpath(maze,sr,sc+1,ans+'r',visited ,m,n);
       visited[sr][sc]=false;
}
int main(){
    int maze[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>maze[m][n];
        }
    }
    bool visited[100][100];
    printpath(maze,1,1,"",visited,m,n);
}