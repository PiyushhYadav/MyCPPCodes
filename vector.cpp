#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);

    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<< "size: " <<v.size();
    cout<<endl;

    v.pop_back();
    for(int x:v) cout<<x<<" ";
}