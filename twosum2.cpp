#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    map<int,int> freq;//freq map of all the elements
    for(int j=0;j<n;j++){
        //arr[i]+arr[j]=x
        //arr[i]=x-arr[j] ->this will search all the possible combination of valid i and j
        ans+= freq[x-arr[j]];
        freq[arr[j]]++;
    }
    cout<<ans<<endl;
}