<<<<<<< HEAD
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
=======
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
>>>>>>> 8a7dcc9b942a4acb5e23b149ddbcf6e5136377df
};