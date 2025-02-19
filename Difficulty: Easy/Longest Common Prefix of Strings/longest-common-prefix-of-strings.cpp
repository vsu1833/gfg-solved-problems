//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string>strs) {
         if (strs.empty()) return "";
         int n = strs.size();
         sort(strs.begin() , strs.end());
         string start = strs[0];
         string end = strs[n-1];
         string ans;
         for(int i = 0 ; i < min(start.size(),end.size()); i++)
         {
            if(start[i]==end[i])
            {
                ans=ans+start[i];
            }
            else
            break;
         }
         return ans;
       
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends