//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string ans;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]=='(')
            {
               if(count!=0)
               {
                   ans+=s[i];
               }
               count++;
            }
            else if(s[i]==')')
            {
                                count--;

                if(count!=0)
                {
                   ans+=s[i];
                 }
            }
        }
        return ans;
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

        cout << obj.removeOuter(s) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends