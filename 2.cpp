// Print 1 to n
#include<bits/stdc++.h>
using namespace std;
void printincreasing(int n){
    if(n==0){
        return;
    }
    printincreasing(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printincreasing(n);
    return 0;
}