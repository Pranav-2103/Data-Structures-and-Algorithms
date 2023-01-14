#include<iostream>
using namespace std;

int BinarySearch (int arr[], int x) {
    int start = 0;
    int end = 6;
    int mid;

    while (start <= end) {
        mid = (start + end)/2;
        if (arr[mid] < x) {
            start = mid + 1;
        }
        else if (arr[mid] > x) {
            end = mid - 1;
        }
        else
            return mid;
    }
    return -1;
}


int main()
{
    int arr[100] = {1,3,5,8,15,22,56};
    int x;
    cin>>x;

    cout<<BinarySearch(arr,x);   
    return 0;
}