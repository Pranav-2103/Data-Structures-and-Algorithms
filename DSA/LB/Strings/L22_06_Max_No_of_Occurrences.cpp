//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        char frequency [30] = {0};
        for (int i = 0; i<str.size(); i++) {
            frequency[str[i]-'a']++;
        }
        int maxi = frequency[0];
        int maxIndex = 0;
        for (int i = 1; i<30; i++) {
            if (frequency[i] > maxi) {
                maxi = frequency[i];
                maxIndex = i;
            }
        }
        char ans = maxIndex + 'a';
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends