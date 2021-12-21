// // Keypad combination

// #include<bits/stdc++.h>
// using namespace std;
// vector<string>key(string codes[],string str){
//     if(str.length()==0){
//         return {""};
//     }
//     char ch=str[0];
//     string res=str.substr(1);
//     vector<string>ans= key(codes,res);
//     vector<string>msol;
//     string mycode=codes[ch-'0'];
//     for(int i=0;i<mycode.length();i++){
//          char charcode=mycode[i];
//          for(auto x:ans){
//              msol.push_back(charcode+x);
//          }
//     }
//     return msol;
// }
// int main(){
//     string str;
//     cin>>str;
//     string codes[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
//     vector<string>v=key(codes,str);
//     for(auto x:v){
//         cout<<x<<" ";
//     }
// }


// Revision
#include<bits/stdc++.h>
using namespace std;
vector<string>key(string codes[],string str){
    if(str.length()==0){
        return {""};
    }

    char ch=str[0];
    string res=str.substr(1);
    vector<string>fss=key(codes,res);
    vector<string>msol;
    string code=codes[ch-'0'];
    for(int i=0;i<code.length();i++){
        char cha1=code[i];
        for(auto x:fss){
            msol.push_back(cha1+x);
        }
    }
    return msol;
}
int main(){
    string str;
    cin>>str;
    string codes[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    vector<string>v=key(codes,str);
    for(auto x:v){
        cout<<x<<" ";
    }
}