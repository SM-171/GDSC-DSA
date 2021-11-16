<<<<<<< HEAD
// Leetcode question 231. Power of Two

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n == 0 || n == 1) {
            return n;
        }
        
        if(n % 2 != 0) return false;

        return isPowerOfTwo(n / 2);
    }
=======
// Leetcode question 231. Power of Two

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n == 0 || n == 1) {
            return n;
        }
        
        if(n % 2 != 0) return false;

        return isPowerOfTwo(n / 2);
    }
>>>>>>> 8a7dcc9b942a4acb5e23b149ddbcf6e5136377df
};