#include<bits/stdc++.h>
using namespace std;
//SOS- sum of sum of subarray of an array
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //count the contribution of each element
    //contribution is each element is (i+1)*(n-i)
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i]*(i+1)*(n-i);
    }
    cout<<ans<<endl;
}