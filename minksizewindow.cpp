//Find min of every k-size window of an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;//window size
    cin>>n>>k;
    vector<int> arr(n);//vector of size n
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int i=0;i<=n-k;i++){ //-k because you would need atleast 3 element at last
        int mn=INT_MAX;
        
        //for window traversal
        for(int j=i;j<i+k;j++){
            mn = min(mn,arr[j]);
        }
        cout<<mn<<endl;
    }
}
//TC- O(n*k)