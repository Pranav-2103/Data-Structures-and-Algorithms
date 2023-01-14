#include <bits/stdc++.h>
using namespace std;

long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    sort (arr.begin(), arr.end());
    int freeAppleIndex = n-m;
    arr[freeAppleIndex] = 0;
    long long int sum = 0;
    for (int i = 0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main () {
    //will write this later;
}