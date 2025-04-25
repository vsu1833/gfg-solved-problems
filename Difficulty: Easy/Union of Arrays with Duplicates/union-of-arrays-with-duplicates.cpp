//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template in C++

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
  
   int findUnion(vector<int>& a, vector<int>& b) {
    // Sort the arrays to enable two-pointer approach
    vector<int> sorted_a = a;
    vector<int> sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
    
    int i = 0, j = 0;
    vector<int> unionArray;
    int n = sorted_a.size(), m = sorted_b.size();

    while (i < n && j < m) {
        if (sorted_a[i] < sorted_b[j]) {
            // Add a[i] if unionArray is empty or a[i] differs from last added element
            if (unionArray.empty() || unionArray.back() != sorted_a[i]) {
                unionArray.push_back(sorted_a[i]);
            }
            i++;
        } else if (sorted_a[i] > sorted_b[j]) {
            // Add b[j] if unionArray is empty or b[j] differs from last added element
            if (unionArray.empty() || unionArray.back() != sorted_b[j]) {
                unionArray.push_back(sorted_b[j]);
            }
            j++;
        } else {
            // Equal elements: add one instance and advance both pointers
            if (unionArray.empty() || unionArray.back() != sorted_a[i]) {
                unionArray.push_back(sorted_a[i]);
            }
            i++;
            j++;
        }
    }

    // Process remaining elements in a
    while (i < n) {
        if (unionArray.empty() || unionArray.back() != sorted_a[i]) {
            unionArray.push_back(sorted_a[i]);
        }
        i++;
    }

    // Process remaining elements in b
    while (j < m) {
        if (unionArray.empty() || unionArray.back() != sorted_b[j]) {
            unionArray.push_back(sorted_b[j]);
        }
        j++;
    }

    return unionArray.size();
}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    while (t--) {
        vector<int> a;
        vector<int> b;

        string input;
        // For a
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // For b
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        cout << ob.findUnion(a, b) << endl;
        cout << '~' << endl;
    }

    return 0;
}
// } Driver Code Ends