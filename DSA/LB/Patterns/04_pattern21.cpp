#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int j = n;
        while(j>=row){
            cout<<"* ";
            j = j-1;
        }
        cout<<endl;
        row = row+1;
    }   
    return 0;
}