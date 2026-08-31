#include<bits/stdc++.h>
using namespace std;
/*Q_ find the length of the shortest subarray 
with >=k distinct elements
Sol- convert this problem into
longest subarray with <=k distinct elements
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
    cout<<"Enter value of n and k: ";
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int head=-1;
    int tail=0;
    int ans=1e9;
    
    while(tail<n){
        //eat till you can
        while(head+1<n && (distinct<k || freq[head+1]>0)){
            insert(arr[head]);
            head++;
        }
        //update ans
        ans= min(ans,((head-tail+1)+1));

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