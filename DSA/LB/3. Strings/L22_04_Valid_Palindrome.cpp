//125. ValidPalindrome : leetcode (this question is totally same as previous one)

char toLowerCase (char c) {
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (int i = 0; i<s.size(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                str += s[i];
        }

        int start = 0;
        int end = str.size() - 1;

        while (start <= end) {
            if (toLowerCase(str[start]) != toLowerCase(str[end]))
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;

    }
};