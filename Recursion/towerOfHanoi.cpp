// GFG Tower of Hanoi

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    long long towerOfHanoi(int N, int from, int to, int aux) {
        if(N == 0) {
            return 0;
        }
        
        int AB = towerOfHanoi(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        int BC = towerOfHanoi(N - 1, aux, to, from);
        
        return 1 + AB + BC;
    }
};
