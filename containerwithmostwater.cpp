#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int tail=0;
    int ans=0;
    while(tail<n){
        int head=tail+1;//to reset head, so we can get the subarrays
        while(head<n){
            
            int height=min(arr[head],arr[tail]);
            int width= head-tail;
            int water=height*width;
            
            //update ans
            ans=max(ans,water);

            head++;
        }

        tail++;

      
    }
    cout<<ans<<endl;
}
/*time complexity: O(n^2)*/