// User function Template for C++

/*
class Node {
public:
    int key;
    vector<Node*> children;

    Node(int key, vector<Node*> children = {}) {
        this->key = key;
        this->children = children;
    }

    string toString() {
        return to_string(key);
    }
};
*/class Solution {
  public:
    unordered_map<string,int> mp;
    int count = 0;
    
    string serialize(Node* root) {
        if (!root) return "";
        
        string s = to_string(root->data) + "(";
        for (auto child : root->children) {
            s += serialize(child) + ",";
        }
        s += ")";
        
        if (++mp[s] == 2) count++;
        
        return s;
    }
    
    int duplicateSubtreeNaryTree(Node *root) {
        mp.clear();
        count = 0;
        serialize(root);
        return count;
    }
};
