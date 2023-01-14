#include<iostream>
using namespace std;

bool check (int arr[], int size, int key) {
    for (int i = 0; i<size; i++) {
        if (arr[i] == key) {

            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {5, 7, 22, -5, 67, 0, 12, 5, 22, 1};   

    cout<<check (arr,10,99);
    return 0;
}