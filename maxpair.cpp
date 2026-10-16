/*que- given array= [1,8,6,2,5,4,8,3,7]
i and j are any numbers such that arr[i] != arr[j]
f(i,j) = |i-j| * min(arr[i],arr[j])
find max value of f(i,j)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]!=arr[j]){
                int func_value=abs(i-j)* min(arr[i],arr[j]);
                maxi=max(maxi,func_value);
            }

        }
    }
    cout<<maxi<<endl;
}
//brute force
//TC- O(n^2)
