class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> mp;
        for(int i = 0;i < s.size();i++){
            mp[s[i]] = i;
        }
        int end = 0; 
        int start  = 0;
        vector<int> res;
        for(int i = 0; i < s.size();i++){
            end = max(end,mp[s[i]]);
            if(i == end){
                res.push_back(end - start + 1);
                start = end +1;
            }
        }
        return res;
        
    }
};
