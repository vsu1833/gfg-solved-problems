//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends
class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s, string &t) {

        // Your code hereclass Solution {
        if (s.size() != t.size()) {
            return false;
        }
        map<char, char> maps, mapt;
        for (int i = 0; i < s.size(); i++) {
            char charAts = s[i];
            char charAtt = t[i];

            if (maps.find(charAts) == maps.end()){
                maps[charAts] = charAtt;

            } else {

                if (maps[charAts] != charAtt) {
                    return false;
                }
            }
             if (mapt.find(charAtt) == mapt.end()) {
                mapt[charAtt] = charAts;

            } else {

                if (mapt[charAtt] != charAts) {
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends