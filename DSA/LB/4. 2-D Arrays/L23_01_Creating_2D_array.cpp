#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    cout<<"Enter the values of 2D array: "<<endl;
    //taking input from the user
    // for (int i = 0; i<3; i++) {
    //     for (int j = 0; j<3; j++) {
    //         cin>>arr[i][j];
    //     }
    // }

    cout<<"Here's the 2D array that you entered: "<<endl;
    //printing the array in proper 2D array form just the way we visualise it
    // for (int i = 0; i<3; i++) {
    //     for (int j = 0; j<3; j++) {
    //         cout<<arr[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }

    //Initialising a 2D array
    int a[3][3] = {1,2,3,4,5,6,7,8,9}; //row wise initialisation
    int b[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};//ek particular mei row mei kya daalna hai wo khud choose karna
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<4; j++) {
            cout<<b[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}