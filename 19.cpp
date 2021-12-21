// Print maze path with zump.
#include<bits/stdc++.h>
using namespace std;
void printmazejump(int sr,int sc,int lr,int lc,string ans){
    if(sr==lr && sc==lc){
        cout<<ans<<" ";
        return;
    }
    for(int jump=1;jump<=lr-sr;jump++){
        printmazejump(sr+jump,sc,lr,lc,ans+'v'+to_string(jump));
    }
    for(int jump=1;jump<=lc-sc;jump++){
        printmazejump(sr,sc+jump,lr,lc,ans+'h'+to_string(jump));
    }
    for(int jump=1;jump<=lr-sr && jump<=lc-sc;jump++){
        printmazejump(sr+jump,sc+jump,lr,lc,ans+'d'+to_string(jump));
    }

}
int main(){
    int m,n;
    cin>>m>>n;
    printmazejump(1,1,m,n,"");
    return 0;
}