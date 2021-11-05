class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
            int m = intervals[0][1];
            int ans = 0;
            for(int i = 1; i < intervals.size();i++){
                if(intervals[i][0] < m){
                    ans++;
                    m = min(m,intervals[i][1]);
                }
                else{
                    m = intervals[i][1];
                }
            }
         return ans;
        
    }
};non-overlapping-intervals
