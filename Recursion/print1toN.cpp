// GFG Question Print 1 to n wihtout using loops
 #include <bits/stdc++.h>
 using namespace std;

 class Solution
{
public:
    void printTillN(int N) {
        if(N == 1) {
            cout << N << ' ';
            return;
        }
        printTillN(N - 1);
        cout << N << ' ';
    }
};