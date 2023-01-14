#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 65 + i - 1; //you may combine these two lines also to get the following formulae:
            ch = ch + j - 1;        // ch = 65 + i + j - 2;
            cout<<ch<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }  
    return 0;
}