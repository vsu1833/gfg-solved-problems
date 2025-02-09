//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
 
bool hasTripletSum(std::vector<int> &arr, int target) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        unordered_set<int> hashset;  
        
        for (int j = i + 1; j < n; j++) {
            int third = target - (arr[i] + arr[j]);  
            
            if (hashset.find(third) != hashset.end()) {
                return true;  
            }
            hashset.insert(arr[j]);
        }
    }
    return false;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        bool result = solution.hasTripletSum(arr, target);
        cout << (result ? "true" : "false") << "\n";
    }

    return 0;
}
// } Driver Code Ends