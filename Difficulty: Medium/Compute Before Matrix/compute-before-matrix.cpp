class Solution {
  public:
    vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after) {
        vector<vector<int>> before(N, vector<int>(M));
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                before[i][j] = after[i][j];
                if(i > 0) before[i][j] -= after[i-1][j];
                if(j > 0) before[i][j] -= after[i][j-1];
                if(i > 0 && j > 0) before[i][j] += after[i-1][j-1];
            }
        }
        return before;
    }
};
