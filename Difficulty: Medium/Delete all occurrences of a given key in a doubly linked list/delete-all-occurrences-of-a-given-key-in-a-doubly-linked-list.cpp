// User function Template for C++
/* a Node of the doubly linked list
struct Node{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */
class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int x) {
        Node* temp = *head;

        while (temp != NULL) {
            if (temp->data == x) {
                Node* todelete = temp;
                Node* nextNode = temp->next; 

                if (todelete == *head) {
                    *head = todelete->next;
                    if (*head) (*head)->prev = NULL;
                } 
                else {
                    todelete->prev->next = todelete->next;
                    if (todelete->next) {
                        todelete->next->prev = todelete->prev;
                    }
                }

                delete todelete;
                temp = nextNode; 
            } 
            else {
                temp = temp->next;
            }
        }
    }
};
