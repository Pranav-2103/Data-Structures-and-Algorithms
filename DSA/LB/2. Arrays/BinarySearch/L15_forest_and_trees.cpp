#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible (vector<int> &arr,  int n, int m, int mid) {
    int woodCount = 0;
    for (int i = 0; i<n; i++) {
        int currentWood = arr[i] - mid;
        if (currentWood > 0) {
            woodCount += currentWood;
        }
        if (woodCount >= m) {
            return true;
        }
    }
    return false;
}

int HeightRequired (vector<int> &arr, int n, int m) {
    int s = 0;
    int e = *max_element(arr.begin(), arr.end());
    int mid = 0;
    int ans = 0;

    while (s <= e) {
        mid = s + (e-s)/2;

        if (isPossible(arr,n,m,mid)) {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

int main() {
	// your code goes here
	int n, m;
	cin>>n>>m;
	
	vector <int> arr;
	int x = 0;
	for (int i = 0; i<n; i++) {
		cin>>x;
		arr.push_back(x);
	}

    cout<<"Required Height is :"<<HeightRequired(arr,n,m)<<endl;

	return 0;
}