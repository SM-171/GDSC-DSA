#include <bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int> leaders;
        int leader = arr[n - 1];
        leaders.push_back(leader);
        
        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] > leader) {
                leader = arr[i];
                leaders.push_back(leader);
            }
        }
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
};