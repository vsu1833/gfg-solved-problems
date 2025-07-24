// User function Template for C++

class Solution {
  public:
    bool canShip(int arr[], int n, int capacity, int days) {
        int currLoad = 0, neededDays = 1;
        for (int i = 0; i < n; i++) {
            if (currLoad + arr[i] > capacity) {
                neededDays++;
                currLoad = 0;
            }
            currLoad += arr[i];
        }
        return neededDays <= days;
    }

    int leastWeightCapacity(int arr[], int n, int d) {
        int left = *max_element(arr, arr + n);
        int right = accumulate(arr, arr + n, 0);
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canShip(arr, n, mid, d)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
