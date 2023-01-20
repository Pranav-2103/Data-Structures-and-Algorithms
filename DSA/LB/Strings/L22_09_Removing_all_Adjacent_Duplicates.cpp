//1047: removing all adjacent duplicates in a string (leetcode)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) 
                st.push(s[i]);
            else {
                if (st.top() == s[i])
                    st.pop();
                else
                    st.push(s[i]);
            }
        }

        string ans = "";
        while (!st.empty()) {
            char temp = st.top();
            ans.push_back(temp);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};