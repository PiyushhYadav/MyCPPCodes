#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) cout<< char(j+'A');
            else cout<<" ";
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