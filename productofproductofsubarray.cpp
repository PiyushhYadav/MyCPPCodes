#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans=1;
    long long prev=1;
    for(int i=0;i<n;i++){
        prev=prev*(long long)pow(arr[i],(i+1));
        ans*=prev;
    }
    cout<<ans<<endl;
}