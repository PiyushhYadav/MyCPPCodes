#include<bits/stdc++.h>
using namespace std;
//Rotate the array
int n;
int arr[100003];

int check(int mid){
    if(arr[mid]<arr[0]){
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

    int lo=0,hi=n-1;
    int ans=0;
    while(lo<=hi){
        int mid=lo + (hi-lo)/2;
        if(check(mid)==0){
            lo=mid+1;
        }
        else{//1
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans<<endl;
}
//TC- O(log n)