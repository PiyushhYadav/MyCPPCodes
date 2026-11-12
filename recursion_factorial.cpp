#include<bits/stdc++.h>
using namespace std;

int fact(int x){
    //base case
    if(x<=1){
        return x;
    }
    else{
        return x * fact(x-1);
    }
}

signed main(){
    int n;
    cin>>n;
    cout<<"factorial: "<<fact(n)<<endl;
}