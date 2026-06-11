#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string twoSumExists(vector<int>& arr, int target) {
     
        unordered_map<int, int> mp; 
        
        
        for (int j = 0; j < arr.size(); j++) {
            int current_number = arr[j];
          
            if (mp.find(target - current_number) != mp.end()) {
                return "YES"; 
            }
            
          
            mp[current_number] = j;
        }
        
        return "NO"; 
    }
};