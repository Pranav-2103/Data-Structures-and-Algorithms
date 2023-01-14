#include <iostream> 
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

void mergingArrays (int arr1[], int arr2[], int size1, int size2) {
    int arr3[200];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i<size1 && j<size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr1[i] > arr2[j]) {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        else {
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }
    while (i<size1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j<size1) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    int size3 = k;
    PrintArray (arr3, size3);
}

int main () {

    int size1;
    cout<<"Enter the size of 1st array: "<<endl;
    cin>>size1;

    int size2;
    cout<<"Enter the size of 2nd array: "<<endl;
    cin>>size2;

    int arr1[100];
    int arr2[100];
    cout<<"Enter the elements of array 1: "<<endl;
    getArray (arr1, size1);
    cout<<"Enter the elements of array 2: "<<endl;
    getArray (arr2, size2);

    cout<<"Array 1 is: "<<endl;
    PrintArray (arr1,size1);
    cout<<"Array 2 is:"<<endl;
    PrintArray (arr2,size2);

    cout<<"Merged sorted array is: "<<endl;
    mergingArrays (arr1,arr2,size1,size2);

    return 0;
}