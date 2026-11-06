/*check whether a given string a palindrome or not*/
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int rev=0;
    int temp=n;
    while(temp!=0){
        int rem=temp%10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(rev==n) cout<<"Yes, it is a palindrome";
    else cout<<"NO, it is not a palindrome";
}

signed main(){
    solve();
}