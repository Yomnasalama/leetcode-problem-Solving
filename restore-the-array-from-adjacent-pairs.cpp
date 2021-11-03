class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>> adj;
        vector<int>res;
        int l;
        for(int i = 0; i < adjacentPairs.size();i++){
            adj[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            adj[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        
        for(auto e : adj){
            if(e.second.size() == 1){
                l = e.first;
                break;
            }
                
        }
        queue<int> q;
        set<int> vis;
        q.push(l);
        vis.insert(l);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            res.push_back(u);
            for(auto j: adj[u]){
                if(vis.find(j) == vis.end()){
                    q.push(j);
                    vis.insert(j);
                }
            }
        }
        return res;
    }
};
