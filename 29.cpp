// String to integer.
#include<bits/stdc++.h>
using namespace std;
int printstoi(string str,int n){
      if(n=0){
          return 0;
      }
      int ch=str[n-1]-'0';
      int ans=printstoi(str,n-1);
      int res=ans*10+ch;
      return res;
}
int main(){
    string str;
    cin>>str;
    int n=str.length();
    cout<<printstoi(str,n);
    return 0;
}
