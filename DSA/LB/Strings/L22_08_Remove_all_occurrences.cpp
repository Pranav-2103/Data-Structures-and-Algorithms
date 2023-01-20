#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.find(part) != -1)
            s.erase(s.find(part), part.size());
        return s;
    }
};