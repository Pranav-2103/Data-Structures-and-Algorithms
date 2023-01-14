#include<iostream>
using namespace std;

int main()
{
    int c = 0;
    float f;
    int i = 0;
    while (i<=100){
        f = ((9/5.0)*(c+i)) + 32;
        cout<<f<<endl;
        i = i+1;
    }
    return 0;
}