#include<bits/stdc++.h>
using namespace std;
//monotonic spaces: find last 0
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//approach- find 1st one, and print just before index zero
    int low=0;
    int high=n-1;
    int firstone=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else{//arr[mid]==1
            high=mid-1;
            firstone=mid;
        }
        //last zero= firstone-1
    }
    cout<<firstone-1<<endl;

}