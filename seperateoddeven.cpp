#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int even[n],odd[n];
    int evencount=0, oddcount=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[evencount]=arr[i];
            evencount++;
        }
        else {
            odd[oddcount]=arr[i];
            oddcount++;
        }
        
    }
    //now print odd even arrays
        cout<<"Even array: ";
        for(int i=0;i<evencount;i++){
            cout<<even[i]<<" ";
            
        }
        cout<<endl;
        cout<<"Odd array: ";
        for(int i=0;i<oddcount;i++){
            cout<<odd[i]<<" ";
        }
}