// Leetcode Question 121. Best Time to Buy and Sell Stocks
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int maxProfit = 0;
        int sellingPrice = prices[size - 1];
        
        for(int i = size - 1; i >= 0; i--) {
            maxProfit = max(sellingPrice - prices[i], maxProfit);
            sellingPrice = max(sellingPrice, prices[i]);
        }
        return maxProfit;
    }
};