<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) {
            return {-1, -1};
        }
        
        int firstOccurence = BinarySearch(nums, target);
        int lastOccurence = BinarySearch(nums, target + 1) - 1;
        if (firstOccurence < nums.size() && nums[firstOccurence] == target)
            return {firstOccurence, lastOccurence};
        else
            return {-1, -1};
    }

    
    int BinarySearch(vector<int>& nums, int target) 
    {
        int low = 0;
        int high = nums.size()-1;
        
        while (low <= high) 
        {
            int mid = low + (high - low)/2;
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
=======
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) {
            return {-1, -1};
        }
        
        int firstOccurence = BinarySearch(nums, target);
        int lastOccurence = BinarySearch(nums, target + 1) - 1;
        if (firstOccurence < nums.size() && nums[firstOccurence] == target)
            return {firstOccurence, lastOccurence};
        else
            return {-1, -1};
    }

    
    int BinarySearch(vector<int>& nums, int target) 
    {
        int low = 0;
        int high = nums.size()-1;
        
        while (low <= high) 
        {
            int mid = low + (high - low)/2;
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
>>>>>>> d9c62fc9286f2664e6b275301c56813baeb55062
};