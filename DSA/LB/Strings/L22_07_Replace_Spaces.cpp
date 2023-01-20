//codestudio Question replace spaces
#include <bits/stdc++.h> 
using namespace std;

//approach having TC: O(N) and SC: O(N)
string replaceSpaces(string &str){
	// Write your code here.
    string temp = "";
    for (int i = 0; i<str.size(); i++) {
        if (str[i] != ' '){
            temp.push_back(str[i]);
        }
        else{
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
    }
    return temp;
}