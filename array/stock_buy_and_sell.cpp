#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxi=0;
        for (int i=0;i<prices.size();i++){
            int high=prices.size()-1;
            if(prices[i]<min ){
                min=prices[i];
                
            }
            else{
                maxi=max(maxi,prices[i]-min);
            }
        }
        return maxi;
          
        
    }
};