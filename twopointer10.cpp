/*sum of sums of all subarrays with >=distinct elements
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
    int pp[n];//prefix of prefix sum
    
    for(int i=0;i<n;i++){
        cin>>arr[i];

        prefix[i]=arr[i];
        if(i>0) prefix[i]+=prefix[i-1];

        //double prefix sum
        pp[i]=prefix[i];
        if(i>0) pp[i]+=pp[i-1];
    }
    int total_sum=0;
    //approach would be calculate total subarray sum then subtract total invalid sum

    //sum of sums of all subarrays
    for(int i=0;i<n;i++){
        total_sum=arr[i]*(i+1)*(n-i);
    }

    int head=-1,tail=0;
    int invalid_sum=0;

    while(tail<n){
        while(head+1<n && distinct<k){
            head++;
            insert(arr[head]);
        }

        //samjh ni aa rha
        //kabhi aur dekhunga

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
    cout<<"Ans: "<<total_sum-invalid_sum<<endl;
}