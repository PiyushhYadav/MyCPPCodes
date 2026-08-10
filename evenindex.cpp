#include<bits/stdc++.h>
using namespace std;
 //print only elements on even index
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
    }
}