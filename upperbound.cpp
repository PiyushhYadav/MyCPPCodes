#include<bits/stdc++.h>
using namespace std;
//Upper bound using binary search
int n,x;
int arr[100003];

int check(int mid){
    if(arr[mid]>x){
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

    cin>>x;
    int ans=n;
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo + (hi-lo)/2;

        if(check(mid)==0){
            lo=mid+1;
        }
        else{
            hi=mid-1;
            ans=mid;
        }
    }
    cout<<ans<<endl;
}