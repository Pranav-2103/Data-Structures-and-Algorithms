#include <bits/stdc++.h>
using namespace std;

// 7/11 testcases passed with this solution I don't know what went wrong.

long long threeWaySplit(int n, vector<int> arr){
    int i = 0;
    int j = n - 1;
    
    int s1 = arr[i];
    int s3 = arr[j];
    long long int ans = 0;
    while (i<j) {
        if (s1 < s3) {
            
            s1 = s1 + arr[i+1];
            i++;
        }
        else if (s1 > s3) {

            s3 = s3 + arr[j-1];
            j--;
        }
        else{
            ans = s3;
            return ans;
        }
        
    }
    
    return ans;
}