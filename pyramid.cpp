#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;//height or no. of rows
    cin>>n;
    int c= 2*n-1;//columns
    // int count=1;

    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<c;j++){
            if(i+j>=n-1 && i>=j+1-n){
                cout<<count<<" ";
                int middle=n-1;
                if(j<middle) count++;
                else count--;
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;

}

signed main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}