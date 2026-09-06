#include<bits/stdc++.h>
using namespace std;
/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.*/

bool checkInclusion(){
    string s1="ab";
    string s2="eidbaooo";

    int n1=s1.length();
    int n2=s2.length();

    int freq1[26]={};//freq of characters in s1
    int freq2[26]={};//freq of characters in current window in s2

    for(auto ch:s1){
        freq1[ch-'a']++;
    }

    //make a window of s1 size, and traverse this window on s2
    //match the frequencies of s1 with the current window on s2

    int head=-1,tail=0;
    while(tail<n2){
        //eat as much as possible
        while(head+1<n2 && head-tail+1<n1){
            head++;
            freq2[s2[head]-'a']++;
        }
        //compare frequencies
        bool same=true;
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                same=false;
                break;
            }
        }

        if(same){
            return true;
        }

        //remove one element from tail
        if(tail<=head){
            freq2[s2[tail]-'a']--;
            tail++;
        }
        else{
            tail++;
            head=tail-1;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cout<<checkInclusion();
}
/*time complexity- O(26 x n)= O(n)*/