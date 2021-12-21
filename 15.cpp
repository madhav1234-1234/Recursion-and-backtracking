// // Print subsequence

// #include<bits/stdc++.h>
// using namespace std;
// void printsubs(string quest,string ans){
//     if(quest.length()==0){
//         cout<<ans<<" ";
//         return;
//     }
//     char ch=quest[0];
//     string res=quest.substr(1);
//     printsubs(res,ans+ "");
//     printsubs(res,ans+ ch);
// }
// int main(){
//     string str;
//     cin>>str;
//     printsubs(str,"");
//     return 0;
// }

// REVISION.
#include<bits/stdc++.h>
using namespace std;
void printss(string str,string ans){
    if(str.length()==0){
        cout<<ans<<" ";
        return;
    }

    char ch=str[0];
    string ss=str.substr(1);
    printss(ss,ans+"");
    printss(ss,ans+ch);
}
int main(){
    string str;
    cin>>str;
    printss(str,"");
    return 0;
}