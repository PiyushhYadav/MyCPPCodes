#include<bits/stdc++.h>
using namespace std;
//Q- given array, find smallest arr[i]+arr[j] > x, (i<j)
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int best=1e9;
    set<int> st;
    for(int j=0;j<n;j++){
        st.insert(arr[j]);//if i<=j, else iss line ko baad m likhna h
        //arr[i] + arr[j] > x
        //arr[i] > x-arr[j]
        auto it=st.upper_bound(x-arr[j]);
        if(it!=st.end()){
            best=min(best,arr[j]+ *it);
        }
    }
    cout<<best<<endl;
}