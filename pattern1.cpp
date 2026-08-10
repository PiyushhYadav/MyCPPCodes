#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;//height=rows
    cin>>n;
    int c=2*n-1;//column
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            if(i>=j-(n-1) && i+j>=n-1) cout<<"* ";
            else cout<<"  ";
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