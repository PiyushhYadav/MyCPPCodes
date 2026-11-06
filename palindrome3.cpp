#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    bool isPalindrome=true;

    int l=0,r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r]){
            isPalindrome=false;
            break;
        }
        l++;
        r--;

    }
    if(isPalindrome) cout<<"Is a palindrome";
    else cout<<"is not a palindrome";
}

signed main(){
    solve();
}