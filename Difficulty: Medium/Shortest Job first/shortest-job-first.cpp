class Solution {
  public:
      int solve(vector<int>& bt) {
        // code here
        int t = 0, wt= 0;
        sort(bt.begin(),bt.end());
        for(int i = 0; i < bt.size(); i++)
        {
            wt += t;
            t += bt[i];
        }
        return wt/bt.size();
    }
};