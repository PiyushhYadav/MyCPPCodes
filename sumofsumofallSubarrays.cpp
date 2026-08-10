#include <bits/stdc++.h>
using namespace std;
//SOS
void solve() {
    //step 1: create array and take input
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int ans=0;
    for (int st=0;st<n;st++) { //loop 1 for start
        for (int en=st; en<n;en++){ //loop 2 for end
            int sum=0;
            for (int i=st;i<=en;i++){ //loop 3 for traversal in between subarray
                sum += arr[i]; 
                //sum of subarray from st to en
            }
            ans += sum;
            //sum of all individual subarrays
        }
    }
    
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
  
    solve();

    return 0;
}