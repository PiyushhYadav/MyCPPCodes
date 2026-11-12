#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    //base case: when b becomes 0, a is the GCD
    if(b==0){
        return a;
    }
    //recursive step
    return gcd(b, a%b); //r=a%b
}

signed main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<"GCD is: "<<gcd(n1,n2)<<endl;
}
