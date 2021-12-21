// // Permutation.

// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// void printperm(string str,string ans){
//     if(str.length()==0){
        
//         cout<<ans<<" ";
//         return;
//     }
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         string first=str.substr(0,i);
//         string second=str.substr(i+1);
//         string req=first+second;
//         printperm(req,ans+ch);
//     }
// }
// int main(){
//     string str;
//     cin>>str;
//     printperm(str,"");
//     return 0;

// }



// REVISION
#include<bits/stdc++.h>
using namespace std;
void printperm(string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<" ";
        return;
    }

    for(int i=0;i<ques.length();i++){
         char ch=ques[i];
         string first=ques.substr(0,i);
         string second=ques.substr(i+1);
         string fss=first+second;
         printperm(fss,ans+ch);
    }
}
int main(){
    string str;
    cin>>str;
    printperm(str,"");
    return 0;
}