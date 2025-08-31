class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int left = 0 , right = 0 ;
        int sum = 0;
        while(right<arr.size())
        {
            sum = sum + arr[right];
            while(sum>target)
            {
                sum = sum - arr[left];
                left++;
            }
            if(sum == target)
            {
                return {left+1, right+1};
            }
            right++;
           
        }
        return {-1};
    }
};