#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int arr[100] = {1,2,3,5,6,7,8,9,10};
    
    int sum = (size*(size+1))/2;

    int sum2 = 0;
    for (int i = 0; i<size; i++) {
        sum2 = sum2 + arr[i];
    }
    int missing = sum - sum2;
    cout<<missing<<endl;

    return 0;
}