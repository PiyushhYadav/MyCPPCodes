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
    for(int i=0;i<n;i++) cin>>arr[i];

    int head=n-1,tail=0;
    int maxi=INT_MIN;
    while(tail<=head){
        int func_value=abs(head-tail)*min(arr[tail],arr[head]);

        if(arr[tail]<=arr[head]){
            tail++;
        }
        else{
            head--;
        }
        maxi=max(func_value,maxi);
    }
    cout<<head<<" "<<endl<<tail<<" "<<endl<<maxi<<endl;
}
//Optimal Solution
//TC- O(n)