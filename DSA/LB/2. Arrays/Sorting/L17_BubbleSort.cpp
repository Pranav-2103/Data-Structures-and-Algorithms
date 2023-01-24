#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for (int i = 0; i<n-1; i++) {
        bool swapped = false;
        for (int j = 0; j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) //this condition improves time complexity for best case only, now for best case it is omega n or O(n).
            break;
    }
}

int main () {
    //will write later;
    return 0;
}