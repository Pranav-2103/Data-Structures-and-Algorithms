#include<iostream>
#include<climits>
using namespace std;

int rowSum(int arr[][3]) {
    int ans = INT_MIN;
    int ansIndex = -1;
    for (int i = 0; i<3; i++) {
        int sum = 0;
        for (int j = 0; j<3; j++) {
            sum += arr[i][j];
        }
        if (sum > ans) {
            ans = sum;
            ansIndex = i;
        }
    }
    return ansIndex;
}

int main()
{
    int arr[3][3];
    cout<<"Enter the values of 2D array: "<<endl;
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            cin>>arr[i][j];
        }
    }  

    cout<<"Here's the 2D array that you entered: "<<endl;
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    cout<<"Largest sum is of row "<<rowSum(arr)+1;
    return 0;
}