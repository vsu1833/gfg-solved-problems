//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // k is the maximum number of zeros allowed to flip
    int maxOnes(vector<int>& arr, int k) {
    int left = 0, right = 0, zeroes = 0, maxlen = 0;

    while (right < arr.size()) {
        if (arr[right] == 0) 
            zeroes++;

        while (zeroes > k) {
            if (arr[left] == 0) 
                zeroes--;
            left++;
        }

        maxlen=max(maxlen, right - left + 1);
        right++;
    }

    return maxlen;
}

};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int m;
        cin >> m;
        cin.ignore();

        Solution obj;
        int ans = obj.maxOnes(arr, m);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends