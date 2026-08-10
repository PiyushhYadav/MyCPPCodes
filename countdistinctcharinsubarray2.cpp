#include<bits/stdc++.h>
using namespace std;
/*Instead of calculating the score of each substring,
calculate the number of substrings containing each character.
contribution for each subarray/substring generally is
(i+1)*(n-i) but here we have strings with repeated characters
so we need to tweak this a little
so whenever we have repeated the characters, we will the start the
subarray from that point only.
for ex- abac
first a k liye normal subarray form krenge, but for the second a
we will strictly not include the first a, so the starting point for
for the second 'a' will be index 1,2 only, not 0
so our contribution will be
(i-prev)*(n-i) 
*/
int main(){
    int n;
    string s;
    cin>>n>>s;

    long long ans=0;

    int last[26];//only 26 characters
    //where did i last see this character
    for(int i=0;i<26;i++){
        last[i]=-1;//no char has appeared yet
    }
    for(int i=0;i<n;i++){
        //convert every char to array index
        int c=s[i]-'a'; //convert a-z-> 0-25
        int previous= last[c];//previous occurence of this char

        ans+= 1LL * (i-previous)*(n-i);

        last[c]=i;//current position becomes last occurence
    }
    cout<<ans<<endl;
}