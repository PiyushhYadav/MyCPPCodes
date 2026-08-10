#include <bits/stdc++.h>
using namespace std;
//SOS
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
        prev=prev+arr[i]*(i+1);
        ans+=prev;
    }
    cout<<ans<<endl;
    
}