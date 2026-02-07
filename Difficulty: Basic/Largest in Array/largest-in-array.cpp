class Solution {
  public:
  
    int recursive_Largest(const vector<int> &arr, int maxi, int i)
    {
        if (i >= arr.size())
            return maxi;

        maxi = max(maxi, arr[i]);
        return recursive_Largest(arr, maxi, i + 1);
    }
  
    int largest(vector<int> &arr) {
        return recursive_Largest(arr, INT_MIN, 0);
    }
};
