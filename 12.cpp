// // Get stairs path.

// #include<bits/stdc++.h>
// using namespace std;
// vector<string>getstair(int n){
//     if(n==0){
//         return {""};
//     }else if(n<0){
//         return {};
//     }
//     vector<string>p1=getstair(n-1);    
//     vector<string>p2=getstair(n-2);    
//     vector<string>p3=getstair(n-3);    
//     vector<string>paths;
//     for(auto path:p1){
//         paths.push_back('1'+path);
//     }
//     for(auto path:p2){
//         paths.push_back('2'+path);
//     }
//     for(auto path:p3){
//         paths.push_back('3'+path);
//     }
//     return paths;  

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<string>allpaths=getstair(n);
//     for(auto x:allpaths){
//         cout<<x<<" ";
//     }

// }


// REVISION
#include<bits/stdc++.h>
using namespace std;
vector<string>paths(int n){
    if(n==0){
        return {""};
    }
    if(n<0){
        return {};
    }

    vector<string>p1=paths(n-1);
    vector<string>p2=paths(n-2);
    vector<string>p3=paths(n-3);
    vector<string>msol;
    for(auto x:p1){
        msol.push_back('1'+x);
    }
    for(auto x:p2){
        msol.push_back('2'+x);
    }
    for(auto x:p3){
        msol.push_back('3'+x);
    }
    return msol;
}
int main(){
    int n;
    cin>>n;
    vector<string>v=paths(n);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}

