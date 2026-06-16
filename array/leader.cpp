#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(int a[], int n) {
    vector<int> mp; 
    int leader=a[n-1];
    mp.push_back(leader);
    int i=n-2;
    while(i>=0){
    if(leader<a[i]){
        leader=a[i];
        mp.push_back(a[i]);
    }
    i--;
    }
    reverse(mp.begin(), mp.end());

    return mp;
}