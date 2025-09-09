// User function Template for C++
template <class T>
T largest(T arr[], int n) {
    T max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}