#include<bits/stdc++.h>
using namespace std;
//Rotate an array
bool isSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;
    while(!isSorted(arr,n)){
        //shifting 1st element to the right
        int temp=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
        count++;
    }
    cout<<count<<endl;
}
//TC- O(n^2)