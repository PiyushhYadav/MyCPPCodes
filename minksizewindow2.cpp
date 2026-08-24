#include<bits/stdc++.h>
using namespace std;
//Find min of every k-size window of an array
vector<int> minUsingMultiset(vector<int> &arr, int k){
    int n = arr.size();

    vector<int> ans;

    multiset<int> window;

    for(int i=0;i<n;i++){
        window.insert(arr[i]);//O(log k)
        //check for expired element
        if(i-k>=0){
            int expired=arr[i-k]; //O(log k)
            window.erase(window.find(expired));//so that duplicate does not get erased along with it
        }
        //check for k size of window
        if(i>=k-1){
            ans.push_back(*window.begin());//O(1)
            //begin() gives iterator
        }
    }
    return ans;
}

int main(){
    vector<int> arr= {3,1,4,2,8,6,5,7};
    int k=3;

    vector<int> ans= minUsingMultiset(arr,k);//O(n* logk)

    for(auto e: ans){
        cout<<e<<" ";
    }
}
