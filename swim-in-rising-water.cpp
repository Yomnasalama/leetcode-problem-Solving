class Solution {
public:
     #define pii pair<int, pair<int,int>>
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
        priority_queue <pii, vector<pii>, greater<pii>> pq;
        vector<vector<bool>> v(n,vector<bool>(n,false));
        pq.push({grid[0][0],{0,0}});
        int w  = 0;
        while(!pq.empty()){
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            w = max(w,pq.top().first);
            pq.pop();
            v[x][y] = 1;
            
            if(x == n-1 && y == n-1)
                return w;
            for(int i = 0; i < 4; i++){
                int newx = dir[i][0] + x;
                int newy = dir[i][1] + y;
                
                if(newx < 0 || newy < 0 || newx >= n || newy >= n || v[newx][newy] == 1)
                    continue;
                else{
                    pq.push({grid[newx][newy],{newx,newy}});
                }
            }
        }
        return 0;
        
    }
};
