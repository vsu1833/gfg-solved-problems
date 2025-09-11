class Solution {
  public:
    int findminoperation(int n) {
        int ans = 0;
        for(int i = 2; i <= n; i++) {
            while(n % i == 0) {
                ans += i;
                n /= i;
            }
        }
        return ans;
    }
};
