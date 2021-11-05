class Solution {
    int find(string &s, string ss, int p){
        stack<char> st;
        int ans = 0;
        for(int i = 0; i < s.size();i++){
            if(st.size() && st.top() == ss[0] && s[i] == ss[1]){
                ans+=p;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string str = "";
        while(st.size()){
            str+= st.top();
            st.pop();
        }
       reverse(str.begin(),str.end());
        s = str;
        return ans;
    }
public:
    int maximumGain(string s, int x, int y) {
        if(y > x){
            return find(s,"ba",y) + find(s,"ab",x);
        }
        return find(s,"ab",x) + find(s,"ba",y);
        
    }
};
