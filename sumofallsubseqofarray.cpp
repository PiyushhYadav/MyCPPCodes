#include<bits/stdc++.h>
using namespace std;
//sum of all subsequences of array
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+= arr[i]*pow(2,n-1);
    }
    ans+=sum;
    cout<<ans<<endl;
}