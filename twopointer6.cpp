#include<bits/stdc++.h>
using namespace std;
/*find the shortest subarray with distinct element >= k
Approach- go to the longest of k-1 and find the minimum length
the, add 1
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

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int head=-1,tail=0;
    int ans=1e9;
    while(tail<n){
        //eat as much as you can
        while(head+1<n && (distinct<(k-1) || freq[arr[head+1]]>0)){
            head++;
            insert(arr[head]);
        }
        //update ans 
        if(head+1<n){//next element exists
            ans= min(ans,(head-tail+1)+1);
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