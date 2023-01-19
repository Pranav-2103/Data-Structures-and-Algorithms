#include<iostream>
#include<vector>
using namespace std;

//Function to Convert uppercase characters into lowercase
char toLowerCase (char c) {
    if (c >= 'a' && c <= 'z')
        return c;
    else {
        c = c - 'A' + 'a';
        return c;
    }
}
//Function to calculate string's length
int length(char a[]) {
    int count = 0;
    int i = 0;
    while (a[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
//Function to check whether the string is palindrome or not
bool palindrome(char s[]) {
    int l = 0;
    int h = length(s) - 1;
    while (l <= h) {
        if (s[l] != s[h])
            return false;
        else {
            l++;
            h--;
        }
    }
    return true;
}
//Driver Code
int main()
{
    char s[100];
    cin>>s;
    if (palindrome(s))
        cout<<"True"<<endl;
    else    
        cout<<"False"<<endl;
    return 0;
}