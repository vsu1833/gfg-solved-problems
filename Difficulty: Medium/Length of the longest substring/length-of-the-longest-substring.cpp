//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        unordered_map<char, int> mpp;
        int len = 0;
        int maxlen = 0;
        int start = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if(mpp.find(s[i]) != mpp.end() && mpp[s[i]] >= start) {
                start = mpp[s[i]] + 1;
                len = i - start + 1;
            } else {
                len++;
            }
            mpp[s[i]] = i;
            maxlen = max(len, maxlen);
        }
        return maxlen;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.longestUniqueSubstring(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends