class Solution {
  public:
    int countSquare(vector<vector<int>>& mat, int x) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<long long>> pre(n, vector<long long>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                pre[i][j] = mat[i][j];
                if (i > 0) pre[i][j] += pre[i-1][j];
                if (j > 0) pre[i][j] += pre[i][j-1];
                if (i > 0 && j > 0) pre[i][j] -= pre[i-1][j-1];
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int len = 1; i+len-1 < n && j+len-1 < m; len++) {
                    int r2 = i+len-1, c2 = j+len-1;
                    long long sum = pre[r2][c2];
                    if (i > 0) sum -= pre[i-1][c2];
                    if (j > 0) sum -= pre[r2][j-1];
                    if (i > 0 && j > 0) sum += pre[i-1][j-1];
                    if (sum == x) count++;
                }
            }
        }
        return count;
    }
};
