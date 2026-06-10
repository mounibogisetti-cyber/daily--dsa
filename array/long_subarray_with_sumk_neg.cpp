#include <bits/stdc++.h>

using namespace std;

int longsubarray(vector<int> &arr, int k) {

    unordered_map<long long int, int> mp;

    long long sum = 0;
    int maxi = 0;

    int n = arr.size();

    for(int i = 0; i < n; i++) {

        sum += arr[i];

        if(sum == k) {
            maxi = i + 1;
        }


        if(mp.find(sum - k) != mp.end()) {

            int len = i - mp[sum - k];

            maxi = max(len, maxi);
        }


        if(mp.find(sum) == mp.end()) {

            mp[sum] = i;
        }
    }

    return maxi;
}