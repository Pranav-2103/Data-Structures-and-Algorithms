// 151. Reverse words in string (leetcode)
// TC = O(N^2) and SC = O(1)
// can be optimised with the help of stack where TC will be O(N) and SC will be O(N)
#include<iostream>
#include<string>
using namespace std;

void Reverse(string &str) {
    int s = 0;
    int e = str.size() - 1;

    while (s <= e) {
        swap(str[s++], str[e--]);
    }
}

void swapWord(string &str, int s, int e) {
    while (s <= e) {
        swap(str[s++], str[e--]);
    }
}

void answer (string &str) {
    str.push_back(' ');
    int i = 0;
    int j = 0;

    while (j < str.size()) {
        
        if (str[i] == ' ') {
            str.erase(str.begin() + i);
        }

        else if (str[j] != ' ') {
            j++;
        }
        else {
            swapWord(str,i,j-1);
            i = j+1;
            j = i;
        }
    }
    str.pop_back();
}

int main()
{
    string str;
    getline(cin,str);
    answer(str);
    Reverse(str);

    cout<<str;
    return 0;
}