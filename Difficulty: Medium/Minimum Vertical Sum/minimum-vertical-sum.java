// User function Template for Java
class Solution {
    public static int minimumVerticalSum(ArrayList<ArrayList<Integer>> arr) {
        // Step 1: Find maximum number of columns
        int maxCols = 0;
        for (ArrayList<Integer> row : arr) {
            maxCols = Math.max(maxCols, row.size());
        }

        // Step 2: Initialize column sum array
        int[] colSum = new int[maxCols];

        // Step 3: Calculate vertical sums
        for (ArrayList<Integer> row : arr) {
            for (int j = 0; j < row.size(); j++) {
                colSum[j] += row.get(j);
            }
        }

        // Step 4: Find minimum sum
        int minSum = Integer.MAX_VALUE;
        for (int sum : colSum) {
            minSum = Math.min(minSum, sum);
        }

        return minSum;
    }
}
