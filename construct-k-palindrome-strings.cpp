class Solution {
public:
    bool canConstruct(string s, int k) {
        vector<int> ch(26,0);
        int od = 0;
        if(k > s.size())
            return false;
        for(int i = 0; i < s.size();i++){
            ch[s[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(ch[i] % 2 == 1){
                od++;
            }
        }        
        if(od > k)
            return false;
        return true;
    }
};
