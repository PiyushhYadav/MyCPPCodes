#include<bits/stdc++.h>
using namespace std;
//Q- you can flip max k elements, to make max subarray
//which contains only 1's
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //ds
    int cnt0=0;
    //pointers
    int head=-1,tail=0;
    int ans=0;
    while(tail<n){
        //eat as much as possible
        while(head+1<n && (cnt0<k || arr[head+1]==1)) {
            head++;
            if(arr[head]==0) cnt0++;
        }
        //update ans
        ans=max(ans,head-tail+1);

        //remove 1 element from tail
        if((tail<=head)){
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