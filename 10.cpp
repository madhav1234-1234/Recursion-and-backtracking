// // Get subsequence
// // abc=__ a b c ab ac bc abc
// // bc=__,c,b,bc
// #include<bits/stdc++.h>
// using namespace std;
// vector<string> gss(string str){
//     if(str.length()==0){
//         return {""};
//     }
//     char ch=str[0];//a
//     string res=str.substr(1);//bc
//      vector<string>fss=gss(res);// __,_c,b_,bc
//      vector<string>mss;
//      for(auto x:fss){
//         mss.push_back(""+x);
//      }
//      for(auto x:fss){
//         mss.push_back(ch+x);
//      }
//      return mss;
// }
// int main(){
//     string str;
//     cin>>str;
//     vector<string>v=gss(str);
//     for(auto x: v){
//         cout<<x<<endl;
//     }
//     return 0;
// }






// Revision.
#include<bits/stdc++.h>
using namespace std;
vector<string>gss(string str){
     if(str.length()==0){
        return {""};
     }
    char ch=str[0];
    string ans=str.substr(1);
    vector<string>fss=gss(ans);
    vector<string>msol;
    for(auto x:fss){
        msol.push_back(ch+x);
        msol.push_back(""+x);
    }
    return msol;
}
int main(){
    string str;
    cin>>str;
    vector<string>v=gss(str);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}