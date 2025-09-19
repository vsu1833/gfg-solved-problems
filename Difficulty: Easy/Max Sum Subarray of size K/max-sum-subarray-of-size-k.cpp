class Solution {  
public:    
    int maxSubarraySum(vector<int>& arr, int k) {        
        int n = arr.size();
        if(n < k) {
            return -1;
        }
        
        int currSum = 0, maxSum = 0;
        for(int i = 0; i < k ; i++) {
            currSum += arr[i];
        }
        maxSum = currSum;
        
        for(int i = k; i < arr.size(); i++) {
            currSum = currSum + arr[i] - arr[i-k];
            
            maxSum = max(maxSum, currSum);
        }
        
        return maxSum;
    }
};