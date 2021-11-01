class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st;
        int k = 0;
        for(int i = 0; i < s.length();i++){
            if(s[i] == '(')
                st.push(s[i]);
            else if (s[i] == ')' && st.size() != 0){
                if(st.top() =='(' )
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        return st.size();
    }
};
