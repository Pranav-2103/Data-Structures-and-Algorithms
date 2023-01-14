#include <bits/stdc++.h>
using namespace std;
//Question link : https://bit.ly/3dkuQ2B 
bool isPossible (vector<int> &stalls, int k, int mid) {
    int cowCount = 1;
    int prevCow = stalls[0];
    
    for (int i = 0; i<stalls.size(); i++) {
        if (stalls[i] - prevCow >= mid) {
            cowCount++;
            if (cowCount == k)
                return true;
            prevCow = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort (stalls.begin(), stalls.end());
    int s = 0;
    int e = *max_element(stalls.begin(), stalls.end());
    
    int mid = 0;
    int ans = -1;
    while (s <= e) {
        mid = s + (e-s)/2;
        
        if (isPossible(stalls,k,mid)) {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

int main () {
    //will finish this later;
}