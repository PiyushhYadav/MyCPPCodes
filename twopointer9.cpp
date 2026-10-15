/*sum of sums of all subarrays with >=distinct elements
9 3
1 1 1 2 2 3 3 3 4
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long ans=0;
    //calculating sum of sums of subarray
    for(int i=0;i<n;i++){
        map<int,int> freq;
        int distinct=0;
        int subarraysum=0;
        for(int j=i;j<n;j++){
            subarraysum+=arr[j];

            if(freq[arr[j]]==0){
                distinct++;
            }
            freq[arr[j]]++;

            //count only subarrays with at least k distinct elements
            if(distinct>=k){
                ans+=subarraysum;
            }
        }

    }
    cout<<"ans: " <<ans<<endl;
    
} 