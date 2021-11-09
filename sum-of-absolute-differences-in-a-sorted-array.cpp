class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int a = 0;
        for(int i = 0; i < nums.size();i++){
            a += nums[i];
        }
        vector<int> res;
        int l = 0;
        for(int i = 0; i < nums.size(); i++){
            a-= nums[i];
            int ri = (nums.size() - i - 1);
            int r = a - (nums[i] * ri) + ((i*nums[i]) - l);
            l += nums[i];
            res.push_back(r);
            
        }
        return res;
        
    }
};
