// // Print keypad combination.
// #include<bits/stdc++.h>
// using namespace std;
// void key(string codes[],string ques,string ans){
//     if(ques.length()==0){
//         cout<<ans<<" ";
//         return;
//     } 
//     char ch=ques[0];
//     string res=ques.substr(1);
//     string code=codes[ch-'0'];
//     for(int i=0;i<code.length();i++){
//         char cho=code[i];
//         key(codes,res,ans+cho);
//     }
// }
// int main(){
//     string str;
//     cin>>str;
//     string codes[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
//     key(codes,str,"");
//     return 0;
// }

// REVISION.
#include<bits/stdc++.h>
using namespace std;
void key(string codes[],string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch=ques[0];
    string ss=ques.substr(1);
    string code=codes[ch-'0'];
    for(int i=0;i<code.length();i++){
        char codei=code[i];
        key(codes,ss,ans+codei);
    }
}
int main(){
    string str;
    cin>>str;
    string codes[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    key(codes,str,"");
    return 0;
}