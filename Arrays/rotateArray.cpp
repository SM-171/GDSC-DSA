#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(size == 1) return;
        
        k %= size;
        reverse(nums.begin(), nums.begin() + size - k);
        reverse(nums.begin() + size - k, nums.end());
        reverse(nums.begin(), nums.end()); 
    }
};