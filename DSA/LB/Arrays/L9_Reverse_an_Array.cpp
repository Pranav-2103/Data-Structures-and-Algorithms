#include<iostream>
using namespace std;

void ReverseArray (int arr[], int size) {
    int i = 0;
    int j = size-1;
    int temp;

    while (i<j) {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;

    }

}

void PrintArray (int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter elements:"<<endl;

    for (int i = 0; i<size; i++) {
        cin>>arr[i];
    }

    PrintArray (arr,size);
    ReverseArray (arr,size);
    PrintArray (arr,size);
    return 0;
}