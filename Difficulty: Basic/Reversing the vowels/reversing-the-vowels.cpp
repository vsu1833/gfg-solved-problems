//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string modify(string& s)
    {
     int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            bool isVowelI = (s[i] == 'a'||s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U');
            bool isVowelJ = (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
                           s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U');
            if (isVowelI && isVowelJ) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (isVowelI) {
                j--;
            }
            else {
                i++;
            }
        }
        return s;
}
}
;


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.modify(s) << endl;

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends