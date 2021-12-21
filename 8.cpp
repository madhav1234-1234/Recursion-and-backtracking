// First index of an unsorted array.
#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int idx,int x){
    if(idx==n){
        return -1;
    }
    if(arr[idx]==x){
        return idx;
    }else{
        int focc=firstocc(arr,n,idx+1,x);
        return focc;
    }
}
int main(){
    int arr[]={2,3,6,9,8,3,2,6,2,4,8};
    int n=sizeof(arr)/sizeof(int);
    int x=8;
    int ans =firstocc(arr,n,0,x);
    cout<<ans;
    return 0;
}