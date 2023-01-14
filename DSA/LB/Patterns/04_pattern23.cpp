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
            cout<<" ";
            space = space + 1;
        }
        int col = row;
        while (col<=n) {
            cout<<row;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }   
    return 0;
}