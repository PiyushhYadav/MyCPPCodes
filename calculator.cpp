// Write your code here
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;

    cout<<a<<" + "<<b<<a+b<<endl;
    cout<<a<<" * "<<b<<a*b<<endl;
    cout<<a<<" - "<<b<<a-b<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    //cin>>n;
    for (int i=0;i<t;i++){
        solve();
    }
}