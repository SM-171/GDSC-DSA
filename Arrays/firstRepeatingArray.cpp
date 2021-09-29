#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstRepeated(int arr[], int n) {
        unordered_map<int, int> countNums;
        for(int i = 0; i < n; i++) {
            countNums[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            if(countNums[arr[i]] > 1)
                return i + 1;
        }
        return -1;
    }
};