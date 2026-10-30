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

void solveforK(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int pf[n];
    int ppf[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

        pf[i]=arr[i];
        if(i>0) pf[i]+=pf[i-1];

        //prefix sum ka bhi prefix sum
        ppf[i]=pf[i];
        if(i>0) ppf[i]+=ppf[i-1];
    }

    int head=-1,tail=0;
    int ans=0;
    while(tail<n){
        //eat as much as you can
        while(head+1<n && (distinct<(k-1) || freq[arr[head+1]]>0)){
            head++;
            insert(arr[head]);
        }
        //update ans [tail...head]
        ans += ppf[n-1]-(head==-1?0:ppf[head]);
        ans -= (tail==0?0:pf[tail-1]) * (n-1-head);
          
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
    solveforK();
}