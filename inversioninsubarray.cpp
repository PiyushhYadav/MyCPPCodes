#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long total=0;
    //generate all subarray
    for(int l=0;l<n;l++){
        for(int r=l;r<n;r++){

            long long inv=0;
            //count inversion in subarray [l...r]
            for(int i=l;i<=r;i++){
                for(int j=i+1;j<=r;j++){
                    if(arr[i]>arr[j]){
                        inv++;
                    }
                }
            }
            total+=inv;
        }
    }
    cout<<total<<endl;
    
}