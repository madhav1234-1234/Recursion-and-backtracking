// Target sum subset.

#include<bits/stdc++.h>
using namespace std;
void printtargetsum(int arr[],int idx,string ans,int ssf,int target,int n){

   if(idx==n){
        if(ssf==target){
            cout<<ans<<" ";
        }
        // cout<<endl;
        return;
   }

    printtargetsum(arr,idx+1,ans+to_string(arr[idx])+",",ssf+arr[idx],target,n);
    printtargetsum(arr,idx+1,ans+"",ssf,target,n);
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int target;
    cin>>target;
    printtargetsum(arr,0,"",0,target,n);
    return 0;
}