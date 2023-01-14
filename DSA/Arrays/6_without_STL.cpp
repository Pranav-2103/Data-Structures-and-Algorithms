#include<iostream>
using namespace std;

int main()
{
    int arr[100] = {0};
    int size;
    cin>>size;

    int i;
    for (i = 0; i<size; i++) {
        cin>>arr[i];
    }
    int frequency [100] = {0};
    for (i = 0; i<size; i++) {
        frequency [arr[i]]++;
    }

    cout<<"the elements which are repeated in the array are: "<<endl;
    for (i = 0; i<=size; i++) {
        if (frequency[i] > 1)
            cout<<i<<' ';
        else    
            continue;
    }
    cout<<endl;

    cout<<"the elements which are not repeated in the array are: "<<endl;
    for (i = 0; i<=size; i++) {
        if (frequency[i] == 1)
            cout<<i<<' ';
        else    
            continue;
    }
    return 0;
}