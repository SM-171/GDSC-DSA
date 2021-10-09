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
        if(target <= nums[0]) {
            return 0;
        }
        
        int size = nums.size();
        int targetPosition = BinarySearch(nums, 0, size - 1, target);
        
        if(targetPosition == -1) {
            targetPosition = 0;
            while(targetPosition < size && nums[targetPosition] < target) {
                targetPosition++;
            }
            return targetPosition;
        }
        return targetPosition;
    }
};
