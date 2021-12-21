// ROPE CUTTING PROBLEM.
#include<bits/stdc++.h>
using namespace std;
int rodcut(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }if(n<0){
        return -1;
    }
    int res=max(rodcut(n-a,a,b,c),max(rodcut(n-b,a,b,c),rodcut(n-c,a,b,c)));
    if(res==-1){
        return -1;
    }
    return res+1;
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int res=rodcut(n,a,b,c);
    cout<<res;
    return 0;
    
}