/*sum of sums of all subarrays with >=k distinct elements
9 3
1 1 1 2 2 3 3 3 4
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

map<int,int> freq;
int distinct=0;

void insert(int x){
    if(freq[x]==0) distinct++;
    freq[x]++;
}

void remove(int x){
    freq[x]--;
    if(freq[x]==0) distinct--;
}

signed main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int prefix[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

        //making prefix sum array
        prefix[i]=arr[i];
        if (i>0) prefix[i]+=prefix[i-1];
    }

    int head=-1,tail=0;
    int total_invalid_sum=0;
    int total_sum=0;
    int sum=0;
    int ans=0;
    
    //calulating total sum of sums of all subarray
    for(int i=0;i<n;i++){
        total_sum+=arr[i]*(i+1)*(n-i);
    }

    while(tail<n){
        while(head+1<n && (distinct<k)) {
            head++;
            insert(arr[head]);
        }
        //update ans
        //sum(arr[tail..r]= prefix[r]-prefix[tail-1])
        int last_invalid;
        
        if(distinct>=k){
            last_invalid=head-1;
        }
        else{
            last_invalid=n-1;
        }
        //sum of each invalid subarray then total it
        for(int r=tail;r<=last_invalid;r++){
            if(tail==0) sum=prefix[r];
            else{
                sum=prefix[r]-prefix[tail-1];
            }
            total_invalid_sum+=sum;
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
    ans=total_sum-total_invalid_sum;

    cout<<ans<<endl;
}
/*approch-
find sum of all subarrays, then subtract the sum of all non valid subarrays
sum of all subarrays=arr[i]*(i+1)*(n-i)
*/