class Solution {
  public:
    string postToPre(string post_exp) {
        stack<string> st;
        for(char c : post_exp) {
            if(isalnum(c)) {
                st.push(string(1, c));
            } else {
                string op2 = st.top(); st.pop();
                string op1 = st.top(); st.pop();
                string expr = c + op1 + op2;
                st.push(expr);
            }
        }
        return st.top();
    }
};
