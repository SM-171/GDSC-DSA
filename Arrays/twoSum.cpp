//Leetcode question 1. Two Sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int size = nums.size();
        
        for(int i = 0; i < size - 1; i++) {
            for(int j = i + 1; j < size; j++) {
                if(nums[i] + nums[j] == target) {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }   
        }
        return index;
    }
};