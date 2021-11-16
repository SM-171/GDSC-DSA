//Leetcode question 344.Reverse String

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void reverseString(vector<char>& s) {
        if(s.size() == 1) {
            cout << s[0];
            return;
        }
        
        char temp = s[s.size() - 1];
        s.pop_back();
        reverseString(s);
        s.insert(s.begin(), temp);
        cout << s[0];
    }
};
