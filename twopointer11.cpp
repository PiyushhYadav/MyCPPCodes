/*Q- find the sum of sums of all subarray with distinct elements >=k (or atleast k elements)
*/
#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> freq;
int distinct;

void insert(int x){
    if(freq[x]==0) distinct++;
    freq[x]++;
}

void remove(int x){
    freq[x]--;
    if(freq[x]==0) distinct--;
}

void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int prefix[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        prefix[i]=arr[i];
        if (i>0) prefix[i]+=prefix[i-1];
    }

    int head=-1,tail=0;
    int ans=0;
    while(tail<n){
        //eat as much as you can 
        while(head+1<n && distinct<=k){
            head++;
            insert(arr[head]);
        }

        //update ans
        if(distinct>=k){
            if(tail==0) ans+=prefix[head];
            else{
                ans+=prefix[head]-prefix[tail-1];
            }
        }
        //remove one element from tail
        if(tail<=head){
            remove(arr[tail]);
            tail++;
        }
        else{
            tail++;
            head=tail-1;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);cout.tie(0);

    solve();
}
//this one is wrong