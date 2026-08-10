// Write your code here
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int max = INT_MIN;

    for (int i=0;i<n;i++){
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    cout<<max<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}