#include<bits/stdc++.h>
using namespace std;

int fib(int x){
    if(x<=1) return x;
    else{
        return fib(x-1) + fib(x-2);
    }
}

signed main(){
    fib(6);
    cout<<fib(6);
    return 0;
}