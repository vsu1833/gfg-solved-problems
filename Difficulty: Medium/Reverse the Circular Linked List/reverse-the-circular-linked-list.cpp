class Solution {
  public:
    Node* reverseCircular(Node* head) {
        if (head == NULL || head->next == head) {
            return head;
        }

        Node* prev = head;
        Node* current = head->next;

        while (current != head) {
            Node* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head->next = prev;  // Restore circular link
        return prev;        // New head after reversal
    }
};
