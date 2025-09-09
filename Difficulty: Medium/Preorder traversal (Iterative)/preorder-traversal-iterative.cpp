// User function Template for C++
/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }

        stack<Node*> nodeStack;
        nodeStack.push(root);

        while (!nodeStack.empty()) {
            Node* node = nodeStack.top();
            nodeStack.pop();
            result.push_back(node->data);

            if (node->right) {
                nodeStack.push(node->right);
            }
            if (node->left) {
                nodeStack.push(node->left);
            }
        }
        return result;
    }
};