#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int col = 1;
        while(col<=row){
            cout<<col;
            col = col + 1;
        }
        col = col - 2;
        while(col>0){
            cout<<col;
            col = col - 1;
        }
        cout<<endl;
        row = row + 1;
    }   
    return 0;
}