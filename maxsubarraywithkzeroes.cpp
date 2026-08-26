/*find the maximum length of subarray with atmost k zeroes*/
#include<bits/stdc++.h>
using namespace std;

int main(){\
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    //ds
    int cnt0=0;
    //pointers
    int head=-1,tail=0;
    int ans=0;
    while(tail<n){
        //eat as much as you can
        while(head+1<n && (cnt0<k || arr[head+1]==1)){
            head++;
            //ds change
            if(arr[head]==0) cnt0++;
        }
        //update ans
        ans= max(ans,head-tail+1);

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