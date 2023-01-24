#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while (row<=n) {
        int col = row;
        int value = 1;
        while (col<=n) {
            cout<<col-row+1;
            value = value + 1;
            col = col + 1;
        }
        int star = 0;
        while (star<(2*row-2)) {
            cout<<"*";
            star = star + 1;
        }
        col = row;
        value = n-row+1;
        while (col<=n) {
            cout<<value;
            value = value - 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}