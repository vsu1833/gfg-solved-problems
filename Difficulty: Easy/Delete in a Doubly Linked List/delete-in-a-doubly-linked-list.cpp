/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if (head == nullptr) return nullptr;

        Node* temp = head;
        int cnt = 1;
        while (temp != nullptr && cnt < x) {
            temp = temp->next;
            cnt++;
        }

        if (temp == nullptr) return head;

        if (temp == head) {
            head = head->next;
            if (head != nullptr) head->prev = nullptr;
            delete temp;
            return head;
        }

        if (temp->next == nullptr) {
            temp->prev->next = nullptr;
            delete temp;
            return head;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;

        return head;
    }
};
