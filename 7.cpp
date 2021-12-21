// Maximum of array.
#include<bits/stdc++.h>
using namespace std;
int  maximum(int arr[],int n,int idx){
    if(idx==n-1){
        return arr[idx];
    }
    int misa=maximum(arr,n,idx+1);
    if(misa>arr[idx]){
        return misa;
    }else{
        return arr[idx];
    }

}
int main(){
    int arr[]={2,8,4,5,9,6,3};
    int n=sizeof(arr)/sizeof(int);
    int ans=maximum(arr,n,0);
    cout<<ans;
}