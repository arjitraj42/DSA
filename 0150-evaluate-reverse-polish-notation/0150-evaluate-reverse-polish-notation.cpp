class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();

        for(int i = 0; i < n; i++) {
            string t = tokens[i];

            if(t == "+" || t == "-" || t == "*" || t == "/") {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();

                if(t == "+") st.push(b + a);
                else if(t == "-") st.push(b - a);
                else if(t == "*") st.push(b * a);
                else st.push(b / a);
            }
            else {
                st.push(stoi(t));
            }
        }

        return st.top();
    }
};