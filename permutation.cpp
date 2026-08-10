#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    bool isEqual=true;

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);

    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i])
            isEqual=false;
            break;
    }
    if(isEqual)
        cout<<"yes";
    else
        cout<<"no";
    
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}