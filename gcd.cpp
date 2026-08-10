// Write your code here
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    while (a % b !=0) {//using long division method
        int rem=a%b;//remainder
        a=b;
        b=rem;
    }
    int gcd=b;
    cout<<gcd<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}