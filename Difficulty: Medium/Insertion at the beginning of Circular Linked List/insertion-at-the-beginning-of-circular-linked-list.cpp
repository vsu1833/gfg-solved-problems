/*class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* insertAtBeginning(Node* tail, int key) {
        // code here
        Node* newNode = new Node(key);

        if (tail == NULL) {
            newNode->next = newNode;
            return newNode;
        }

        newNode->next = tail->next;
        tail->next = newNode;
        return newNode;
    }
};