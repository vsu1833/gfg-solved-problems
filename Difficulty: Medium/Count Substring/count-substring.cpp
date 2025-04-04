//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
   int countSubstring(string s) {
    int n = s.length();
    int lastA = -1, lastB = -1, lastC = -1;
    long long count = 0;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a') lastA = i;
        else if(s[i] == 'b') lastB = i;
        else if(s[i] == 'c') lastC = i;
        
        if(lastA != -1 && lastB != -1 && lastC != -1) {
            count += min(lastA, min(lastB, lastC)) + 1;
        }
    }
    
    return count;
}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends