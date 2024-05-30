class Solution {
public:
    string removeOuterParentheses(string s) {
    string store = "";
    stack <string> st;

    for(char c:s){
        if(c == '('){
            if(!st.empty())
            store += "(";

        st.push("(");
        }
        else{
            st.pop();
            if(!st.empty())
            store += ")";
        }
    }

    return store;
    }
};