#include <bits/stdc++.h>
using namespace std;

void PrintArray (vector<int> arr) {
    for (int i = 0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void InsertionSort (vector<int> arr, int n) {
    vector<int> sorted;
    sorted[0] = arr[0];
    for (int i = 0; i<n-1; i++) {
        int j = i+1;
        if (arr[j] >= sorted[i]) {
            sorted[j] = arr[j];
        }
        else {
            while (arr[j] < sorted[i]) {
                sorted[i+1] = sorted[i];
                i--;
            }
            sorted[i+1] = arr[j];
        }
        
    }
    PrintArray(sorted);
}

int main () {
    vector<int> arr = {6,5,4,3,2,1};
    InsertionSort(arr,arr.size());
}