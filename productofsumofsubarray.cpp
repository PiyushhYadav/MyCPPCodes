#include <bits/stdc++.h>
using namespace std;
//find the product of sum of all subarrays of an array
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            ans*=sum;
        }
    }
    cout<<ans<<endl;
}