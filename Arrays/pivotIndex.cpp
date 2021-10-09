<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivotIndex = -1;
        int sum = 0;
        
        for(int &num: nums) {
            sum += num;
        }
        
        int left = 0;
        int right = sum;
        for(int i = 0; i < nums.size(); i++)
        {
            left = (i == 0)? 0 : left + nums[i - 1];
            right -= nums[i];
            
            if(right == left)
                return i;
        }
        return pivotIndex;
    }
=======
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivotIndex = -1;
        int sum = 0;
        
        for(int &num: nums) {
            sum += num;
        }
        
        int left = 0;
        int right = sum;
        for(int i = 0; i < nums.size(); i++)
        {
            left = (i == 0)? 0 : left + nums[i - 1];
            right -= nums[i];
            
            if(right == left)
                return i;
        }
        return pivotIndex;
    }
>>>>>>> d9c62fc9286f2664e6b275301c56813baeb55062
};