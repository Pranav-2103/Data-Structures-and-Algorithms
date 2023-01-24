#include <iostream>
using namespace std;

int length(char a[]) {
    int count = 0;
    int i = 0;
    while (a[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

void reverse(char a[], int n) {
    int s = 0;
    int e = n-1;
    while (s<e) {
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
    cout<<"Reversed string is: "<<a;
}

int main()
{
    char a[100];
    cin>>a;
    int size = length(a);
    reverse(a,size);
    return 0;
}