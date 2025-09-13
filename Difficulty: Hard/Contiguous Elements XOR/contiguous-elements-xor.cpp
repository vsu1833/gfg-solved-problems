// arr : given array
// n : size of the given array
class Solution {
    struct TrieNode {
        TrieNode* child[2];
        TrieNode() {
            child[0] = child[1] = nullptr;
        }
    };
    
    TrieNode* root;
    
    // Insert a number into the Trie
    void insert(int num) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (!node->child[bit]) {
                node->child[bit] = new TrieNode();
            }
            node = node->child[bit];
        }
    }
    
    // Query the Trie to find max XOR with given num
    int query(int num) {
        TrieNode* node = root;
        int maxNum = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            int opposite = 1 - bit;
            if (node->child[opposite]) {
                maxNum |= (1 << i);
                node = node->child[opposite];
            } else {
                node = node->child[bit];
            }
        }
        return maxNum;
    }
    
  public:
    // Function to return maximum XOR value.
    int maxSubarrayXOR(int arr[], int n) {
        root = new TrieNode();
        
        int prefixXor = 0, result = 0;
        insert(0); // handle subarray starting at index 0
        
        for (int i = 0; i < n; i++) {
            prefixXor ^= arr[i];          // prefix XOR up to index i
            insert(prefixXor);            // insert into trie
            result = max(result, query(prefixXor)); // find best XOR so far
        }
        
        return result;
    }
};
