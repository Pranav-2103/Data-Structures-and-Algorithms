#include<iostream>
using namespace std;

void PrintArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void Deletion (int arr[], int size, int element) {
    int i ;
    for (i = 0; i<size; i++) {
        if (arr[i] == element)
            break;
        else {
            if (i == size-1) {
                cout<<"Element not found";
                exit(1);
            }
        }
    }
    int temp = arr[i];
    for (int j = i; j<size - 1; j++) {
        arr[j] = arr[j+1];
    }
    size = size - 1;
    PrintArray (arr,size);
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
    cout<<"Enter the element that you want to delete from the array: "<<endl;
    int element;
    cin>>element;

    Deletion (arr,size,element);
    
    return 0;
}