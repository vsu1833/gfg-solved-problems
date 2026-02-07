class Solution {
  public:
  
    int findFirst(vector<int>& arr, int x, int i) {
        if (i == arr.size())
            return -1;

        if (arr[i] == x)
            return i;

        return findFirst(arr, x, i + 1);
    }

    int findLast(vector<int>& arr, int x, int i) {
        if (i == arr.size())
            return -1;

        int res = findLast(arr, x, i + 1);

        if (arr[i] == x && res == -1)
            return i;

        return res;
    }

    vector<int> find(vector<int>& arr, int x) {
        int first = findFirst(arr, x, 0);
        int last  = findLast(arr, x, 0);
        return {first, last};
    }
};
