//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &haystack, string &needle) {
     
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0; 

        for (int i = 0; i <= n - m; i++) {  
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) return i;
        }
        return -1;  
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;

        cin >> a;
        cin >> b;
        Solution ob;
        cout << ob.firstOccurence(a, b) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends