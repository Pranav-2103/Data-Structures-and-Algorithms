Minimum and maximum {
    int getmax (int arr[], int size) {
    int max = INT_MIN;

    for (int i = 0; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

For Swaping{
temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}

For Printing 
    void PrintArray (int arr[], int size) {
        for (int i = 0; i<size; i++) {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }


