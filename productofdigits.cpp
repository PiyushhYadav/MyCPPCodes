#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=1;
    while(n!=0){
        int dig=n%10;
        ans=ans*dig;
        
        n=n/10;
    }
    cout<<ans<<endl;
}

signed main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}