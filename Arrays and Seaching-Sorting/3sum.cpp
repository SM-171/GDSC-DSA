<<<<<<< HEAD
// Leetcode question 15. 3Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1 || nums.size() == 2) return {};
        
        sort(nums.begin(), nums.end());
        int size = nums.size();
        
        vector<vector<int>> allTriplets;
        for(int i = 0; i < size; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int j = i + 1;
            int k = size - 1;
            while(j < k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    allTriplets.push_back({nums[i], nums[j], nums[k]});
                    int temp1 = nums[j];
                    while(j < k && nums[j] == temp1) j++;
                    
                    int temp2 = nums[k];
                    while(j < k && nums[k] == temp2) k--;
                } else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return allTriplets;
        
    }
};
=======
// Leetcode question 15. 3Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1 || nums.size() == 2) return {};
        
        sort(nums.begin(), nums.end());
        int size = nums.size();
        
        vector<vector<int>> allTriplets;
        for(int i = 0; i < size; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int j = i + 1;
            int k = size - 1;
            while(j < k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    allTriplets.push_back({nums[i], nums[j], nums[k]});
                    int temp1 = nums[j];
                    while(j < k && nums[j] == temp1) j++;
                    
                    int temp2 = nums[k];
                    while(j < k && nums[k] == temp2) k--;
                } else if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return allTriplets;
        
    }
};
>>>>>>> 8a7dcc9b942a4acb5e23b149ddbcf6e5136377df
