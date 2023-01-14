#include<iostream>
using namespace std;

void PrintArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void Insertion (int arr[], int size, int element) {
    int i;
    for (i = 0; i<size; i++) {
        if (arr[i] > element)
            break;
    }
    for (int j = size - 1; j >= i; j--) {
        arr[j+1] = arr[j];
    }
    arr[i] = element;
    size = size + 1;
    PrintArray(arr,size);
    
}

int main()
{
    int size;
    cin>>size;
    
    int arr[100];

    for (int i = 0; i<size; i++) {
        cin>>arr[i];
    }

    PrintArray (arr,size);  
    cout<<"Enter the element that you want to insert into the array: "<<endl;
    int element;
    cin>>element;

    Insertion (arr,size,element); 
    return 0;
}