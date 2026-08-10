#include <bits/stdc++.h>
using namespace std;
//max sum of subarray
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int prev=0;//max subarray sum ending at the current index i
    for(int i=0;i<n;i++){
        prev= max(prev+arr[i],arr[i]);
        ans=max(ans,prev);
    }//also known as kadane's algo
    cout<<ans<<endl;
}