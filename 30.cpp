// Replace pi

#include<bits/stdc++.h>
using namespace std;
void replacepi(char ch[],int idx){
    // Base case
    if(ch[idx]=='\0' && ch[idx+1]=='\0'){
        return ;
    }
    if(ch[idx]=='p' && ch[idx+1]=='i'){
        int j=idx+2;
        while(ch[j]!='\0'){
            j++;
        }
        while(j>=idx+2){
            ch[j+2]=ch[j];
            j--;
        }
        ch[idx]='3';
        ch[idx+1]='.';
        ch[idx+2]='1';
        ch[idx+3]='4';
        replacepi(ch,idx+4);
    }else{
        replacepi(ch,idx+1);
    }
    return;
}
int main(){
    char ch[10000];
    cin>>ch;
    replacepi(ch,0);
    cout<<ch;
    return 0;
}