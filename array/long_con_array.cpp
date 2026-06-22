#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> arr;
        int n=arr.size();
        int maxi=0;
        int count=0;
        int m;
        for(auto i:nums){
            arr.insert(i);
        }
        for(auto i:arr){
            if(arr.find(i-1) == arr.end()){
                count=1;
                m=i;
            }
            while(arr.find(m+1) != arr.end()){
                count++;
                m=m+1;
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
    
};