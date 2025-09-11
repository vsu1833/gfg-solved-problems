class Solution {
  public:
    vector<vector<int>> spiralFill(int n, int m, vector<int> &arr) {
        vector<vector<int>> mat(n, vector<int>(m));
        int top = 0, bottom = n - 1, left = 0, right = m - 1;
        int idx = 0;

        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++) mat[top][j] = arr[idx++];
            top++;
            for (int i = top; i <= bottom; i++) mat[i][right] = arr[idx++];
            right--;
            if (top <= bottom) {
                for (int j = right; j >= left; j--) mat[bottom][j] = arr[idx++];
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) mat[i][left] = arr[idx++];
                left++;
            }
        }
        return mat;
    }
};
