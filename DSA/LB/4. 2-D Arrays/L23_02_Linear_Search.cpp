#include<iostream>
#include<vector>
using namespace std;

vector<int> linearSearch(int arr[][3], int target) {//while passing 2D array to the function we need to specify column size
    vector<int> v;
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            if (arr[i][j] == target){
            v.push_back(i);
            v.push_back(j);
            return v;
            }
        }
    }
    v.push_back(-1);
    v.push_back(-1);
    return v;
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

    int target;
    cout<<"Enter the element that you want to search in the array: ";
    cin >> target;

    vector<int> ans = linearSearch(arr,target);

    if (ans[0] == -1)
        cout<<"Element not found in the array"<<endl;
    else 
        cout<<"Element found in the array at "<<"row " <<ans[0] + 1 << " and at column " << ans[1] + 1 << endl;
    
    return 0;
}