#include<bits/stdc++.h>
using namespace std;
//find sum of product of all subarrays of array (SOP)
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int st=0;st<n;st++){//for start
        for(int en=st;en<n;en++){//for end
            int product=1;
            for(int i=st;i<=en;i++){
                product*=arr[i];
            }
            ans+=product;
        }
    }
    cout<<ans<<endl;
}
//TC- O(n3)