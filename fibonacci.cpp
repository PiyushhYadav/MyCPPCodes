// Write your code here
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;//how many numbers to print
    cin>>n;
    
        int a=0;
        int b=1;
        int c;
        
        while(n--){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}