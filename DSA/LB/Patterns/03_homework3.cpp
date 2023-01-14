#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=2;
    int flag = 1;
    while(i<n){
        if(n%i==0){
            flag = 0;
            break;
        }
        i++;
        
    }
    if(flag == 1){
        cout<<"number is prime."<<endl;
    }
    else    
        cout<<"number is not prime."<<endl;
    return 0;
}