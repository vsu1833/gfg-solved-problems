/*
class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
        isEndOfWord = false;
    }
};
*/class Solution {
  public:
    int wordCount(TrieNode* root) {
        if (!root) return 0;
        int cnt = root->isLeaf ? 1 : 0; // replace isLeaf with the actual end-of-word field
        for(int i = 0; i < 26; i++) {
            if(root->children[i])
                cnt += wordCount(root->children[i]);
        }
        return cnt;
    }
};
