//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        
         int m=a.size();
        int n=b.size();
        
          int i=m-1;
        int j=0;
        
        while(i >= 0 && j < n) {
            if(a[i] >= b[j]) {
                swap(a[i], b[j]);
              i--;
                j++;
            }
            else {
                i--;
            }
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        double ans = ((a[m-1]+b[0]) / 2.0);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        int converted = static_cast<int>(ans);
        if (converted == ans) {
            cout << converted << endl;
        } else {
            cout << fixed << setprecision(1) << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends