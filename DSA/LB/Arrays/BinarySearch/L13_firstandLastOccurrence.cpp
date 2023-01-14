#include <bits/stdc++.h> 
using namespace std;
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int s = 0;
    int e = arr.size() - 1;
    pair <int, int> position;
    int first = 0;
    int last = 0;
    
    while (s <= e) {
        int mid = s + ((e-s)/2);    
        if (arr[mid] == k) {
            int iter = mid;
            while (arr[iter] == k) {
                first = iter;
                iter--; 
            }
            while (arr[iter] == k) {
                last = iter;
                iter++;
            }
            position = make_pair (first,last);
            return position;
        }
        else if (arr[mid]<k) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        
    }
    position = make_pair (-1,-1);
    return position;
}

int main () {
    vector <int> arr;
    int size;
    cin>>size;
    int k;
    cin>>k;

    int i = 0;
    for (i = 0; i<size; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    pair <int , int> answer = firstAndLastPosition(arr,size,k);
    cout<<answer.first<<' '<<answer.second<<endl;
    return 0;
}