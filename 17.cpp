// Print stair path

#include<bits/stdc++.h>
using namespace std;
void printstair(int ques,string ans){
   if(ques<0){
       return;
   }
   if(ques==0){
       cout<<ans<<" ";
       return;
   }
   printstair(ques-1,ans+"1");
   printstair(ques-2,ans+"2");
   printstair(ques-3,ans+"3");
}
int main(){
    int n;
    cin>>n;
    printstair(n,"");
    return 0;
}