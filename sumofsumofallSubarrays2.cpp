#include <bits/stdc++.h>
using namespace std;
//improvement- using only 2 loops (SOS)
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = 0;
    for (int st=0;st<n;st++){
        int sum=0;
        for (int en=st;en<n;en++){
            sum += arr[en];

            ans += sum;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    solve();
}