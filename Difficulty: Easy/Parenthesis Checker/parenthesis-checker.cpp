//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
stack<char> st;
        unordered_map<char, char> matchingBracket = {{')', '('}, {'}', '{'}, {']', '['}};
        
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);  
            } else {
                if (st.empty() || st.top() != matchingBracket[ch])
                    return false; 
                                    st.pop();  

            }
        }
        return st.empty()     ; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends