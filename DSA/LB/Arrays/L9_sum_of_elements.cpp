#include<iostream>
using namespace std;

int summ (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i<size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cin>>size;

    int arr[100];
    int i;
    for (i = 0; i<size; i++) {
        cin>>arr[i];
    }

    int sum = summ (arr,size);
    cout<<"Total sum of all the elements in the given array is: "<<sum<<endl;

    return 0;
}   