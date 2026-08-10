#include<bits/stdc++.h>
using namespace std;
//find no. of inversion in subarray of array
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //inversion- (i<j) and arr[i]>arr[j]
    int ans=0;
    for(int i=0;i<n;i++){//start of subarray
        for(int j=i+1;j<n;j++){//end of subarray
            if(arr[i]>arr[j]){
                ans+=(i+1)*(n-j);
            }
        }
    }
    cout<<ans<<endl;
}