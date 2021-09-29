// Leetcode question 26. Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int i = 0;
        
        if(size == 0 || size == 1) return size;
        
        while(i < size - 1) {
            if(nums[i] == nums[i + 1]) nums.erase(nums.begin() + i);
            else i++;
            size = nums.size();
        } 
        return size;
    }
};