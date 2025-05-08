//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int m = a.size();
        int n = b.size();
        
        vector<int> ans;
        
        int i=0;
        int j=0;
        
        while(i < m && j < n)  {
            if(a[i] < b[j]) {
                ans.push_back(a[i]);
                i++;
            }
            else {
                ans.push_back(b[j]);
                j++;
            }
        }
        
        while(i < m) {
             ans.push_back(a[i]);
                i++;
        }
        
        while(j < n) {
             ans.push_back(b[j]);
                j++;
        }
        
        //put the elements ans in the array a and b
        i=0;
        while(i < m) {
            a[i] = ans[i];
            i++;
        }
        j=0;
        while(j < n) {
            b[j] = ans[i];
            j++;
            i++;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Inputting the test cases

    while (t--) {
        vector<int> a, b;

        // Reading the first array as a space-separated line
        string arr1;
        getline(cin >> ws, arr1); // Use ws to ignore any leading whitespace
        stringstream ss1(arr1);
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        // Reading the second array as a space-separated line
        string arr2;
        getline(cin, arr2);
        stringstream ss2(arr2);
        while (ss2 >> num) {
            b.push_back(num);
        }

        Solution ob;
        ob.mergeArrays(a, b);

        // Output the merged result
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends