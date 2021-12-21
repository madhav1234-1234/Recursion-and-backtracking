// Print an array.
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int i){
    if(i>=n){
        return;
    }
    cout<<arr[i]<<" ";
    print(arr,n,i+1);
}
void printr(int arr[],int k){
    if(k<0){
        return;
    }
    cout<<arr[k]<<" ";
    printr(arr,k-1);
}
int main(){
    int arr[]={10,2,45,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    print(arr,n,0);
    cout<<endl;
    printr(arr,n-1);
    return 0;
}