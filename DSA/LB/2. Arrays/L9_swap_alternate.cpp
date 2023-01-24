/*

    swap alternate
    find unique
    find duplicate
    find intersection
    pair sum
    triplet sum
    sort 0s and 1s 

*/

#include<iostream>
using namespace std;

void AlternateSwap (int arr[], int size) {
    int i = 0;
    int j = 1;
    int temp;

    while (j<size) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i = i + 2;
        j = j + 2;

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
    cin>>size;

    int arr[100];
    for (int i = 0; i<size; i++) {
        cin>>arr[i];
    }   
    cout<<"Original Array:"<<endl;
    PrintArray (arr,size);
    AlternateSwap (arr,size);
    cout<<"Alternate Swap array:"<<endl;
    PrintArray (arr,size);
    return 0;
}