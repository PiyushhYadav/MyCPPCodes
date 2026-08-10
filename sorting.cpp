// Write your code here
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for (int i=0;i<n-1;i++){//compare adjacent elements
            if(arr[i]>arr[i+1]){
                //swap (arr[i],arr[i+1])
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]= temp;
        }
    }
}

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}