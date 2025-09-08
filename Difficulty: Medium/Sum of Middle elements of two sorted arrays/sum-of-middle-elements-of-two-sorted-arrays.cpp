// User function template for C++
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        int i = 0, j = 0, k = 0;
        int m1 = -1, m2 = -1;
        for (int count = 0; count <= n; count++) {
            if (i == n) {
                m1 = m2;
                m2 = arr2[j];
                j++;
            }
            else if (j == n) {
                m1 = m2;
                m2 = arr1[i];
                i++;
            }
            else if (arr1[i] <= arr2[j]) {
                m1 = m2;
                m2 = arr1[i];
                i++;
            }
            else {
                m1 = m2;
                m2 = arr2[j];
                j++;
            }
        }
        return m1 + m2;
    }
};