// // Get maze paths with jump.

// #include<bits/stdc++.h>
// using namespace std;
// vector<string>paths(int sr,int sc,int lr,int lc){
//     if(sr==lr && sc==lc){
//         return {""};
//     }
//     vector<string>hpaths;
//     vector<string>vpaths;
//     vector<string>dpaths;
//     vector<string>msol;
//     for(int jump=1;jump<=lc-sc;jump++){
//         hpaths=paths(sr,sc+jump,lr,lc);
//         for(auto x:hpaths){
//             msol.push_back('h'+to_string(jump)+x);
//         }
//     }
//     for(int jump=1;jump<=lr-sr;jump++){
//         vpaths=paths(sr+jump,sc,lr,lc);
//         for(auto x:vpaths){
//             msol.push_back('v'+to_string(jump)+x);
//         }
//     }
//     for(int jump=1;jump<=lr-sr && jump<=lc-sc;jump++){
//         dpaths=paths(sr+jump,sc+jump,lr,lc);
//         for(auto x:dpaths){
//             msol.push_back('d'+to_string(jump)+x);
//         }
//     }
//     return msol;
    
// }
// int main(){
//     int m,n;
//     cin>>m>>n;
//     vector<string>v=paths(1,1,m,n);
//     for(auto x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// REVISION.
#include<bits/stdc++.h>
using namespace std;
vector<string>mazejump(int sr,int sc,int lr,int lc){
   if(sr==lr && sc==lc){
       return {""};
   }

    vector<string>hpaths;
    vector<string>vpaths;
    vector<string>dpaths;
    vector<string>msol;
    for(int jump=1;jump<=lc-sc;jump++){
        hpaths=mazejump(sr,sc+jump,lr,lc);
        for(auto x:hpaths){
           msol.push_back('h'+to_string(jump)+x);
        }
    }
    for(int jump=1;jump<=lr-sr;jump++){
        vpaths=mazejump(sr+jump,sc,lr,lc);
         for(auto x:vpaths){
           msol.push_back('v'+to_string(jump)+x);
        }
    }
    for(int jump=1;jump<=lr-sr && jump<=lc-sc;jump++){
        dpaths=mazejump(sr+jump,sc+jump,lr,lc);
         for(auto x:dpaths){
           msol.push_back('d'+to_string(jump)+x);
        }
    }
    return msol;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<string>v=mazejump(1,1,m,n);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}