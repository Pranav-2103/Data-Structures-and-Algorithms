#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    char a = 65;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<a<<' ';
            j = j + 1;
        }
        cout<<endl;
        a = a + 1;
        i = i + 1;
    }
    return 0;
}
/*
METHOD 2
while(i<=n){
    int j = 1;
    while (j <= n){
        char ch = 'A' + i - 1;
        cout<<ch<<' ';
        j = j + 1;
    }
    i = i + 1;
    cout<<endl;
}
*/