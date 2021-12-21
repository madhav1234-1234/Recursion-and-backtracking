// Print N TO 1
#include<bits/stdc++.h>
using namespace std;
void printdecreasing(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printdecreasing(n-1);
}
int main(){
    int n;
    cin>>n;
    printdecreasing(n);
    return 0;
}