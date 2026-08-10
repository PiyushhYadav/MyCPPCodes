#include<bits/stdc++.h>
using namespace std;
//Q- find the no of subarray whose sum is x, for now x=0
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int p[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //making prefix sum array
        //p[i]=p[i-1]+arr[i]
        p[i]=arr[i];
        if (i>0) p[i]+=p[i-1];
    }

    int ans=0;
    map<int,int> freq;
    freq[0]=1;//because L can be equal to zero. so one zero is for -1 index
    for(int r=0;r<n;r++){//loop on r, and l pr contribution on DS
        /*p[r]-p[l-1]=x
        p[l-1]=p[r]-x
        */
       ans+=freq[p[r]-x];
       freq[p[r]]++;
    }
    cout<<ans<<endl;
}