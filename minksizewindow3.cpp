#include<bits/stdc++.h>
using namespace std;

vector<int> minUsingDeque(vector<int> &arr,int k){
    int n= arr.size();
    vector<int> ans;
    deque<int> dq;

    for(int i=0;i<n;i++){
        while(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()]>=arr[i]){
            dq.pop_back();
        }

        dq.push_back(i);

        if(i>=k-1){
            ans.push_back(arr[dq.front()]);
        }
    }
    return ans;
}

int main(){
    vector<int> arr={3,1,4,2,8,6,5,7};
    int k=3;

    vector<int> ans= minUsingDeque(arr,k);

    for(auto e: ans){
        cout<<e<<" ";
    }
}
//TC- O(n)
/* Approach-
1. remove expired element
2. remove dominated element
3. update ans
*/