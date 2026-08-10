#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;

    long long ans=0;
    //generate any substring
    for(int i=0;i<n;i++){//starting of subarray
        set<char> st;
        for(int j=i;j<n;j++){
            st.insert(s[j]);

            ans+=st.size();
        }
    }
    cout<<ans<<endl;
}
//TC- total substring= n(n+1)/2
//means TC would in O(n2)
//not enough to pass in OJ