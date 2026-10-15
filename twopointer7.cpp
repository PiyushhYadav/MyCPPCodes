#include<bits/stdc++.h>
using namespace std;
/*calulate of number of subarray greater than or equal to k distinct element
OR Find the minimum length subarray having at least k distinct elements
*/
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
//2 pointer for >=k
//<=(k-1)
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int head=-1,tail=0;
    int ans=1e9;
    
    while(tail<n){
        while(head+1<n && (distinct<(k-1) || freq[arr[head+1]]>0)){//checks for atmost k-1
            head++;
            insert(arr[head]);
        }
        //update ans
        if(head+1<n && (distinct==k-1)){//checks next element exists and distinct count must be k-1, so we can add 1 element later to make it exactly k
            ans=min(ans,(head-tail+1) + 1);
            //ans+=n-1-head
        }

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