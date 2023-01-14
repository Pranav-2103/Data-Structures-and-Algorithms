#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100] = {0};
    int size;
    cin>>size;

    for (int i = 0; i<size; i++) {
        cin>>arr[i];
    }
    int i = 0;
    int j = size - 1;

    while (i<j) {
        if (arr[i] == 0 && arr[j] == 1) {
            i++;
            j--;
            continue;
        }
        else if (arr[i] == 1 && arr[j] == 1) {
            j--;
            continue;
        }
        else if (arr[i] == 0 && arr[j] == 0) {
            i++;
            continue;
        }
        else {
            swap (arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}