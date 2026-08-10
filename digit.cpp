// Write your code here
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //add edge case of n=0
        if (n==0) {
            cout<<"0";
        }

        while(n!=0) {
            int dig=n%10;
            cout<<dig<<" ";

            n=n/10;
        }
        cout<<endl;
        

    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}