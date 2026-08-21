#include<bits/stdc++.h>
using namespace std;
//Q- count no of subarrays which contains zero <=k
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //ds
    int cnt0=0;
    //pointer
    int head=-1,tail=0;
    int ans=0;
    while(tail<n){
        //eat as much as you can
        while(head+1<n && (cnt0<k || arr[head+1]==1)){
            head++;
            if(arr[head]==0) cnt0++; 
        }

        //update ans
        ans +=head-tail+1;
        //because size of subarray will be = # of subarray which starts from tail
        //remove one element from tail
        if(tail<=head){
            if(arr[tail]==0) cnt0--;
            tail++;
        }
        else{
            tail++;
            head=tail-1;
        }
    }
    cout<<ans<<endl;

}