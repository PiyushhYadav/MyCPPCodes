#include<bits/stdc++.h>
using namespace std;
//fibonacci series- 0 1 1 2 3 5 8 13 21 34 55...
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c=1;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a=b;
        b=c;
        c=a+b;

    }
}