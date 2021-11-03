class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n = values.size();
        vector<vector<int>> val;
        for ( int i = 0; i < n; i++ ) {
            val.push_back({values[i], labels[i]});
        }
        sort(val.begin(), val.end());
        unordered_map<int, int> mp;
        vector<int>ans;
        for(int i = n-1; i >=0;i--){
            if(ans.size() < numWanted){
                if(mp[val[i][1]] < useLimit){
                    ans.push_back(val[i][0]);
                    mp[val[i][1]]++;
                }
            }
            else
                break;
        }
        int k = 0;
        for(int i = 0; i < ans.size();i++){
            k+=ans[i];
        }
        return k;
        
    }
};
