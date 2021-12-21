// TOWER OF HONOI.
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char a,char b,char c){
    if(n==0){
        return;
    }
    toh(n-1,a,c,b);
    cout<<"move"<< n<< "from"<<a<< "to" <<b<<endl;
    toh(n-1,c,b,a);
}
int main(){
    char a,b,c;
    // cin>>a>>b>>c;
    int n;
    cin>>n;
    toh(n,'a','b','c');
    return 0;
}