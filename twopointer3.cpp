#include<bits/stdc++.h>
using namespace std;
#define int long long
/*Q- find the sum of length of subarrays with atmost k distinct elements*/
//ds to manage distinct elements
int freq[100100];
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
    for(int i=0;i<n;i++) cin>>arr[i];

    //pointer
    int head=-1,tail=0;
    int ans=0;
    while(tail<n){
        //eat as much as you can
        while(head+1<n && (distinct<k || freq[arr[head+1]]>0)){
            head++;
            insert(arr[head]);
        }
        //update ans
        int len=head-tail+1;
        ans+=len*(len+1)/2;
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