/*check whether given string palindrome or not */
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string temp= s;
    reverse(temp.begin(),temp.end());

    bool isPalindrome=true;

    for(int i=0;i<s.length();i++){
        if(s[i]!=temp[i]){
            isPalindrome=false;
            break;
        }
    }

    if(!isPalindrome) cout<<"Not a Palindrome";
    else cout<<"is a palindrome";
}