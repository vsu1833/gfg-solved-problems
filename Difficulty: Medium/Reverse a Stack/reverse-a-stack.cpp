class Solution {
  public:
    // helper: insert element at the bottom of stack
    void insertAtBottom(stack<int> &St, int x) {
        if (St.empty()) {
            St.push(x);
            return;
        }
        
        int top = St.top();
        St.pop();
        
        insertAtBottom(St, x);
        
        St.push(top);
    }
    
    // main: reverse the stack recursively
    void reverse(stack<int> &St) {
        if (St.empty()) return;
        
        int top = St.top();
        St.pop();
        
        // reverse the smaller stack
        reverse(St);
        
        // insert current element at the bottom
        insertAtBottom(St, top);
    }
};
