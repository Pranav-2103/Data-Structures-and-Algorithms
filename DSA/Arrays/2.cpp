// TO INSERT GIVEN ELEMENTS INTO THE ARRAY;

#include <iostream>
using namespace std;

void PrintArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<' ';
    }
}

void Insertion (int arr[], int size, int element,  int position) {
    int i;
    position = position - 1;
    
    
    if (position == size) {
        arr[position] = element;
    }
    else{
        for (i = size - 1; i >= position; i--) {
            arr[i+1] = arr[i];
            arr[i] = arr[i-1];

        }
        arr[position] = element;
    }
    size = size + 1;
    PrintArray(arr,size);
    
}


int main () {

    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    cout<<"Enter the elements of the array: "<<endl;
    int arr[100];
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int element,position;
    cout<<"Enter the element and its position where you want to insert it:"<<endl;
    cin>>element>>position;

    Insertion(arr,size,element,position);
    

    return 0 ;
}