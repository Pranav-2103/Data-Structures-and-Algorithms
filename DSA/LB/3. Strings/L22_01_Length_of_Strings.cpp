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

int main()
{
    char a[10];
    cin>>a;
    cout<<a<<endl;
    cout<<"Length of given character array is: "<<length(a);
    return 0;
}