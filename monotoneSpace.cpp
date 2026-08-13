#include<bits/stdc++.h>
using namespace std;
//monotonic space problem: find best 1 with lowest index
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //ans is best 1 seen so far
    int ans=-1;//not found yet
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else{//arr[mid]==1
            high=mid-1;
            ans=mid;
        }
    }
    cout<<ans<<endl;
}
//TC- O(log n)