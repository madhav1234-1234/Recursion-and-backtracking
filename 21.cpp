// Print encoding

#include<bits/stdc++.h>
using namespace std;
void printencode(string str,string ans){
    if(str.length()==0){
        cout<<ans<<" ";
        return;
    }
    if(str.length()==1){
        char ch=str[0];
        if(ch==0){
            return;
        }else{
            int chv=ch-'0';
            char code=(char)('a'+chv-1);
            cout<<ans+code<<" ";
        }
    }
    else{
        char ch=str[0];
        string fstr=str.substr(1);
        if(ch==0){
            return;
        }else{
            int chv=ch-'0';
            char code=(char)('a'+chv-1);
            printencode(fstr,ans+code);
        }
        string fstr1=str.substr(0,2);
        string fstr2=str.substr(2);
        int ch12=stoi(fstr1);
        if(ch12<=26){
            char code=(char)('a'+ch12-1);
            printencode(fstr2,ans+code);
        }

    }
}  
int main(){
    string str;
    cin>>str;
    printencode(str,"");
    return 0;
}