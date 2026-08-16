#include<bits/stdc++.h>
using namespace std;

int n;
int arr[10000];
//i=n-1 || arr[i]<arr[i+1]
int check(int mid){
    if(mid==n-1 || arr[mid]>arr[mid+1]) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=-1;//not found yet
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo + (hi-lo)/2;
        if(check(mid)==0){
            lo=mid+1;
        }
        else{//1
            hi=mid-1;
            ans=mid;
        }
    }
    cout<<ans<<endl;
}