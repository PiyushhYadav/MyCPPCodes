#include<bits/stdc++.h>
using namespace std;
#define int long long
/*Q- find the sum of length of subarrays with exactly k distinct elements
for exactly k elements, atmost k elements - atmost k-1 elements */
//ds to manage the distinct elements
int freq[100100];//freq array, because map would be costly for 10^6 many elements, O(1)
int  distinct=0;

void insert(int x){
    if(freq[x]==0) distinct++;
    freq[x]++;
}

void remove(int x){
    freq[x]--;
    if(freq[x]==0) distinct--;
}

int solveforK(int arr[],int n,int k){
    //2 pointers for <=k
    int head=-1,tail=0;
    int ans=0;
    while(tail<n){
        //eat as much as possible
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
        else{//zero size subarray
            tail++;
            head=tail-1;
        }
    }
    return ans;
}

signed main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solveforK(arr,n,k)-solveforK(arr,n,k-1)<<endl;
}