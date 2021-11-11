class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> ch(26,0);
        vector<int> vis(26,0);
        for(int i = 0; i < s.size();i++)
            ch[s[i] - 'a'] = i;
        stack<char> st;
        for(int i = 0; i < s.size();i++){
            bool flag = false;
            if(vis[s[i] - 'a'] == 1)
                continue;
            while(!st.empty()&&st.top() > s[i] && ch[st.top() - 'a'] > i){
                vis[st.top() - 'a'] = 0;
                st.pop();
                flag = true;
            }
                st.push(s[i]);
                vis[s[i] - 'a'] = 1;
        }
        string res = "";
        while(!st.empty()){
            res+= st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
