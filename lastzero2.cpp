#include<bits/stdc++.h>
using namespace std;
//monotonic space, find last one
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=-1;//not found yet
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0){//right me check krunga
            low=mid+1;
            ans=mid;
        }
        else{//arr[mid]==1, left m check krunga
            high=mid-1;
        }
    }
    cout<<ans<<endl;
}