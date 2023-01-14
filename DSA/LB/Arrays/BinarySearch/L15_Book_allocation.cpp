#include <iostream>
#include <climits>
using namespace std;

bool isPossible (int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; i++) {
        if (pagesSum + arr[i] <= mid) {
            pagesSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pagesSum = arr[i];
        }
        
    }
    return true;
}

int allocation (int arr[], int n, int m) {
    int start = 0;
    int sum = 0;
    for (int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end-start)/2;
        if (isPossible(arr,n,m,mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}


int main () {
    
    int arr[4] = {12,34,67,90};
    int n = 4;
    int m = 2;

    cout<<"Answer is "<<allocation(arr,n,m)<<endl;

    return 0;
}