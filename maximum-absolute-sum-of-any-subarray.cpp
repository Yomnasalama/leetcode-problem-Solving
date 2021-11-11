class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        int m = 0;
        for(int i = 0; i < nums.size();i++){
            pos += nums[i];
            neg += nums[i];
            m = max(m,max(pos,abs(neg)));
            if(pos < 0)
                pos = 0;
            if(neg > 0)
                neg = 0;
        }
        return m;
    }
};
