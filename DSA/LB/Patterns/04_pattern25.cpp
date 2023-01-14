#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int row = 1;
    while (row<=n) {
        int space = 1;
        while (space<row) {
            cout<<' ';
            space++;
        }
        int col = row;
        int count = row;
        while (col<=n) {
            cout<<count;
            col++;
            count++;
        }
        cout<<endl;
        row++;

    }
    return 0;
}