class Solution {
    int tileNo = 1; // global counter for unique tile IDs
    
    void solve(vector<vector<int>> &grid, int n, int row, int col, int missingR, int missingC) {
        if (n == 2) {
            // Base case: directly fill the 2x2 grid
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    if (row + i != missingR || col + j != missingC) {
                        grid[row + i][col + j] = tileNo;
                    }
                }
            }
            tileNo++;
            return;
        }
        
        int mid = n / 2;
        int centerR = row + mid;
        int centerC = col + mid;
        
        // Identify which quadrant contains the missing cell
        int quad = (missingR < centerR ? 0 : 2) + (missingC < centerC ? 0 : 1);
        
        // Place a tromino at the center covering 3 quadrants
        // For each quadrant, define its "artificial missing cell"
        vector<pair<int,int>> centers = {
            {centerR - 1, centerC - 1}, // top-left
            {centerR - 1, centerC},     // top-right
            {centerR, centerC - 1},     // bottom-left
            {centerR, centerC}          // bottom-right
        };
        
        for (int i = 0; i < 4; i++) {
            if (i != quad) {
                auto [r, c] = centers[i];
                grid[r][c] = tileNo;
            }
        }
        tileNo++;
        
        // Recurse on all 4 quadrants
        solve(grid, mid, row, col,
              (quad == 0 ? missingR : centers[0].first),
              (quad == 0 ? missingC : centers[0].second));
        
        solve(grid, mid, row, col + mid,
              (quad == 1 ? missingR : centers[1].first),
              (quad == 1 ? missingC : centers[1].second));
        
        solve(grid, mid, row + mid, col,
              (quad == 2 ? missingR : centers[2].first),
              (quad == 2 ? missingC : centers[2].second));
        
        solve(grid, mid, row + mid, col + mid,
              (quad == 3 ? missingR : centers[3].first),
              (quad == 3 ? missingC : centers[3].second));
    }
    
  public:
    void fillTile(int n, vector<vector<int>> &grid) {
        // Find the initial missing cell
        int missingR = -1, missingC = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == -1) {
                    missingR = i;
                    missingC = j;
                }
            }
        }
        solve(grid, n, 0, 0, missingR, missingC);
    }
};
