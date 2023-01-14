#include <iostream>
#include <vector>
using namespace std;
//Pivot means finding the minimum element in the array whereas peak means finding the maximum element in the array

int pivot(vector <int> arr) {
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + ((e-s)/2);

    while (s<e) {
        if (arr[mid] >= arr[0]) 
            s = mid + 1;
        else    
            e = mid;
        mid = s + ((e-s)/2);
    }
    return s;
}
int main()
{
    vector <int> arr = {7,9,1,2,3};
    int ans = pivot(arr);
    cout<<"Pivot element is "<<arr[ans]<<" at index "<<ans<<endl;
    return 0;
}
// after this you may try leetcode question Pivot element in the array