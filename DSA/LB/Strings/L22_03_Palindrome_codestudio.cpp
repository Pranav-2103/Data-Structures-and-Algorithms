//This question is of code studio checking whether the string is palindrome or not
//Answer

#include <bits/stdc++.h> 
using namespace std;//just to remove errors
//function to convert uppercase into lowercase
char convert(char c) {
    if (c >= 'a' && c <= 'z') {
        return c;
    }
    else if (c >= 'A' && c <= 'Z'){
        c = c - 'A' + 'a';
        return c;
    }
    else
        return c;//if we need to return any character between 0-9
}

bool isPalindrome(string str) { //checking string is palindrome or not
    int s = 0;
    int e = str.size() - 1;
    
    while (s <= e) {
        if (convert(str[s]) == convert(str[e])) {
            s++;
            e--;
        }
        else
            return false;
    }
    return true;
}

bool checkPalindrome(string s) //default function
{
    string ans = "";//creating a new empty string
    for (int i = 0; i <= s.size(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
            ans = ans + s[i];//enetering only aplphanumeric in the newstring
        }
    }
    return isPalindrome(ans);
}