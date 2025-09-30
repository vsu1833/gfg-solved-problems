class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int p = 1;
        int ans = 0;
        int size = b.size();
        for(int i = size-1; i >=0; i--)
        {
            if(b[i]=='1')
            {
                ans += p;
                
            }
            
            
                p*=2;
            
        }
        return ans;
    }
};