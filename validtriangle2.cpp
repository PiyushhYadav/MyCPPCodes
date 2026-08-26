#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
        //sum of two sides must be strictly greater than the third side
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());//so that largest side can be at last
        int count=0;

        for(int k=n-1;k>=2;k--){
            int i=0, j=k-1; //reset i,j for each kth cycle
            while(i<j){
                if(nums[i]+nums[j]>nums[k]){
                    count+=j-i;
                    j--;
            }
            else{//not valid pair
                i++;
            }
            }
        }
        cout<<count<<endl;
    }
