#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;//r and c
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>0 && j>0) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
}

signed main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}