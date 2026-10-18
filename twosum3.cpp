/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    unordered_map<int,int>mp;//element,index
    for(int j=0;j<n;j++){
        //arr[i]+arr[j]=x
        //arr[i]=x-arr[j]
        int need=x-arr[j];

        if(mp.find(need)!=mp.end()){
            //means exists
            cout<<"["<<mp[need]<<","<<j<<"]";
            return 0; 
        }

        //create map
        mp[arr[j]]=j;//assign element as key, and index as value to create map
    }
    cout<<-1<<endl;
    return 0;
}
//TC- O(n)