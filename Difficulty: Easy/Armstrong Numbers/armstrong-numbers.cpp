// User function Template for C++

class Solution {
  public:
    bool armstrongNumber(int n) {
        int num = n;
        int count = 0;
        int sum  = 0;
        
        while(n > 0) {
            count++;
            n = n / 10;
        }
        
        n = num;
        
        while(n > 0) {
            int digit = n % 10;
            sum += pow(digit, count);
            n = n / 10;
        }
        
        return sum == num;
    }
};
