// Print maze-path
#include<bits/stdc++.h>
using namespace std;
void printmaze(int sr,int sc,int lr,int lc,string ans){
    if(sr>lr || sc>lc){
        return;
    }
    if(sr==lr && sc==lc){
        cout<<ans<<" ";
        return;
    }
    printmaze(sr,sc+1,lr,lc,ans+'h');
    printmaze(sr+1,sc,lr,lc,ans+'v');
}
int main(){
    int m,n;
    cin>>m>>n;
    printmaze(1,1,m,n,"");
    return 0;
}