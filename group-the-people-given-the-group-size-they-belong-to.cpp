class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        unordered_map<int,vector<int>>mp;
          vector <vector<int>> res;
        for(int i = 0; i < g.size();i++){
            if(mp[g[i]].size() < g[i]){
                mp[g[i]].push_back(i);
            }
            else{
                res.push_back(mp[g[i]]);
                mp.erase(g[i]);
                mp[g[i]].push_back(i);
            }
        }
      
        for(auto e : mp){
            res.push_back(e.second);
        }
        return res;
        
    }
};
