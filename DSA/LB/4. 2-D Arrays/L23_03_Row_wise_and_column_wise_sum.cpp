#include<iostream>
using namespace std;

void rowSum(int arr[][3]) {
    for (int i = 0; i<3; i++) {
        int sum = 0;
        for (int j = 0; j<3; j++) {
            // if you will use this then you can find sum of elements row wise
            // sum += arr[i][j];

            // if you will use this then you can find sum of elements column wise
            sum += arr[j][i]; 
        }
        // cout<<"Sum of all elements of row "<<i+1<<" is "<<sum<<endl;
        cout<<"Sum of all elements of column "<<i+1<<" is "<<sum<<endl;
    }
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

    rowSum(arr);
    return 0;
}