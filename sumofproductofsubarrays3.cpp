#include <bits/stdc++.h>
using namespace std;
//SOP
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    int prev=0;
    for(int i=0;i<n;i++){
        prev=prev*arr[i] + arr[i];
        ans+=prev;
    }
    cout<<ans<<endl;
 }
 //O(n)