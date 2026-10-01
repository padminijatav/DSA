class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int c:s){
            if(st.empty() || c=='[' || c=='{' || c=='('){
                st.push(c);
            }else {
                if(st.size()==0) return false;
                if(
                    (st.top()=='[' && c==']') ||
                    (st.top()=='(' && c==')') ||
                    (st.top()=='{' && c=='}')
                ) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};