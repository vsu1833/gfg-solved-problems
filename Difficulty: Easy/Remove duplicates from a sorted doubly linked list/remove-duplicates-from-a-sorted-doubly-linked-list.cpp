/*struct Node{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }};*/
class Solution {
  public:
    Node *removeDuplicates(struct Node *head) {
        // Your code here
        if (head == NULL || head->next == NULL) {
            return head;
        }

        Node* current = head;
        while (current != NULL && current->next != NULL) {
            if (current->data == current->next->data) {
                Node* duplicate = current->next;
                current->next = current->next->next;
                if (current->next != NULL) {
                    current->next->prev = current;
                }
                delete duplicate;
            } else {
                current = current->next;
            }
        }
        return head;
    }
};