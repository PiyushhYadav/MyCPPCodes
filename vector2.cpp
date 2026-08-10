#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a;
    int q;//no. of queries
    cin>>q;
    while(q--){
        string type;
        cin>>type;
        if(type=="add"){
            int x; cin>>x;
            a.push_back(x);
        }
        else if(type=="remove"){
            if(!a.empty()){
                a.pop_back();
            }
        }
        else if(type=="print"){
            int index; cin>>index;
            if(index<a.size()){
                cout<<a[index]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else if(type=="clear"){
            a.clear();
        }
    }
}

signed main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}