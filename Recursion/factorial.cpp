// GFG Question Factorial

#include <bits/stdc++.h>
using namespace std;

long long int factorial(int n){
       //code here
       if(n == 1 || n == 0) {
           return 1;
       }
       return n * factorial(n - 1);
}