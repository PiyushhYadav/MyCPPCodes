#include <bits/stdc++.h>
using namespace std;
//SOS
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    for (int i=0;i<n;i++){
        ans += arr[i]*(i+1)*(n-i);
    }
    cout<<ans<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    solve();
}