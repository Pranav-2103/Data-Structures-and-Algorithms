//TRAVERSAL OF ARRAY

#include<iostream>
using namespace std;

void PrintArray (int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<' ';
    }
}

int main()
{
    int size;
    cin>>size;

    int arr[100];
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }   
    PrintArray(arr,size);
    return 0;
}