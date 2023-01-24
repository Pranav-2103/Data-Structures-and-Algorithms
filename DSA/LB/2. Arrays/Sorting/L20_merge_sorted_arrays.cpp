#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v, int m, vector<int>& arr, int n) {
    int p1 = m-1;
    int p2 = n-1;
    int i = m+n-1;
    cout<<i;

    while (p2>=0) {
        if (p1>=0 && v[p1] > arr[p2]) {
            v[i] = v[p1];
            i--;
            p1--;
        }
        else {
            v[i] = arr[p2];
            p2--;
            i--;
        }
        for (auto i:v) {
            cout<<i<<' ';
        }
        cout<<endl;
    }

}

int main () {
    vector<int> v = {1,3,5,7,10};
    vector<int> arr = {0,2,4,6,9,11};
    int m = v.size();
    int n = arr.size();

    merge(v,m,arr,n);
    cout<<endl<<endl<<endl;
    for (auto i:v) {
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}