//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int left=0 , right = nums.size()-1;
   while(left<right)
   {
    int sum = nums[left] + nums[right] ;
    if(sum==target)
    {
        return true;
    }
    if(target<sum)
    {
        right--;
    }
    else
    {
        left++;
    }
   }
   return false;

    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends