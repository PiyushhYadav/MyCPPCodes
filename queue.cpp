#include <bits/stdc++.h>
using namespace std;

void solve(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}

signed main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}