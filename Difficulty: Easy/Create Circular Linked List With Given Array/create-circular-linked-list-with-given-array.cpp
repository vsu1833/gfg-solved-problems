/*class Node {
  public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* circularLinkedList(vector<int>& arr) {
        // code here
        if (arr.empty()) {
            return NULL;
        }

        Node* head = new Node(arr[0]);
        Node* current = head;

        for (int i = 1; i < arr.size(); ++i) {
            current->next = new Node(arr[i]);
            current = current->next;
        }

        current->next = head; // Make it circular

        return head;
    }
};