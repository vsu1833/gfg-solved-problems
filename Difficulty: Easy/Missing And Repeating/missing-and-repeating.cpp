//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
 vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    int duplicate = -1,missing = -1;
    vector<bool>seen(n + 1, false);
    
    for (int i = 0; i < n; ++i) {
        if (seen[arr[i]]) {
            duplicate = arr[i];
        }
        seen[arr[i]] = true;
}

    for (int i = 1;i <= n; ++i) {
        if (!seen[i]) {
            missing = i;
        break;
       }
    }

    return {duplicate, missing};
}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends