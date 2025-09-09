class Solution {
public:
    // Custom comparator for priority queue
    struct CompareGreater {
        bool operator()(pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b) {
            return a.first > b.first;
        }
    };
    
    vector<int> mergeKArrays(vector<vector<int>>& arr, int K) {
        // Result vector to store merged array
        vector<int> result;
        
        // Min-heap to store {value, {array index, element index}}
        priority_queue<pair<int, pair<int, int>>, 
                       vector<pair<int, pair<int, int>>>, 
                       CompareGreater> minHeap;
        
        // Push first element of each array into the min-heap
        for (int i = 0; i < K; i++) {
            if (!arr[i].empty()) {
                minHeap.push({arr[i][0], {i, 0}});
            }
        }
        
        // Process the min-heap
        while (!minHeap.empty()) {
            // Get the minimum element
            auto top = minHeap.top();
            minHeap.pop();
            
            int val = top.first;
            int arrIndex = top.second.first;
            int elemIndex = top.second.second;
            
            // Add to result
            result.push_back(val);
            
            // If more elements in the same array, push next element
            if (elemIndex + 1 < arr[arrIndex].size()) {
                minHeap.push({
                    arr[arrIndex][elemIndex + 1], 
                    {arrIndex, elemIndex + 1}
                });
            }
        }
        
        return result;
    }
};