class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
       unordered_map<long long, long long> freq;
    long long sum = 0, count = 0;

    freq[0] = 1; 

    for (auto x : arr) {
        sum += x;

        if (freq.find(sum) != freq.end()) {
            count += freq[sum]; 
        }

        freq[sum]++; 
    }

    return count;
    }
};