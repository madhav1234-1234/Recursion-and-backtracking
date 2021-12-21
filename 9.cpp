// Last occurances.
#include<bits/stdc++.h>
using namespace std;
int lastocc(int arr[],int n,int idx,int x){
    if(idx==n){
        return -1;
    }
    int locc=lastocc(arr,n,idx+1,x);
    if(locc==-1){
        if(arr[idx]==x){
            return idx;
        }else{
            return -1;
        }
    }else{
        return locc;
    }
}
int main(){
    int arr[]={2,3,6,9,8,3,2,6,2,4,8};
    int n=sizeof(arr)/sizeof(int);
    int x=6;
    int ans=lastocc(arr,n,0,x);
    cout<<ans;
}