#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 0;
    while(i<n){
        int j = 1;
        while(j<=n){
            cout<<(n*i)+j<<' ';//formulare based answer
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
//****simple approach****
/*
int count = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<count<<' ';
        count++;
        j++;
    }
    cout<<endl;
    i++;
}
*/