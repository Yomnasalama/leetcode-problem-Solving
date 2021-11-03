class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int k = 0;
        int n = s.size();
        for(int i = 0; i < n;){
            int j = i + 1;
            if(s[i] != s[j]){
                i=j;
                continue;
            }
            int sum = cost[i];
            int ans = cost[i];
            while(j < n && s[i] == s[j]){
                ans = max(ans,cost[j]);
                sum +=cost[j];
                j++;
                
            }
            
            k += (sum - ans);
            i = j;
        }
            
        return k;
        
    }
};
