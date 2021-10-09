#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int BinarySearch(vector<int>& nums, int first, int last, int target) {
        
        int mid = (first + last) / 2;
        
        while (first <= last) {
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] > target) {
                return BinarySearch(nums, first, mid - 1, target);
            } else {
                return BinarySearch(nums, mid + 1, last, target);
            }
        }
        
        return -1;
    }
    
    
    int searchInsert(vector<int>& nums, int target) {
        
        if(target <= nums[0]) return 0;
        
        int size = nums.size();
        int position = BinarySearch(nums, 0, size - 1, target);
        
        if(position == -1) {
            int count = 0;
            for(int i = 0; i < size && nums[i] < target; i++) {
                count++;
            }
            return count;
        }
        return position;
    }
};