// Integer to string.
#include<bits/stdc++.h>
using namespace std;
void printntos(string codes[],int n){
    if(n==0){
        return;
    }
    printntos(codes,n/10);
    cout<<codes[n%10]<<" ";
}
int main(){
    int n;
    cin>>n;
    string codes[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    printntos(codes,n);
    return 0;
}