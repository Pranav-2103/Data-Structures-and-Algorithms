//443. string compression (leetcode)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;//with which we will compare
        int ansIndex = 0;//where we will include its frequency
        int n = chars.size();

        //simply traversing thorugh full array
        while (i < n) {
            int j = i+1;

            //looping till we get some different character or till the array ends
            while (j < n && chars[i] == chars[j])
                j++;

            //storing old character so that it doesn't disappear then increasing ansIndex to store frequency
            chars[ansIndex++] = chars[i];

            //count will tell us the frequency
            int count = j-i;

            //if frequency will be greater than one then only we will write the frequency otherwise not
            if (count > 1) {

                //converting integer frequency into character
                string cnt = to_string(count);

                //traversing through the string of frequency to store it's elements as per required by the question
                for (char ch : cnt) {
                    chars[ansIndex++] = ch;
                }
            }

            i = j;
        }
        //in the end frequency of last element will be stored at ansIndex hence that will be the length of final array
        return ansIndex;
    }
};