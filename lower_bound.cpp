#include<bits/stdc++.h>
using namespace std;

int n,x;
int arr[100005];

int check(int mid){
    if(arr[mid]>=x){
        return 1;
    }
    else{
        return 0;
    }
}

void solve(){
    cin>>n>>x;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //lower bound

    int ans=-1;
    int lo=0,hi=n-1;//seach space
    while(lo<=hi){
        int mid=(lo+hi)/2;

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

int main(){
    solve();
}