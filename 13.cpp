// Get maze paths

// #include<bits/stdc++.h>
// using namespace std;
// vector<string>paths(int sr,int sc,int lr,int lc){
//     if(sr==lr && sc==lc){
//         return {""};
//     }
//     vector<string>vpaths;
//     vector<string>hpaths;
//     if(sr<lr){
//         vpaths=paths(sr+1,sc,lr,lc);
//     }
//     if(sc<lc){
//         hpaths=paths(sr,sc+1,lr,lc);
//     }
//     vector<string>msol;
//     for(auto x:hpaths){
//         msol.push_back('h'+x);
//     }
//     for(auto x:vpaths){
//         msol.push_back('v'+x);
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
vector<string>mazepath(int sr,int sc,int lr,int lc){
    if(sr==lr && sc==lc){
        return {""};
    }
    vector<string>hpaths;
    vector<string>vpaths;
    vector<string>msol;
    if(sr<=lr){
       vpaths=mazepath(sr+1,sc,lr,lc);
    }
    if(sc<=lc){
        hpaths=mazepath(sr,sc+1,lr,lc);
    }
    for(auto x:hpaths){
        msol.push_back('h'+x);
    }
    for(auto x:vpaths){
        msol.push_back('v'+x);
    }
    return msol;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<string>v=mazepath(1,1,m,n);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}