class Solution {
  public:
    int countPairs(vector<string>& arr) {
        unordered_map<string, unordered_map<int,int>> mp;
        int ans = 0;

        for (auto &s : arr) {
            int m = s.size();
            for (int i = 0; i < m; i++) {
                string t = s.substr(0,i) + s.substr(i+1);
                if (mp[t].count(i)) ans += mp[t][i];
                mp[t][i]++;
            }
        }
        return ans;
    }
};
