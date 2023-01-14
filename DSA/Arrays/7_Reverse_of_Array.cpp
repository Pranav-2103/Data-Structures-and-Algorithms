#include<iostream>
using namespace std;

void getArray (int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cin>>arr[i];
    }
}

void PrintArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void ReverseArray (int arr[], int size) {
    int i = 0;
    int j = size - 1;
    
    while (i<j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    PrintArray(arr,size);
}

int main () {

    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of the array:"<<endl;
    getArray (arr,size);
    PrintArray (arr,size);
    cout<<endl<<"Reversing the array:"<<endl;
    ReverseArray (arr,size);

    return 0;
}