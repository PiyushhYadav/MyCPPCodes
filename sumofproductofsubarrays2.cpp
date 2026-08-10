#include<bits/stdc++.h>
using namespace std;
//SOP
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){//starting index of subarray
        int cur=1;//product of current subarray
        for(int j=i;j<n;j++){//extend subarray by one element at a time
            cur*=arr[j];
            ans+=cur;
        }
    }
    cout<<ans<<endl;
}
//TC-O(n2)