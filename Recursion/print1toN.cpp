<<<<<<< HEAD
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
=======
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
>>>>>>> 8a7dcc9b942a4acb5e23b149ddbcf6e5136377df
};