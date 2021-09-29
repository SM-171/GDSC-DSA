// Leetcode question 896. Monotonic Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool monotonic = true;
        int size = nums.size();
        for(int i = 0; i < size - 1; i++) {
            if(nums[i] > nums[i+1]) {
                monotonic = false;
                break;
            }
        }
        
        if(monotonic) { 
            return monotonic;
        } else {
            monotonic = true;
            for(int i = 0; i < size - 1; i++) {
                if(nums[i] < nums[i+1]) {
                    monotonic = false;
                    break;
                }
            }
        }
        return monotonic;
        
    }
};